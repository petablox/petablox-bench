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

public class PasteAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static PasteAction instance() {
		if( instance_ == null ) {
			instance_ = new PasteAction();
		}
		
		return( instance_ );
	}
	
	private PasteAction() {
		super(
			"Paste",
			ImageIconFactory.instance().getImageIcon( "/images/paste.gif" )
		);
		
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		boolean enabled = false;
		
		if( active != null ) {
			SoundModel model = active.getModel();
			SoundModel clip = SoundClipboard.instance().get();
			
			if( model != null && clip != null ) {
				if( model.getNumSampleFrames() == 0 ) {
					enabled = true;
				}
				else {
					Selection s = model.getSelection();
					if( s != null ) {
						if( s.getChannel() == Selection.ALL_CHANNELS ) {
							if( model.getNumChannels() == clip.getNumChannels() ) {
								enabled = true;
							}
						}
						else {
							// one channel
							if( clip.getNumChannels() == 1 ) {
								enabled = true;
							}
						}
					}
				}
			}
		}
		
		setEnabled( enabled );
	}
	
	public void actionPerformed( ActionEvent evt ) {
		MainFrame.instance().setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);

		try {
			SoundModel clip = SoundClipboard.instance().get();
			if( clip != null ) {
				SoundWindow active = Desktop.instance().getActiveWindow();
				SoundModel model = active.getModel();
				Selection s = model.getSelection();
				
				// if model is of length 0 (as in a new window),
				// paste in regardless of the selection or existing
				// file settings
				if( model.getNumSampleFrames() == 0 ) {
					model.replaceAll( clip );
				}
				
				//  otherwise, we need a valid selection or insertion point
				else if( s != null ) {
					// do the sample rate and sample size match? 
					// if not, reconcile them
					clip = reconcileModels( active, model, clip );
					if( clip != null ) {
						model.replaceSelection( clip );
						model.setSelection(
							s.getChannel(),
							s.getOffset() + clip.getNumSampleFrames(),
							0
						);
					}
				}
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		MainFrame.instance().setCursor(
			Cursor.getDefaultCursor()
		);
	}
	
	public SoundModel reconcileModels( SoundWindow active, SoundModel dst, SoundModel src ) {
		boolean canceled = false;
		
		if( src.getSampleSize() != dst.getSampleSize() ) {
			int option = JOptionPane.showConfirmDialog(
				active,
				"Convert data on clipboard to " + dst.getSampleSize() + " bits?",
				"Paste: Convert sample size?",
				JOptionPane.OK_CANCEL_OPTION
			);
			
			if( option == JOptionPane.CANCEL_OPTION ) {
				canceled = true;
			}
			else {
				MainFrame.instance().setCursor(
					Cursor.getPredefinedCursor(
						Cursor.WAIT_CURSOR
					)
				);
		
				ProgressMonitor monitor = null;
				try {
					monitor  = new ProgressMonitor(
						active,
						null,
						null,
						0,
						100
					);
					
					PlugInParameters param = new PlugInParameters();
					param.set( "SampleSizeAction.sampleSize", "" + dst.getSampleSize() );
					src = SampleSizeAction.instance().transform(
						src,
						param,
						monitor,
						0,
						100
					);
				}
				catch( Exception e ) {
					if( schroeder.Constants.DEBUG ) {
						e.printStackTrace();
					}
				}
				finally {
					if( monitor != null )
						monitor.close();
				}
				MainFrame.instance().setCursor(
					Cursor.getDefaultCursor()
				);
			}
		}
		
		if( ! canceled && src.getSampleRate() != dst.getSampleRate() ) {
			int option = JOptionPane.showConfirmDialog(
				active,
				"Convert data on clipboard to " + dst.getSampleRate() + " fps?",
				"Paste: Convert sample rate?",
				JOptionPane.OK_CANCEL_OPTION
			);
			
			if( option == JOptionPane.CANCEL_OPTION ) {
				canceled = true;
			}
			else {
				MainFrame.instance().setCursor(
					Cursor.getPredefinedCursor(
						Cursor.WAIT_CURSOR
					)
				);
		
				ProgressMonitor monitor = null;
				try {
					monitor  = new ProgressMonitor(
						active,
						null,
						null,
						0,
						100
					);
		
					PlugInParameters param = new PlugInParameters();
					param.set(
						"SampleRateAction.sampleRate",
						"" + dst.getSampleRate()
					);
					param.set(
						"SampleRateAction.aliasingRequested",
						"" + false
					);
					param.set(
						"SampleRateAction.resampleRequested",
						"" + true
					);
					src = SampleRateAction.instance().transform(
						src,
						param,
						monitor,
						0,
						100
					);
				}
				catch( Exception e ) {
					if( schroeder.Constants.DEBUG ) {
						e.printStackTrace();
					}
				}
				finally {
					if( monitor != null )
						monitor.close();
				}
				MainFrame.instance().setCursor(
					Cursor.getDefaultCursor()
				);
			}
		}
		
		if( canceled )
			src = null;
		
		return( src );
	}
	
	private static PasteAction instance_ = null;
}
