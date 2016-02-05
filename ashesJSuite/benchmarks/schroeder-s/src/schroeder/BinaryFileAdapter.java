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
import javax.swing.*;

public class BinaryFileAdapter extends SoundFileAdapter {
	public String getFileExtension() {
		return( "bin" );
	}
	
	public String getDescription() {
		return( "Binary files" );
	}

	public SoundModel createSoundFromFile() {
 		SoundModel model = null;
 		
		// ask about interpretation; sample rate,
		// number of channels (bit depth is auto)
		boolean canceled = false;
		JDialog dialog = new JDialog(
			MainFrame.instance(),
			"Convert Binary File",
			true
		);
		DataInterpretationPanel pane = new DataInterpretationPanel( dialog, true );
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
		int sampleSize = pane.getSampleSize();
		int bytesPerSample = sampleSize / 8;
		
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
		  	
		  	// interpret data
			int numSampleFrames = ( (int) length ) / ( numChannels * bytesPerSample );
			
			byte[] data = new byte[ numSampleFrames * bytesPerSample * numChannels ];
			System.arraycopy( buffer, 0, data, 0, data.length );

			model = new SoundModel(
				numChannels,
				numSampleFrames,
				sampleSize,
				sampleRate,
				data
			);
			model.setFileAdapter( this );
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
		FileOutputStream out = null;
		
		try {
			// output
			out = new FileOutputStream( f_ );
			byte[] data = model.getData();
			out.write( data, SoundModel.O2_DATA, data.length - SoundModel.O2_DATA );
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
