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
import ca.mcgill.sable.util.*;

public final class Grammar
{
    private Grammar()
    {
    }

    public static int addTerminal(String name)
    {
        return new Symbol(name, true).index;
    }

    public static int addNonterminal(String name)
    {
        return new Symbol(name, false).index;
    }

    public static int addProduction(String nonterminal, String name)
    {
        Symbol symbol = Symbol.symbol(nonterminal);

        if(symbol.terminal)
        {
            throw new IllegalArgumentException("The symbol " + nonterminal +
                " is a terminal.");
        }

        return new Production(symbol.index, name).index;
    }

    public static void addSymbolToProduction(String symbol, int production)
    {
        Production.production(production).addSymbol(Symbol.symbol(symbol));
    }

    static int startSymbol = 0;
    static int startProduction = -1;
    static int eof = -1;
    static int dummy = -1;

    static int[][][] action_;
    static int[][] goto_;

    public static void computeLALR()
    {
        // Add EOF to terminals
        eof = addTerminal("EOF");
        // Add dummy to terminals
        dummy = addTerminal("#");

        // Add the production S'->S
        startSymbol = addNonterminal("Start");
        Production start = new Production(startSymbol, "Start");
        start.addSymbol(Symbol.symbol(0, false));
        startProduction = start.index;

        computeFirst();

        LR0ItemSet set = new LR0ItemSet();
        set.set(new LR0Item(startProduction, 0));
        LR1Collection collection = new LR1Collection(set);

        LR0ItemSet[] sets = collection.collection.sets();
        Symbol[] terminals = Symbol.terminals();
        Symbol[] nonterminals = Symbol.nonterminals();

        action_ = new int[sets.length][terminals.length - 1][];
        goto_ = new int[sets.length][nonterminals.length - 1];

        for(int i = 0; i < sets.length; i++)
        {
            System.out.print(".");

            LR1ItemSet state = new LR1ItemSet();

            {
                LR0Item[] items = sets[i].items();
                for(int j = 0; j < items.length; j++)
                {
                    Symbol[] lookaheads = ((SymbolSet) collection.lookaheads[i].
                        get(items[j])).getSymbols();

                    for(int k = 0; k < lookaheads.length; k++)
                    {
                        state.set(new LR1Item(items[j], lookaheads[k].index));
                    }
                }
            }

            state = CLOSURE(state);

            LR1Item[] items = state.items();

            for(int j = 0; j < terminals.length; j++)
            {
                Integer destination = collection.collection.GOTO(i, terminals[j]);
                if(destination != null)
                {
                    action_[i][j] = new int[] {0, destination.intValue()};
                }

                for(int k = 0; k < items.length; k++)
                {
                    Production production = Production.
                        production(items[k].lr0Item.production);

                    try
                    {
                        production.rightside(items[k].lr0Item.position);
                    }
                    catch(Exception e)
                    {
                        if(production.leftside != startSymbol)
                        {
                            if(items[k].terminal == terminals[j].index)
                            {
                                int[] action = action_[i][j];
                                if(action != null)
                                {
                                    switch(action[0])
                                    {
                                    case 0:
                                        throw new RuntimeException(
                                            "shift/reduce conflict on " +
                                            terminals[j] + " in " + state);
                                    case 1:
                                        throw new RuntimeException(
                                            "reduce/reduce conflict on " +
                                            terminals[j] + " in " + state);
                                    case 2:
                                        throw new RuntimeException(
                                            "reduce/accept conflict on " +
                                            terminals[j] + " in " + state);
                                    }
                                }
                                else
                                {
                                    action_[i][j] = new int[] {1,
                                        items[k].lr0Item.production};
                                }
                            }
                        }
                        else
                        {
                            if(terminals[j].index == eof)
                            {
                                int[] action = action_[i][j];
                                if(action != null)
                                {
                                    switch(action[0])
                                    {
                                    case 0:
                                        throw new RuntimeException(
                                            "shift/accept conflict on " +
                                            terminals[j] + " in " + state);
                                    case 1:
                                        throw new RuntimeException(
                                            "reduce/accept conflict on " +
                                            terminals[j] + " in " + state);
                                    }
                                }
                                else
                                {
                                    action_[i][j] = new int[] {2};
                                }
                            }
                        }
                    }
                }
            }

            for(int j = 0; j < nonterminals.length - 1; j++)
            {
                Integer destination = collection.collection.GOTO(i, nonterminals[j]);

                if(destination != null)
                {
                    goto_[i][j] = destination.intValue();
                }
                else
                {
                    goto_[i][j] = -1;
                }
            }
        }

        System.out.println();
    }

    static SymbolSet[] FIRST_Terminal;
    static SymbolSet[] FIRST_Nonterminal;

