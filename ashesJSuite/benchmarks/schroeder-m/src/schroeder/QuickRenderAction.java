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

public class QuickRenderAction
		extends AbstractAction
		implements EnableDisableable
	{
	
	public static QuickRenderAction instance() {
		if( instance_ == null ) {
			instance_ = new QuickRenderAction();
		}
		
		return( instance_ );
	}
	
	public void setMenuItem( JMenuItem item ) {
		item_ = item;
		item_.setIcon(
			quickRender_
				?	ImageIconFactory.instance().getImageIcon( "/images/selected.gif" )
				:	ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	}
	
	private QuickRenderAction() {
		super(
			"Quick Render",
			ImageIconFactory.instance().getImageIcon( "/images/selected.gif" )
		);
		
		quickRender_ = (
			Preferences.get(
				"QuickRender",
				"true"
			).equals( "true" )
		);
		
		ActionManager.instance().add( this );
	}
	
	public boolean isQuickRender() {
		return( quickRender_ );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( true );
	}
	
	public void actionPerformed( ActionEvent evt ) {
		quickRender_ = ! quickRender_;
		item_.setIcon(
			quickRender_
				?	ImageIconFactory.instance().getImageIcon( "/images/selected.gif" )
				:	ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
		Preferences.set(
			"QuickRender",
			"" + quickRender_
		);
	}
	
	private boolean quickRender_ = true;
	private JMenuItem item_ = null;
	private static QuickRenderAction instance_ = null;
}
