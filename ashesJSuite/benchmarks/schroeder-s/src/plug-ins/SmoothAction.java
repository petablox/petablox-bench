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

public class SmoothAction
		extends MonitoredAction
	{
	public SmoothAction() {
		super(
			"Smooth...",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public String getNote() {
		return( "Smoothing selection..." );
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
		
		try {
			boolean canceled = false;

			int period = 2;
			try {
				period = Integer.parseInt( param.get( "SmoothAction.period" ) );
				if( period < 2 )
					period = 2;
			}
			catch( Exception e ) {
				;
			}
			
			int numFrames = model.getNumSampleFrames();
			int numChannels = model.getNumChannels();
	
			newModel = new SoundModel(
				numChannels,
				numFrames,
				model.getSampleSize(),
				model.getSampleRate()
			);
			
			// for monitor
			int mDen = numChannels * numFrames;
			int mNum = 0;
			
			int[] samples = new int[ period ];
			int pIdx = 0;
			for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
				for( int i=0; ! canceled && i<numFrames; i++ ) {
					samples[ pIdx ] = model.getSample( ch, i );
					
					long average = 0L;
					for( int j=0; j<period; j++ ) {
						average += (long) samples[ j ];
					}
					average /= (long) period;
					
					newModel.setSample( ch, i, (int) average );
				
					pIdx++;
					if( pIdx >= samples.length )
						pIdx = 0;
				
					if( monitor != null ) {
						monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
						canceled = monitor.isCanceled();
					}
				}
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
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
				"Smooth",
				true
			);
			SmoothPanel pane = new SmoothPanel( dialog );
			dialog.getContentPane().add( pane );
			dialog.pack();
			dialog.setLocationRelativeTo( active );			
			dialog.show();
			
			canceled = pane.isCanceled();
			if( ! canceled ) {
				param.set( "SmoothAction.period", pane.getParam() );
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

	private class SmoothPanel
			extends JPanel
			implements ActionListener
		{
		public SmoothPanel( JDialog dialog ) {
			super();
			dialog_ = dialog;
			
			GridBagLayout gridBag = new GridBagLayout();
			setLayout( gridBag );
	
			GridBagConstraints c = new GridBagConstraints();
			
			// Labels
			JLabel label = new JLabel(
				"Smooth",
				SwingConstants.CENTER
			);
			c.gridx = 0;
			c.gridy = 0;
			c.insets = new Insets( 0, 10, 0, 0 );
			c.anchor = GridBagConstraints.CENTER;
			gridBag.setConstraints( label, c );
			add( label );
	
			label = new JLabel(
				"(Average Period)",
				SwingConstants.CENTER
			);
			c.gridx = 0;
			c.gridy = 1;
			c.insets = new Insets( 0, 10, 0, 0 );
			c.anchor = GridBagConstraints.CENTER;
			gridBag.setConstraints( label, c );
			add( label );

			slider_ = new JSlider(
				JSlider.VERTICAL,
				2,
				20,
				Integer.parseInt(
					Preferences.get(
						"SmoothPeriod",
						"2"
					)
				)
			);
			slider_.setLabelTable(
				slider_.createStandardLabels( 2 )
			);
			slider_.setMajorTickSpacing( 2 );
			slider_.setPaintTicks( true );
			slider_.setPaintLabels( true );
			slider_.setPaintTrack( true );
	
			c.gridx = 0;
			c.gridy = 2;
			c.insets = new Insets( 10, 10, 0, 0 );
			gridBag.setConstraints( slider_, c );
			add( slider_ );
	
			// OK / Cancel
			JPanel buttonPane = new JPanel();
			JButton okButton = new JButton( "OK" );
			buttonPane.add( okButton );
			JButton cancelButton = new JButton( "Cancel" );
			buttonPane.add( cancelButton );
			
			c.gridx = 0;
			c.gridy = 3;
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
			int period = slider_.getValue();
			Preferences.set(
				"SmoothPeriod",
				"" + period
			);
		
			return( "" + period );
		}
		
		JDialog dialog_ = null;
		JSlider slider_ = null;
		boolean canceled_ = true;
	}
}
