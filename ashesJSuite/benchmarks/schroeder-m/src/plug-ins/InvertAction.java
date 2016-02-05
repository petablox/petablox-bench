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
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class InvertAction
		extends MonitoredAction
	{
	public InvertAction() {
		super(
			"Invert",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public String getNote() {
		return( "Inverting selection..." );
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
			int numChannels = model.getNumChannels();
			int numFrames = model.getNumSampleFrames();

			newModel = new SoundModel(
				numChannels,
				numFrames,
				model.getSampleSize(),
				model.getSampleRate()
			);
			
			// for monitor
			int mDen = numChannels * numFrames;
			int mNum = 0;
			
			boolean canceled = false;
			for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
				for( int i=0; ! canceled && i<numFrames; i++ ) {
					newModel.setSample(
						ch,
						i,
						-1 - model.getSample( ch, i )
					);
				
					if( monitor != null ) {
						monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
						canceled = monitor.isCanceled();
					}
				}
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
}
