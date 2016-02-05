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

import ca.mcgill.sable.sablecc.util.Switch;
import ca.mcgill.sable.sablecc.node.*;

public interface Analysis extends Switch
{
    Object getIn(Node node);
    void setIn(Node node, Object in);
    Object getOut(Node node);
    void setOut(Node node, Object out);

    void caseGrammar1(Grammar1 node);
    void casePackageOpt1(PackageOpt1 node);
    void casePackageOpt2(PackageOpt2 node);
    void casePackage1(Package1 node);
    void casePkgNameOpt1(PkgNameOpt1 node);
    void casePkgName1(PkgName1 node);
    void casePkgNameTails1(PkgNameTails1 node);
    void casePkgNameTails2(PkgNameTails2 node);
    void casePkgNameTail1(PkgNameTail1 node);
    void casePkgId1(PkgId1 node);
    void casePkgId2(PkgId2 node);
    void casePkgId3(PkgId3 node);
    void casePkgId4(PkgId4 node);
    void casePkgId5(PkgId5 node);
    void casePkgId6(PkgId6 node);
    void casePkgId7(PkgId7 node);
    void casePkgId8(PkgId8 node);
    void casePkgId9(PkgId9 node);
    void casePkgId10(PkgId10 node);
    void caseHelpersOpt1(HelpersOpt1 node);
    void caseHelpersOpt2(HelpersOpt2 node);
    void caseHelpers1(Helpers1 node);
    void caseHelperDefs1(HelperDefs1 node);
    void caseHelperDefs2(HelperDefs2 node);
    void caseHelperDef1(HelperDef1 node);
    void caseStatesOpt1(StatesOpt1 node);
    void caseStatesOpt2(StatesOpt2 node);
    void caseStates1(States1 node);
    void caseIdListOpt1(IdListOpt1 node);
    void caseIdList1(IdList1 node);
    void caseIdListTails1(IdListTails1 node);
    void caseIdListTails2(IdListTails2 node);
    void caseIdListTail1(IdListTail1 node);
    void caseTokensOpt1(TokensOpt1 node);
    void caseTokensOpt2(TokensOpt2 node);
    void caseTokens1(Tokens1 node);
    void caseTokenDefs1(TokenDefs1 node);
    void caseTokenDefs2(TokenDefs2 node);
    void caseTokenDef1(TokenDef1 node);
    void caseStateListOpt1(StateListOpt1 node);
    void caseStateListOpt2(StateListOpt2 node);
    void caseStateList1(StateList1 node);
    void caseStateListTails1(StateListTails1 node);
    void caseStateListTails2(StateListTails2 node);
    void caseStateListTail1(StateListTail1 node);
    void caseTransitionOpt1(TransitionOpt1 node);
    void caseTransitionOpt2(TransitionOpt2 node);
    void caseTransition1(Transition1 node);
    void caseIgnTokensOpt1(IgnTokensOpt1 node);
    void caseIgnTokensOpt2(IgnTokensOpt2 node);
    void caseIgnTokens1(IgnTokens1 node);
    void caseLookAheadOpt1(LookAheadOpt1 node);
    void caseLookAheadOpt2(LookAheadOpt2 node);
    void caseLookAhead1(LookAhead1 node);
    void caseRegExp1(RegExp1 node);
    void caseRegExpTails1(RegExpTails1 node);
    void caseRegExpTails2(RegExpTails2 node);
    void caseRegExpTail1(RegExpTail1 node);
    void caseConcat1(Concat1 node);
    void caseUnExps1(UnExps1 node);
    void caseUnExps2(UnExps2 node);
    void caseUnExp1(UnExp1 node);
    void caseBasic1(Basic1 node);
    void caseBasic2(Basic2 node);
    void caseBasic3(Basic3 node);
    void caseBasic4(Basic4 node);
    void caseBasic5(Basic5 node);
    void casePChar1(PChar1 node);
    void casePChar2(PChar2 node);
    void casePChar3(PChar3 node);
    void casePSet1(PSet1 node);
    void casePSet2(PSet2 node);
    void caseUnOpOpt1(UnOpOpt1 node);
    void caseUnOpOpt2(UnOpOpt2 node);
    void caseUnOp1(UnOp1 node);
    void caseUnOp2(UnOp2 node);
    void caseUnOp3(UnOp3 node);
    void caseBinOp1(BinOp1 node);
    void caseBinOp2(BinOp2 node);
    void caseProductionsOpt1(ProductionsOpt1 node);
    void caseProductionsOpt2(ProductionsOpt2 node);
    void caseProductions1(Productions1 node);
    void caseProds1(Prods1 node);
    void caseProds2(Prods2 node);
    void caseProd1(Prod1 node);
    void caseAlts1(Alts1 node);
    void caseAltsTails1(AltsTails1 node);
    void caseAltsTails2(AltsTails2 node);
    void caseAltsTail1(AltsTail1 node);
    void caseAlt1(Alt1 node);
    void caseAlt2(Alt2 node);
    void caseAltNameOpt1(AltNameOpt1 node);
    void caseAltNameOpt2(AltNameOpt2 node);
    void caseAltName1(AltName1 node);
    void caseElems1(Elems1 node);
    void caseElems2(Elems2 node);
    void caseElem1(Elem1 node);
    void caseElemNameOpt1(ElemNameOpt1 node);
    void caseElemNameOpt2(ElemNameOpt2 node);
    void caseElemName1(ElemName1 node);
    void caseSpecifierOpt1(SpecifierOpt1 node);
    void caseSpecifierOpt2(SpecifierOpt2 node);
    void caseSpecifier1(Specifier1 node);
    void caseSpecifier2(Specifier2 node);
    void caseStart1(Start1 node);
    void caseTPackage(TPackage node);
    void caseTStates(TStates node);
    void caseTHelpers(THelpers node);
    void caseTTokens(TTokens node);
    void caseTIgnored(TIgnored node);
    void caseTProductions(TProductions node);
    void caseTTokenSpecifier(TTokenSpecifier node);
    void caseTProductionSpecifier(TProductionSpecifier node);
    void caseTDot(TDot node);
    void caseTDDot(TDDot node);
    void caseTSemicolon(TSemicolon node);
    void caseTEqual(TEqual node);
    void caseTLBkt(TLBkt node);
    void caseTRBkt(TRBkt node);
    void caseTLPar(TLPar node);
    void caseTRPar(TRPar node);
    void caseTLBrace(TLBrace node);
    void caseTRBrace(TRBrace node);
    void caseTPlus(TPlus node);
    void caseTMinus(TMinus node);
    void caseTQMark(TQMark node);
    void caseTStar(TStar node);
    void caseTBar(TBar node);
    void caseTComma(TComma node);
    void caseTSlash(TSlash node);
    void caseTArrow(TArrow node);
    void caseTColon(TColon node);
    void caseTId(TId node);
    void caseTChar(TChar node);
    void caseTDecChar(TDecChar node);
    void caseTHexChar(THexChar node);
    void caseTString(TString node);
    void caseTPkgId(TPkgId node);
    void caseTBlank(TBlank node);
    void caseTComment(TComment node);
    void caseEOF(EOF node);
}