    static void computeFirst()
    {
        // Get terminals, nonterminals and productions
        Symbol[] terminals = Symbol.terminals();
        Symbol[] nonterminals = Symbol.nonterminals();
        Production[] productions = Production.productions();

        // Initialize FIRST(X) to {}
        FIRST_Terminal = new SymbolSet[terminals.length];
        for(int i = 0; i < terminals.length; i++)
        {
            FIRST_Terminal[i] = new SymbolSet();
        }

        FIRST_Nonterminal = new SymbolSet[nonterminals.length];
        for(int i = 0; i < nonterminals.length; i++)
        {
            FIRST_Nonterminal[i] = new SymbolSet();
        }

        // if X is terminal, then FIRST(X) is {X}
        for(int i = 0; i < terminals.length; i++)
        {
            FIRST_Terminal[i].setTerminal(terminals[i].index);
        }

        // if X -> empty is a production, then add empty to FIRST(X)
        for(int i = 0; i < productions.length; i++)
        {
            if(productions[i].rightside().length == 0)
            {
                FIRST_Nonterminal[productions[i].leftside].
                    setEmpty();
            }
        }

        // if X is nonterminal and X -> Y(1) Y(2) ... Y(k) is a production,
        // then place t in FIRST(X) if for some i, t is in FIRST(Y(i)), and
        // empty is in all of FIRST(Y(1)), ... , FIRST(Y(i-1)).
        boolean changed;
        do
        {
            changed = false;

            for(int i = 0; i < productions.length; i++)
            {
                SymbolSet before =
                    (SymbolSet) FIRST_Nonterminal[productions[i].leftside].clone();

                FIRST_Nonterminal[productions[i].leftside].
                    or(FIRST(productions[i].rightside()));

                if(!before.equals(FIRST_Nonterminal[productions[i].leftside]))
                {
                    changed = true;
                }
            }
        }
        while(changed);
    }

    static SymbolSet FIRST(Symbol[] symbols)
    {
        return FIRST(symbols, 0, symbols.length);
    }

    static SymbolSet FIRST(Symbol[] symbols, int begin)
    {
        return FIRST(symbols, begin, symbols.length);
    }

    static SymbolSet FIRST(Symbol[] symbols, int begin, int end)
    {
        SymbolSet result = new SymbolSet();

        boolean previousContainsEmpty = true;

        for(int i = begin; i < end; i++)
        {
            if(!previousContainsEmpty)
            {
                break;
            }

            if(symbols[i].terminal)
            {
                result.or(FIRST_Terminal[symbols[i].index]);
                previousContainsEmpty = FIRST_Terminal[symbols[i].index].getEmpty();
            }
            else
            {
                result.or(FIRST_Nonterminal[symbols[i].index]);
                previousContainsEmpty = FIRST_Nonterminal[symbols[i].index].getEmpty();
            }
        }

        if(previousContainsEmpty)
        {
            result.setEmpty();
        }
        else
        {
            result.clearEmpty();
        }

        return result;
    }

    static SymbolSet[] FOLLOW;

    static void computeFollow()
    {
        // Get terminals, nonterminals and productions
        Symbol[] terminals = Symbol.terminals();
        Symbol[] nonterminals = Symbol.nonterminals();
        Production[] productions = Production.productions();

        // Initialize FOLLOW(A) to {}
        FOLLOW = new SymbolSet[nonterminals.length];
        for(int i = 0; i < nonterminals.length; i++)
        {
            FOLLOW[i] = new SymbolSet();
        }

        // Place eof in FOLLOW(S) where S is the start symbol.
        FOLLOW[startSymbol].setTerminal(eof);

        // If there is a production A->xBy, then everything in FIRST(y) except
        // for empty is placed in FOLLOW(B).
        for(int i = 0; i < productions.length; i++)
        {
            Symbol[] rightside = productions[i].rightside();

            for(int j = 0; j < rightside.length; j++)
            {
                if(!rightside[j].terminal)
                {
                    SymbolSet set = FIRST(rightside, j + 1);
                    set.clearEmpty();
                    FOLLOW[rightside[j].index].or(set);
                }
            }
        }

        // If there is a production A->xB, or a production A->xBy where FIRST(y)
        // contains empty, then everything in FOLLOW(A) is in FOLLOW(B).
        boolean changed;
        do
        {
            changed = false;

            for(int i = 0; i < productions.length; i++)
            {
                Symbol[] rightside = productions[i].rightside();

                for(int j = 0; j < rightside.length; j++)
                {
                    if(!rightside[j].terminal)
                    {
                        SymbolSet before =
                            (SymbolSet) FOLLOW[rightside[j].index].clone();

                        if(FIRST(rightside, j + 1).getEmpty())
                        {
                            FOLLOW[rightside[j].index].
                                or(FOLLOW[productions[i].leftside]);
                        }

                        if(!before.equals(FOLLOW[rightside[j].index]))
                        {
                            changed = true;
                        }
                    }
                }
            }
        }
        while(changed);
    }

    static SymbolSet FOLLOW(int nonterminal)
    {
        return FOLLOW[nonterminal];
    }

    private static final SplayTreeMap fastLr0Closure = new SplayTreeMap();

