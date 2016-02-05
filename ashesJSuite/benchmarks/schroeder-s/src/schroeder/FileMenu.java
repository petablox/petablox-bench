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
import java.io.File;

public class FileMenu
		extends JMenu
	{
	public static FileMenu instance() {
		if( instance_ == null ) {
			instance_ = new FileMenu();
		}
		
		return( instance_ );
	}
	
	private FileMenu() {
		super( "File", true );
		setMnemonic( 'f' );
		
		JMenuItem item = add( NewAction.instance() );
		item.setMnemonic( 'n' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_N,
				Event.CTRL_MASK
			)
		);
		
		item = add( OpenAction.instance() );
		item.setMnemonic( 'o' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_O,
				Event.CTRL_MASK
			)
		);
		
		item = add( CloseAction.instance() );
		item.setMnemonic( 'c' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_W,
				Event.CTRL_MASK
			)
		);
		
		item = add( CloseAllAction.instance() );
		item.setMnemonic( 'l' );
		
		add( new JSeparator() );

		item = add( SaveAction.instance() );
		item.setMnemonic( 's' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_S,
				Event.CTRL_MASK
			)
		);
		
		item = add( SaveAllAction.instance() );
		
		item = add( SaveAsAction.instance() );
		item.setMnemonic( 'A' );
		
		item = add( RevertAction.instance() );
		item.setMnemonic( 'r' );
		
		add( new JSeparator() );
		
		addFileActions();
	}
	
	public void addRecentFile( File f ) {
		// move the rest of the files down
		for( int i=3; i>0; i-- ) {
			Preferences.set(
				"RecentFile" + i,
				Preferences.get(
					"RecentFile" + (i-1),
					"null"
				)
			);
		}

		// and add this one
		Preferences.set(
			"RecentFile0",
			f.getAbsolutePath()
		);
		
		removeFileActions();
		addFileActions();
	}
	
	private void removeFileActions() {
		while( getMenuComponentCount() > 10 ) {
			remove( 10 );
		}
	}
	
	private void addFileActions() {
		boolean added = false;
	
		for( int i=0; i<4; i++ ) {
			String fileSpec = Preferences.get( "RecentFile" + i, "null" );
			if( ! fileSpec.equals( "null" ) ) {
				File f = new File( fileSpec );
				String title = "" + (i+1) + " " + f.getName();
				
				JMenuItem item = add( new OpenRecentAction( title, f ) );
				item.setMnemonic( title.charAt( 0 ) );
				
				added = true;
			}
		}
		
		if( added ) {
			add( new JSeparator() );
		}
		
		JMenuItem item = add( ExitAction.instance() );
		item.setMnemonic( 'x' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_Q,
				Event.CTRL_MASK
			)
		);
	}
	
	private static FileMenu instance_ = null;
}
