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

public class FindPeakAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static FindPeakAction instance() {
		if( instance_ == null ) {
			instance_ = new FindPeakAction();
		}
		
		return( instance_ );
	}
	
	private FindPeakAction() {
		super(
			"Find Peak",
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
			model.setSelection( findPeak( model ) );
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
	
	public Selection findPeak( SoundModel model ) {
		Selection peak = null;
		
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
			if( s != null && s.getLength() > 0 ) {
				i0 = s.getOffset();
				iN = i0 + s.getLength() - 1;
			}
		
			int max = Integer.MIN_VALUE;
			int min = Integer.MAX_VALUE;
			int idx = -1;
	
			for( int ch=ch0; ch<=chN; ch++ ) {
				for( int i=i0; i<=iN; i++ ) {
					int samp = model.getSample( ch, i );
					if( samp < min ) {
						min = samp;
						idx = i;
						channel = ch;
					}
					if( samp > max ) {
						max = samp;
						idx = i;
						channel = ch;
					}
				}
			}
			
			peak = new Selection(
				channel,
				idx,
				0
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( peak );
	}
	
	private static FindPeakAction instance_ = null;
}
