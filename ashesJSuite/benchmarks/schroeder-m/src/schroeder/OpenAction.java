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
import javax.swing.filechooser.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

public class OpenAction
		extends AbstractAction
	{
	public static OpenAction instance() {
		if( instance_ == null ) {
			instance_ = new OpenAction();
		}
		
		return( instance_ );
	}
	
	private OpenAction() {
		super(
			"Open...",
			ImageIconFactory.instance().getImageIcon( "/images/open.gif" )
		);

	}
	
	public void actionPerformed( ActionEvent evt ) {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		try {
			JFileChooser chooser = new JFileChooser();
			chooser.setMultiSelectionEnabled( true );

			// user directory prefs
			chooser.setCurrentDirectory(
				new File(
					Preferences.get(
						"OpenDirectory",
						chooser.getCurrentDirectory().getAbsolutePath()
					)
				)
			);

			// file filter prefs
			String extension = Preferences.get(
				"OpenExtension",
				"aif"
			).toLowerCase();

			Hashtable filters = SoundFileAdapterManager.instance().getFilters();
			String desc = (String) filters.remove( extension.intern() );
			if( desc == null ) {
				extension = "aif";
				desc = (String) filters.remove( extension.intern() );
			}
			ExtensionFileFilter preferedFilter = new ExtensionFileFilter( extension, desc );
			chooser.addChoosableFileFilter( preferedFilter );
			
			// other filters
			Enumeration extensions = filters.keys();
			while( extensions.hasMoreElements() ) {
				extension = (String) extensions.nextElement();
				desc = (String) filters.get( extension.intern() );
				chooser.addChoosableFileFilter(
					new ExtensionFileFilter( extension, desc )
				);
			}

			chooser.setFileFilter( preferedFilter );
			
			// go!
			int returnVal = chooser.showOpenDialog( MainFrame.instance() );
			if( returnVal == JFileChooser.APPROVE_OPTION ) {
				MainFrame.instance().setCursor(
					Cursor.getPredefinedCursor(
						Cursor.WAIT_CURSOR
					)
				);
				
				File[] selected = chooser.getSelectedFiles();
				if( selected == null || selected.length < 1 ) {
					selected = new File[ 1 ];
					selected[ 0 ] = chooser.getSelectedFile();
				}
				
				for( int i=0; i<selected.length; i++ ) {
					SoundFileAdapter adapter = SoundFileAdapterManager.instance().getAdapter( selected[ i ] );
					
					if( adapter == null ) {
						// dialog
						int option = JOptionPane.showConfirmDialog(
							MainPanel.instance(),
							"Unrecognized file format. Interpret as raw sample data?",
							"Open",
							JOptionPane.OK_CANCEL_OPTION
						);
						
						if( option == JOptionPane.OK_OPTION ) {
							adapter = new BinaryFileAdapter();
						}
					}
					
					if( adapter != null ) {
						adapter.setFile( selected[ i ] );
						SoundWindow window = new SoundWindow(
							adapter.createSoundFromFile(),
							selected[ i ].getName()
						);
						
						Preferences.set(
							"OpenDirectory",
							chooser.getCurrentDirectory().getAbsolutePath()
						);
						String name = selected[ i ].getName();
						Preferences.set(
							"OpenExtension",
							name.substring( name.lastIndexOf( '.' ) + 1 ).toLowerCase()
						);
						FileMenu.instance().addRecentFile( selected[ i ] );
					}
				}
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
	}
	
	private static OpenAction instance_ = null;
}
