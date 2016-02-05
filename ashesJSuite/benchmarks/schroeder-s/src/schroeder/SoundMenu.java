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

public class SoundMenu
		extends JMenu
	{
	public static SoundMenu instance() {
		if( instance_ == null ) {
			instance_ = new SoundMenu();
		}
		
		return( instance_ );
	}
	
	private SoundMenu() {
		super( "Sound", true );
		setMnemonic( 's' );
		
		JMenuItem item = add( StopAction.instance() );
		item.setMnemonic( 's' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_PERIOD,
				Event.CTRL_MASK
			)
		);

		item = add( PlayAction.instance() );
		item.setMnemonic( 'p' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_P,
				Event.CTRL_MASK
			)
		);

		item = add( PlaySelectionAction.instance() );
		item.setMnemonic( 'l' );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_L,
				Event.CTRL_MASK
			)
		);

		item = add( PlayClipboardAction.instance() );
		item.setAccelerator(
			KeyStroke.getKeyStroke(
				KeyEvent.VK_SEMICOLON,
				Event.CTRL_MASK
			)
		);

		item = add( LoopAction.instance() );
		LoopAction.instance().setMenuItem( item );
		item.setMnemonic( 'o' );

		add( new JSeparator() );

		item = add( SampleRateAction.instance() );
		item.setIcon( ImageIconFactory.instance().getImageIcon( "/images/blank.gif" ) );
		item.setMnemonic( 'r' );
		
		item = add( SampleSizeAction.instance() );
		item.setIcon( ImageIconFactory.instance().getImageIcon( "/images/blank.gif" ) );
		item.setMnemonic( 'i' );
		
		add( new JSeparator() );
		
		item = add( SplitChannelsAction.instance() );
		item.setMnemonic( 't' );
		
		item = add( JoinChannelsAction.instance() );
		item.setMnemonic( 'j' );
		
		item = add( AddChannelAction.instance() );
		item.setMnemonic( 'a' );
	}
	
	private static SoundMenu instance_ = null;
}
