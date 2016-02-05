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

public class FindZeroCrossingAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static FindZeroCrossingAction instance() {
		if( instance_ == null ) {
			instance_ = new FindZeroCrossingAction();
		}
		
		return( instance_ );
	}
	
	private FindZeroCrossingAction() {
		super(
			"Find Zero Crossings",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
		
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null );
	}
	
	public void actionPerformed( ActionEvent evt ) {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		try {
			SoundWindow active = Desktop.instance().getActiveWindow();
			SoundModel model = active.getModel();
			model.setSelection( findZeroCrossing( model ) );
			active.getView().updateScrollBar();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
	}
	
	public Selection findZeroCrossing( SoundModel model ) {
		Selection zero = null;
		
		try {
			Selection s = model.getSelection();
		
			int channel = Selection.ALL_CHANNELS;
			
			int ch0 = 0;
			int chN = model.getNumChannels() - 1;
			if( s != null && s.getChannel() != Selection.ALL_CHANNELS ) {
				ch0 = s.getChannel();
				chN = ch0;
				channel = ch0;
			}

			int numFrames = model.getNumSampleFrames();
			
			int i0 = 0;
			int iN = numFrames - 1;
			if( s != null ) {
				i0 = s.getOffset();
				if( s.getLength() > 0 ) {
					iN = i0 + s.getLength() - 1;
				}
			}
		
			int[] lastSample = new int[ model.getNumChannels() ];
			int idx = -1;
	
			SEARCH:
			for( int i=i0; i<=iN; i++ ) {
				boolean found = true;
			
				for( int ch=ch0; ch<=chN; ch++ ) {
					int sample = model.getSample( ch, i );
					
					if(			( sample >= 0 && lastSample[ ch ] < 0 )
							||	( sample <= 0 && lastSample[ ch ] > 0 )
						) {
						;
					}
					else {
						found = false;
					}
					
					lastSample[ ch ] = sample;
				}
				
				if( found ) {
					idx = i;		
					break SEARCH;
				}
			}
			
			if( idx > 0 ) {
				zero = new Selection(
					channel,
					idx,
					0
				);
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( zero );
	}
	
	private static FindZeroCrossingAction instance_ = null;
}
