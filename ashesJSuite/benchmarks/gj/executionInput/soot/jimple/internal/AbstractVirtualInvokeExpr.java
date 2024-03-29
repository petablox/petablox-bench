/* Soot - a J*va Optimization Framework
 * Copyright (C) 1999 Patrick Lam
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





package soot.jimple.internal;

import soot.*;
import soot.jimple.*;
import soot.baf.*;
import soot.jimple.*;
import soot.util.*;
import java.util.*;

public abstract class AbstractVirtualInvokeExpr extends AbstractInstanceInvokeExpr
  implements VirtualInvokeExpr, ConvertToBaf                                               
{
    protected AbstractVirtualInvokeExpr(ValueBox baseBox, SootMethod method,
                                ValueBox[] argBoxes)
    {
        this.baseBox = baseBox; this.method = method;
        this.argBoxes = argBoxes;
    }

    public abstract Object clone();


    public void apply(Switch sw)
    {
        ((ExprSwitch) sw).caseVirtualInvokeExpr(this);
    }
    
    public String toString()
    {
        StringBuffer buffer = new StringBuffer();

        buffer.append(Jimple.v().VIRTUALINVOKE + " " + baseBox.getValue().toString() +
            "." + method.getJimpleStyleSignature() + "(");

        for(int i = 0; i < argBoxes.length; i++)
        {
            if(i != 0)
                buffer.append(", ");
	    	    
            buffer.append(argBoxes[i].getValue().toString());
        }

        buffer.append(")");

        return buffer.toString();
    }

    public String toBriefString()
    {
        StringBuffer buffer = new StringBuffer();

        buffer.append(((ToBriefString) baseBox.getValue()).toBriefString() +
            "." + method.getName() + "(");

        for(int i = 0; i < argBoxes.length; i++)
        {
            if(i != 0)
                buffer.append(", ");

            buffer.append(((ToBriefString) argBoxes[i].getValue()).toBriefString());
        }

        buffer.append(")");

        return buffer.toString();
    }


    public void convertToBaf(JimpleToBafContext context, List out)
    {
       ((ConvertToBaf)(getBase())).convertToBaf(context, out);

       for(int i = 0; i < argBoxes.length; i++)
        {
            ((ConvertToBaf)(argBoxes[i].getValue())).convertToBaf(context, out);
        }

        out.add(Baf.v().newVirtualInvokeInst(method));
    }
}
