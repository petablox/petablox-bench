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
import java.io.IOException;

public class ChannelView
		extends JComponent
	{
	public ChannelView(
			SoundModel model,
			SoundView view,
			SoundController controller,
			int channel
		) {
		super();
		
		model_ = model;
		view_ = view;
		channel_ = channel;
		
		// ungodly hack. Surely there's a way to ask the UI manager?
		setForeground( new JLabel().getForeground() );
		
		addMouseListener( controller );
		addMouseMotionListener( controller );

		setCursor(
			Cursor.getPredefinedCursor(
				Cursor.TEXT_CURSOR
			)
		);
	}
	
	public void setModel( SoundModel model ) {
		model_ = model;
	}
	
	public int getChannel() {
		return( channel_ );
	}
	
	// reshape() gets called just before a window is activated.
	// An expensive re-render operation results. Solution: store
	// width and height state locally and ignore reshape() calls
	// that aren't a reshaping of this component
	int width_ = 0;
	int height_ = 0;
	public void reshape( int x, int y, int w, int h ) {
		super.reshape( x, y, w, h );
		
		if( w != width_ || h != height_ ) {
			createNewBuffer();
			view_.stateChanged( new ChangeEvent( this ) );
			width_ = w;
			height_ = h;
		}
	}
	
	public synchronized void paint( Graphics g ) {
		if( buffer_ == null ) {
			createNewBuffer();
			render();
		}

		g.drawImage( buffer_, 0, 0, null );
		highlight( g );
	}
	
	public void createNewBuffer() {
		if( g_ != null ) {
			g_.dispose();
			g_ = null;
		}
		
		buffer_ = createImage(
			getBounds().width,
			getBounds().height
		);
		if( buffer_ != null ) {
			g_ = buffer_.getGraphics();
			g_.clipRect(
				0,
				0,
				getBounds().width,
				getBounds().height
			);
		}
	}
	
	public synchronized void render() {
		if( buffer_ != null ) {
			render( g_ );
		}
	}
	
	public synchronized void render( Graphics g ) {
		try {
			int x = 0;
			int y = 0;
			int w = getBounds().width;
			int h = getBounds().height;
						
			int centre = h/2;
			
			// clear background
			g.setColor( getBackground() );
			g.fillRect( x, y, w, h );
			
			// draw centre line
			g.setColor( getBackground().darker() );
			g.drawLine( x, centre, x+w, centre );
			
			g.setColor( getBackground().brighter() );
			g.drawLine( x, centre+1, x+w, centre+1 );
			
			// draw data
			if( model_.getNumSampleFrames() > 0 ) {
				g.setColor( getForeground() );
				
				int index = view_.getDataIndex() - 1;
				if( index < 0 ) index = 0;
				
				int hNum = view_.getHorizontalScaleNumerator();
				int hDen = view_.getHorizontalScaleDenominator();
				int vNum = view_.getVerticalScaleNumerator();
				int vDen = view_.getVerticalScaleDenominator();
				
				// get first sample point
				x += hNum / 2;
				int xo = x;
				int yo = centre - (
						( vNum * model_.getSample( channel_, index ) )
					/	vDen
				);
				
				// offset it left of the window edge
				if( index > 0 ) {
					xo -= hNum;
				}
				// ...or, if it's the very first sample, plot it
				else {
					if( hNum > 4 )
						g.fillRect( xo-2, yo-2, 5, 5 );
					x += hNum;
				}
				
				index++;
				
				int maxX = x + w + hNum;
				int maxIndex = model_.getNumSampleFrames();
				
				// optimised loops for zooming in or out
				if( hNum > 1 ) {
					// scaling UP
					for(	;
							x <= maxX && index < maxIndex;
							x += hNum
						) {
						y = centre - (
								( vNum * model_.getSample( channel_, index ) )
							/	vDen
						);
						index++;
			
						if( hNum > 4 )
							g.fillRect( x-2, y-2, 5, 5 );
						else
							g.drawLine( xo, yo, x, y );
						
						xo = x;
						yo = y;
					}
				}
				else {
					// scaling DOWN
					int yMin = 0;
					int yMax = 0;
					int yMinO = yo;
					int yMaxO = yo;
					
					int skip = 1;
					if( QuickRenderAction.instance().isQuickRender() )
						skip = (int) Math.ceil( hDen / 10.0 );
					
					for(	;
							x <= maxX && index < maxIndex;
							x++
						) {
						yMin = Integer.MAX_VALUE;
						yMax = Integer.MIN_VALUE;
			
						int skipIndex = index;
						for(	int i=0;
										i < hDen
									&&	skipIndex < maxIndex;
								i += skip
							) {
							y = centre - (
									( vNum * model_.getSample( channel_, skipIndex ) )
								/	vDen
							);
							skipIndex += skip;
			
							if( y < yMin ) yMin = y;
							if( y > yMax ) yMax = y;
						}
						index += hDen;
						
						if( yMin > yMaxO )
							g.drawLine( xo, yMaxO, x, yMin );
						else
							g.drawLine( xo, yMinO, x, yMax );
							
						g.drawLine( x, yMin, x, yMax );
						
						xo = x;
						yMinO = yMin;
						yMaxO = yMax;
					}
				}
				
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}	
	
	public synchronized void highlight( Graphics g ) {
		// highlight selection area
		Selection s = model_.getSelection();
		if(			s != null
				&&	( s.getChannel() == Selection.ALL_CHANNELS || s.getChannel() == channel_ )
			) {
			int w = getBounds().width;
			int h = getBounds().height;

			int hx = ( s.getOffset() - view_.getDataIndex() )
				* view_.getHorizontalScaleNumerator()
				/ view_.getHorizontalScaleDenominator()
			;
			if( hx >= w && view_.blink() )
				hx = w-1;			

			int hw = s.getLength()
				* view_.getHorizontalScaleNumerator()
				/ view_.getHorizontalScaleDenominator()
			;
			if( hw == 0 && view_.blink() )
				hw = 1;			

			// onscreen?
			if(			hw > 0
					&&	! ( hx + hw < 0 )
					&&	! ( w < hx )
				) {
				// bring to reasonable levels 
				int hx2 = hx + hw;
				if( hx < -5 )
					hx = -5;
				if( hx2 > w + 5 )
					hx2 = w + 5;
				hw = hx2 - hx;
				
				// render
				g.setColor( Color.black );
				g.setXORMode( getBackground() );

				if( view_.isActive() ) {
					g.fillRect( hx, 0, hw, h );
				}
				else {
					g.drawRect( hx, 0, hw-1, h-1 );
					g.drawRect( hx+1, 0+1, hw-3, h-3 );
					g.drawRect( hx+2, 0+2, hw-5, h-5 );
				}

				g.setPaintMode();
			}
		}
	}

	SoundModel model_ = null;
	SoundView view_ = null;	
	int channel_ = 0;
	
	Image buffer_ = null;
	Graphics g_ = null;
}

