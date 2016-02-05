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

package ca.mcgill.sable.sablecc.analysis;

import ca.mcgill.sable.sablecc.node.*;
import ca.mcgill.sable.util.*;
import ca.mcgill.sable.sablecc.*;

public class AnalysisAdapter implements Analysis
{
    private Map in;
    private Map out;

    public Object getIn(Node node)
    {
        if(in == null)
        {
            return null;
        }

       return in.get(node);
    }

    public void setIn(Node node, Object in)
    {
        if(this.in == null)
        {
            this.in = new TypedSplayTreeMap(
                NodeComparator.instance,
                NodeCast.instance,
                NoCast.instance);
        }

        if(in != null)
        {
            this.in.put(node, in);
        }
        else
        {
            this.in.remove(node);
        }
    }

    public Object getOut(Node node)
    {
        if(out == null)
        {
            return null;
        }

        return out.get(node);
    }

    public void setOut(Node node, Object out)
    {
        if(this.out == null)
        {
            this.out = new TypedSplayTreeMap(
                NodeComparator.instance,
                NodeCast.instance,
                NoCast.instance);
        }

        if(out != null)
        {
            this.out.put(node, out);
        }
        else
        {
            this.out.remove(node);
        }
    }

    public void defaultCase(Node node)
    {
    }

    public void caseGrammar1(Grammar1 node)
    {
        defaultCase(node);
    }

    public void casePackageOpt1(PackageOpt1 node)
    {
        defaultCase(node);
    }

    public void casePackageOpt2(PackageOpt2 node)
    {
        defaultCase(node);
    }

    public void casePackage1(Package1 node)
    {
        defaultCase(node);
    }

    public void casePkgNameOpt1(PkgNameOpt1 node)
    {
        defaultCase(node);
    }

    public void casePkgName1(PkgName1 node)
    {
        defaultCase(node);
    }

    public void casePkgNameTails1(PkgNameTails1 node)
    {
        defaultCase(node);
    }

    public void casePkgNameTails2(PkgNameTails2 node)
    {
        defaultCase(node);
    }

    public void casePkgNameTail1(PkgNameTail1 node)
    {
        defaultCase(node);
    }

    public void casePkgId1(PkgId1 node)
    {
        defaultCase(node);
    }

    public void casePkgId2(PkgId2 node)
    {
        defaultCase(node);
    }

    public void casePkgId3(PkgId3 node)
    {
        defaultCase(node);
    }

    public void casePkgId4(PkgId4 node)
    {
        defaultCase(node);
    }

    public void casePkgId5(PkgId5 node)
    {
        defaultCase(node);
    }

    public void casePkgId6(PkgId6 node)
    {
        defaultCase(node);
    }

    public void casePkgId7(PkgId7 node)
    {
        defaultCase(node);
    }

    public void casePkgId8(PkgId8 node)
    {
        defaultCase(node);
    }

    public void casePkgId9(PkgId9 node)
    {
        defaultCase(node);
    }

    public void casePkgId10(PkgId10 node)
    {
        defaultCase(node);
    }

    public void caseHelpersOpt1(HelpersOpt1 node)
    {
        defaultCase(node);
    }

    public void caseHelpersOpt2(HelpersOpt2 node)
    {
        defaultCase(node);
    }

    public void caseHelpers1(Helpers1 node)
    {
        defaultCase(node);
    }

    public void caseHelperDefs1(HelperDefs1 node)
    {
        defaultCase(node);
    }

    public void caseHelperDefs2(HelperDefs2 node)
    {
        defaultCase(node);
    }

    public void caseHelperDef1(HelperDef1 node)
    {
        defaultCase(node);
    }

    public void caseStatesOpt1(StatesOpt1 node)
    {
        defaultCase(node);
    }

    public void caseStatesOpt2(StatesOpt2 node)
    {
        defaultCase(node);
    }

    public void caseStates1(States1 node)
    {
        defaultCase(node);
    }

    public void caseIdListOpt1(IdListOpt1 node)
    {
        defaultCase(node);
    }

    public void caseIdList1(IdList1 node)
    {
        defaultCase(node);
    }

    public void caseIdListTails1(IdListTails1 node)
    {
        defaultCase(node);
    }

    public void caseIdListTails2(IdListTails2 node)
    {
        defaultCase(node);
    }

    public void caseIdListTail1(IdListTail1 node)
    {
        defaultCase(node);
    }

    public void caseTokensOpt1(TokensOpt1 node)
    {
        defaultCase(node);
    }

    public void caseTokensOpt2(TokensOpt2 node)
    {
        defaultCase(node);
    }

    public void caseTokens1(Tokens1 node)
    {
        defaultCase(node);
    }

    public void caseTokenDefs1(TokenDefs1 node)
    {
        defaultCase(node);
    }

