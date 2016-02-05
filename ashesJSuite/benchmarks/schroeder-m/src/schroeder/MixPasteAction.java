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
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MixPasteAction
		extends MonitoredAction
	{
	public static MixPasteAction instance() {
		if( instance_ == null ) {
			instance_ = new MixPasteAction();
		}
		
		return( instance_ );
	}
	
	private MixPasteAction() {
		super(
			"Mix Paste",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		boolean enabled = false;
		
		if( active != null ) {
			SoundModel model = active.getModel();
			SoundModel clip = SoundClipboard.instance().get();
			
			if( model != null && clip != null ) {
				if( model.getNumSampleFrames() > 0 ) {
					Selection s = model.getSelection();
					if( s != null ) {
						if( s.getChannel() == Selection.ALL_CHANNELS ) {
							if( model.getNumChannels() == clip.getNumChannels() ) {
								enabled = true;
							}
						}
						else {
							// one channel
							if( clip.getNumChannels() == 1 ) {
								enabled = true;
							}
						}
					}
				}
			}
		}
		
		setEnabled( enabled );
	}

	public String getNote() {
		return( "Mixing sounds..." );
	}

	public boolean mustReplaceAll() {
		return( true );
	}
	
	public SoundModel transform(
				SoundModel model,
				PlugInParameters param,
				ProgressMonitor monitor,
				int progressPre,
				int progressSize
			)
		{
		SoundModel newModel = null;
		
		try {
			boolean canceled = false;
		
			SoundModel clip = SoundClipboard.instance().get();
			clip = PasteAction.instance().reconcileModels(
				Desktop.instance().getActiveWindow(),
				model,
				clip
			);
			if( clip == null )
				canceled = true;
			
			if( ! canceled ) {
				Selection s = model.getSelection();
				int offset = s.getOffset();
				int channel = s.getChannel();
				int chOffset = 0;
				if( s.getChannel() != Selection.ALL_CHANNELS )
					chOffset = s.getChannel();
				
				int numChannels = model.getNumChannels();
		
				int numFrames = model.getNumSampleFrames();
				if( offset + clip.getNumSampleFrames() > numFrames )
					numFrames = offset + clip.getNumSampleFrames();
				
				int numSamples = numFrames * numChannels;
	
				// for monitor
				int mDen = numSamples * 2;
				int mNum = 0;
		
				newModel = new SoundModel(
					numChannels,
					numFrames,
					model.getSampleSize(),
					model.getSampleRate()
				);
				
				// do a 'dry' pass looking for clipped samples
				long max = 0L;
				
				for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
					for( int i=0; ! canceled && i<numFrames; i++ ) {
						long sample = 0L;
						
						if( i < model.getNumSampleFrames() ) {
							sample += (long) model.getSample( ch, i );
						}
						if(	channel == Selection.ALL_CHANNELS || channel == ch ) {
							if(			i >= offset
									&&	i - offset < clip.getNumSampleFrames()
									&&	ch < clip.getNumChannels()
								) {
								sample += (long) clip.getSample( ch, i - offset );
							}	
						}
						
						if( sample < 0 )
							sample = -1 - sample;
						if( sample > max )
							max = sample;
								
						if( monitor != null ) {
							monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
							canceled = monitor.isCanceled();
						}
					}
				}
				
				// figure out a scale value that will keep peaks unclipped
				float scale = (float) 1.0;
				if( max > (long) newModel.getMaxValue() ) {
					scale = (float) newModel.getMaxValue() / (float) max;
				}
				
				// then mix again.
				for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
					for( int i=0; ! canceled && i<numFrames; i++ ) {
						long sample = 0L;
						
						if( i < model.getNumSampleFrames() ) {
							sample += (long) model.getSample( ch, i );
						}
						if(	channel == Selection.ALL_CHANNELS || channel == ch ) {
							if(			i >= offset
									&&	i - offset < clip.getNumSampleFrames()
									&&	ch - chOffset < clip.getNumChannels()
								) {
								sample += (long) clip.getSample( ch, i - offset );
							}
							
							sample = (long) ( (float) sample * scale );
						}
						
						newModel.setSample( ch, i, (int) sample );
					
						if( monitor != null ) {
							monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
							canceled = monitor.isCanceled();
						}
					}
				}
				
				newModel.setSelection( s );
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}

		if( monitor != null )
			monitor.setProgress( progressPre + progressSize );

		return( newModel );
	}
	
	private static MixPasteAction instance_ = null;
}
