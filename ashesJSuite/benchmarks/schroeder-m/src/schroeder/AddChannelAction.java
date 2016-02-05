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

public class AddChannelAction
		extends MonitoredAction
	{
	public static AddChannelAction instance() {
		if( instance_ == null ) {
			instance_ = new AddChannelAction();
		}
		
		return( instance_ );
	}
	
	private AddChannelAction() {
		super(
			"Add Channel",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null );
	}

	public String getNote() {
		return( "Adding channel..." );
	}
	
	public void performAction(
				SoundWindow active,
				ProgressMonitor monitor
			) throws Exception
		{
		SoundModel model = active.getModel();
		Selection s = model.getSelection();
		if( s != null ) {
			s = new Selection( s );
		}
	
		monitor.setNote( getNote() );
		monitor.setMinimum( 0 );
		monitor.setMaximum( model.getNumChannels() );
		
		SoundModel newModel = new SoundModel(
			model.getNumChannels() + 1,
			model.getNumSampleFrames(),
			model.getSampleSize(),
			model.getSampleRate()
		);
		
		for( int i=0; i<model.getNumChannels(); i++ ) {
			model.setSelection( i, 0, model.getNumSampleFrames(), false );
			newModel.setSelection( i, 0, newModel.getNumSampleFrames(), false );
			newModel.replaceSelection( model.getCopySelection() );

			if( monitor != null )
				monitor.setProgress( i+1 );
		}

		model.replaceAll( newModel );
	}
	
	public SoundModel transform(
				SoundModel model,
				PlugInParameters param,
				ProgressMonitor monitor,
				int progressPre,
				int progressSize
			)
		{
		return( null );
	}
	
	private static AddChannelAction instance_ = null;
}
