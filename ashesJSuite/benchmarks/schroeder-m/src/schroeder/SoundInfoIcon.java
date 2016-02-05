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

public class SoundInfoIcon
		implements Icon
	{
	public void paintIcon(
			Component c,
			Graphics g,
			int x,
			int y
		) {
		try {
			SoundWindow active = Desktop.instance().getActiveWindow();
			if( active != null ) {
				String info = "";
			
				long millis = 
						( (long) active.getModel().getNumSampleFrames() * 1000L )
					/	  (long) active.getModel().getSampleRate()
				;
				double seconds = Math.round( (double) (millis / 100L) ) / 10.0;
				if( millis < 1000L ) {
					info += millis + " ms   ";
				}
				else if( seconds < 60.0 ) {
					info += seconds + " s   ";
				}
				else {
					int secs = (int) seconds;
					int minutes = secs / 60;
					secs -= minutes * 60;
					
					int hours = minutes / 60;
					minutes -= hours * 60;
					
					if( hours > 0 ) {
						info += hours + ":";
					}
					info += minutes + ":" + secs + " (h:m:s)   ";
				}

				info += active.getModel().getNumSampleFrames() + " frames   ";
				
				int bytes =
						active.getModel().getNumSampleFrames()
					*	active.getModel().getBytesPerFrame()
				;
				if( bytes < 1024 ) {
					info += bytes + " bytes";
				}
				else {
					double kb = Math.round( (double) (bytes * 10 / 1024) ) / 10.0;
					info += kb + " kB";
				}
				
				g.setColor( color_ );
				g.drawString(
					info,
					x+2,
					y+15
				);
			}
		}
		catch( Exception e ) {
			e.printStackTrace();
		}
	}

	public int getIconWidth() {
		return( 300 );
	}

	public int getIconHeight() {
		return( 20 );
	}
	
	Color color_ = new Color( 51, 51, 153 );
}
