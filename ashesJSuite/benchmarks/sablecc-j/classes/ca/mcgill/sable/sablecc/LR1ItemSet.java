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
import java.util.Vector;
import ca.mcgill.sable.util.Comparable;

final class LR1ItemSet implements Cloneable, Comparable
{
    private final SplayTreeMap items;
    private int hashCode = 0;

    LR1ItemSet()
    {
        this.items = new SplayTreeMap();
    }

    private LR1ItemSet(LR1ItemSet set)
    {
        this.items = (SplayTreeMap) set.items.clone();
        this.hashCode = set.hashCode;
    }

    void set(LR1Item item)
    {
        if(items.put(item, item) == null)
        {
            hashCode += item.hashCode();
            modified_ = true;
        }
    }

    boolean get(LR1Item item)
    {
        return items.get(item) != null;
    }


    LR1Item[] items_;
    boolean modified_ = true;

    private void computeArray()
    {
        Vector itemVector = new Vector(0);

        for(Iterator e = items.keySet().iterator(); e.hasNext();)
        {
            itemVector.addElement(e.next());
        }

        items_ = new LR1Item[itemVector.size()];
        itemVector.copyInto(items_);
        modified_ = false;
    }

    LR1Item[] items()
    {
        if(modified_)
        {
            computeArray();
        }

        return items_;
    }

    public String toString()
    {
        String nl = System.getProperty("line.separator");

        StringBuffer result = new StringBuffer();
        result.append("{" + nl + "\t");

        Production[] productions = Production.productions();
        Symbol[] terminals = Symbol.terminals();
        boolean comma = false;
        for(int i = 0; i < productions.length; i++)
        {
            int rightsideLength = productions[i].rightside().length;

            for(int j = 0; j <= rightsideLength; j++)
            {
                LR0Item lr0Item = new LR0Item(productions[i].index, j);

                for(int k = 0; k < terminals.length; k++)
                {
                    LR1Item item = new LR1Item(lr0Item, terminals[k].index);
                    if(get(item))
                    {
                        if(comma)
                        {
                            result.append("," + nl + "\t");
                        }
                        else
                        {
                            comma = true;
                        }

                        result.append(item);
                    }
                }
            }

        }

        result.append(nl + "}");
        return result.toString();
    }

    public Object clone()
    {
        return new LR1ItemSet(this);
    }

    public boolean equals(Object obj)
    {
        if((obj == null) ||
            (obj.getClass() != this.getClass()))
        {
            return false;
        }

        LR1ItemSet set = (LR1ItemSet) obj;

        if(set.items.size() != items.size())
        {
            return false;
        }

        for(Iterator e = items.keySet().iterator(); e.hasNext();)
        {
            if(!set.get((LR1Item) e.next()))
            {
                return false;
            }
        }

        return true;
    }

    public int hashCode()
    {
        return hashCode;
    }

    public int compareTo(Object object)
    {
        LR1ItemSet set = (LR1ItemSet) object;

        int result = items.size() - set.items.size();

        if(result == 0)
        {
            Iterator e = items.keySet().iterator();
            Iterator f = set.items.keySet().iterator();

            while(e.hasNext() && f.hasNext() && (result == 0))
            {
                result = ((LR1Item) e.next()).compareTo(f.next());
            }

            if(result == 0)
            {
                if(e.hasNext())
                {
                    return 1;
                }

                if(f.hasNext())
                {
                    return -1;
                }
            }
        }

        return result;
    }
}

