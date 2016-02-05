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

final class SymbolSet implements Cloneable
{
    private final IntSet terminals;
    private final IntSet nonterminals;
    private boolean empty;

    private boolean modified = true;
    private Symbol[] symbols;

    private void computeArray()
    {
        Vector symbols = new Vector(0);

        int[] elements = terminals.elements();
        for(int i = 0; i < elements.length; i++)
        {
            symbols.addElement(Symbol.symbol(elements[i], true));
        }

        elements = nonterminals.elements();
        for(int i = 0; i < elements.length; i++)
        {
            symbols.addElement(Symbol.symbol(elements[i], false));
        }

        this.symbols = new Symbol[symbols.size()];
        symbols.copyInto(this.symbols);

        modified = false;
    }

    SymbolSet()
    {
        this.terminals = new IntSet();
        this.nonterminals= new IntSet();
    }

    private SymbolSet(SymbolSet set)
    {
        this.terminals = (IntSet) set.terminals.clone();
        this.nonterminals = (IntSet) set.nonterminals.clone();
        this.empty = set.empty;
    }

    void setTerminal(int terminal)
    {
        terminals.set(terminal);
        modified = true;
    }

    void clearTerminal(int terminal)
    {
        terminals.clear(terminal);
        modified = true;
    }

    boolean getTerminal(int terminal)
    {
        return terminals.get(terminal);
    }

    void setNonterminal(int nonterminal)
    {
        nonterminals.set(nonterminal);
        modified = true;
    }

    void clearNonterminal(int nonterminal)
    {
        nonterminals.clear(nonterminal);
        modified = true;
    }

    boolean getNonterminal(int nonterminal)
    {
        return nonterminals.get(nonterminal);
    }

    void setEmpty()
    {
        empty = true;
        modified = true;
    }

    void clearEmpty()
    {
        empty = false;
        modified = true;
    }

    boolean getEmpty()
    {
        return empty;
    }

    void and(SymbolSet s)
    {
        terminals.and(s.terminals);
        nonterminals.and(s.nonterminals);
        empty &= s.empty;
        modified = true;
    }

    void or(SymbolSet s)
    {
        terminals.or(s.terminals);
        nonterminals.or(s.nonterminals);
        empty |= s.empty;
        modified = true;
    }

    void xor(SymbolSet s)
    {
        terminals.xor(s.terminals);
        nonterminals.xor(s.nonterminals);
        empty ^= s.empty;
        modified = true;
    }

    public int hashCode()
    {
        return terminals.hashCode() + nonterminals.hashCode() + new Boolean(empty).hashCode();
    }

    public boolean equals(Object obj)
    {
        if((obj == null) ||
            (obj.getClass() != this.getClass()))
        {
            return false;
        }

        SymbolSet s = (SymbolSet) obj;

        return terminals.equals(s.terminals) &&
            nonterminals.equals(s.nonterminals) &&
            (empty == s.empty);
    }

    Symbol[] getSymbols()
    {
        if(modified)
        {
            computeArray();
        }

        return symbols;
    }

    public String toString()
    {
        StringBuffer result = new StringBuffer();
        result.append("{");

        Symbol[] symbols = getSymbols();
        boolean comma = false;
        for(int i = 0; i < symbols.length; i++)
        {
            if(comma)
            {
                result.append(",");
            }
            else
            {
                comma = true;
            }

            result.append(symbols[i]);
        }

        if(empty)
        {
            if(comma)
            {
                result.append(",");
            }
            else
            {
                comma = true;
            }

            result.append("*empty*");
        }

        result.append("}");

        return result.toString();
    }

    public Object clone()
    {
        return new SymbolSet(this);
    }
}

