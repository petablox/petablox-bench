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
import java.awt.*;
import java.awt.event.*;

public class SoundController
		implements MouseListener, MouseMotionListener, Runnable
	{
	public SoundController(
			SoundModel model,
			SoundView view
		) {
		model_ = model;
		view_ = view;
	}

	public void mouseClicked( MouseEvent evt ) {
		scrolling_ = false;
		scrollDir_ = DONT_SCROLL;
		
		if( view_.isActive() && evt.getClickCount() == 2 ) {
			SelectAllAction.instance().actionPerformed( null );
		}
		else if( view_.isActive() && evt.getClickCount() > 2 ) {
			try {
				model_.setSelection(
					( (ChannelView) evt.getSource() ).getChannel(),
					0,
					model_.getNumSampleFrames()
				);
			}
			catch( Exception e ) {
				if( schroeder.Constants.DEBUG ) {
					e.printStackTrace();
				}
			}
		}
	}
	
	public void mousePressed( MouseEvent evt ) {
		scrolling_ = false;
		scrollDir_ = DONT_SCROLL;

		if( view_.isActive() && evt.getClickCount() == 1 && evt.isShiftDown() ) {
			Selection s = model_.getSelection();
			if( s != null ) {
				updateSelection( evt );
			}
		}
		if( view_.isActive() && ! evt.isShiftDown() ) {
			index_ = view_.getDataIndex( evt.getX() );
		}
	}
	
	public void mouseReleased( MouseEvent evt ) {
		scrolling_ = false;
		scrollDir_ = DONT_SCROLL;
		
		if( index_ >= 0 ) {
			updateSelection( evt );
		}
	}
	
	public void mouseDragged( MouseEvent evt ) {
		if( index_ >= 0 ) {
			int x = evt.getX();

			if( x < 0 ) {
				scrollDir_ = SCROLL_LEFT;
			}
			else if( x > view_.getChannelWidth() ) {
				scrollDir_ = SCROLL_RIGHT;
			}
			else {
				scrollDir_ = DONT_SCROLL;
			}
			
			if( scrollDir_ != DONT_SCROLL && ! scrolling_ ) {
				scrolling_ = true;
				( new Thread( this ) ).start();
			}
			else if( scrollDir_ == DONT_SCROLL ) {
				scrolling_ = false;
				updateSelection( evt );
			}
		}
	}
	
	public void mouseMoved( MouseEvent evt ) {}

	public void mouseEntered( MouseEvent evt ) {}

	public void mouseExited( MouseEvent evt ) {}
	
	public void updateSelection( MouseEvent evt ) {
		try {
			while( lock_ ) {
				try {
					Thread.sleep( 10 );
				}
				catch( Exception e ) {
					;
				}
			}
		
			lock_ = true;
			if( index_ >= 0 ) {
				int index = index_;
				int index2 = view_.getDataIndex( evt.getX() );
				
				if( index2 < index ) {
					int temp = index;
					index = index2;
					index2 = temp;
				}
				
				int length = index2 - index;
				if( index + length > model_.getNumSampleFrames() )
					length = model_.getNumSampleFrames() - index;
			
				int channel = Selection.ALL_CHANNELS;
				if( model_.getSelection() != null )
					channel = model_.getSelection().getChannel();
				if( channel != Selection.ALL_CHANNELS ) {
					int thisChannel = ( (ChannelView) evt.getSource() ).getChannel();
					if( channel != thisChannel )
						channel = Selection.ALL_CHANNELS;
				}
			
				model_.setSelection(
					channel,
					index,
					length
				);
				lock_ = false;
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public void run() {
		int lastIndex = index_;
		int maxIndex = model_.getNumSampleFrames();
		int scrollIncr = view_.getScrollIncr();
		int chWidth = view_.getChannelWidth();
		int ch = model_.getSelection().getChannel();

		while( scrolling_ ) {
			try {
				while( lock_ ) {
					try {
						Thread.sleep( 10 );
					}
					catch( Exception e ) {
						;
					}
				}
				lock_ = true;

				int index = lastIndex;
				int index2 = index;
				
				if( scrollDir_ == SCROLL_LEFT ) {
					index2 = view_.getDataIndex( 0 );
					index2 -= scrollIncr;
				}
				else {
					index2 = view_.getDataIndex( chWidth );
					index2 += scrollIncr;
				}
				
				if( index < 0 )
					index = 0;
				if( index2 < 0 )
					index2 = 0;

				if( index2 < index ) {
					int temp = index;
					index = index2;
					index2 = temp;
				}

				int length = index2 - index;
				if( index + length > maxIndex )
					length = maxIndex - index;

				model_.setSelection(
					ch,
					index,
					length,
					false	// don't fire a change event
				);

				view_.scroll( scrollDir_ );
				
				lock_ = false;
				
				if( index == 0 || length == maxIndex - index ) {
					break;
				}
			}
			catch( Exception e ) {
				if( schroeder.Constants.DEBUG ) {
					e.printStackTrace();
				}
			}
		}
		
		view_.repaint();
	}
	
	SoundModel model_ = null;
	SoundView view_ = null;

	int index_ = -1;
	int scrollDir_ = DONT_SCROLL;	
	boolean scrolling_ = false;
	boolean lock_ = false;

	static final long SCROLL_TIME = 50L;
	static final int
		SCROLL_LEFT = -1,
		DONT_SCROLL = 0,
		SCROLL_RIGHT = 1
	;
}
