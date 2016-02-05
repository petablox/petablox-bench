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

public class TileHorizontallyAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static TileHorizontallyAction instance() {
		if( instance_ == null ) {
			instance_ = new TileHorizontallyAction();
		}
		
		return( instance_ );
	}
	
	private TileHorizontallyAction() {
		super(
			"Tile Horizontally",
			ImageIconFactory.instance().getImageIcon( "/images/tileH.gif" )
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

		try {
			JInternalFrame[] windows = Desktop.instance().getAllFrames();
			int numW = windows.length;
			
			Dimension desktop = Desktop.instance().getSize();
			int x = 0;
			int y = 0;
			int w = desktop.width / numW;
			int h = desktop.height;
			if( w < SoundWindow.MIN_WIDTH ) {
				w = SoundWindow.MIN_WIDTH;
			}
			int maxNumH = desktop.width / w;
			w = desktop.width / maxNumH;
			
			for( int i=windows.length-1; i>=0; i-- ) {
				windows[ i ].reshape( x, y, w, h );
				x += w;
				if( x + w > desktop.width )
					x = 0;
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
	
	private static TileHorizontallyAction instance_ = null;
}
