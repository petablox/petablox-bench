/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * SableCC, an object-oriented compiler framework.                   *
 * Copyright (C) 1997, 1998, 1999 Etienne Gagnon                     *
 * (gagnon@sable.mcgill.ca).  All rights reserved.                   *
 *                                                                   *
 * This work was done as a project of the Sable Research Group,      *
 * School of Computer Science, McGill University, Canada             *
 * (http://www.sable.mcgill.ca/).  It is understood that any         *
 * modification not identified as such is not covered by the         *
 * preceding statement.                                              *
 *                                                                   *
 * This work is free software; you can redistribute it and/or        *
 * modify it under the terms of the GNU Library General Public       *
 * License as published by the Free Software Foundation; either      *
 * version 2 of the License, or (at your option) any later version.  *
 *                                                                   *
 * This work is distributed in the hope that it will be useful,      *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU *
 * Library General Public License for more details.                  *
 *                                                                   *
 * You should have received a copy of the GNU Library General Public *
 * License along with this library; if not, write to the             *
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,      *
 * Boston, MA  02111-1307, USA.                                      *
 *                                                                   *
 * To submit a bug report, send a comment, or get the latest news on *
 * this project and other Sable Research Group projects, please      *
 * visit the web site: http://www.sable.mcgill.ca/                   *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
 Reference Version
 -----------------
 This is the latest official version on which this file is based.
 The reference version is: $SableCCVersion: 2.8 $

 Change History
 --------------
 A) Notes:

 Please use the following template.  Most recent changes should
 appear at the top of the list.

 - Modified on [date (March 1, 1900)] by [name]. [(*) if appropriate]
   [description of modification].

 Any Modification flagged with "(*)" was done as a project of the
 Sable Research Group, School of Computer Science,
 McGill University, Canada (http://www.sable.mcgill.ca/).

 You should add your copyright, using the following template, at
 the top of this file, along with other copyrights.

 *                                                                   *
 * Modifications by [name] are                                       *
 * Copyright (C) [year(s)] [your name (or company)].  All rights     *
 * reserved.                                                         *
 *                                                                   *

 B) Changes:

 - Modified on January 31, 1999 by Etienne Gagnon (gagnon@sable.mcgill.ca). (*)
   JDK 1.2 compatibility.

 - Modified on June 7, 1998 by Etienne Gagnon (gagnon@sable.mcgill.ca). (*)
   Changed the license.
*/

package ca.mcgill.sable.sablecc;

import ca.mcgill.sable.util.*;
import java.util.Vector;

final class LR0Collection
{
    private final Vector sets = new Vector(0);
    private final SplayTreeMap setIndices = new SplayTreeMap();
    private final Vector GOTO = new Vector(0);

    LR0Collection(LR0ItemSet set)
    {
        add(set);

        for(int i = 0; i < sets.size(); i++)
        {
            System.out.print(".");
            Symbol[] symbols = Symbol.symbols();

            for(int j = 0; j < symbols.length; j++)
            {
                addGoto(i, symbols[j], Grammar.GOTO(set(i), symbols[j]));
            }
        }
        System.out.println();
    }

    private int add(LR0ItemSet set)
    {
        Integer result = set(set);

        if(result == null)
        {
            result = new Integer(sets.size());

            setIndices.put(set, result);
            sets.addElement(set);
            GOTO.addElement(new SplayTreeMap());
        }

        return result.intValue();
    }

    private static final LR0ItemSet empty = new LR0ItemSet();

    private void addGoto(int from, Symbol symbol, LR0ItemSet to)
    {
        if(!to.equals(empty))
        {
            ((SplayTreeMap) GOTO.elementAt(from)).put(symbol, new Integer(add(to)));
        }
    }

    private Integer set(LR0ItemSet set)
    {
        return (Integer) setIndices.get(set);
    }

    private LR0ItemSet set(int index)
    {
        return (LR0ItemSet) sets.elementAt(index);
    }

    LR0ItemSet[] sets()
    {
        LR0ItemSet[] result = new LR0ItemSet[sets.size()];
        sets.copyInto(result);

        return result;
    }

    Integer GOTO(int set, Symbol symbol)
    {
        return (Integer) ((SplayTreeMap) GOTO.elementAt(set)).get(symbol);
    }

    public String toString()
    {
        StringBuffer result = new StringBuffer();

        result.append("{[LR0ItemCollection]" + System.getProperty("line.separator"));
        LR0ItemSet[] sets = sets();
        Symbol[] symbols = Symbol.symbols();

        for(int i = 0; i < sets.length; i++)
        {
            result.append(i + ":" + Grammar.CLOSURE(sets[i]));
            result.append(System.getProperty("line.separator"));

            for(int j = 0; j < symbols.length; j++)
            {
                if(GOTO(i, symbols[j]) != null)
                {
                    result.append("[");
                    result.append(symbols[j]);
                    result.append(":");
                    result.append(GOTO(i, symbols[j]));
                    result.append("]");
                }
            }

            result.append(System.getProperty("line.separator"));
        }

        result.append("}");
        return result.toString();
    }
}


