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

public class SoundView
		extends JPanel
		implements ChangeListener, Runnable
	{
	public SoundView( SoundModel model, JScrollBar scrollBar ) {
		super();
		model_ = model;
		scrollBar_ = scrollBar;

		controller_ =
			new SoundController(
				model_,
				this
			)
		;

		createChannelViews();
		
		// register for updates from the sound model and scrollbar
		model_.addChangeListener( this );
		scrollBar_.getModel().addChangeListener( this );
		// the channel views will also treat this object as a change
		// listener; hard-wired for now, perhaps unwisely?
		
		// blink thread for insertion point
		done_ = false;
		( new Thread( this ) ).start();
	}

	public SoundModel getModel() {
		return( model_ );
	}

	public void createChannelViews() {
		GridBagLayout gridBag = new GridBagLayout();
		setLayout( gridBag );

		// horizontal scale ruler
		GridBagConstraints c = new GridBagConstraints();
		c.gridx = 0;
		c.gridy = 0;
		c.fill = GridBagConstraints.BOTH;
		c.weightx = 1;
		c.weighty = 1;

		TimeRuler ruler = new TimeRuler( this );
		ruler.setPreferredSize(
			new Dimension(
				Integer.MAX_VALUE,
				20
			)
		);

		JPanel panel = new JPanel();
		panel.setLayout( new BorderLayout() );
		panel.setBorder(
			BorderFactory.createEmptyBorder(
				0,	// top
				2,	// left
				0,	// bottom
				4	// right
			)
		);
		panel.add(
			ruler,
			BorderLayout.CENTER
		);
		gridBag.setConstraints( panel, c );
		add( panel );

		// create n channel views for audio channels
		channels_ = new ChannelView[ model_.getNumChannels() ];
		
		c.weightx = 100;
		c.weighty = 100;
		for( int ch = 0; ch < channels_.length; ch++ ) {
			channels_[ ch ] = new ChannelView(
				model_,
				this,
				controller_,
				ch
			);
		
			panel = new JPanel();
			panel.setLayout( new BorderLayout() );
			panel.setBorder(
				BorderFactory.createCompoundBorder(
					BorderFactory.createEmptyBorder(
						0,	// top
						2,	// left
						2,	// bottom
						2	// right
					),
					BorderFactory.createLoweredBevelBorder()
				)
			);
			panel.add(
				channels_[ ch ],
				BorderLayout.CENTER
			);
			
			c.gridy = ch + 1;
			gridBag.setConstraints( panel, c );
			add( panel );
		}

		validate();
		for( int ch = 0; ch < channels_.length; ch++ ) {
			channels_[ ch ].createNewBuffer();
		}
		
		renderChannels();
	}

	public void stateChanged( ChangeEvent e ) {
		if( e.getSource() instanceof BoundedRangeModel ) {
			setDataIndex( scrollBar_.getValue() );
		}
		else if( e.getSource() instanceof Selection ) {
			repaint();
		}
		else if( e.getSource() instanceof ChannelView ) {
			if( ( (ChannelView) e.getSource() ).getChannel() == channels_.length - 1 ) {
				// wait for last channel to resize
				// before re-rendering
				computeScale();
				updateScrollBar();
				renderChannels();
			}
		}
		else if( e.getSource() instanceof SoundModel ) {
			if( model_.getNumChannels() != channels_.length ) {
				removeAll();
				createChannelViews();
			}
		
			computeScale();
			updateScrollBar();
			renderChannels();
			repaint();
			SoundToolbar.instance().repaint();
		}
	}
	
	boolean active_ = true;
	public boolean isActive() {
		return( active_ );
	}

	public void activated() {
		if( ! active_ ) {
			active_ = true;
			scrollBar_.setEnabled( true );
			repaint();
		}
	}
	
	public void deactivated() {
		active_ = false;
		scrollBar_.setEnabled( false );
		repaint();
	}
	
	public int getScale() {
		return( horizontalScaleIndex_ );
	}
	
	public int getZoomInScale() {
		int scale = getScale();

		if( scale == FIT_TO_WINDOW )
			scale = getZoomInFromFit();
		else if( scale-1 > 0 ) {
			scale--;
		}
		
		return( scale );
	}
	
	public int getZoomInFromFit() {
		int scale = 0;
	
		// get the first zoom index that's IN
		// from the current zoom scaling
		for( int i = SCALE_LABELS.length - 1; i > 0; i-- ) {
			if(			HORIZONTAL_SCALE_NUMERATOR[ i ]
					>=	getHorizontalScaleNumerator()
				&&		HORIZONTAL_SCALE_DENOMINATOR[ i ]
					<=	getHorizontalScaleDenominator()
				) {
				scale = i;
				break;
			}
		}
		
		return( scale );
	}
	
	public int getZoomOutScale() {
		int scale = getScale();
		
		if( scale == FIT_TO_WINDOW )
			scale = getZoomOutFromFit();
		else if( scale+1 < SoundView.SCALE_LABELS.length ) {
			scale++;
		}
		
		return( scale );
	}
	
	public int getZoomOutFromFit() {
		int scale = 0;
	
		// get the first zoom index that's OUT
		// from the current zoom scaling
		for( int i = 0; i < SCALE_LABELS.length - 1; i++ ) {
			if(			HORIZONTAL_SCALE_NUMERATOR[ i ]
					<=	getHorizontalScaleNumerator()
				&&		HORIZONTAL_SCALE_DENOMINATOR[ i ]
					>=	getHorizontalScaleDenominator()
				) {
				scale = i;
				break;
			}
		}
		
		return( scale );
	}
	
	public void setScale( int scale ) {
		horizontalScaleIndex_ = scale;
		computeScale();
		updateScrollBar();
		renderChannels();
		repaint();
	}
		
	public void computeScale() {
		// horizontal scaling
		if( horizontalScaleIndex_ == FIT_TO_WINDOW ) {
			int w =	channels_[ 0 ].getBounds().width;
			int size = model_.getNumSampleFrames();
			
			horizontalScaleNumerator_ = 1;
			horizontalScaleDenominator_ = 1;
			
			if( size > w ) {
				horizontalScaleDenominator_ = (int) Math.ceil(
					(double) size / (double) w
				);
			}
			else {
				horizontalScaleNumerator_ = (int) Math.floor(
					(double) w / (double) size
				);
			}
		}
		else {
			horizontalScaleNumerator_ = HORIZONTAL_SCALE_NUMERATOR[ horizontalScaleIndex_ ];
			horizontalScaleDenominator_ = HORIZONTAL_SCALE_DENOMINATOR[ horizontalScaleIndex_ ];
		}

		// vertical scaling (automatic)
		int h =	channels_[ 0 ].getBounds().height;
		double bandwidth = Math.pow(
			2.0,
			(double) ( model_.getEffectiveSampleSize() )
		);
		
		
		int mult = 1;
		if( model_.getEffectiveSampleSize() <= 16 )
			mult = 100;
			
		verticalScaleNumerator_ = mult;
		verticalScaleDenominator_ = mult;
		
		if( h > bandwidth ) {
			verticalScaleNumerator_ = 
				(int) Math.ceil(
					 (double) mult * (double) h / bandwidth
				)
			;
		}
		else {
			verticalScaleDenominator_ = 
				(int) Math.ceil(
					(double) mult * bandwidth / (double) h
				)
			;
		}
	}

	public int getHorizontalScaleNumerator() {
		return( horizontalScaleNumerator_ );
	}

	public int getHorizontalScaleDenominator() {
		return( horizontalScaleDenominator_ );
	}

	public int getVerticalScaleNumerator() {
		return( verticalScaleNumerator_ );
	}

	public int getVerticalScaleDenominator() {
		return( verticalScaleDenominator_ );
	}

	public synchronized void updateScrollBar() {
		int max = model_.getNumSampleFrames();
		int extent = channels_[ 0 ].getBounds().width
			/	horizontalScaleNumerator_
			*	horizontalScaleDenominator_
		;
		
		if( extent > max ) {
			extent = max;
		}
		if( scrollBar_.getValue() + extent > max ) {
			scrollBar_.setValue( max - extent );
		}

		scrollBar_.setMinimum( 0 );
		scrollBar_.setMaximum( max );
		scrollBar_.setVisibleAmount( extent );
		scrollBar_.setBlockIncrement( extent );
		scrollBar_.setUnitIncrement( extent / 5 );
		
		if( model_.getSelection() != null ) {
			int selectionCentre =
				model_.getSelection().getOffset() + 
				model_.getSelection().getLength() / 2
			;	
			scrollBar_.setValue( selectionCentre - extent / 2 );
		}
	}
	
	public int getScrollIncr() {
		return( scrollBar_.getUnitIncrement() );
	}
	
	public void scroll( int direction ) {
		scrollBar_.setValue(
				scrollBar_.getValue()
			+	direction * scrollBar_.getUnitIncrement()
		);
	}

	public int getExtent() {
		return( scrollBar_.getVisibleAmount() );
	}
	
	public int getChannelWidth() {
		return( channels_[ 0 ].getBounds().width );
	}

	int dataIndex_ = 0;
	public int getDataIndex() {
		return( dataIndex_ );
	}
	
	public int getDataIndex( int x ) {
		if( x < 0 )
			x = 0;
		if( x > getChannelWidth() )
			x = getChannelWidth();
	
		// returns the first data index at 
		// or to the right of the point
		int hNum = getHorizontalScaleNumerator();
		int hDen = getHorizontalScaleDenominator();

		x -= hNum / 2;

		int index = dataIndex_ +
			(int) Math.ceil(
					(double) ( x * getHorizontalScaleDenominator() )
				/ 	(double) getHorizontalScaleNumerator()
			)
		;
		if( index < 0 )
			index = 0;
		if( index > model_.getNumSampleFrames() )
			index = model_.getNumSampleFrames();

		return( index );
	}
	
	public void setDataIndex( int index ) {
		if( index != dataIndex_ ) {
			dataIndex_ = index;
			renderChannels();
			paintImmediately( getBounds() );
//			repaint();
		}
	}

	private void renderChannels() {
		blinkLock_ = true;
		for( int ch = 0; ch < channels_.length; ch++ ) {
			channels_[ ch ].render();
		}
		blinkLock_ = false;
	}

	boolean done_ = false;
	boolean blinkLock_ = false;
	static final long BLINK_TIME = 500L;
	public void run() {
		Graphics g = getGraphics();
	
		while( ! done_ ) {
			long startT = System.currentTimeMillis();
			
			try {
				Selection s = model_.getSelection();
				if( s != null && s.getLength() == 0 && isActive() && ! blinkLock_ ) {
					blink_ = ! blink_;
					repaint();
				}
				
				long endT = System.currentTimeMillis();
				if( startT + BLINK_TIME > endT )
					Thread.sleep( startT + BLINK_TIME - endT );
			}
			catch( Exception e ) {
				if( schroeder.Constants.DEBUG ) {
					e.printStackTrace();
				}
			}
		}
		
		g.dispose();
	}
	
	public boolean blink() {
		return( blink_ );
	}
	
	public void stop() {
		done_ = true;
	}

	SoundModel model_ = null;
	SoundController controller_ = null;
	JScrollBar scrollBar_ = null;
	ChannelView[] channels_ = null;
	boolean blink_ = true;
	
	int verticalScaleNumerator_ = 100;
	int verticalScaleDenominator_ = 100;
	
	int horizontalScaleNumerator_ = 1;
	int horizontalScaleDenominator_ = 1;
	
	int horizontalScaleIndex_ = DEFAULT_SCALE;
	
	static final int FIT_TO_WINDOW = 0;
	public static final int DEFAULT_SCALE = FIT_TO_WINDOW;
	private static final int[] HORIZONTAL_SCALE_NUMERATOR = {
		0,	// "Fit to Window",
		20,	// "2000%",
		10,	// "1000%",
		4,	// "400%",
		2,	// "200%",
		1,	// "100%",
		1,	// "50%",
		1,	// "25%",
		1	// "10%"
	};
	private static final int[] HORIZONTAL_SCALE_DENOMINATOR = {
		0,	// "Fit to Window",
		1,	// "2000%",
		1,	// "1000%",
		1,	// "400%",
		1,	// "200%",
		1,	// "100%",
		2,	// "50%",
		4,	// "25%",
		10	// "10%"
	};
	public static final String[] SCALE_LABELS = {
		"Fit to Window",
		"2000%",
		"1000%",
		"400%",
		"200%",
		"100%",
		"50%",
		"25%",
		"10%"
	};
}
