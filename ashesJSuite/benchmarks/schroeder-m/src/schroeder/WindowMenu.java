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

public class WindowMenu
		extends JMenu
	{
	public static WindowMenu instance() {
		if( instance_ == null ) {
			instance_ = new WindowMenu();
		}
		
		return( instance_ );
	}
	
	private WindowMenu() {
		super( "Window", true );
		setMnemonic( 'w' );
		
		JMenuItem item = add( AboutSchroederAction.instance() );
		
		add( new JSeparator() );

		item = add( TileVerticallyAction.instance() );
		item.setMnemonic( 'v' );
		
		item = add( TileHorizontallyAction.instance() );
		item.setMnemonic( 'h' );
		
		item = add( TileAction.instance() );
		item.setMnemonic( 't' );
		
		item = add( CascadeAction.instance() );
		item.setMnemonic( 'c' );
		
		items_ = new Hashtable();
		
		mnePool_ = new Vector();
		for( int i=1; i<=9; i++ )
			mnePool_.addElement( "" + i );
		mnePool_.addElement( "" + 0 );
		
		mneQueue_ = new Vector();
	}
	
	public void addWindow( SoundWindow window ) {
		try {
			if( getItemCount() == ITEM_COUNT ) {
				// insert separator
				add( new JSeparator() );
			}

			// choose a mnemonic
			String mne = null;
			if( mnePool_.size() > 0 ) {
				mne = (String) mnePool_.elementAt( 0 );
				mnePool_.removeElementAt( 0 );
			}
			
			// title it
			String title = window.getTitle();
			if( mne != null ) {
				title = mne + " " + title;
			}

			// add document window selector
			JMenuItem item = add( new SelectWindowAction( title, window ) );
			
			if( mne != null ) {
				item.setMnemonic( mne.charAt( 0 ) );
				item.setAccelerator(
					KeyStroke.getKeyStroke(
						mne.charAt( 0 ),
						Event.CTRL_MASK
					)
				);
			}
			else {
				mneQueue_.addElement( item );
			}
			
			// remember it so it can be removed easily
			items_.put( window, item );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public void removeWindow( SoundWindow window ) {
		try {
			// find and remove menu item for this window
			JMenuItem item = (JMenuItem) items_.remove( window );
			
			// trap ClassCastException thrown by superclass
			// PENDING: why? is my code wrong, or is this a bug in Swing?
			try {
				remove( item );
			}
			catch( ClassCastException e ) {
				;
			}
			
			// if it had a mnemonic...
			int mne = item.getMnemonic();
			if( mne > 0 ) {
				if( mneQueue_.size() > 0 ) {
					// offer it to another item
					JMenuItem mneItem = (JMenuItem) mneQueue_.elementAt( 0 );
					mneQueue_.removeElementAt( 0 );
					
					mneItem.setText(
						String.valueOf( (char) mne ) + " " + mneItem.getText()
					);
					mneItem.setMnemonic( mne );
				}
				else {
					// if not, return it to the pool
					String mneStr = String.valueOf( (char) mne );
					if( mnePool_.size() == 0 || mneStr.equals( "0" ) ) {
						mnePool_.addElement( mneStr );
					}
					else {
						for( int i=0; i<mnePool_.size(); i++ ) {
							String curStr = (String) mnePool_.elementAt( i );
							if(		curStr.equals( "0" ) ||
									mneStr.compareTo( curStr ) < 0
								) {
								mnePool_.insertElementAt( mneStr, i );
								break;
							}
						}
					}
				}
			}
			else {
				// remove the item from the queue
				mneQueue_.removeElement( item );
			}
			
			if( getItemCount() == ITEM_COUNT + 1 ) {
				// remove separator
				remove( ITEM_COUNT );
			}			
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public void updateItem( SoundWindow window ) {
		try {
			JMenuItem item = (JMenuItem) items_.get( window );
			String mne = String.valueOf( (char) item.getMnemonic() );
		
			// retitle it
			String title = window.getTitle();
			if( mne != null ) {
				title = mne + " " + title;
			}
			
			item.setText( title );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
		
	public void activated( SoundWindow window ) {
		JMenuItem item = (JMenuItem) items_.get( window );
		item.setIcon(
			ImageIconFactory.instance().getImageIcon( "/images/selected.gif" )
		);
	}
	
	public void deactivated( SoundWindow window ) {
		JMenuItem item = (JMenuItem) items_.get( window );
		item.setIcon(
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	}
	
	private Vector mnePool_ = null;
	private Vector mneQueue_ = null;
	private Hashtable items_ = null;
	
	private static final int ITEM_COUNT = 6;
	
	private static WindowMenu instance_ = null;
}
