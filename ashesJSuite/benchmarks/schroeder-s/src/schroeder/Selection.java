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

public class Selection {
	public Selection( int channel, int offset, int length ) {
		channel_ = channel;
		offset_ = offset;
		length_ = length;
	}
	
	public Selection( Selection s ) {
		channel_ = s.getChannel();
		offset_ = s.getOffset();
		length_ = s.getLength();
	}
	
	public int getChannel() {
		return( channel_ );
	}
	
	public void setChannel( int channel ) {
		channel_ = channel;
	}
	
	public int getOffset() {
		return( offset_ );
	}
	
	public void setOffset( int offset ) {
		offset_ = offset;
	}
	
	public int getLength() {
		return( length_ );
	}
	
	public void setLength( int length ) {
		length_ = length;
	}
	
	public boolean isPoint() {
		return( length_ == 0 );
	}
	
	public static final int ALL_CHANNELS = -1;
	int channel_ = ALL_CHANNELS;
	int offset_ = 0;
	int length_ = 0;
}
