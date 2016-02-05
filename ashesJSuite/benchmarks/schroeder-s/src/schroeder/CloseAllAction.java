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

public class CloseAllAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static CloseAllAction instance() {
		if( instance_ == null ) {
			instance_ = new CloseAllAction();
		}
		
		return( instance_ );
	}
	
	private CloseAllAction() {
		super(
			"Close All",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
		
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null );
	}
	
	public void actionPerformed( ActionEvent evt ) {
		closeAll();
	}
	
	public boolean closeAll() {
		boolean canceled = false;

		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		try {
			SoundWindow window = Desktop.instance().getActiveWindow();
			while( ! canceled && window != null ) {
				canceled = window.close();
				window = Desktop.instance().getActiveWindow();
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
		
		return( canceled );
	}
	
	private static CloseAllAction instance_ = null;
}
