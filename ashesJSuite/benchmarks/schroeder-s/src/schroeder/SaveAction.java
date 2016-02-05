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

public class SaveAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static SaveAction instance() {
		if( instance_ == null ) {
			instance_ = new SaveAction();
		}
		
		return( instance_ );
	}
	
	private SaveAction() {
		super(
			"Save",
			ImageIconFactory.instance().getImageIcon( "/images/save.gif" )
		);
		
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled(
				active != null
			&&	active.getModel().isDirty()
		);
	}
	
	public void actionPerformed( ActionEvent evt ) {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		save( Desktop.instance().getActiveWindow() );
		
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
	}
	
	public void save( SoundWindow window ) {
		try {
			SoundModel model = window.getModel();
			SoundFileAdapter adapter = model.getFileAdapter();
			
			if( adapter == null ) {
				SaveAsAction.instance().saveAs( window );
			}
			else {
				adapter.createFileFromSound( model );
				model.setDirty( false );
				//ActionManager.instance().enableDisableActions();
				MainPanel.instance().repaint();
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
	}
	
	private static SaveAction instance_ = null;
}
