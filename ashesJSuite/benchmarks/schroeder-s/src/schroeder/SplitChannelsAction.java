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

public class SplitChannelsAction
		extends MonitoredAction
	{
	public static SplitChannelsAction instance() {
		if( instance_ == null ) {
			instance_ = new SplitChannelsAction();
		}
		
		return( instance_ );
	}
	
	private SplitChannelsAction() {
		super(
			"Split Channels",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null && active.getModel().getNumChannels() > 1 );
	}

	public String getNote() {
		return( "Splitting channels..." );
	}
	
	public void performAction(
				SoundWindow active,
				ProgressMonitor monitor
			) throws Exception
		{
		monitor.setNote( getNote() );
		
		SoundModel model = active.getModel();
		int channels = model.getNumChannels();
		SoundModel[] models = new SoundModel[ channels ];
		SoundWindow[] windows = new SoundWindow[ channels ];
		
		monitor.setMinimum( 0 );
		monitor.setMaximum( channels * 100 );

		for( int i=0; i<models.length; i++ ) {
			model.setSelection( i, 0, model.getNumSampleFrames(), false );
			models[ i ] = model.getCopySelection();
			models[ i ].setFileAdapter( model.getFileAdapter() );
			models[ i ].setDirty( model.isDirty() );
			
			if( monitor != null )
				monitor.setProgress( (i+1) * 100 );
		}

		for( int i=0; i<models.length; i++ ) {
			String title = active.getTitle() + " (";
			if( windows.length == 2 )
				title += ( i == 0 ) ? "L" : "R";
			else
				title += "" + i;
			title += ")";
			
			windows[ i ] = new SoundWindow(
				models[ i ],
				title
			);
			windows[ i ].setSplit( windows, i );
		}

		active.close( false );
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
	
	private static SplitChannelsAction instance_ = null;
}