    public void caseTokenDefs2(TokenDefs2 node)
    {
        defaultCase(node);
    }

    public void caseTokenDef1(TokenDef1 node)
    {
        defaultCase(node);
    }

    public void caseStateListOpt1(StateListOpt1 node)
    {
        defaultCase(node);
    }

    public void caseStateListOpt2(StateListOpt2 node)
    {
        defaultCase(node);
    }

    public void caseStateList1(StateList1 node)
    {
        defaultCase(node);
    }

    public void caseStateListTails1(StateListTails1 node)
    {
        defaultCase(node);
    }

    public void caseStateListTails2(StateListTails2 node)
    {
        defaultCase(node);
    }

    public void caseStateListTail1(StateListTail1 node)
    {
        defaultCase(node);
    }

    public void caseTransitionOpt1(TransitionOpt1 node)
    {
        defaultCase(node);
    }

    public void caseTransitionOpt2(TransitionOpt2 node)
    {
        defaultCase(node);
    }

    public void caseTransition1(Transition1 node)
    {
        defaultCase(node);
    }

    public void caseIgnTokensOpt1(IgnTokensOpt1 node)
    {
        defaultCase(node);
    }

    public void caseIgnTokensOpt2(IgnTokensOpt2 node)
    {
        defaultCase(node);
    }

    public void caseIgnTokens1(IgnTokens1 node)
    {
        defaultCase(node);
    }

    public void caseLookAheadOpt1(LookAheadOpt1 node)
    {
        defaultCase(node);
    }

    public void caseLookAheadOpt2(LookAheadOpt2 node)
    {
        defaultCase(node);
    }

    public void caseLookAhead1(LookAhead1 node)
    {
        defaultCase(node);
    }

    public void caseRegExp1(RegExp1 node)
    {
        defaultCase(node);
    }

    public void caseRegExpTails1(RegExpTails1 node)
    {
        defaultCase(node);
    }

    public void caseRegExpTails2(RegExpTails2 node)
    {
        defaultCase(node);
    }

    public void caseRegExpTail1(RegExpTail1 node)
    {
        defaultCase(node);
    }

    public void caseConcat1(Concat1 node)
    {
        defaultCase(node);
    }

    public void caseUnExps1(UnExps1 node)
    {
        defaultCase(node);
    }

    public void caseUnExps2(UnExps2 node)
    {
        defaultCase(node);
    }

    public void caseUnExp1(UnExp1 node)
    {
        defaultCase(node);
    }

    public void caseBasic1(Basic1 node)
    {
        defaultCase(node);
    }

    public void caseBasic2(Basic2 node)
    {
        defaultCase(node);
    }

    public void caseBasic3(Basic3 node)
    {
        defaultCase(node);
    }

    public void caseBasic4(Basic4 node)
    {
        defaultCase(node);
    }

    public void caseBasic5(Basic5 node)
    {
        defaultCase(node);
    }

    public void casePChar1(PChar1 node)
    {
        defaultCase(node);
    }

    public void casePChar2(PChar2 node)
    {
        defaultCase(node);
    }

    public void casePChar3(PChar3 node)
    {
        defaultCase(node);
    }

    public void casePSet1(PSet1 node)
    {
        defaultCase(node);
    }

    public void casePSet2(PSet2 node)
    {
        defaultCase(node);
    }

    public void caseUnOpOpt1(UnOpOpt1 node)
    {
        defaultCase(node);
    }

    public void caseUnOpOpt2(UnOpOpt2 node)
    {
        defaultCase(node);
    }

    public void caseUnOp1(UnOp1 node)
    {
        defaultCase(node);
    }

    public void caseUnOp2(UnOp2 node)
    {
        defaultCase(node);
    }

    public void caseUnOp3(UnOp3 node)
    {
        defaultCase(node);
    }

    public void caseBinOp1(BinOp1 node)
    {
        defaultCase(node);
    }

    public void caseBinOp2(BinOp2 node)
    {
        defaultCase(node);
    }

    public void caseProductionsOpt1(ProductionsOpt1 node)
    {
        defaultCase(node);
    }

    public void caseProductionsOpt2(ProductionsOpt2 node)
    {
        defaultCase(node);
    }

    public void caseProductions1(Productions1 node)
    {
        defaultCase(node);
    }

    public void caseProds1(Prods1 node)
    {
        defaultCase(node);
    }

    public void caseProds2(Prods2 node)
    {
        defaultCase(node);
    }

    public void caseProd1(Prod1 node)
    {
        defaultCase(node);
    }

    public void caseAlts1(Alts1 node)
    {
        defaultCase(node);
    }

    public void caseAltsTails1(AltsTails1 node)
    {
        defaultCase(node);
    }

