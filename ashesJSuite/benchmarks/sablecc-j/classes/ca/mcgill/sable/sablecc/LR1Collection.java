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

import java.util.Vector;
import java.util.Enumeration;
import ca.mcgill.sable.util.*;

final class LR1Collection
{
    final LR0Collection collection;
    final SplayTreeMap[] lookaheads;
    private final SplayTreeMap[] propagation;

    LR1Collection(LR0ItemSet set)
    {
        collection = new LR0Collection(set);

        // Initialize lookaheads to nothing, propagation to nothing
        LR0ItemSet[] sets = collection.sets();
        lookaheads = new SplayTreeMap[sets.length];
        propagation = new SplayTreeMap[sets.length];

        for(int i = 0; i < sets.length; i++)
        {
            System.out.print(".");
            lookaheads[i] = new SplayTreeMap();
            propagation[i] = new SplayTreeMap();

            LR0Item[] items = sets[i].items();
            for(int j = 0; j < items.length; j++)
            {
                lookaheads[i].put(items[j], new SymbolSet());
                propagation[i].put(items[j], new Vector(0));
            }
        }
        System.out.println();


        ((SymbolSet) lookaheads[0].get(set.items()[0])).setTerminal(Grammar.eof);

        for(int i = 0; i < sets.length; i++)
        {
            System.out.print(".");
            LR0Item[] items = sets[i].items();

            for(int j = 0; j < items.length; j++)
            {
                LR1ItemSet lr1Set = new LR1ItemSet();
                lr1Set.set(new LR1Item(items[j], Grammar.dummy));

                LR1Item[] closure = Grammar.CLOSURE(lr1Set).items();

                for(int k = 0; k < closure.length; k++)
                {
                    if(closure[k].terminal != Grammar.dummy)
                    {
                        Symbol[] rightside = Production.
                            production(closure[k].lr0Item.production).
                            rightside();

                        if(closure[k].lr0Item.position < rightside.length)
                        {
                            Integer destination = collection.GOTO(i,
                                rightside[closure[k].lr0Item.position]);

                            if(destination != null)
                            {

                                ((SymbolSet) lookaheads[destination.intValue()].
                                get(new LR0Item(closure[k].lr0Item.production,
                                closure[k].lr0Item.position + 1))).
                                setTerminal(closure[k].terminal);

                                /*((SymbolSet) lookaheads[collection.GOTO(i,
                                Production.production(closure[k].lr0Item.production).
                                rightside(closure[k].lr0Item.position)).intValue()].
                                get(new LR0Item(closure[k].lr0Item.production,
                                closure[k].lr0Item.position + 1))).
                                setTerminal(closure[k].terminal);*/
                            }
                        }
                    }
                    else
                    {
                        Symbol[] rightside = Production.
                            production(closure[k].lr0Item.production).
                            rightside();

                        if(closure[k].lr0Item.position < rightside.length)
                        {
                            Integer destination = collection.GOTO(i,
                                rightside[closure[k].lr0Item.position]);

                            if(destination != null)
                            {
                                ((Vector) propagation[i].get(items[j])).
                                addElement(new LR0ItemAndSetPair(
                                new LR0Item(closure[k].lr0Item.production,
                                closure[k].lr0Item.position + 1),
                                destination.intValue()));

                            /*((Vector) propagation[i].get(items[j])).
                                addElement(new LR0ItemAndSetPair(
                                new LR0Item(closure[k].lr0Item.production,
                                closure[k].lr0Item.position + 1),
                                collection.GOTO(i,
                                Production.production(closure[k].lr0Item.production).
                                rightside(closure[k].lr0Item.position)).intValue()));*/
                            }
                        }
                    }
                }
            }
        }
        System.out.println();

        boolean changed;
        do
        {
            System.out.print(".");
            changed = false;
            for(int i = 0; i < sets.length; i++)
            {
                LR0Item[] items = sets[i].items();

                for(int j = 0; j < items.length; j++)
                {
                    for(Enumeration e = ((Vector) propagation[i].get(items[j])).
                        elements(); e.hasMoreElements();)
                    {
                        LR0ItemAndSetPair pair = (LR0ItemAndSetPair) e.nextElement();

                        SymbolSet before = (SymbolSet)
                            ((SymbolSet) lookaheads[pair.set].get(pair.item)).clone();

                        ((SymbolSet) lookaheads[pair.set].get(pair.item)).
                            or((SymbolSet) lookaheads[i].get(items[j]));

                        if(!before.equals(lookaheads[pair.set].get(pair.item)))
                        {
                            changed = true;
                        }
                    }
                }
            }
        }
        while(changed);
        System.out.println();
    }

    public String toString()
    {
        StringBuffer result = new StringBuffer();

        result.append(collection);
        result.append(System.getProperty("line.separator"));

        result.append("Lookaheads" + System.getProperty("line.separator"));
        LR0ItemSet[] sets = collection.sets();

        for(int i = 0; i < sets.length; i++)
        {
            result.append(i + ":" + System.getProperty("line.separator"));
            LR0Item[] items = sets[i].items();

            for(int j = 0; j < items.length; j++)
            {
                result.append(items[j] + ":" + lookaheads[i].get(items[j]) +
                    System.getProperty("line.separator"));
            }
        }

        return result.toString();
    }
}

