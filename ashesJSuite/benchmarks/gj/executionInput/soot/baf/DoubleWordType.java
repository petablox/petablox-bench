/* Soot - a J*va Optimization Framework
 * Copyright (C) 1999 Patrick Lam, Patrick Pominville and Raja Vallee-Rai
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/*
 * Modified by the Sable Research Group and others 1997-1999.  
 * See the 'credits' file distributed with Soot for the complete list of
 * contributors.  (Soot is distributed at http://www.sable.mcgill.ca/soot)
 */

/* Reference Version: $SootVersion: 1.beta.5.dev.74 $ */




package soot.baf;

import soot.util.*;
import java.util.*;
import soot.*;

public class DoubleWordType extends Type
{
    private static final DoubleWordType constant = new DoubleWordType();

    private DoubleWordType()
    {
        // no constructor allowed
    }

    public static DoubleWordType v()
    {
        return constant;
    }

    public boolean equals(Object t)
    {
        return this == t;
    }
    
    public int hashCode()
    {
        return 0xA247839F;
    }
    
    public String toString()
    {
        return "dword";
    }
    
    public void apply(Switch sw)
    {
        throw new RuntimeException("invalid switch case");
    }
}
