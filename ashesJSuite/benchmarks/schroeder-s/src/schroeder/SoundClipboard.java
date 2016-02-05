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
import java.util.*;

// PENDING: replace with awt.datatransfer.Clipboard?

public class SoundClipboard {
	public static SoundClipboard instance() {
		if( instance_ == null ) {
			instance_ = new SoundClipboard();
		}
		
		return( instance_ );
	}
	
	public SoundModel put( SoundModel model ) {
		SoundModel temp = model_;
		model_ = model;
		return( temp );
	}
	
	public SoundModel get() {
		return( model_ );
	}
	
	SoundModel model_ = null;
	
	private SoundClipboard() {}
	private static SoundClipboard instance_ = null;
}

