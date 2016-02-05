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
import java.io.*;

public class OpenRecentAction
		extends AbstractAction
	{
	public OpenRecentAction( String title, File file ) {
		super(
			title,
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
		
		file_ = file;
	}
	
	public void actionPerformed( ActionEvent evt ) {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		try {
			SoundFileAdapter adapter = SoundFileAdapterManager.instance().getAdapter( file_ );

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
				adapter.setFile( file_ );
				SoundWindow window = new SoundWindow(
					adapter.createSoundFromFile(),
					file_.getName()
				);
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			
			JOptionPane.showMessageDialog(
				MainPanel.instance(),
				"Unable to open " + file_.getName() + ".",
				"File Not Found",
				JOptionPane.ERROR_MESSAGE
			);
		}
		
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
	}
	
	private File file_ = null;
}
