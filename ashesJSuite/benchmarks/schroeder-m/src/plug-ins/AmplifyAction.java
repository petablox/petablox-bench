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

public class AmplifyAction
		extends MonitoredAction
	{
	public AmplifyAction() {
		super(
			"Amplify...",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public String getNote() {
		return( "Amplifying selection..." );
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
			int numFrames = model.getNumSampleFrames();
			int numChannels = model.getNumChannels();
	
			newModel = ( PluginManager.instance().getPlugin( "EnvelopeAction" ) ).transform(
				model,
				param,
				monitor,
				progressPre,
				progressSize
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}

		return( newModel );
	}
	
	public PlugInParameters getCustomParameters( SoundWindow active, int inputChannelCount ) {
		PlugInParameters param = new PlugInParameters();

		try {
			SoundModel model = active.getModel();

			boolean canceled = false;
			JDialog dialog = new JDialog(
				MainFrame.instance(),
				"Amplify",
				true
			);
			AmplifyPanel pane = new AmplifyPanel( dialog );
			dialog.getContentPane().add( pane );
			dialog.pack();
			dialog.setLocationRelativeTo( active );			
			dialog.show();
			
			canceled = pane.isCanceled();
			if( ! canceled ) {
				param.set( "EnvelopeAction.envelope", pane.getParam() );
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
	
	private class AmplifyPanel
			extends JPanel
			implements ActionListener
		{
		public AmplifyPanel( JDialog dialog ) {
			super();
			dialog_ = dialog;
			
			GridBagLayout gridBag = new GridBagLayout();
			setLayout( gridBag );
	
			GridBagConstraints c = new GridBagConstraints();
			
			// Labels
			JLabel label = new JLabel(
				"Volume",
				SwingConstants.CENTER
			);
			c.gridx = 0;
			c.gridy = 0;
			c.insets = new Insets( 0, 10, 0, 0 );
			c.anchor = GridBagConstraints.CENTER;
			gridBag.setConstraints( label, c );
			add( label );
	
			label = new JLabel(
				"(Percent of original)",
				SwingConstants.CENTER
			);
			c.gridx = 0;
			c.gridy = 1;
			c.insets = new Insets( 0, 10, 0, 0 );
			c.anchor = GridBagConstraints.CENTER;
			gridBag.setConstraints( label, c );
			add( label );
	
			// Volume selection
			Hashtable labelTable = new Hashtable();
			for( int i=0; i<=10000; i+=1000 ) {
				Integer value = new Integer( i );
				label = new JLabel( "" + (i/50) );
				label.setHorizontalAlignment( SwingConstants.RIGHT );
				labelTable.put(
					value,
					label
				);
			}
	
			slider_ = new JSlider(
				JSlider.VERTICAL,
				0,
				10000,
				Integer.parseInt(
					Preferences.get(
						"AmplifyLevel",
						"5000"
					)
				)
			);
			slider_.setLabelTable( labelTable );
			slider_.setMajorTickSpacing( 1000 );
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
			int volume = slider_.getValue();
			Preferences.set(
				"AmplifyLevel",
				"" + volume
			);
			
			float scale = (float) volume / (float) 5000.0;
		
			return( "0.0 " + scale + " 1.0 " + scale );
		}
		
		JDialog dialog_ = null;
		JSlider slider_ = null;
		boolean canceled_ = true;
	}
}

