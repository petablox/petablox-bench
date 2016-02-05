package wig.lexer;

import java.io.*;
import ca.mcgill.sable.util.*;
import wig.node.*;

public class Lexer
{
    protected Token token;
    protected State state = State.NORMAL;

    private PushbackReader in;
    private int line;
    private int pos;
    private boolean cr;
    private boolean eof;
    private final StringBuffer text = new StringBuffer();

    protected void filter() throws LexerException, IOException
    {
    }

    public Lexer(PushbackReader in)
    {
        this.in = in;

        if(gotoTable == null)
        {
            try
            {
                DataInputStream s = new DataInputStream(new BufferedInputStream(getClass().getResourceAsStream("lexer.dat")));

                // read gotoTable
                int length = s.readInt();
                gotoTable = new int[length][][];
                for(int i = 0; i < gotoTable.length; i++)
                {
                    length = s.readInt();
                    gotoTable[i] = new int[length][3];
                    for(int j = 0; j < gotoTable[i].length; j++)
                    {
                        for(int k = 0; k < 3; k++)
                        {
                            gotoTable[i][j][k] = s.readInt();
                        }
                    }
                }

                // read accept
                length = s.readInt();
                accept = new int[length][];
                for(int i = 0; i < accept.length; i++)
                {
                    length = s.readInt();
                    accept[i] = new int[length];
                    for(int j = 0; j < accept[i].length; j++)
                    {
                        accept[i][j] = s.readInt();
                    }
                }

                s.close();
            }
            catch(Exception e)
            {
                throw new RuntimeException("Unable to read lexer.dat.");
            }
        }
    }

    public Token peek() throws LexerException, IOException
    {
        while(token == null)
        {
            token = getToken();
            filter();
        }

        return token;
    }

    public Token next() throws LexerException, IOException
    {
        while(token == null)
        {
            token = getToken();
            filter();
        }

        Token result = token;
        token = null;
        return result;
    }

