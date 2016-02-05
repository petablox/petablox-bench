/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * SableCC, an object-oriented compiler framework.                   *
 * Copyright (C) 1997, 1998 Etienne Gagnon (gagnon@sable.mcgill.ca). *
 * All rights reserved.                                              *
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

 - Modified on June 7, 1998 by Etienne Gagnon (gagnon@sable.mcgill.ca). (*)
   Changed the license.
*/

package ca.mcgill.sable.sablecc;

import ca.mcgill.sable.util.*;

public class NFA implements Cloneable
{
    public State[] states;

    private NFA(int size)
    {
        System.out.print(".");
        states = new State[size];
    }

    public NFA()
    {
        this(2);
        states[0] = new State();
        states[0].transitions[0] = new Transition(null, 1);
        states[1] = new State();
    }

    public NFA(CharSet chars)
    {
        this(2);
        states[0] = new State();
        states[0].transitions[0] = new Transition(chars, 1);
        states[1] = new State();
    }

    public NFA(String string)
    {
        this(string.length() + 1);

        for(int i = 0; i < string.length(); i++)
        {
            states[i] = new State();
            states[i].transitions[0] = new Transition(new CharSet(string.charAt(i)), i + 1);
        }

        states[string.length()] = new State();
    }

    private NFA(NFA nfa)
    {
        this(nfa.states.length);

        for(int i = 0; i < nfa.states.length; i++)
        {
            states[i] = new State(nfa.states[i]);
        }
    }

    public NFA zeroOrMore()
    {
        NFA nfa = new NFA(states.length + 2);
        nfa.states[0] = new State();
        nfa.states[0].transitions[0] = new Transition(null, 1);
        nfa.states[0].transitions[1] = new Transition(null, states.length + 1);

        for(int i = 0; i < states.length; i++)
        {
            nfa.states[i + 1] = new State(states[i]);

            if(nfa.states[i + 1].transitions[0] != null)
            {
                nfa.states[i + 1].transitions[0].destination += 1;
            }

            if(nfa.states[i + 1].transitions[1] != null)
            {
                nfa.states[i + 1].transitions[1].destination += 1;
            }
        }

        nfa.states[states.length].transitions[0] = new Transition(null, 1);
        nfa.states[states.length].transitions[1] = new Transition(null, states.length + 1);

        nfa.states[states.length + 1] = new State();

        return nfa;
    }

    public NFA zeroOrOne()
    {
        NFA nfa = new NFA(states.length + 2);
        nfa.states[0] = new State();
        nfa.states[0].transitions[0] = new Transition(null, 1);
        nfa.states[0].transitions[1] = new Transition(null, states.length + 1);

        for(int i = 0; i < states.length; i++)
        {
            nfa.states[i + 1] = new State(states[i]);

            if(nfa.states[i + 1].transitions[0] != null)
            {
                nfa.states[i + 1].transitions[0].destination += 1;
            }

            if(nfa.states[i + 1].transitions[1] != null)
            {
                nfa.states[i + 1].transitions[1].destination += 1;
            }
        }

        nfa.states[states.length].transitions[1] = new Transition(null, states.length + 1);

        nfa.states[states.length + 1] = new State();

        return nfa;
    }

    public NFA oneOrMore()
    {
        NFA nfa = new NFA(states.length + 2);
        nfa.states[0] = new State();
        nfa.states[0].transitions[0] = new Transition(null, 1);

        for(int i = 0; i < states.length; i++)
        {
            nfa.states[i + 1] = new State(states[i]);

            if(nfa.states[i + 1].transitions[0] != null)
            {
                nfa.states[i + 1].transitions[0].destination += 1;
            }

            if(nfa.states[i + 1].transitions[1] != null)
            {
                nfa.states[i + 1].transitions[1].destination += 1;
            }
        }

        nfa.states[states.length].transitions[0] = new Transition(null, 1);
        nfa.states[states.length].transitions[1] = new Transition(null, states.length + 1);

        nfa.states[states.length + 1] = new State();

        return nfa;
    }

    public NFA concatenate(NFA next)
    {
        NFA nfa = new NFA(states.length + next.states.length - 1);

        for(int i = 0; i < states.length - 1; i++)
        {
            nfa.states[i] = new State(states[i]);
        }

        for(int i = 0; i < next.states.length; i++)
        {
            nfa.states[states.length + i - 1] = new State(next.states[i]);

            if(nfa.states[states.length + i - 1].transitions[0] != null)
            {
                nfa.states[states.length + i - 1].transitions[0].destination +=
                    states.length - 1;
            }

            if(nfa.states[states.length + i - 1].transitions[1] != null)
            {
                nfa.states[states.length + i - 1].transitions[1].destination +=
                    states.length - 1;
            }
        }

        return nfa;
    }