    static LR0ItemSet CLOSURE(LR0Item item)
    {
        LR0ItemSet result = (LR0ItemSet) fastLr0Closure.get(item);

        if(result != null)
        {
            return result;
        }

        result = new LR0ItemSet();
        result.set(item);

        LR0ItemSet newItems = result;
        boolean modified;
        do
        {
            modified = false;
            LR0Item[] items = newItems.items();
            newItems = new LR0ItemSet();

            for(int i = 0; i < items.length; i++)
            {
                Production production = Production.production(items[i].production);
                Symbol[] rightside = production.rightside();
                if(items[i].position < rightside.length)
                {
                    Symbol symbol = rightside[items[i].position];

                    if(!symbol.terminal)
                    {
                        Production[] alternatives =
                            Production.alternatives(symbol.index);

                        for(int j = 0; j < alternatives.length; j++)
                        {
                            LR0Item newItem = new LR0Item(alternatives[j].index, 0);

                            if(!result.get(newItem))
                            {
                                result.set(newItem);
                                newItems.set(newItem);
                                modified = true;
                            }
                        }
                    }
                }
            }
        }
        while(modified);

        fastLr0Closure.put(item, result);

        return result;
    }

//    private static final SplayTreeMap fastLr0SetClosure = new SplayTreeMap();

    static LR0ItemSet CLOSURE(LR0ItemSet set)
    {
        LR0ItemSet result = /*(LR0ItemSet) fastLr0SetClosure.get(set);

        if(result != null)
        {
            return result;
        }

        result =*/ new LR0ItemSet();

        LR0Item[] setItems = set.items();

        for(int i = 0; i < setItems.length; i++)
        {
            LR0Item[] items = CLOSURE(setItems[i]).items();

            for(int j = 0; j < items.length; j++)
            {
                result.set(items[j]);
            }
        }

//        fastLr0SetClosure.put(set, result);

        return result;
    }

    private static final SplayTreeMap fastLr1Closure = new SplayTreeMap();

    static LR1ItemSet CLOSURE(LR1Item item)
    {
        LR1ItemSet result = (LR1ItemSet) fastLr1Closure.get(item);

        if(result != null)
        {
            return result;
        }

        result = new LR1ItemSet();
        result.set(item);

        LR1ItemSet newItems = result;
        boolean modified;
        do
        {
            modified = false;
            LR1Item[] items = newItems.items();
            newItems = new LR1ItemSet();

            for(int i = 0; i < items.length; i++)
            {
                Production production = Production.production(items[i].lr0Item.production);
                Symbol[] rightside = production.rightside();
                if(items[i].lr0Item.position < rightside.length)
                {
                    Symbol symbol = rightside[items[i].lr0Item.position];

                    if(!symbol.terminal)
                    {
                        Vector tailVector = new Vector(0);

                        for(int k = items[i].lr0Item.position + 1; k < rightside.length; k++)
                        {
                            tailVector.addElement(rightside[k]);
                        }

                        tailVector.addElement(Symbol.symbol(items[i].terminal, true));

                        Symbol[] tail = new Symbol[tailVector.size()];
                        tailVector.copyInto(tail);

                        Symbol[] symbols = FIRST(tail).getSymbols();

                        Production[] alternatives =
                            Production.alternatives(symbol.index);

                        for(int k = 0; k < symbols.length; k++)
                        {
                            if(symbols[k].terminal)
                            {
                                for(int j = 0; j < alternatives.length; j++)
                                {
                                    LR1Item newItem = new LR1Item(
                                        new LR0Item(alternatives[j].index, 0),
                                        symbols[k].index);

                                    if(!result.get(newItem))
                                    {
                                        result.set(newItem);
                                        newItems.set(newItem);
                                        modified = true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        while(modified);

        fastLr1Closure.put(item, result);

        return result;
    }

//    private static final SplayTreeMap fastLr1SetClosure = new SplayTreeMap();

    static LR1ItemSet CLOSURE(LR1ItemSet set)
    {
        LR1ItemSet result = /*(LR1ItemSet) fastLr1SetClosure.get(set);

        if(result != null)
        {
            return result;
        }

        result =*/ new LR1ItemSet();

        LR1Item[] setItems = set.items();

        for(int i = 0; i < setItems.length; i++)
        {
            LR1Item[] items = CLOSURE(new LR1Item(setItems[i].lr0Item, dummy)).items();

            for(int j = 0; j < items.length; j++)
            {
                result.set(new LR1Item(items[j].lr0Item,
                    items[j].terminal == dummy ? setItems[i].terminal : items[j].terminal));
            }
        }

//        fastLr1SetClosure.put(set, result);

        return result;
    }

    static LR0ItemSet GOTO(LR0ItemSet set, Symbol symbol)
    {
        LR0ItemSet initialset = set;
        set = CLOSURE(set);
        LR0ItemSet result = new LR0ItemSet();

        // return all items A->xS.y such that A->x.Sy is in set. (S=symbol)
        LR0Item[] items = set.items();
        for(int i = 0; i < items.length; i++)
        {
            Production production = Production.production(items[i].production);
            Symbol[] rightside = production.rightside();
            if(items[i].position < rightside.length)
            {
                if(symbol.equals(rightside[items[i].position]))
                {
                    result.set(new LR0Item(items[i].production,
                        items[i].position + 1));
                }
            }
        }

        return result;
    }
}


