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
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class ActionManager {
	public static ActionManager instance() {
		if( instance_ == null ) {
			instance_ = new ActionManager();
		}
		
		return( instance_ );
	}
	
	public void enableDisableActions() {
		SoundWindow active = Desktop.instance().getActiveWindow();
		for( int i=0; i<actions_.size(); i++ ) {
			( (EnableDisableable) actions_.elementAt( i ) ).enableDisable( active );
		}
	}
	
	public void add( EnableDisableable a ) {
		actions_.addElement( a );
	}
	
	public void remove( EnableDisableable a ) {
		actions_.removeElement( a );
	}

	private Vector actions_ = null;
	private ActionManager() {
		actions_ = new Vector();
	}
	
	private static ActionManager instance_ = null;
}
