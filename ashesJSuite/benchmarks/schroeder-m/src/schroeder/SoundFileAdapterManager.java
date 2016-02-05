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

public class SoundFileAdapterManager
		extends ClassLoader
	{
	public static SoundFileAdapterManager instance() {
		if( instance_ == null ) {
			instance_ = new SoundFileAdapterManager();
		}
		
		return( instance_ );
	}
	
	public Hashtable getFilters() {
		return( (Hashtable) filters_.clone() );
	}
	
	public SoundFileAdapter getAdapter( File f ) {
		SoundFileAdapter sfa = null;
		
		try {
			String name = f.getName();
			String ext = name.substring( name.lastIndexOf( '.' ) + 1 );
			sfa = getAdapter( ext );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( sfa );
	}
	
	public SoundFileAdapter getAdapter( String extension ) {
		SoundFileAdapter sfa = null;
		
		try {
			Class c = (Class) classes_.get( extension.toLowerCase().intern() );
			if( c != null )
				sfa = (SoundFileAdapter) c.newInstance();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( sfa );
	}

	public void init() {
		try {
			// default adapter
			SoundFileAdapter sfa = new AIFFFileAdapter();
			classes_.put(
				sfa.getFileExtension().toLowerCase().intern(),
				AIFFFileAdapter.class
			);
			filters_.put(
				sfa.getFileExtension().intern(),
				sfa.getDescription()
			);
			
			
			// raw binary data adapter
			sfa = new BinaryFileAdapter();
			classes_.put(
				sfa.getFileExtension().toLowerCase().intern(),
				BinaryFileAdapter.class
			);
			filters_.put(
				sfa.getFileExtension().intern(),
				sfa.getDescription()
			);
			
			
			// plug-ins	
			File f = new File( "adapters" );
			
			String[] files = f.list();
			for( int i=0; i<files.length; i++ ) {
				try {
					String filename = f.getAbsolutePath() + f.separatorChar + files[ i ];
					String extension = ExtensionFileFilter.getExtension( files[ i ] );

					if( extension != null && extension.equals( "class" ) ) {
						FileInputStream in = new FileInputStream( filename );
	
						int len = in.available();
						byte[] buf = new byte[ len ];
						in.read( buf );
						in.close();
						
						String name = files[ i ].substring(
							0, files[ i ].indexOf( ".class" )
						);
						Class c = defineClass( name, buf, 0, buf.length );
						classes_.put( name, c );
					}
					else if( extension != null && extension.equals( "jar" ) ) {
						JarFile jf = new JarFile( filename );
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
						
				if( c != null && SoundFileAdapter.class.isAssignableFrom( c ) ) {
					sfa = (SoundFileAdapter) c.newInstance();
					String extension = sfa.getFileExtension().toLowerCase().intern();
					classes_.put( extension, c );
					
					filters_.put(
						sfa.getFileExtension().intern(),
						sfa.getDescription()
					);
				}
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
	
	private SoundFileAdapterManager() {
		super();
		classes_ = new Hashtable();
		filters_ = new Hashtable();
	}
	
	private Hashtable classes_ = null;
	private Hashtable filters_ = null;
	private static SoundFileAdapterManager instance_ = null;
}
