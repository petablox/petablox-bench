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

public class PluginMenu
		extends JMenu
	{
	protected PluginMenu( String title ) {
		super( title, true );

		// build a tree of actions and submenus
		MenuTree tree = new MenuTree();

		Enumeration plugins = PluginManager.instance().getPluginNames( title );
		while( plugins.hasMoreElements() ) {
			String name = (String) plugins.nextElement();
			MonitoredAction action = PluginManager.instance().getPlugin( name );
			String path = PluginManager.instance().getPath( name );

			if( action != null ) {
				path = path.substring(
					path.indexOf( title ) + title.length()
				);
				String separator = System.getProperty( "file.separator" );

				StringTokenizer st = new StringTokenizer( path, separator );
				MenuTree subtree = tree;
				while( st.hasMoreElements() ) {
					String label = ( (String) st.nextElement() ).intern();
					
					MenuTree temp = subtree;
					Enumeration subtrees = subtree.submenus.elements();
					while( ! temp.label.equals( label ) && subtrees.hasMoreElements() ) {
						temp = (MenuTree) subtrees.nextElement();
					}
					
					if( ! temp.label.equals( label ) ) {
						temp = new MenuTree();
						temp.label = label;
						subtree.submenus.addElement( temp );
					}
					
					subtree = temp;
				}
				
				subtree.elements.addElement( action );
			}
		}

		// travel the tree, building submenus as needed
		addElements( tree, this );
	}
	
	private void addElements( MenuTree tree, JMenu menu ) {
		Enumeration elements = tree.elements.elements();
		while( elements.hasMoreElements() ) {
			MonitoredAction action = (MonitoredAction) elements.nextElement();
			menu.add( action );
			ActionManager.instance().add( action );
		}
		
		Enumeration submenus = tree.submenus.elements();
		while( submenus.hasMoreElements() ) {
			MenuTree subTree = (MenuTree) submenus.nextElement();
			JMenu newMenu = new JMenu( subTree.label );
			JMenuItem item = menu.add( newMenu );
			item.setIcon( ImageIconFactory.instance().getImageIcon( "/images/blank.gif" ) );
			addElements( subTree, newMenu );
		}
	}
	
	private class MenuTree {
		MenuTree() {
			elements = new Vector();
			submenus = new Vector();
		}
		
		String label = "";
		Vector elements = null;
		Vector submenus = null;
	}
}
