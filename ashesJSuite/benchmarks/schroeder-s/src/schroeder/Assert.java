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

public class Assert {
	public static void assert( boolean test ) throws AssertionFailedException {
		if( Constants.DEBUG && ! test ) {
			AssertionFailedException e = new AssertionFailedException();
			e.printStackTrace();
			throw e;
		}
	}
	
	public static void pre( boolean test ) throws PreconditionFailedException {
		if( Constants.DEBUG && ! test ) {
			PreconditionFailedException e = new PreconditionFailedException();
			e.printStackTrace();
			throw e;
		}
	}
	
	public static void post( boolean test, Invariable inv ) throws Exception {
		if( Constants.DEBUG ) {
			post( test );
			invariant( inv.getInvariant() );
		}
	}

	public static void post( boolean test ) throws PostconditionFailedException {
		if( Constants.DEBUG && ! test ) {
			PostconditionFailedException e = new PostconditionFailedException();
			e.printStackTrace();
			throw e;
		}
	}

	public static void invariant( boolean test ) throws InvariantFalseException {
		if( Constants.DEBUG && ! test ) {
			InvariantFalseException e = new InvariantFalseException();
			e.printStackTrace();
			throw e;
		}
	}
}

