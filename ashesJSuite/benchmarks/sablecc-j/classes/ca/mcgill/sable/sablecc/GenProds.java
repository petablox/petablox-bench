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

public class GenProds extends DepthFirstAdapter
{
    private MacroExpander macros;
    private ResolveIds ids;
    private File pkgDir;
    private String pkgName;
    private Map hiddenProds = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        NodeCast.instance);

    public GenProds(ResolveIds ids)
    {
        this.ids = ids;

        try
        {
            macros = new MacroExpander(
                new InputStreamReader(
                getClass().getResourceAsStream("productions.txt")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("unable to open productions.txt.");
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
        String name = (String) ids.names.get(node);

        createProduction(name);
    }

    private void createProduction(String name)
    {
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
            macros.apply(file, "Production", new String[] {pkgName, name});
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
    }

    public void inUnOp1(UnOp1 node)
    {
        if(node.getParent().getParent() instanceof Elem1)
        {
            Elem1 elem = (Elem1) node.getParent().getParent();

            String name = (String) ids.elemTypes.get(elem);

            if(hiddenProds.put("X" + name, elem) == null)
            {
                createProduction("X" + name);

                createAlternative(
                    "X1" + name,
                    "HiddenAlternative2",
                    new String[] {pkgName,
                    ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                    "X1" + name,
                    "X" + name,
                    name,
                    GenAlts.nodeName(name),
                    GenAlts.nodeName("X" + name)});

                createAlternative(
                    "X2" + name,
                    "HiddenAlternative1",
                    new String[] {pkgName,
                    ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                    "X2" + name,
                    "X" + name,
                    name,
                    GenAlts.nodeName(name)});
            }
        }
    }

    public void inUnOp3(UnOp3 node)
    {
        if(node.getParent().getParent() instanceof Elem1)
        {
            Elem1 elem = (Elem1) node.getParent().getParent();

            String name = (String) ids.elemTypes.get(elem);

            if(hiddenProds.put("X" + name, elem) == null)
            {
                createProduction("X" + name);

                createAlternative(
                    "X1" + name,
                    "HiddenAlternative2",
                    new String[] {pkgName,
                    ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                    "X1" + name,
                    "X" + name,
                    name,
                    GenAlts.nodeName(name),
                    GenAlts.nodeName("X" + name)});

                createAlternative(
                    "X2" + name,
                    "HiddenAlternative1",
                    new String[] {pkgName,
                    ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                    "X2" + name,
                    "X" + name,
                    name,
                    GenAlts.nodeName(name)});
            }
        }
    }

    private void createAlternative(String name, String macro, String[] arg)
    {
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
            macros.apply(file, macro, arg);
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
    }
}


