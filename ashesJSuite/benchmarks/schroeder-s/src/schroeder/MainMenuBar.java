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

public class MainMenuBar
		extends JMenuBar
	{
	public static MainMenuBar instance() {
		if( instance_ == null ) {
			instance_ = new MainMenuBar();
		}
		
		return( instance_ );
	}
	
	private MainMenuBar() {
		super();
	
		add( FileMenu.instance() );
		add( EditMenu.instance() );
		add( SoundMenu.instance() );

		Enumeration menus = PluginManager.instance().getMenuNames();
		while( menus.hasMoreElements() ) {
			try {
				add( new PluginMenu( (String) menus.nextElement() ) );
			}
			catch( Exception e ) {
				e.printStackTrace();
			}
		}
		
		add( ViewMenu.instance() );
		add( WindowMenu.instance() );
	}
	
	private static MainMenuBar instance_ = null;
}
