/*
    Schroeder 0.2 (Development Release 2)
    Copyright (C) 1998 David Veldhuizen <david@interlog.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/


package schroeder;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.StringTokenizer;

public class SampleRateAction
		extends MonitoredAction
	{
	public static SampleRateAction instance() {
		if( instance_ == null ) {
			instance_ = new SampleRateAction();
		}
		
		return( instance_ );
	}
	
	private SampleRateAction() {
		super(
			"Sample Rate...",
			new SampleRateIcon()
		);
	
		ActionManager.instance().add( this );
	}
	
	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null );
	}

	public String getNote() {
		return( "Resampling audio data..." );
	}

	public boolean mustReplaceAll() {
		return( true );
	}
	
	public SoundModel transform(
				SoundModel model,
				PlugInParameters param,
				ProgressMonitor monitor,
				int progressPre,
				int progressSize
			)
		{
		SoundModel newModel = null;
		boolean canceled = false;		

		int newRate = model.getSampleRate();
		boolean keepAliasing = false;
		boolean resampleRequested = false;

		try {
			// parse parameters
			newRate = Integer.parseInt(
				param.get( "SampleRateAction.sampleRate" )
			);
			keepAliasing =
				(	Boolean.valueOf(
						param.get( "SampleRateAction.aliasingRequested" )
					)
				).booleanValue()
			;
			resampleRequested =
				(	Boolean.valueOf(
						param.get( "SampleRateAction.resampleRequested" )
					)
				).booleanValue()
			;

			if( ! canceled && ! resampleRequested ) {
				newModel = model.getCopyAll();
				newModel.setSampleRate( newRate );
			}
			else {
				int oldRate = model.getSampleRate();
				double dOldRate = (double) oldRate;
				double dNewRate = (double) newRate;
		
				int oldNumFrames = model.getNumSampleFrames();
				int numBytes = model.getBytesPerSample();
				int numChannels = model.getNumChannels();
				
				// for averaging
				int numSamplesToAvg = (int) Math.ceil( dOldRate / dNewRate );
		
				// preserve the total playing time
				double time =
						(double) oldNumFrames
					/	dOldRate
				;
				
				// ...at the new sample rate
				int newNumFrames = (int) Math.round(
						time
					*	dNewRate
				);
		
				// for monitor
				int mDen = numChannels * newNumFrames;
				int mNum = 0;
		
				// create a new byte[] array of the correct length
				newModel = new SoundModel(
					numChannels,
					newNumFrames,
					model.getSampleSize(),
					newRate
				);
		
				// fill the array with approximations from the existing data
				for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
					for( int i=0; ! canceled && i<newNumFrames; i++ ) {
						// find the nearest sample
						double t = 
								(double) i
							/	dNewRate
						;
						int nearest = (int) ( t * dOldRate );
						
						int sample = 0;
						if( nearest < oldNumFrames ) {
							sample = model.getSample( ch, nearest );
						}
						
						if( newRate < oldRate && ! keepAliasing ) {
							// average samples if downsampling
							int div = 1;
							for( int j=1, k=1; j<numSamplesToAvg; j++ ) {
								if( j % 2 != 0 ) {
									if( nearest+k < oldNumFrames ) {
										sample += model.getSample( ch, nearest+k );
										div++;
									}
								}
								else {
									if( nearest-k >= 0 ) {
										sample += model.getSample( ch, nearest-k );
										div++;
									}
									k++;
								}
							}
							
							sample = (int) Math.round( (double) sample / (double) div );
						}
						else {
							// if adding samples, this sample is proportionally
							// between the nearest and the next
							double error = ( t * dOldRate ) - (double) nearest;
							int diff = 0;
							if( nearest+1 < oldNumFrames ) {
								diff = model.getSample( ch, nearest+1 ) - sample;
							}
							sample += (int) Math.round( (double) diff * error );
						}
						
						// store it and move on
						newModel.setSample( ch, i, sample );
						
						if( monitor != null ) {
							monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
							canceled = monitor.isCanceled();
						}
					}
				}
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			canceled = true;
		}
		
		if( monitor != null ) {
			monitor.setProgress( progressPre + progressSize );
		}

		return( newModel );
	}
	
	public PlugInParameters getCustomParameters( SoundWindow active, int inputChannelCount ) {
		PlugInParameters param = new PlugInParameters();

		try {
			SoundModel model = active.getModel();
		
			int newRate = 0;

			boolean canceled = false;
			while( ! canceled && newRate <= 0 ) {
				JDialog dialog = new JDialog(
					MainFrame.instance(),
					"Change Sample Rate",
					true
				);
				SampleRatePanel pane = new SampleRatePanel(
					model.getSampleRate(),
					dialog
				);
				dialog.getContentPane().add( pane );
				dialog.pack();
				dialog.setLocationRelativeTo( active );
				dialog.show();
				
				canceled = pane.isCanceled();
				if( ! canceled ) {
					newRate = pane.getSampleRate();
					if( newRate <= 0  ) {
						JOptionPane.showMessageDialog(
							active,
							"Please enter a sample rate greater than 0.",
							"Invalid Sample Size",
							JOptionPane.WARNING_MESSAGE
						);
					}
					else {
						param.set(
							"SampleRateAction.sampleRate",
							"" + pane.getSampleRate()
						);
						param.set(
							"SampleRateAction.aliasingRequested",
							"" + pane.isAliasingRequested()
						);
						param.set(
							"SampleRateAction.resampleRequested",
							"" + pane.isResampleRequested()
						);
					}
				}
				else {
					param = null;
				}
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			param = null;
		}
		
		return( param );
	}
	
	private static SampleRateAction instance_ = null;

	public class SampleRatePanel
			extends JPanel
			implements ActionListener, ItemListener
		{
		public SampleRatePanel( int rate, JDialog dialog ) {
			super();
			rate_ = rate;
			dialog_ = dialog;
			
			GridBagLayout gridBag = new GridBagLayout();
			setLayout( gridBag );
	
			GridBagConstraints c = new GridBagConstraints();
			
			// Labels
			JLabel label1 = new JLabel(
				"This sound's current sample rate is",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 0;
			c.insets = new Insets( 10, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			c.gridwidth = GridBagConstraints.REMAINDER;
			gridBag.setConstraints( label1, c );
			add( label1 );
	
			JLabel label2 = new JLabel(
				"" + rate_ + " samples per second.",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 1;
			c.insets = new Insets( 0, 10, 0, 10 );
			gridBag.setConstraints( label2, c );
			add( label2 );
	
			JLabel label3 = new JLabel(
				"Please enter a new sample rate:",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 2;
			gridBag.setConstraints( label3, c );
			add( label3 );
	
	
			// New rate selection
			String[] rates = {
				"48000",
				"44100",
				"32000",
				"22050",
				"16000",
				"11025",
				"8000"
			};
			rateBox_ = new JComboBox( rates );
			rateBox_.setEditable( true );
			c.gridx = 0;
			c.gridy = 3;
			c.insets = new Insets( 20, 10, 0, 10 );
			c.anchor = GridBagConstraints.CENTER;
			gridBag.setConstraints( rateBox_, c );
			add( rateBox_ );
	
	
			// Resample? button group
			ButtonGroup resampleGroup = new ButtonGroup();
			
			resampleBtn_ = new JRadioButton(
				"Resample data at new sample rate",
				true
			);
			resampleGroup.add( resampleBtn_ );
			c.gridx = 0;
			c.gridy = 4;
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( resampleBtn_, c );
			add( resampleBtn_ );
			
			aliasBtn_ = new JCheckBox( "Keep aliasing artifacts" );
			aliasBtn_.setEnabled( false );
			c.gridx = 0;
			c.gridy = 5;
			c.insets = new Insets( 0, 30, 0, 10 );
			gridBag.setConstraints( aliasBtn_, c );
			add( aliasBtn_ );
			
			JRadioButton dontButton = new JRadioButton(
				"Change playback speed of existing data"
			);
			resampleGroup.add( dontButton );
			c.gridx = 0;
			c.gridy = 6;
			c.insets = new Insets( 0, 10, 0, 10 );
			gridBag.setConstraints( dontButton, c );
			add( dontButton );
	
	
			// OK / Cancel
			JPanel buttonPane = new JPanel();
			JButton okButton = new JButton( "OK" );
			buttonPane.add( okButton );
			JButton cancelButton = new JButton( "Cancel" );
			buttonPane.add( cancelButton );
			
			c.gridx = 0;
			c.gridy = 7;
			c.anchor = GridBagConstraints.EAST;
			c.insets = new Insets( 20, 10, 10, 10 );
			gridBag.setConstraints( buttonPane, c );
			add( buttonPane );
			
			validate();
	
			rateBox_.addItemListener( this );
			dontButton.addItemListener( this );
			okButton.addActionListener( this );
			cancelButton.addActionListener( this );
		}
		
		public void itemStateChanged( ItemEvent evt ) {
			if( getSampleRate() < rate_ && isResampleRequested() ) {
				aliasBtn_.setEnabled( true );
			}
			else {
				aliasBtn_.setSelected( false );
				aliasBtn_.setEnabled( false );
			}
		}
		
		public void actionPerformed( ActionEvent evt ) {
			canceled_ = true;
	
			Object src = evt.getSource();
			if( src instanceof JButton ) {
				JButton btn = (JButton) src;
				if( btn.getText().equals( "OK" ) ) {
					canceled_ = false;
				}
				else {
					canceled_ = true;
				}
				
				dialog_.dispose();
			}
		}
		
		public boolean isCanceled() {
			return( canceled_ );
		}
		
		public int getSampleRate() {
			return(
				Integer.parseInt(
					(String) rateBox_.getSelectedItem()
				)
			);
		}
		
		public boolean isResampleRequested() {
			return( resampleBtn_.isSelected() );
		}
		
		public boolean isAliasingRequested() {
			return( aliasBtn_.isSelected() );
		}
		
/*		public String getParam() {
			return( "" + getSampleRate() + " " + isAliasingRequested() + " " + isResampleRequested() );
		}
*/		
		JDialog dialog_ = null;
		int rate_ = 0;
		JRadioButton resampleBtn_ = null;
		JCheckBox aliasBtn_ = null;
		JComboBox rateBox_ = null;
		boolean canceled_ = false;
	
	}
}
