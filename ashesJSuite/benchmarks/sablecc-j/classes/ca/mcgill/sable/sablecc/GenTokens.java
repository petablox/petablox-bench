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
import java.io.*;

public class GenTokens extends DepthFirstAdapter
{
    private MacroExpander macros;
    private ResolveIds ids;
    private File pkgDir;
    private String pkgName;

//    final GenTokens instance = this;
    String text;

    public GenTokens(ResolveIds ids)
    {
        this.ids = ids;

        try
        {
            macros = new MacroExpander(
                new InputStreamReader(
                getClass().getResourceAsStream("tokens.txt")));
        }
        catch(IOException e)
        {
            throw new RuntimeException("unable to open tokens.txt.");
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

    public void inTokenDef1(TokenDef1 node)
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

        text = null;

        RegExp1 regExp = (RegExp1) node.getNode4();

        Concat1 concat = (Concat1) regExp.getNode1();
        RegExpTails regExpTails = regExp.getNode2();

        if(regExpTails instanceof RegExpTails2)
        {
            UnExps unExps = concat.getNode1();

            if(unExps instanceof UnExps1)
            {
                UnExps unExps_2 = ((UnExps1) unExps).getNode2();

                if(unExps_2 instanceof UnExps2)
                {
                    UnExp1 unExp = (UnExp1) ((UnExps1) unExps).getNode1();

                    Basic basic = unExp.getNode1();
                    UnOpOpt unOpOpt = unExp.getNode2();

                    if((basic instanceof Basic3) &&
                        (unOpOpt instanceof UnOpOpt2))
                    {
                        text = ((Basic3) basic).getNode1().getText();
                        text = text.substring(1, text.length() - 1);
                    }
                    else if((basic instanceof Basic1) &&
                        (unOpOpt instanceof UnOpOpt2))
                    {
                        PChar pChar = ((Basic1) basic).getNode1();

                        if(pChar instanceof PChar1)
                        {
                            text = ((PChar1) pChar).getNode1().getText();
                            text = text.substring(1, text.length() - 1);
                        }
                    }
                }
            }
        }

        try
        {
            if(text == null)
            {
                ids.fixedTokens.put(node, new Boolean(false));

                macros.apply(file, "VariableTextToken", new String[] { pkgName,
                    ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                    name});
            }
            else
            {
                ids.fixedTokens.put(node, new Boolean(true));

                macros.apply(file, "FixedTextToken", new String[] { pkgName,
                    ids.pkgName.equals("") ? "analysis" : ids.pkgName + ".analysis",
                    name, processText(text)});
            }
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

    private String processText(String s)
    {
        StringBuffer result = new StringBuffer();

        for(int i = 0; i < s.length(); i++)
        {
            char c = s.charAt(i);

            switch(c)
            {
            case '\b':
                {
                    result.append("\\t");
                    break;
                }
            case '\t':
                {
                    result.append("\\t");
                    break;
                }
            case '\n':
                {
                    result.append("\\n");
                    break;
                }
            case '\f':
                {
                    result.append("\\f");
                    break;
                }
            case '\r':
                {
                    result.append("\\r");
                    break;
                }
            case '\"':
                {
                    result.append("\\\"");
                    break;
                }
            case '\'':
                {
                    result.append("\\\'");
                    break;
                }
            case '\\':
                {
                    result.append("\\\\");
                    break;
                }
            default:
                {
                    result.append(c);
                }
            }
        }

        return result.toString();
    }
}


