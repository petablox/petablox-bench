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

public class SampleSizeAction
		extends MonitoredAction
	{
	public static SampleSizeAction instance() {
		if( instance_ == null ) {
			instance_ = new SampleSizeAction();
		}
		
		return( instance_ );
	}
	
	private SampleSizeAction() {
		super(
			"Sample Size...",
			new SampleSizeIcon()
		);
	
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null );
	}

	public String getNote() {
		return( "Rescaling audio data..." );
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

		// parse parameter
		int newSize = model.getSampleSize();

		try {
			newSize = Integer.parseInt(
				param.get( "SampleSizeAction.sampleSize" )
			);

			int numSampleFrames = model.getNumSampleFrames();
			int numChannels = model.getNumChannels();
				
			// for monitor
			int mDen = numChannels * numSampleFrames;
			int mNum = 0;
	
			int oldSize = model.getSampleSize();
			int oldBytes = model.getBytesPerSample();
			int newBytes = (int) Math.ceil( (double) newSize / 8.0 );
			
			if( newBytes != oldBytes || newSize < oldSize ) {
				int num = 1;
				if( newBytes > oldBytes ) {
					num = (int) Math.pow( 2.0, ( 8.0 * (newBytes - oldBytes) ) );
				}
				
				int den = 1;
				if( oldBytes > newBytes ) {
					den = (int) Math.pow( 2.0, ( 8.0 * (oldBytes - newBytes) ) );
				}
				
				int mask = 0xFFFFFFFF;
				if( newSize < oldSize ) {
					mask = mask << ( newBytes * 8 - newSize );
				}
	
				// create a new byte[] array of the correct length
				newModel = new SoundModel(
					numChannels,
					numSampleFrames,
					newSize,
					model.getSampleRate()
				);
		
				// fill the array with approximations from the existing data
				for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
					for( int i=0; ! canceled && i<numSampleFrames; i++ ) {
						newModel.setSample(
							ch,
							i,
							mask & ( model.getSample( ch, i ) * num / den )
						);
	
						if( monitor != null ) {
							monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
							canceled = monitor.isCanceled();
						}
					}
				}
			}
			else {
				// no change necessary
				newModel = model.getCopyAll();
				newModel.setSampleSize( newSize );
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

			int newSize = 0;

			boolean canceled = false;
			while( ! canceled && ! ( 0 < newSize && newSize <= 32 ) ) {
				JDialog dialog = new JDialog(
					MainFrame.instance(),
					"Change Sample Size",
					true
				);
				SampleSizePanel pane = new SampleSizePanel(
					model.getSampleSize(),
					dialog
				);
				dialog.getContentPane().add( pane );
				dialog.pack();
				dialog.setLocationRelativeTo( active );			
				dialog.show();
				
				canceled = pane.isCanceled();
				if( ! canceled ) {
					newSize = pane.getSampleSize();
					if( ! ( 0 < newSize && newSize <= 32 ) ) {
						JOptionPane.showMessageDialog(
							active,
							"Please enter a sample size between 1 and 32.",
							"Invalid Sample Size",
							JOptionPane.WARNING_MESSAGE
						);
					}
					else {
						param.set(
							"SampleSizeAction.sampleSize",
							"" + pane.getSampleSize()
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
	
	private static SampleSizeAction instance_ = null;

	public class SampleSizePanel
			extends JPanel
			implements ActionListener
		{
		public SampleSizePanel( int size, JDialog dialog ) {
			super();
			size_ = size;
			dialog_ = dialog;
			
			GridBagLayout gridBag = new GridBagLayout();
			setLayout( gridBag );
	
			GridBagConstraints c = new GridBagConstraints();
			
			// Labels
			JLabel label1 = new JLabel(
				"This sound's current sample size is",
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
				"" + size_ + " bits per sample.",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 1;
			c.insets = new Insets( 0, 10, 0, 10 );
			gridBag.setConstraints( label2, c );
			add( label2 );
	
			JLabel label3 = new JLabel(
				"Please enter a new sample size:",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 2;
			gridBag.setConstraints( label3, c );
			add( label3 );
	
	
			// New size selection
			String[] sizes = {
				"16",
				"8"
			};
			sizeBox_ = new JComboBox( sizes );
			sizeBox_.setEditable( true );
			c.gridx = 0;
			c.gridy = 3;
			c.insets = new Insets( 20, 10, 0, 10 );
			c.anchor = GridBagConstraints.CENTER;
			gridBag.setConstraints( sizeBox_, c );
			add( sizeBox_ );
	
			// OK / Cancel
			JPanel buttonPane = new JPanel();
			JButton okButton = new JButton( "OK" );
			buttonPane.add( okButton );
			JButton cancelButton = new JButton( "Cancel" );
			buttonPane.add( cancelButton );
			
			c.gridx = 0;
			c.gridy = 4;
			c.anchor = GridBagConstraints.EAST;
			c.insets = new Insets( 20, 10, 10, 10 );
			gridBag.setConstraints( buttonPane, c );
			add( buttonPane );
			
			validate();
	
			okButton.addActionListener( this );
			cancelButton.addActionListener( this );
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
		
		public int getSampleSize() {
			return(
				Integer.parseInt(
					(String) sizeBox_.getSelectedItem()
				)
			);
		}
		
		JDialog dialog_ = null;
		int size_ = 0;
		JComboBox sizeBox_ = null;
		boolean canceled_ = false;
	}
}
