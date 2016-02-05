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

package ca.mcgill.sable.sablecc.lexer;

import java.io.*;
import java.util.Stack;
import java.util.Vector;

import ca.mcgill.sable.sablecc.util.*;
import ca.mcgill.sable.sablecc.node.*;

public final class Lexer
{
    private final Reader in;

    public Lexer(Reader in)
    {
        this.in = in;
    }

    private Token token;

    public Token peek() throws LexerException, IOException
    {
        if(token == null)
        {
            token = getToken();
        }

        return token;
    }

    public Token next() throws LexerException, IOException
    {
        if(token == null)
        {
            return getToken();
        }

        Token result = token;
        token = null;
        return result;
    }

    private int line;
    private int pos;

    private boolean cr;

    private Token getToken() throws IOException, LexerException
    {
        int state = 0;

        int start_pos = pos;
        int start_line = line;

        int accept_state = -1;
        int accept_token = -1;
        int accept_length = -1;
        int accept_pos = -1;
        int accept_line = -1;

        StringBuffer text = new StringBuffer();

        while(true)
        {
            int c = getChar();

            if(c != -1)
            {
                switch(c)
                {
                case 10:
                    if(cr)
                    {
                        cr = false;
                    }
                    else
                    {
                        line++;
                        pos = 0;
                    }
                    break;
                case 13:
                    line++;
                    pos = 0;
                    cr = true;
                    break;
                default:
                    pos++;
                    cr = false;
                    break;
                };

                text.append((char) c);

                int oldState = state;
                state = -1;

                int low = 0;
                int high = gotoTable[oldState].length - 1;

                while(low <= high)
                {
                    int middle = (low + high) / 2;

                    if(c < gotoTable[oldState][middle][0])
                    {
                        high = middle - 1;
                    }
                    else if(c > gotoTable[oldState][middle][1])
                    {
                        low = middle + 1;
                    }
                    else
                    {
                        state = gotoTable[oldState][middle][2];
                        break;
                    }
                }
            }
            else
            {
                state = -1;
            }

            if(state >= 0)
            {
                if(accept[state] != -1)
                {
                    accept_state = state;
                    accept_token = accept[state];
                    accept_length = text.length();
                    accept_pos = pos;
                    accept_line = line;
                }
            }
            else
            {
                if(accept_state != -1)
                {
                    switch(accept_token)
                    {
                    case 0:
                        {
                            TPackage token = new TPackage();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 1:
                        {
                            TStates token = new TStates();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 2:
                        {
                            THelpers token = new THelpers();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 3:
                        {
                            TTokens token = new TTokens();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 4:
                        {
                            TIgnored token = new TIgnored();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 5:
                        {
                            TProductions token = new TProductions();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 6:
                        {
                            TTokenSpecifier token = new TTokenSpecifier();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 7:
                        {
                            TProductionSpecifier token = new TProductionSpecifier();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 8:
                        {
                            TDot token = new TDot();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 9:
                        {
                            TDDot token = new TDDot();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 10:
                        {
                            TSemicolon token = new TSemicolon();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 11:
                        {
                            TEqual token = new TEqual();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 12:
                        {
                            TLBkt token = new TLBkt();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 13:
                        {
                            TRBkt token = new TRBkt();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 14:
                        {
                            TLPar token = new TLPar();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 15:
                        {
                            TRPar token = new TRPar();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 16:
                        {
                            TLBrace token = new TLBrace();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 17:
                        {
                            TRBrace token = new TRBrace();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 18:
                        {
                            TPlus token = new TPlus();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 19:
                        {
                            TMinus token = new TMinus();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 20:
                        {
                            TQMark token = new TQMark();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 21:
                        {
                            TStar token = new TStar();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 22:
                        {
                            TBar token = new TBar();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 23:
                        {
                            TComma token = new TComma();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 24:
                        {
                            TSlash token = new TSlash();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 25:
                        {
                            TArrow token = new TArrow();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 26:
                        {
                            TColon token = new TColon();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 27:
                        {
                            TId token = new TId();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 28:
                        {
                            TChar token = new TChar();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 29:
                        {
                            TDecChar token = new TDecChar();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 30:
                        {
                            THexChar token = new THexChar();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 31:
                        {
                            TString token = new TString();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 32:
                        {
                            TPkgId token = new TPkgId();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 33:
                        {
                            TBlank token = new TBlank();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 34:
                        {
                            TComment token = new TComment();
                            token.setPos(start_pos + 1);
                            token.setLine(start_line + 1);
                            token.setText(text.toString().substring(0, accept_length));
                            pushBack(text.toString().substring(accept_length));
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    }
                }
                else
                {
                    if(text.length() > 0)
                    {
                        throw new LexerException(
                            "[" + (start_line + 1) + "," + (start_pos + 1) + "]" +
                            " Unknown token: " + text);
                    }
                    else
                    {
                        EOF token = new EOF();
                        token.setPos(start_pos + 1);
                        token.setLine(start_line + 1);
                        return token;
                    }
                }
            }
        }
    }

    private final Stack chars = new Stack();
    private boolean eof;

    private int getChar() throws IOException
    {
        if(!chars.empty())
        {
            return ((Integer) chars.pop()).intValue();
        }

        if(eof)
        {
            return -1;
        }

        int result = in.read();

        if(result == -1)
        {
            eof = true;
        }

        return result;
    }

    private void pushBack(String text)
    {
        for(int i = text.length() - 1; i >= 0; i--)
        {
            chars.push(new Integer((int) text.charAt(i)));
        }
    }

    private static int[][][] gotoTable =
    {
        {{9, 9, 1}, {10, 10, 2}, {13, 13, 3}, {32, 32, 4}, {36, 36, 5}, {39, 39, 6}, {40, 40, 7}, {41, 41, 8}, {42, 42, 9}, {43, 43, 10}, {44, 44, 11}, {45, 45, 12}, {46, 46, 13}, {47, 47, 14}, {48, 48, 15}, {49, 57, 16}, {58, 58, 17}, {59, 59, 18}, {61, 61, 19}, {63, 63, 20}, {65, 71, 21}, {72, 72, 22}, {73, 73, 23}, {74, 79, 21}, {80, 80, 24}, {81, 82, 21}, {83, 83, 25}, {84, 84, 26}, {85, 90, 21}, {91, 91, 27}, {93, 93, 28}, {95, 95, 29}, {97, 122, 30}, {123, 123, 31}, {124, 124, 32}, {125, 125, 33}, },
        {{9, 9, 1}, {10, 10, 2}, {13, 13, 3}, {32, 32, 4}, },
        {{9, 9, 1}, {10, 10, 2}, {13, 13, 3}, {32, 32, 4}, },
        {{9, 9, 1}, {10, 10, 34}, {13, 13, 3}, {32, 32, 4}, },
        {{9, 9, 1}, {10, 10, 2}, {13, 13, 3}, {32, 32, 4}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{0, 9, 40}, {11, 12, 40}, {14, 38, 40}, {39, 39, 41}, {40, 65535, 40}, },
        {},
        {},
        {},
        {},
        {},
        {{62, 62, 42}, },
        {{46, 46, 43}, },
        {{42, 42, 44}, {47, 47, 45}, },
        {{48, 57, 16}, {88, 88, 46}, {120, 120, 47}, },
        {{48, 57, 16}, },
        {},
        {},
        {},
        {},
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 100, 39}, {101, 101, 48}, {102, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 102, 39}, {103, 103, 49}, {104, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 97, 50}, {98, 113, 39}, {114, 114, 51}, {115, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 115, 39}, {116, 116, 52}, {117, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 110, 39}, {111, 111, 53}, {112, 122, 39}, },
        {},
        {},
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 54}, {65, 90, 37}, {95, 95, 55}, {97, 122, 56}, },
        {},
        {},
        {},
        {{9, 9, 1}, {10, 10, 2}, {13, 13, 3}, {32, 32, 4}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{0, 9, 57}, {11, 12, 57}, {14, 38, 57}, {39, 39, 58}, {40, 65535, 57}, },
        {{39, 39, 59}, },
        {},
        {},
        {{0, 41, 60}, {42, 42, 61}, {43, 65535, 60}, },
        {{0, 9, 62}, {10, 10, 63}, {11, 12, 62}, {13, 13, 64}, {14, 65535, 62}, },
        {{48, 57, 65}, {65, 70, 65}, {97, 102, 65}, },
        {{48, 57, 65}, {65, 70, 65}, {97, 102, 65}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 107, 39}, {108, 108, 66}, {109, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 109, 39}, {110, 110, 67}, {111, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 98, 39}, {99, 99, 68}, {100, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 110, 39}, {111, 111, 69}, {112, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 97, 70}, {98, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 106, 39}, {107, 107, 71}, {108, 122, 39}, },
        {{36, 36, 35}, {48, 57, 54}, {65, 90, 37}, {95, 95, 55}, {97, 122, 56}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 72}, },
        {{36, 36, 35}, {48, 57, 54}, {65, 90, 37}, {95, 95, 55}, {97, 122, 56}, },
        {{0, 9, 57}, {11, 12, 57}, {14, 38, 57}, {39, 39, 73}, {40, 65535, 57}, },
        {},
        {},
        {{0, 41, 60}, {42, 42, 61}, {43, 65535, 60}, },
        {{0, 41, 74}, {42, 42, 61}, {43, 46, 74}, {47, 47, 75}, {48, 65535, 74}, },
        {{0, 9, 62}, {10, 10, 63}, {11, 12, 62}, {13, 13, 64}, {14, 65535, 62}, },
        {},
        {{10, 10, 76}, },
        {{48, 57, 65}, {65, 70, 65}, {97, 102, 65}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 111, 39}, {112, 112, 77}, {113, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 110, 39}, {111, 111, 78}, {112, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 106, 39}, {107, 107, 79}, {108, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 99, 39}, {100, 100, 80}, {101, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 115, 39}, {116, 116, 81}, {117, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 100, 39}, {101, 101, 82}, {102, 122, 39}, },
        {{36, 36, 35}, {48, 57, 83}, {65, 90, 37}, {95, 95, 55}, {97, 122, 84}, },
        {},
        {{0, 41, 85}, {42, 42, 86}, {43, 65535, 85}, },
        {},
        {},
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 100, 39}, {101, 101, 87}, {102, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 113, 39}, {114, 114, 88}, {115, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 97, 89}, {98, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 116, 39}, {117, 117, 90}, {118, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 100, 39}, {101, 101, 91}, {102, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 109, 39}, {110, 110, 92}, {111, 122, 39}, },
        {{36, 36, 35}, {48, 57, 83}, {65, 90, 37}, {95, 95, 55}, {97, 122, 84}, },
        {{36, 36, 35}, {48, 57, 83}, {65, 90, 37}, {95, 95, 55}, {97, 122, 84}, },
        {{0, 41, 85}, {42, 42, 86}, {43, 65535, 85}, },
        {{0, 41, 74}, {42, 42, 86}, {43, 46, 74}, {47, 47, 75}, {48, 65535, 74}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 113, 39}, {114, 114, 93}, {115, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 100, 39}, {101, 101, 94}, {102, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 102, 39}, {103, 103, 95}, {104, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 98, 39}, {99, 99, 96}, {100, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 114, 39}, {115, 115, 97}, {116, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 114, 39}, {115, 115, 98}, {116, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 114, 39}, {115, 115, 99}, {116, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 99, 39}, {100, 100, 100}, {101, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 100, 39}, {101, 101, 101}, {102, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 115, 39}, {116, 116, 102}, {117, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 104, 39}, {105, 105, 103}, {106, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 110, 39}, {111, 111, 104}, {112, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 109, 39}, {110, 110, 105}, {111, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 114, 39}, {115, 115, 106}, {116, 122, 39}, },
        {{36, 36, 35}, {48, 57, 36}, {65, 90, 37}, {95, 95, 38}, {97, 122, 39}, },
    };

    private static int[] accept =
    {
        -1, 33, 33, 33, 33, 32, -1, 14, 15, 21, 18, 23, 19, 8, 24, 29, 29, 26, 10, 11, 20, 32, 32, 32, 7, 32, 6, 12, 13, 32, 27, 16, 22, 17, 33, 32, 32, 32, 32, 32, -1, -1, 25, 9, -1, -1, -1, -1, 32, 32, 32, 32, 32, 32, 27, 32, 27, -1, 28, 28, -1, -1, -1, 34, 34, 30, 32, 32, 32, 32, 32, 32, 27, 31, -1, 34, 34, 32, 32, 32, 32, 32, 32, 27, 27, -1, -1, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 1, 3, 2, 4, 0, 32, 32, 32, 32, 5,
    };
}
