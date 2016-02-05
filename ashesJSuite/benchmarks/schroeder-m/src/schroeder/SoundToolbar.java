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

public class SoundToolbar
		extends JToolBar
	{
	public static SoundToolbar instance() {
		if( instance_ == null ) {
			instance_ = new SoundToolbar();
		}
		
		return( instance_ );
	}
	
	private SoundToolbar() {
		super();
	
		JButton btn = add( StopAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( PlayAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		btn = add( PlaySelectionAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );

		add( LoopButton.instance() );
	
		addSeparator();
	
		btn = add( SampleRateAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
	
		btn = add( SampleSizeAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
	
		btn = add( NumChannelsAction.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
	
		btn = add( SoundInfoView.instance() );
		btn.setToolTipText( btn.getText() );
		btn.setText( null );
		
		setFloatable( false );
	}
	
	private static SoundToolbar instance_ = null;
}