    protected Token getToken() throws IOException, LexerException
    {
        int dfa_state = 0;

        int start_pos = pos;
        int start_line = line;

        int accept_state = -1;
        int accept_token = -1;
        int accept_length = -1;
        int accept_pos = -1;
        int accept_line = -1;

        text.setLength(0);

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

                do
                {
                    int oldState = (dfa_state < -1) ? (-2 -dfa_state) : dfa_state;

                    dfa_state = -1;

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
                            dfa_state = gotoTable[oldState][middle][2];
                            break;
                        }
                    }
                }while(dfa_state < -1);
            }
            else
            {
                dfa_state = -1;
            }

            if(dfa_state >= 0)
            {
                if(accept[state.id()][dfa_state] != -1)
                {
                    accept_state = dfa_state;
                    accept_token = accept[state.id()][dfa_state];
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
                            Token token = new0(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                            }
                            return token;
                        }
                    case 1:
                        {
                            Token token = new1(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL_DOC; break;
                            }
                            return token;
                        }
                    case 2:
                        {
                            Token token = new2(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL_SES; break;
                                case 3: state = State.NORMAL_SES; break;
                            }
                            return token;
                        }
                    case 3:
                        {
                            Token token = new3(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                            }
                            return token;
                        }
                    case 4:
                        {
                            Token token = new4(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 5:
                        {
                            Token token = new5(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 6:
                        {
                            Token token = new6(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 7:
                        {
                            Token token = new7(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 8:
                        {
                            Token token = new8(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 9:
                        {
                            Token token = new9(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 10:
                        {
                            Token token = new10(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 11:
                        {
                            Token token = new11(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 12:
                        {
                            Token token = new12(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 13:
                        {
                            Token token = new13(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 14:
                        {
                            Token token = new14(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 15:
                        {
                            Token token = new15(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 16:
                        {
                            Token token = new16(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 17:
                        {
                            Token token = new17(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 18:
                        {
                            Token token = new18(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 19:
                        {
                            Token token = new19(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 20:
                        {
                            Token token = new20(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 21:
                        {
                            Token token = new21(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 22:
                        {
                            Token token = new22(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 23:
                        {
                            Token token = new23(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 24:
                        {
                            Token token = new24(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 25:
                        {
                            Token token = new25(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 26:
                        {
                            Token token = new26(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 27:
                        {
                            Token token = new27(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 28:
                        {
                            Token token = new28(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 29:
                        {
                            Token token = new29(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 30:
                        {
                            Token token = new30(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 31:
                        {
                            Token token = new31(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 32:
                        {
                            Token token = new32(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 33:
                        {
                            Token token = new33(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 34:
                        {
                            Token token = new34(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 35:
                        {
                            Token token = new35(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 36:
                        {
                            Token token = new36(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 37:
                        {
                            Token token = new37(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 38:
                        {
                            Token token = new38(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 39:
                        {
                            Token token = new39(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 10: state = State.NORMAL_DOC; break;
                            }
                            return token;
                        }
                    case 40:
                        {
                            Token token = new40(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 10: state = State.NORMAL_DOC; break;
                            }
                            return token;
                        }
                    case 41:
                        {
                            Token token = new41(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 4: state = State.STR_STARTN; break;
                                case 12: state = State.STR_STARTN1; break;
                                case 5: state = State.STR_STARTS; break;
                            }
                            return token;
                        }
                    case 42:
                        {
                            Token token = new42(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 43:
                        {
                            Token token = new43(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                                case 10: state = State.NORMAL_DOC; break;
                                case 11: state = State.NORMAL_SES; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 44:
                        {
                            Token token = new44(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 45:
                        {
                            Token token = new45(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 46:
                        {
                            Token token = new46(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 47:
                        {
                            Token token = new47(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 48:
                        {
                            Token token = new48(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                                case 0: state = State.NORMAL; break;
                            }
                            return token;
                        }
                    case 49:
                        {
                            Token token = new49(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 50:
                        {
                            Token token = new50(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 51:
                        {
                            Token token = new51(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 52:
                        {
                            Token token = new52(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 53:
                        {
                            Token token = new53(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 54:
                        {
                            Token token = new54(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 55:
                        {
                            Token token = new55(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 56:
                        {
                            Token token = new56(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 57:
                        {
                            Token token = new57(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 58:
                        {
                            Token token = new58(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 59:
                        {
                            Token token = new59(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 60:
                        {
                            Token token = new60(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 61:
                        {
                            Token token = new61(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 62:
                        {
                            Token token = new62(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 63:
                        {
                            Token token = new63(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 64:
                        {
                            Token token = new64(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 65:
                        {
                            Token token = new65(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 66:
                        {
                            Token token = new66(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 0: state = State.NORMAL; break;
                                case 10: state = State.DOC; break;
                                case 11: state = State.SES; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 67:
                        {
                            Token token = new67(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 68:
                        {
                            Token token = new68(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 69:
                        {
                            Token token = new69(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 70:
                        {
                            Token token = new70(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 71:
                        {
                            Token token = new71(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 72:
                        {
                            Token token = new72(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 73:
                        {
                            Token token = new73(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 74:
                        {
                            Token token = new74(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 75:
                        {
                            Token token = new75(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 76:
                        {
                            Token token = new76(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 77:
                        {
                            Token token = new77(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.SPECIAL1; break;
                            }
                            return token;
                        }
                    case 78:
                        {
                            Token token = new78(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.SPECIAL1; break;
                            }
                            return token;
                        }
                    case 79:
                        {
                            Token token = new79(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.SPECIAL1; break;
                            }
                            return token;
                        }
                    case 80:
                        {
                            Token token = new80(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.SPECIAL1; break;
                            }
                            return token;
                        }
                    case 81:
                        {
                            Token token = new81(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.SPECIAL1; break;
                            }
                            return token;
                        }
                    case 82:
                        {
                            Token token = new82(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 6: state = State.SPECIAL2; break;
                            }
                            return token;
                        }
                    case 83:
                        {
                            Token token = new83(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 7: state = State.SPECIAL3; break;
                            }
                            return token;
                        }
                    case 84:
                        {
                            Token token = new84(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 9: state = State.SPECIAL4; break;
                            }
                            return token;
                        }
                    case 85:
                        {
                            Token token = new85(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 86:
                        {
                            Token token = new86(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 87:
                        {
                            Token token = new87(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 88:
                        {
                            Token token = new88(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 89:
                        {
                            Token token = new89(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 90:
                        {
                            Token token = new90(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 91:
                        {
                            Token token = new91(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 92:
                        {
                            Token token = new92(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 93:
                        {
                            Token token = new93(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 94:
                        {
                            Token token = new94(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 95:
                        {
                            Token token = new95(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 96:
                        {
                            Token token = new96(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC1; break;
                            }
                            return token;
                        }
                    case 97:
                        {
                            Token token = new97(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.NORMAL; break;
                                case 0: state = State.NORMAL; break;
                                case 3: state = State.SES; break;
                            }
                            return token;
                        }
                    case 98:
                        {
                            Token token = new98(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.SPECIAL4; break;
                                case 0: state = State.STR_STARTN; break;
                                case 10: state = State.STR_STARTN1; break;
                                case 3: state = State.STR_STARTS; break;
                                case 8: state = State.SPECIAL4; break;
                                case 9: state = State.DOC1; break;
                                case 4: state = State.NORMAL; break;
                                case 12: state = State.NORMAL_DOC; break;
                                case 5: state = State.SES; break;
                            }
                            return token;
                        }
                    case 99:
                        {
                            Token token = new99(
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 1: state = State.DOC; break;
                            }
                            return token;
                        }
                    case 100:
                        {
                            Token token = new100(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                                case 1: state = State.DOC1; break;
                                case 0: state = State.NORMAL; break;
                                case 10: state = State.NORMAL_DOC; break;
                                case 11: state = State.NORMAL_SES; break;
                                case 3: state = State.SES; break;
                                case 6: state = State.SPECIAL1; break;
                                case 7: state = State.SPECIAL2; break;
                                case 8: state = State.SPECIAL3; break;
                                case 9: state = State.SPECIAL4; break;
                                case 4: state = State.STR_STARTN; break;
                                case 5: state = State.STR_STARTS; break;
                            }
                            return token;
                        }
                    case 101:
                        {
                            Token token = new101(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            return token;
                        }
                    case 102:
                        {
                            Token token = new102(
                                getText(accept_length),
                                start_line + 1,
                                start_pos + 1);
                            pushBack(accept_length);
                            pos = accept_pos;
                            line = accept_line;
                            switch(state.id())
                            {
                                case 2: state = State.DOC; break;
                            }
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
                        EOF token = new EOF(
                            start_line + 1,
                            start_pos + 1);
                        return token;
                    }
                }
            }
        }
    }

    Token new0(int line, int pos) { return new TService(line, pos); }
    Token new1(int line, int pos) { return new TDocument(line, pos); }
    Token new2(int line, int pos) { return new TSession(line, pos); }
    Token new3(int line, int pos) { return new TGlobal(line, pos); }
    Token new4(int line, int pos) { return new TLocal(line, pos); }
    Token new5(int line, int pos) { return new TAssignSes(line, pos); }
    Token new6(int line, int pos) { return new TStop(line, pos); }
    Token new7(int line, int pos) { return new TTake(line, pos); }
    Token new8(int line, int pos) { return new TShow(line, pos); }
    Token new9(int line, int pos) { return new TIn(line, pos); }
    Token new10(int line, int pos) { return new TOut(line, pos); }
    Token new11(int line, int pos) { return new TRandom(line, pos); }
    Token new12(int line, int pos) { return new TSystem(line, pos); }
    Token new13(int line, int pos) { return new TBool(line, pos); }
    Token new14(int line, int pos) { return new TText(line, pos); }
    Token new15(int line, int pos) { return new TInt(line, pos); }
    Token new16(int line, int pos) { return new TIf(line, pos); }
    Token new17(int line, int pos) { return new TElse(line, pos); }
    Token new18(int line, int pos) { return new TWhile(line, pos); }
    Token new19(int line, int pos) { return new TEqualSes(line, pos); }
    Token new20(int line, int pos) { return new TGt(line, pos); }
    Token new21(int line, int pos) { return new TAnd(line, pos); }
    Token new22(int line, int pos) { return new TNot(line, pos); }
    Token new23(int line, int pos) { return new TOr(line, pos); }
    Token new24(int line, int pos) { return new TAutoInc(line, pos); }
    Token new25(int line, int pos) { return new TInterval(line, pos); }
    Token new26(int line, int pos) { return new TPlus(line, pos); }
    Token new27(int line, int pos) { return new TMinus(line, pos); }
    Token new28(int line, int pos) { return new TMultiply(line, pos); }
    Token new29(int line, int pos) { return new TDivide(line, pos); }
    Token new30(int line, int pos) { return new TModulo(line, pos); }
    Token new31(int line, int pos) { return new TAbs(line, pos); }
    Token new32(int line, int pos) { return new TSemicolon(line, pos); }
    Token new33(int line, int pos) { return new TLeftBrack(line, pos); }
    Token new34(int line, int pos) { return new TRightBrack(line, pos); }
    Token new35(int line, int pos) { return new TLeftParen(line, pos); }
    Token new36(int line, int pos) { return new TRightParen(line, pos); }
    Token new37(int line, int pos) { return new TEnds(line, pos); }
    Token new38(int line, int pos) { return new TWith(line, pos); }
    Token new39(int line, int pos) { return new TLeftBrack1(line, pos); }
    Token new40(int line, int pos) { return new TRightBrack1(line, pos); }
    Token new41(String text, int line, int pos) { return new TString(text, line, pos); }
    Token new42(int line, int pos) { return new TComma(line, pos); }
    Token new43(String text, int line, int pos) { return new TIdentifier(text, line, pos); }
    Token new44(String text, int line, int pos) { return new TNumber(text, line, pos); }
    Token new45(String text, int line, int pos) { return new TTrue(text, line, pos); }
    Token new46(String text, int line, int pos) { return new TFalse(text, line, pos); }
    Token new47(int line, int pos) { return new TSpecify(line, pos); }
    Token new48(int line, int pos) { return new TAssignNormaldoc(line, pos); }
    Token new49(int line, int pos) { return new TBold(line, pos); }
    Token new50(int line, int pos) { return new TBoldEnd(line, pos); }
    Token new51(int line, int pos) { return new TItalic(line, pos); }
    Token new52(int line, int pos) { return new TItalicEnd(line, pos); }
    Token new53(int line, int pos) { return new THeader1(line, pos); }
    Token new54(int line, int pos) { return new THeader1End(line, pos); }
    Token new55(int line, int pos) { return new THeader2(line, pos); }
    Token new56(int line, int pos) { return new THeader2End(line, pos); }
    Token new57(int line, int pos) { return new TPara(line, pos); }
    Token new58(int line, int pos) { return new TBr(line, pos); }
    Token new59(int line, int pos) { return new THr(line, pos); }
    Token new60(int line, int pos) { return new TImg(line, pos); }
    Token new61(int line, int pos) { return new TSrc(line, pos); }
    Token new62(int line, int pos) { return new TInclude(line, pos); }
    Token new63(int line, int pos) { return new TFile(line, pos); }
    Token new64(int line, int pos) { return new TA(line, pos); }
    Token new65(int line, int pos) { return new TAEnd(line, pos); }
    Token new66(int line, int pos) { return new TOpenBr(line, pos); }
    Token new67(int line, int pos) { return new THref(line, pos); }
    Token new68(int line, int pos) { return new TList(line, pos); }
    Token new69(int line, int pos) { return new TListEnd(line, pos); }
    Token new70(int line, int pos) { return new TLi(line, pos); }
    Token new71(int line, int pos) { return new TTr(line, pos); }
    Token new72(int line, int pos) { return new TTrEnd(line, pos); }
    Token new73(int line, int pos) { return new TTd(line, pos); }
    Token new74(int line, int pos) { return new TTdEnd(line, pos); }
    Token new75(int line, int pos) { return new TTable(line, pos); }
    Token new76(int line, int pos) { return new TTableEnd(line, pos); }
    Token new77(int line, int pos) { return new TVar(line, pos); }
    Token new78(int line, int pos) { return new TSelect(line, pos); }
    Token new79(int line, int pos) { return new TInput(line, pos); }
    Token new80(int line, int pos) { return new TParam(line, pos); }
    Token new81(int line, int pos) { return new TResult(line, pos); }
    Token new82(int line, int pos) { return new TName(line, pos); }
    Token new83(int line, int pos) { return new TAssignSp2(line, pos); }
    Token new84(String text, int line, int pos) { return new TStringSp4(text, line, pos); }
    Token new85(int line, int pos) { return new TType(line, pos); }
    Token new86(int line, int pos) { return new TSize(line, pos); }
    Token new87(int line, int pos) { return new TValue(line, pos); }
    Token new88(int line, int pos) { return new TTextConst(line, pos); }
    Token new89(int line, int pos) { return new TRadio(line, pos); }
    Token new90(int line, int pos) { return new TApplet(line, pos); }
    Token new91(int line, int pos) { return new TAppletEnd(line, pos); }
    Token new92(int line, int pos) { return new TSelectEnd(line, pos); }
    Token new93(int line, int pos) { return new TCodebase(line, pos); }
    Token new94(int line, int pos) { return new TCode(line, pos); }
    Token new95(int line, int pos) { return new TWidth(line, pos); }
    Token new96(int line, int pos) { return new THeight(line, pos); }
    Token new97(int line, int pos) { return new TCloseBr(line, pos); }
    Token new98(int line, int pos) { return new TQuote(line, pos); }
    Token new99(int line, int pos) { return new TClose(line, pos); }
    Token new100(String text, int line, int pos) { return new TBlank(text, line, pos); }
    Token new101(String text, int line, int pos) { return new TComment(text, line, pos); }
    Token new102(String text, int line, int pos) { return new TString1(text, line, pos); }

    private int getChar() throws IOException
    {
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

    private void pushBack(int acceptLength) throws IOException
    {
        int length = text.length();
        for(int i = length - 1; i >= acceptLength; i--)
        {
            eof = false;

            in.unread(text.charAt(i));
        }
    }

    protected void unread(Token token) throws IOException
    {
        String text = token.getText();
        int length = text.length();

        for(int i = length - 1; i >= 0; i--)
        {
            eof = false;

            in.unread(text.charAt(i));
        }

        pos = token.getPos() - 1;
        line = token.getLine() - 1;
    }

    private String getText(int acceptLength)
    {
        StringBuffer s = new StringBuffer(acceptLength);
        for(int i = 0; i < acceptLength; i++)
        {
            s.append(text.charAt(i));
        }

        return s.toString();
    }

    private static int[][][] gotoTable;
/*  {
		{{0, 8, 1}, {9, 9, 2}, {10, 10, 3}, {11, 12, 1}, {13, 13, 4}, {14, 31, 1}, {32, 32, 5}, {33, 33, 1}, {34, 34, 6}, {35, 36, 1}, {37, 37, 7}, {38, 39, 1}, {40, 40, 8}, {41, 41, 9}, {42, 42, 10}, {43, 43, 11}, {44, 44, 12}, {45, 45, 13}, {46, 46, 14}, {47, 47, 15}, {48, 48, 16}, {49, 57, 17}, {58, 58, 18}, {59, 59, 19}, {60, 60, 20}, {61, 61, 21}, {62, 62, 22}, {63, 64, 1}, {65, 90, 23}, {91, 91, 24}, {92, 92, 1}, {93, 93, 25}, {94, 94, 1}, {95, 95, 23}, {96, 96, 1}, {97, 97, 26}, {98, 98, 27}, {99, 99, 28}, {100, 100, 29}, {101, 101, 30}, {102, 102, 31}, {103, 103, 32}, {104, 104, 33}, {105, 105, 34}, {106, 107, 23}, {108, 108, 35}, {109, 109, 23}, {110, 110, 36}, {111, 111, 37}, {112, 113, 23}, {114, 114, 38}, {115, 115, 39}, {116, 116, 40}, {117, 117, 23}, {118, 118, 41}, {119, 119, 42}, {120, 122, 23}, {123, 123, 43}, {124, 124, 44}, {125, 125, 45}, {126, 127, 1}, },
		{{0, 8, 1}, {9, 9, 46}, {11, 12, 1}, {14, 31, 1}, {32, 32, 46}, {33, 33, 1}, {35, 127, 1}, },
		{{0, 8, 46}, {9, 10, -2}, {11, 12, 46}, {13, 13, 4}, {14, 31, 46}, {32, 32, 5}, {33, 33, 46}, {35, 127, 46}, },
		{{9, 9, 47}, {10, 10, 3}, {13, 13, 4}, {32, 32, 48}, },
		{{9, 9, 47}, {10, 10, 49}, {13, 32, -5}, },
		{{0, 127, -4}, },
		{{114, 114, 50}, {116, 116, 51}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 33, -3}, {35, 42, 1}, {43, 43, 52}, {44, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 33, -3}, {35, 61, 1}, {62, 62, 53}, {63, 127, 1}, },
		{{0, 33, -3}, {35, 45, 1}, {46, 46, 54}, {47, 127, 1}, },
		{{0, 33, -3}, {35, 41, 1}, {42, 42, 55}, {43, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 33, -3}, {35, 47, 1}, {48, 57, 56}, {58, 127, 1}, },
		{{0, 33, -3}, {35, 60, 1}, {61, 61, 57}, {62, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 33, -3}, {35, 44, 1}, {45, 45, 58}, {46, 46, 1}, {47, 47, 59}, {48, 96, 1}, {97, 97, 60}, {98, 98, 61}, {99, 103, 1}, {104, 104, 62}, {105, 105, 63}, {106, 107, 1}, {108, 108, 64}, {109, 111, 1}, {112, 112, 65}, {113, 113, 1}, {114, 114, 66}, {115, 115, 67}, {116, 116, 68}, {117, 117, 69}, {118, 118, 70}, {119, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 47, -19}, {48, 57, 71}, {58, 64, 1}, {65, 90, 71}, {91, 94, 1}, {95, 95, 71}, {96, 96, 1}, {97, 122, 71}, {123, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 96, -25}, {97, 109, 71}, {110, 110, 72}, {111, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 110, 71}, {111, 111, 73}, {112, 122, 71}, {123, 127, 1}, },
		{{0, 110, -29}, {111, 111, 74}, {112, 127, -29}, },
		{{0, 110, -29}, {111, 111, 75}, {112, 127, -29}, },
		{{0, 96, -25}, {97, 107, 71}, {108, 108, 76}, {109, 109, 71}, {110, 110, 77}, {111, 127, -28}, },
		{{0, 96, -25}, {97, 97, 78}, {98, 104, 71}, {105, 105, 79}, {106, 122, 71}, {123, 127, 1}, },
		{{0, 107, -32}, {108, 108, 80}, {109, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 100, 71}, {101, 101, 81}, {102, 113, 71}, {114, 114, 82}, {115, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 101, 71}, {102, 102, 83}, {103, 109, 71}, {110, 110, 84}, {111, 127, -28}, },
		{{0, 110, -29}, {111, 111, 85}, {112, 127, -29}, },
		{{0, 96, -25}, {97, 97, 86}, {98, 110, 71}, {111, 111, 87}, {112, 127, -29}, },
		{{0, 96, -25}, {97, 113, 71}, {114, 114, 88}, {115, 127, -35}, },
		{{0, 96, -25}, {97, 97, 89}, {98, 122, 71}, {123, 127, 1}, },
		{{0, 100, -35}, {101, 101, 90}, {102, 103, 71}, {104, 104, 91}, {105, 105, 92}, {106, 113, 71}, {114, 114, 93}, {115, 115, 71}, {116, 116, 94}, {117, 120, 71}, {121, 121, 95}, {122, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 97, 96}, {98, 100, 71}, {101, 101, 97}, {102, 113, 71}, {114, 114, 98}, {115, 120, 71}, {121, 121, 99}, {122, 127, -41}, },
		{{0, 96, -25}, {97, 97, 100}, {98, 127, -40}, },
		{{0, 96, -25}, {97, 103, 71}, {104, 104, 101}, {105, 105, 102}, {106, 127, -33}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 9, 46}, {11, 12, 46}, {14, 33, 46}, {35, 127, 46}, },
		{{9, 32, -5}, },
		{{9, 32, -5}, },
		{{9, 32, -5}, },
		{{97, 97, 103}, },
		{{101, 101, 104}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 8, 105}, {9, 9, 106}, {10, 10, 107}, {11, 12, 105}, {13, 13, 107}, {14, 31, 105}, {32, 32, 106}, {33, 33, 105}, {34, 34, 107}, {35, 41, 105}, {42, 42, 108}, {43, 127, 105}, },
		{{0, 127, -19}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 33, -3}, {35, 96, 1}, {97, 97, 109}, {98, 98, 110}, {99, 103, 1}, {104, 104, 111}, {105, 105, 112}, {106, 114, 1}, {115, 115, 113}, {116, 116, 114}, {117, 117, 115}, {118, 127, 1}, },
		{{0, 33, -3}, {35, 111, 1}, {112, 112, 116}, {113, 127, 1}, },
		{{0, 61, -15}, {62, 62, 117}, {63, 113, 1}, {114, 114, 118}, {115, 127, 1}, },
		{{0, 33, -3}, {35, 48, 1}, {49, 49, 119}, {50, 50, 120}, {51, 113, 1}, {114, 114, 121}, {115, 127, 1}, },
		{{0, 61, -15}, {62, 62, 122}, {63, 108, 1}, {109, 109, 123}, {110, 110, 124}, {111, 127, 1}, },
		{{0, 33, -3}, {35, 104, 1}, {105, 105, 125}, {106, 127, 1}, },
		{{0, 61, -15}, {62, 62, 126}, {63, 96, 1}, {97, 97, 127}, {98, 127, 1}, },
		{{0, 33, -3}, {35, 100, 1}, {101, 101, 128}, {102, 127, 1}, },
		{{0, 100, -68}, {101, 101, 129}, {102, 127, 1}, },
		{{0, 96, -61}, {97, 97, 130}, {98, 99, 1}, {100, 100, 131}, {101, 113, 1}, {114, 114, 132}, {115, 127, 1}, },
		{{0, 33, -3}, {35, 107, 1}, {108, 108, 133}, {109, 127, 1}, },
		{{0, 96, -61}, {97, 97, 134}, {98, 127, 1}, },
		{{0, 127, -25}, },
		{{0, 96, -25}, {97, 99, 71}, {100, 100, 135}, {101, 122, 71}, {123, 127, 1}, },
		{{0, 110, -29}, {111, 111, 136}, {112, 127, -29}, },
		{{0, 99, -74}, {100, 100, 137}, {101, 127, -74}, },
		{{0, 96, -25}, {97, 98, 71}, {99, 99, 138}, {100, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 114, 71}, {115, 115, 139}, {116, 122, 71}, {123, 127, 1}, },
		{{0, 99, -74}, {100, 100, 140}, {101, 127, -74}, },
		{{0, 107, -32}, {108, 108, 141}, {109, 127, -34}, },
		{{0, 107, -32}, {108, 108, 142}, {109, 127, -34}, },
		{{0, 110, -29}, {111, 111, 143}, {112, 127, -29}, },
		{{0, 96, -25}, {97, 104, 71}, {105, 105, 144}, {106, 127, -33}, },
		{{0, 100, -35}, {101, 101, 145}, {102, 122, 71}, {123, 127, 1}, },
		{{0, 127, -25}, },
		{{0, 96, -25}, {97, 115, 71}, {116, 116, 146}, {117, 122, 71}, {123, 127, 1}, },
		{{0, 98, -77}, {99, 99, 147}, {100, 127, -77}, },
		{{0, 96, -25}, {97, 108, 71}, {109, 109, 148}, {110, 122, 71}, {123, 127, 1}, },
		{{0, 115, -86}, {116, 116, 149}, {117, 127, -86}, },
		{{0, 127, -25}, },
		{{0, 109, -28}, {110, 110, 150}, {111, 127, -28}, },
		{{0, 113, -39}, {114, 114, 151}, {115, 115, 152}, {116, 127, -78}, },
		{{0, 110, -29}, {111, 111, 153}, {112, 127, -29}, },
		{{0, 96, -25}, {97, 121, 71}, {122, 122, 154}, {123, 127, 1}, },
		{{0, 98, -77}, {99, 99, 155}, {100, 127, -77}, },
		{{0, 110, -29}, {111, 111, 156}, {112, 127, -29}, },
		{{0, 114, -78}, {115, 115, 157}, {116, 127, -78}, },
		{{0, 96, -25}, {97, 106, 71}, {107, 107, 158}, {108, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 119, 71}, {120, 120, 159}, {121, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 116, 71}, {117, 117, 160}, {118, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 111, 71}, {112, 112, 161}, {113, 122, 71}, {123, 127, 1}, },
		{{0, 107, -32}, {108, 108, 162}, {109, 127, -34}, },
		{{0, 104, -83}, {105, 105, 163}, {106, 127, -33}, },
		{{0, 99, -74}, {100, 100, 164}, {101, 115, 71}, {116, 116, 165}, {117, 127, -86}, },
		{{100, 100, 166}, },
		{{120, 120, 167}, },
		{{0, 127, -57}, },
		{{0, 9, 106}, {10, 10, 107}, {11, 12, 106}, {13, 13, 107}, {14, 33, 106}, {34, 34, 107}, {35, 41, 106}, {42, 42, 168}, {43, 127, 106}, },
		{{0, 41, 107}, {42, 42, 169}, {43, 127, 107}, },
		{{0, 8, 170}, {9, 9, 171}, {10, 10, 172}, {11, 12, 170}, {13, 13, 172}, {14, 31, 170}, {32, 32, 171}, {33, 33, 170}, {34, 34, 172}, {35, 41, 170}, {42, 42, 108}, {43, 46, 170}, {47, 47, 173}, {48, 127, 170}, },
		{{0, 61, -15}, {62, 62, 174}, {63, 111, 1}, {112, 112, 175}, {113, 127, 1}, },
		{{0, 61, -15}, {62, 62, 176}, {63, 127, 1}, },
		{{0, 48, -64}, {49, 49, 177}, {50, 50, 178}, {51, 127, 1}, },
		{{0, 61, -15}, {62, 62, 179}, {63, 127, 1}, },
		{{0, 100, -68}, {101, 101, 180}, {102, 127, 1}, },
		{{0, 96, -61}, {97, 97, 181}, {98, 99, 1}, {100, 100, 182}, {101, 113, 1}, {114, 114, 183}, {115, 127, 1}, },
		{{0, 107, -71}, {108, 108, 184}, {109, 127, 1}, },
		{{0, 111, -62}, {112, 112, 185}, {113, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 61, -15}, {62, 62, 186}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 187}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 188}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 189}, {63, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 33, -3}, {35, 102, 1}, {103, 103, 190}, {104, 127, 1}, },
		{{0, 33, -3}, {35, 98, 1}, {99, 99, 191}, {100, 111, 1}, {112, 112, 192}, {113, 127, 1}, },
		{{0, 61, -15}, {62, 62, 193}, {63, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 33, -3}, {35, 113, 1}, {114, 114, 194}, {115, 127, 1}, },
		{{0, 33, -3}, {35, 114, 1}, {115, 115, 195}, {116, 127, 1}, },
		{{0, 107, -71}, {108, 108, 196}, {109, 127, 1}, },
		{{0, 33, -3}, {35, 97, 1}, {98, 98, 197}, {99, 127, 1}, },
		{{0, 61, -15}, {62, 62, 198}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 199}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 200}, {63, 127, 1}, },
		{{0, 113, -129}, {114, 114, 201}, {115, 127, 1}, },
		{{0, 127, -25}, },
		{{0, 107, -32}, {108, 108, 202}, {109, 127, -34}, },
		{{0, 100, -35}, {101, 101, 203}, {102, 127, -84}, },
		{{0, 116, -100}, {117, 117, 204}, {118, 127, -100}, },
		{{0, 100, -35}, {101, 101, 205}, {102, 127, -84}, },
		{{0, 114, -78}, {115, 115, 206}, {116, 127, -78}, },
		{{0, 114, -78}, {115, 115, 207}, {116, 127, -78}, },
		{{0, 100, -35}, {101, 101, 208}, {102, 127, -84}, },
		{{0, 96, -25}, {97, 97, 71}, {98, 98, 209}, {99, 122, 71}, {123, 127, 1}, },
		{{0, 96, -25}, {97, 102, 71}, {103, 103, 210}, {104, 122, 71}, {123, 127, 1}, },
		{{0, 101, -36}, {102, 102, 211}, {103, 122, 71}, {123, 127, 1}, },
		{{0, 127, -25}, },
		{{0, 96, -25}, {97, 97, 212}, {98, 127, -40}, },
		{{0, 100, -35}, {101, 101, 213}, {102, 127, -84}, },
		{{0, 127, -25}, },
		{{0, 99, -74}, {100, 100, 214}, {101, 127, -74}, },
		{{0, 96, -25}, {97, 117, 71}, {118, 118, 215}, {119, 122, 71}, {123, 127, 1}, },
		{{0, 114, -78}, {115, 115, 216}, {116, 127, -78}, },
		{{0, 96, -25}, {97, 118, 71}, {119, 119, 217}, {120, 122, 71}, {123, 127, 1}, },
		{{0, 100, -35}, {101, 101, 218}, {102, 127, -84}, },
		{{0, 127, -25}, },
		{{0, 111, -101}, {112, 112, 219}, {113, 127, -101}, },
		{{0, 115, -86}, {116, 116, 220}, {117, 127, -86}, },
		{{0, 100, -35}, {101, 101, 221}, {102, 127, -84}, },
		{{0, 115, -86}, {116, 116, 222}, {117, 127, -86}, },
		{{0, 100, -35}, {101, 101, 223}, {102, 127, -84}, },
		{{0, 100, -35}, {101, 101, 224}, {102, 127, -84}, },
		{{0, 116, -100}, {117, 117, 225}, {118, 127, -100}, },
		{{0, 107, -32}, {108, 108, 226}, {109, 127, -34}, },
		{{0, 115, -86}, {116, 116, 227}, {117, 127, -86}, },
		{{0, 103, -44}, {104, 104, 228}, {105, 122, 71}, {123, 127, 1}, },
		{{105, 105, 229}, },
		{{116, 116, 230}, },
		{{0, 9, 171}, {10, 10, 172}, {11, 12, 171}, {13, 13, 172}, {14, 33, 171}, {34, 34, 172}, {35, 41, 171}, {42, 42, 168}, {43, 46, 171}, {47, 47, 231}, {48, 127, 171}, },
		{{0, 41, 172}, {42, 42, 169}, {43, 46, 172}, {47, 47, 232}, {48, 127, 172}, },
		{{0, 8, 233}, {9, 9, 234}, {10, 10, 235}, {11, 12, 233}, {13, 13, 235}, {14, 31, 233}, {32, 32, 234}, {33, 33, 233}, {34, 34, 235}, {35, 41, 233}, {42, 42, 236}, {43, 127, 233}, },
		{{0, 9, 234}, {10, 10, 235}, {11, 12, 234}, {13, 13, 235}, {14, 33, 234}, {34, 34, 235}, {35, 41, 234}, {42, 42, 237}, {43, 127, 234}, },
		{{0, 41, 235}, {42, 42, 238}, {43, 127, 235}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 111, -62}, {112, 112, 239}, {113, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 61, -15}, {62, 62, 240}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 241}, {63, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 107, -71}, {108, 108, 242}, {109, 127, 1}, },
		{{0, 97, -132}, {98, 98, 243}, {99, 127, 1}, },
		{{0, 61, -15}, {62, 62, 244}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 245}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 246}, {63, 127, 1}, },
		{{0, 107, -71}, {108, 108, 247}, {109, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 107, -71}, {108, 108, 248}, {109, 127, 1}, },
		{{0, 33, -3}, {35, 116, 1}, {117, 117, 249}, {118, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 96, -61}, {97, 97, 250}, {98, 127, 1}, },
		{{0, 116, -194}, {117, 117, 251}, {118, 127, 1}, },
		{{0, 100, -68}, {101, 101, 252}, {102, 127, 1}, },
		{{0, 107, -71}, {108, 108, 253}, {109, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -25}, },
		{{0, 97, -145}, {98, 98, 254}, {99, 127, -145}, },
		{{0, 108, -88}, {109, 109, 255}, {110, 127, -88}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 100, -35}, {101, 101, 256}, {102, 127, -84}, },
		{{0, 127, -25}, },
		{{0, 96, -25}, {97, 97, 257}, {98, 127, -40}, },
		{{0, 103, -44}, {104, 104, 258}, {105, 127, -167}, },
		{{0, 127, -25}, },
		{{0, 107, -32}, {108, 108, 259}, {109, 127, -34}, },
		{{0, 127, -25}, },
		{{0, 110, -29}, {111, 111, 260}, {112, 127, -29}, },
		{{0, 104, -83}, {105, 105, 261}, {106, 127, -33}, },
		{{0, 104, -83}, {105, 105, 262}, {106, 127, -33}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 100, -35}, {101, 101, 263}, {102, 127, -84}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 100, -35}, {101, 101, 264}, {102, 127, -84}, },
		{{0, 100, -35}, {101, 101, 265}, {102, 127, -84}, },
		{{0, 103, -44}, {104, 104, 266}, {105, 127, -167}, },
		{{0, 127, -25}, },
		{{111, 111, 267}, },
		{{34, 34, 268}, },
		{{0, 127, -48}, },
		{},
		{{0, 127, -172}, },
		{{0, 127, -173}, },
		{{0, 127, -174}, },
		{{0, 41, -110}, {42, 42, 236}, {43, 127, -110}, },
		{{0, 41, -170}, {42, 42, 237}, {43, 127, -170}, },
		{{0, 41, 172}, {42, 42, 238}, {43, 127, -171}, },
		{{0, 107, -71}, {108, 108, 269}, {109, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 100, -68}, {101, 101, 270}, {102, 127, 1}, },
		{{0, 107, -71}, {108, 108, 271}, {109, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 100, -68}, {101, 101, 272}, {102, 127, 1}, },
		{{0, 116, -194}, {117, 117, 273}, {118, 127, 1}, },
		{{0, 33, -3}, {35, 115, 1}, {116, 116, 274}, {117, 127, 1}, },
		{{0, 33, -3}, {35, 108, 1}, {109, 109, 275}, {110, 127, 1}, },
		{{0, 107, -71}, {108, 108, 276}, {109, 127, 1}, },
		{{0, 98, -126}, {99, 99, 277}, {100, 127, 1}, },
		{{0, 100, -68}, {101, 101, 278}, {102, 127, 1}, },
		{{0, 96, -25}, {97, 97, 279}, {98, 127, -40}, },
		{{0, 100, -35}, {101, 101, 280}, {102, 127, -84}, },
		{{0, 127, -25}, },
		{{0, 107, -32}, {108, 108, 281}, {109, 127, -34}, },
		{{0, 115, -86}, {116, 116, 282}, {117, 127, -86}, },
		{{0, 127, -25}, },
		{{0, 108, -88}, {109, 109, 283}, {110, 127, -88}, },
		{{0, 98, -77}, {99, 99, 284}, {100, 127, -77}, },
		{{0, 110, -29}, {111, 111, 285}, {112, 127, -29}, },
		{{0, 108, -88}, {109, 109, 286}, {110, 127, -88}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{34, 34, 287}, },
		{},
		{{0, 100, -68}, {101, 101, 288}, {102, 127, 1}, },
		{{0, 98, -126}, {99, 99, 289}, {100, 127, 1}, },
		{{0, 100, -68}, {101, 101, 290}, {102, 127, 1}, },
		{{0, 115, -251}, {116, 116, 291}, {117, 127, 1}, },
		{{0, 33, -3}, {35, 99, 1}, {100, 100, 292}, {101, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 115, -251}, {116, 116, 293}, {117, 127, 1}, },
		{{0, 115, -251}, {116, 116, 294}, {117, 127, 1}, },
		{{0, 61, -15}, {62, 62, 295}, {63, 127, 1}, },
		{{0, 114, -78}, {115, 115, 296}, {116, 127, -78}, },
		{{0, 109, -28}, {110, 110, 297}, {111, 127, -28}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 100, -35}, {101, 101, 298}, {102, 127, -84}, },
		{{0, 109, -28}, {110, 110, 299}, {111, 127, -28}, },
		{{0, 127, -25}, },
		{},
		{{0, 115, -251}, {116, 116, 300}, {117, 127, 1}, },
		{{0, 115, -251}, {116, 116, 301}, {117, 127, 1}, },
		{{0, 61, -15}, {62, 62, 302}, {63, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 100, -68}, {101, 101, 303}, {102, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 100, -35}, {101, 101, 304}, {102, 127, -84}, },
		{{0, 115, -86}, {116, 116, 305}, {117, 127, -86}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 61, -15}, {62, 62, 306}, {63, 127, 1}, },
		{{0, 61, -15}, {62, 62, 307}, {63, 127, 1}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
		{{0, 127, -25}, },
		{{0, 127, -25}, },
		{{0, 127, -3}, },
		{{0, 127, -3}, },
    };*/

    private static int[][] accept;
/*  {
		{-1, -1, 100, 100, 100, 100, 98, -1, -1, -1, -1, -1, 42, -1, -1, -1, 44, 44, 47, 32, -1, 48, -1, 43, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 66, -1, 97, -1, 100, 100, 100, -1, -1, -1, -1, -1, -1, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 15, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 13, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 14, 43, 43, 43, 43, 43, 43, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 3, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 0, 2, -1, -1, -1, -1, 43, 1, -1, -1, },
		{-1, -1, 100, 100, 100, 100, 98, -1, -1, -1, -1, -1, 42, -1, -1, -1, 44, 44, -1, -1, -1, 48, 99, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 100, 100, 100, -1, -1, -1, -1, -1, -1, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 61, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 94, -1, -1, -1, -1, 63, -1, -1, 67, -1, -1, -1, -1, -1, -1, 86, -1, -1, -1, -1, 45, 85, -1, -1, -1, -1, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 46, -1, -1, -1, -1, -1, -1, -1, 87, -1, 95, -1, 88, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 96, -1, -1, -1, -1, 89, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 93, -1, -1, -1, },
		{102, 102, 100, 100, 100, 100, -1, 102, 102, 102, 102, 102, 42, 102, 102, 102, 44, 44, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 97, -1, 100, 100, 100, -1, -1, 102, 102, 102, 102, 44, 102, 102, 102, 64, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, -1, -1, 102, -1, -1, 102, 102, 102, 102, 102, 102, 102, 102, 102, 49, 102, 102, 102, 102, 51, 102, 102, 102, 57, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, -1, -1, -1, -1, 102, -1, -1, 101, 65, 102, 50, 102, 102, 52, 102, 102, 102, 102, 102, 102, 58, 53, 55, 59, 60, 102, 102, 70, 102, 102, 102, 102, 73, 71, 68, 77, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 45, 102, 102, 102, 102, 102, -1, -1, 101, 101, 102, -1, -1, 102, -1, -1, 102, 54, 56, 102, 102, 74, 72, 69, 102, 102, 102, 102, 102, 102, 102, 102, 102, 46, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, -1, -1, 102, 102, 102, 102, 102, 79, 80, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, -1, 102, 102, 102, 90, 102, 81, 78, 75, 102, 102, 102, 102, 102, 102, 76, 62, 102, 102, 91, 92, },
		{-1, -1, 100, 100, 100, 100, 98, 30, 33, 34, 28, 26, 42, 27, -1, 29, 44, 44, 47, 32, -1, 19, 20, 43, 35, 36, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 66, 31, 97, -1, 100, 100, 100, -1, -1, 24, 10, 25, -1, 44, 5, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 16, 43, 43, 43, 43, 23, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 21, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 15, 43, 43, 22, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 13, 43, 43, 17, 37, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 8, 43, 6, 43, 7, 14, 43, 43, 43, 43, 43, 38, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 4, 43, 43, 43, 43, 43, 18, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 11, 43, 43, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 2, -1, -1, -1, -1, 43, 43, -1, -1, },
		{41, 41, 41, 100, 100, 41, 98, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 100, 100, 100, -1, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 101, 41, 41, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, },
		{41, 41, 41, 100, 100, 41, 98, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 100, 100, 100, -1, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 101, 41, 41, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, },
		{-1, -1, 100, 100, 100, 100, -1, -1, -1, -1, -1, -1, 42, -1, -1, -1, 44, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 100, 100, 100, -1, -1, -1, -1, -1, -1, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 82, -1, -1, -1, -1, -1, -1, -1, -1, -1, 45, -1, -1, -1, -1, -1, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 46, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
		{-1, -1, 100, 100, 100, 100, -1, -1, -1, -1, -1, -1, 42, -1, -1, -1, 44, 44, -1, -1, -1, 83, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 100, 100, 100, -1, -1, -1, -1, -1, -1, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 45, -1, -1, -1, -1, -1, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 46, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
		{-1, -1, 100, 100, 100, 100, 98, -1, -1, -1, -1, -1, 42, -1, -1, -1, 44, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 100, 100, 100, -1, -1, -1, -1, -1, -1, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 45, -1, -1, -1, -1, -1, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 46, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
		{84, 84, 84, 100, 100, 84, 98, 84, 84, 84, 84, 84, 42, 84, 84, 84, 44, 44, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 100, 100, 100, -1, -1, 84, 84, 84, 84, 44, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, -1, -1, 84, 84, -1, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, -1, -1, 84, -1, 84, 84, -1, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 45, 84, 84, 84, 84, 84, -1, -1, 84, 101, 84, 84, -1, 84, 84, -1, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 46, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, -1, -1, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, -1, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, },
		{-1, -1, 100, 100, 100, 100, 98, -1, 39, 40, -1, -1, 42, -1, -1, -1, 44, 44, -1, -1, -1, -1, -1, 43, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 66, -1, -1, -1, 100, 100, 100, -1, -1, -1, -1, -1, -1, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, -1, -1, -1, -1, 43, 43, -1, -1, },
		{-1, -1, 100, 100, 100, 100, -1, -1, -1, -1, -1, -1, 42, -1, -1, -1, 44, 44, -1, -1, -1, -1, -1, 43, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 66, -1, -1, -1, 100, 100, 100, -1, -1, -1, -1, -1, -1, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, 101, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, 43, 43, 43, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, 43, 43, 43, -1, -1, -1, -1, 43, 43, -1, -1, },
		{41, 41, 41, -1, -1, 41, 98, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, -1, -1, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 101, 41, 41, -1, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, -1, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, },

    };*/

    public static class State
    {
        public final static State NORMAL = new State(0);
        public final static State DOC1 = new State(1);
        public final static State DOC = new State(2);
        public final static State SES = new State(3);
        public final static State STR_STARTN = new State(4);
        public final static State STR_STARTS = new State(5);
        public final static State SPECIAL1 = new State(6);
        public final static State SPECIAL2 = new State(7);
        public final static State SPECIAL3 = new State(8);
        public final static State SPECIAL4 = new State(9);
        public final static State NORMAL_DOC = new State(10);
        public final static State NORMAL_SES = new State(11);
        public final static State STR_STARTN1 = new State(12);

        private int id;

        private State(int id)
        {
            this.id = id;
        }

        public int id()
        {
            return id;
        }
    }
}
