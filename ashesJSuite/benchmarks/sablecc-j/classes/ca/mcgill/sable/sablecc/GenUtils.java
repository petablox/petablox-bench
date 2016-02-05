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

public class GenUtils extends DepthFirstAdapter
{
    private MacroExpander macros;
    private ResolveIds ids;
    private File pkgDir;
    private String pkgName;
    private String mainProduction;

    public GenUtils(ResolveIds ids)
    {
        this.ids = ids;

        try
        {
            macros = new MacroExpander(
                new InputStreamReader(
                getClass().getResourceAsStream("utils.txt")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("unable to open utils.txt.");
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

    public void caseGrammar1(Grammar1 node)
    {
        node.getNode6().apply(this);
    }

    public void caseProd1(Prod1 node)
    {
        if(mainProduction == null)
        {
            mainProduction = (String) ids.names.get(node);
        }
    }

    public void outStart1(Start1 node)
    {
        if(mainProduction != null)
        {
            createStart();
        }

        createEOF();
        createNode();
        createNodeCast();
        createToken();
    }

    public void createStart()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "Start.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "Start.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "Start", new String[] {pkgName,
                ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                mainProduction, GenAlts.nodeName(mainProduction)});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "Start.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    public void createEOF()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "EOF.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "EOF.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "EOF", new String[] {pkgName,
                ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis"});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "EOF.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    public void createNode()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "Node.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "Node.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "Node", new String[] {pkgName,
                ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis"});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "Node.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    public void createNodeCast()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "NodeCast.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "NodeCast.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "NodeCast", new String[] {pkgName});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "NodeCast.java").getAbsolutePath());
        }

        try
        {
            file.close();
        }
        catch(IOException e)
        {
        }
    }

    public void createToken()
    {
        BufferedWriter file;

        try
        {
            file = new BufferedWriter(
                new FileWriter(
                new File(pkgDir, "Token.java")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("Unable to create " + new File(pkgDir, "Token.java").getAbsolutePath());
        }

        try
        {
            macros.apply(file, "Token", new String[] {pkgName});
        }
        catch(IOException e)
        {
            throw new RuntimeException("An error occured while writing to " +
                new File(pkgDir, "Token.java").getAbsolutePath());
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


