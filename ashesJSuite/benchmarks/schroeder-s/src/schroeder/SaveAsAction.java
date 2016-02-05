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
import java.io.File;
import java.awt.event.*;
import java.util.*;

public class SaveAsAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static SaveAsAction instance() {
		if( instance_ == null ) {
			instance_ = new SaveAsAction();
		}
		
		return( instance_ );
	}
	
	private SaveAsAction() {
		super(
			"Save As...",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
		
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null );
	}
	
	public void actionPerformed( ActionEvent evt ) {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		saveAs( Desktop.instance().getActiveWindow() );
		
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
	}
	
	public void saveAs( SoundWindow window ) {
		try {
			JFileChooser chooser = new JFileChooser();		
			
			// user directory prefs
			chooser.setCurrentDirectory(
				new File(
					Preferences.get(
						"SaveDirectory",
						chooser.getCurrentDirectory().getAbsolutePath()
					)
				)
			);
			
			// file filter prefs
			String extension = Preferences.get(
				"SaveExtension",
				"aif"
			).toLowerCase();

			Hashtable filters = SoundFileAdapterManager.instance().getFilters();
			String desc = (String) filters.remove( extension.intern() );
			if( desc == null ) {
				extension = "aif";
				desc = (String) filters.remove( extension.intern() );
			}
			chooser.setFileFilter( new ExtensionFileFilter( extension, desc ) );
			
			// other filters
			Enumeration extensions = filters.keys();
			while( extensions.hasMoreElements() ) {
				extension = (String) extensions.nextElement();
				desc = (String) filters.get( extension.intern() );
				chooser.addChoosableFileFilter(
					new ExtensionFileFilter( extension, desc )
				);
			}
			
			// go!
			File f = null;
			int returnVal = JFileChooser.APPROVE_OPTION;
			while( f == null && returnVal == JFileChooser.APPROVE_OPTION ) {
				chooser.setDialogTitle( "Save " + window.getTitle() + " as..." );
				returnVal = chooser.showSaveDialog( MainFrame.instance() );
				if( returnVal == JFileChooser.APPROVE_OPTION ) {
					f = chooser.getSelectedFile();
					if( f.exists() ) {
						int choice = JOptionPane.showConfirmDialog(
							chooser, // MainFrame.instance(),
							"Replace existing file " + f.getName() + "?",
							"Save file as...",
							JOptionPane.YES_NO_CANCEL_OPTION,
							JOptionPane.WARNING_MESSAGE
						);
						if( choice == JOptionPane.NO_OPTION ) {
							f = null;
						}
						else if( choice == JOptionPane.CANCEL_OPTION ) {
							f = null;
							returnVal = JFileChooser.CANCEL_OPTION;
						}
					}
				}
			}
			
			if( f != null ) {
				MainFrame.instance().setCursor(
					Cursor.getPredefinedCursor(
						Cursor.WAIT_CURSOR
					)
				);
				SoundModel model = window.getModel();

				SoundFileAdapter adapter = SoundFileAdapterManager.instance().getAdapter( f );
				adapter.setFile( f );
				model.setFileAdapter( adapter );
				adapter.createFileFromSound( model );
				window.setTitle( f.getName() );
				model.setDirty( false );

				Preferences.set(
					"SaveDirectory",
					chooser.getCurrentDirectory().getAbsolutePath()
				);
				String name = f.getName();
				Preferences.set(
					"SaveExtension",
					name.substring( name.lastIndexOf( '.' ) + 1 ).toLowerCase()
				);
				FileMenu.instance().addRecentFile( f );
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	private static SaveAsAction instance_ = null;
}
