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
import java.util.Hashtable;

public class DFA
{
    public DFA(NFA nfa)
    {
        this.nfa = nfa;
        construct();
        optimize();
    }

    public NFA nfa;
    public final Vector states = new Vector(0);
    public final Hashtable finder = new Hashtable(1);

    private void optimize()
    {
        Vector transitions = new Vector(0);

        for(int i = 0; i < states.size(); i++)
        {
            DFA.State state = (DFA.State) states.elementAt(i);
            transitions.addElement(new Vector(0));

            for(int j = 0; j < state.transitions.size(); j++)
            {
                int max = 0;
                int st = -1;

                for(int k = 0; k < i; k++)
                {
                    int match = match(i,j,k);

                    if(match > max)
                    {
                        max = match;
                        st = k;
                    }
                }

                if(max < 2)
                {
                    ((Vector) transitions.elementAt(i)).addElement(
                        state.transitions.elementAt(j));
                }
                else
                {
                    DFA.Transition transition1 =
                        (DFA.Transition) state.transitions.elementAt(j);
                    DFA.Transition transition2 =
                        (DFA.Transition) state.transitions.elementAt(j + max - 1);

                    DFA.Transition transition =
                        new DFA.Transition(
                        new CharSet.Interval(
                        transition1.interval().start,
                        transition2.interval().end),
                        -2 - st);

                    ((Vector) transitions.elementAt(i)).addElement(transition);
                    j += max - 1;
                }
            }
        }

        for(int i = 0; i < states.size(); i++)
        {
            DFA.State state = (DFA.State) states.elementAt(i);
            state.transitions = (Vector) transitions.elementAt(i);
        }
    }

    private int match(int st1, int tr, int st2)
    {
        DFA.State state1 = (DFA.State) states.elementAt(st1);
        DFA.State state2 = (DFA.State) states.elementAt(st2);

        DFA.Transition first =
            (DFA.Transition) state1.transitions.elementAt(tr);

        int j = -1;

        for(int i = 0; i < state2.transitions.size(); i++)
        {
            DFA.Transition transition =
                (DFA.Transition) state2.transitions.elementAt(i);

            if(transition.match(first))
            {
                j = i;
                break;
            }
        }

        if(j == -1)
        {
            return 0;
        }

        int max = 0;
        int i = tr;

        while((i < state1.transitions.size()) &&
            (j < state2.transitions.size()))
        {
            DFA.Transition transition1 =
                (DFA.Transition) state1.transitions.elementAt(i);

            DFA.Transition transition2 =
                (DFA.Transition) state2.transitions.elementAt(j);

            if(!transition1.match(transition2))
            {
                return max;
            }

            max++;
            i++;
            j++;
        }

        return max;
    }

    private void construct()
    {
        computeEClosures();

        IntSet initial = new IntSet();
        initial.or(eclosure(0));

        State state = new State(initial);
        states.addElement(state);
        finder.put(state.nfaStates, new Integer(0));

        int i = -1;
        while(++i < states.size())
        {
            System.out.print(".");

            state = (State) states.elementAt(i);

            CharSet.Interval interval = new CharSet.Interval((char) 0, (char) 0xffff);

            do
            {
                IntSet destination = new IntSet();
                interval.end = (char) 0xffff;
                boolean modified = false;

                int[] elements = state.nfaStates.elements();

                for(int k = 0; k < elements.length; k++)
                {
                    int j = elements[k];

                    if((nfa.states[j].transitions[0] != null) &&
                        (nfa.states[j].transitions[0].chars != null))
                    {
                        CharSet.Interval overlap =
                            nfa.states[j].transitions[0].chars.findOverlap(interval);

                        if(overlap != null)
                        {
                            if(overlap.start > interval.start)
                            {
                                interval.end = (char) (overlap.start - 1);
                            }
                            else
                            {
                                destination.set(nfa.states[j].transitions[0].destination);
                                modified = true;

                                if(overlap.end < interval.end)
                                {
                                    interval.end = overlap.end;
                                }
                            }
                        }
                    }

                    if((nfa.states[j].transitions[1] != null) &&
                        (nfa.states[j].transitions[1].chars != null))
                    {
                        CharSet.Interval overlap =
                            nfa.states[j].transitions[1].chars.findOverlap(interval);

                        if(overlap != null)
                        {
                            if(overlap.start > interval.start)
                            {
                                interval.end = (char) (overlap.start - 1);
                            }
                            else
                            {
                                destination.set(nfa.states[j].transitions[1].destination);

                                if(overlap.end < interval.end)
                                {
                                    interval.end = overlap.end;
                                }
                            }
                        }
                    }
                }

                if(modified)
                {
                    destination = eclosure(destination);
                    Integer dest = (Integer) finder.get(destination);

                    if(dest != null)
                    {
                        state.transitions.addElement(
                            new Transition((CharSet.Interval) interval.clone(), dest.intValue()));
                    }
                    else
                    {
                        State s = new State(destination);
                        states.addElement(s);
                        finder.put(s.nfaStates, new Integer(states.size() - 1));

                        state.transitions.addElement(
                            new Transition((CharSet.Interval) interval.clone(), states.size() - 1));
                    }
                }

                interval.start = (char) (interval.end + 1);
            }
            while(interval.end != (char) 0xffff);

//            System.out.println(state);
        }

//        System.out.println(this);
    }

