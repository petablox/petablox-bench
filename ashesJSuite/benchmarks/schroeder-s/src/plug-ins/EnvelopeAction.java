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
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class EnvelopeAction
		extends MonitoredAction
	{
	public EnvelopeAction() {
		super(
			"Envelope...",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
	
		ActionManager.instance().add( this );
	}

	public String getNote() {
		return( "Applying envelope..." );
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
			int numFrames = model.getNumSampleFrames();
			int numChannels = model.getNumChannels();

			newModel = new SoundModel(
				numChannels,
				numFrames,
				model.getSampleSize(),
				model.getSampleRate()
			);
	
			// for monitor
			int mDen = numChannels * numFrames;
			int mNum = 0;
	
			// parse parameter
			StringTokenizer st = new StringTokenizer( param.get( "EnvelopeAction.envelope" ) );
			int numPoints = st.countTokens() / 2;
			int[] xS = new int[ numPoints ];
			float[] yS = new float[ numPoints ];
			int pIdx = 0;
			while( st.hasMoreTokens() ) {
				xS[ pIdx ] = (int) Math.round(
					(double) ( numFrames - 1 ) * Float.parseFloat( st.nextToken() )
				);
				yS[ pIdx++ ] = Float.parseFloat( st.nextToken() );
			}
			
			Assert.assert( xS[ 0 ] == 0 && xS[ xS.length - 1 ] == numFrames - 1 );
			
			// compute scale values
			float[] scale = new float[ numFrames ];
			int sIdx = 0;
			pIdx = 0;
			
			// first point in the slope
			int x0 = xS[ pIdx ];
			float y0 = yS[ pIdx++ ];
	
			scale[ sIdx++ ] = y0;
	
			while( pIdx < xS.length && sIdx < scale.length ) {
				// last point in this slope
				int xN = xS[ pIdx ];
				float yN = yS[ pIdx++ ];
	
				int dx = xN - x0;
				float dy = yN - y0;
	
				for( ; sIdx < xN; sIdx++ ) {
					scale[ sIdx ] = y0 + dy * ( (float) ( sIdx - x0 ) / (float) dx );
				}
				
				x0 = xN;
				y0 = yN;
			}
			
			boolean canceled = false;
			for( int ch=0; ! canceled && ch<numChannels; ch++ ) {
				for( int i=0; ! canceled && i<numFrames; i++ ) {
					long sample = (long) Math.round( scale[ i ] * (float) model.getSample( ch, i ) );
					if( sample > model.getMaxValue() ) sample = model.getMaxValue();
					if( sample < model.getMinValue() ) sample = model.getMinValue();
					
					newModel.setSample(
						ch,
						i,
						(int) sample
					);
				
					if( monitor != null ) {
						monitor.setProgress( progressPre + progressSize * mNum++ / mDen );
						canceled = monitor.isCanceled();
					}
				}
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
		}
		
		if( monitor != null )
			monitor.setProgress( progressPre + progressSize );
		
		return( newModel );
	}
	
	public PlugInParameters getCustomParameters( SoundWindow active, int inputChannelCount ) {
		PlugInParameters param = new PlugInParameters();

		try {
			SoundModel model = active.getModel();

			boolean canceled = false;
			JDialog dialog = new JDialog(
				MainFrame.instance(),
				"Envelope",
				true
			);
			EnvelopePanel pane = new EnvelopePanel( dialog );
			dialog.getContentPane().add( pane );
			dialog.pack();
			dialog.setLocationRelativeTo( active );			
			dialog.show();
			
			canceled = pane.isCanceled();
			if( ! canceled ) {
				param.set( "EnvelopeAction.envelope", pane.getParam() );
			}
			else {
				param = null;
			}
		}
		catch( Exception e ) {
			if( schroeder.Constants.DEBUG ) {
				e.printStackTrace();
			}
			param = null;
		}
		
		return( param );
	}
	
	private class EnvelopePanel
			extends JPanel
			implements ActionListener, ListSelectionListener, CaretListener
		{
		public EnvelopePanel( JDialog dialog ) {
			super();
			dialog_ = dialog;
			
			// get presets
			presetList_ = new Hashtable();
			listItems_ = new Vector();
	
			int numPresets = Integer.parseInt(
				Preferences.get( "EnvelopePresetCount", "-1" )
			);
			if( numPresets == -1 ) {
				numPresets = PRESETS.length;
				Preferences.set( "EnvelopePresetCount", "" + numPresets );
				for( int i=0; i<PRESETS.length; i++ ) {
					Preferences.set( "EnvelopePresetName" + i, "" + PRESETS[ i ][ 0 ] );
					Preferences.set( "EnvelopePresetValue" + i, "" + PRESETS[ i ][ 1 ] );
				}
			}
			
			for( int i=0; i<numPresets; i++ ) {
				String name = Preferences.get( "EnvelopePresetName" + i, "null" );
				String value = Preferences.get( "EnvelopePresetValue" + i, "null" );
				
				if( ! name.equals( "null" ) && ! value.equals( "null" ) ) {
					presetList_.put( name.intern(), value );
					listItems_.addElement( name.intern() );
				}
			}
			
			
			GridBagLayout gridBag = new GridBagLayout();
			setLayout( gridBag );
	
			GridBagConstraints c = new GridBagConstraints();
			
			// Editor
			JLabel label = new JLabel(
				"Envelope",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 0;
			c.insets = new Insets( 10, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			c.gridwidth = GridBagConstraints.REMAINDER;
			gridBag.setConstraints( label, c );
			add( label );
	
			editor_ = new EnvelopeEditor();
			JPanel pane = new JPanel( new BorderLayout() );
			pane.setBorder( BorderFactory.createLoweredBevelBorder() );
			pane.add( editor_, BorderLayout.CENTER );
			c.gridx = 0;
			c.gridy = 1;
			c.insets = new Insets( 0, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( pane, c );
			add( pane );
	
			// Presets
			label = new JLabel(
				"Presets",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = 2;
			c.insets = new Insets( 20, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( label, c );
			add( label );
	
			presets_ = new JList( listItems_ );
			presets_.addListSelectionListener( this );
			JScrollPane scrollPane = new JScrollPane( presets_ );
			c.gridx = 0;
			c.gridy = 3;
			c.insets = new Insets( 0, 10, 0, 10 );
			c.fill = GridBagConstraints.BOTH;
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( scrollPane, c );
			add( scrollPane );
	
	
			// Add / Remove
			addField_ = new JTextField();
			c.gridx = 0;
			c.gridy = 4;
			c.insets = new Insets( 20, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			gridBag.setConstraints( addField_, c );
			add( addField_ );
			
			JPanel buttonPane = new JPanel();
			addButton_ = new JButton( "Add" );
			addButton_.setEnabled( false );
			buttonPane.add( addButton_ );
			removeButton_ = new JButton( "Remove" );
			removeButton_.setEnabled( false );
			buttonPane.add( removeButton_ );
			
			c.gridx = 0;
			c.gridy = 5;
			c.fill = GridBagConstraints.NONE;
			c.anchor = GridBagConstraints.EAST;
			c.insets = new Insets( 0, 10, 10, 10 );
			gridBag.setConstraints( buttonPane, c );
			add( buttonPane );
	
	
			// OK / Cancel
			buttonPane = new JPanel();
			JButton okButton = new JButton( "OK" );
			buttonPane.add( okButton );
			JButton cancelButton = new JButton( "Cancel" );
			buttonPane.add( cancelButton );
			
			c.gridx = 0;
			c.gridy = 6;
			c.fill = GridBagConstraints.NONE;
			c.anchor = GridBagConstraints.EAST;
			c.insets = new Insets( 20, 10, 10, 10 );
			gridBag.setConstraints( buttonPane, c );
			add( buttonPane );
			
			validate();
	
			addField_.addCaretListener( this );
			addButton_.addActionListener( this );
			removeButton_.addActionListener( this );
			okButton.addActionListener( this );
			cancelButton.addActionListener( this );
		}
		
		public void valueChanged( ListSelectionEvent evt ) {
			String selected = (String) presets_.getSelectedValue();
			if( selected != null ) {
				editor_.setEnvelope( (String) presetList_.get( selected.intern() ) );
				removeButton_.setEnabled( true );
			}
			else {
				removeButton_.setEnabled( false );
			}
		}
		
		public void actionPerformed( ActionEvent evt ) {
			canceled_ = true;
	
			Object src = evt.getSource();
			if( src instanceof JButton ) {
				JButton btn = (JButton) src;
				if( btn.getText().equals( "Add" ) ) {
					String text = ( addField_.getText() ).intern();
					listItems_.addElement( text );
					presetList_.put( text, editor_.getEnvelope() );
					presets_.setListData( listItems_ );
					updatePresets();
				}
				else if( btn.getText().equals( "Remove" ) ) {
					String selected = ( (String) presets_.getSelectedValue() ).intern();
					listItems_.remove( selected );
					presets_.setListData( listItems_ );
				}
				else if( btn.getText().equals( "OK" ) ) {
					canceled_ = false;
					updatePresets();
					dialog_.dispose();
				}
				else {
					canceled_ = true;
					dialog_.dispose();
				}
			}
		}
		
		public void caretUpdate( CaretEvent evt ) {
			String text = ( addField_.getText() ).intern();
			if( text != null && text.length() > 0 && ! listItems_.contains( text ) )
				addButton_.setEnabled( true );
			else
				addButton_.setEnabled( false );
		}
		
		
		public void updatePresets() {
			int numPresets = listItems_.size();
			Preferences.set( "EnvelopePresetCount", "" + numPresets );
			for( int i=0; i<numPresets; i++ ) {
				String name = (String) listItems_.elementAt( i );
				Preferences.set( "EnvelopePresetName" + i, "" + name );
				Preferences.set( "EnvelopePresetValue" + i, "" + (String) presetList_.get( name.intern() ) );
			}
		}
		
		public boolean isCanceled() {
			return( canceled_ );
		}
		
		public String getParam() {
			return( editor_.getEnvelope() );
		}
		
		JDialog dialog_ = null;
		JList presets_ = null;
		JTextField addField_ = null;	
		JButton addButton_ = null;
		JButton removeButton_ = null;
		EnvelopeEditor editor_ = null;	
		Hashtable presetList_ = null;
		Vector listItems_ = null;
		boolean canceled_ = true;
	}

	private class EnvelopeEditor
			extends JComponent
			implements MouseListener, MouseMotionListener
		{
		public EnvelopeEditor() {
			super();
			Dimension size = new Dimension( 200, 200 );
			setPreferredSize( size );
			setMinimumSize( size );
			
			points_ = new Vector();
			points_.addElement( new Rectangle( 0, ( 195 / 2 + 1 ), 5, 5 ) );
			points_.addElement( new Rectangle( 195, ( 195 / 2 + 1 ), 5, 5 ) );
	
			setForeground( new JLabel().getForeground() );
	
			addMouseListener( this );
			addMouseMotionListener( this );
		}
		
		public String getEnvelope() {
			String param = "";
	
			try {
				for( int i=0; i<points_.size(); i++ ) {
					Rectangle p = (Rectangle) points_.elementAt( i );
					param += "" + ( (double) p.x / 195.0 ) + " ";
					param += "" + ( ( 1.0 - ( (double) p.y / 195.0 ) ) * 2.0 ) + " ";
				}
			}
			catch( Exception e ) {
				if( schroeder.Constants.DEBUG ) {
					e.printStackTrace();
				}
			}
	
			return( param );
		}
		
		public void setEnvelope( String param ) {
			try {
				Vector points = new Vector();
				StringTokenizer st = new StringTokenizer( param );
				
				while( st.hasMoreTokens() ) {
					int x = (int) Math.round(
							195.0
						*	Double.parseDouble( st.nextToken() )
					);
					int y = (int) Math.round(
							195.0
						*	( 1.0 - Double.parseDouble( st.nextToken() ) / 2.0 )
					);
					
					points.addElement( new Rectangle( x, y, 5, 5 ) );
				}
				
				points_ = points;
				repaint();
			}
			catch( Exception e ) {
				if( schroeder.Constants.DEBUG ) {
					e.printStackTrace();
				}
			}
		}
	
		public void paint( Graphics g ) {
			super.paint( g );
		
			int x = 0;
			int y = 0;
			int w = getBounds().width;
			int h = getBounds().height;
		
			g.setColor( getBackground() );
			g.fillRect( x, y, w, h );
	
			// insets for size of blocks
			x += 2;
			y += 2;
			w -= 5;
			h -= 5;
				
			// draw centre line
			g.setColor( getBackground().darker() );
			g.drawLine( 0, y + h/2 + 1, w, y + h/2 + 1 );
			
			g.setColor( getBackground().brighter() );
			g.drawLine( 0, y + h/2 + 2, w, y + h/2 + 2 );
	
			// draw curve
			g.setColor( getForeground() );
			
			// initial point
			int x0 = x;
			int y0 = y;
			Rectangle p = (Rectangle) points_.elementAt( 0 );
			if( p != null ) {
				x0 = p.x + 2;
				y0 = p.y + 2;
			}
			
			// draw points
			for( int i=0; i<points_.size(); i++ ) {
				p = (Rectangle) points_.elementAt( i );
				
				g.drawLine( x0, y0, p.x + 2, p.y + 2 );
				g.fillRect( p.x, p.y, 5, 5 );
				
				x0 = p.x + 2;
				y0 = p.y + 2;
			}
		}
	
		public void mouseClicked( MouseEvent evt ) {}
		
		public void mousePressed( MouseEvent evt ) {
			SEARCH:
			for( int i=0; i<points_.size(); i++ ) {
				if( i > 0 )
					beforePoint_ = (Rectangle) points_.elementAt( i-1 );
				else
					beforePoint_ = null;
	
				if( i < points_.size() - 1 )
					afterPoint_ = (Rectangle) points_.elementAt( i+1 );
				else
					afterPoint_ = null;
	
				Rectangle p = (Rectangle) points_.elementAt( i );
	
				if( p.inside( evt.getX(), evt.getY() ) ) {
					// hit an existing point
					activePoint_ = p;
					break SEARCH;
				}
				else if( beforePoint_ != null && p.x + 2 > evt.getX() ) {
					// is this a hit on the line between existing points?
					int dx = p.x - beforePoint_.x;
					int dy = p.y - beforePoint_.y;
					double slope = ( (double) dy ) / ( (double) dx );
					int y = beforePoint_.y + (int) Math.round( slope * (double) ( evt.getX() - beforePoint_.x ) );
					
					dy = Math.abs( evt.getY() - y );
					
					if( dy < 10 ) {
						// hit the slope between points; insert a point
						activePoint_ = new Rectangle( evt.getX() - 2, evt.getY() - 2, 5, 5 );
						points_.insertElementAt( activePoint_, i );
						afterPoint_ = p;
						repaint();
						break SEARCH;
					}
				}
			
				beforePoint_ = null;
				afterPoint_ = null;
			}
		}
		
		public void mouseReleased( MouseEvent evt ) {
			activePoint_ = null;
		}
		
		public void mouseDragged( MouseEvent evt ) {
			if( activePoint_ != null ) {
				int x = evt.getX();
				if( beforePoint_ == null ) {
					x = activePoint_.x;
				}
				else if( afterPoint_ == null ) {
					x = activePoint_.x;
				}
				else {
					int lim0 = beforePoint_.x + 1;
					if( x < lim0 ) x = lim0;
	
					int limM = afterPoint_.x - 1;
					if( x > limM ) x = limM;
				}
	
				int y = evt.getY();			
				if( y < 0 ) y = 0;
				if( y > 195 ) y = 195;
			
				activePoint_.setLocation( x, y );
				repaint();
			}
		}
		
		public void mouseMoved( MouseEvent evt ) {}
	
		public void mouseEntered( MouseEvent evt ) {}
	
		public void mouseExited( MouseEvent evt ) {}
		
		Vector points_ = null;
		Rectangle beforePoint_ = null;
		Rectangle activePoint_ = null;
		Rectangle afterPoint_ = null;
	}
		
	static final String[][] PRESETS = {
		{ "Flat", "0.0 1.0 1.0 1.0" },
		{ "Fade In", "0.0 0.0 1.0 1.0" },
		{ "Fade Out", "0.0 1.0 1.0 0.0" },
		{ "ADSR", "0.0 0.0 0.05 2.0 0.1 1.0 0.95 1.0 1.0 0.0 " }
	};
}


