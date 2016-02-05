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
import ca.mcgill.sable.sablecc.analysis.*;
import ca.mcgill.sable.sablecc.node.*;
import java.io.*;
import java.util.Vector;
import java.util.Enumeration;

public class GenLexer extends AnalysisAdapter
{
    private MacroExpander macros;
    private ResolveIds ids;
    private File pkgDir;
    private String pkgName;
    private AcceptStates acceptStates;

    public GenLexer(ResolveIds ids)
    {
        this.ids = ids;

        try
        {
            macros = new MacroExpander(
                new InputStreamReader(
                getClass().getResourceAsStream("lexer.txt")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("unable to open lexer.txt.");
        }

        pkgDir = new File(ids.pkgDir, "lexer");
        pkgName = ids.pkgName.equals("") ? "lexer" : ids.pkgName + ".lexer";

        if(!pkgDir.exists())
        {
            if(!pkgDir.mkdir())
            {
                throw new RuntimeException("Unable to create " + pkgDir.getAbsolutePath());
            }
        }
    }

    public void caseStart1(Start1 tree)
    {
        System.out.println(" - Constructing NFA.");
        ConstructNFA nfaConstructor = new ConstructNFA(ids);
        tree.apply(nfaConstructor);
        System.out.println();

        NFA nfa = (NFA) nfaConstructor.getOut(tree);
        nfaConstructor = null;

        System.out.println(" - Constructing DFA.");
        DFA dfa = new DFA(nfa);
        System.out.println();

        System.out.println(" - resolving ACCEPT states.");
        acceptStates = new AcceptStates(dfa, ids);
        tree.apply(acceptStates);

        createLexerException();
        createLexer(dfa);
    }

    private void createLexerException()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "LexerException.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "LexerException.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "LexerException", new String[] {pkgName});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "LexerException.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    private void createLexer(DFA dfa)
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "Lexer.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "Lexer.java").getAbsolutePath());
        }

        try
        {
            String startState = "INITIAL";
            if(ids.stateList.size() > 0)
            {
                startState = (String) ids.stateList.getFirst();
            }

            macros.apply(file, "LexerHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "node" : ids.pkgName + ".node",
                startState});

            for(ListIterator i = ids.tokenList.listIterator(); i.hasNext();)
            {
                String name = (String) i.next();
                Node node = (Node) ids.tokens.get(name);
                boolean fixed = ((Boolean) ids.fixedTokens.get(node)).booleanValue();

                if(fixed)
                {
                    macros.apply(file, "LexerFixedToken",
                        new String[] {"" + i.previousIndex(), name});
                }
                else
                {
                    macros.apply(file, "LexerVariableToken",
                        new String[] {"" + i.previousIndex(), name});
                }

                Map map = (Map) acceptStates.tokenStates.get(node);
                if(map.size() > 0)
                {
                    macros.apply(file, "TokenSwitchHeader", null);

                    for(Iterator j = map.entries().iterator(); j.hasNext();)
                    {
                        Map.Entry entry = (Map.Entry) j.next();

                        macros.apply(file, "TokenCase",
                            new String[] {ids.stateList.indexOf((String) entry.getKey()) + "",
                            (String) entry.getValue()});
                    }

                    macros.apply(file, "TokenSwitchTail", null);
                }

                macros.apply(file, "LexerTokenTail", null);
            }

            macros.apply(file, "LexerBody1");

            for(ListIterator i = ids.tokenList.listIterator(); i.hasNext();)
            {
                String name = (String) i.next();
                Node node = (Node) ids.tokens.get(name);
                boolean fixed = ((Boolean) ids.fixedTokens.get(node)).booleanValue();

                if(fixed)
                {
                    macros.apply(file, "LexerNewFixedToken",
                        new String[] {"" + i.previousIndex(), name});
                }
                else
                {
                    macros.apply(file, "LexerNewVariableToken",
                        new String[] {"" + i.previousIndex(), name});
                }
            }

            macros.apply(file, "LexerBody2");

            DataOutputStream out = new DataOutputStream(
                new BufferedOutputStream(
                new FileOutputStream(
                new File(pkgDir, "lexer.dat"))));

            Vector outerArray = new Vector();

            for(int i = 0; i < dfa.states.size(); i++)
            {
                Vector innerArray = new Vector();

                DFA.State state = (DFA.State) dfa.states.elementAt(i);
                file.write("\t\t{");

                for(int j = 0; j < state.transitions.size(); j++)
                {
                    DFA.Transition transition =
                        (DFA.Transition) state.transitions.elementAt(j);

                    file.write("{" + ((int) transition.interval().start) + ", " +
                        ((int) transition.interval().end) + ", " +
                        transition.destination + "}, ");

                    innerArray.addElement(new int[] {
                        ((int) transition.interval().start),
                        ((int) transition.interval().end),
                        transition.destination});
                }

                file.write("}," + System.getProperty("line.separator"));

                outerArray.addElement(innerArray);
            }

            out.writeInt(outerArray.size());
            for(Enumeration e = outerArray.elements(); e.hasMoreElements();)
            {
                Vector innerArray = (Vector) e.nextElement();
                out.writeInt(innerArray.size());
                for(Enumeration n = innerArray.elements(); n.hasMoreElements();)
                {
                    int[] array = (int[]) n.nextElement();

                    for(int i = 0; i < 3; i++)
                    {
                        out.writeInt(array[i]);
                    }
                }
            }

            macros.apply(file, "LexerAcceptHeader");

            final int stateNumber = Math.max(1, ids.stateList.size()) +
                acceptStates.lookaheads.size();

            outerArray = new Vector();

            for(int i = 0; i < stateNumber; i++)
            {
                Vector innerArray = new Vector();

                file.write("\t\t{");

                for(int j = 0; j < dfa.states.size(); j++)
                {
                    DFA.State state = (DFA.State) dfa.states.elementAt(j);

                    file.write(state.accept[i] + ", ");
                    innerArray.addElement(new Integer(state.accept[i]));
                }

                file.write("}," + System.getProperty("line.separator"));

                outerArray.addElement(innerArray);
            }

            out.writeInt(outerArray.size());
            for(Enumeration e = outerArray.elements(); e.hasMoreElements();)
            {
                Vector innerArray = (Vector) e.nextElement();
                out.writeInt(innerArray.size());
                for(Enumeration n = innerArray.elements(); n.hasMoreElements();)
                {
                    Integer i = (Integer) n.nextElement();
                    out.writeInt(i.intValue());
                }
            }
            out.close();

            file.write(System.getProperty("line.separator"));

            macros.apply(file, "LexerAcceptTail");

            macros.apply(file, "LexerStateHeader");

            if(ids.stateList.size() > 0)
            {
                for(ListIterator i = ids.stateList.listIterator(); i.hasNext();)
                {
                    String s = (String) i.next();

                    macros.apply(file, "LexerStateBody",
                        new String[] {s, "" + i.previousIndex()});
                }
            }
            else
            {
                macros.apply(file, "LexerStateBody",
                    new String[] {"INITIAL", "" + 0});
            }

            for(ListIterator i = acceptStates.lookaheads.listIterator(); i.hasNext();)
            {
                String s = (String) i.next();

                macros.apply(file, "LexerStateBody",
                    new String[] {s, "" + (i.previousIndex() + stateNumber - acceptStates.lookaheads.size())});
            }

            macros.apply(file, "LexerStateTail");

            macros.apply(file, "LexerTail");
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "Lexer.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }
}

