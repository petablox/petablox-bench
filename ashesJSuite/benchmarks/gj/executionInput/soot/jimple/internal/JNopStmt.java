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

import soot.baf.*;
import soot.jimple.*;
import soot.*;
import soot.jimple.*;
import soot.util.*;
import java.util.*;

public class JNopStmt extends AbstractStmt implements NopStmt
{
    public JNopStmt()
    {
    }
    

    public Object clone() 
    {
        return new JNopStmt();
    }


    protected String toString(boolean isBrief, Map stmtToName, String indentation)
    {
        return indentation +  Jimple.v().NOP;
    }
    
    public void apply(Switch sw)
    {
        ((StmtSwitch) sw).caseNopStmt(this);
    }    
    
    public void convertToBaf(JimpleToBafContext context, List out)
    {
        out.add(Baf.v().newNopInst());
    }


    public boolean fallsThrough(){return true;}        
    public boolean branches(){return false;}

}
