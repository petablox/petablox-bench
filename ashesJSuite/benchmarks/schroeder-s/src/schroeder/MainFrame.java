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

public class MainFrame
		extends JFrame
	{
	public static MainFrame instance() {
		if( instance_ == null ) {
			instance_ = new MainFrame();
		}
		
		return( instance_ );
	}
	
	private MainFrame() {
		super( Constants.APPLICATION_NAME );

		SplashScreen splashScreen = SplashScreen.instance();
		
		// locate and resize the main window
		splashScreen.setStatus( "Laying out windows..." );
		int x = Integer.parseInt(
			Preferences.get(
				"MainFrameX",
				"" + X
			)
		);
		int y = Integer.parseInt(
			Preferences.get(
				"MainFrameY",
				"" + Y
			)
		);
		int width = Integer.parseInt(
			Preferences.get(
				"MainFrameWidth",
				"" + WIDTH
			)
		);
		int height = Integer.parseInt(
			Preferences.get(
				"MainFrameHeight",
				"" + HEIGHT
			)
		);
		
		Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();
		if( x < 0 )
			x = 0;
		if( y < 0 )
			y = 0;
		if( width > screenSize.width )
			width = screenSize.width;
		if( height > screenSize.height )
			height = screenSize.height;
		if( x + width > screenSize.width )
			x = screenSize.width - width;
		if( y + height > screenSize.height )
			y = screenSize.height - height;

		setLocation( x, y );
		setSize( width, height );
		
		// build the menu bar
		splashScreen.setStatus( "Building menus..." );
		setJMenuBar( MainMenuBar.instance() );
		
		// set up the contents
		splashScreen.setStatus( "Building toolbars..." );
		setContentPane( MainPanel.instance() );
	
		// register event listeners
		WindowListener wl = new WindowAdapter() {
			public void windowClosing( WindowEvent evt ) {
				MainFrame.exit();
			}
		};
		addWindowListener( wl );
		
		ComponentListener cl = new ComponentAdapter() {
			public void componentMoved( ComponentEvent evt ) {
				Preferences.set(
					"MainFrameX",
					"" + getLocation().x
				);
				Preferences.set(
					"MainFrameY",
					"" + getLocation().y
				);
			}
			public void componentResized( ComponentEvent evt ) {
				Preferences.set(
					"MainFrameWidth",
					"" + getSize().width
				);
				Preferences.set(
					"MainFrameHeight",
					"" + getSize().height
				);
			}
		};
		addComponentListener( cl );
		
		// set up the initial action state
		MainPanel.instance().repaint();
	}
	
	public void dispose() {
		super.dispose();
		instance_ = null;
	}
	
	public static void exit() {
		// close (and offer to save) all windows
		boolean canceled = CloseAllAction.instance().closeAll();
		
		if( ! canceled ) {
			Preferences.save();
			System.exit( 0 );
		}
	}

	private static final int
		X = 20,
		Y = 40,
		WIDTH = 600,
		HEIGHT = 400
	;
	
	private static MainFrame instance_ = null;
}
