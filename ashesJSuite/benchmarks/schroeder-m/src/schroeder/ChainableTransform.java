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

public interface ChainableTransform {
	public String getNote();
	
	public SoundModel transform(
		SoundModel source,
		PlugInParameters param,
		ProgressMonitor monitor,
		int progressPre,
		int progressSize
	);
	
	public PlugInParameters getDefaultParameters( 
		int inputChannelCount
	);
	
	public PlugInParameters getCustomParameters(
		SoundWindow active,
		int inputChannelCount
	);
	
	public int getOutputChannelCount(
		int inputChannelCount,
		PlugInParameters param
	);
}
