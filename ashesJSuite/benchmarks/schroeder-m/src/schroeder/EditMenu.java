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

public class EditMenu
		extends JMenu
	{
	public static EditMenu instance() {
		if( instance_ == null ) {
			instance_ = new EditMenu();
		}
		
		return( instance_ );
	}
	
	private EditMenu() {
		super( "Edit", true );
		setMnemonic( 'e' );
		
		JMenuItem item = add( UndoAction.instance() );
		item.setMnemonic( 'u' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_Z,
				Event.CTRL_MASK
			)
		);
		
		item = add( RedoAction.instance() );
		item.setMnemonic( 'r' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_Z,
				Event.SHIFT_MASK
			)
		);
		
		add( new JSeparator() );

		item = add( CutAction.instance() );
		item.setMnemonic( 't' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_X,
				Event.CTRL_MASK
			)
		);

		item = add( CopyAction.instance() );
		item.setMnemonic( 'c' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_C,
				Event.CTRL_MASK
			)
		);

		item = add( PasteAction.instance() );
		item.setMnemonic( 'p' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_V,
				Event.CTRL_MASK
			)
		);

		item = add( MixPasteAction.instance() );
		item.setMnemonic( 'm' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_M,
				Event.CTRL_MASK
			)
		);
		
		add( new JSeparator() );
		
		item = add( CropAction.instance() );
//		item.setMnemonic( 'd' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_D,
				Event.SHIFT_MASK
			)
		);
		
		item = add( DeleteAction.instance() );
		item.setMnemonic( 'd' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_D,
				Event.CTRL_MASK
			)
		);
		
		add( new JSeparator() );

		item = add( SelectAllAction.instance() );
		item.setMnemonic( 'a' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_A,
				Event.CTRL_MASK
			)
		);
		
		item = add( CollapseLeftAction.instance() );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_LEFT,
				Event.CTRL_MASK
			)
		);

		item = add( CollapseRightAction.instance() );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_RIGHT,
				Event.CTRL_MASK
			)
		);

		item = add( SelectNoneAction.instance() );
		item.setMnemonic( 'n' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_A,
				Event.SHIFT_MASK
			)
		);
		
		add( new JSeparator() );

		item = add( FindPeakAction.instance() );
		item.setMnemonic( 'f' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_F,
				Event.CTRL_MASK
			)
		);

		item = add( FindZeroCrossingAction.instance() );
		item.setMnemonic( 'z' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_F,
				Event.SHIFT_MASK
			)
		);

		add( new JSeparator() );

		item = add( PreferencesAction.instance() );
	}
	
	private static EditMenu instance_ = null;
}
