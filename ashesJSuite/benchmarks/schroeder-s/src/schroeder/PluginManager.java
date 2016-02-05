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
import java.io.*;
import java.util.*;
import java.util.jar.*;
import java.util.zip.*;

public class PluginManager
		extends ClassLoader
	{
	public static PluginManager instance() {
		if( instance_ == null ) {
			instance_ = new PluginManager();
		}
		
		return( instance_ );
	}

	public Enumeration getMenuNames() {
		return( menus_.keys() );
	}

	public Enumeration getPluginNames( String title ) {
		Enumeration elements = null;
		
		Vector menu = (Vector) menus_.get( title );
		if( menu != null )
			elements = menu.elements();
			
		return( elements );
	}

	public Enumeration getPluginNames() {
		return( paths_.keys() );
	}

	public MonitoredAction getPlugin( String name ) {
		MonitoredAction action = null;
		
		try {
			Class c = (Class) classes_.get( name );
			if( c != null ) {
				if( MonitoredAction.class.isAssignableFrom( c ) )
					action = (MonitoredAction) c.newInstance();
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( action );
	}

	public String getPath( String name ) {
		return( (String) paths_.get( name ) );
	}

	public void init() {
		String baseDir = "plug-ins";
		File fDir = new File( baseDir );
		
		String[] files = fDir.list();
		for( int i=0; i<files.length; i++ ) {
			try {
				String filename = fDir.getAbsolutePath() + fDir.separatorChar + files[ i ];
				File f = new File( filename );
			
				if( f.isDirectory() ) {
					String title = files[ i ];
					Vector menu = new Vector();
					loadPlugins( baseDir + "/" + title, menu );
					menus_.put( title, menu );
				}
			}
			catch( Exception e ) {
				// well, we don't want it, then. ;-)
				e.printStackTrace();
			}
		}
	}

	private void loadPlugins( String dir, Vector names ) {
		try {
			// plug-ins	
			File fDir = new File( dir );
			
			String[] files = fDir.list();
			for( int i=0; i<files.length; i++ ) {
				try {
					String filename = fDir.getAbsolutePath() + fDir.separatorChar + files[ i ];
					File f = new File( filename );
				
					if( f.isDirectory() ) {
						loadPlugins( filename, names );
					}
					else {
						String extension = ExtensionFileFilter.getExtension( f );
						if( extension != null && extension.equals( "class" ) ) {
							FileInputStream in = new FileInputStream( f );
		
							int len = in.available();
							byte[] buf = new byte[ len ];
							in.read( buf );
							in.close();
							
							String name = files[ i ].substring(
								0, files[ i ].indexOf( ".class" )
							);
							Class c = defineClass( name, buf, 0, buf.length );
							classes_.put( name, c );
							
							if( c != null && MonitoredAction.class.isAssignableFrom( c ) ) {
								paths_.put( name, dir );
								names.addElement( name );
							}
						}
						else if( extension != null && extension.equals( "jar" ) ) {
							JarFile jf = new JarFile( f );
							Enumeration enum = jf.entries();
							while( enum.hasMoreElements() ) {
								ZipEntry ze = (ZipEntry) enum.nextElement();
								String name = ze.getName();

								if( name.indexOf( ".class" ) > 0 ) {
									InputStream in = jf.getInputStream( ze );
			
									int len = in.available();
									byte[] buf = new byte[ len ];
									in.read( buf );
									in.close();
									
									name = name.substring(
										0, name.indexOf( ".class" )
									);
									
									Class c = defineClass( name, buf, 0, buf.length );
									classes_.put( name, c );
									
									if( c != null && MonitoredAction.class.isAssignableFrom( c ) ) {
										paths_.put( name, dir );
										names.addElement( name );
									}
								}
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
			
			Enumeration classes = classes_.elements();
			while( classes.hasMoreElements() ) {
				Class c = (Class) classes.nextElement();
				resolveClass( c );
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	protected Class loadClass( String name, boolean resolve ) {
		Class c = null;
		
		try {
			c = findSystemClass( name );
			if( c == null ) {			
				c = (Class) classes_.get( name );
			}
			
			if( c != null && resolve ) {
				resolveClass( c );
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( c );
	}
	
	private PluginManager() {
		classes_ = new Hashtable();
		paths_ = new Hashtable();
		menus_ = new Hashtable();
	}
	
	private Hashtable classes_ = null;
	private Hashtable paths_ = null;
	private Hashtable menus_ = null;
	private static PluginManager instance_ = null;
}
