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

public class TimeRuler
		extends JComponent
	{
	public TimeRuler( SoundView view ) {
		super();
		
		view_ = view;
		font_ = new Font( "Arial", Font.PLAIN, 10 );
	}
	
	public void paint( Graphics g ) {
/*		int x = 0;
		int y = 0;
		int w = getBounds().width;
		int h = getBounds().height;
		
		double millisPerSample = 1000.0 / view_.getModel().getSampleRate();
		double samplesPerPixel =
				(double) view_.getHorizontalScaleDenominator()
			/	(double) view_.getHorizontalScaleNumerator()
		;
		double millisPerPixel = millisPerSample * samplesPerPixel;
		
		// convenient to have major time divisions every 50 pixels or so
		double gap = 50.0;
		double millisPerGap = gap * millisPerPixel;

		// find an appropriate scale
		double step = 0.1;
		double subDiv = 10.0;
		boolean useSeconds = false;
		boolean useMinutes = false;
		if( millisPerGap < 0.1 ) {
			step = 0.1;
		}
		else if( millisPerGap < 2.0 ) {
			step = 1.0;
		}
		else if( millisPerGap < 20.0 ) {
			step = 10.0;
		}
		else if( millisPerGap < 200.0 ) {
			useSeconds = true;
			step = 0.1;
		}
		else if( millisPerGap < 2000.0 ) {
			useSeconds = true;
			step = 1.0;
		}
		else if( millisPerGap < 20000.0 ) {
			useSeconds = true;
			step = 10.0;
		}
		else {
			useMinutes = true;
			step = 1.0;
			subDiv = 6.0;
		}
		
		// and re-compute gap to fit
		if( useMinutes )
			gap = 60.0 * 1000.0 * step / millisPerPixel;
		else if( useSeconds )
			gap = 1000.0 * step / millisPerPixel;
		else
			gap = step / millisPerPixel;
		
		double subGap = gap / subDiv;
		while( subGap < 10 ) {
			subDiv /= 2.0;
			subGap = gap / subDiv;
		}
			
		// draw it
		g.setFont( font_ );
		FontMetrics fm = g.getFontMetrics();
		g.setColor( Color.darkGray );
		
		int subCtr = 0;
		double count = step;
		for( double xd = subGap; xd < w; xd += subGap ) {
			x = (int) xd;
			g.drawLine(
				x,
				h - 3,
				x,
				h
			);
			
			subCtr++;
			if( subCtr == subDiv ) {
				String str;
				if( ( (int) count ) == count )
					str = "" + (int) count;
				else
					str = "" + ( Math.round( count * 10.0 ) / 10.0 );
				
				g.drawString(
					str,
					x - fm.stringWidth( str ) / 2,
					h - 5
				);
				count += step;
				subCtr = 0;
			}
		}
*/	}
	
	SoundView view_ = null;
	Font font_ = null;
}
