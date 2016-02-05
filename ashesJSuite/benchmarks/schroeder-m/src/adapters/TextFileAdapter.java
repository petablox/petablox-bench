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
import java.io.*;
import java.util.*;
import javax.swing.*;

public class TextFileAdapter extends SoundFileAdapter {
	public String getFileExtension() {
		return( "txt" ); // PENDING "csv"
	}
	
	public String getDescription() {
		return( "Text files" );
	}

	public SoundModel createSoundFromFile() {
 		SoundModel model = null;
 		
		// ask about interpretation; sample rate,
		// number of channels (bit depth is auto)
		boolean canceled = false;
		JDialog dialog = new JDialog(
			MainFrame.instance(),
			"Convert Text File",
			true
		);
		DataInterpretationPanel pane = new DataInterpretationPanel( dialog );
		dialog.getContentPane().add( pane );
		dialog.pack();
		dialog.setLocationRelativeTo( MainFrame.instance() );			
		dialog.show();
		
		canceled = pane.isCanceled();
		if( canceled ) {
			return( null );
		}
		
		int numChannels = pane.getNumChannels();
		int sampleRate = pane.getSampleRate();
		
		InputStream in = null;
		
		try {
			// read file into memory
		  	in = new FileInputStream( f_ );
		  	long length = f_.length();
		  	if( length > Integer.MAX_VALUE ) {
		  		throw new Exception( "File length is greater than Integer.MAX_VALUE" );
		  	}
		  	
		  	byte[] buffer = new byte[ (int) length ];
		  	in.read( buffer );
		  	in.close();
		  	
		  	String data = new String( buffer );
		  	
		  	// parse
			int numSampleFrames = 0;
			int sampleSize = 8;
			
			// find peak
		  	StringTokenizer st = new StringTokenizer( data );
			int max = 0;
			int min = 0;
			while( st.hasMoreElements() ) {
				int sample = 0;
				try {
					sample = Integer.parseInt( (String) st.nextElement() );
				}
				catch( Exception e ) {
					;
				}
				
				if( max < sample )
					max = sample;
				if( min > sample )
					min = sample;
				
				numSampleFrames++;
			}
			if( min < 0 ) min = 1 + min;
			if( max < min ) max = min; 
			
			if( max > 8388607 )
				sampleSize = 32;
			else if( max > 32767 )
				sampleSize = 24;
			else if( max > 127 )
				sampleSize = 16;
			
			numSampleFrames /= numChannels;
			
			model = new SoundModel(
				numChannels,
				numSampleFrames,
				sampleSize,
				sampleRate
			);
			model.setFileAdapter( this );
			
		  	st = new StringTokenizer( data );
			for( int idx = 0; idx<numSampleFrames; idx++ ) {
				for( int ch=0; ch<numChannels; ch++ ) {
					int sample = 0;
					
					try {
						String token = (String) st.nextElement();
						sample = Integer.parseInt( token );
					}
					catch( Exception e ) {
						;
					}
					
					model.setSample( ch, idx, sample );
				}
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			
			// return null if opening failed
			model = null;
		}
		finally {
			try {
				in.close();
			}
			catch( Exception e ) {
				;
			}
		}
		
		return( model );
	}
	
	public boolean createFileFromSound( SoundModel model ) {
		boolean success = true;
		PrintStream out = null;
		
		try {
			// output
			out = new PrintStream( new FileOutputStream( f_ ) );

			for( int idx = 0; idx<model.getNumSampleFrames(); idx++ ) {
				for( int ch=0; ch<model.getNumChannels(); ch++ ) {
					out.print( "" + model.getSample( ch, idx ) + "\t" );
				}
				out.println( "" );
			}

			out.flush();
		}
		catch( Exception e ) {
			success = false;
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		finally {
			try {
				if( out != null )
					out.close();
			}
			catch( Exception e ) {
				;
			}
		}		
		
		return( success );
	}
}
