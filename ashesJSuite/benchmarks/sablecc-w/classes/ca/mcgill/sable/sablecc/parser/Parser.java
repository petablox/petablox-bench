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

package ca.mcgill.sable.sablecc.parser;

import ca.mcgill.sable.sablecc.node.*;
import ca.mcgill.sable.sablecc.lexer.*;
import ca.mcgill.sable.sablecc.util.*;
import ca.mcgill.sable.sablecc.node.Package;

import java.util.Vector;
import java.util.Stack;
import java.io.IOException;
import java.io.ObjectInputStream;

public final class Parser
{
    private final Lexer lexer;
    private final Stack stack = new Stack();

    public Parser(Lexer lexer)
    {
        this.lexer = lexer;

        try
        {
            ObjectInputStream s = new ObjectInputStream(getClass().getResourceAsStream("parser.dat"));
            actionTable = (int[][][]) s.readObject();
            gotoTable = (int[][]) s.readObject();
            errors = (String[]) s.readObject();
            s.close();
        }
        catch(Exception e)
        {
            throw new RuntimeException("Unable to read parser.dat.");
        }
    }

    private void push(int state, Object node)
    {
        stack.push(new State(state, node));
    }

    private int state()
    {
        return ((State) stack.peek()).state;
    }

    private Object pop()
    {
        return ((State) stack.pop()).node;
    }

    private final TokenIndex converter = new TokenIndex();

    private int index(Switchable token)
    {
        converter.index = -1;
        token.apply(converter);
        return converter.index;
    }

    private int last_shift;
    private int last_pos;
    private int last_line;
    private boolean get_last_coordinates = true;

