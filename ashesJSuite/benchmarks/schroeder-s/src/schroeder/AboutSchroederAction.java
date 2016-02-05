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
import java.util.*;

public class AboutSchroederAction
		extends AbstractAction
		implements EnableDisableable
	{
	public static AboutSchroederAction instance() {
		if( instance_ == null ) {
			instance_ = new AboutSchroederAction();
		}
		
		return( instance_ );
	}
	
	private AboutSchroederAction() {
		super(
			"About Schroeder",
			ImageIconFactory.instance().getImageIcon( "/images/blank.gif" )
		);
		
		ActionManager.instance().add( this );
	}

	public void enableDisable( SoundWindow active ) {
		setEnabled( true );
	}
	
	public void actionPerformed( ActionEvent evt ) {
		String aboutString = Constants.APPLICATION_NAME + "\n";
		aboutString += Constants.VERSION + "\n";
		aboutString += "\n";
		
		aboutString += ABOUT;
		aboutString += "\n";
		
		aboutString += "\nSound File Adapters\n";
		aboutString += "-------------------\n";
		aboutString += "\n";
		
		Hashtable filters = SoundFileAdapterManager.instance().getFilters();
		Enumeration extensions = filters.keys();
		while( extensions.hasMoreElements() ) {
			SoundFileAdapter sfa =
				SoundFileAdapterManager.instance().getAdapter(
					(String) extensions.nextElement()
				)
			;
			
			aboutString += sfa.getDescription() + " (" + sfa.getFileExtension() + ")\n";
			String info = sfa.getInfo();
			if( info != null ) {
				aboutString += "\n" + info + "\n";
			}
		}
		
		aboutString += "\nPlug-Ins\n";
		aboutString += "--------\n";
		aboutString += "\n";
		
		Enumeration names = PluginManager.instance().getPluginNames();
		while( names.hasMoreElements() ) {
			MonitoredAction action =
				PluginManager.instance().getPlugin(
					(String) names.nextElement()
				)
			;
			
			aboutString += ( (String) action.getValue( action.NAME ) ) + "\n";
			String info = action.getInfo();
			if( info != null ) {
				aboutString += "\n" + info + "\n";
			}
		}
	
		JTextArea textArea = new JTextArea();
		textArea.setEditable( false );
		textArea.setFont( new Font( "Monospaced", Font.PLAIN, 12 ) );
		textArea.setText( aboutString );
		
		textArea.setBorder(
			BorderFactory.createEmptyBorder( 10, 10, 10, 10 )
		);
	
		JDialog dialog = new JDialog( MainFrame.instance(), "About Schroeder", true );
		dialog.getContentPane().setLayout( new BorderLayout() );
		dialog.getContentPane().add( new JScrollPane( textArea ), BorderLayout.CENTER );
		dialog.setSize( new Dimension( 500, 300 ) );
		dialog.setLocationRelativeTo( MainFrame.instance() );
		dialog.show();
	}
	
	private static final String ABOUT = 
			"Copyright (C) 1998 David Veldhuizen <david@interlog.com>\n"
		+	"\n"
	    +	"This program is free software; you can redistribute it and/or modify\n"
	    +	"it under the terms of the GNU General Public License as published by\n"
	    +	"the Free Software Foundation; either version 2 of the License, or\n"
	    +	"(at your option) any later version.\n"
		+	"\n"
	    +	"This program is distributed in the hope that it will be useful,\n"
	    +	"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
	    +	"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
	    +	"GNU General Public License for more details.\n"
		+	"\n"
	    +	"You should have received a copy of the GNU General Public License\n"
	    +	"along with this program; if not, write to the Free Software\n"
	    +	"Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.\n"
	;

	
	private static AboutSchroederAction instance_ = null;
}
