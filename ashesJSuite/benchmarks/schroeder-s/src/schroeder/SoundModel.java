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
import java.applet.*;
import java.io.*;
import java.net.URL;
import java.util.*;
import javax.swing.ProgressMonitor;
import javax.swing.event.*;

public class SoundModel
		implements schroeder.Invariable
	{
	public synchronized boolean getInvariant() throws Exception {
		return(
			// valid number of channels
				getNumChannels() > 0
			
			// length consistency
			&&		( getIntAt( O2_FORM_LENGTH ) - FORM_LENGTH )
				==	( getIntAt( O2_SSND_LENGTH ) - SSND_LENGTH )
			&&		( getIntAt( O2_SSND_LENGTH ) - SSND_LENGTH )
				==	( getNumSampleFrames() * getBytesPerFrame() )
			
			// valid sample size
			&&		0 < getSampleSize() && getSampleSize() <= 32
			
			// valid sample rate
			&&		0 < getSampleRate()
			
			// valid selection
			&&	(		selection_ == null
					||	(		selection_.getChannel() < getNumChannels()
							&&	0 <= selection_.getOffset()
							&&	selection_.getOffset() <= getNumSampleFrames()
							&&	selection_.getOffset() + selection_.getLength() <= getNumSampleFrames()
						)
				)
			
			// valid byte count
			&&	data_.length % 2 == 0
		);
	}

	public SoundModel() throws Exception {
		data_ = new byte[ DEFAULT_DATA.length ];
		System.arraycopy(
			DEFAULT_DATA,
			0,
			data_,
			0,
			DEFAULT_DATA.length
		);
		
		init();
		
		Assert.post( true, this );
	}
	
	public SoundModel(
			int numChannels,
			int numSampleFrames,
			int sampleSize,
			int sampleRate,
			byte[] data
		) throws Exception {
		this(
			numChannels,
			numSampleFrames,
			sampleSize,
			sampleRate
		);
		System.arraycopy(
			data,
			0,
			data_,
			O2_DATA,
			data.length
		);
		
		Assert.post( true, this );
	}
	
	public SoundModel(
			int numChannels,
			int numSampleFrames,
			int sampleSize,
			int sampleRate
		) throws Exception {
		// data template
		int numBytes = (int) Math.ceil( sampleSize / 8.0 );
//		if( numBytes == 3 ) numBytes = 4;
		
		int length = 
				O2_DATA
			+	numChannels
			*	numSampleFrames
			*	numBytes
		;
		if( length % 2 != 0 ) length++;
		data_ = new byte [ length ];
		
		System.arraycopy(
			DEFAULT_DATA,
			0,
			data_,
			0,
			DEFAULT_DATA.length
		);
		init();

		try {
			// numChannels
			bOut_.reset();
			dOut_.writeShort( numChannels );
			System.arraycopy(
				bOut_.toByteArray(),
				0,
				data_,
				O2_NUM_CHANNELS,
				2
			);
	
			// sampleSize
			bOut_.reset();
			dOut_.writeShort( sampleSize );
			System.arraycopy(
				bOut_.toByteArray(),
				0,
				data_,
				O2_SAMPLE_SIZE,
				2
			);
	
			// sampleRate
			System.arraycopy(
				intToExtended( sampleRate ),
				0,
				data_,
				O2_SAMPLE_RATE,
				10
			);

			readFormat();
	
			// numSampleFrames
			setNumSampleFrames( numSampleFrames );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		Assert.post( true, this );
	}

	public SoundModel(
			SoundFileAdapter adapter,
			byte[] data
		) throws Exception {
		adapter_ = adapter;
		data_ = data;
		
		init();
		
		Assert.post( true, this );
	}
	
	private void init() {
		bIn_ = new ByteArrayInputStream( data_ );
		dIn_ = new DataInputStream( bIn_ );
		
		bOut_ = new ByteArrayOutputStream();
		dOut_ = new DataOutputStream( bOut_ );
	
		undoBuffer_ = null;
		undoSelection_ = null;
		redoBuffer_ = null;
		redoSelection_ = null;
		
		readFormat();
	}
	
	private void readFormat() {
		numChannels_ = readNumChannels();
		numSampleFrames_ = readNumSampleFrames();
		sampleSize_ = readSampleSize();
		sampleRate_ = readSampleRate();
		
		bytesPerSample_ = (int) Math.ceil( sampleSize_ / 8.0 );
		bytesPerFrame_ = bytesPerSample_ * numChannels_;
		
		if( bytesPerSample_ == 4 ) {
			maxValue_ = Integer.MAX_VALUE;
			minValue_ = Integer.MIN_VALUE;
		}
		else {
			int unsigned = (int) Math.pow( 2.0, getEffectiveSampleSize() );
			maxValue_ = unsigned / 2 - 1;
			minValue_ = unsigned / -2;
		}
	}
	
	public void play() {
		try {
			stop();
		
			if( ac1_ == null ) {
				// ensure that Java can play it
				int saveSize = getSampleSize();
				int tempSize = getEffectiveSampleSize();
				if( tempSize != saveSize )
					setSampleSize( tempSize );
			
				// copy to disk
				File file = File.createTempFile( "AIF", ".aif" );
				
				FileOutputStream out = new FileOutputStream( file );
				out.write( data_ );
				out.flush();
				out.close();
				file.deleteOnExit();
				
				if( tempSize != saveSize )
					setSampleSize( saveSize );
				
				URL u = new URL( "file:///" + file.getAbsolutePath() );
				ac1_ = Applet.newAudioClip( u );
				
				// force a load; what an ugly hack.
				ac1_.play();
				ac1_.stop();
			}
/*			else {
				// an experiment; will refraining from calling
				// play() repeatedly too quickly help stabilize
				// this JRE release?
				Thread.sleep( 100 );
			}
*/			
			if( loop_ )
				ac1_.loop();
			else
				ac1_.play();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public void playSelection() {
		try {
			stop();
		
			if( ac2_ == null ) {
				// ensure that Java can play it
				int saveSize = getSampleSize();
				int tempSize = getEffectiveSampleSize();
				if( tempSize != saveSize )
					setSampleSize( tempSize );

				int temp = selection_.getLength();
				if( selection_.getLength() == 0 ) {
					selection_.setLength(
						getNumSampleFrames() - selection_.getOffset()
					);
				}
				SoundModel copy = getCopySelection();
				selection_.setLength( temp );
			
				// copy to disk
				File file = File.createTempFile( "AIF", ".aif" );
				
				FileOutputStream out = new FileOutputStream( file );
				out.write( copy.data_ );
				out.flush();
				out.close();
				file.deleteOnExit();
				
				if( tempSize != saveSize )
					setSampleSize( saveSize );
				
				URL u = new URL( "file:///" + file.getAbsolutePath() );
				ac2_ = Applet.newAudioClip( u );
				
				// force a load
				ac2_.play();
				ac2_.stop();
			}
/*			else {
				// an experiment; will refraining from calling
				// play() repeatedly too quickly help stabilize
				// this JRE release?
				Thread.sleep( 100 );
			}
*/			
			if( loop_ )
				ac2_.loop();
			else
				ac2_.play();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public boolean isLoop() {
		return( loop_ );
	}

	public void setLoop( boolean loop ) {
		loop_ = loop;
		if( ! loop_ )
			stop();
	}
	
	public void stop() {
		try {
			if( ac1_ != null ) {
				ac1_.stop();
			}
			if( ac2_ != null ) {
				ac2_.stop();
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	public SoundModel getCopyAll() throws Exception {
		byte[] data = new byte[ data_.length ];
		System.arraycopy(
			data_,
			0,
			data,
			0,
			data_.length
		);

		return( new SoundModel( null, data ) );
	}
	
	public SoundModel getCopySelection() throws Exception {
		return( getCopySelection( null, 0, 0 ) );
	}
	
	public SoundModel getCopySelection(
				ProgressMonitor monitor,
				int progressPre,
				int progressSize
			) throws Exception
		{
		SoundModel copy = null;
	
		if( selection_ != null ) {
			if(			selection_.getChannel() == Selection.ALL_CHANNELS
					||	getNumChannels() == 1
				) {
				// complete copy
				if(			selection_.getOffset() == 0
						&&	selection_.getLength() == getNumSampleFrames()
					) {
					copy = getCopyAll();
				}
				// partial copy of all channels
				else {
					int start = selection_.getOffset() * getBytesPerFrame();
					int length = selection_.getLength() * getBytesPerFrame();
		
					copy = new SoundModel(
						getNumChannels(),
						selection_.getLength(),
						getSampleSize(),
						getSampleRate()
					);
		
					System.arraycopy(
						data_,
						O2_DATA + start,
						copy.data_,
						O2_DATA,
						length
					);
				}
			}
			else {
				// copy of only one channel of multichannel sound
				int channel = selection_.getChannel();
				int start = selection_.getOffset();
				int length = selection_.getLength();
				int max = start + length;
	
				copy = new SoundModel(
					1,	// numChannels
					selection_.getLength(),
					getSampleSize(),
					getSampleRate()
				);
				
				
				for( int idx=start; idx<max; idx++ ) {
					copy.setSample(
						0,
						idx-start,
						getSample( channel, idx )
					);
					
					if( monitor != null ) {
						monitor.setProgress( progressPre + progressSize * ( idx-start ) / length );
					}
				}
			}
		}

		if( monitor != null ) {
			monitor.setProgress( progressPre + progressSize );
		}

		return( copy );
	}
	
	public void replaceAll( SoundModel paste ) throws Exception {
		Assert.pre( paste != null );

		setData( paste );
	}
	
	public void replaceSelection( SoundModel paste ) throws Exception {
		replaceSelection( paste, null, 0, 0 );
	}
	
	public void replaceSelection(
				SoundModel paste,
				ProgressMonitor monitor,
				int progressPre,
				int progressSize
			) throws Exception
		{
		Assert.pre(
				// something to paste
				paste != null
			&&		// paste matches selection
					(		// number of channels
							(		// all channels
									(		selection_.getChannel() == Selection.ALL_CHANNELS
										&&	paste.getNumChannels() == getNumChannels()
									)
								||	// one channel
									(		selection_.getChannel() != Selection.ALL_CHANNELS
										&&	paste.getNumChannels() == 1
									)
							)
						&&	// sample size
							(	paste.getSampleSize() == getSampleSize()
							)
						&&	// sample rate
							(	paste.getSampleRate() == getSampleRate()
							)
					)
				||	// this is an empty model
					(	getNumSampleFrames() == 0
					)
		
		);
		
		if(	selection_ != null ) {
			if(			selection_.getChannel() == Selection.ALL_CHANNELS
					||	getNumChannels() == 1
				) {
				// complete replace
				if(			selection_.getOffset() == 0
						&&	selection_.getLength() == getNumSampleFrames()
					) {
					replaceAll( paste );
				}
				// partial replace of all channels
				else {
					SoundModel copy = new SoundModel(
						getNumChannels(),
							getNumSampleFrames()
						-	selection_.getLength()
						+	paste.getNumSampleFrames(),
						getSampleSize(),
						getSampleRate()
					);
		
					// keep from 0 to start of selection
					int start =
							selection_.getOffset()
						*	getBytesPerFrame()
					;
					System.arraycopy(
						data_,
						O2_DATA,
						copy.data_,
						O2_DATA,
						start
					);
					
					// insert paste data
					int pLength = 
							paste.getNumSampleFrames()
						*	paste.getBytesPerFrame()
					;
					System.arraycopy(
						paste.data_,
						O2_DATA,
						copy.data_,
						O2_DATA + start,
						pLength	
					);
					
					// keep from end of selection to end of data
					int end = start +
							selection_.getLength()
						*	getBytesPerFrame()
					;
					int eLength =
							getNumSampleFrames()
						*	getBytesPerFrame()
						-	end
					;
					System.arraycopy(
						data_,
						O2_DATA + end,
						copy.data_,
						O2_DATA + start + pLength,
						eLength
					);
					
					// re-validate selection
					copy.setSelection(
						new Selection(
							selection_.getChannel(),
							selection_.getOffset(),
							paste.getNumSampleFrames()
						)
					);
					
					setData( copy );
				}
			}
			else {
				// replace of only one channel of multichannel sound
				int newSize = 
						getNumSampleFrames()
					-	selection_.getLength()
					+	paste.getNumSampleFrames()
				;
				if( newSize < getNumSampleFrames() )
					newSize = getNumSampleFrames();

				SoundModel copy = new SoundModel(
					getNumChannels(),
					newSize,
					getSampleSize(),
					getSampleRate()
				);
				
				// for progress monitor
				int monDen = newSize * getNumChannels();
				int monNum = 0;

				for( int ch=0; ch < getNumChannels(); ch++ ) {
					if( ch == selection_.getChannel() ) {
						int idx = 0;
					
						// keep from 0 to start of selection
						int i0 = 0;
						int iMax = i0 + selection_.getOffset();
						for( int i=i0; i < iMax; i++ ) {
							copy.setSample( ch, idx++, getSample( ch, i ) );
							
							if( monitor != null ) {
								monitor.setProgress( progressPre + progressSize * monNum++ / monDen );
							}
						}

						// insert paste data
						i0 = 0;
						iMax = i0 + paste.getNumSampleFrames();
						for( int i=i0; i < iMax; i++ ) {
							copy.setSample( ch, idx++, paste.getSample( 0, i ) );
							
							if( monitor != null ) {
								monitor.setProgress( progressPre + progressSize * monNum++ / monDen );
							}
						}
						
						// keep from end of selection to end of data
						i0 = selection_.getOffset() + selection_.getLength();
						iMax = getNumSampleFrames();
						for( int i=i0; i < iMax; i++ ) {
							copy.setSample( ch, idx++, getSample( ch, i ) );
							
							if( monitor != null ) {
								monitor.setProgress( progressPre + progressSize * monNum++ / monDen );
							}
						}
					}
					else {
						// copy entire channel
						for( int i=0; i<getNumSampleFrames(); i++ ) {
							copy.setSample( ch, i, getSample( ch, i ) );
							
							if( monitor != null ) {
								monitor.setProgress( progressPre + progressSize * monNum++ / monDen );
							}
						}
					}
				}
				
				// re-validate selection
				copy.setSelection(
					new Selection(
						selection_.getChannel(),
						selection_.getOffset(),
						paste.getNumSampleFrames()
					)
				);
				
				setData( copy );

				if( monitor != null ) {
					monitor.setProgress( progressPre + progressSize );
				}
			}
		}
	}
	
	private void setData( SoundModel model ) throws Exception {
		Assert.pre( model != null );

		undoBuffer_ = data_;
		if( selection_ != null )
			undoSelection_ = new Selection( selection_ );
		else
			undoSelection_ = null;
		
		data_ = model.data_;
		bIn_ = new ByteArrayInputStream( data_ );
		dIn_ = new DataInputStream( bIn_ );
		
		selection_ = model.getSelection();
		
		modelChanged();
		
		Assert.post( true, this );
	}
	
	public SoundFileAdapter getFileAdapter() {
		return( adapter_ );
	}
	
	public void setFileAdapter( SoundFileAdapter adapter ) {
		adapter_ = adapter;
	}
	
	public boolean isDirty() {
		return( dirty_ );
	}
	
	public void setDirty( boolean dirty ) {
		dirty_ = dirty;
	}
	
	public boolean canUndo() {
		return( undoBuffer_ != null );
	}
	
	public void undo() throws Exception {
		Assert.pre( undoBuffer_ != null );

		redoBuffer_ = data_;
		data_ = undoBuffer_;
		undoBuffer_ = null;
		
		redoSelection_ = selection_;
		selection_ = undoSelection_;
		undoSelection_ = null;
		
		bIn_ = new ByteArrayInputStream( data_ );
		dIn_ = new DataInputStream( bIn_ );
		
		modelChanged();
		
		Assert.post( true, this );
	}
	
	public boolean canRedo() {
		return( redoBuffer_ != null );
	}
	
	public void redo() throws Exception {
		Assert.pre( redoBuffer_ != null );

		undoBuffer_ = data_;
		data_ = redoBuffer_;
		redoBuffer_ = null;
		
		undoSelection_ = selection_;
		selection_ = redoSelection_;
		redoSelection_ = null;

		bIn_ = new ByteArrayInputStream( data_ );
		dIn_ = new DataInputStream( bIn_ );
		
		modelChanged();
		
		Assert.post( true, this );
	}
	
	public void addChangeListener( ChangeListener l ) {
		if( listeners_ == null ) {
			listeners_ = new Vector();
			modelChangedEvent_ = new ChangeEvent( this );
		}
		
		listeners_.addElement( l );
	}
	
	public void modelChanged() {
		readFormat();
		
		dirty_ = true;
		stop();
		ac1_ = null;
		ac2_ = null;
		if( listeners_ != null ) {
			Enumeration e = listeners_.elements();
			while( e.hasMoreElements() ) {
				( (ChangeListener) e.nextElement() ).stateChanged( modelChangedEvent_ );
			}
		}

		//ActionManager.instance().enableDisableActions();
		MainPanel.instance().repaint();
	}
	
	private void selectionChanged() {
		if( ac2_ != null ) {
			ac2_.stop();
			ac2_ = null;
		}
		
		if( listeners_ != null ) {
			Enumeration e = listeners_.elements();
			while( e.hasMoreElements() ) {
				( (ChangeListener) e.nextElement() ).stateChanged( selectionChangedEvent_ );
			}
		}
	}
	
	public int getNumChannels() {
		return( numChannels_ );
	}
	
	public int readNumChannels() {
		int numChannels = 0;
		
		try {
			bIn_.reset();
			bIn_.skip( O2_NUM_CHANNELS );
			numChannels = dIn_.readUnsignedShort();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( numChannels );
	}
	
	public int getNumSampleFrames() {
		return( numSampleFrames_ );
	}
	
	public int readNumSampleFrames() {
		int numSampleFrames = 0;
		
		try {
			numSampleFrames = getIntAt( O2_NUM_FRAMES );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( numSampleFrames );
	}
	
	private void setNumSampleFrames( int numSampleFrames ) throws Exception {
		Assert.pre( 0 <= numSampleFrames );

		try {
			bOut_.reset();
			dOut_.writeInt( numSampleFrames );
	
			byte[] bt = bOut_.toByteArray();
			System.arraycopy(
				bt,
				0,
				data_,
				O2_NUM_FRAMES,
				bt.length
			);
			
			int formLength = FORM_LENGTH + numSampleFrames * getBytesPerFrame();
			bOut_.reset();
			dOut_.writeInt( formLength );
	
			bt = bOut_.toByteArray();
			System.arraycopy(
				bt,
				0,
				data_,
				O2_FORM_LENGTH,
				bt.length
			);
			
			int ssndLength = SSND_LENGTH + numSampleFrames * getBytesPerFrame();
			bOut_.reset();
			dOut_.writeInt( ssndLength );
	
			bt = bOut_.toByteArray();
			System.arraycopy(
				bt,
				0,
				data_,
				O2_SSND_LENGTH,
				bt.length
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}

		readFormat();

		Assert.post( true, this );
	}
	
	private int getIntAt( int offset ) throws Exception {
		int value = 0;
		
		try {
			bIn_.reset();
			bIn_.skip( offset );
			value = dIn_.readInt();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( value );
	}
	
	public int getEffectiveSampleSize() {
		return( getBytesPerSample() * 8 );
	}
	
	public int getSampleSize() {
		return( sampleSize_ );
	}
	
	public int readSampleSize() {
		int sampleSize = 0;
		
		try {
			bIn_.reset();
			bIn_.skip( O2_SAMPLE_SIZE );
			sampleSize = dIn_.readUnsignedShort();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( sampleSize );
	}
	
	public void setSampleSize( int sampleSize ) throws Exception {
		Assert.pre( 0 < sampleSize && sampleSize <= 32 );

		try {
			bOut_.reset();
			dOut_.writeShort( sampleSize );

			System.arraycopy(
				bOut_.toByteArray(),
				0,
				data_,
				O2_SAMPLE_SIZE,
				2
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}

		readFormat();
		
		Assert.post( true, this );
	}	
	
	public int getBytesPerSample() {
		return( bytesPerSample_ );
	}
	
	public int getBytesPerFrame() {
		return( bytesPerFrame_ );
	}
	
	public int getSampleRate() {
		return( sampleRate_ );
	}
	
	public int readSampleRate() {
		int sampleRate = 0;
		
		try {
			bIn_.reset();
			bIn_.skip( O2_SAMPLE_RATE );
			
			int exp = dIn_.readShort();
			long fraction = dIn_.readLong();
			
			sampleRate = extendedToInt( exp, fraction );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( sampleRate );
	}
	
	public void setSampleRate( int sampleRate ) throws Exception {
		Assert.pre( 0 < sampleRate );

		try {
			byte[] extended = intToExtended( sampleRate );
			System.arraycopy(
				extended,
				0,
				data_,
				O2_SAMPLE_RATE,
				extended.length
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}

		readFormat();
		
		Assert.post( true, this );
	}
		
	public synchronized int getSample( int ch, int offset ) throws Exception {
/*DEBUG
		Assert.pre(
				0 <= ch && ch < numChannels_
			&&	0 <= offset && offset < numSampleFrames_
		);
/*GUBED*/
		int sample = 0;
		
		try {
			bIn_.reset();
			bIn_.skip(
					O2_DATA
				+	offset * bytesPerFrame_
				+	ch * bytesPerSample_
			);
			
			switch( bytesPerSample_ ) {
				case 1:
					sample = dIn_.readByte();
					break;
				case 2:
					sample = dIn_.readShort();
					break;
				case 3:
					sample = dIn_.readByte();
					sample = sample * 65536 + dIn_.readUnsignedShort();
					break;
				case 4:
					sample = dIn_.readInt();
					break;
				default:
					break;
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( sample );
	}
	
	public synchronized void setSample( int ch, int offset, int sample ) throws Exception {
/*DEBUG
		Assert.pre(
				0 <= ch && ch < numChannels_
			&&	0 <= offset && offset < numSampleFrames_
		);
/*GUBED*/
		try {
			int index =
					O2_DATA
				+	offset * bytesPerFrame_
				+	ch * bytesPerSample_
			;
			
			bOut_.reset();
			switch( bytesPerSample_ ) {
				case 1:
					dOut_.write( sample );
					break;
				case 2:
					dOut_.writeShort( sample );
					break;
				case 3:
					dOut_.writeInt( sample * 256 );
					break;
				case 4:
					dOut_.writeInt( sample );
					break;
				default:
					break;
			}

			System.arraycopy(
				bOut_.toByteArray(),
				0,
				data_,
				index,
				bytesPerSample_
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
/*DEBUG
		Assert.post( true, this );
/*GUBED*/
	}
	
	public int getMaxValue() {
		return( maxValue_ );
	}
	
	public int getMinValue() {
		return( minValue_ );
	}
	
	public synchronized Selection getSelection() {
		return( selection_ );
	}
	
	public synchronized void setSelection( Selection selection ) throws Exception {
		Assert.pre(
				selection == null
			||	(		0 <= selection.getOffset()
					&&	selection.getOffset() <= getNumSampleFrames()
					&&	selection.getOffset() + selection.getLength() <= getNumSampleFrames()
				)
		);

		selection_ = selection;
		
		if( selectionChangedEvent_ == null && selection_ != null )
			selectionChangedEvent_ = new ChangeEvent( selection_ );
		
		selectionChanged();

		MainPanel.instance().repaint();
		
		Assert.post( true, this );
	}
	
	public synchronized void setSelection(
				int channel,
				int offset,
				int length
			) throws Exception
		{
		setSelection( channel, offset, length, true );
	}

	public synchronized void setSelection(
				int channel,
				int offset,
				int length,
				boolean notify
			) throws Exception
		{
		Assert.pre(		
				channel < getNumChannels()
			&&	0 <= offset
			&&	offset <= getNumSampleFrames()
			&&	offset + length <= getNumSampleFrames()
		);

		if( selection_ == null ) {
			selection_ = new Selection( channel, offset, length );
			selectionChangedEvent_ = new ChangeEvent( selection_ );
		}
		else {
			selection_.setChannel( channel );
			selection_.setOffset( offset );
			selection_.setLength( length );
		}

		if( notify ) {
			selectionChanged();
			//ActionManager.instance().enableDisableActions();
			//MainPanel.instance().repaint();
		}
		
		Assert.post( true, this );
	}
	
	
	public String toString() {
		return(
				"AIFF sampled audio data | "
			+	getNumChannels() + " channels | "
			+	getNumSampleFrames() + " sample frames | "
			+	getSampleSize() + " bits per sample | "
			+	getSampleRate() + " samples per second"
		);
	}
	
	public static byte[] intToExtended( int rate ) {
		byte[] extended = new byte[ 10 ];
		
		// the exponent is the first power of two that
		// will yield a fractional component in the range
		// 0.0 < fraction < 2.0
		int exp = 16383;
		double fraction = Double.MAX_VALUE;
		while( fraction > 2.0 ) {
			exp++;
			fraction = ( (double) rate ) / Math.pow( 2.0, (exp-16383) );
		}

		// we'll approximate the bit settings by driving
		// the fraction down towards zero
		long bits = 0L;
		for( int i=0; i<64; i++ ) {
			if( fraction >= Math.pow( 2.0, -i ) ) {
				fraction -= Math.pow( 2.0, -i );
				bits = setBit( i, bits );
			}
		}	

		try {
			ByteArrayOutputStream bOut = new ByteArrayOutputStream( 10 );
			DataOutputStream out = new DataOutputStream( bOut );
			out.writeShort( exp );
			out.writeLong( bits );
			extended = bOut.toByteArray();
			out.close();
			bOut.close();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( extended );
	}

	public static int extendedToInt( int exp, long bits ) {
		int sampleRate = 0;
		
		double fraction = 0.0;
		
		// check the sign bit
		if( bits < 0L ) {
			fraction += Math.pow( 2.0, 0.0 );
		}

		// ...then iterate over the rest of them
		for( int i=1; i<64; i++ ) {
			if( isBitSet( i, bits ) ) {
				fraction += Math.pow( 2.0, -i );
			}
		}

		sampleRate = (int) Math.round( Math.pow( 2.0, (exp-16383) ) * fraction );

		return( sampleRate );
	}
	
	private static boolean isBitSet( int which, long bits ) {
		boolean bitSet = false;
	
		long mask = (long) Math.pow( 2.0, (63-which) );
		bitSet = ( bits & mask ) == mask;
	
		return( bitSet ); 
	}
	
	private static long setBit( int which, long bits ) {
		long mask = 0L;
		if( which == 0 ) {
			mask = Long.MIN_VALUE;
		}
		else {
			mask = (long) Math.pow( 2.0, (63-which) );
		}
		bits |= mask;

		return( bits );
	}
		
	public void dispose() {
		adapter_ = null;
		data_ = null;
		bIn_ = null;
		dIn_ = null;
		bOut_ = null;
		dOut_ = null;
		
		selection_ = null;
		
		undoBuffer_ = null;
		undoSelection_ = null;
		redoBuffer_ = null;
		redoSelection_ = null;
		
		modelChangedEvent_ = null;
		selectionChangedEvent_ = null;
		listeners_ = null;
	}
	
	public byte[] getData() {
		return( data_ );
	}
	
	SoundFileAdapter adapter_ = null;
	byte[] data_ = null;
	ByteArrayInputStream bIn_ = null;
	DataInputStream dIn_ = null;
	ByteArrayOutputStream bOut_ = null;
	DataOutputStream dOut_ = null;

	int numChannels_ = 1;
	int numSampleFrames_ = 0;
	int sampleSize_ = 8;
	int sampleRate_ = 22050;
	int bytesPerSample_ = 1;
	int bytesPerFrame_ = 1;
	int maxValue_ = 127;
	int minValue_ = -128;
		
	Selection selection_ = null;
	
	byte[] undoBuffer_ = null;
	Selection undoSelection_ = null;
	byte[] redoBuffer_ = null;
	Selection redoSelection_ = null;
	
	boolean dirty_ = false;
	ChangeEvent modelChangedEvent_ = null;
	ChangeEvent selectionChangedEvent_ = null;
	Vector listeners_ = null;

	AudioClip ac1_ = null;
	AudioClip ac2_ = null;
	boolean loop_ = false;
	
	public static final int
		// O2 as abbr for 'offset to'
		O2_FORM_LENGTH = 4,
		O2_NUM_CHANNELS = 20,
		O2_NUM_FRAMES = 22,
		O2_SAMPLE_SIZE = 26,
		O2_SAMPLE_RATE = 28,
		O2_SSND_LENGTH = 42,
		O2_DATA = 54,
		
		FORM_LENGTH = 46,
		SSND_LENGTH = 8
	;
	
	static final byte[] DEFAULT_DATA = {
			//	0	4	char[ 4 ]	Chunk type	FORM
		(byte) 0x46, (byte) 0x4F, (byte) 0x52, (byte) 0x4D,
			//	4	4	int	Chunk length; always 46 plus sample data length	46
		(byte) 0x00, (byte) 0x00, (byte) 0x00, (byte) 0x2E,
			//	8	4	char[ 4 ]	FORM type	AIFF
		(byte) 0x41, (byte) 0x49, (byte) 0x46, (byte) 0x46,
			//	12	4	char[ 4 ]	Chunk type	COMM
		(byte) 0x43, (byte) 0x4F, (byte) 0x4D, (byte) 0x4D,
			//	16	4	int	Chunk length; always 18	18
		(byte) 0x00, (byte) 0x00, (byte) 0x00, (byte) 0x12,
 			//	20	2	short	Number of channels	1
		(byte) 0x00, (byte) 0x01,
			//	22	4	int	Number of sample frames	0
		(byte) 0x00, (byte) 0x00, (byte) 0x00, (byte) 0x00,
 			//	26	2	short	Sample size	8
		(byte) 0x00, (byte) 0x08,
			//	28	10	extended	Sample rate	22050
		(byte) 0x40, (byte) 0x0D, (byte) 0xAC, (byte) 0x44,
		(byte) 0x00, (byte) 0x00, (byte) 0x00, (byte) 0x00,
		(byte) 0x00, (byte) 0x00,
			//	38	4	char[ 4 ]	Chunk type	SSND
		(byte) 0x53, (byte) 0x53, (byte) 0x4E, (byte) 0x44,
			//	42	4	int	Chunk length; always 8 plus sample data length	8
		(byte) 0x00, (byte) 0x00, (byte) 0x00, (byte) 0x08,
			//	46	4	int	Offset	0
		(byte) 0x00, (byte) 0x00, (byte) 0x00, (byte) 0x00,
			//	50	4	int	Block size	0
		(byte) 0x00, (byte) 0x00, (byte) 0x00, (byte) 0x00
			//	54	data_len		Sample data	
	};	
}
