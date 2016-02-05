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


import schroeder.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;

public class Schroeder {
	public static void main( String[] args ) {
		// log errors
		if( Constants.DEBUG ) {
			try {
				( new File( "config" ) ).mkdirs();
				PrintStream log = new PrintStream( new FileOutputStream( "config/log.txt" ) );
				System.setErr( log );
				System.setOut( log );
			}
			catch( Exception e ) {
				;
			}
		}
	
		// Create and display splash screen
		SplashScreen splashScreen = SplashScreen.instance();
		splashScreen.show();
		
		// Read and set preferences
		splashScreen.setStatus( "Loading preferences..." );
		Preferences.load();
		try {
			UIManager.setLookAndFeel(
				Preferences.get(
					"LookAndFeel",
					UIManager.getCrossPlatformLookAndFeelClassName()
				)
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}

		// Load file format plug-ins
		splashScreen.setStatus( "Loading file format converters..." );
		SoundFileAdapterManager.instance().init();

		// Load transform and insert plug-ins
		splashScreen.setStatus( "Loading plug-ins..." );
		PluginManager.instance().init();

		// Build application
		MainFrame mainFrame = MainFrame.instance();
		
		// Go!
		splashScreen.hide();
		splashScreen.dispose();
		splashScreen = null;
		
		mainFrame.show();
	}
}
