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

import ca.mcgill.sable.sablecc.analysis.*;
import ca.mcgill.sable.sablecc.node.*;
import ca.mcgill.sable.util.*;

public class AcceptStates extends DepthFirstAdapter
{
    public final Map tokenStates = new TypedSplayTreeMap(
        NodeComparator.instance,
        NodeCast.instance,
        NoCast.instance);

    public final List lookaheads = new LinkedList();

    private DFA dfa;
    private ResolveIds ids;
    private String state;
    private String transition;
    private Map map;

    public AcceptStates(DFA dfa, ResolveIds ids)
    {
        this.dfa = dfa;
        this.ids = ids;
    }

    public void inTokenDef1(TokenDef1 node)
    {
        map = new TypedSplayTreeMap(
            StringComparator.instance,
            StringCast.instance,
            StringCast.instance);

        if(node.getNode5() instanceof LookAheadOpt1)
        {
            lookaheads.add(ids.names.get(node) + "_Token");
            lookaheads.add(ids.names.get(node) + "_LookAhead");
        }
    }

    public void caseStateList1(StateList1 node)
    {
        inStateList1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);

        outStateList1(node);  // We moved this...

        node.getNode4().apply(this);
        node.getNode5().apply(this);

    }

    public void inStateList1(StateList1 node)
    {
        state = transition = node.getNode2().getText().toUpperCase();
    }

    public void inStateListTail1(StateListTail1 node)
    {
        state = transition = node.getNode2().getText().toUpperCase();
    }

    public void outTransition1(Transition1 node)
    {
        transition = node.getNode2().getText().toUpperCase();
    }

    public void outStateList1(StateList1 node)
    {
        map.put(state, transition);
    }

    public void outStateListTail1(StateListTail1 node)
    {
        map.put(state, transition);
    }

    public void outTokenDef1(TokenDef1 node)
    {
        tokenStates.put(node, map);
    }

    public void outStart1(Start1 node)
    {
        int stateNumber = Math.max(1, ids.stateList.size());

        for(int i = 0; i < dfa.states.size(); i++)
        {
            DFA.State state = (DFA.State) dfa.states.elementAt(i);
            state.accept = new int[stateNumber + lookaheads.size()];

            for(int j = stateNumber; j < state.accept.length; j++)
            {
                state.accept[j] = -1;
            }

            for(int j = 0; j < stateNumber; j++)
            {
                String stateName;
                Iterator it = ids.stateList.listIterator(j);

                if(it.hasNext())
                {
                    stateName = (String) it.next();
                }
                else
                {
                    stateName = "";
                }

                int accept = -1;

                for(int k = 0; k < state.nfaStates.size(); k++)
                {
                    if(state.nfaStates.get(k))
                    {
                        if(dfa.nfa.states[k].accept != null)
                        {
                            if(dfa.nfa.states[k].accept.endsWith("_Token") ||
                                dfa.nfa.states[k].accept.endsWith("_LookAhead"))
                            {
                                state.accept[stateNumber +
                                    lookaheads.indexOf(dfa.nfa.states[k].accept)] = 0;
                            }
                            else
                            {
                                Node token = (Node) ids.tokens.get(dfa.nfa.states[k].accept);
                                Map map = (Map) tokenStates.get(token);
                                if((map.size() == 0) ||
                                    (map.containsKey(stateName)))
                                {
                                    if(accept == -1)
                                    {
                                        accept = ids.tokenList.indexOf(dfa.nfa.states[k].accept);
                                    }
                                    else
                                    {
                                        accept = Math.min(
                                            ids.tokenList.indexOf(dfa.nfa.states[k].accept),
                                            accept);
                                    }
                                }
                            }
                        }
                    }
                }

                state.accept[j] = accept;
            }
        }
    }
}


