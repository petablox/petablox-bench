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
import ca.mcgill.sable.util.Comparable;
import java.util.Vector;

final class Symbol implements Comparable
{
    private static final Vector terminals = new Vector(0);
    private static final Vector nonterminals = new Vector(0);
    private static final SplayTreeMap names = new SplayTreeMap(StringComparator.instance);

    private static boolean modified_ = true;
    private static Symbol[] symbols_;
    private static Symbol[] terminals_;
    private static Symbol[] nonterminals_;


    final String name;
    final boolean terminal;
    final int index;

    Symbol(String name, boolean terminal)
    {
        if(names.get(name) != null)
        {
            throw new IllegalArgumentException("The symbol " + name + " aready exists.");
        }

        if(terminal)
        {
            terminals.addElement(this);
            this.index = terminals.indexOf(this);
        }
        else
        {
            nonterminals.addElement(this);
            this.index = nonterminals.indexOf(this);
        }

        this.name = name;
        this.terminal = terminal;
        names.put(name, this);
        modified_ = true;
    }

    static Symbol symbol(String name)
    {
        return (Symbol) names.get(name);
    }

    static Symbol symbol(int index, boolean terminal)
    {
        if(terminal)
        {
            return (Symbol) terminals.elementAt(index);
        }
        else
        {
            return (Symbol) nonterminals.elementAt(index);
        }
    }

    private static void computeArrays()
    {
        symbols_ = new Symbol[terminals.size() + nonterminals.size()];
        terminals_ = new Symbol[terminals.size()];
        nonterminals_ = new Symbol[nonterminals.size()];

        terminals.copyInto(terminals_);
        nonterminals.copyInto(nonterminals_);
        System.arraycopy(terminals_, 0, symbols_, 0, terminals_.length);
        System.arraycopy(nonterminals_, 0, symbols_, terminals_.length, nonterminals_.length);

        modified_ = false;
    }

    static Symbol[] symbols()
    {
        if(modified_)
        {
            computeArrays();
        }

        return symbols_;
    }

    static Symbol[] terminals()
    {
        if(modified_)
        {
            computeArrays();
        }

        return terminals_;
    }

    static Symbol[] nonterminals()
    {
        if(modified_)
        {
            computeArrays();
        }

        return nonterminals_;
    }

    public String toString()
    {
        return name;
    }

    public int compareTo(Object object)
    {
        Symbol symbol = (Symbol) object;

        if(terminal ^ symbol.terminal)
        {
            if(terminal)
            {
                return 1;
            }

            return -1;
        }

        return index - symbol.index;
    }
}


