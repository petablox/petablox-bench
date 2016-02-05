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

public class DataInterpretationPanel
		extends JPanel
		implements ActionListener, ItemListener, CaretListener
	{
	public DataInterpretationPanel( JDialog dialog ) {
		this( dialog, false );
	}
	
	public DataInterpretationPanel( JDialog dialog, boolean sampleSize ) {
		super();
		
		dialog_ = dialog;
		
		GridBagLayout gridBag = new GridBagLayout();
		setLayout( gridBag );

		GridBagConstraints c = new GridBagConstraints();
		
		int row = 0;
		
		// Labels
		JLabel label = new JLabel(
			"Please enter the sample rate:",
			SwingConstants.LEFT
		);
		c.gridx = 0;
		c.gridy = row++;
		c.insets = new Insets( 10, 10, 0, 10 );
		c.anchor = GridBagConstraints.WEST;
		c.gridwidth = GridBagConstraints.REMAINDER;
		gridBag.setConstraints( label, c );
		add( label );


		// New rate selection
		String[] rates = {
			"48000",
			"44100",
			"32000",
			"22050",
			"16000",
			"11025",
			"8000"
		};
		rateBox_ = new JComboBox( rates );
		rateBox_.setEditable( true );
		c.gridx = 0;
		c.gridy = row++;
		c.insets = new Insets( 20, 10, 0, 10 );
		c.anchor = GridBagConstraints.CENTER;
		gridBag.setConstraints( rateBox_, c );
		add( rateBox_ );


		// button group
		ButtonGroup btnGroup = new ButtonGroup();
		
		monoBtn_ = new JRadioButton(
			"Mono",
			true
		);
		btnGroup.add( monoBtn_ );
		c.gridx = 0;
		c.gridy = row++;
		c.anchor = GridBagConstraints.WEST;
		gridBag.setConstraints( monoBtn_, c );
		add( monoBtn_ );
		
		stereoBtn_ = new JRadioButton(
			"Stereo"
		);
		btnGroup.add( stereoBtn_ );
		c.gridx = 0;
		c.gridy = row++;
		c.insets = new Insets( 0, 10, 0, 10 );
		gridBag.setConstraints( stereoBtn_, c );
		add( stereoBtn_ );
		
		JRadioButton otherBtn = new JRadioButton(
			"Other"
		);
		btnGroup.add( otherBtn );
		c.gridx = 0;
		c.gridy = row++;
		gridBag.setConstraints( otherBtn, c );
		add( otherBtn );
		
		// Text field
		textField_ = new JTextField();
		c.gridx = 0;
		c.gridy = row++;
		c.insets = new Insets( 10, 10, 10, 10 );
		c.fill = GridBagConstraints.BOTH;
		c.gridwidth = GridBagConstraints.REMAINDER;
		c.anchor = GridBagConstraints.WEST;
		gridBag.setConstraints( textField_, c );
		add( textField_ );

		// Sample size selection
		if( sampleSize ) {
			// Label
			label = new JLabel(
				"Please select a sample size:",
				SwingConstants.LEFT
			);
			c.gridx = 0;
			c.gridy = row++;
			c.insets = new Insets( 10, 10, 0, 10 );
			c.anchor = GridBagConstraints.WEST;
			c.gridwidth = GridBagConstraints.REMAINDER;
			gridBag.setConstraints( label, c );
			add( label );

			String[] sizes = {
				"8",
				"16",
				"24",
				"32"
			};
			sizeBox_ = new JComboBox( sizes );
			sizeBox_.setEditable( false );
			c.gridx = 0;
			c.gridy = row++;
			c.insets = new Insets( 20, 10, 0, 10 );
			c.anchor = GridBagConstraints.CENTER;
			gridBag.setConstraints( sizeBox_, c );
			add( sizeBox_ );
		}

		// OK / Cancel
		JPanel buttonPane = new JPanel();
		okButton_ = new JButton( "OK" );
		buttonPane.add( okButton_ );
		JButton cancelButton = new JButton( "Cancel" );
		buttonPane.add( cancelButton );
		
		c.gridx = 0;
		c.gridy = row++;
		c.anchor = GridBagConstraints.EAST;
		c.insets = new Insets( 20, 10, 10, 10 );
		gridBag.setConstraints( buttonPane, c );
		add( buttonPane );
		
		validate();

		rateBox_.addItemListener( this );
		monoBtn_.addItemListener( this );
		stereoBtn_.addItemListener( this );
		otherBtn.addItemListener( this );
		
		textField_.addCaretListener( this );
		
		okButton_.addActionListener( this );
		cancelButton.addActionListener( this );
	}
	
	public void itemStateChanged( ItemEvent evt ) {
		if( getSampleRate() > 0 && getNumChannels() > 0 ) {
			okButton_.setEnabled( true );
		}
		else {
			okButton_.setEnabled( false );
		}
	}

	public void caretUpdate( CaretEvent evt ) {
		if( getSampleRate() > 0 && getNumChannels() > 0 ) {
			okButton_.setEnabled( true );
		}
		else {
			okButton_.setEnabled( false );
		}
	}
	
	public void actionPerformed( ActionEvent evt ) {
		canceled_ = true;

		Object src = evt.getSource();
		if( src instanceof JButton ) {
			JButton btn = (JButton) src;
			if( btn.getText().equals( "OK" ) ) {
				canceled_ = false;
			}
			else {
				canceled_ = true;
			}
			
			dialog_.dispose();
		}
	}
	
	public boolean isCanceled() {
		return( canceled_ );
	}
	
	public int getSampleSize() {
		int sampleSize = 0;
		
		try {
			sampleSize = Integer.parseInt(
				(String) sizeBox_.getSelectedItem()
			);
		}
		catch( Exception e ) {
			;
		}

		return( sampleSize );
	}
	
	public int getSampleRate() {
		int sampleRate = 0;
		
		try {
			sampleRate = Integer.parseInt(
				(String) rateBox_.getSelectedItem()
			);
		}
		catch( Exception e ) {
			;
		}

		return( sampleRate );
	}
	
	public int getNumChannels() {
		int numChannels = 0;
		if( monoBtn_.isSelected() ) {
			numChannels = 1;
		}
		else if( stereoBtn_.isSelected() ) {
			numChannels = 2;
		}
		else {
			try {
				numChannels = Integer.parseInt(
					textField_.getText()
				);
			}
			catch( Exception e ) {
				;
			}
		}
		
		return( numChannels );
	}
	
	JDialog dialog_ = null;
	JRadioButton monoBtn_ = null;
	JRadioButton stereoBtn_ = null;
	JTextField textField_ = null;
	JComboBox rateBox_ = null;
	JComboBox sizeBox_ = null;
	JButton okButton_ = null;
	boolean canceled_ = false;
}
