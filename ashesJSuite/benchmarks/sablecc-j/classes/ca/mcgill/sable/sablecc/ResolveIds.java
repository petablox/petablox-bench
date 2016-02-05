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

 - Modified on July 18, 1998 by Etienne Gagnon (gagnon@sable.mcgill.ca). (*)
   Fixed the package name bug. It now accepts uppercases.

 - Modified on June 7, 1998 by Etienne Gagnon (gagnon@sable.mcgill.ca). (*)
   Changed the license.

*/

package ca.mcgill.sable.sablecc;

import ca.mcgill.sable.sablecc.analysis.*;
import ca.mcgill.sable.sablecc.node.*;
import ca.mcgill.sable.util.*;
import java.io.*;

public class ResolveIds extends DepthFirstAdapter
{
    public final Map helpers = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);
    public final Map states = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);
    public final Map tokens = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);
    public final Map ignTokens = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);
    public final Map prods = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);
    public final Map alts = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);
    public final Map elems = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);
    public final Map names = new TypedSplayTreeMap(
        NodeComparator.instance,
        NodeCast.instance,
        StringCast.instance);
    public final Map elemTypes = new TypedSplayTreeMap(
        NodeComparator.instance,
        NodeCast.instance,
        StringCast.instance);
    public final Map fixedTokens = new TypedSplayTreeMap(
        NodeComparator.instance,
        NodeCast.instance,
        BooleanCast.instance);
    public final List tokenList = new TypedLinkedList(StringCast.instance);
    public final LinkedList stateList = new TypedLinkedList(StringCast.instance);
    public File pkgDir;
    public String pkgName = "";

    private boolean processingStates;
    private boolean processingIgnTokens;

    String currentProd;
    String currentAlt;
    private int lastLine;
    private int lastPos;

    public ResolveIds(File currentDir)
    {
        pkgDir = currentDir;
    }

    public void inPkgName1(PkgName1 node)
    {
        pkgName = node.getNode1().getText();
        pkgDir = new File(pkgDir, node.getNode1().getText());

        if(!pkgDir.exists())
        {
            if(!pkgDir.mkdir())
            {
                throw new RuntimeException("Unable to create " + pkgDir.getAbsolutePath());
            }
        }
    }

    public void inPkgNameTail1(PkgNameTail1 node)
    {
        pkgName += "." + node.getNode2().getText();
        pkgDir = new File(pkgDir, node.getNode2().getText());

        if(!pkgDir.exists())
        {
            if(!pkgDir.mkdir())
            {
                throw new RuntimeException("Unable to create " + pkgDir.getAbsolutePath());
            }
        }
    }

    public void caseBasic4(Basic4 node)
    {
        String name = node.getNode1().getText();

        if(helpers.get(name) == null)
        {
            error2(node.getNode1(), name);
        }
    }

    public void outHelperDef1(HelperDef1 node)
    {
        String name = node.getNode1().getText();

        if(helpers.put(name, node) != null)
        {
            error(node.getNode1(), name);
        }

        names.put(node, name);
    }

    public void outTokenDef1(TokenDef1 node)
    {
        String name = "T" + name(node.getNode2().getText());

        if(tokens.put(name, node) != null)
        {
            error(node.getNode2(), name);
        }

        names.put(node, name);
        tokenList.add(name);
    }

    public void inStates1(States1 node)
    {
        processingStates = true;
    }

    public void outStates1(States1 node)
    {
        processingStates = false;
    }

    public void inIgnTokens1(IgnTokens1 node)
    {
        processingIgnTokens = true;
    }

    public void outIgnTokens1(IgnTokens1 node)
    {
        processingIgnTokens = false;
    }

    public void inIdList1(IdList1 node)
    {
        if(processingStates)
        {
            String name = node.getNode1().getText().toUpperCase();

            if(states.put(name, node.getNode1()) != null)
            {
                error(node.getNode1(), name);
            }

            names.put(node.getNode1(), name);
            stateList.add(name);
        }

        if(processingIgnTokens)
        {
            String name = "T" + name(node.getNode1().getText());

            if(tokens.get(name) == null)
            {
                error2(node.getNode1(), name);
            }

            if(ignTokens.put(name, node.getNode1()) != null)
            {
                error(node.getNode1(), name);
            }

            names.put(node.getNode1(), name);
        }
    }

    public void inIdListTail1(IdListTail1 node)
    {
        if(processingStates)
        {
            String name = node.getNode2().getText().toUpperCase();

            if(states.put(name, node.getNode2()) != null)
            {
                error(node.getNode2(), name);
            }

            names.put(node.getNode2(), name);
            stateList.add(name);
        }

        if(processingIgnTokens)
        {
            String name = "T" + name(node.getNode2().getText());

            if(tokens.get(name) == null)
            {
                error2(node.getNode2(), name);
            }

            if(ignTokens.put(name, node.getNode2()) != null)
            {
                error(node.getNode2(), name);
            }

            names.put(node.getNode2(), name);
        }
    }

    private Map stateMap;

    public void inStateList1(StateList1 node)
    {
        stateMap = new TypedSplayTreeMap(
            StringComparator.instance,
            StringCast.instance,
            NodeCast.instance);

        String name = node.getNode2().getText().toUpperCase();

        if(states.get(name) == null)
        {
            error2(node.getNode2(), name);
        }

        if(stateMap.put(name, node) != null)
        {
            error(node.getNode2(), name);
        }
    }

    public void outStateList1(StateList1 node)
    {
        stateMap = null;
    }

    public void inStateListTail1(StateListTail1 node)
    {
        String name = node.getNode2().getText().toUpperCase();

        if(states.get(name) == null)
        {
            error2(node.getNode2(), name);
        }

        if(stateMap.put(name, node) != null)
        {
            error(node.getNode2(), name);
        }
    }

    public void inTransition1(Transition1 node)
    {
        String name = node.getNode2().getText().toUpperCase();

        if(states.get(name) == null)
        {
            error2(node.getNode2(), name);
        }
    }

    public void inProd1(Prod1 node)
    {
        currentProd = name(node.getNode1().getText());

        String name = "P" + currentProd;

        if(prods.put(name, node) != null)
        {
            error(node.getNode1(), name);
        }

        names.put(node, name);
    }

    private class Alt1Switch extends AnalysisAdapter
    {
        Alt1 alt;

        Alt1Switch(Alt1 alt)
        {
            this.alt = alt;
        }

        public void caseAltNameOpt1(AltNameOpt1 node)
        {
            currentAlt =
                "A" +
                name(((AltName1) node.getNode1()).getNode2().getText()) +
                currentProd;

            if(alts.put(currentAlt, alt) != null)
            {
                error(((AltName1) node.getNode1()).getNode2(), currentAlt);
            }

            names.put(alt, currentAlt);
        }

        public void caseAltNameOpt2(AltNameOpt2 node)
        {
            currentAlt = "A" + currentProd;

            if(alts.put(currentAlt, alt) != null)
            {
                error(currentAlt);
            }

            names.put(alt, currentAlt);
        }
    }

    public void inAlt1(final Alt1 alt)
    {
        alt.getNode1().apply(new Alt1Switch(alt));
    }

    public void defaultcase(Node node)
    {
        if(node instanceof Token)
        {
            Token t = (Token) node;
            lastLine = t.getLine();
            lastPos = t.getPos() + t.getText().length();
        }
    }

    private class Alt2Switch extends AnalysisAdapter
    {
        Alt2 alt;

        Alt2Switch(Alt2 alt)
        {
            this.alt = alt;
        }

        public void caseAltNameOpt1(AltNameOpt1 node)
        {
            currentAlt =
                "A" +
                name(((AltName1) node.getNode1()).getNode2().getText()) +
                currentProd;

            if(alts.put(currentAlt, alt) != null)
            {
                error(((AltName1) node.getNode1()).getNode2(), currentAlt);
            }

            names.put(alt, currentAlt);
        }

        public void caseAltNameOpt2(AltNameOpt2 node)
        {
            currentAlt = "A" + currentProd;

            if(alts.put(currentAlt, alt) != null)
            {
                error(currentAlt);
            }

            names.put(alt, currentAlt);
        }
    }

    public void inAlt2(final Alt2 alt)
    {
        alt.getNode2().apply(new Alt2Switch(alt));
    }

    public void caseElem1(final Elem1 elem)
    {
        elem.getNode1().apply(new AnalysisAdapter()
        {
            public void caseElemNameOpt1(ElemNameOpt1 node)
            {
                String name = currentAlt + "." +
                    name(((ElemName1)node.getNode1()).getNode2().getText());

                if(elems.put(name, elem) != null)
                {
                    error(((ElemName1)node.getNode1()).getNode2(), name);
                }

                if(((ElemName1)node.getNode1()).getNode2().getText().equals("class"))
                {
                    error5(((ElemName1)node.getNode1()).getNode2());
                }

                names.put(elem, name(((ElemName1)node.getNode1()).getNode2().getText()));
            }

            public void caseElemNameOpt2(ElemNameOpt2 node)
            {
                String name = currentAlt + "." +
                    name(elem.getNode3().getText());

                if(elems.put(name, elem) != null)
                {
                    error(elem.getNode3(), name);
                }

                if(elem.getNode3().getText().equals("class"))
                {
                    error5(elem.getNode3());
                }

                names.put(elem, name(elem.getNode3().getText()));
            }
        });
    }

    public void outProductions1(Productions1 prod)
    {
        prod.apply(new DepthFirstAdapter()
        {
            public void caseElem1(Elem1 node)
            {
                String name = name(node.getNode3().getText());

                if(node.getNode2() instanceof SpecifierOpt1)
                {
                    if(((SpecifierOpt1) node.getNode2()).getNode1() instanceof Specifier1)
                    {
                        if(tokens.get("T" + name) == null)
                        {
                            error2(node.getNode3(), "T" + name);
                        }

                        if(ignTokens.get("T" + name) != null)
                        {
                            error3(node.getNode3(), "T" + name);
                        }

                        elemTypes.put(node, "T" + name);
                    }
                    else
                    {
                        if(prods.get("P" + name) == null)
                        {
                            error2(node.getNode3(), "P" + name);
                        }

                        elemTypes.put(node, "P" + name);
                    }
                }
                else
                {
                    Object token = tokens.get("T" + name);
                    Object ignToken = ignTokens.get("T" + name);
                    Object production = prods.get("P" + name);

                    if((token == null) && (production == null))
                    {
                        error2(node.getNode3(), "P" + name + " and T" + name);
                    }

                    if(token != null)
                    {
                        if(production != null)
                        {
                            error4(node.getNode3(), "P" + name + " and T" + name);
                        }

                        if(ignToken != null)
                        {
                            error3(node.getNode3(), "T" + name);
                        }

                        elemTypes.put(node, "T" + name);
                    }
                    else
                    {
                        elemTypes.put(node, "P" + name);
                    }
                }
            }
        });
    }

    public static String name(String s)
    {
        StringBuffer result = new StringBuffer();
        boolean upcase = true;
        int length = s.length();
        char c;

        for(int i = 0; i < length; i++)
        {
            c = s.charAt(i);
            switch(c)
            {
            case '_':
                upcase = true;
                break;
            default:
                if(upcase)
                {
                    result.append(Character.toUpperCase(c));
                    upcase = false;
                }
                else
                {
                    result.append(c);
                }
                break;
            }
        }

        return result.toString();
    }

    private static void error(Token token, String name)
    {
        throw new RuntimeException(
            "[" + token.getLine() + "," + token.getPos() + "] " +
            "Redefinition of " + name + ".");
    }

    private void error(String name)
    {
        throw new RuntimeException(
            "[" + lastLine + "," + lastPos + "] " +
            "Redefinition of " + name + ".");
    }

    private static void error2(Token token, String name)
    {
        throw new RuntimeException(
            "[" + token.getLine() + "," + token.getPos() + "] " +
            name + " undefined.");
    }

    private static void error3(Token token, String name)
    {
        throw new RuntimeException(
            "[" + token.getLine() + "," + token.getPos() + "] " +
            name + " is ignored.");
    }

    private static void error4(Token token, String name)
    {
        throw new RuntimeException(
            "[" + token.getLine() + "," + token.getPos() + "] " +
            "ambiguous " + name + ".");
    }

    private static void error5(Token token)
    {
        throw new RuntimeException(
            "[" + token.getLine() + "," + token.getPos() + "] " +
            "class is an invalid element name.");
    }

    public String toString()
    {
        StringBuffer s = new StringBuffer();
        String nl = System.getProperty("line.separator");

        s.append("Helpers:");
        s.append(nl);
        s.append(helpers);
        s.append(nl);

        s.append("States:");
        s.append(nl);
        s.append(states);
        s.append(nl);

        s.append("Tokens:");
        s.append(nl);
        s.append(tokens);
        s.append(nl);

        s.append("Ignored Tokens:");
        s.append(nl);
        s.append(ignTokens);
        s.append(nl);

        s.append("Productions:");
        s.append(nl);
        s.append(prods);
        s.append(nl);

        s.append("Alternatives:");
        s.append(nl);
        s.append(alts);
        s.append(nl);

        s.append("Elements:");
        s.append(nl);
        s.append(elems);
        s.append(nl);

        return s.toString();
    }
}

