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

public class InsertSilenceAction
		extends MonitoredAction
	{
	public InsertSilenceAction() {
		super(
			"Insert Silence...",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public String getNote() {
		return( "Inserting silence..." );
	}
	
	public void enableDisable( SoundWindow active ) {
		setEnabled(
				active != null
			&&	active.getModel().getSelection() != null
		);
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
			double seconds = 1.0;
			try {
				seconds = Double.parseDouble( param.get( "InsertSilenceAction.length" ) );
			}
			catch( Exception e ) {
				;
			}
			int frames = (int) Math.round( (double) model.getSampleRate() * seconds );
	
			int channels = model.getSelection().getChannel();
			if( channels == Selection.ALL_CHANNELS )
				channels = model.getNumChannels();
			else
				channels = 1;
	
			newModel = new SoundModel(
				channels,
				frames,
				model.getSampleSize(),
				model.getSampleRate()
			);
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
				"Insert Silence",
				true
			);
			InsertSilencePanel pane = new InsertSilencePanel( dialog );
			dialog.getContentPane().add( pane );
			dialog.pack();
			dialog.setLocationRelativeTo( active );			
			dialog.show();
			
			canceled = pane.isCanceled();
			if( ! canceled ) {
				param.set( "InsertSilenceAction.length", pane.getParam() );
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

	private class InsertSilencePanel
			extends JPanel
			implements ActionListener
		{
		public InsertSilencePanel( JDialog dialog ) {
			super();
			dialog_ = dialog;
			
			GridBagLayout gridBag = new GridBagLayout();
			setLayout( gridBag );
	
			GridBagConstraints c = new GridBagConstraints();
			
			// Labels
			JLabel label = new JLabel(
				"Insert ",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 0;
			c.insets = new Insets( 10, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( label, c );
			add( label );
	
			// Text field
			textField_ = new JTextField(
				Preferences.get(
					"InsertSilenceLength",
					"1.0"
				)
			);
			c.gridx = 1;
			c.gridy = 0;
			c.insets = new Insets( 10, 0, 0, 10 );
			c.fill = GridBagConstraints.BOTH;
			c.gridwidth = GridBagConstraints.REMAINDER;
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( textField_, c );
			add( textField_ );
	
	
			label = new JLabel(
				"seconds of silence.",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 1;
			c.insets = new Insets( 0, 10, 0, 10 );
			c.gridwidth = GridBagConstraints.REMAINDER;
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( label, c );
			add( label );
	
	
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
			String param = textField_.getText();
			Preferences.set(
				"InsertSilenceLength",
				param
			);
		
			return( param );
		}
		
		JDialog dialog_ = null;
		JTextField textField_ = null;
		boolean canceled_ = true;
	}
}

