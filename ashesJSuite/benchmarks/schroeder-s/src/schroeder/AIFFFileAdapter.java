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

public class AIFFFileAdapter extends SoundFileAdapter {
	public String getFileExtension() {
		return( "aif" );
	}
	
	public String getDescription() {
		return( "Audio IFF files" );
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
		  	in = new ByteArrayInputStream( buffer );
		  	DataInputStream in2 = new DataInputStream( in );

			// FORM chunk
			byte[] fourBytes = new byte[ 4 ];
			in.read( fourBytes );
			Assert.assert( "FORM".equals( new String( fourBytes ) ) );
			
			int forprogressSize = in2.readInt();
			
			in.read( fourBytes );
			Assert.assert( "AIFF".equals( new String( fourBytes ) ) );

			// Chunks may appear in no particular order
			Hashtable ht = new Hashtable();
			while( in.available() >= 4 ) {
				// parse all the chunks
				in.read( fourBytes );
				String ckID = new String( fourBytes );
				int ckSize = in2.readInt();
	
				byte[] data = new byte[ ckSize ];
				in.read( data );
				ht.put( ckID, new MiscChunk( ckID, ckSize, data ) );
			}

			int numChannels = 1;
			int numSampleFrames = 0;
			int sampleSize = 8;
			int sampleRate = 11025;

			// COMMon chunk
			MiscChunk commCk = (MiscChunk) ht.get( "COMM" );
			Assert.assert( commCk.ckSize_ == 18 );
		
		  	in = new ByteArrayInputStream( commCk.data_ );
		  	in2 = new DataInputStream( in );

			// 2 bytes for number of channels
			numChannels = in2.readUnsignedShort();
		
			// 4 bytes for number of sample frames
			numSampleFrames = in2.readInt();
			
			// 2 bytes for sample size
			sampleSize = in2.readUnsignedShort();
			
			// 10 bytes for sampling rate
			// (Apple SANE extended format)
			int exp = in2.readShort();
			long fraction = in2.readLong();
			
			sampleRate = SoundModel.extendedToInt( exp, fraction );

			// SampledSounND chunk 
			MiscChunk ssndCk = (MiscChunk) ht.get( "SSND" );

		  	in = new ByteArrayInputStream( ssndCk.data_ );
		  	in2 = new DataInputStream( in );

			// 4 bytes for offset to data (for block alignment)
			offset_ = in2.readInt();

			// 4 bytes for block size (for block alignment)
			blocksize_ = in2.readInt();
				
			if( offset_ == 0 && blocksize_ == 0 ) {
				int numBytes = (int) Math.ceil( sampleSize / 8.0 );
				int dataLen = numSampleFrames *	numChannels * numBytes;

				Assert.assert(
					ssndCk.ckSize_ ==
						// offset int
						4
						// block size int
					+	4
						// sound data
					+	dataLen	
				);
				
				byte[] soundData = new byte[ dataLen ];
				in.read( soundData, 0, dataLen );
				
				model = new SoundModel(
					numChannels,
					numSampleFrames,
					sampleSize,
					sampleRate,
					soundData			
				);
				model.setFileAdapter( this );
			}
			else {
				// PENDING: support this
				throw new Exception( "Block-aligned sample data" );
			}
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
			
//		System.out.println( model );
		
		return( model );
	}
	
	public boolean createFileFromSound( SoundModel model ) {
		boolean success = true;
		FileOutputStream out = null;
		
		try {
			out = new FileOutputStream( f_ );
			out.write( model.getData() );
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
	
	// block alignment details
	int offset_ = 0;
	int blocksize_ = 0;
}
