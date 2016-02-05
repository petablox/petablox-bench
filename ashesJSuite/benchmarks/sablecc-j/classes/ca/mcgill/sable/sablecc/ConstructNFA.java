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

public class ConstructNFA extends DepthFirstAdapter
{
    private ResolveIds ids;

    private int i;

    ConstructNFA(ResolveIds ids)
    {
        this.ids = ids;
    }

    public void outStart1(Start1 node)
    {
        setOut(node, getOut(node.getNode1()));

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
    }

    public void outGrammar1(Grammar1 node)
    {
        setOut(node, getOut(node.getNode4()));

        // free memory
        if(getOut(node.getNode4()) != null) setOut(node.getNode4(), null);
    }

    public void outHelperDef1(HelperDef1 node)
    {
        setOut(node, getOut(node.getNode3()));

        // free memory
        if(getOut(node.getNode3()) != null) setOut(node.getNode3(), null);
    }

    public void outTokensOpt1(TokensOpt1 node)
    {
        setOut(node, getOut(node.getNode1()));

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
    }

    public void outTokens1(Tokens1 node)
    {
        setOut(node, getOut(node.getNode2()));

        // free memory
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outTokenDefs1(TokenDefs1 node)
    {
        NFA n1 = (NFA) getOut(node.getNode1());
        NFA n2 = (NFA) getOut(node.getNode2());

        if(n1 == null)
        {
            setOut(node, n2);
        }
        else if(n2 == null)
        {
            setOut(node, n1);
        }
        else
        {
            setOut(node, n1.merge(n2));
        }

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outTokenDef1(TokenDef1 node)
    {
        Object o1 = getOut(node.getNode4());
        Object o2 = getOut(node.getNode5());

        NFA n1 = (o1 instanceof NFA) ? (NFA) o1 : new NFA((CharSet) o1);
        String name = (String) ids.names.get(node);

        if(o2 != null)
        {
            NFA n2 = (o2 instanceof NFA) ? (NFA) o2 : new NFA((CharSet) o2);

            NFA n3 = n1.concatenate(n2);

            n1.states[n1.states.length - 1].accept = name + "_Token";
            n2.states[n2.states.length - 1].accept = name + "_LookAhead";
            n3.states[n3.states.length - 1].accept = name;

            setOut(node, n1.merge(n2.merge(n3)));
        }
        else
        {
            n1.states[n1.states.length - 1].accept = name;
            setOut(node, n1);
        }

        // free memory
        if(getOut(node.getNode4()) != null) setOut(node.getNode4(), null);
        if(getOut(node.getNode5()) != null) setOut(node.getNode5(), null);
    }

    public void outLookAheadOpt1(LookAheadOpt1 node)
    {
        setOut(node, getOut(node.getNode1()));

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
    }

    public void outLookAhead1(LookAhead1 node)
    {
        setOut(node, getOut(node.getNode2()));

        // free memory
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outRegExp1(RegExp1 node)
    {
        Object o1 = getOut(node.getNode1());
        Object o2 = getOut(node.getNode2());

        if(o2 != null)
        {
            NFA n1 = (o1 instanceof NFA) ? (NFA) o1 : new NFA((CharSet) o1);
            NFA n2 = (o2 instanceof NFA) ? (NFA) o2 : new NFA((CharSet) o2);

            setOut(node, n1.alternate(n2));
        }
        else
        {
            setOut(node, o1);
        }

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outRegExpTails1(RegExpTails1 node)
    {
        Object o1 = getOut(node.getNode1());
        Object o2 = getOut(node.getNode2());

        if(o2 != null)
        {
            NFA n1 = (o1 instanceof NFA) ? (NFA) o1 : new NFA((CharSet) o1);
            NFA n2 = (o2 instanceof NFA) ? (NFA) o2 : new NFA((CharSet) o2);

            setOut(node, n1.alternate(n2));
        }
        else
        {
            setOut(node, o1);
        }

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outRegExpTail1(RegExpTail1 node)
    {
        setOut(node, getOut(node.getNode2()));

        // free memory
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outConcat1(Concat1 node)
    {
        Object o = getOut(node.getNode1());

        if(o == null)
        {
            setOut(node, new NFA());
        }
        else
        {
            setOut(node, o);
        }

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
    }

    public void outUnExps1(UnExps1 node)
    {
        Object o1 = getOut(node.getNode1());
        Object o2 = getOut(node.getNode2());

        if(o2 != null)
        {
            NFA n1 = (o1 instanceof NFA) ? (NFA) o1 : new NFA((CharSet) o1);
            NFA n2 = (o2 instanceof NFA) ? (NFA) o2 : new NFA((CharSet) o2);

            setOut(node, n1.concatenate(n2));
        }
        else
        {
            setOut(node, o1);
        }

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outUnExp1(UnExp1 node)
    {
        Object o = getOut(node.getNode1());
        char c = ((Character) getOut(node.getNode2())).charValue();

        switch(c)
        {
        case '*':
            {
                NFA n = (o instanceof NFA) ? (NFA) o : new NFA((CharSet) o);
                setOut(node, n.zeroOrMore());
            }
            break;
        case '?':
            {
                NFA n = (o instanceof NFA) ? (NFA) o : new NFA((CharSet) o);
                setOut(node, n.zeroOrOne());
            }
            break;
        case '+':
            {
                NFA n = (o instanceof NFA) ? (NFA) o : new NFA((CharSet) o);
                setOut(node, n.oneOrMore());
            }
            break;
        default:
            {
                setOut(node, o);
            }
            break;
        }

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outBasic1(Basic1 node)
    {
        char c = ((Character) getOut(node.getNode1())).charValue();
        setOut(node, new CharSet(c));

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
    }

    public void outBasic2(Basic2 node)
    {
        setOut(node, getOut(node.getNode1()));

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
    }

    public void outBasic3(Basic3 node)
    {
        String s = node.getNode1().getText();
        s = s.substring(1, s.length() -1);

        setOut(node, new NFA(s));
    }

    public void outBasic4(Basic4 node)
    {
        Object o = getOut((Node) ids.helpers.get(node.getNode1().getText()));

        if(o instanceof NFA)
        {
            setOut(node, ((NFA) o).clone());
        }
        else
        {
            setOut(node, ((CharSet) o).clone());
        }
    }

    public void outBasic5(Basic5 node)
    {
        setOut(node, getOut(node.getNode2()));

        // free memory
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
    }

    public void outPChar1(PChar1 node)
    {
        setOut(node, new Character(node.getNode1().getText().charAt(1)));
    }

    public void outPChar2(PChar2 node)
    {
        setOut(node, new Character((char) Integer.parseInt(node.getNode1().getText())));
    }

    public void outPChar3(PChar3 node)
    {
        setOut(node, new Character((char)
            Integer.parseInt(node.getNode1().getText().substring(2), 16)));
    }

    public void outPSet1(PSet1 node)
    {
        try
        {
            CharSet cs1 = (CharSet) getOut(node.getNode2());
            CharSet cs2 = (CharSet) getOut(node.getNode4());
            char binop = ((Character) getOut(node.getNode3())).charValue();

            switch(binop)
            {
            case '+':
                {
                    setOut(node, cs1.union(cs2));
                }
                break;
            case '-':
                {
                    setOut(node, cs1.diff(cs2));
                }
                break;
            }
        }
        catch(Exception e)
        {
            throw new RuntimeException(node + " is invalid.");
        }

        // free memory
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
        if(getOut(node.getNode3()) != null) setOut(node.getNode3(), null);
        if(getOut(node.getNode4()) != null) setOut(node.getNode4(), null);
    }

    public void outPSet2(PSet2 node)
    {
        char c1 = ((Character) getOut(node.getNode2())).charValue();
        char c2 = ((Character) getOut(node.getNode4())).charValue();

        if(c1 > c2)
        {
            throw new RuntimeException(node + " is invalid.");
        }

        setOut(node, new CharSet(c1, c2));

        // free memory
        if(getOut(node.getNode2()) != null) setOut(node.getNode2(), null);
        if(getOut(node.getNode4()) != null) setOut(node.getNode4(), null);
    }

    public void outUnOpOpt1(UnOpOpt1 node)
    {
        setOut(node, getOut(node.getNode1()));

        // free memory
        if(getOut(node.getNode1()) != null) setOut(node.getNode1(), null);
    }

    public void outUnOpOpt2(UnOpOpt2 node)
    {
        setOut(node, new Character(' '));
    }

    public void outUnOp1(UnOp1 node)
    {
        setOut(node, new Character('*'));
    }

    public void outUnOp2(UnOp2 node)
    {
        setOut(node, new Character('?'));
    }

    public void outUnOp3(UnOp3 node)
    {
        setOut(node, new Character('+'));
    }

    public void outBinOp1(BinOp1 node)
    {
        setOut(node, new Character('+'));
    }

    public void outBinOp2(BinOp2 node)
    {
        setOut(node, new Character('-'));
    }
}