    public NFA alternate(NFA next)
    {
        NFA nfa = new NFA(states.length + next.states.length + 2);

        nfa.states[0] = new State();
        nfa.states[0].transitions[0] = new Transition(null, 1);
        nfa.states[0].transitions[1] = new Transition(null, states.length + 1);

        for(int i = 0; i < states.length; i++)
        {
            nfa.states[i + 1] = new State(states[i]);

            if(nfa.states[i + 1].transitions[0] != null)
            {
                nfa.states[i + 1].transitions[0].destination += 1;
            }

            if(nfa.states[i + 1].transitions[1] != null)
            {
                nfa.states[i + 1].transitions[1].destination += 1;
            }
        }

        nfa.states[states.length].transitions[0] =
            new Transition(null, states.length + next.states.length + 1);

        for(int i = 0; i < next.states.length; i++)
        {
            nfa.states[states.length + i + 1] = new State(next.states[i]);

            if(nfa.states[states.length + i + 1].transitions[0] != null)
            {
                nfa.states[states.length + i + 1].transitions[0].destination +=
                    states.length + 1;
            }

            if(nfa.states[states.length + i + 1].transitions[1] != null)
            {
                nfa.states[states.length + i + 1].transitions[1].destination +=
                    states.length + 1;
            }
        }

        nfa.states[states.length + next.states.length].transitions[0] =
            new Transition(null, states.length + next.states.length + 1);

        nfa.states[states.length + next.states.length + 1] = new State();

        return nfa;
    }

    public NFA merge(NFA next)
    {
        NFA nfa = new NFA(states.length + next.states.length + 1);

        nfa.states[0] = new State();
        nfa.states[0].transitions[0] = new Transition(null, 1);
        nfa.states[0].transitions[1] = new Transition(null, states.length + 1);

        for(int i = 0; i < states.length; i++)
        {
            nfa.states[i + 1] = new State(states[i]);

            if(nfa.states[i + 1].transitions[0] != null)
            {
                nfa.states[i + 1].transitions[0].destination += 1;
            }

            if(nfa.states[i + 1].transitions[1] != null)
            {
                nfa.states[i + 1].transitions[1].destination += 1;
            }
        }

        for(int i = 0; i < next.states.length; i++)
        {
            nfa.states[states.length + i + 1] = new State(next.states[i]);

            if(nfa.states[states.length + i + 1].transitions[0] != null)
            {
                nfa.states[states.length + i + 1].transitions[0].destination +=
                    states.length + 1;
            }

            if(nfa.states[states.length + i + 1].transitions[1] != null)
            {
                nfa.states[states.length + i + 1].transitions[1].destination +=
                    states.length + 1;
            }
        }

        return nfa;
    }

    public Object clone()
    {
        return new NFA(this);
    }

    public String toString()
    {
        StringBuffer result = new StringBuffer();
        for(int i = 0; i < states.length; i++)
        {
            result.append(i + ":" + states[i] + System.getProperty("line.separator"));
        }
        return result.toString();
    }

    public static class State
    {
        public String accept;

        public Transition[] transitions = new Transition[2];

        public State()
        {
        }

        public State(State state)
        {
            if(state.accept != null)
            {
                accept = state.accept;
            }

            if(state.transitions[0] != null)
            {
                transitions[0] = new Transition(state.transitions[0]);
            }

            if(state.transitions[1] != null)
            {
                transitions[1] = new Transition(state.transitions[1]);
            }
        }

        public String toString()
        {
            StringBuffer result = new StringBuffer();
            if(accept != null)
            {
                result.append("(" + accept + ") ");
            }
            if(transitions[0] != null)
            {
                result.append(" " + transitions[0]);
            }
            if(transitions[1] != null)
            {
                result.append(" " + transitions[1]);
            }
            return result.toString();
        }
    }

    public static class Transition
    {
        public CharSet chars;
        public int destination;

        public Transition(CharSet chars, int destination)
        {
            this.chars = chars;
            this.destination = destination;
        }

        public Transition(Transition transition)
        {
            chars = transition.chars;
            destination = transition.destination;
        }

        public String toString()
        {
            return destination + ":{" + chars + "}";
        }
    }
}

