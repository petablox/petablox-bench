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
import java.io.*;

public class GenAlts extends DepthFirstAdapter
{
    private MacroExpander macros;
    private ResolveIds ids;
    private File pkgDir;
    private String pkgName;
    private List elemList;

    private String currentProd;
    ElemInfo info;
//    final GenAlts instance = this;

    public GenAlts(ResolveIds ids)
    {
        this.ids = ids;

        try
        {
            macros = new MacroExpander(
                new InputStreamReader(
                getClass().getResourceAsStream("alternatives.txt")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("unable to open alternatives.txt.");
        }

        pkgDir = new File(ids.pkgDir, "node");
        pkgName = ids.pkgName.equals("") ? "node" : ids.pkgName + ".node";

        if(!pkgDir.exists())
        {
            if(!pkgDir.mkdir())
            {
                throw new RuntimeException("Unable to create " + pkgDir.getAbsolutePath());
            }
        }
    }

    public void inProd1(Prod1 node)
    {
        currentProd = (String) ids.names.get(node);
    }

    public void inAlt1(Alt1 node)
    {
        inAlt(node);
    }

    public void inAlt2(Alt2 node)
    {
        inAlt(node);
    }

    public void inAlt(Alt node)
    {
        elemList = new TypedLinkedList(ElemInfoCast.instance);
    }

    public void inElem1(Elem1 node)
    {
        info = new ElemInfo();

        info.name = (String) ids.names.get(node);
        info.type = (String) ids.elemTypes.get(node);
        info.operator = ElemInfo.NONE;

        node.getNode4().apply(new DepthFirstAdapter()
        {
            public void caseUnOp1(UnOp1 node)
            {
                info.operator = ElemInfo.STAR;
            }

            public void caseUnOp2(UnOp2 node)
            {
                info.operator = ElemInfo.QMARK;
            }

            public void caseUnOp3(UnOp3 node)
            {
                info.operator = ElemInfo.PLUS;
            }
        });

        elemList.add(info);
        info = null;
    }

    public void outAlt1(Alt1 node)
    {
        outAlt(node);
    }

    public void outAlt2(Alt2 node)
    {
        outAlt(node);
    }

    public void outAlt(Alt node)
    {
        String name = (String) ids.names.get(node);

        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, name + ".java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, name + ".java").getAbsolutePath());
        }

        try
        {
            boolean hasOperator = false;

            macros.apply(file, "AlternativeHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                name, currentProd});

            for(Iterator i = elemList.iterator(); i.hasNext();)
            {
                ElemInfo info = (ElemInfo) i.next();

                switch(info.operator)
                {
                case ElemInfo.QMARK:
                case ElemInfo.NONE:
                    {
                        macros.apply(file, "NodeElement",
                            new String[] {info.type,
                            nodeName(info.name)});
                    }
                    break;
                case ElemInfo.STAR:
                case ElemInfo.PLUS:
                    {
                        hasOperator = true;
                        macros.apply(file, "ListElement",
                            new String[] {info.name, nodeName(info.name)});
                    }
                    break;
                }
            }

            macros.apply(file, "ConstructorHeader",
                new String[] {name});
            macros.apply(file, "ConstructorBodyHeader", null);
            macros.apply(file, "ConstructorBodyTail", null);


            if(elemList.size() > 0)
            {
                macros.apply(file, "ConstructorHeader",
                    new String[] {name});

                for(Iterator i = elemList.iterator(); i.hasNext();)
                {
                    ElemInfo info = (ElemInfo) i.next();

                    switch(info.operator)
                    {
                    case ElemInfo.QMARK:
                    case ElemInfo.NONE:
                        {
                            macros.apply(file, "ConstructorHeaderDeclNode",
                                new String[] {info.type, nodeName(info.name), i.hasNext() ? "," : ""});
                        }
                        break;
                    case ElemInfo.STAR:
                    case ElemInfo.PLUS:
                        {
                            macros.apply(file, "ConstructorHeaderDeclList",
                                new String[] {"List", nodeName(info.name), i.hasNext() ? "," : ""});
                        }
                        break;
                    }
                }

                macros.apply(file, "ConstructorBodyHeader", null);

                for(Iterator i = elemList.iterator(); i.hasNext();)
                {
                    ElemInfo info = (ElemInfo) i.next();

                    switch(info.operator)
                    {
                    case ElemInfo.QMARK:
                    case ElemInfo.NONE:
                        {
                            macros.apply(file, "ConstructorBodyNode",
                                new String[] {info.name, nodeName(info.name)});
                        }
                        break;
                    case ElemInfo.STAR:
                    case ElemInfo.PLUS:
                        {
                            macros.apply(file, "ConstructorBodyList",
                                new String[] {nodeName(info.name)});
                        }
                        break;
                    }
                }

                macros.apply(file, "ConstructorBodyTail", null);
            }

            if(hasOperator)
            {
                macros.apply(file, "ConstructorHeader",
                    new String[] {name});

                for(Iterator i = elemList.iterator(); i.hasNext();)
                {
                    ElemInfo info = (ElemInfo) i.next();

                    switch(info.operator)
                    {
                    case ElemInfo.NONE:
                    case ElemInfo.QMARK:
                        {
                            macros.apply(file, "ConstructorHeaderDeclNode",
                                new String[] {info.type, nodeName(info.name), i.hasNext() ? "," : ""});
                        }
                        break;
                    case ElemInfo.STAR:
                    case ElemInfo.PLUS:
                        {
                            macros.apply(file, "ConstructorHeaderDeclList",
                                new String[] {"X" + info.type,
                                nodeName(info.name), i.hasNext() ? "," : ""});
                        }
                        break;
                    }
                }

                macros.apply(file, "ConstructorBodyHeader", null);

                for(Iterator i = elemList.iterator(); i.hasNext();)
                {
                    ElemInfo info = (ElemInfo) i.next();

                    switch(info.operator)
                    {
                    case ElemInfo.NONE:
                    case ElemInfo.QMARK:
                        {
                            macros.apply(file, "ConstructorBodyNode",
                                new String[] {info.name, nodeName(info.name)});
                        }
                        break;
                    case ElemInfo.STAR:
                    case ElemInfo.PLUS:
                        {
                            macros.apply(file, "ConstructorBodyPlus",
                                new String[] {nodeName(info.name), info.type});
                        }
                        break;
                    }
                }

                macros.apply(file, "ConstructorBodyTail", null);
            }

//****************
            macros.apply(file, "CloneHeader",
                new String[] {name});

            for(Iterator i = elemList.iterator(); i.hasNext();)
            {
                ElemInfo info = (ElemInfo) i.next();

                switch(info.operator)
                {
                case ElemInfo.QMARK:
                case ElemInfo.NONE:
                    {
                        macros.apply(file, "CloneBodyNode",
                            new String[] {info.type, nodeName(info.name), i.hasNext() ? "," : ""});
                    }
                    break;
                case ElemInfo.STAR:
                case ElemInfo.PLUS:
                    {
                        macros.apply(file, "CloneBodyList",
                            new String[] {nodeName(info.name), i.hasNext() ? "," : ""});
                    }
                    break;
                }
            }

            macros.apply(file, "CloneTail", null);
//****************

            macros.apply(file, "Apply", new String[] {name});

            for(Iterator i = elemList.iterator(); i.hasNext();)
            {
                ElemInfo info = (ElemInfo) i.next();

                switch(info.operator)
                {
                case ElemInfo.QMARK:
                case ElemInfo.NONE:
                    {
                        macros.apply(file, "GetSetNode",
                            new String[] {info.type, info.name, nodeName(info.name)});
                    }
                    break;
                case ElemInfo.STAR:
                case ElemInfo.PLUS:
                    {
                        macros.apply(file, "GetSetList",
                            new String[] {info.name, nodeName(info.name)});
                    }
                    break;
                }
            }

            macros.apply(file, "ToStringHeader", null);
            for(Iterator i = elemList.iterator(); i.hasNext();)
            {
                ElemInfo info = (ElemInfo) i.next();

                switch(info.operator)
                {
                case ElemInfo.QMARK:
                case ElemInfo.NONE:
                    {
                        macros.apply(file, "ToStringBodyNode",
                            new String[] {nodeName(info.name)});
                    }
                    break;
                case ElemInfo.STAR:
                case ElemInfo.PLUS:
                    {
                        macros.apply(file, "ToStringBodyList",
                            new String[] {nodeName(info.name)});
                    }
                    break;
                }
            }
            macros.apply(file, "ToStringTail", null);

            macros.apply(file, "RemoveChildHeader", null);
            for(Iterator i = elemList.iterator(); i.hasNext();)
            {
                ElemInfo info = (ElemInfo) i.next();

                switch(info.operator)
                {
                case ElemInfo.QMARK:
                case ElemInfo.NONE:
                    {
                        macros.apply(file, "RemoveChildNode",
                            new String[] {nodeName(info.name)});
                    }
                    break;
                case ElemInfo.STAR:
                case ElemInfo.PLUS:
                    {
                        macros.apply(file, "RemoveChildList",
                            new String[] {nodeName(info.name)});
                    }
                    break;
                }
            }
            macros.apply(file, "RemoveChildTail", null);
/* */
            macros.apply(file, "ReplaceChildHeader", null);
            for(Iterator i = elemList.iterator(); i.hasNext();)
            {
                ElemInfo info = (ElemInfo) i.next();

                switch(info.operator)
                {
                case ElemInfo.QMARK:
                case ElemInfo.NONE:
                    {
                        macros.apply(file, "ReplaceChildNode",
                            new String[] {nodeName(info.name), info.name, info.type});
                    }
                    break;
                case ElemInfo.STAR:
                case ElemInfo.PLUS:
                    {
                        macros.apply(file, "ReplaceChildList",
                            new String[] {nodeName(info.name)});
                    }
                    break;
                }
            }
            macros.apply(file, "ReplaceChildTail", null);

/* */
            for(Iterator i = elemList.iterator(); i.hasNext();)
            {
                ElemInfo info = (ElemInfo) i.next();

                switch(info.operator)
                {
                case ElemInfo.STAR:
                case ElemInfo.PLUS:
                    {
                        macros.apply(file, "Cast",
                            new String[] {info.name, info.type, name});
                    }
                    break;
                }
            }

            macros.apply(file, "AlternativeTail", null);
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, name + ".java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }

        elemList = null;
    }

    public static String nodeName(String s)
    {
        StringBuffer result = new StringBuffer(s);

        if(result.length() > 0)
        {
            result.setCharAt(0, Character.toLowerCase(result.charAt(0)));
        }

        return result.toString();
    }

    private static class ElemInfo
    {
        final static int NONE = 0;
        final static int STAR = 1;
        final static int QMARK = 2;
        final static int PLUS = 3;

        String name;
        String type;
        int operator;
    }

    private static class ElemInfoCast implements Cast
    {
        public final static ElemInfoCast instance = new ElemInfoCast();

        private ElemInfoCast()
        {
        }

        public    Object cast(Object o)
        {
            return (ElemInfo) o;
        }
    }
}

