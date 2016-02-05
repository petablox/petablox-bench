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
import	java.io.*;
import	java.util.Properties;

public class Preferences {
	public static boolean load() {
		boolean success = true;
		
		try {
			properties_ = new Properties();
			FileInputStream in = new FileInputStream( PREFS_FILE );
			properties_.load( in );
			in.close();
		}
		catch( FileNotFoundException e ) {
			// ignore
			;
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			success = false;
		}
		
		return( success );
	}
	
	public static boolean save() {
		boolean success = true;
		
		try {
			if( properties_ != null ) {
				File f = new File( PREFS_DIR );
				f.mkdirs();
				FileOutputStream out = new FileOutputStream( PREFS_FILE );
				properties_.save(
					out,
					Constants.APPLICATION_NAME + " preferences"
				);
				out.close();
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			success = false;
		}
		
		return( success );
	}
	
	public static String get( String key, String defaultValue ) {
		String value = null;
		
		try {
			if( properties_ == null )
				properties_ = new Properties();
			
			value = properties_.getProperty( key );
			if( value == null ) {
				value = defaultValue;
				set( key, value );
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			value = defaultValue;
		}
		
		return( value );
	}
	
	public static boolean set( String key, String value ) {
		boolean success = true;
		
		try {
			if( properties_ == null )
				properties_ = new Properties();
			
			properties_.put( key, value );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			success = false;
		}
		
		return( success );		
	} 
	
	private static Preferences	instance_ = null;
	private static Properties	properties_ = null;
	private static final String PREFS_DIR = "config/";
	private static final String PREFS_FILE = PREFS_DIR + "prefs.txt";
}
