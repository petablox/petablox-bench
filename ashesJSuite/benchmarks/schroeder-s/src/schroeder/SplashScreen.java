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

public class SplashScreen
		extends JFrame
	{
	public static SplashScreen instance() {
		if( instance_ == null ) {
			instance_ = new SplashScreen();
		}
		
		return( instance_ );
	}
	
	private SplashScreen() {
		super();

		Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
		setLocation(
			screenSize.width/2 - WIDTH/2,
			screenSize.height/2 - HEIGHT/2
		);
		setSize( WIDTH, HEIGHT );

		setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		Container pane = getContentPane();
		pane.setBackground( Color.white );
		pane.setLayout( new BorderLayout() );
		pane.add(
			new JLabel(
				ImageIconFactory.instance().getImageIcon( "/images/splash.gif" )
			),
			BorderLayout.CENTER
		);
		
		statusLabel_ = new JLabel( "Starting up..." );
		statusLabel_.setBackground( Color.white );
		statusLabel_.setForeground( Color.black );
		statusLabel_.setBorder(
			BorderFactory.createEmptyBorder(
				50,	// top
				50,	// left
				30,	// bottom
				20	// right
			) 
		);

		
		pane.add(
			statusLabel_,
			BorderLayout.SOUTH
		);
		
		pane.validate();
		
		repaint();
	}
	
	public void setStatus( String statusText ) {
		if( statusLabel_ != null ) {
			statusLabel_.setText( statusText );
			repaint();
		}
	}
	
	public void dispose() {
		super.dispose();
		instance_ = null;
	}
	
	private JLabel	statusLabel_ = null;

	protected static final int
		WIDTH = 400,
		HEIGHT = 400
	;
	
	private static SplashScreen	instance_ = null;
}
