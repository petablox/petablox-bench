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

import java.io.*;
import ca.mcgill.sable.util.*;

public class MacroExpander
{
    private static final String MACRO = "Macro:";
    private static final String lineSeparator = System.getProperty("line.separator");

    private Map macros = new TypedSplayTreeMap(
        StringComparator.instance,
        StringCast.instance,
        ListCast.instance);

    public MacroExpander(Reader in) throws IOException
    {
        BufferedReader br = new BufferedReader(in);
        while(readInMacro(br));
        in.close();
    }

    private boolean readInMacro(BufferedReader in) throws IOException
    {
        String line;
        while((line = in.readLine()) != null)
        {
            if(line.startsWith(MACRO))
            {
                String name = line.substring(MACRO.length());
                List macro = new TypedLinkedList(StringCast.instance);

                while((line = in.readLine()) != null)
                {
                    if(line.equals("$"))
                    {
                        macros.put(name, macro);
                        return true;
                    }

                    macro.add(line);
                }

                macros.put(name, macro);
                return false;
            }
        }

        return false;
    }

    public String toString()
    {
        return this.getClass().getName() + macros;
    }

    public void apply(BufferedWriter out, String macroName) throws IOException
    {
        apply(out, macroName, null);
    }

    public void apply(BufferedWriter out, String macroName, String[] arguments) throws IOException
    {
        List macro = (List) macros.get(macroName);

        for(ListIterator li = macro.listIterator(); li.hasNext();)
        {
            if(li.nextIndex() != 0)
            {
                out.newLine();
            }

            String line = (String) li.next();
            char c;

            for(int i = 0; i < line.length(); i++)
            {
                if((c = line.charAt(i)) == '$')
                {
                    StringBuffer index = new StringBuffer();

                    while((c = line.charAt(++i)) != '$')
                    {
                        index.append(c);
                    }

                    if(index.length() == 0)
                    {
                        out.write('$');
                    }
                    else
                    {
                        out.write(arguments[Integer.parseInt(index.toString())]);
                    }
                }
                else
                {
                    out.write(c);
                }
            }
        }
    }
}


