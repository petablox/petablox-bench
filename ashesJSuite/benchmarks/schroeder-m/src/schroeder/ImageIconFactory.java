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
import java.io.*;
import java.util.*;
import java.util.zip.*;
import javax.swing.*;

public class ImageIconFactory
	{
	public static ImageIconFactory instance() {
		if( instance_ == null ) {
			instance_ = new ImageIconFactory();
		}
		
		return( instance_ );
	}

	public ImageIcon getImageIcon( String name ) {
		ImageIcon icon = (ImageIcon) images_.get( name );
		
		if( icon == null ) {
			try {
				InputStream imgStream = getClass().getResourceAsStream( name );
				
				byte imageBytes[] = new byte[ imgStream.available() ];
				imgStream.read( imageBytes );
				//icon = new ImageIcon( imageBytes );
			}
			catch( Exception e ) {
				e.printStackTrace();
			}
			
			if( icon != null ) {
				images_.put( name, icon );
			}
		}

		return( icon );
	}
	
	private ImageIconFactory() {
		images_ = new Hashtable();
	}
	
	private Hashtable images_ = null;
	private static ImageIconFactory instance_ = null;
}
