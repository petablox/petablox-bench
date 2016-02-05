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

package ca.mcgill.sable.sablecc.parser;

import ca.mcgill.sable.sablecc.analysis.AnalysisAdapter;
import ca.mcgill.sable.sablecc.node.*;

class TokenIndex extends AnalysisAdapter
{
    int index;

    public void caseTPackage(TPackage node)
    {
        index = 0;
    }

    public void caseTStates(TStates node)
    {
        index = 1;
    }

    public void caseTHelpers(THelpers node)
    {
        index = 2;
    }

    public void caseTTokens(TTokens node)
    {
        index = 3;
    }

    public void caseTIgnored(TIgnored node)
    {
        index = 4;
    }

    public void caseTProductions(TProductions node)
    {
        index = 5;
    }

    public void caseTTokenSpecifier(TTokenSpecifier node)
    {
        index = 6;
    }

    public void caseTProductionSpecifier(TProductionSpecifier node)
    {
        index = 7;
    }

    public void caseTDot(TDot node)
    {
        index = 8;
    }

    public void caseTDDot(TDDot node)
    {
        index = 9;
    }

    public void caseTSemicolon(TSemicolon node)
    {
        index = 10;
    }

    public void caseTEqual(TEqual node)
    {
        index = 11;
    }

    public void caseTLBkt(TLBkt node)
    {
        index = 12;
    }

    public void caseTRBkt(TRBkt node)
    {
        index = 13;
    }

    public void caseTLPar(TLPar node)
    {
        index = 14;
    }

    public void caseTRPar(TRPar node)
    {
        index = 15;
    }

    public void caseTLBrace(TLBrace node)
    {
        index = 16;
    }

    public void caseTRBrace(TRBrace node)
    {
        index = 17;
    }

    public void caseTPlus(TPlus node)
    {
        index = 18;
    }

    public void caseTMinus(TMinus node)
    {
        index = 19;
    }

    public void caseTQMark(TQMark node)
    {
        index = 20;
    }

    public void caseTStar(TStar node)
    {
        index = 21;
    }

    public void caseTBar(TBar node)
    {
        index = 22;
    }

    public void caseTComma(TComma node)
    {
        index = 23;
    }

    public void caseTSlash(TSlash node)
    {
        index = 24;
    }

    public void caseTArrow(TArrow node)
    {
        index = 25;
    }

    public void caseTColon(TColon node)
    {
        index = 26;
    }

    public void caseTId(TId node)
    {
        index = 27;
    }

    public void caseTChar(TChar node)
    {
        index = 28;
    }

    public void caseTDecChar(TDecChar node)
    {
        index = 29;
    }

    public void caseTHexChar(THexChar node)
    {
        index = 30;
    }

    public void caseTString(TString node)
    {
        index = 31;
    }

    public void caseTPkgId(TPkgId node)
    {
        index = 32;
    }

    public void caseEOF(EOF node)
    {
        index = 33;
    }
}
