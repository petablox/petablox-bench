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
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.beans.*;

public class SoundWindow
		extends JInternalFrame
		implements VetoableChangeListener
	{
	public SoundWindow( SoundModel model ) {
		// create an 'untitled' window
		this(
			model,
			++sequence_ > 1 ?
				"untitled " + sequence_ :
				"untitled"
		);
	}
	
	int oneInTwo = 0;
	public void vetoableChange( PropertyChangeEvent evt )
			throws PropertyVetoException
		{
		if( evt.getPropertyName().equals( IS_CLOSED_PROPERTY ) ) {
			if( oneInTwo++ % 2 == 0 && close() ) {
				throw new PropertyVetoException( "Closing canceled", evt );
			}
		}
	}
	
	public SoundWindow( SoundModel model, String title ) {
		super( title );
	
		model_ = model;
	
		setClosable( true );
		addVetoableChangeListener( this );
		
		setMaximizable( true );
		setIconifiable( true );
		setResizable( true );
		setOpaque( true );

		// location and size
		int w = WIDTH;
		int h = HEIGHT;
		
		Dimension desktop = Desktop.instance().getSize();
		if( w > desktop.width - X0 * 2 )
			w = desktop.width - X0 * 2;
		if( h > desktop.height - Y0 * 2 )
			h = desktop.height - Y0 * 2;
		
		if( x_ + w > desktop.width - X0 )
			x_ = X0;
		if( y_ + h > desktop.height - Y0 )
			y_ = Y0;
		
		setBounds( x_, y_, w, h );
		
		x_ += DX;
		y_ += DY;
		
		// window contents
		JScrollBar scrollBar = new JScrollBar( JScrollBar.HORIZONTAL );
		view_ = new SoundView( model_, scrollBar );
		
		JPanel p1 = new JPanel();
		p1.setLayout( new BorderLayout() );
		p1.add( view_, BorderLayout.CENTER );		
		p1.add( scrollBar, BorderLayout.SOUTH );
		p1.validate();
		
		setContentPane( p1 );
		
		// window event handlers
		listener_ = new InternalFrameAdapter() {
			public void internalFrameActivated( InternalFrameEvent evt ) {
				try {
					SoundWindow frame = (SoundWindow) evt.getSource();
					frame.activate();
				}
				catch( Exception e ) {
					if( schroeder.Constants.DEBUG ) {
						e.printStackTrace();
					}
				}
			}
			public void internalFrameDeactivated( InternalFrameEvent evt ) {
				try {
					SoundWindow frame = (SoundWindow) evt.getSource();
					frame.deactivate();
				}
				catch( Exception e ) {
					if( schroeder.Constants.DEBUG ) {
						e.printStackTrace();
					}
				}
			}
/*			public void internalFrameClosing( InternalFrameEvent evt ) {
				try {
					SoundWindow frame = (SoundWindow) evt.getSource();
					frame.close();
				}
				catch( Exception e ) {
					if( schroeder.Constants.DEBUG ) {
						e.printStackTrace();
					}
				}
			}
*/		};
		addInternalFrameListener( listener_ );

		// add it to the Window menu
		WindowMenu.instance().addWindow( this );
		
		// add new window to desktop
		Desktop.instance().add(
			this,
			JLayeredPane.DEFAULT_LAYER
		);
		
		// select it
		try {
			setSelected( true );
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		// we'll handle close operations, thanks
//		setDefaultCloseOperation( JInternalFrame.DO_NOTHING_ON_CLOSE );

		SoundToolbar.instance().repaint();
	}
	
	public SoundModel getModel() {
		return( model_ );
	}
	
	public void setModel( SoundModel model ) {
		model_ = model;
	}
	
	public SoundView getView() {
		return( view_ );
	}
	
	public void setTitle( String title ) {
		super.setTitle( title );
		WindowMenu.instance().updateItem( this );
	}
	
	public boolean isSplit() {
		return( splitChannel_ != -1 );
	}

	public SoundWindow[] getSplitWindows() {
		return( splitWindows_ );
	}

	public void setSplit( SoundWindow[] windows, int channel ) {
		splitChannel_ = channel;
		splitWindows_ = windows;
	}
	
	public boolean close() {
		return( close( true ) );
	}
	
	public boolean close( boolean saveChanges ) {
		boolean canceled = false;
		
		try {
			if( saveChanges && getModel().isDirty() ) {
				// save changes modal dialog
				int choice = JOptionPane.showConfirmDialog(
					this, // MainFrame.instance(),
					"Save changes to " + getTitle() + "?",
					Constants.APPLICATION_NAME,
					JOptionPane.YES_NO_CANCEL_OPTION,
					JOptionPane.WARNING_MESSAGE
				);
				
				if(		choice == JOptionPane.YES_OPTION
					||	choice == JOptionPane.OK_OPTION
					) {
					SaveAction.instance().actionPerformed( null );
				}
				else if( choice == JOptionPane.CANCEL_OPTION ) {
					canceled = true;
					return( canceled );
				}
     			else {
     				; // don't save
     			}
			}
			
			// stop blinking insertion point thread
			if( view_ != null ) {
				view_.stop();
				view_ = null;
			}
			
			if( model_ != null ) {
				model_.dispose();
				model_ = null;
			}

			// remove references to this window
			removeInternalFrameListener( listener_ );
			dispose();

			Desktop.instance().remove(
				Desktop.instance().getIndexOf( this )
			);
			Desktop.instance().selectTopWindow();
			Desktop.instance().repaint();
			WindowMenu.instance().removeWindow( this );

			MainPanel.instance().repaint();
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		return( canceled );
	}
	
	public void activate() {
		if( locked_ ) {
			try { setSelected( false ); } catch( Exception e ) {}
		}
		else {
			try {
				//ActionManager.instance().enableDisableActions();
				MainPanel.instance().repaint();
//				SoundToolbar.instance().repaint();
				WindowMenu.instance().activated( this );
				ViewMenu.instance().activated( this );
				view_.activated();
			}
			catch( Exception e ) {
				if( schroeder.Constants.DEBUG ) {
					e.printStackTrace();
				}
			}
		}
	}
	
	public void deactivate() {
		//ActionManager.instance().enableDisableActions();
		MainPanel.instance().repaint();
//		SoundToolbar.instance().repaint();
		WindowMenu.instance().deactivated( this );
		view_.deactivated();
	}
	
	boolean locked_ = false;
	public void lock() {
		locked_ = true;

		setCursor(
			Cursor.getPredefinedCursor(
				Cursor.WAIT_CURSOR
			)
		);
		try { setSelected( false ); } catch( Exception e ) {}
		
	}
	
	public void unlock() {
		locked_ = false;

		setCursor(
			Cursor.getDefaultCursor()
		);
		if( Desktop.instance().getActiveWindow() == null )
			try { setSelected( true ); } catch( Exception e ) {}
	}

	private SoundView view_ = null;
	private SoundModel model_ = null;
	private static int sequence_ = 0;
	private InternalFrameListener listener_ = null;

	private int splitChannel_ = -1;
	private SoundWindow[] splitWindows_ = null;


	public static final int
		X0 = 2,
		Y0 = 2,
		DX = 25,
		DY = 25,
		WIDTH = 300,
		HEIGHT = 200,
		MIN_WIDTH = 150,
		MIN_HEIGHT = 100;
	;	
	private static int
		x_ = X0,
		y_ = Y0
	;
}