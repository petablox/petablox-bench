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

public class MainToolBar
		extends JToolBar
	{
	public static MainToolBar instance() {
		if( instance_ == null ) {
			instance_ = new MainToolBar();
		}
		
		return( instance_ );
	}
	
	private MainToolBar() {
		super();
	
		JButton btn = add( NewAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
	
		btn = add( OpenAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
	
		btn = add( SaveAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		addSeparator();

		btn = add( UndoAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
		
		btn = add( RedoAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		addSeparator();

		btn = add( CutAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( CopyAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( PasteAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		addSeparator();

		btn = add( ZoomInAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( ZoomOutAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		addSeparator();

		btn = add( TileVerticallyAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( TileHorizontallyAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( TileAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( CascadeAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
		
		setFloatable( false );
	}
	
	private static MainToolBar instance_ = null;
}
