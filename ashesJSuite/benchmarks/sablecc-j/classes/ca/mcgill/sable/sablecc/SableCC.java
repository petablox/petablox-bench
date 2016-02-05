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

 - Modified on July 18, 1998 by Etienne Gagnon (gagnon@sable.mcgill.ca). (*)
   Changed displayCopyright to reflect the new version.

 - Modified on June 7, 1998 by Etienne Gagnon (gagnon@sable.mcgill.ca). (*)
   Changed the license.
   Changed displayCopyright to reflect the new version.

*/

package ca.mcgill.sable.sablecc;

import java.io.*;
import java.awt.*;
import java.util.Vector;
import ca.mcgill.sable.util.*;
import ca.mcgill.sable.sablecc.node.*;
import ca.mcgill.sable.sablecc.analysis.*;
import ca.mcgill.sable.sablecc.lexer.*;
import ca.mcgill.sable.sablecc.parser.*;

public class SableCC
{
    private static void displayCopyright()
    {
        System.out.println();
// $Format: "        System.out.println(\"SableCC version $ProjectVersion$\");"$
        System.out.println("SableCC version 2.8");
        System.out.println("Copyright (C) 1997, 1998, 1999 Etienne Gagnon (gagnon@sable.mcgill.ca).");
        System.out.println("All rights reserved.");
        System.out.println();
        System.out.println("This software comes with ABSOLUTELY NO WARRANTY.  This is free software,");
        System.out.println("and you are welcome to redistribute it under certain conditions.");
        System.out.println();
        System.out.println("Type 'java SableCC -license' to view the complete copyright notice and");
        System.out.println("license.");
        System.out.println();
    }

    public static void main(String[] arguments)
    {
        if(arguments.length > 1)
        {
            displayCopyright();
            System.out.println("Usage:");
            System.out.println("  java SableCC [filename]");
            System.out.println("  java SableCC -license");
            System.exit(1);
        }

        if((arguments.length == 1) && (arguments[0].equals("-license")))
        {
            new DisplayLicense();
            System.exit(0);
        }

        try
        {
            displayCopyright();

            // Get the grammar description file

            File in;
            File dir;

            if(arguments.length == 1)
            {
                in = new File(arguments[0]);
            }
            else
            {
                FileDialog dlg = new FileDialog(new Frame(), "Select Grammar File",
                    FileDialog.LOAD);

                dlg.show();

                if(dlg.getFile() == null)
                {
                    System.exit(1);
                }

                in = new File(dlg.getDirectory(), dlg.getFile());
            }

            in = new File(in.getAbsolutePath());
            dir = new File(in.getParent());

            FileReader temp;

            // Build the AST
            Start tree = new Parser(new Lexer(new BufferedReader(
                temp = new FileReader(in)))).parse();

            temp.close();

            System.out.println("Verifying identifiers.");
            ResolveIds ids = new ResolveIds(dir);
            tree.apply(ids);

            // Create the node.* and analysis.* files
            System.out.println("Generating token classes.");
            tree.apply(new GenTokens(ids));

            System.out.println("Generating production classes.");
            tree.apply(new GenProds(ids));

            System.out.println("Generating alternative classes.");
            tree.apply(new GenAlts(ids));

            System.out.println("Generating analysis classes.");
            tree.apply(new GenAnalyses(ids));

            System.out.println("Generating utility classes.");
            tree.apply(new GenUtils(ids));

            try
            {
                System.out.println("Generating the lexer.");
                tree.apply(new GenLexer(ids));
            }
            catch(Exception e)
            {
                System.out.println(e.getMessage());
            }

            try
            {
                System.out.println("Generating the parser.");
                tree.apply(new GenParser(ids));
            }
            catch(Exception e)
            {
                System.out.println(e.getMessage());
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
            System.exit(1);
        }
        catch(Throwable e)
        {
            System.out.println(e);
            System.exit(1);
        }
        finally
        {
            System.exit(0);
        }
    }
}