    public void caseAltsTails2(AltsTails2 node)
    {
        defaultCase(node);
    }

    public void caseAltsTail1(AltsTail1 node)
    {
        defaultCase(node);
    }

    public void caseAlt1(Alt1 node)
    {
        defaultCase(node);
    }

    public void caseAlt2(Alt2 node)
    {
        defaultCase(node);
    }

    public void caseAltNameOpt1(AltNameOpt1 node)
    {
        defaultCase(node);
    }

    public void caseAltNameOpt2(AltNameOpt2 node)
    {
        defaultCase(node);
    }

    public void caseAltName1(AltName1 node)
    {
        defaultCase(node);
    }

    public void caseElems1(Elems1 node)
    {
        defaultCase(node);
    }

    public void caseElems2(Elems2 node)
    {
        defaultCase(node);
    }

    public void caseElem1(Elem1 node)
    {
        defaultCase(node);
    }

    public void caseElemNameOpt1(ElemNameOpt1 node)
    {
        defaultCase(node);
    }

    public void caseElemNameOpt2(ElemNameOpt2 node)
    {
        defaultCase(node);
    }

    public void caseElemName1(ElemName1 node)
    {
        defaultCase(node);
    }

    public void caseSpecifierOpt1(SpecifierOpt1 node)
    {
        defaultCase(node);
    }

    public void caseSpecifierOpt2(SpecifierOpt2 node)
    {
        defaultCase(node);
    }

    public void caseSpecifier1(Specifier1 node)
    {
        defaultCase(node);
    }

    public void caseSpecifier2(Specifier2 node)
    {
        defaultCase(node);
    }

    public void caseStart1(Start1 node)
    {
        defaultCase(node);
    }

    public void caseTPackage(TPackage node)
    {
        defaultCase(node);
    }

    public void caseTStates(TStates node)
    {
        defaultCase(node);
    }

    public void caseTHelpers(THelpers node)
    {
        defaultCase(node);
    }

    public void caseTTokens(TTokens node)
    {
        defaultCase(node);
    }

    public void caseTIgnored(TIgnored node)
    {
        defaultCase(node);
    }

    public void caseTProductions(TProductions node)
    {
        defaultCase(node);
    }

    public void caseTTokenSpecifier(TTokenSpecifier node)
    {
        defaultCase(node);
    }

    public void caseTProductionSpecifier(TProductionSpecifier node)
    {
        defaultCase(node);
    }

    public void caseTDot(TDot node)
    {
        defaultCase(node);
    }

    public void caseTDDot(TDDot node)
    {
        defaultCase(node);
    }

    public void caseTSemicolon(TSemicolon node)
    {
        defaultCase(node);
    }

    public void caseTEqual(TEqual node)
    {
        defaultCase(node);
    }

    public void caseTLBkt(TLBkt node)
    {
        defaultCase(node);
    }

    public void caseTRBkt(TRBkt node)
    {
        defaultCase(node);
    }

    public void caseTLPar(TLPar node)
    {
        defaultCase(node);
    }

    public void caseTRPar(TRPar node)
    {
        defaultCase(node);
    }

    public void caseTLBrace(TLBrace node)
    {
        defaultCase(node);
    }

    public void caseTRBrace(TRBrace node)
    {
        defaultCase(node);
    }

    public void caseTPlus(TPlus node)
    {
        defaultCase(node);
    }

    public void caseTMinus(TMinus node)
    {
        defaultCase(node);
    }

    public void caseTQMark(TQMark node)
    {
        defaultCase(node);
    }

    public void caseTStar(TStar node)
    {
        defaultCase(node);
    }

    public void caseTBar(TBar node)
    {
        defaultCase(node);
    }

    public void caseTComma(TComma node)
    {
        defaultCase(node);
    }

    public void caseTSlash(TSlash node)
    {
        defaultCase(node);
    }

    public void caseTArrow(TArrow node)
    {
        defaultCase(node);
    }

    public void caseTColon(TColon node)
    {
        defaultCase(node);
    }

    public void caseTId(TId node)
    {
        defaultCase(node);
    }

    public void caseTChar(TChar node)
    {
        defaultCase(node);
    }

    public void caseTDecChar(TDecChar node)
    {
        defaultCase(node);
    }

    public void caseTHexChar(THexChar node)
    {
        defaultCase(node);
    }

    public void caseTString(TString node)
    {
        defaultCase(node);
    }

    public void caseTPkgId(TPkgId node)
    {
        defaultCase(node);
    }

    public void caseTBlank(TBlank node)
    {
        defaultCase(node);
    }

    public void caseTComment(TComment node)
    {
        defaultCase(node);
    }

    public void caseEOF(EOF node)
    {
        defaultCase(node);
    }

}

