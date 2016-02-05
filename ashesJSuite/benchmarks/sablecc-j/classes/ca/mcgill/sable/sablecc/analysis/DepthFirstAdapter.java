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

public class DepthFirstAdapter extends AnalysisAdapter
{
    public void inGrammar1(Grammar1 node)
    {
    }

    public void outGrammar1(Grammar1 node)
    {
    }

    public void caseGrammar1(Grammar1 node)
    {
        inGrammar1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);
        node.getNode5().apply(this);
        node.getNode6().apply(this);

        outGrammar1(node);
    }

    public void inPackageOpt1(PackageOpt1 node)
    {
    }

    public void outPackageOpt1(PackageOpt1 node)
    {
    }

    public void casePackageOpt1(PackageOpt1 node)
    {
        inPackageOpt1(node);

        node.getNode1().apply(this);

        outPackageOpt1(node);
    }

    public void inPackageOpt2(PackageOpt2 node)
    {
    }

    public void outPackageOpt2(PackageOpt2 node)
    {
    }

    public void casePackageOpt2(PackageOpt2 node)
    {
        inPackageOpt2(node);


        outPackageOpt2(node);
    }

    public void inPackage1(Package1 node)
    {
    }

    public void outPackage1(Package1 node)
    {
    }

    public void casePackage1(Package1 node)
    {
        inPackage1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outPackage1(node);
    }

    public void inPkgNameOpt1(PkgNameOpt1 node)
    {
    }

    public void outPkgNameOpt1(PkgNameOpt1 node)
    {
    }

    public void casePkgNameOpt1(PkgNameOpt1 node)
    {
        inPkgNameOpt1(node);

        node.getNode1().apply(this);

        outPkgNameOpt1(node);
    }

    public void inPkgName1(PkgName1 node)
    {
    }

    public void outPkgName1(PkgName1 node)
    {
    }

    public void casePkgName1(PkgName1 node)
    {
        inPkgName1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);

        outPkgName1(node);
    }

    public void inPkgNameTails1(PkgNameTails1 node)
    {
    }

    public void outPkgNameTails1(PkgNameTails1 node)
    {
    }

    public void casePkgNameTails1(PkgNameTails1 node)
    {
        inPkgNameTails1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outPkgNameTails1(node);
    }

    public void inPkgNameTails2(PkgNameTails2 node)
    {
    }

    public void outPkgNameTails2(PkgNameTails2 node)
    {
    }

    public void casePkgNameTails2(PkgNameTails2 node)
    {
        inPkgNameTails2(node);


        outPkgNameTails2(node);
    }

    public void inPkgNameTail1(PkgNameTail1 node)
    {
    }

    public void outPkgNameTail1(PkgNameTail1 node)
    {
    }

    public void casePkgNameTail1(PkgNameTail1 node)
    {
        inPkgNameTail1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outPkgNameTail1(node);
    }

    public void inPkgId1(PkgId1 node)
    {
    }

    public void outPkgId1(PkgId1 node)
    {
    }

    public void casePkgId1(PkgId1 node)
    {
        inPkgId1(node);

        node.getNode1().apply(this);

        outPkgId1(node);
    }

    public void inPkgId2(PkgId2 node)
    {
    }

    public void outPkgId2(PkgId2 node)
    {
    }

    public void casePkgId2(PkgId2 node)
    {
        inPkgId2(node);

        node.getNode1().apply(this);

        outPkgId2(node);
    }

    public void inPkgId3(PkgId3 node)
    {
    }

    public void outPkgId3(PkgId3 node)
    {
    }

    public void casePkgId3(PkgId3 node)
    {
        inPkgId3(node);

        node.getNode1().apply(this);

        outPkgId3(node);
    }

    public void inPkgId4(PkgId4 node)
    {
    }

    public void outPkgId4(PkgId4 node)
    {
    }

    public void casePkgId4(PkgId4 node)
    {
        inPkgId4(node);

        node.getNode1().apply(this);

        outPkgId4(node);
    }

    public void inPkgId5(PkgId5 node)
    {
    }

    public void outPkgId5(PkgId5 node)
    {
    }

    public void casePkgId5(PkgId5 node)
    {
        inPkgId5(node);

        node.getNode1().apply(this);

        outPkgId5(node);
    }

    public void inPkgId6(PkgId6 node)
    {
    }

    public void outPkgId6(PkgId6 node)
    {
    }

    public void casePkgId6(PkgId6 node)
    {
        inPkgId6(node);

        node.getNode1().apply(this);

        outPkgId6(node);
    }

    public void inPkgId7(PkgId7 node)
    {
    }

    public void outPkgId7(PkgId7 node)
    {
    }

    public void casePkgId7(PkgId7 node)
    {
        inPkgId7(node);

        node.getNode1().apply(this);

        outPkgId7(node);
    }

    public void inPkgId8(PkgId8 node)
    {
    }

    public void outPkgId8(PkgId8 node)
    {
    }

    public void casePkgId8(PkgId8 node)
    {
        inPkgId8(node);

        node.getNode1().apply(this);

        outPkgId8(node);
    }

    public void inPkgId9(PkgId9 node)
    {
    }

    public void outPkgId9(PkgId9 node)
    {
    }

    public void casePkgId9(PkgId9 node)
    {
        inPkgId9(node);

        node.getNode1().apply(this);

        outPkgId9(node);
    }

    public void inPkgId10(PkgId10 node)
    {
    }

    public void outPkgId10(PkgId10 node)
    {
    }

    public void casePkgId10(PkgId10 node)
    {
        inPkgId10(node);

        node.getNode1().apply(this);

        outPkgId10(node);
    }

    public void inHelpersOpt1(HelpersOpt1 node)
    {
    }

    public void outHelpersOpt1(HelpersOpt1 node)
    {
    }

    public void caseHelpersOpt1(HelpersOpt1 node)
    {
        inHelpersOpt1(node);

        node.getNode1().apply(this);

        outHelpersOpt1(node);
    }

    public void inHelpersOpt2(HelpersOpt2 node)
    {
    }

    public void outHelpersOpt2(HelpersOpt2 node)
    {
    }

    public void caseHelpersOpt2(HelpersOpt2 node)
    {
        inHelpersOpt2(node);


        outHelpersOpt2(node);
    }

    public void inHelpers1(Helpers1 node)
    {
    }

    public void outHelpers1(Helpers1 node)
    {
    }

    public void caseHelpers1(Helpers1 node)
    {
        inHelpers1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outHelpers1(node);
    }

    public void inHelperDefs1(HelperDefs1 node)
    {
    }

    public void outHelperDefs1(HelperDefs1 node)
    {
    }

    public void caseHelperDefs1(HelperDefs1 node)
    {
        inHelperDefs1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outHelperDefs1(node);
    }

    public void inHelperDefs2(HelperDefs2 node)
    {
    }

    public void outHelperDefs2(HelperDefs2 node)
    {
    }

    public void caseHelperDefs2(HelperDefs2 node)
    {
        inHelperDefs2(node);


        outHelperDefs2(node);
    }

    public void inHelperDef1(HelperDef1 node)
    {
    }

    public void outHelperDef1(HelperDef1 node)
    {
    }

    public void caseHelperDef1(HelperDef1 node)
    {
        inHelperDef1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);

        outHelperDef1(node);
    }

    public void inStatesOpt1(StatesOpt1 node)
    {
    }

    public void outStatesOpt1(StatesOpt1 node)
    {
    }

    public void caseStatesOpt1(StatesOpt1 node)
    {
        inStatesOpt1(node);

        node.getNode1().apply(this);

        outStatesOpt1(node);
    }

    public void inStatesOpt2(StatesOpt2 node)
    {
    }

    public void outStatesOpt2(StatesOpt2 node)
    {
    }

    public void caseStatesOpt2(StatesOpt2 node)
    {
        inStatesOpt2(node);


        outStatesOpt2(node);
    }

    public void inStates1(States1 node)
    {
    }

    public void outStates1(States1 node)
    {
    }

    public void caseStates1(States1 node)
    {
        inStates1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);

        outStates1(node);
    }

    public void inIdListOpt1(IdListOpt1 node)
    {
    }

    public void outIdListOpt1(IdListOpt1 node)
    {
    }

    public void caseIdListOpt1(IdListOpt1 node)
    {
        inIdListOpt1(node);

        node.getNode1().apply(this);

        outIdListOpt1(node);
    }

    public void inIdList1(IdList1 node)
    {
    }

    public void outIdList1(IdList1 node)
    {
    }

    public void caseIdList1(IdList1 node)
    {
        inIdList1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outIdList1(node);
    }

    public void inIdListTails1(IdListTails1 node)
    {
    }

    public void outIdListTails1(IdListTails1 node)
    {
    }

    public void caseIdListTails1(IdListTails1 node)
    {
        inIdListTails1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outIdListTails1(node);
    }

    public void inIdListTails2(IdListTails2 node)
    {
    }

    public void outIdListTails2(IdListTails2 node)
    {
    }

    public void caseIdListTails2(IdListTails2 node)
    {
        inIdListTails2(node);


        outIdListTails2(node);
    }

    public void inIdListTail1(IdListTail1 node)
    {
    }

    public void outIdListTail1(IdListTail1 node)
    {
    }

    public void caseIdListTail1(IdListTail1 node)
    {
        inIdListTail1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outIdListTail1(node);
    }

    public void inTokensOpt1(TokensOpt1 node)
    {
    }

    public void outTokensOpt1(TokensOpt1 node)
    {
    }

    public void caseTokensOpt1(TokensOpt1 node)
    {
        inTokensOpt1(node);

        node.getNode1().apply(this);

        outTokensOpt1(node);
    }

    public void inTokensOpt2(TokensOpt2 node)
    {
    }

    public void outTokensOpt2(TokensOpt2 node)
    {
    }

    public void caseTokensOpt2(TokensOpt2 node)
    {
        inTokensOpt2(node);


        outTokensOpt2(node);
    }

    public void inTokens1(Tokens1 node)
    {
    }

    public void outTokens1(Tokens1 node)
    {
    }

    public void caseTokens1(Tokens1 node)
    {
        inTokens1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outTokens1(node);
    }

    public void inTokenDefs1(TokenDefs1 node)
    {
    }

    public void outTokenDefs1(TokenDefs1 node)
    {
    }

    public void caseTokenDefs1(TokenDefs1 node)
    {
        inTokenDefs1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outTokenDefs1(node);
    }

    public void inTokenDefs2(TokenDefs2 node)
    {
    }

    public void outTokenDefs2(TokenDefs2 node)
    {
    }

    public void caseTokenDefs2(TokenDefs2 node)
    {
        inTokenDefs2(node);


        outTokenDefs2(node);
    }

    public void inTokenDef1(TokenDef1 node)
    {
    }

    public void outTokenDef1(TokenDef1 node)
    {
    }

    public void caseTokenDef1(TokenDef1 node)
    {
        inTokenDef1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);
        node.getNode5().apply(this);
        node.getNode6().apply(this);

        outTokenDef1(node);
    }

    public void inStateListOpt1(StateListOpt1 node)
    {
    }

    public void outStateListOpt1(StateListOpt1 node)
    {
    }

    public void caseStateListOpt1(StateListOpt1 node)
    {
        inStateListOpt1(node);

        node.getNode1().apply(this);

        outStateListOpt1(node);
    }

    public void inStateListOpt2(StateListOpt2 node)
    {
    }

    public void outStateListOpt2(StateListOpt2 node)
    {
    }

    public void caseStateListOpt2(StateListOpt2 node)
    {
        inStateListOpt2(node);


        outStateListOpt2(node);
    }

    public void inStateList1(StateList1 node)
    {
    }

    public void outStateList1(StateList1 node)
    {
    }

    public void caseStateList1(StateList1 node)
    {
        inStateList1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);
        node.getNode5().apply(this);

        outStateList1(node);
    }

    public void inStateListTails1(StateListTails1 node)
    {
    }

    public void outStateListTails1(StateListTails1 node)
    {
    }

    public void caseStateListTails1(StateListTails1 node)
    {
        inStateListTails1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outStateListTails1(node);
    }

    public void inStateListTails2(StateListTails2 node)
    {
    }

    public void outStateListTails2(StateListTails2 node)
    {
    }

    public void caseStateListTails2(StateListTails2 node)
    {
        inStateListTails2(node);


        outStateListTails2(node);
    }

    public void inStateListTail1(StateListTail1 node)
    {
    }

    public void outStateListTail1(StateListTail1 node)
    {
    }

    public void caseStateListTail1(StateListTail1 node)
    {
        inStateListTail1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);

        outStateListTail1(node);
    }

    public void inTransitionOpt1(TransitionOpt1 node)
    {
    }

    public void outTransitionOpt1(TransitionOpt1 node)
    {
    }

    public void caseTransitionOpt1(TransitionOpt1 node)
    {
        inTransitionOpt1(node);

        node.getNode1().apply(this);

        outTransitionOpt1(node);
    }

    public void inTransitionOpt2(TransitionOpt2 node)
    {
    }

    public void outTransitionOpt2(TransitionOpt2 node)
    {
    }

    public void caseTransitionOpt2(TransitionOpt2 node)
    {
        inTransitionOpt2(node);


        outTransitionOpt2(node);
    }

    public void inTransition1(Transition1 node)
    {
    }

    public void outTransition1(Transition1 node)
    {
    }

    public void caseTransition1(Transition1 node)
    {
        inTransition1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outTransition1(node);
    }

    public void inIgnTokensOpt1(IgnTokensOpt1 node)
    {
    }

    public void outIgnTokensOpt1(IgnTokensOpt1 node)
    {
    }

    public void caseIgnTokensOpt1(IgnTokensOpt1 node)
    {
        inIgnTokensOpt1(node);

        node.getNode1().apply(this);

        outIgnTokensOpt1(node);
    }

    public void inIgnTokensOpt2(IgnTokensOpt2 node)
    {
    }

    public void outIgnTokensOpt2(IgnTokensOpt2 node)
    {
    }

    public void caseIgnTokensOpt2(IgnTokensOpt2 node)
    {
        inIgnTokensOpt2(node);


        outIgnTokensOpt2(node);
    }

    public void inIgnTokens1(IgnTokens1 node)
    {
    }

    public void outIgnTokens1(IgnTokens1 node)
    {
    }

    public void caseIgnTokens1(IgnTokens1 node)
    {
        inIgnTokens1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);

        outIgnTokens1(node);
    }

    public void inLookAheadOpt1(LookAheadOpt1 node)
    {
    }

    public void outLookAheadOpt1(LookAheadOpt1 node)
    {
    }

    public void caseLookAheadOpt1(LookAheadOpt1 node)
    {
        inLookAheadOpt1(node);

        node.getNode1().apply(this);

        outLookAheadOpt1(node);
    }

    public void inLookAheadOpt2(LookAheadOpt2 node)
    {
    }

    public void outLookAheadOpt2(LookAheadOpt2 node)
    {
    }

    public void caseLookAheadOpt2(LookAheadOpt2 node)
    {
        inLookAheadOpt2(node);


        outLookAheadOpt2(node);
    }

    public void inLookAhead1(LookAhead1 node)
    {
    }

    public void outLookAhead1(LookAhead1 node)
    {
    }

    public void caseLookAhead1(LookAhead1 node)
    {
        inLookAhead1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outLookAhead1(node);
    }

    public void inRegExp1(RegExp1 node)
    {
    }

    public void outRegExp1(RegExp1 node)
    {
    }

    public void caseRegExp1(RegExp1 node)
    {
        inRegExp1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outRegExp1(node);
    }

    public void inRegExpTails1(RegExpTails1 node)
    {
    }

    public void outRegExpTails1(RegExpTails1 node)
    {
    }

    public void caseRegExpTails1(RegExpTails1 node)
    {
        inRegExpTails1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outRegExpTails1(node);
    }

    public void inRegExpTails2(RegExpTails2 node)
    {
    }

    public void outRegExpTails2(RegExpTails2 node)
    {
    }

    public void caseRegExpTails2(RegExpTails2 node)
    {
        inRegExpTails2(node);


        outRegExpTails2(node);
    }

    public void inRegExpTail1(RegExpTail1 node)
    {
    }

    public void outRegExpTail1(RegExpTail1 node)
    {
    }

    public void caseRegExpTail1(RegExpTail1 node)
    {
        inRegExpTail1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outRegExpTail1(node);
    }

    public void inConcat1(Concat1 node)
    {
    }

    public void outConcat1(Concat1 node)
    {
    }

    public void caseConcat1(Concat1 node)
    {
        inConcat1(node);

        node.getNode1().apply(this);

        outConcat1(node);
    }

    public void inUnExps1(UnExps1 node)
    {
    }

    public void outUnExps1(UnExps1 node)
    {
    }

    public void caseUnExps1(UnExps1 node)
    {
        inUnExps1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outUnExps1(node);
    }

    public void inUnExps2(UnExps2 node)
    {
    }

    public void outUnExps2(UnExps2 node)
    {
    }

    public void caseUnExps2(UnExps2 node)
    {
        inUnExps2(node);


        outUnExps2(node);
    }

    public void inUnExp1(UnExp1 node)
    {
    }

    public void outUnExp1(UnExp1 node)
    {
    }

    public void caseUnExp1(UnExp1 node)
    {
        inUnExp1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outUnExp1(node);
    }

    public void inBasic1(Basic1 node)
    {
    }

    public void outBasic1(Basic1 node)
    {
    }

    public void caseBasic1(Basic1 node)
    {
        inBasic1(node);

        node.getNode1().apply(this);

        outBasic1(node);
    }

    public void inBasic2(Basic2 node)
    {
    }

    public void outBasic2(Basic2 node)
    {
    }

    public void caseBasic2(Basic2 node)
    {
        inBasic2(node);

        node.getNode1().apply(this);

        outBasic2(node);
    }

    public void inBasic3(Basic3 node)
    {
    }

    public void outBasic3(Basic3 node)
    {
    }

    public void caseBasic3(Basic3 node)
    {
        inBasic3(node);

        node.getNode1().apply(this);

        outBasic3(node);
    }

    public void inBasic4(Basic4 node)
    {
    }

    public void outBasic4(Basic4 node)
    {
    }

    public void caseBasic4(Basic4 node)
    {
        inBasic4(node);

        node.getNode1().apply(this);

        outBasic4(node);
    }

    public void inBasic5(Basic5 node)
    {
    }

    public void outBasic5(Basic5 node)
    {
    }

    public void caseBasic5(Basic5 node)
    {
        inBasic5(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);

        outBasic5(node);
    }

    public void inPChar1(PChar1 node)
    {
    }

    public void outPChar1(PChar1 node)
    {
    }

    public void casePChar1(PChar1 node)
    {
        inPChar1(node);

        node.getNode1().apply(this);

        outPChar1(node);
    }

    public void inPChar2(PChar2 node)
    {
    }

    public void outPChar2(PChar2 node)
    {
    }

    public void casePChar2(PChar2 node)
    {
        inPChar2(node);

        node.getNode1().apply(this);

        outPChar2(node);
    }

    public void inPChar3(PChar3 node)
    {
    }

    public void outPChar3(PChar3 node)
    {
    }

    public void casePChar3(PChar3 node)
    {
        inPChar3(node);

        node.getNode1().apply(this);

        outPChar3(node);
    }

    public void inPSet1(PSet1 node)
    {
    }

    public void outPSet1(PSet1 node)
    {
    }

    public void casePSet1(PSet1 node)
    {
        inPSet1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);
        node.getNode5().apply(this);

        outPSet1(node);
    }

    public void inPSet2(PSet2 node)
    {
    }

    public void outPSet2(PSet2 node)
    {
    }

    public void casePSet2(PSet2 node)
    {
        inPSet2(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);
        node.getNode5().apply(this);

        outPSet2(node);
    }

    public void inUnOpOpt1(UnOpOpt1 node)
    {
    }

    public void outUnOpOpt1(UnOpOpt1 node)
    {
    }

    public void caseUnOpOpt1(UnOpOpt1 node)
    {
        inUnOpOpt1(node);

        node.getNode1().apply(this);

        outUnOpOpt1(node);
    }

    public void inUnOpOpt2(UnOpOpt2 node)
    {
    }

    public void outUnOpOpt2(UnOpOpt2 node)
    {
    }

    public void caseUnOpOpt2(UnOpOpt2 node)
    {
        inUnOpOpt2(node);


        outUnOpOpt2(node);
    }

    public void inUnOp1(UnOp1 node)
    {
    }

    public void outUnOp1(UnOp1 node)
    {
    }

    public void caseUnOp1(UnOp1 node)
    {
        inUnOp1(node);

        node.getNode1().apply(this);

        outUnOp1(node);
    }

    public void inUnOp2(UnOp2 node)
    {
    }

    public void outUnOp2(UnOp2 node)
    {
    }

    public void caseUnOp2(UnOp2 node)
    {
        inUnOp2(node);

        node.getNode1().apply(this);

        outUnOp2(node);
    }

    public void inUnOp3(UnOp3 node)
    {
    }

    public void outUnOp3(UnOp3 node)
    {
    }

    public void caseUnOp3(UnOp3 node)
    {
        inUnOp3(node);

        node.getNode1().apply(this);

        outUnOp3(node);
    }

    public void inBinOp1(BinOp1 node)
    {
    }

    public void outBinOp1(BinOp1 node)
    {
    }

    public void caseBinOp1(BinOp1 node)
    {
        inBinOp1(node);

        node.getNode1().apply(this);

        outBinOp1(node);
    }

    public void inBinOp2(BinOp2 node)
    {
    }

    public void outBinOp2(BinOp2 node)
    {
    }

    public void caseBinOp2(BinOp2 node)
    {
        inBinOp2(node);

        node.getNode1().apply(this);

        outBinOp2(node);
    }

    public void inProductionsOpt1(ProductionsOpt1 node)
    {
    }

    public void outProductionsOpt1(ProductionsOpt1 node)
    {
    }

    public void caseProductionsOpt1(ProductionsOpt1 node)
    {
        inProductionsOpt1(node);

        node.getNode1().apply(this);

        outProductionsOpt1(node);
    }

    public void inProductionsOpt2(ProductionsOpt2 node)
    {
    }

    public void outProductionsOpt2(ProductionsOpt2 node)
    {
    }

    public void caseProductionsOpt2(ProductionsOpt2 node)
    {
        inProductionsOpt2(node);


        outProductionsOpt2(node);
    }

    public void inProductions1(Productions1 node)
    {
    }

    public void outProductions1(Productions1 node)
    {
    }

    public void caseProductions1(Productions1 node)
    {
        inProductions1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outProductions1(node);
    }

    public void inProds1(Prods1 node)
    {
    }

    public void outProds1(Prods1 node)
    {
    }

    public void caseProds1(Prods1 node)
    {
        inProds1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outProds1(node);
    }

    public void inProds2(Prods2 node)
    {
    }

    public void outProds2(Prods2 node)
    {
    }

    public void caseProds2(Prods2 node)
    {
        inProds2(node);


        outProds2(node);
    }

    public void inProd1(Prod1 node)
    {
    }

    public void outProd1(Prod1 node)
    {
    }

    public void caseProd1(Prod1 node)
    {
        inProd1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);

        outProd1(node);
    }

    public void inAlts1(Alts1 node)
    {
    }

    public void outAlts1(Alts1 node)
    {
    }

    public void caseAlts1(Alts1 node)
    {
        inAlts1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outAlts1(node);
    }

    public void inAltsTails1(AltsTails1 node)
    {
    }

    public void outAltsTails1(AltsTails1 node)
    {
    }

    public void caseAltsTails1(AltsTails1 node)
    {
        inAltsTails1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outAltsTails1(node);
    }

    public void inAltsTails2(AltsTails2 node)
    {
    }

    public void outAltsTails2(AltsTails2 node)
    {
    }

    public void caseAltsTails2(AltsTails2 node)
    {
        inAltsTails2(node);


        outAltsTails2(node);
    }

    public void inAltsTail1(AltsTail1 node)
    {
    }

    public void outAltsTail1(AltsTail1 node)
    {
    }

    public void caseAltsTail1(AltsTail1 node)
    {
        inAltsTail1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outAltsTail1(node);
    }

    public void inAlt1(Alt1 node)
    {
    }

    public void outAlt1(Alt1 node)
    {
    }

    public void caseAlt1(Alt1 node)
    {
        inAlt1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outAlt1(node);
    }

    public void inAlt2(Alt2 node)
    {
    }

    public void outAlt2(Alt2 node)
    {
    }

    public void caseAlt2(Alt2 node)
    {
        inAlt2(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);

        outAlt2(node);
    }

    public void inAltNameOpt1(AltNameOpt1 node)
    {
    }

    public void outAltNameOpt1(AltNameOpt1 node)
    {
    }

    public void caseAltNameOpt1(AltNameOpt1 node)
    {
        inAltNameOpt1(node);

        node.getNode1().apply(this);

        outAltNameOpt1(node);
    }

    public void inAltNameOpt2(AltNameOpt2 node)
    {
    }

    public void outAltNameOpt2(AltNameOpt2 node)
    {
    }

    public void caseAltNameOpt2(AltNameOpt2 node)
    {
        inAltNameOpt2(node);


        outAltNameOpt2(node);
    }

    public void inAltName1(AltName1 node)
    {
    }

    public void outAltName1(AltName1 node)
    {
    }

    public void caseAltName1(AltName1 node)
    {
        inAltName1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);

        outAltName1(node);
    }

    public void inElems1(Elems1 node)
    {
    }

    public void outElems1(Elems1 node)
    {
    }

    public void caseElems1(Elems1 node)
    {
        inElems1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outElems1(node);
    }

    public void inElems2(Elems2 node)
    {
    }

    public void outElems2(Elems2 node)
    {
    }

    public void caseElems2(Elems2 node)
    {
        inElems2(node);


        outElems2(node);
    }

    public void inElem1(Elem1 node)
    {
    }

    public void outElem1(Elem1 node)
    {
    }

    public void caseElem1(Elem1 node)
    {
        inElem1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);

        outElem1(node);
    }

    public void inElemNameOpt1(ElemNameOpt1 node)
    {
    }

    public void outElemNameOpt1(ElemNameOpt1 node)
    {
    }

    public void caseElemNameOpt1(ElemNameOpt1 node)
    {
        inElemNameOpt1(node);

        node.getNode1().apply(this);

        outElemNameOpt1(node);
    }

    public void inElemNameOpt2(ElemNameOpt2 node)
    {
    }

    public void outElemNameOpt2(ElemNameOpt2 node)
    {
    }

    public void caseElemNameOpt2(ElemNameOpt2 node)
    {
        inElemNameOpt2(node);


        outElemNameOpt2(node);
    }

    public void inElemName1(ElemName1 node)
    {
    }

    public void outElemName1(ElemName1 node)
    {
    }

    public void caseElemName1(ElemName1 node)
    {
        inElemName1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);
        node.getNode3().apply(this);
        node.getNode4().apply(this);

        outElemName1(node);
    }

    public void inSpecifierOpt1(SpecifierOpt1 node)
    {
    }

    public void outSpecifierOpt1(SpecifierOpt1 node)
    {
    }

    public void caseSpecifierOpt1(SpecifierOpt1 node)
    {
        inSpecifierOpt1(node);

        node.getNode1().apply(this);

        outSpecifierOpt1(node);
    }

    public void inSpecifierOpt2(SpecifierOpt2 node)
    {
    }

    public void outSpecifierOpt2(SpecifierOpt2 node)
    {
    }

    public void caseSpecifierOpt2(SpecifierOpt2 node)
    {
        inSpecifierOpt2(node);


        outSpecifierOpt2(node);
    }

    public void inSpecifier1(Specifier1 node)
    {
    }

    public void outSpecifier1(Specifier1 node)
    {
    }

    public void caseSpecifier1(Specifier1 node)
    {
        inSpecifier1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outSpecifier1(node);
    }

    public void inSpecifier2(Specifier2 node)
    {
    }

    public void outSpecifier2(Specifier2 node)
    {
    }

    public void caseSpecifier2(Specifier2 node)
    {
        inSpecifier2(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outSpecifier2(node);
    }

    public void inStart1(Start1 node)
    {
    }

    public void outStart1(Start1 node)
    {
    }

    public void caseStart1(Start1 node)
    {
        inStart1(node);

        node.getNode1().apply(this);
        node.getNode2().apply(this);

        outStart1(node);
    }

}

