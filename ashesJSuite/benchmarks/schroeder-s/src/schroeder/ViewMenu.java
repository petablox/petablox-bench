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

public class ViewMenu
		extends JMenu
	{
	public static ViewMenu instance() {
		if( instance_ == null ) {
			instance_ = new ViewMenu();
		}
		
		return( instance_ );
	}
	
	private ViewMenu() {
		super( "View", true );
		setMnemonic( 'v' );
		
		JMenuItem item = add( ZoomInAction.instance() );
		item.setMnemonic( 'i' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_UP,
				Event.CTRL_MASK
			)
		);

		item = add( ZoomOutAction.instance() );
		item.setMnemonic( 'o' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_DOWN,
				Event.CTRL_MASK
			)
		);
		
		add( new JSeparator() );

		item = add( QuickRenderAction.instance() );
		QuickRenderAction.instance().setMenuItem( item );
		item.setMnemonic( 'q' );
		
		add( new JSeparator() );
		
		items_ = new JMenuItem[ SoundView.SCALE_LABELS.length ];
		for( int i=0; i<items_.length; i++ ) {
			items_[ i ] = add( new ChangeScaleAction( i ) );
			if( i == SoundView.FIT_TO_WINDOW ) {
				items_[ i ].setMnemonic( 't' );
				items_[ i ].setAccelerator(
					KeyStroke.getKeyStroke(
						KeyEvent.VK_T,
						Event.CTRL_MASK
					)
				);
			}
			if( i == SoundView.DEFAULT_SCALE ) {
				items_[ i ].setIcon( ImageIconFactory.instance().getImageIcon( "/images/selected.gif" ) );
				selected_ = i;
			}
		}
	}
	
	public void setSelected( int scale ) {
		items_[ selected_ ].setIcon( ImageIconFactory.instance().getImageIcon( "/images/blank.gif" ) );
		
		selected_ = scale;
		items_[ selected_ ].setIcon( ImageIconFactory.instance().getImageIcon( "/images/selected.gif" ) );
	}
	
	public void activated( SoundWindow window ) {
		setSelected( window.getView().getScale() );
	}
	
	private static JMenuItem[] items_ = null;
	private static int selected_ = 0;
	private static ViewMenu instance_ = null;
}