    public Start parse() throws ParserException, LexerException, IOException
    {
        push(0, null);

        int[] action;
        while(true)
        {
            while(index(lexer.peek()) == -1)
            {
                lexer.next();
            }

            if(get_last_coordinates)
            {
                last_pos = lexer.peek().getPos();
                last_line = lexer.peek().getLine();
                get_last_coordinates = false;
            }

            action = actionTable[state()][index(lexer.peek())];

            switch(action[0])
            {
                case SHIFT:
                    push(action[1], lexer.next());
                    last_shift = action[1];
                    get_last_coordinates = true;
                    break;
                case REDUCE:
                    switch(action[1])
                    {
                    case 0:
                        {
                            Grammar1 node = new Grammar1();
                            node.setNode6((ProductionsOpt) pop());
                            node.setNode5((IgnTokensOpt) pop());
                            node.setNode4((TokensOpt) pop());
                            node.setNode3((StatesOpt) pop());
                            node.setNode2((HelpersOpt) pop());
                            node.setNode1((PackageOpt) pop());
                            push(gotoTable[state()][0], node);
                        }
                        break;
                    case 1:
                        {
                            PackageOpt1 node = new PackageOpt1();
                            node.setNode1((Package) pop());
                            push(gotoTable[state()][1], node);
                        }
                        break;
                    case 2:
                        {
                            PackageOpt2 node = new PackageOpt2();
                            push(gotoTable[state()][1], node);
                        }
                        break;
                    case 3:
                        {
                            Package1 node = new Package1();
                            node.setNode2((PkgNameOpt) pop());
                            node.setNode1((TPackage) pop());
                            push(gotoTable[state()][2], node);
                        }
                        break;
                    case 4:
                        {
                            PkgNameOpt1 node = new PkgNameOpt1();
                            node.setNode1((PkgName) pop());
                            push(gotoTable[state()][3], node);
                        }
                        break;
                    case 5:
                        {
                            PkgName1 node = new PkgName1();
                            node.setNode3((TSemicolon) pop());
                            node.setNode2((PkgNameTails) pop());
                            node.setNode1((PkgId) pop());
                            push(gotoTable[state()][4], node);
                        }
                        break;
                    case 6:
                        {
                            PkgNameTails1 node = new PkgNameTails1();
                            node.setNode2((PkgNameTails) pop());
                            node.setNode1((PkgNameTail) pop());
                            push(gotoTable[state()][5], node);
                        }
                        break;
                    case 7:
                        {
                            PkgNameTails2 node = new PkgNameTails2();
                            push(gotoTable[state()][5], node);
                        }
                        break;
                    case 8:
                        {
                            PkgNameTail1 node = new PkgNameTail1();
                            node.setNode2((PkgId) pop());
                            node.setNode1((TDot) pop());
                            push(gotoTable[state()][6], node);
                        }
                        break;
                    case 9:
                        {
                            PkgId1 node = new PkgId1();
                            node.setNode1((TPackage) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 10:
                        {
                            PkgId2 node = new PkgId2();
                            node.setNode1((TStates) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 11:
                        {
                            PkgId3 node = new PkgId3();
                            node.setNode1((THelpers) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 12:
                        {
                            PkgId4 node = new PkgId4();
                            node.setNode1((TTokens) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 13:
                        {
                            PkgId5 node = new PkgId5();
                            node.setNode1((TIgnored) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 14:
                        {
                            PkgId6 node = new PkgId6();
                            node.setNode1((TProductions) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 15:
                        {
                            PkgId7 node = new PkgId7();
                            node.setNode1((TTokenSpecifier) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 16:
                        {
                            PkgId8 node = new PkgId8();
                            node.setNode1((TProductionSpecifier) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 17:
                        {
                            PkgId9 node = new PkgId9();
                            node.setNode1((TId) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 18:
                        {
                            PkgId10 node = new PkgId10();
                            node.setNode1((TPkgId) pop());
                            push(gotoTable[state()][7], node);
                        }
                        break;
                    case 19:
                        {
                            HelpersOpt1 node = new HelpersOpt1();
                            node.setNode1((Helpers) pop());
                            push(gotoTable[state()][8], node);
                        }
                        break;
                    case 20:
                        {
                            HelpersOpt2 node = new HelpersOpt2();
                            push(gotoTable[state()][8], node);
                        }
                        break;
                    case 21:
                        {
                            Helpers1 node = new Helpers1();
                            node.setNode2((HelperDefs) pop());
                            node.setNode1((THelpers) pop());
                            push(gotoTable[state()][9], node);
                        }
                        break;
                    case 22:
                        {
                            HelperDefs1 node = new HelperDefs1();
                            node.setNode2((HelperDefs) pop());
                            node.setNode1((HelperDef) pop());
                            push(gotoTable[state()][10], node);
                        }
                        break;
                    case 23:
                        {
                            HelperDefs2 node = new HelperDefs2();
                            push(gotoTable[state()][10], node);
                        }
                        break;
                    case 24:
                        {
                            HelperDef1 node = new HelperDef1();
                            node.setNode4((TSemicolon) pop());
                            node.setNode3((RegExp) pop());
                            node.setNode2((TEqual) pop());
                            node.setNode1((TId) pop());
                            push(gotoTable[state()][11], node);
                        }
                        break;
                    case 25:
                        {
                            StatesOpt1 node = new StatesOpt1();
                            node.setNode1((States) pop());
                            push(gotoTable[state()][12], node);
                        }
                        break;
                    case 26:
                        {
                            StatesOpt2 node = new StatesOpt2();
                            push(gotoTable[state()][12], node);
                        }
                        break;
                    case 27:
                        {
                            States1 node = new States1();
                            node.setNode3((TSemicolon) pop());
                            node.setNode2((IdListOpt) pop());
                            node.setNode1((TStates) pop());
                            push(gotoTable[state()][13], node);
                        }
                        break;
                    case 28:
                        {
                            IdListOpt1 node = new IdListOpt1();
                            node.setNode1((IdList) pop());
                            push(gotoTable[state()][14], node);
                        }
                        break;
                    case 29:
                        {
                            IdList1 node = new IdList1();
                            node.setNode2((IdListTails) pop());
                            node.setNode1((TId) pop());
                            push(gotoTable[state()][15], node);
                        }
                        break;
                    case 30:
                        {
                            IdListTails1 node = new IdListTails1();
                            node.setNode2((IdListTails) pop());
                            node.setNode1((IdListTail) pop());
                            push(gotoTable[state()][16], node);
                        }
                        break;
                    case 31:
                        {
                            IdListTails2 node = new IdListTails2();
                            push(gotoTable[state()][16], node);
                        }
                        break;
                    case 32:
                        {
                            IdListTail1 node = new IdListTail1();
                            node.setNode2((TId) pop());
                            node.setNode1((TComma) pop());
                            push(gotoTable[state()][17], node);
                        }
                        break;
                    case 33:
                        {
                            TokensOpt1 node = new TokensOpt1();
                            node.setNode1((Tokens) pop());
                            push(gotoTable[state()][18], node);
                        }
                        break;
                    case 34:
                        {
                            TokensOpt2 node = new TokensOpt2();
                            push(gotoTable[state()][18], node);
                        }
                        break;
                    case 35:
                        {
                            Tokens1 node = new Tokens1();
                            node.setNode2((TokenDefs) pop());
                            node.setNode1((TTokens) pop());
                            push(gotoTable[state()][19], node);
                        }
                        break;
                    case 36:
                        {
                            TokenDefs1 node = new TokenDefs1();
                            node.setNode2((TokenDefs) pop());
                            node.setNode1((TokenDef) pop());
                            push(gotoTable[state()][20], node);
                        }
                        break;
                    case 37:
                        {
                            TokenDefs2 node = new TokenDefs2();
                            push(gotoTable[state()][20], node);
                        }
                        break;
                    case 38:
                        {
                            TokenDef1 node = new TokenDef1();
                            node.setNode6((TSemicolon) pop());
                            node.setNode5((LookAheadOpt) pop());
                            node.setNode4((RegExp) pop());
                            node.setNode3((TEqual) pop());
                            node.setNode2((TId) pop());
                            node.setNode1((StateListOpt) pop());
                            push(gotoTable[state()][21], node);
                        }
                        break;
                    case 39:
                        {
                            StateListOpt1 node = new StateListOpt1();
                            node.setNode1((StateList) pop());
                            push(gotoTable[state()][22], node);
                        }
                        break;
                    case 40:
                        {
                            StateListOpt2 node = new StateListOpt2();
                            push(gotoTable[state()][22], node);
                        }
                        break;
                    case 41:
                        {
                            StateList1 node = new StateList1();
                            node.setNode5((TRBrace) pop());
                            node.setNode4((StateListTails) pop());
                            node.setNode3((TransitionOpt) pop());
                            node.setNode2((TId) pop());
                            node.setNode1((TLBrace) pop());
                            push(gotoTable[state()][23], node);
                        }
                        break;
                    case 42:
                        {
                            StateListTails1 node = new StateListTails1();
                            node.setNode2((StateListTails) pop());
                            node.setNode1((StateListTail) pop());
                            push(gotoTable[state()][24], node);
                        }
                        break;
                    case 43:
                        {
                            StateListTails2 node = new StateListTails2();
                            push(gotoTable[state()][24], node);
                        }
                        break;
                    case 44:
                        {
                            StateListTail1 node = new StateListTail1();
                            node.setNode3((TransitionOpt) pop());
                            node.setNode2((TId) pop());
                            node.setNode1((TComma) pop());
                            push(gotoTable[state()][25], node);
                        }
                        break;
                    case 45:
                        {
                            TransitionOpt1 node = new TransitionOpt1();
                            node.setNode1((Transition) pop());
                            push(gotoTable[state()][26], node);
                        }
                        break;
                    case 46:
                        {
                            TransitionOpt2 node = new TransitionOpt2();
                            push(gotoTable[state()][26], node);
                        }
                        break;
                    case 47:
                        {
                            Transition1 node = new Transition1();
                            node.setNode2((TId) pop());
                            node.setNode1((TArrow) pop());
                            push(gotoTable[state()][27], node);
                        }
                        break;
                    case 48:
                        {
                            IgnTokensOpt1 node = new IgnTokensOpt1();
                            node.setNode1((IgnTokens) pop());
                            push(gotoTable[state()][28], node);
                        }
                        break;
                    case 49:
                        {
                            IgnTokensOpt2 node = new IgnTokensOpt2();
                            push(gotoTable[state()][28], node);
                        }
                        break;
                    case 50:
                        {
                            IgnTokens1 node = new IgnTokens1();
                            node.setNode4((TSemicolon) pop());
                            node.setNode3((IdListOpt) pop());
                            node.setNode2((TTokens) pop());
                            node.setNode1((TIgnored) pop());
                            push(gotoTable[state()][29], node);
                        }
                        break;
                    case 51:
                        {
                            LookAheadOpt1 node = new LookAheadOpt1();
                            node.setNode1((LookAhead) pop());
                            push(gotoTable[state()][30], node);
                        }
                        break;
                    case 52:
                        {
                            LookAheadOpt2 node = new LookAheadOpt2();
                            push(gotoTable[state()][30], node);
                        }
                        break;
                    case 53:
                        {
                            LookAhead1 node = new LookAhead1();
                            node.setNode2((RegExp) pop());
                            node.setNode1((TSlash) pop());
                            push(gotoTable[state()][31], node);
                        }
                        break;
                    case 54:
                        {
                            RegExp1 node = new RegExp1();
                            node.setNode2((RegExpTails) pop());
                            node.setNode1((Concat) pop());
                            push(gotoTable[state()][32], node);
                        }
                        break;
                    case 55:
                        {
                            RegExpTails1 node = new RegExpTails1();
                            node.setNode2((RegExpTails) pop());
                            node.setNode1((RegExpTail) pop());
                            push(gotoTable[state()][33], node);
                        }
                        break;
                    case 56:
                        {
                            RegExpTails2 node = new RegExpTails2();
                            push(gotoTable[state()][33], node);
                        }
                        break;
                    case 57:
                        {
                            RegExpTail1 node = new RegExpTail1();
                            node.setNode2((Concat) pop());
                            node.setNode1((TBar) pop());
                            push(gotoTable[state()][34], node);
                        }
                        break;
                    case 58:
                        {
                            Concat1 node = new Concat1();
                            node.setNode1((UnExps) pop());
                            push(gotoTable[state()][35], node);
                        }
                        break;
                    case 59:
                        {
                            UnExps1 node = new UnExps1();
                            node.setNode2((UnExps) pop());
                            node.setNode1((UnExp) pop());
                            push(gotoTable[state()][36], node);
                        }
                        break;
                    case 60:
                        {
                            UnExps2 node = new UnExps2();
                            push(gotoTable[state()][36], node);
                        }
                        break;
                    case 61:
                        {
                            UnExp1 node = new UnExp1();
                            node.setNode2((UnOpOpt) pop());
                            node.setNode1((Basic) pop());
                            push(gotoTable[state()][37], node);
                        }
                        break;
                    case 62:
                        {
                            Basic1 node = new Basic1();
                            node.setNode1((PChar) pop());
                            push(gotoTable[state()][38], node);
                        }
                        break;
                    case 63:
                        {
                            Basic2 node = new Basic2();
                            node.setNode1((PSet) pop());
                            push(gotoTable[state()][38], node);
                        }
                        break;
                    case 64:
                        {
                            Basic3 node = new Basic3();
                            node.setNode1((TString) pop());
                            push(gotoTable[state()][38], node);
                        }
                        break;
                    case 65:
                        {
                            Basic4 node = new Basic4();
                            node.setNode1((TId) pop());
                            push(gotoTable[state()][38], node);
                        }
                        break;
                    case 66:
                        {
                            Basic5 node = new Basic5();
                            node.setNode3((TRPar) pop());
                            node.setNode2((RegExp) pop());
                            node.setNode1((TLPar) pop());
                            push(gotoTable[state()][38], node);
                        }
                        break;
                    case 67:
                        {
                            PChar1 node = new PChar1();
                            node.setNode1((TChar) pop());
                            push(gotoTable[state()][39], node);
                        }
                        break;
                    case 68:
                        {
                            PChar2 node = new PChar2();
                            node.setNode1((TDecChar) pop());
                            push(gotoTable[state()][39], node);
                        }
                        break;
                    case 69:
                        {
                            PChar3 node = new PChar3();
                            node.setNode1((THexChar) pop());
                            push(gotoTable[state()][39], node);
                        }
                        break;
                    case 70:
                        {
                            PSet1 node = new PSet1();
                            node.setNode5((TRBkt) pop());
                            node.setNode4((Basic) pop());
                            node.setNode3((BinOp) pop());
                            node.setNode2((Basic) pop());
                            node.setNode1((TLBkt) pop());
                            push(gotoTable[state()][40], node);
                        }
                        break;
                    case 71:
                        {
                            PSet2 node = new PSet2();
                            node.setNode5((TRBkt) pop());
                            node.setNode4((PChar) pop());
                            node.setNode3((TDDot) pop());
                            node.setNode2((PChar) pop());
                            node.setNode1((TLBkt) pop());
                            push(gotoTable[state()][40], node);
                        }
                        break;
                    case 72:
                        {
                            UnOpOpt1 node = new UnOpOpt1();
                            node.setNode1((UnOp) pop());
                            push(gotoTable[state()][41], node);
                        }
                        break;
                    case 73:
                        {
                            UnOpOpt2 node = new UnOpOpt2();
                            push(gotoTable[state()][41], node);
                        }
                        break;
                    case 74:
                        {
                            UnOp1 node = new UnOp1();
                            node.setNode1((TStar) pop());
                            push(gotoTable[state()][42], node);
                        }
                        break;
                    case 75:
                        {
                            UnOp2 node = new UnOp2();
                            node.setNode1((TQMark) pop());
                            push(gotoTable[state()][42], node);
                        }
                        break;
                    case 76:
                        {
                            UnOp3 node = new UnOp3();
                            node.setNode1((TPlus) pop());
                            push(gotoTable[state()][42], node);
                        }
                        break;
                    case 77:
                        {
                            BinOp1 node = new BinOp1();
                            node.setNode1((TPlus) pop());
                            push(gotoTable[state()][43], node);
                        }
                        break;
                    case 78:
                        {
                            BinOp2 node = new BinOp2();
                            node.setNode1((TMinus) pop());
                            push(gotoTable[state()][43], node);
                        }
                        break;
                    case 79:
                        {
                            ProductionsOpt1 node = new ProductionsOpt1();
                            node.setNode1((Productions) pop());
                            push(gotoTable[state()][44], node);
                        }
                        break;
                    case 80:
                        {
                            ProductionsOpt2 node = new ProductionsOpt2();
                            push(gotoTable[state()][44], node);
                        }
                        break;
                    case 81:
                        {
                            Productions1 node = new Productions1();
                            node.setNode2((Prods) pop());
                            node.setNode1((TProductions) pop());
                            push(gotoTable[state()][45], node);
                        }
                        break;
                    case 82:
                        {
                            Prods1 node = new Prods1();
                            node.setNode2((Prods) pop());
                            node.setNode1((Prod) pop());
                            push(gotoTable[state()][46], node);
                        }
                        break;
                    case 83:
                        {
                            Prods2 node = new Prods2();
                            push(gotoTable[state()][46], node);
                        }
                        break;
                    case 84:
                        {
                            Prod1 node = new Prod1();
                            node.setNode4((TSemicolon) pop());
                            node.setNode3((Alts) pop());
                            node.setNode2((TEqual) pop());
                            node.setNode1((TId) pop());
                            push(gotoTable[state()][47], node);
                        }
                        break;
                    case 85:
                        {
                            Alts1 node = new Alts1();
                            node.setNode2((AltsTails) pop());
                            node.setNode1((Alt) pop());
                            push(gotoTable[state()][48], node);
                        }
                        break;
                    case 86:
                        {
                            AltsTails1 node = new AltsTails1();
                            node.setNode2((AltsTails) pop());
                            node.setNode1((AltsTail) pop());
                            push(gotoTable[state()][49], node);
                        }
                        break;
                    case 87:
                        {
                            AltsTails2 node = new AltsTails2();
                            push(gotoTable[state()][49], node);
                        }
                        break;
                    case 88:
                        {
                            AltsTail1 node = new AltsTail1();
                            node.setNode2((Alt) pop());
                            node.setNode1((TBar) pop());
                            push(gotoTable[state()][50], node);
                        }
                        break;
                    case 89:
                        {
                            Alt1 node = new Alt1();
                            node.setNode2((Elems) pop());
                            node.setNode1((AltNameOpt) pop());
                            push(gotoTable[state()][51], node);
                        }
                        break;
                    case 90:
                        {
                            Alt2 node = new Alt2();
                            node.setNode4((TRPar) pop());
                            node.setNode3((Elems) pop());
                            node.setNode2((AltNameOpt) pop());
                            node.setNode1((TLPar) pop());
                            push(gotoTable[state()][51], node);
                        }
                        break;
                    case 91:
                        {
                            AltNameOpt1 node = new AltNameOpt1();
                            node.setNode1((AltName) pop());
                            push(gotoTable[state()][52], node);
                        }
                        break;
                    case 92:
                        {
                            AltNameOpt2 node = new AltNameOpt2();
                            push(gotoTable[state()][52], node);
                        }
                        break;
                    case 93:
                        {
                            AltName1 node = new AltName1();
                            node.setNode3((TRBrace) pop());
                            node.setNode2((TId) pop());
                            node.setNode1((TLBrace) pop());
                            push(gotoTable[state()][53], node);
                        }
                        break;
                    case 94:
                        {
                            Elems1 node = new Elems1();
                            node.setNode2((Elems) pop());
                            node.setNode1((Elem) pop());
                            push(gotoTable[state()][54], node);
                        }
                        break;
                    case 95:
                        {
                            Elems2 node = new Elems2();
                            push(gotoTable[state()][54], node);
                        }
                        break;
                    case 96:
                        {
                            Elem1 node = new Elem1();
                            node.setNode4((UnOpOpt) pop());
                            node.setNode3((TId) pop());
                            node.setNode2((SpecifierOpt) pop());
                            node.setNode1((ElemNameOpt) pop());
                            push(gotoTable[state()][55], node);
                        }
                        break;
                    case 97:
                        {
                            ElemNameOpt1 node = new ElemNameOpt1();
                            node.setNode1((ElemName) pop());
                            push(gotoTable[state()][56], node);
                        }
                        break;
                    case 98:
                        {
                            ElemNameOpt2 node = new ElemNameOpt2();
                            push(gotoTable[state()][56], node);
                        }
                        break;
                    case 99:
                        {
                            ElemName1 node = new ElemName1();
                            node.setNode4((TColon) pop());
                            node.setNode3((TRBkt) pop());
                            node.setNode2((TId) pop());
                            node.setNode1((TLBkt) pop());
                            push(gotoTable[state()][57], node);
                        }
                        break;
                    case 100:
                        {
                            SpecifierOpt1 node = new SpecifierOpt1();
                            node.setNode1((Specifier) pop());
                            push(gotoTable[state()][58], node);
                        }
                        break;
                    case 101:
                        {
                            SpecifierOpt2 node = new SpecifierOpt2();
                            push(gotoTable[state()][58], node);
                        }
                        break;
                    case 102:
                        {
                            Specifier1 node = new Specifier1();
                            node.setNode2((TDot) pop());
                            node.setNode1((TTokenSpecifier) pop());
                            push(gotoTable[state()][59], node);
                        }
                        break;
                    case 103:
                        {
                            Specifier2 node = new Specifier2();
                            node.setNode2((TDot) pop());
                            node.setNode1((TProductionSpecifier) pop());
                            push(gotoTable[state()][59], node);
                        }
                        break;
                    }
                    break;
                case ACCEPT:
                    {
                        Start1 node = new Start1();
                        node.setNode1((Grammar) pop());
                        node.setNode2((EOF) lexer.next());
                        return node;
                    }
                case ERROR:
                    throw new ParserException(
                        "[" + last_line + "," + last_pos + "] " +
//                        errors[last_shift]);
                        errors[action[1]]);
            }
        }
    }

    private final static int SHIFT = 0;
    private final static int REDUCE = 1;
    private final static int ACCEPT = 2;
    private final static int ERROR = 3;
    private /*final*/ static int[][][] actionTable; /* =
        {
            {{SHIFT, 1}, {REDUCE, 2}, {REDUCE, 2}, {REDUCE, 2}, {REDUCE, 2}, {REDUCE, 2}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {ERROR, 0}, {REDUCE, 2}, },
            {{SHIFT, 5}, {SHIFT, 6}, {SHIFT, 7}, {SHIFT, 8}, {SHIFT, 9}, {SHIFT, 10}, {SHIFT, 11}, {SHIFT, 12}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {SHIFT, 13}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {ERROR, 1}, {SHIFT, 14}, {ERROR, 1}, },
            {{ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ERROR, 2}, {ACCEPT}, },
            {{ERROR, 3}, {REDUCE, 20}, {SHIFT, 18}, {REDUCE, 20}, {REDUCE, 20}, {REDUCE, 20}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {ERROR, 3}, {REDUCE, 20}, },
            {{ERROR, 4}, {REDUCE, 1}, {REDUCE, 1}, {REDUCE, 1}, {REDUCE, 1}, {REDUCE, 1}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {ERROR, 4}, {REDUCE, 1}, },
            {{ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {REDUCE, 9}, {ERROR, 5}, {REDUCE, 9}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, {ERROR, 5}, },
            {{ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {REDUCE, 10}, {ERROR, 6}, {REDUCE, 10}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, {ERROR, 6}, },
            {{ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {REDUCE, 11}, {ERROR, 7}, {REDUCE, 11}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, {ERROR, 7}, },
            {{ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {REDUCE, 12}, {ERROR, 8}, {REDUCE, 12}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, {ERROR, 8}, },
            {{ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {REDUCE, 13}, {ERROR, 9}, {REDUCE, 13}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, {ERROR, 9}, },
            {{ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {REDUCE, 14}, {ERROR, 10}, {REDUCE, 14}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, {ERROR, 10}, },
            {{ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {REDUCE, 15}, {ERROR, 11}, {REDUCE, 15}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, {ERROR, 11}, },
            {{ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {REDUCE, 16}, {ERROR, 12}, {REDUCE, 16}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, {ERROR, 12}, },
            {{ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {REDUCE, 17}, {ERROR, 13}, {REDUCE, 17}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, {ERROR, 13}, },
            {{ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {REDUCE, 18}, {ERROR, 14}, {REDUCE, 18}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, {ERROR, 14}, },
            {{ERROR, 15}, {REDUCE, 3}, {REDUCE, 3}, {REDUCE, 3}, {REDUCE, 3}, {REDUCE, 3}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {ERROR, 15}, {REDUCE, 3}, },
            {{ERROR, 16}, {REDUCE, 4}, {REDUCE, 4}, {REDUCE, 4}, {REDUCE, 4}, {REDUCE, 4}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {ERROR, 16}, {REDUCE, 4}, },
            {{ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {SHIFT, 21}, {ERROR, 17}, {REDUCE, 7}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, {ERROR, 17}, },
            {{ERROR, 18}, {REDUCE, 23}, {ERROR, 18}, {REDUCE, 23}, {REDUCE, 23}, {REDUCE, 23}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {SHIFT, 24}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {ERROR, 18}, {REDUCE, 23}, },
            {{ERROR, 19}, {SHIFT, 27}, {ERROR, 19}, {REDUCE, 26}, {REDUCE, 26}, {REDUCE, 26}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {ERROR, 19}, {REDUCE, 26}, },
            {{ERROR, 20}, {REDUCE, 19}, {ERROR, 20}, {REDUCE, 19}, {REDUCE, 19}, {REDUCE, 19}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {ERROR, 20}, {REDUCE, 19}, },
            {{SHIFT, 5}, {SHIFT, 6}, {SHIFT, 7}, {SHIFT, 8}, {SHIFT, 9}, {SHIFT, 10}, {SHIFT, 11}, {SHIFT, 12}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {SHIFT, 13}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {ERROR, 21}, {SHIFT, 14}, {ERROR, 21}, },
            {{ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {SHIFT, 31}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, {ERROR, 22}, },
            {{ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {SHIFT, 21}, {ERROR, 23}, {REDUCE, 7}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, {ERROR, 23}, },
            {{ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {SHIFT, 33}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, {ERROR, 24}, },
            {{ERROR, 25}, {REDUCE, 21}, {ERROR, 25}, {REDUCE, 21}, {REDUCE, 21}, {REDUCE, 21}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {ERROR, 25}, {REDUCE, 21}, },
            {{ERROR, 26}, {REDUCE, 23}, {ERROR, 26}, {REDUCE, 23}, {REDUCE, 23}, {REDUCE, 23}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {SHIFT, 24}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {ERROR, 26}, {REDUCE, 23}, },
            {{ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {SHIFT, 35}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, {ERROR, 27}, },
            {{ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {SHIFT, 38}, {REDUCE, 34}, {REDUCE, 34}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {ERROR, 28}, {REDUCE, 34}, },
            {{ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {REDUCE, 25}, {REDUCE, 25}, {REDUCE, 25}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {ERROR, 29}, {REDUCE, 25}, },
            {{ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {REDUCE, 8}, {ERROR, 30}, {REDUCE, 8}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, {ERROR, 30}, },
            {{ERROR, 31}, {REDUCE, 5}, {REDUCE, 5}, {REDUCE, 5}, {REDUCE, 5}, {REDUCE, 5}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {ERROR, 31}, {REDUCE, 5}, },
            {{ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {REDUCE, 6}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, {ERROR, 32}, },
            {{ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {REDUCE, 60}, {ERROR, 33}, {SHIFT, 41}, {ERROR, 33}, {SHIFT, 42}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {REDUCE, 60}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {ERROR, 33}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 33}, {ERROR, 33}, },
            {{ERROR, 34}, {REDUCE, 22}, {ERROR, 34}, {REDUCE, 22}, {REDUCE, 22}, {REDUCE, 22}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {ERROR, 34}, {REDUCE, 22}, },
            {{ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {REDUCE, 31}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {SHIFT, 55}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, {ERROR, 35}, },
            {{ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {SHIFT, 58}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, {ERROR, 36}, },
            {{ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {REDUCE, 28}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, {ERROR, 37}, },
            {{ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {REDUCE, 37}, {REDUCE, 37}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {SHIFT, 59}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {REDUCE, 40}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {ERROR, 38}, {REDUCE, 37}, },
            {{ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {SHIFT, 64}, {REDUCE, 49}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {ERROR, 39}, {REDUCE, 49}, },
            {{ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {REDUCE, 33}, {REDUCE, 33}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {ERROR, 40}, {REDUCE, 33}, },
            {{ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {SHIFT, 41}, {ERROR, 41}, {SHIFT, 42}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {ERROR, 41}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 41}, {ERROR, 41}, },
            {{ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {SHIFT, 41}, {ERROR, 42}, {SHIFT, 42}, {REDUCE, 60}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {REDUCE, 60}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {ERROR, 42}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 42}, {ERROR, 42}, },
            {{ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {ERROR, 43}, {REDUCE, 65}, {ERROR, 43}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {ERROR, 43}, {ERROR, 43}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {ERROR, 43}, {REDUCE, 65}, {ERROR, 43}, {ERROR, 43}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {REDUCE, 65}, {ERROR, 43}, {ERROR, 43}, },
            {{ERROR, 44}, {ERROR, 44}, {ERROR, 44}, {ERROR, 44}, {ERROR, 44}, {ERROR, 44}, {ERROR, 44}, {ERROR, 44}, {ERROR, 44}, {REDUCE, 67}, {REDUCE, 67}, {ERROR, 44}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {ERROR, 44}, {ERROR, 44}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {ERROR, 44}, {REDUCE, 67}, {ERROR, 44}, {ERROR, 44}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {REDUCE, 67}, {ERROR, 44}, {ERROR, 44}, },
            {{ERROR, 45}, {ERROR, 45}, {ERROR, 45}, {ERROR, 45}, {ERROR, 45}, {ERROR, 45}, {ERROR, 45}, {ERROR, 45}, {ERROR, 45}, {REDUCE, 68}, {REDUCE, 68}, {ERROR, 45}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {ERROR, 45}, {ERROR, 45}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {ERROR, 45}, {REDUCE, 68}, {ERROR, 45}, {ERROR, 45}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {REDUCE, 68}, {ERROR, 45}, {ERROR, 45}, },
            {{ERROR, 46}, {ERROR, 46}, {ERROR, 46}, {ERROR, 46}, {ERROR, 46}, {ERROR, 46}, {ERROR, 46}, {ERROR, 46}, {ERROR, 46}, {REDUCE, 69}, {REDUCE, 69}, {ERROR, 46}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {ERROR, 46}, {ERROR, 46}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {ERROR, 46}, {REDUCE, 69}, {ERROR, 46}, {ERROR, 46}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {REDUCE, 69}, {ERROR, 46}, {ERROR, 46}, },
            {{ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {ERROR, 47}, {REDUCE, 64}, {ERROR, 47}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {ERROR, 47}, {ERROR, 47}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {ERROR, 47}, {REDUCE, 64}, {ERROR, 47}, {ERROR, 47}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {REDUCE, 64}, {ERROR, 47}, {ERROR, 47}, },
            {{ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {SHIFT, 70}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, {ERROR, 48}, },
            {{ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {REDUCE, 56}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {REDUCE, 56}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {SHIFT, 71}, {ERROR, 49}, {REDUCE, 56}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, {ERROR, 49}, },
            {{ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {REDUCE, 58}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {REDUCE, 58}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {REDUCE, 58}, {ERROR, 50}, {REDUCE, 58}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, {ERROR, 50}, },
            {{ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {REDUCE, 60}, {ERROR, 51}, {SHIFT, 41}, {ERROR, 51}, {SHIFT, 42}, {REDUCE, 60}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {ERROR, 51}, {REDUCE, 60}, {ERROR, 51}, {REDUCE, 60}, {ERROR, 51}, {ERROR, 51}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 51}, {ERROR, 51}, },
            {{ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {ERROR, 52}, {REDUCE, 73}, {ERROR, 52}, {REDUCE, 73}, {ERROR, 52}, {REDUCE, 73}, {REDUCE, 73}, {ERROR, 52}, {ERROR, 52}, {SHIFT, 75}, {ERROR, 52}, {SHIFT, 76}, {SHIFT, 77}, {REDUCE, 73}, {ERROR, 52}, {REDUCE, 73}, {ERROR, 52}, {ERROR, 52}, {REDUCE, 73}, {REDUCE, 73}, {REDUCE, 73}, {REDUCE, 73}, {REDUCE, 73}, {ERROR, 52}, {ERROR, 52}, },
            {{ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {ERROR, 53}, {REDUCE, 62}, {ERROR, 53}, {REDUCE, 62}, {REDUCE, 62}, {REDUCE, 62}, {REDUCE, 62}, {ERROR, 53}, {ERROR, 53}, {REDUCE, 62}, {ERROR, 53}, {REDUCE, 62}, {REDUCE, 62}, {REDUCE, 62}, {ERROR, 53}, {REDUCE, 62}, {ERROR, 53}, {ERROR, 53}, {REDUCE, 62}, {REDUCE, 62}, {REDUCE, 62}, {REDUCE, 62}, {REDUCE, 62}, {ERROR, 53}, {ERROR, 53}, },
            {{ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {ERROR, 54}, {REDUCE, 63}, {ERROR, 54}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {ERROR, 54}, {ERROR, 54}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {ERROR, 54}, {REDUCE, 63}, {ERROR, 54}, {ERROR, 54}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {REDUCE, 63}, {ERROR, 54}, {ERROR, 54}, },
            {{ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {SHIFT, 80}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, {ERROR, 55}, },
            {{ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {REDUCE, 29}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, {ERROR, 56}, },
            {{ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {REDUCE, 31}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {SHIFT, 55}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, {ERROR, 57}, },
            {{ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {REDUCE, 27}, {REDUCE, 27}, {REDUCE, 27}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {ERROR, 58}, {REDUCE, 27}, },
            {{ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {SHIFT, 82}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, {ERROR, 59}, },
            {{ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {REDUCE, 35}, {REDUCE, 35}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {ERROR, 60}, {REDUCE, 35}, },
            {{ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {REDUCE, 37}, {REDUCE, 37}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {SHIFT, 59}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {REDUCE, 40}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {ERROR, 61}, {REDUCE, 37}, },
            {{ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {SHIFT, 84}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, {ERROR, 62}, },
            {{ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {REDUCE, 39}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, {ERROR, 63}, },
            {{ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {SHIFT, 85}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, {ERROR, 64}, },
            {{ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {SHIFT, 86}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {ERROR, 65}, {REDUCE, 80}, },
            {{ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {REDUCE, 48}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {ERROR, 66}, {REDUCE, 48}, },
            {{ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {SHIFT, 89}, {SHIFT, 90}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, {ERROR, 67}, },
            {{ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {SHIFT, 92}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {REDUCE, 62}, {REDUCE, 62}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, {ERROR, 68}, },
            {{ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {SHIFT, 93}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, {ERROR, 69}, },
            {{ERROR, 70}, {REDUCE, 24}, {ERROR, 70}, {REDUCE, 24}, {REDUCE, 24}, {REDUCE, 24}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {REDUCE, 24}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {ERROR, 70}, {REDUCE, 24}, },
            {{ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {REDUCE, 60}, {ERROR, 71}, {SHIFT, 41}, {ERROR, 71}, {SHIFT, 42}, {REDUCE, 60}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {ERROR, 71}, {REDUCE, 60}, {ERROR, 71}, {REDUCE, 60}, {ERROR, 71}, {ERROR, 71}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 71}, {ERROR, 71}, },
            {{ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {REDUCE, 54}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {REDUCE, 54}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {REDUCE, 54}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, {ERROR, 72}, },
            {{ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {REDUCE, 56}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {REDUCE, 56}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {SHIFT, 71}, {ERROR, 73}, {REDUCE, 56}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, {ERROR, 73}, },
            {{ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {REDUCE, 59}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {REDUCE, 59}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {REDUCE, 59}, {ERROR, 74}, {REDUCE, 59}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, {ERROR, 74}, },
            {{ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {REDUCE, 76}, {REDUCE, 76}, {ERROR, 75}, {ERROR, 75}, {REDUCE, 76}, {ERROR, 75}, {REDUCE, 76}, {ERROR, 75}, {REDUCE, 76}, {REDUCE, 76}, {ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {ERROR, 75}, {REDUCE, 76}, {ERROR, 75}, {REDUCE, 76}, {ERROR, 75}, {ERROR, 75}, {REDUCE, 76}, {REDUCE, 76}, {REDUCE, 76}, {REDUCE, 76}, {REDUCE, 76}, {ERROR, 75}, {ERROR, 75}, },
            {{ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {REDUCE, 75}, {REDUCE, 75}, {ERROR, 76}, {ERROR, 76}, {REDUCE, 75}, {ERROR, 76}, {REDUCE, 75}, {ERROR, 76}, {REDUCE, 75}, {REDUCE, 75}, {ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {ERROR, 76}, {REDUCE, 75}, {ERROR, 76}, {REDUCE, 75}, {ERROR, 76}, {ERROR, 76}, {REDUCE, 75}, {REDUCE, 75}, {REDUCE, 75}, {REDUCE, 75}, {REDUCE, 75}, {ERROR, 76}, {ERROR, 76}, },
            {{ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {REDUCE, 74}, {REDUCE, 74}, {ERROR, 77}, {ERROR, 77}, {REDUCE, 74}, {ERROR, 77}, {REDUCE, 74}, {ERROR, 77}, {REDUCE, 74}, {REDUCE, 74}, {ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {ERROR, 77}, {REDUCE, 74}, {ERROR, 77}, {REDUCE, 74}, {ERROR, 77}, {ERROR, 77}, {REDUCE, 74}, {REDUCE, 74}, {REDUCE, 74}, {REDUCE, 74}, {REDUCE, 74}, {ERROR, 77}, {ERROR, 77}, },
            {{ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {REDUCE, 61}, {ERROR, 78}, {REDUCE, 61}, {ERROR, 78}, {REDUCE, 61}, {REDUCE, 61}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {ERROR, 78}, {REDUCE, 61}, {ERROR, 78}, {REDUCE, 61}, {ERROR, 78}, {ERROR, 78}, {REDUCE, 61}, {REDUCE, 61}, {REDUCE, 61}, {REDUCE, 61}, {REDUCE, 61}, {ERROR, 78}, {ERROR, 78}, },
            {{ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {REDUCE, 72}, {REDUCE, 72}, {ERROR, 79}, {ERROR, 79}, {REDUCE, 72}, {ERROR, 79}, {REDUCE, 72}, {ERROR, 79}, {REDUCE, 72}, {REDUCE, 72}, {ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {ERROR, 79}, {REDUCE, 72}, {ERROR, 79}, {REDUCE, 72}, {ERROR, 79}, {ERROR, 79}, {REDUCE, 72}, {REDUCE, 72}, {REDUCE, 72}, {REDUCE, 72}, {REDUCE, 72}, {ERROR, 79}, {ERROR, 79}, },
            {{ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {REDUCE, 32}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {REDUCE, 32}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, {ERROR, 80}, },
            {{ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {REDUCE, 30}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, {ERROR, 81}, },
            {{ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {REDUCE, 46}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {REDUCE, 46}, {ERROR, 82}, {SHIFT, 96}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, {ERROR, 82}, },
            {{ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {REDUCE, 36}, {REDUCE, 36}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {ERROR, 83}, {REDUCE, 36}, },
            {{ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {SHIFT, 99}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, {ERROR, 84}, },
            {{ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {SHIFT, 35}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, {ERROR, 85}, },
            {{ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {SHIFT, 101}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {ERROR, 86}, {REDUCE, 83}, },
            {{ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {ERROR, 87}, {REDUCE, 0}, },
            {{ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {ERROR, 88}, {REDUCE, 79}, },
            {{ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {REDUCE, 77}, {ERROR, 89}, {REDUCE, 77}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {ERROR, 89}, {REDUCE, 77}, {REDUCE, 77}, {REDUCE, 77}, {REDUCE, 77}, {REDUCE, 77}, {ERROR, 89}, {ERROR, 89}, },
            {{ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {REDUCE, 78}, {ERROR, 90}, {REDUCE, 78}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {ERROR, 90}, {REDUCE, 78}, {REDUCE, 78}, {REDUCE, 78}, {REDUCE, 78}, {REDUCE, 78}, {ERROR, 90}, {ERROR, 90}, },
            {{ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {SHIFT, 41}, {ERROR, 91}, {SHIFT, 42}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {ERROR, 91}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 91}, {ERROR, 91}, },
            {{ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {ERROR, 92}, {ERROR, 92}, {ERROR, 92}, },
            {{ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {ERROR, 93}, {REDUCE, 66}, {ERROR, 93}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {ERROR, 93}, {ERROR, 93}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {ERROR, 93}, {REDUCE, 66}, {ERROR, 93}, {ERROR, 93}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {REDUCE, 66}, {ERROR, 93}, {ERROR, 93}, },
            {{ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {REDUCE, 57}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {REDUCE, 57}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {REDUCE, 57}, {ERROR, 94}, {REDUCE, 57}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, {ERROR, 94}, },
            {{ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {REDUCE, 55}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {REDUCE, 55}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {REDUCE, 55}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, {ERROR, 95}, },
            {{ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {SHIFT, 106}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, {ERROR, 96}, },
            {{ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {REDUCE, 43}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {SHIFT, 107}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, {ERROR, 97}, },
            {{ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {REDUCE, 45}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {REDUCE, 45}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, {ERROR, 98}, },
            {{ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {REDUCE, 60}, {ERROR, 99}, {SHIFT, 41}, {ERROR, 99}, {SHIFT, 42}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {ERROR, 99}, {REDUCE, 60}, {ERROR, 99}, {REDUCE, 60}, {ERROR, 99}, {ERROR, 99}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 99}, {ERROR, 99}, },
            {{ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {SHIFT, 111}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, {ERROR, 100}, },
            {{ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {SHIFT, 112}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, {ERROR, 101}, },
            {{ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {ERROR, 102}, {REDUCE, 81}, },
            {{ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {SHIFT, 101}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {ERROR, 103}, {REDUCE, 83}, },
            {{ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {SHIFT, 114}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, {ERROR, 104}, },
            {{ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {SHIFT, 115}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, {ERROR, 105}, },
            {{ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {REDUCE, 47}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {REDUCE, 47}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, {ERROR, 106}, },
            {{ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {SHIFT, 116}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, {ERROR, 107}, },
            {{ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {SHIFT, 117}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, {ERROR, 108}, },
            {{ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {REDUCE, 43}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {SHIFT, 107}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, {ERROR, 109}, },
            {{ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {REDUCE, 52}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {SHIFT, 119}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, {ERROR, 110}, },
            {{ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {REDUCE, 50}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {ERROR, 111}, {REDUCE, 50}, },
            {{ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {REDUCE, 92}, {REDUCE, 92}, {ERROR, 112}, {ERROR, 112}, {REDUCE, 92}, {ERROR, 112}, {REDUCE, 92}, {ERROR, 112}, {SHIFT, 122}, {ERROR, 112}, {SHIFT, 123}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {REDUCE, 92}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {REDUCE, 92}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, {ERROR, 112}, },
            {{ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {ERROR, 113}, {REDUCE, 82}, },
            {{ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {ERROR, 114}, {REDUCE, 70}, {ERROR, 114}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {ERROR, 114}, {ERROR, 114}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {ERROR, 114}, {REDUCE, 70}, {ERROR, 114}, {ERROR, 114}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {REDUCE, 70}, {ERROR, 114}, {ERROR, 114}, },
            {{ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {ERROR, 115}, {REDUCE, 71}, {ERROR, 115}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {ERROR, 115}, {ERROR, 115}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {ERROR, 115}, {REDUCE, 71}, {ERROR, 115}, {ERROR, 115}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {REDUCE, 71}, {ERROR, 115}, {ERROR, 115}, },
            {{ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {REDUCE, 46}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {REDUCE, 46}, {ERROR, 116}, {SHIFT, 96}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, {ERROR, 116}, },
            {{ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {REDUCE, 41}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, {ERROR, 117}, },
            {{ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {REDUCE, 42}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, {ERROR, 118}, },
            {{ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {REDUCE, 60}, {ERROR, 119}, {SHIFT, 41}, {ERROR, 119}, {SHIFT, 42}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {REDUCE, 60}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {ERROR, 119}, {SHIFT, 43}, {SHIFT, 44}, {SHIFT, 45}, {SHIFT, 46}, {SHIFT, 47}, {ERROR, 119}, {ERROR, 119}, },
            {{ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {SHIFT, 130}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, {ERROR, 120}, },
            {{ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {REDUCE, 51}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, {ERROR, 121}, },
            {{ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {REDUCE, 92}, {REDUCE, 92}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {REDUCE, 92}, {ERROR, 122}, {ERROR, 122}, {REDUCE, 92}, {SHIFT, 123}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {REDUCE, 92}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, {ERROR, 122}, },
            {{ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {SHIFT, 132}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, {ERROR, 123}, },
            {{ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {SHIFT, 133}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, {ERROR, 124}, },
            {{ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {REDUCE, 87}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {SHIFT, 134}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, {ERROR, 125}, },
            {{ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {REDUCE, 98}, {REDUCE, 98}, {ERROR, 126}, {ERROR, 126}, {REDUCE, 95}, {ERROR, 126}, {SHIFT, 137}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {REDUCE, 95}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {REDUCE, 98}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, {ERROR, 126}, },
            {{ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {REDUCE, 91}, {REDUCE, 91}, {ERROR, 127}, {ERROR, 127}, {REDUCE, 91}, {ERROR, 127}, {REDUCE, 91}, {ERROR, 127}, {ERROR, 127}, {REDUCE, 91}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {REDUCE, 91}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {REDUCE, 91}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, {ERROR, 127}, },
            {{ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {REDUCE, 44}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {REDUCE, 44}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, {ERROR, 128}, },
            {{ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {REDUCE, 53}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, {ERROR, 129}, },
            {{ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {REDUCE, 38}, {REDUCE, 38}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {REDUCE, 38}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {REDUCE, 38}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {ERROR, 130}, {REDUCE, 38}, },
            {{ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {REDUCE, 98}, {REDUCE, 98}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {SHIFT, 137}, {ERROR, 131}, {ERROR, 131}, {REDUCE, 95}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {REDUCE, 98}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, {ERROR, 131}, },
            {{ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {SHIFT, 143}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, {ERROR, 132}, },
            {{ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {REDUCE, 84}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {ERROR, 133}, {REDUCE, 84}, },
            {{ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {REDUCE, 92}, {REDUCE, 92}, {ERROR, 134}, {ERROR, 134}, {REDUCE, 92}, {ERROR, 134}, {REDUCE, 92}, {ERROR, 134}, {SHIFT, 122}, {ERROR, 134}, {SHIFT, 123}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {REDUCE, 92}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {REDUCE, 92}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, {ERROR, 134}, },
            {{ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {REDUCE, 85}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, {ERROR, 135}, },
            {{ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {REDUCE, 87}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {SHIFT, 134}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, {ERROR, 136}, },
            {{ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {SHIFT, 146}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, {ERROR, 137}, },
            {{ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {REDUCE, 89}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {REDUCE, 89}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, {ERROR, 138}, },
            {{ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {REDUCE, 98}, {REDUCE, 98}, {ERROR, 139}, {ERROR, 139}, {REDUCE, 95}, {ERROR, 139}, {SHIFT, 137}, {ERROR, 139}, {ERROR, 139}, {REDUCE, 95}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {REDUCE, 95}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {REDUCE, 98}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, {ERROR, 139}, },
            {{ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {SHIFT, 148}, {SHIFT, 149}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {REDUCE, 101}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, {ERROR, 140}, },
            {{ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {REDUCE, 97}, {REDUCE, 97}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {REDUCE, 97}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, {ERROR, 141}, },
            {{ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {SHIFT, 152}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, {ERROR, 142}, },
            {{ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {REDUCE, 93}, {REDUCE, 93}, {ERROR, 143}, {ERROR, 143}, {REDUCE, 93}, {ERROR, 143}, {REDUCE, 93}, {ERROR, 143}, {ERROR, 143}, {REDUCE, 93}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {REDUCE, 93}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {REDUCE, 93}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, {ERROR, 143}, },
            {{ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {REDUCE, 88}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {REDUCE, 88}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, {ERROR, 144}, },
            {{ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {REDUCE, 86}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, {ERROR, 145}, },
            {{ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {SHIFT, 153}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, {ERROR, 146}, },
            {{ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {REDUCE, 94}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {REDUCE, 94}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {REDUCE, 94}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, {ERROR, 147}, },
            {{ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {SHIFT, 154}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, {ERROR, 148}, },
            {{ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {SHIFT, 155}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, {ERROR, 149}, },
            {{ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {SHIFT, 156}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, {ERROR, 150}, },
            {{ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {REDUCE, 100}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, {ERROR, 151}, },
            {{ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {REDUCE, 90}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {REDUCE, 90}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, {ERROR, 152}, },
            {{ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {SHIFT, 157}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, {ERROR, 153}, },
            {{ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {REDUCE, 102}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, {ERROR, 154}, },
            {{ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {REDUCE, 103}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, {ERROR, 155}, },
            {{ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {REDUCE, 73}, {REDUCE, 73}, {ERROR, 156}, {ERROR, 156}, {REDUCE, 73}, {ERROR, 156}, {REDUCE, 73}, {ERROR, 156}, {ERROR, 156}, {REDUCE, 73}, {ERROR, 156}, {ERROR, 156}, {SHIFT, 75}, {ERROR, 156}, {SHIFT, 76}, {SHIFT, 77}, {REDUCE, 73}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {REDUCE, 73}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, {ERROR, 156}, },
            {{ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {REDUCE, 99}, {REDUCE, 99}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {REDUCE, 99}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, {ERROR, 157}, },
            {{ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {REDUCE, 96}, {REDUCE, 96}, {ERROR, 158}, {ERROR, 158}, {REDUCE, 96}, {ERROR, 158}, {REDUCE, 96}, {ERROR, 158}, {ERROR, 158}, {REDUCE, 96}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {REDUCE, 96}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {REDUCE, 96}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, {ERROR, 158}, },
        }; */
    private /*final*/ static int[][] gotoTable; /* =
        {
            {2, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 15, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 32, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 50, 51, 52, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 68, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 49, 50, 51, 52, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 51, 52, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 61, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 50, 51, 52, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 49, 50, 51, 52, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 126, 127, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 49, 50, 51, 52, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 127, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 139, 140, 141, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 139, 140, 141, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 126, 127, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 139, 140, 141, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 151, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
        }; */
    private /*final*/ static String[] errors; /* =
        {
            "TPackage TStates THelpers TTokens TIgnored TProductions *EOF* expected.",
            "TPackage TStates THelpers TTokens TIgnored TProductions TTokenSpecifier TProductionSpecifier TId TPkgId expected.",
            "*EOF* expected.",
            "TStates THelpers TTokens TIgnored TProductions *EOF* expected.",
            "TStates THelpers TTokens TIgnored TProductions *EOF* expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TStates THelpers TTokens TIgnored TProductions *EOF* expected.",
            "TStates THelpers TTokens TIgnored TProductions *EOF* expected.",
            "TDot TSemicolon expected.",
            "TStates TTokens TIgnored TProductions TId *EOF* expected.",
            "TStates TTokens TIgnored TProductions *EOF* expected.",
            "TStates TTokens TIgnored TProductions *EOF* expected.",
            "TPackage TStates THelpers TTokens TIgnored TProductions TTokenSpecifier TProductionSpecifier TId TPkgId expected.",
            "TSemicolon expected.",
            "TDot TSemicolon expected.",
            "TEqual expected.",
            "TStates TTokens TIgnored TProductions *EOF* expected.",
            "TStates TTokens TIgnored TProductions TId *EOF* expected.",
            "TId expected.",
            "TTokens TIgnored TProductions *EOF* expected.",
            "TTokens TIgnored TProductions *EOF* expected.",
            "TDot TSemicolon expected.",
            "TStates THelpers TTokens TIgnored TProductions *EOF* expected.",
            "TSemicolon expected.",
            "TSemicolon TLBkt TLPar TBar TId TChar TDecChar THexChar TString expected.",
            "TStates TTokens TIgnored TProductions *EOF* expected.",
            "TSemicolon TComma expected.",
            "TSemicolon expected.",
            "TSemicolon expected.",
            "TIgnored TProductions TLBrace TId *EOF* expected.",
            "TIgnored TProductions *EOF* expected.",
            "TIgnored TProductions *EOF* expected.",
            "TLBkt TLPar TId TChar TDecChar THexChar TString expected.",
            "TLBkt TLPar TRPar TBar TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TDDot TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TDDot TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TDDot TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon expected.",
            "TSemicolon TRPar TBar TSlash expected.",
            "TSemicolon TRPar TBar TSlash expected.",
            "TSemicolon TLBkt TLPar TRPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TLBkt TLPar TRPar TPlus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TLBkt TRBkt TLPar TRPar TPlus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TId expected.",
            "TSemicolon expected.",
            "TSemicolon TComma expected.",
            "TTokens TIgnored TProductions *EOF* expected.",
            "TId expected.",
            "TIgnored TProductions *EOF* expected.",
            "TIgnored TProductions TLBrace TId *EOF* expected.",
            "TId expected.",
            "TId expected.",
            "TTokens expected.",
            "TProductions *EOF* expected.",
            "TProductions *EOF* expected.",
            "TPlus TMinus expected.",
            "TDDot TPlus TMinus expected.",
            "TRPar expected.",
            "TStates TTokens TIgnored TProductions TId *EOF* expected.",
            "TSemicolon TLBkt TLPar TRPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TRPar TSlash expected.",
            "TSemicolon TRPar TBar TSlash expected.",
            "TSemicolon TRPar TBar TSlash expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TLPar TRPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TLPar TRPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TLPar TRPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TLBkt TLPar TRPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TLPar TRPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TComma expected.",
            "TSemicolon expected.",
            "TRBrace TComma TArrow expected.",
            "TIgnored TProductions *EOF* expected.",
            "TEqual expected.",
            "TId expected.",
            "TId *EOF* expected.",
            "*EOF* expected.",
            "*EOF* expected.",
            "TLBkt TLPar TId TChar TDecChar THexChar TString expected.",
            "TLBkt TLPar TId TChar TDecChar THexChar TString expected.",
            "TLBkt TLPar TId TChar TDecChar THexChar TString expected.",
            "TChar TDecChar THexChar expected.",
            "TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TRPar TBar TSlash expected.",
            "TSemicolon TRPar TSlash expected.",
            "TId expected.",
            "TRBrace TComma expected.",
            "TRBrace TComma expected.",
            "TSemicolon TLBkt TLPar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon expected.",
            "TEqual expected.",
            "*EOF* expected.",
            "TId *EOF* expected.",
            "TRBkt expected.",
            "TRBkt expected.",
            "TRBrace TComma expected.",
            "TId expected.",
            "TRBrace expected.",
            "TRBrace TComma expected.",
            "TSemicolon TSlash expected.",
            "TProductions *EOF* expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TLPar TLBrace TBar TId expected.",
            "*EOF* expected.",
            "TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TSemicolon TLBkt TRBkt TLPar TRPar TPlus TMinus TQMark TStar TBar TSlash TId TChar TDecChar THexChar TString expected.",
            "TRBrace TComma TArrow expected.",
            "TId expected.",
            "TRBrace expected.",
            "TSemicolon TLBkt TLPar TBar TId TChar TDecChar THexChar TString expected.",
            "TSemicolon expected.",
            "TSemicolon expected.",
            "TTokenSpecifier TProductionSpecifier TLBkt TRPar TLBrace TId expected.",
            "TId expected.",
            "TSemicolon expected.",
            "TSemicolon TBar expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TBar TId expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TRPar TBar TId expected.",
            "TRBrace TComma expected.",
            "TSemicolon expected.",
            "TIgnored TProductions TLBrace TId *EOF* expected.",
            "TTokenSpecifier TProductionSpecifier TLBkt TRPar TId expected.",
            "TRBrace expected.",
            "TId *EOF* expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TLPar TLBrace TBar TId expected.",
            "TSemicolon expected.",
            "TSemicolon TBar expected.",
            "TId expected.",
            "TSemicolon TBar expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TRPar TBar TId expected.",
            "TTokenSpecifier TProductionSpecifier TId expected.",
            "TTokenSpecifier TProductionSpecifier TId expected.",
            "TRPar expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TRPar TBar TId expected.",
            "TSemicolon TBar expected.",
            "TSemicolon expected.",
            "TRBkt expected.",
            "TSemicolon TRPar TBar expected.",
            "TDot expected.",
            "TDot expected.",
            "TId expected.",
            "TId expected.",
            "TSemicolon TBar expected.",
            "TColon expected.",
            "TId expected.",
            "TId expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TRPar TPlus TQMark TStar TBar TId expected.",
            "TTokenSpecifier TProductionSpecifier TId expected.",
            "TTokenSpecifier TProductionSpecifier TSemicolon TLBkt TRPar TBar TId expected.",
        }; */
}
