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
import ca.mcgill.sable.sablecc.Grammar;
import java.util.Vector;
import java.util.Enumeration;

public class GenParser extends DepthFirstAdapter
{
    private MacroExpander macros;
    private ResolveIds ids;
    private File pkgDir;
    private String pkgName;
    private String currentProd;
    private int currentAlt;
    private boolean hasProductions;

    static final int NONE = 0;
    static final int STAR = 1;
    static final int QMARK = 2;
    static final int PLUS = 3;
    int count;
    int elem;
    Map alts = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);

    public GenParser(ResolveIds ids)
    {
        this.ids = ids;

        try
        {
            macros = new MacroExpander(
                new InputStreamReader(
                getClass().getResourceAsStream("parser.txt")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("unable to open parser.txt.");
        }

        pkgDir = new File(ids.pkgDir, "parser");
        pkgName = ids.pkgName.equals("") ? "parser" : ids.pkgName + ".parser";

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
        tree.apply(new DepthFirstAdapter()
        {
            private boolean hasAlternative;

            public void caseTokenDef1(TokenDef1 node)
            {
                String name = (String) ids.names.get(node);

                if(!ids.ignTokens.containsKey(name))
                {
                    Grammar.addTerminal(name);
                }
            }

            public void inProd1(Prod1 node)
            {
                hasAlternative = false;
            }

            public void inAlt1(Alt1 node)
            {
                hasAlternative = true;
            }

            public void outProd1(Prod1 node)
            {
                if(hasAlternative)
                {
                    Grammar.addNonterminal((String) ids.names.get(node));
                }
            }
        });

        tree.getNode1().apply(this);

        if(!hasProductions)
        {
            return;
        }

        Grammar.computeLALR();

        createParser();
        createParserException();
        createState();
        createTokenIndex();
    }

    public void inProd1(Prod1 node)
    {
        hasProductions = true;
        currentProd = (String) ids.names.get(node);
    }

    public void caseAlt1(Alt1 node)
    {
        count = 1;

        node.apply(new DepthFirstAdapter()
        {
            public void inElem1(Elem1 node)
            {
                GenParser.this.setOut(node, new Integer(NONE));
            }

            public void caseUnOp1(UnOp1 node)
            {
                count *= 2;

                GenParser.this.setOut(node.getParent().getParent(), new Integer(STAR));
            }

            public void caseUnOp2(UnOp2 node)
            {
                count *= 2;

                GenParser.this.setOut(node.getParent().getParent(), new Integer(QMARK));
            }

            public void caseUnOp3(UnOp3 node)
            {
                GenParser.this.setOut(node.getParent().getParent(), new Integer(PLUS));
            }
        });

        if(count == 1)
        {
            alts.put(ids.names.get(node), node);

            currentAlt = Grammar.addProduction(currentProd, (String) ids.names.get(node));
            node.getNode2().apply(this);
        }
        else
        {
            int max = count;

            for(count = 0; count < max; count++)
            {
                elem = 0;

                alts.put(
                    "X" + (count + 1) + (String) ids.names.get(node),
                    node);

                currentAlt = Grammar.addProduction(currentProd,
                    "X" + (count + 1) + (String) ids.names.get(node));

                node.getNode2().apply(this);
            }
        }
    }

    public void caseElem1(Elem1 node)
    {
        int op = ((Integer) getOut(node)).intValue();
        String name = (String) ids.elemTypes.get(node);

        switch(op)
        {
        case NONE:
            {
                Grammar.addSymbolToProduction(name, currentAlt);
            }
            break;
        case STAR:
            {
//                System.out.println("Star:" + count + ", " + (1 << elem));

                if((count & (1 << elem)) != 0)
                {
//                    System.out.println("yes");

                    try
                    {
                        Grammar.addNonterminal("X" + name);

                        int alt = Grammar.addProduction("X" + name, "X1" + name);

                        Grammar.addSymbolToProduction("X" + name, alt);
                        Grammar.addSymbolToProduction(name, alt);

                        alt = Grammar.addProduction("X" + name, "X2" + name);

                        Grammar.addSymbolToProduction(name, alt);
                    }
                    catch(Exception e)
                    {
                    }

                    Grammar.addSymbolToProduction("X" + name, currentAlt);
                }

                elem++;
            }
            break;
        case QMARK:
            {
                if((count & (1 << elem)) != 0)
                {
                    Grammar.addSymbolToProduction(name, currentAlt);
                }

                elem++;
            }
            break;
        case PLUS:
            {
                try
                {
                    Grammar.addNonterminal("X" + name);

                    int alt = Grammar.addProduction("X" + name, "X1" + name);

                    Grammar.addSymbolToProduction("X" + name, alt);
                    Grammar.addSymbolToProduction(name, alt);

                    alt = Grammar.addProduction("X" + name, "X2" + name);

                    Grammar.addSymbolToProduction(name, alt);
                }
                catch(Exception e)
                {
                }

                Grammar.addSymbolToProduction("X" + name, currentAlt);
            }
            break;
        }
    }

    public void caseAlt2(Alt2 node)
    {
    }

    private void createParser()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "Parser.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "Parser.java").getAbsolutePath());
        }

        try
        {
            Symbol[] terminals = Symbol.terminals();
            Symbol[] nonterminals = Symbol.nonterminals();
            Production[] productions = Production.productions();

            macros.apply(file, "ParserHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "lexer" : ids.pkgName + ".lexer",
                ids.pkgName.equals("") ? "node" : ids.pkgName + ".node",
                ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis"});

            for(int i = 0; i < (productions.length - 1); i++)
            {
                Node node = (Node) alts.get(productions[i].name);

                if(node == null)
                {
                    macros.apply(file, "ParserReduceNoFilter", new String[] {
                        "" + productions[i].index,
                        "" + productions[i].leftside});
                }
                else
                {
                    macros.apply(file, "ParserReduceFilter", new String[] {
                        "" + productions[i].index,
                        "" + productions[i].leftside});
                }
            }

            {
                Symbol[] rightside = productions[productions.length - 1].rightside();
                macros.apply(file, "ParserParseTail", new String[] {rightside[0].name});
            }

            for(int i = 0; i < (productions.length - 1); i++)
            {
                macros.apply(file, "ParserNewHeader",
                    new String[] {"" + productions[i].index});

                Node node = (Node) alts.get(productions[i].name);

                if(node == null)
                {
                    Symbol[] rightside = productions[i].rightside();
                    for(int k = rightside.length - 1; k >= 0; k--)
                    {
                        macros.apply(file, "ParserNewBodyDecl",
                            new String[] {rightside[k].name, "" + (k + 1)});
                    }

                    macros.apply(file, "ParserNewBodyNew",
                        new String[] {productions[i].name});

                    for(int k = 0; k < rightside.length; k++)
                    {
                        macros.apply(file, "ParserNewBodyParams",
                            new String[] {(k == 0) ? "" : ", ",
                            (k + 1) + ""});
                    }

                    macros.apply(file, "ParserNewTail", new String[] { "" + productions[i].leftside});
                }
                else
                {
                    count = count(productions[i].name) - 1;
                    elem = 0;
                    final BufferedWriter finalFile = file;
                    final LinkedList stack = new LinkedList();

                    node.apply(new DepthFirstAdapter()
                    {
                        private int current;

                        public void caseElem1(Elem1 node)
                        {
                            int op = ((Integer) GenParser.this.getOut(node)).intValue();
                            String name = (String) ids.elemTypes.get(node);
                            current++;

                            switch(op)
                            {
                            case NONE:
                                {
                                    stack.addFirst(new Element("ParserNewBodyDecl",
                                        new String[] {name, "" + current}));
                                }
                                break;
                            case STAR:
                                {
                                    if((count & (1 << elem)) != 0)
                                    {
                                        stack.addFirst(new Element("ParserNewBodyDecl",
                                            new String[] {"X" + name, "" + current}));
                                    }
                                    else
                                    {
                                        stack.addFirst(new Element("ParserNewBodyDeclNull",
                                            new String[] {"X" + name, "" + current}));
                                    }

                                    elem++;
                                }
                                break;
                            case QMARK:
                                {
                                    if((count & (1 << elem)) != 0)
                                    {
                                        stack.addFirst(new Element("ParserNewBodyDecl",
                                            new String[] {name, "" + current}));
                                    }
                                    else
                                    {
                                        stack.addFirst(new Element("ParserNewBodyDeclNull",
                                            new String[] {name, "" + current}));
                                    }

                                    elem++;
                                }
                                break;
                            case PLUS:
                                {
                                    stack.addFirst(new Element("ParserNewBodyDecl",
                                        new String[] {"X" + name, "" + current}));
                                }
                                break;
                            }
                        }
                    });

                    try
                    {
                        for(Iterator it = stack.iterator(); it.hasNext();)
                        {
                            Element e = (Element) it.next();

                            macros.apply(file, e.macro, e.arguments);
                        }
                    }
                    catch(IOException e)
                    {
                        throw new RuntimeException("An error occured while writing to " +
                            new File(pkgDir, "Parser.java").getAbsolutePath());
                    }

                    macros.apply(file, "ParserNewBodyNew",
                        new String[] {
                        (node == null) ? productions[i].name : name(productions[i].name)});

                    node.apply(new DepthFirstAdapter()
                    {
                        private int current;

                        public void caseElem1(Elem1 node)
                        {
                            try
                            {
                                String name = (String) ids.elemTypes.get(node);
                                current++;

                                macros.apply(finalFile, "ParserNewBodyParams",
                                    new String[] {(current == 1) ? "" : ", ",
                                    current + ""});
                            }
                            catch(IOException e)
                            {
                                throw new RuntimeException("An error occured while writing to " +
                                    new File(pkgDir, "Parser.java").getAbsolutePath());
                            }
                        }
                    });

                    macros.apply(file, "ParserNewTail", new String[] { "" + productions[i].leftside});
                }
            }

            macros.apply(file, "ParserActionHeader");

            StringBuffer table = new StringBuffer();

            DataOutputStream out = new DataOutputStream(
                new BufferedOutputStream(
                new FileOutputStream(
                new File(pkgDir, "parser.dat"))));

            Vector outerArray = new Vector();

            for(int i = 0; i < Grammar.action_.length; i++)
            {
                Vector innerArray = new Vector();

                String mostFrequentAction = "ERROR";
                int mostFrequentDestination = i;
                int frequence = 0;
                Map map = new SplayTreeMap(IntegerComparator.instance);

                for(int j = 0; j < Grammar.action_[i].length; j++)
                {
                    if(Grammar.action_[i][j] != null)
                    {
                        if(Grammar.action_[i][j][0] == 1)
                        {
                            Integer index = new Integer(Grammar.action_[i][j][1]);
                            Integer count = (Integer) map.get(index);
                            int freq = count == null ? 0 : count.intValue();
                            map.put(index, new Integer(++freq));
                            if(freq > frequence)
                            {
                                frequence = freq;
                                mostFrequentAction = "REDUCE";
                                mostFrequentDestination = Grammar.action_[i][j][1];
                            }
                        }
                    }
                }
                table.append("\t\t\t{");

                table.append("{" + -1 + ", " +
                    mostFrequentAction + ", " +
                    mostFrequentDestination + "}, ");
                innerArray.addElement(
                    new int[] {-1,
                    mostFrequentAction.equals("ERROR") ? 3 : 1,
                    mostFrequentDestination});

                for(int j = 0; j < Grammar.action_[i].length; j++)
                {
                    if(Grammar.action_[i][j] != null)
                    {
                        switch(Grammar.action_[i][j][0])
                        {
                        case 0:
                            table.append("{" + j + ", SHIFT, " + Grammar.action_[i][j][1] + "}, ");
                            innerArray.addElement(new int[] {j, 0, Grammar.action_[i][j][1]});
                            break;
                        case 1:
                            if(Grammar.action_[i][j][1] != mostFrequentDestination)
                            {
                                table.append("{" + j + ", REDUCE, " + Grammar.action_[i][j][1] + "}, ");
                                innerArray.addElement(new int[] {j, 1, Grammar.action_[i][j][1]});
                            }
                            break;
                        case 2:
                            table.append("{" + j + ", ACCEPT, -1}, ");
                            innerArray.addElement(new int[] {j, 2, -1});
                            break;
                        }
                    }
                }

                table.append("}," + System.getProperty("line.separator"));
                outerArray.addElement(innerArray);
            }

            file.write("" + table);

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

            macros.apply(file, "ParserActionTail");

            macros.apply(file, "ParserGotoHeader");

            table = new StringBuffer();
            outerArray = new Vector();

            for(int j = 0; j < nonterminals.length - 1; j++)
            {
                Vector innerArray = new Vector();

                int mostFrequent = -1;
                int frequence = 0;
                Map map = new SplayTreeMap(IntegerComparator.instance);

                for(int i = 0; i < Grammar.goto_.length; i++)
                {
                    if(Grammar.goto_[i][j] != -1)
                    {
                        Integer index = new Integer(Grammar.goto_[i][j]);
                        Integer count = (Integer) map.get(index);
                        int freq = count == null ? 0 : count.intValue();
                        map.put(index, new Integer(++freq));
                        if(freq > frequence)
                        {
                            frequence = freq;
                            mostFrequent = Grammar.goto_[i][j];
                        }
                    }
                }

                table.append("\t\t\t{");

                table.append("{" + (-1) + ", " + mostFrequent + "}, ");
                innerArray.addElement(new int[] {-1, mostFrequent});

                for(int i = 0; i < Grammar.goto_.length; i++)
                {
                    if((Grammar.goto_[i][j] != -1) &&
                        (Grammar.goto_[i][j] != mostFrequent))
                    {
                        table.append("{" + i + ", " + Grammar.goto_[i][j] + "}, ");
                        innerArray.addElement(new int[] {i, Grammar.goto_[i][j]});
                    }
                }

                table.append("}," + System.getProperty("line.separator"));

                outerArray.addElement(innerArray);
            }

            file.write("" + table);

            out.writeInt(outerArray.size());
            for(Enumeration e = outerArray.elements(); e.hasMoreElements();)
            {
                Vector innerArray = (Vector) e.nextElement();
                out.writeInt(innerArray.size());
                for(Enumeration n = innerArray.elements(); n.hasMoreElements();)
                {
                    int[] array = (int[]) n.nextElement();

                    for(int i = 0; i < 2; i++)
                    {
                        out.writeInt(array[i]);
                    }
                }
            }

            macros.apply(file, "ParserGotoTail");

            macros.apply(file, "ParserErrorsHeader");

            table = new StringBuffer();
            StringBuffer index = new StringBuffer();
            int nextIndex = 0;

            Map errorIndex = new TypedSplayTreeMap(
                StringComparator.instance,
                StringCast.instance,
                IntegerCast.instance);

            outerArray = new Vector();
            Vector indexArray = new Vector();

            index.append("\t\t\t");
            for(int i = 0; i < Grammar.action_.length; i++)
            {
                StringBuffer s = new StringBuffer();
                s.append("\t\t\t\"");

                for(int j = 0; j < Grammar.action_[i].length; j++)
                {
                    if(Grammar.action_[i][j] != null)
                    {
                        s.append(Symbol.symbol(j, true).name + " ");
                    }
                }

                s.append("expected.\"," + System.getProperty("line.separator"));

                if(errorIndex.containsKey(s.toString()))
                {
                    index.append(errorIndex.get(s.toString()) + ", ");
                    indexArray.addElement(errorIndex.get(s.toString()));
                }
                else
                {
                    table.append(s);
                    outerArray.addElement(s.toString());
                    errorIndex.put(s.toString(), new Integer(nextIndex));
                    indexArray.addElement(new Integer(nextIndex));
                    index.append(nextIndex++ + ", ");
                }
            }

            file.write("" + table);

            out.writeInt(outerArray.size());
            for(Enumeration e = outerArray.elements(); e.hasMoreElements();)
            {
                String s = (String) e.nextElement();
                out.writeInt(s.length());
                int length = s.length();
                for(int i = 0; i < length; i++)
                {
                    out.writeChar(s.charAt(i));
                }
            }

            out.writeInt(indexArray.size());
            for(Enumeration e = indexArray.elements(); e.hasMoreElements();)
            {
                Integer n = (Integer) e.nextElement();
                out.writeInt(n.intValue());
            }

            out.close();

            macros.apply(file, "ParserErrorsTail");

            macros.apply(file, "ParserErrorIndexHeader");
            file.write("" + index);
            macros.apply(file, "ParserErrorIndexTail");

            macros.apply(file, "ParserTail");
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "Parser.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    private void createTokenIndex()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "TokenIndex.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "TokenIndex.java").getAbsolutePath());
        }

        try
        {
            Symbol[] terminals = Symbol.terminals();

            macros.apply(file, "TokenIndexHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "node" : ids.pkgName + ".node",
                ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis"});

            for(int i = 0; i < (terminals.length - 2); i++)
            {
                macros.apply(file, "TokenIndexBody", new String[] {terminals[i].name, "" + i});
            }

            macros.apply(file, "TokenIndexTail", new String[] {"" + (terminals.length - 2)});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "TokenIndex.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    private void createParserException()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "ParserException.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "ParserException.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "ParserException", new String[] {pkgName});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "ParserException.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    private void createState()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "State.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "State.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "State", new String[] {pkgName});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "State.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    private int count(String name)
    {
        if(name.charAt(0) != 'X')
        {
            return 0;
        }

        StringBuffer s = new StringBuffer();
        int i = 1;

        while((i < name.length()) &&
            (name.charAt(i) >= '0') &&
            (name.charAt(i) <= '9'))
        {
            s.append(name.charAt(i++));
        }

        return Integer.parseInt(s.toString());
    }

    private String name(String name)
    {
        if(name.charAt(0) != 'X')
        {
            return name;
        }

        int i = 1;
        while((i < name.length()) &&
            (name.charAt(i) >= '0') &&
            (name.charAt(i) <= '9'))
        {
            i++;
        }

        return name.substring(i);
    }

    static class Element
    {
        String macro;
        String[] arguments;

        Element(String macro, String[] arguments)
        {
            this.macro = macro;
            this.arguments = arguments;
        }
    }
}

