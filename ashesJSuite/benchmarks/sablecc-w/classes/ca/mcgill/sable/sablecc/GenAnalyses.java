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

public class GenAnalyses extends DepthFirstAdapter
{
    private MacroExpander macros;
    private ResolveIds ids;
    private File pkgDir;
    private String pkgName;
    private List elemList;
    private List altList = new TypedLinkedList(AltInfoCast.instance);
    private List tokenList = new TypedLinkedList(StringCast.instance);
    private String mainProduction;

    ElemInfo info;
//    final GenAnalyses instance = this;

    public GenAnalyses(ResolveIds ids)
    {
        this.ids = ids;

        try
        {
            macros = new MacroExpander(
                new InputStreamReader(
                getClass().getResourceAsStream("analyses.txt")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("unable to open analyses.txt.");
        }

        pkgDir = new File(ids.pkgDir, "analysis");
        pkgName = ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis";

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
        if(mainProduction == null)
        {
            mainProduction = (String) ids.names.get(node);
        }
    }

    public void inTokenDef1(TokenDef1 node)
    {
        tokenList.add(ids.names.get(node));
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
        AltInfo info = new AltInfo();

        info.name = (String) ids.names.get(node);
        info.elems.addAll(elemList);
        elemList = null;

        altList.add(info);
    }

    public void outStart1(Start1 node)
    {
        createAnalysis();
        createAnalysisAdapter();

        if(mainProduction != null)
        {
            createDepthFirstAdapter();
            createReversedDepthFirstAdapter();
        }
    }

    public void createAnalysis()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "Analysis.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "Analysis.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "AnalysisHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "node" : ids.pkgName + ".node"});

            if(mainProduction != null)
            {
                macros.apply(file, "AnalysisStart", null);

                for(Iterator i = altList.iterator(); i.hasNext();)
                {
                    AltInfo info = (AltInfo) i.next();

                    macros.apply(file, "AnalysisBody",
                        new String[] {info.name});
                }

                file.newLine();
            }

            for(Iterator i = tokenList.iterator(); i.hasNext();)
            {
                macros.apply(file, "AnalysisBody",
                    new String[] {(String) i.next()});
            }

            macros.apply(file, "AnalysisTail", null);
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "Analysis.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    public void createAnalysisAdapter()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "AnalysisAdapter.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "AnalysisAdapter.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "AnalysisAdapterHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "node" : ids.pkgName + ".node"});

            if(mainProduction != null)
            {
                macros.apply(file, "AnalysisAdapterStart", null);

                for(Iterator i = altList.iterator(); i.hasNext();)
                {
                    AltInfo info = (AltInfo) i.next();

                    macros.apply(file, "AnalysisAdapterBody",
                        new String[] {info.name});
                }
            }

            for(Iterator i = tokenList.iterator(); i.hasNext();)
            {
                macros.apply(file, "AnalysisAdapterBody",
                    new String[] {(String) i.next()});
            }

            macros.apply(file, "AnalysisAdapterTail", null);
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "AnalysisAdapter.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    public void createDepthFirstAdapter()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "DepthFirstAdapter.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "DepthFirstAdapter.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "DepthFirstAdapterHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "node" : ids.pkgName + ".node",
                mainProduction});

            for(Iterator i = altList.iterator(); i.hasNext();)
            {
                AltInfo info = (AltInfo) i.next();

                macros.apply(file, "DepthFirstAdapterInOut",
                    new String[] {info.name});

                macros.apply(file, "DepthFirstAdapterCaseHeader",
                    new String[] {info.name});

                for(Iterator j = info.elems.iterator(); j.hasNext();)
                {
                    ElemInfo eInfo = (ElemInfo) j.next();

                    switch(eInfo.operator)
                    {
                    case ElemInfo.QMARK:
                    case ElemInfo.NONE:
                        {
                            macros.apply(file, "DepthFirstAdapterCaseBodyNode",
                                new String[] {eInfo.name});
                        }
                        break;
                    case ElemInfo.STAR:
                    case ElemInfo.PLUS:
                        {
                            macros.apply(file, "DepthFirstAdapterCaseBodyList",
                                new String[] {eInfo.name, eInfo.type});
                        }
                        break;
                    }
                }

                macros.apply(file, "DepthFirstAdapterCaseTail",
                    new String[] {info.name});

            }

            macros.apply(file, "DepthFirstAdapterTail", null);
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "DepthFirstAdapter.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    public void createReversedDepthFirstAdapter()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "ReversedDepthFirstAdapter.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "ReversedDepthFirstAdapter.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "ReversedDepthFirstAdapterHeader", new String[] {pkgName,
                ids.pkgName.equals("") ? "node" : ids.pkgName + ".node",
                mainProduction});

            for(Iterator i = altList.iterator(); i.hasNext();)
            {
                AltInfo info = (AltInfo) i.next();

                macros.apply(file, "DepthFirstAdapterInOut",
                    new String[] {info.name});

                macros.apply(file, "DepthFirstAdapterCaseHeader",
                    new String[] {info.name});

                for(ListIterator j = info.elems.listIterator(info.elems.size()); j.hasPrevious();)
                {
                    ElemInfo eInfo = (ElemInfo) j.previous();

                    switch(eInfo.operator)
                    {
                    case ElemInfo.QMARK:
                    case ElemInfo.NONE:
                        {
                            macros.apply(file, "DepthFirstAdapterCaseBodyNode",
                                new String[] {eInfo.name});
                        }
                        break;
                    case ElemInfo.STAR:
                    case ElemInfo.PLUS:
                        {
                            macros.apply(file, "ReversedDepthFirstAdapterCaseBodyList",
                                new String[] {eInfo.name, eInfo.type});
                        }
                        break;
                    }
                }

                macros.apply(file, "DepthFirstAdapterCaseTail",
                    new String[] {info.name});

            }

            macros.apply(file, "DepthFirstAdapterTail", null);
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "ReversedDepthFirstAdapter.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
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
        final static ElemInfoCast instance = new ElemInfoCast();

        private ElemInfoCast()
        {
        }

        public    Object cast(Object o)
        {
            return (ElemInfo) o;
        }
    }

    private static class AltInfo
    {
        String name;
        final List elems = new TypedLinkedList(ElemInfoCast.instance);
    }

    private static class AltInfoCast implements Cast
    {
        final static AltInfoCast instance = new AltInfoCast();

        private AltInfoCast()
        {
        }

        public    Object cast(Object o)
        {
            return (AltInfo) o;
        }
    }
}


