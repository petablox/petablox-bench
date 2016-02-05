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

public class ZoomOutAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static ZoomOutAction instance() {
		if( instance_ == null ) {
			instance_ = new ZoomOutAction();
		}
		
		return( instance_ );
	}
	
	private ZoomOutAction() {
		super(
			"Zoom Out",
			ImageIconFactory.instance().getImageIcon( "/images/zoom_out.gif" )
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
			SoundWindow active = Desktop.instance().getActiveWindow();
			int oldScale = active.getView().getScale();
			int scale = active.getView().getZoomOutScale();
			if( scale != oldScale ) {
				active.getView().setScale( scale );
				ViewMenu.instance().setSelected( scale );
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
	
	private static ZoomOutAction instance_ = null;
}
