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

public class LowpassFilterAction
		extends MonitoredAction
	{
	public LowpassFilterAction() {
		super(
			"Lowpass Filter",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public String getNote() {
		return( "Filtering selection..." );
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
	
			int NZEROS = 4;
			int NPOLES = 4;
			double GAIN = 9.797762769e+01;
			
			double[] xv = new double[ NZEROS+1 ];
			double[] yv = new double[ NPOLES+1 ];
			double[] ycoeff = {
				-0.1204141587,
				 0.7245981418,
				-1.7360955490,
				 1.9686089795
			};
			
			boolean canceled = false;
			for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
				for( int i=0; ! canceled && i<numFrames; i++ ) {
					xv[0] = xv[1]; xv[1] = xv[2]; xv[2] = xv[3]; xv[3] = xv[4];
					xv[4] = ( (double) model.getSample( ch, i ) ) / GAIN;
					
					yv[0] = yv[1]; yv[1] = yv[2]; yv[2] = yv[3]; yv[3] = yv[4];
					yv[4] = ( xv[0] + xv[4] )
						+	4.0 * ( xv[1] + xv[3] )
						+	6.0 * xv[2]
	                    +	( ycoeff[ 0 ] * yv[0] )
	                    +	( ycoeff[ 1 ] * yv[1] )
	                    +	( ycoeff[ 2 ] * yv[2] )
	                    +	( ycoeff[ 3 ] * yv[3] )
	                ;
					
					newModel.setSample( ch, i, (int) Math.round( yv[4] ) );
				
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
