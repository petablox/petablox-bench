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

public class Desktop
		extends JDesktopPane
	{
	public static Desktop instance() {
		if( instance_ == null ) {
			instance_ = new Desktop();
		}
		
		return( instance_ );
	}
	
	private Desktop() {
		super();
	
		setBorder(
			BorderFactory.createLoweredBevelBorder()
		);
	}
	
	public int getNumWindows() {
		int numWindows = 0;

		try {
			numWindows = getAllFrames().length;
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( numWindows );
	}
	
	public SoundWindow getActiveWindow() {
		SoundWindow active = null;
		
		try {
			JInternalFrame[] windows = getAllFrames();
			if( windows != null && windows.length > 0 )
				active = (SoundWindow) windows[ 0 ];
			if( active != null && ! active.isSelected() )
				active = null;
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( active );
	}
	
	public void selectTopWindow() {
		try {
			JInternalFrame[] windows = getAllFrames();
			if( windows != null && windows.length > 0 )
				windows[ 0 ].setSelected( true );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public void remove( SoundWindow window ) {
		remove( getIndexOf( window ) );
		selectTopWindow();
		repaint();
	}
	
	private static Desktop instance_ = null;
}
