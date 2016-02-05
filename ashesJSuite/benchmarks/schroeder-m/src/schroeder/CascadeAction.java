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

public class CascadeAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static CascadeAction instance() {
		if( instance_ == null ) {
			instance_ = new CascadeAction();
		}
		
		return( instance_ );
	}
	
	private CascadeAction() {
		super(
			"Cascade",
			ImageIconFactory.instance().getImageIcon( "/images/cascade.gif" )
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
			
			Dimension desktop = Desktop.instance().getSize();
			int x = SoundWindow.X0;
			int y = SoundWindow.Y0;
			int w = SoundWindow.WIDTH;
			int h = SoundWindow.HEIGHT;
			if( w > desktop.width - SoundWindow.X0 * 2 )
				w = desktop.width - SoundWindow.X0 * 2;
			if( h > desktop.height - SoundWindow.Y0 * 2 )
				h = desktop.height - SoundWindow.Y0 * 2;
			
			for( int i=windows.length-1; i>=0; i-- ) {
				windows[ i ].reshape( x, y, w, h );
				x += SoundWindow.DX;
				if( x + w > desktop.width - SoundWindow.X0 )
					x = SoundWindow.X0;
				y += SoundWindow.DY;
				if( y + h > desktop.height - SoundWindow.Y0 )
					y = SoundWindow.Y0;
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
	
	private static CascadeAction instance_ = null;
}
