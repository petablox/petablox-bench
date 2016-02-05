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

public abstract class MonitoredAction
		extends AbstractAction
		implements Runnable, ChainableTransform, EnableDisableable
	{
	public MonitoredAction( String name, Icon icon ) {
		super( name, icon );
	}
	
	public String getInfo() {
		return( null );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled(
				active != null
			&&	active.getModel().getSelection() != null
			&&	active.getModel().getSelection().getLength() > 0
		);
	}

	public abstract String getNote();

	public void actionPerformed( ActionEvent evt ) {
		( new Thread( this ) ).start();
	}
	
	public boolean mustReplaceAll() {
		return( false );
	}

	public void performAction(
			SoundWindow active,
			ProgressMonitor monitor
		) throws Exception {
		
		monitor.setNote( getNote() );
		monitor.setMaximum( 100 );

		SoundModel model = active.getModel();
		int channels = model.getNumChannels();
		if( 		model.getSelection() != null
				&&	model.getSelection().getChannel() != Selection.ALL_CHANNELS
			) {
			channels = 1;
		}
		PlugInParameters param = getCustomParameters( active, channels );
		if( param != null ) {
			if( mustReplaceAll() ) {
				SoundModel newModel = transform(
					model,
					param,
					monitor,
					0,
					100
				);
				if( ! monitor.isCanceled() ) {
					model.replaceAll( newModel );
				}
			}
			else if( model.getSelection() != null ) {
				// only use the 1/3 model if single
				// channel of multi-channel sound being operated on
				if( model.getSelection().getChannel() != Selection.ALL_CHANNELS ) {
					SoundModel temp = model.getCopySelection( monitor, 0, 33 );
					temp.setSelection( Selection.ALL_CHANNELS, 0, temp.getNumSampleFrames() );
					SoundModel newModel = transform(
						temp,
						param,
						monitor,
						33,
						33
					);
			
					if( ! monitor.isCanceled() ) {
						model.replaceSelection( newModel, monitor, 66, 34 );
					}
				}
				else {
					SoundModel temp = model.getCopySelection();
					temp.setSelection( Selection.ALL_CHANNELS, 0, temp.getNumSampleFrames() );
					SoundModel newModel = transform(
						temp,
						param,
						monitor,
						0,
						100
					);
			
					if( ! monitor.isCanceled() ) {
						model.replaceSelection( newModel );
					}
				}
			}
		}
	}

	public abstract SoundModel transform(
			SoundModel source,
			PlugInParameters param,
			ProgressMonitor monitor,
			int progressPre,
			int progressSize
		)
	;
	
	public int getOutputChannelCount(
			int inputChannelCount,
			PlugInParameters param
		) {
		return( inputChannelCount );
	}

	public PlugInParameters getDefaultParameters( int inputChannelCount ) {
		return( new PlugInParameters() );
	}

	public PlugInParameters getCustomParameters( SoundWindow active, int inputChannelCount ) {
		return( getDefaultParameters( inputChannelCount ) );
	}
	
	public void run() {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		SoundWindow active = null;
		ProgressMonitor monitor = null;

		try {
			active = Desktop.instance().getActiveWindow();
			if( active != null ) {
				active.lock();
			}
			monitor  = new ProgressMonitor(
				active,
				null,
				null,
				0,
				100
			);

			performAction( active, monitor );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		finally {
			if( monitor != null )
				monitor.close();
			if( active != null )
				active.unlock();
		}
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
		
		//ActionManager.instance().enableDisableActions();
		MainPanel.instance().repaint();	
	}
}
