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

public class AUFileAdapter extends SoundFileAdapter {
	public String getFileExtension() {
		return( "au" );
	}
	
	public String getDescription() {
		return( "PCM NeXT/Sun files" );
	}

	public SoundModel createSoundFromFile() {
 		SoundModel model = null;
 		
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
		  	
		  	// parse
			int numChannels = 1;
			int numSampleFrames = 0;
			int sampleSize = 8;
			int sampleRate = 11025;

		  	in = new ByteArrayInputStream( buffer );
		  	DataInputStream in2 = new DataInputStream( in );

			// .snd 'Magic Number' ID
			byte[] fourBytes = new byte[ 4 ];
			in.read( fourBytes );
			Assert.assert( ".snd".equals( new String( fourBytes ) ) );
			
			// offset from beginning of file to sample data
			int offset = in2.readInt();
			
			// number of bytes of data present
			int dataSize = in2.readInt();

			int dataFormat = in2.readInt();
			// PENDING: switch on formats
			Assert.assert( dataFormat == 3 );
			sampleSize = 16; // implicit in format

			sampleRate = in2.readInt();
			numChannels = in2.readInt();
			
			int bytesPerSample = (int) Math.ceil( sampleSize / 8.0 );
			int bytesPerFrame = bytesPerSample * numChannels;
			numSampleFrames = dataSize / bytesPerFrame;
			
			in.reset();
			in.skip( offset );
			
			byte[] soundData = new byte[ dataSize ];
			in.read( soundData, 0, soundData.length );
			
			model = new SoundModel(
				numChannels,
				numSampleFrames,
				sampleSize,
				sampleRate,
				soundData			
			);
			model.setFileAdapter( this );
		}
		catch( AssertionFailedException e ) {
			alertUnsupportedFileFormat();
			model = null;
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
			// PENDING; other sample sizes
			Assert.assert( model.getSampleSize() == 16 );
		
			int dataLen = 
					model.getNumSampleFrames()
				*	model.getBytesPerSample()
				*	model.getNumChannels()
			;
			byte[] data = new byte[ 28 + dataLen ];

			ByteArrayOutputStream bOut = new ByteArrayOutputStream();
			DataOutputStream dOut = new DataOutputStream( bOut );
			
			// .snd 'Magic Number' ID
			dOut.writeBytes( ".snd" );
			
			// offset to data
			dOut.writeInt( 28 );

			// data size
			dOut.writeInt( dataLen );

			// data format
			dOut.writeInt( 3 );

			// sample rate
			dOut.writeInt( model.getSampleRate() );

			// channel count
			dOut.writeInt( model.getNumChannels() );
			
			// optional info data
			dOut.writeBytes( "Dave" );
			
			byte[] temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, 0, temp.length );
	
			// sample data
			System.arraycopy(
				model.getData(),
				SoundModel.O2_DATA,
				data,
				28,
				dataLen
			);
		
			// output
			out = new FileOutputStream( f_ );
			out.write( data );
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
