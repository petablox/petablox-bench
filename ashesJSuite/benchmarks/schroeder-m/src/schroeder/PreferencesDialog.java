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
import java.util.*;

public class PreferencesDialog
		extends JDialog
		implements ActionListener
	{
	public static PreferencesDialog instance() {
		if( instance_ == null ) {
			instance_ = new PreferencesDialog();
		}
		
		return( instance_ );
	}
	
	private PreferencesDialog() {
		super( MainFrame.instance(), "Edit Preferences" );
		
		// event listeners
		WindowListener wl = new WindowAdapter() {
			public void windowClosing( WindowEvent evt ) {
				// treat like cancel
				restore();
			}
		};
		addWindowListener( wl );
		
		// preferences in center
		JPanel centerPane = new JPanel();
		
		// look and feel
		centerPane.setBorder(
			BorderFactory.createTitledBorder(
				"Look and Feel"
			)
		);
		
		// build name / class name conversion tables
		lnfNameToClass_ = new Hashtable();
		lnfClassToName_ = new Hashtable();
		Vector v = new Vector();

/*		try {
			UIManager.installLookAndFeel( "MacOS", "javax.swing.plaf.mac.MacLookAndFeel" );
		}
		catch( Exception e ) {
			// no Mac L&F available
			;
		}
*/
		UIManager.LookAndFeelInfo[] lnfInfoList = UIManager.getInstalledLookAndFeels();
		for( int i=0; i<lnfInfoList.length; i++ ) {
			String name = lnfInfoList[ i ].getName().intern();
			String className = lnfInfoList[ i ].getClassName().intern();
		
			lnfNameToClass_.put( name, className );
			lnfClassToName_.put( className, name );
			
			v.addElement( name );
		}
		
		lookAndFeel_ = new JComboBox( v );
		centerPane.add( lookAndFeel_ );
		
		
		// buttons at south
		JPanel southPane = new JPanel();
		
		JButton cancelBtn = new JButton( "Cancel" );
		cancelBtn.setActionCommand( "cancel" );
		cancelBtn.addActionListener( this );
		southPane.add( cancelBtn );

		JButton OKBtn = new JButton( "OK" );
		OKBtn.setActionCommand( "ok" );
		OKBtn.addActionListener( this );
		southPane.add( OKBtn );
		
		// build dialog
		Container pane = getContentPane();
		pane.setLayout(
			new BorderLayout()
		);
		pane.add(
			centerPane,
			BorderLayout.CENTER
		);
		pane.add(
			southPane,
			BorderLayout.SOUTH
		);

		pane.validate();
		pack();
		
		restore();
	}
	
	private void restore() {
		// apply current preferences settings to dialog items
		String currentClassName = Preferences.get( "LookAndFeel", null );
		lookAndFeel_.setSelectedItem( 
			lnfClassToName_.get( currentClassName.intern() )
		); 
	}
	
	private void apply() {
		// apply current dialog item settings to preferences
		String selectedName = (String) lookAndFeel_.getSelectedItem();
		String className = (String) lnfNameToClass_.get( selectedName );
		
		try {
			UIManager.setLookAndFeel( className );
			SwingUtilities.updateComponentTreeUI( MainFrame.instance() );
			Preferences.set( "LookAndFeel", className );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public void actionPerformed( ActionEvent evt ) {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		if( evt.getActionCommand().equals( "cancel" ) ) {
			hide();
			restore();
		}
		else if( evt.getActionCommand().equals( "ok" ) ) {
			hide();
			apply();
		}
		
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
	}
	
	public void dispose() {
		instance_ = null;
	}
	
	private Hashtable lnfNameToClass_ = null;
	private Hashtable lnfClassToName_ = null;
	private JComboBox lookAndFeel_ = null;
	
	private static PreferencesDialog instance_ = null;
}
