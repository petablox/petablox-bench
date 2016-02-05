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
import java.util.Vector;

public class JoinChannelsAction
		extends MonitoredAction
	{
	public static JoinChannelsAction instance() {
		if( instance_ == null ) {
			instance_ = new JoinChannelsAction();
		}
		
		return( instance_ );
	}
	
	private JoinChannelsAction() {
		super(
			"Join Channels",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( active != null && active.isSplit() );
	}

	public String getNote() {
		return( "Joining channels..." );
	}
	
	public void performAction(
				SoundWindow active,
				ProgressMonitor monitor
			) throws Exception
		{
		SoundWindow[] windows = active.getSplitWindows();
		
		// some windows may be missing! check:
		Vector vWindows = new Vector();
		for( int i=0; i<windows.length; i++ ) {
			if( windows[ i ].getModel() != null )
				vWindows.addElement( windows[ i ] );
		}
		
		if( vWindows.size() != windows.length ) {
			windows = new SoundWindow[ vWindows.size() ];
			for( int i=0; i<windows.length; i++ ) {
				windows[ i ] = (SoundWindow) vWindows.elementAt( i );
			}
		}

		monitor.setNote( getNote() );
		monitor.setMinimum( 0 );
		monitor.setMaximum( windows.length * 100 );		

		// reconcile lengths
		int longest = 0;
		for( int i=0; i<windows.length; i++ ) {
			SoundModel tempModel = windows[ i ].getModel();
			if( tempModel.getNumSampleFrames() > longest ) {
				longest = tempModel.getNumSampleFrames();
			}
		}

		SoundModel newModel = new SoundModel(
			windows.length,
			longest,
			windows[ 0 ].getModel().getSampleSize(),
			windows[ 0 ].getModel().getSampleRate()
		);
		String title = windows[ 0 ].getTitle();
		title = title.substring(
			0,
			title.indexOf( " (" )
		);
		
		boolean dirty = false;
		for( int i=0; i<windows.length; i++ ) {
			SoundModel tempModel = windows[ i ].getModel();

			if( tempModel.isDirty() )
				dirty = true;
				
			newModel.setSelection( i, 0, tempModel.getNumSampleFrames(), false );
			newModel.replaceSelection( tempModel );
			
			if( monitor != null )
				monitor.setProgress( (i+1) * 100 );
		}
		
		newModel.setDirty( dirty );
		newModel.setSelection( null );
		new SoundWindow( newModel, title );

		for( int i=0; i<windows.length; i++ ) {
			windows[ i ].close( false );
		}
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
		
	private static JoinChannelsAction instance_ = null;
}
