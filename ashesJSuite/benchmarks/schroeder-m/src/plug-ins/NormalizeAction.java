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
import java.util.*;

public class NormalizeAction
		extends MonitoredAction
	{
	public NormalizeAction() {
		super(
			"Normalize",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public String getNote() {
		return( "Normalizing selection..." );
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
			
			Selection peak = FindPeakAction.instance().findPeak( model );
			int sample = model.getSample( peak.getChannel(), peak.getOffset() );
			
			float scale = (float) 1.0;
			if( sample > 0 ) {
				scale = (float) model.getMaxValue() / (float) sample;
			}
			else if( sample < 0 ) {
				scale = (float) model.getMinValue() / (float) sample;
			}
			param.set( "EnvelopeAction.envelope", "0.0 " + scale + " 1.0 " + scale + " " );
	
			newModel = ( PluginManager.instance().getPlugin( "EnvelopeAction" ) ).transform(
				model,
				param,
				monitor,
				progressPre,
				progressSize
			);
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}

		return( newModel );
	}
}