    private IntSet[] eclosures;

    private void computeEClosures()
    {
        eclosures = new IntSet[nfa.states.length];

        for(int i = 0; i < nfa.states.length; i++)
        {
            System.out.print(".");

            IntSet set = new IntSet();
            eclosure(i, set);
            eclosures[i] = set;
        }

        System.out.println();
    }

    private IntSet eclosure(int state)
    {
        return eclosures[state];
    }

    private void eclosure(int state, IntSet nfaStates)
    {
        if(eclosures[state] != null)
        {
            nfaStates.or(eclosures[state]);
            return;
        }

        nfaStates.set(state);

        if((nfa.states[state].transitions[0] != null) &&
            (nfa.states[state].transitions[0].chars == null) &&
            (!nfaStates.get(nfa.states[state].transitions[0].destination)))

        {
            eclosure(nfa.states[state].transitions[0].destination, nfaStates);
        }

        if((nfa.states[state].transitions[1] != null) &&
            (nfa.states[state].transitions[1].chars == null) &&
            (!nfaStates.get(nfa.states[state].transitions[1].destination)))

        {
            eclosure(nfa.states[state].transitions[1].destination, nfaStates);
        }
    }

    private IntSet eclosure(IntSet nfaStates)
    {
        IntSet result = new IntSet();

        int[] elements = nfaStates.elements();

        for(int j = 0; j < elements.length; j++)
        {
            int i = elements[j];

            result.or(eclosure(i));
        }

        return result;
    }

    public String toString()
    {
        StringBuffer result = new StringBuffer();

        for(int i = 0; i < states.size(); i++)
        {
            result.append(i + ": " + states.elementAt(i) +
                System.getProperty("line.separator"));
        }

        return result.toString();
    }

    public static class State
    {
        public State(IntSet nfaStates)
        {
            this.nfaStates = nfaStates;
        }

        public IntSet nfaStates = new IntSet();
        public Vector transitions = new Vector(0);
        public int[] accept;

        public String toString()
        {
            StringBuffer result = new StringBuffer();

/*            for(int i = 0; i < nfaStates.size(); i++)
            {
                if(nfaStates.get(i))
                {
                    if(nfa.states[i].accept != null)
                    {
                        result.append("(" + nfa.states[i].accept + ")");
                    }
                }
            }*/

            for(int i = 0; i < transitions.size(); i++)
            {
                result.append(transitions.elementAt(i) + ",");
            }

            return result /*+ " " + nfaStates*/ + "";
        }
    }

    public static class Transition
    {
        private char start;
        private char end;

        public int destination;

        public Transition(CharSet.Interval interval, int destination)
        {
            this.start = interval.start;
            this.end = interval.end;
            this.destination = destination;
        }

        public CharSet.Interval interval()
        {
            return new CharSet.Interval(start, end);
        }

        public Transition(Transition transition)
        {
            start = transition.start;
            end = transition.end;
            destination = transition.destination;
        }

        public String toString()
        {
            return destination + ":[" + interval() + "]";
        }

        public boolean match(Transition transition)
        {
            return (start == transition.start) &&
                (end == transition.end) &&
                (destination == transition.destination);
        }
    }
}


