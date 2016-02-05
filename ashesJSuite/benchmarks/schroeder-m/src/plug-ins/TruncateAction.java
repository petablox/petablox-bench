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


import schroeder.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class TruncateAction
		extends MonitoredAction
	{
	public TruncateAction() {
		super(
			"Truncate...",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null );
	}

	public String getNote() {
		return( "Truncating sound..." );
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
		
		// for monitor
		int mDen = model.getNumChannels() * model.getNumSampleFrames();
		int mNum = 0;
		
		try {
			StringTokenizer st = new StringTokenizer( param.get( "TruncateAction.thresholds" ) );
			int thresholdAtStart = (int) Math.round(
				Double.parseDouble( st.nextToken() ) * (double) model.getMaxValue()
			);
			int thresholdAtEnd = (int) Math.round(
				Double.parseDouble( st.nextToken() ) * (double) model.getMaxValue()
			);
	
			// loop over the sample until the threshold is
			// crossed, then crop to the last zero crossing
			int[] lastZeroAtStart = new int[ model.getNumChannels() ];
			int[] lastSample = new int[ model.getNumChannels() ];
			
			SEARCH:
			for( int i=0; ! canceled && i<model.getNumSampleFrames(); i++ ) {
				for( int ch=0; ! canceled && ch<model.getNumChannels(); ch++ ) {
					int sample = model.getSample( ch, i );
					if( 		sample >= thresholdAtStart
							||	sample <= -thresholdAtStart
						) {
						break SEARCH;
					}
	
					if( sample == 0 ) {
						lastZeroAtStart[ ch ] = i;
					}
					else if(	( sample > 0 && lastSample[ ch ] < 0 )
							||	( sample < 0 && lastSample[ ch ] > 0 )
						) {
						lastZeroAtStart[ ch ] = i-1;
					}
					
					lastSample[ ch ] = sample;
				
					if( monitor != null ) {
						monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
						canceled = monitor.isCanceled();
					}
				}
			}
			
			// which last zero is earlier? keep both...
			int offset = model.getNumSampleFrames() - 1;
			for( int ch=0; ! canceled && ch<model.getNumChannels(); ch++ ) {
				if( lastZeroAtStart[ ch ] < offset )
					offset = lastZeroAtStart[ ch ];
			}
	
			// repeat backwards for the end of the sound...
			int[] lastZeroAtEnd = new int[ model.getNumChannels() ];
			for( int i=0; ! canceled && i<lastZeroAtEnd.length; i++ ) {
				lastZeroAtEnd[ i ] = model.getNumSampleFrames() - 1;
			}
			lastSample = new int[ model.getNumChannels() ];
		
			HCRAES:
			for( int i=model.getNumSampleFrames()-1; ! canceled && i>=0; i-- ) {
				for( int ch=0; ! canceled && ch<model.getNumChannels(); ch++ ) {
					int sample = model.getSample( ch, i );
					if( 		sample >= thresholdAtEnd
							||	sample <= -thresholdAtEnd
						) {
						break HCRAES;
					}
	
					if( sample == 0 ) {
						lastZeroAtEnd[ ch ] = i;
					}
					else if(	( sample > 0 && lastSample[ ch ] < 0 )
							||	( sample < 0 && lastSample[ ch ] > 0 )
						) {
						lastZeroAtEnd[ ch ] = i+1;
					}
					
					lastSample[ ch ] = sample;
				
					if( monitor != null ) {
						monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
						canceled = monitor.isCanceled();
					}
				}
			}
			
			if( ! canceled ) {
				// which last zero is later? keep both...
				int end = 0;
				for( int ch=0; ch<model.getNumChannels(); ch++ ) {
					if( lastZeroAtEnd[ ch ] > end )
						end = lastZeroAtEnd[ ch ];
				}
		
				// crop
				model.setSelection(
					Selection.ALL_CHANNELS,
					offset,
					end - offset + 1,
					false
				);
				newModel = model.getCopySelection();
				
				// ...and zero beginning
				for( int ch=0; ch < newModel.getNumChannels(); ch++ ) {
					for( int i=0; i <= lastZeroAtStart[ ch ] - offset; i++ ) {
						newModel.setSample( ch, i, 0 );
					}
				}
				
				// ...and end
				for( int ch=0; ch < newModel.getNumChannels(); ch++ ) {
					for( int i=newModel.getNumSampleFrames() - 1; i >= lastZeroAtEnd[ ch ] - offset; i-- ) {
						newModel.setSample( ch, i, 0 );
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
		
		if( monitor != null )
			monitor.setProgress( progressPre + progressSize );
		
		return( newModel );
	}

	public PlugInParameters getCustomParameters( SoundWindow active, int inputChannelCount ) {
		PlugInParameters param = new PlugInParameters();

		try {
			SoundModel model = active.getModel();

			boolean canceled = false;

			JDialog dialog = new JDialog(
				MainFrame.instance(),
				"Truncate",
				true
			);
			TruncatePanel pane = new TruncatePanel( dialog );
			dialog.getContentPane().add( pane );
			dialog.pack();
			dialog.setLocationRelativeTo( active );			
			dialog.show();
			
			canceled = pane.isCanceled();
			if( ! canceled ) {
				param.set( "TruncateAction.thresholds", pane.getParam() );
			}
			else {
				param = null;
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

	private class TruncatePanel
			extends JPanel
			implements ActionListener
		{
		public TruncatePanel( JDialog dialog ) {
			super();
			dialog_ = dialog;
			
			GridBagLayout gridBag = new GridBagLayout();
			setLayout( gridBag );
	
			GridBagConstraints c = new GridBagConstraints();
			
			// Labels
			JLabel label1 = new JLabel(
				"Please set the level thresholds",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 0;
			c.insets = new Insets( 10, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			c.gridwidth = GridBagConstraints.REMAINDER;
			gridBag.setConstraints( label1, c );
			add( label1 );
	
			JLabel label1b = new JLabel(
				"for the truncate operation:",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 1;
			c.insets = new Insets( 0, 10, 20, 10 );
			gridBag.setConstraints( label1b, c );
			add( label1b );
	
	
			JLabel label2 = new JLabel(
				"Threshold",
				SwingConstants.CENTER
			);
			c.gridx = 0;
			c.gridy = 2;
			c.insets = new Insets( 0, 10, 0, 0 );
			c.anchor = GridBagConstraints.CENTER;
			c.gridwidth = 1;
			gridBag.setConstraints( label2, c );
			add( label2 );
	
			JLabel label3 = new JLabel(
				"Threshold",
				SwingConstants.CENTER
			);
			c.gridx = 1;
			c.gridy = 2;
			gridBag.setConstraints( label3, c );
			add( label3 );
	
			JLabel label4 = new JLabel(
				"at start",
				SwingConstants.CENTER
			);
			c.gridx = 0;
			c.gridy = 3;
			gridBag.setConstraints( label4, c );
			add( label4 );
	
			JLabel label5 = new JLabel(
				"at end",
				SwingConstants.CENTER
			);
			c.gridx = 1;
			c.gridy = 3;
			gridBag.setConstraints( label5, c );
			add( label5 );
	
			// Threshold selection
			Hashtable labelTable = new Hashtable();
			for( int i=0; i<=10000; i+=1000 ) {
				Integer value = new Integer( i );
				JLabel label = new JLabel( "" + (i/1000) );
				label.setHorizontalAlignment( SwingConstants.RIGHT );
				labelTable.put(
					value,
					label
				);
			}
	
			slider1_ = new JSlider(
				JSlider.VERTICAL,
				0,
				10000,
				Integer.parseInt(
					Preferences.get(
						"TruncateThresholdAtStart",
						"500"
					)
				)
			);
			slider1_.setLabelTable( labelTable );
			slider1_.setMajorTickSpacing( 1000 );
			slider1_.setPaintTicks( true );
			slider1_.setPaintLabels( true );
			slider1_.setPaintTrack( true );
	
			c.gridx = 0;
			c.gridy = 4;
			c.insets = new Insets( 10, 10, 0, 0 );
			c.anchor = GridBagConstraints.CENTER;
			c.gridwidth = 1;
			gridBag.setConstraints( slider1_, c );
			add( slider1_ );
	
			slider2_ = new JSlider(
				JSlider.VERTICAL,
				0,
				10000,
				Integer.parseInt(
					Preferences.get(
						"TruncateThresholdAtEnd",
						"100"
					)
				)
			);
			slider2_.setLabelTable( labelTable );
			slider2_.setMajorTickSpacing( 1000 );
			slider2_.setPaintTicks( true );
			slider2_.setPaintLabels( true );
			slider2_.setPaintTrack( true );
	
			c.gridx = 1;
			c.gridy = 4;
			gridBag.setConstraints( slider2_, c );
			add( slider2_ );
	
			// OK / Cancel
			JPanel buttonPane = new JPanel();
			JButton okButton = new JButton( "OK" );
			buttonPane.add( okButton );
			JButton cancelButton = new JButton( "Cancel" );
			buttonPane.add( cancelButton );
			
			c.gridx = 0;
			c.gridy = 5;
			c.anchor = GridBagConstraints.EAST;
			c.insets = new Insets( 20, 10, 10, 10 );
			c.gridwidth = GridBagConstraints.REMAINDER;
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
		
		public String getParam() {
			int threshold1 = slider1_.getValue();
			Preferences.set(
				"TruncateThresholdAtStart",
				"" + threshold1
			);
	
			int threshold2 = slider2_.getValue();
			Preferences.set(
				"TruncateThresholdAtEnd",
				"" + threshold2
			);
		
			float f1 = (float) threshold1 / (float) 10000.0;
			float f2 = (float) threshold2 / (float) 10000.0;
		
			return( "" + f1 + " " + f2 );
		}
		
		JDialog dialog_ = null;
		JSlider slider1_ = null;
		JSlider slider2_ = null;
		boolean canceled_ = true;
	}
}

