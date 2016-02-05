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

public class WAVEFileAdapter extends SoundFileAdapter {
	public String getFileExtension() {
		return( "wav" );
	}
	
	public String getDescription() {
		return( "PCM WAVE files" );
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
		  	int pos = 0; // kludgy...

			// RIFF chunk
			byte[] fourBytes = new byte[ 4 ];
			in.read( fourBytes );
			pos += 4;
			Assert.assert( "RIFF".equals( new String( fourBytes ) ) );
			
			reverse( buffer, pos, 4 );
			int forprogressSize = in2.readInt();
			pos += 4;
			
			in.read( fourBytes );
			pos += 4;
			Assert.assert( "WAVE".equals( new String( fourBytes ) ) );

			// Chunks may appear in no particular order
			Hashtable ht = new Hashtable();
			while( in.available() >= 4 ) {
				// parse all the chunks
				in.read( fourBytes );
				pos += 4;
				String ckID = new String( fourBytes );

				reverse( buffer, pos, 4 );
				int ckSize = in2.readInt();
				pos += 4;
	
				byte[] data = new byte[ ckSize ];
				in.read( data );
				pos += ckSize;
				ht.put( ckID, new MiscChunk( ckID, ckSize, data ) );
			}

			int numChannels = 1;
			int numSampleFrames = 0;
			int sampleSize = 8;
			int sampleRate = 22050;

			// fORmAt chunk
			MiscChunk fmt_Ck = (MiscChunk) ht.get( "fmt " );
			Assert.assert( fmt_Ck.ckSize_ == 16 );
		
		  	in = new ByteArrayInputStream( fmt_Ck.data_ );
		  	pos = 0;
		  	in2 = new DataInputStream( in );

			// 2 bytes for format tag; for PCM, must be 0x0100
			reverse( fmt_Ck.data_, pos, 2 );
			int formatTag = in2.readUnsignedShort();
			pos += 2;
			Assert.assert( formatTag == 1 );
			
			// 2 bytes for number of channels
			reverse( fmt_Ck.data_, pos, 2 );
			numChannels = in2.readUnsignedShort();
			pos += 2;
			
			// 4 bytes for sampling rate
			reverse( fmt_Ck.data_, pos, 4 );
			sampleRate = in2.readInt();
			pos += 4;
			
			// 4 bytes for 'bytes per second'; ignored
			in.skip( 4 );
			pos += 4;
			
			// 2 bytes for 'block align'; ignored
			in.skip( 2 );
			pos += 2;
			
			// 2 bytes for sample size
			reverse( fmt_Ck.data_, pos, 2 );
			sampleSize = in2.readUnsignedShort();
			pos += 2;

			// data chunk 
			MiscChunk dataCk = (MiscChunk) ht.get( "data" );

		  	in = new ByteArrayInputStream( dataCk.data_ );
		  	pos = 0;
		  	in2 = new DataInputStream( in );
		
			// number of sample frames implicit
			int bytesPerSample = (int) Math.ceil( sampleSize / 8.0 );
			int bytesPerFrame = bytesPerSample * numChannels;
			numSampleFrames = dataCk.ckSize_ / bytesPerFrame;

			if( bytesPerSample > 1 ) {
				// reverse byte ordering for samples
				for( int frame=0; frame<numSampleFrames; frame++ ) {
					for( int ch=0; ch<numChannels; ch++ ) {
						reverse(
							dataCk.data_,
							frame * bytesPerFrame + ch * bytesPerSample,
							bytesPerSample
						);
					}
				}
			}
			else {
				// unsigned data; convert to signed
				for( int ch=0; ch<numChannels; ch++ ) {
					for( int frame=0; frame<numSampleFrames; frame++ ) {
						int sample = in2.readUnsignedByte();
						dataCk.data_[ ch * numSampleFrames + frame ] = (byte) (sample-128);
					}
				}
			}

			// soundData
			model = new SoundModel(
				numChannels,
				numSampleFrames,
				sampleSize,
				sampleRate,
				dataCk.data_
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
			int dataLen = 
					model.getNumSampleFrames()
				*	model.getBytesPerSample()
				*	model.getNumChannels()
			;
			byte[] data = new byte[ 44 + dataLen ];
			int pos = 0;

			ByteArrayOutputStream bOut = new ByteArrayOutputStream();
			DataOutputStream dOut = new DataOutputStream( bOut );
			
			byte[] temp = null;
			
			// RIFF chunk
			dOut.writeBytes( "RIFF" );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			pos += 4;		
			bOut.reset();
			
			dOut.writeInt( 36 + dataLen );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 4 );
			pos += 4;
			bOut.reset();
			
			dOut.writeBytes( "WAVE" );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			pos += 4;
			bOut.reset();
	
			// fORmAt chunk
			dOut.writeBytes( "fmt " );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			pos += 4;
			bOut.reset();
			
			dOut.writeInt( 16 );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 4 );
			pos += 4;
			bOut.reset();
		
			// 2 bytes for format tag; for PCM, must be 0x0100
			dOut.writeShort( 0x0100 );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			pos += 2;
			bOut.reset();
			
			// 2 bytes for number of channels
			dOut.writeShort( model.getNumChannels() );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 2 );
			pos += 2;
			bOut.reset();
			
			// 4 bytes for sampling rate
			dOut.writeInt( model.getSampleRate() );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 4 );
			pos += 4;
			bOut.reset();
			
			// 4 bytes for 'bytes per second'
			dOut.writeInt( model.getSampleRate() * model.getBytesPerFrame() );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 4 );
			pos += 4;
			bOut.reset();
			
			// 2 bytes for 'block align'
			dOut.writeShort( model.getBytesPerFrame() );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 2 );
			pos += 2;
			bOut.reset();
			
			// 2 bytes for sample size
			dOut.writeShort( model.getSampleSize() );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 2 );
			pos += 2;
			bOut.reset();
	
			// data chunk 
			dOut.writeBytes( "data" );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			pos += 4;
			bOut.reset();
			
			dOut.writeInt( dataLen );
			temp = bOut.toByteArray();
			System.arraycopy( temp, 0, data, pos, temp.length );
			reverse( data, pos, 4 );
			pos += 4;
			bOut.reset();
	
			// sample data
			System.arraycopy(
				model.getData(),
				SoundModel.O2_DATA,
				data,
				pos,
				dataLen
			);

			if( model.getBytesPerSample() > 1 ) {
				// reverse byte ordering for samples
				for( int frame=0; frame<model.getNumSampleFrames(); frame++ ) {
					for( int ch=0; ch<model.getNumChannels(); ch++ ) {
						reverse(
							data,
							44 + frame * model.getBytesPerFrame() + ch * model.getBytesPerSample(),
							model.getBytesPerSample()
						);
					}
				}
			}
			else {
				// signed data; convert to unsigned
				for( int ch=0; ch<model.getNumChannels(); ch++ ) {
					for( int frame=0; frame<model.getNumSampleFrames(); frame++ ) {
						data[ 44 + frame * model.getBytesPerFrame() + ch * model.getBytesPerSample() ] += 128;
					}
				}
			}
	
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

	public void reverse( byte[] arr, int pos, int size ) {
		int start = pos;
		int end = pos + size - 1;
		
		for( ; start<end; start++, end-- ) {
			byte temp = arr[ start ];
			arr[ start ] = arr[ end ];
			arr[ end ] = temp;
		}
	}
}
