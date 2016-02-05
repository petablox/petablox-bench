package wig.parser;

import wig.lexer.*;
import wig.node.*;
import wig.analysis.*;
import ca.mcgill.sable.util.*;

import java.io.DataInputStream;
import java.io.BufferedInputStream;
import java.io.IOException;

public class Parser
{
    public final Analysis ignoredTokens = new AnalysisAdapter();

    protected Node node;

    private final Lexer lexer;
    private final ListIterator stack = new LinkedList().listIterator();
    private int last_shift;
    private int last_pos;
    private int last_line;
    private final TokenIndex converter = new TokenIndex();
    private final int[] action = new int[2];

    private final static int SHIFT = 0;
    private final static int REDUCE = 1;
    private final static int ACCEPT = 2;
    private final static int ERROR = 3;

    protected void filter() throws ParserException, LexerException, IOException
    {
    }

    public Parser(Lexer lexer)
    {
        this.lexer = lexer;

        if(actionTable == null)
        {
            try
            {
                DataInputStream s = new DataInputStream(new BufferedInputStream(getClass().getResourceAsStream("parser.dat")));

                // read actionTable
                int length = s.readInt();
                actionTable = new int[length][][];
                for(int i = 0; i < actionTable.length; i++)
                {
                    length = s.readInt();
                    actionTable[i] = new int[length][3];
                    for(int j = 0; j < actionTable[i].length; j++)
                    {
                        for(int k = 0; k < 3; k++)
                        {
                            actionTable[i][j][k] = s.readInt();
                        }
                    }
                }

                // read gotoTable
                length = s.readInt();
                gotoTable = new int[length][][];
                for(int i = 0; i < gotoTable.length; i++)
                {
                    length = s.readInt();
                    gotoTable[i] = new int[length][2];
                    for(int j = 0; j < gotoTable[i].length; j++)
                    {
                        for(int k = 0; k < 2; k++)
                        {
                            gotoTable[i][j][k] = s.readInt();
                        }
                    }
                }

                // read errorMessages
                length = s.readInt();
                errorMessages = new String[length];
                for(int i = 0; i < errorMessages.length; i++)
                {
                    length = s.readInt();
                    StringBuffer buffer = new StringBuffer();

                    for(int j = 0; j < length; j++)
                    {
                        buffer.append(s.readChar());
                    }
                    errorMessages[i] = buffer.toString();
                }

                // read errors
                length = s.readInt();
                errors = new int[length];
                for(int i = 0; i < errors.length; i++)
                {
                    errors[i] = s.readInt();
                }

                s.close();
            }
            catch(Exception e)
            {
                throw new RuntimeException("Unable to read parser.dat.");
            }
        }
    }

    private int goTo(int index)
    {
        int state = state();
        int low = 1;
        int high = gotoTable[index].length - 1;
        int value = gotoTable[index][0][1];

        while(low <= high)
        {
            int middle = (low + high) / 2;

            if(state < gotoTable[index][middle][0])
            {
                high = middle - 1;
            }
            else if(state > gotoTable[index][middle][0])
            {
                low = middle + 1;
            }
            else
            {
                value = gotoTable[index][middle][1];
                break;
            }
        }

        return value;
    }

    private void push(int state, Node node, boolean filter) throws ParserException, LexerException, IOException
    {
        this.node = node;

        if(filter)
        {
            filter();
        }

        if(!stack.hasNext())
        {
            stack.add(new State(state, this.node));
            stack.next();
            return;
        }

        State s = (State) stack.next();
        s.state = state;
        s.node = this.node;
    }

    private int state()
    {
        State s = (State) stack.previous();
        stack.next();
        return s.state;
    }

    private Node pop()
    {
        return (Node) ((State) stack.previous()).node;
    }

    private int index(Switchable token)
    {
        converter.index = -1;
        token.apply(converter);
        return converter.index;
    }

    public Start parse() throws ParserException, LexerException, IOException
    {
        push(0, null, false);

        List ign = null;
        while(true)
        {
            while(index(lexer.peek()) == -1)
            {
                if(ign == null)
                {
                    ign = new TypedLinkedList(NodeCast.instance);
                }

                ign.add(lexer.next());
            }

            if(ign != null)
            {
                ignoredTokens.setIn(lexer.peek(), ign);
                ign = null;
            }

            last_pos = lexer.peek().getPos();
            last_line = lexer.peek().getLine();

            int index = index(lexer.peek());
            action[0] = actionTable[state()][0][1];
            action[1] = actionTable[state()][0][2];

            int low = 1;
            int high = actionTable[state()].length - 1;

            while(low <= high)
            {
                int middle = (low + high) / 2;

                if(index < actionTable[state()][middle][0])
                {
                    high = middle - 1;
                }
                else if(index > actionTable[state()][middle][0])
                {
                    low = middle + 1;
                }
                else
                {
                    action[0] = actionTable[state()][middle][1];
                    action[1] = actionTable[state()][middle][2];
                    break;
                }
            }

            switch(action[0])
            {
                case SHIFT:
                    push(action[1], lexer.next(), true);
                    last_shift = action[1];
                    break;
                case REDUCE:
                    switch(action[1])
                    {
                    case 0: { Node node = new0(); push(goTo(0), node, true); } break;
                    case 1: { Node node = new1(); push(goTo(1), node, true); } break;
                    case 2: { Node node = new2(); push(goTo(1), node, true); } break;
                    case 3: { Node node = new3(); push(goTo(2), node, true); } break;
                    case 4: { Node node = new4(); push(goTo(2), node, true); } break;
                    case 5: { Node node = new5(); push(goTo(3), node, true); } break;
                    case 6: { Node node = new6(); push(goTo(3), node, true); } break;
                    case 7: { Node node = new7(); push(goTo(3), node, true); } break;
                    case 8: { Node node = new8(); push(goTo(4), node, true); } break;
                    case 9: { Node node = new9(); push(goTo(4), node, true); } break;
                    case 10: { Node node = new10(); push(goTo(5), node, true); } break;
                    case 11: { Node node = new11(); push(goTo(6), node, true); } break;
                    case 12: { Node node = new12(); push(goTo(6), node, true); } break;
                    case 13: { Node node = new13(); push(goTo(7), node, true); } break;
                    case 14: { Node node = new14(); push(goTo(7), node, true); } break;
                    case 15: { Node node = new15(); push(goTo(7), node, true); } break;
                    case 16: { Node node = new16(); push(goTo(8), node, true); } break;
                    case 17: { Node node = new17(); push(goTo(9), node, true); } break;
                    case 18: { Node node = new18(); push(goTo(9), node, true); } break;
                    case 19: { Node node = new19(); push(goTo(10), node, true); } break;
                    case 20: { Node node = new20(); push(goTo(10), node, true); } break;
                    case 21: { Node node = new21(); push(goTo(10), node, true); } break;
                    case 22: { Node node = new22(); push(goTo(11), node, true); } break;
                    case 23: { Node node = new23(); push(goTo(11), node, true); } break;
                    case 24: { Node node = new24(); push(goTo(12), node, true); } break;
                    case 25: { Node node = new25(); push(goTo(13), node, true); } break;
                    case 26: { Node node = new26(); push(goTo(14), node, true); } break;
                    case 27: { Node node = new27(); push(goTo(14), node, true); } break;
                    case 28: { Node node = new28(); push(goTo(15), node, true); } break;
                    case 29: { Node node = new29(); push(goTo(15), node, true); } break;
                    case 30: { Node node = new30(); push(goTo(16), node, true); } break;
                    case 31: { Node node = new31(); push(goTo(17), node, true); } break;
                    case 32: { Node node = new32(); push(goTo(18), node, true); } break;
                    case 33: { Node node = new33(); push(goTo(19), node, true); } break;
                    case 34: { Node node = new34(); push(goTo(20), node, true); } break;
                    case 35: { Node node = new35(); push(goTo(21), node, true); } break;
                    case 36: { Node node = new36(); push(goTo(22), node, true); } break;
                    case 37: { Node node = new37(); push(goTo(23), node, true); } break;
                    case 38: { Node node = new38(); push(goTo(24), node, true); } break;
                    case 39: { Node node = new39(); push(goTo(25), node, true); } break;
                    case 40: { Node node = new40(); push(goTo(26), node, true); } break;
                    case 41: { Node node = new41(); push(goTo(27), node, true); } break;
                    case 42: { Node node = new42(); push(goTo(28), node, true); } break;
                    case 43: { Node node = new43(); push(goTo(28), node, true); } break;
                    case 44: { Node node = new44(); push(goTo(28), node, true); } break;
                    case 45: { Node node = new45(); push(goTo(28), node, true); } break;
                    case 46: { Node node = new46(); push(goTo(28), node, true); } break;
                    case 47: { Node node = new47(); push(goTo(28), node, true); } break;
                    case 48: { Node node = new48(); push(goTo(28), node, true); } break;
                    case 49: { Node node = new49(); push(goTo(28), node, true); } break;
                    case 50: { Node node = new50(); push(goTo(28), node, true); } break;
                    case 51: { Node node = new51(); push(goTo(28), node, true); } break;
                    case 52: { Node node = new52(); push(goTo(28), node, true); } break;
                    case 53: { Node node = new53(); push(goTo(28), node, true); } break;
                    case 54: { Node node = new54(); push(goTo(28), node, true); } break;
                    case 55: { Node node = new55(); push(goTo(28), node, true); } break;
                    case 56: { Node node = new56(); push(goTo(28), node, true); } break;
                    case 57: { Node node = new57(); push(goTo(28), node, true); } break;
                    case 58: { Node node = new58(); push(goTo(28), node, true); } break;
                    case 59: { Node node = new59(); push(goTo(28), node, true); } break;
                    case 60: { Node node = new60(); push(goTo(28), node, true); } break;
                    case 61: { Node node = new61(); push(goTo(28), node, true); } break;
                    case 62: { Node node = new62(); push(goTo(28), node, true); } break;
                    case 63: { Node node = new63(); push(goTo(29), node, true); } break;
                    case 64: { Node node = new64(); push(goTo(29), node, true); } break;
                    case 65: { Node node = new65(); push(goTo(30), node, true); } break;
                    case 66: { Node node = new66(); push(goTo(31), node, true); } break;
                    case 67: { Node node = new67(); push(goTo(32), node, true); } break;
                    case 68: { Node node = new68(); push(goTo(32), node, true); } break;
                    case 69: { Node node = new69(); push(goTo(33), node, true); } break;
                    case 70: { Node node = new70(); push(goTo(33), node, true); } break;
                    case 71: { Node node = new71(); push(goTo(33), node, true); } break;
                    case 72: { Node node = new72(); push(goTo(33), node, true); } break;
                    case 73: { Node node = new73(); push(goTo(34), node, true); } break;
                    case 74: { Node node = new74(); push(goTo(34), node, true); } break;
                    case 75: { Node node = new75(); push(goTo(35), node, true); } break;
                    case 76: { Node node = new76(); push(goTo(36), node, true); } break;
                    case 77: { Node node = new77(); push(goTo(36), node, true); } break;
                    case 78: { Node node = new78(); push(goTo(37), node, true); } break;
                    case 79: { Node node = new79(); push(goTo(38), node, true); } break;
                    case 80: { Node node = new80(); push(goTo(38), node, true); } break;
                    case 81: { Node node = new81(); push(goTo(39), node, true); } break;
                    case 82: { Node node = new82(); push(goTo(40), node, true); } break;
                    case 83: { Node node = new83(); push(goTo(40), node, true); } break;
                    case 84: { Node node = new84(); push(goTo(41), node, true); } break;
                    case 85: { Node node = new85(); push(goTo(41), node, true); } break;
                    case 86: { Node node = new86(); push(goTo(42), node, true); } break;
                    case 87: { Node node = new87(); push(goTo(43), node, true); } break;
                    case 88: { Node node = new88(); push(goTo(44), node, true); } break;
                    case 89: { Node node = new89(); push(goTo(45), node, true); } break;
                    case 90: { Node node = new90(); push(goTo(45), node, true); } break;
                    case 91: { Node node = new91(); push(goTo(45), node, true); } break;
                    case 92: { Node node = new92(); push(goTo(46), node, true); } break;
                    case 93: { Node node = new93(); push(goTo(46), node, true); } break;
                    case 94: { Node node = new94(); push(goTo(47), node, true); } break;
                    case 95: { Node node = new95(); push(goTo(48), node, true); } break;
                    case 96: { Node node = new96(); push(goTo(49), node, true); } break;
                    case 97: { Node node = new97(); push(goTo(49), node, true); } break;
                    case 98: { Node node = new98(); push(goTo(50), node, true); } break;
                    case 99: { Node node = new99(); push(goTo(50), node, true); } break;
                    case 100: { Node node = new100(); push(goTo(51), node, true); } break;
                    case 101: { Node node = new101(); push(goTo(51), node, true); } break;
                    case 102: { Node node = new102(); push(goTo(52), node, true); } break;
                    case 103: { Node node = new103(); push(goTo(52), node, true); } break;
                    case 104: { Node node = new104(); push(goTo(52), node, true); } break;
                    case 105: { Node node = new105(); push(goTo(53), node, true); } break;
                    case 106: { Node node = new106(); push(goTo(53), node, true); } break;
                    case 107: { Node node = new107(); push(goTo(54), node, true); } break;
                    case 108: { Node node = new108(); push(goTo(54), node, true); } break;
                    case 109: { Node node = new109(); push(goTo(54), node, true); } break;
                    case 110: { Node node = new110(); push(goTo(55), node, true); } break;
                    case 111: { Node node = new111(); push(goTo(56), node, true); } break;
                    case 112: { Node node = new112(); push(goTo(56), node, true); } break;
                    case 113: { Node node = new113(); push(goTo(57), node, true); } break;
                    case 114: { Node node = new114(); push(goTo(58), node, true); } break;
                    case 115: { Node node = new115(); push(goTo(58), node, true); } break;
                    case 116: { Node node = new116(); push(goTo(59), node, true); } break;
                    case 117: { Node node = new117(); push(goTo(59), node, true); } break;
                    case 118: { Node node = new118(); push(goTo(59), node, true); } break;
                    case 119: { Node node = new119(); push(goTo(59), node, true); } break;
                    case 120: { Node node = new120(); push(goTo(59), node, true); } break;
                    case 121: { Node node = new121(); push(goTo(59), node, true); } break;
                    case 122: { Node node = new122(); push(goTo(59), node, true); } break;
                    case 123: { Node node = new123(); push(goTo(60), node, true); } break;
                    case 124: { Node node = new124(); push(goTo(60), node, true); } break;
                    case 125: { Node node = new125(); push(goTo(61), node, true); } break;
                    case 126: { Node node = new126(); push(goTo(61), node, true); } break;
                    case 127: { Node node = new127(); push(goTo(61), node, true); } break;
                    case 128: { Node node = new128(); push(goTo(62), node, true); } break;
                    case 129: { Node node = new129(); push(goTo(62), node, true); } break;
                    case 130: { Node node = new130(); push(goTo(63), node, true); } break;
                    case 131: { Node node = new131(); push(goTo(64), node, true); } break;
                    case 132: { Node node = new132(); push(goTo(64), node, true); } break;
                    case 133: { Node node = new133(); push(goTo(65), node, true); } break;
                    case 134: { Node node = new134(); push(goTo(66), node, true); } break;
                    case 135: { Node node = new135(); push(goTo(66), node, true); } break;
                    case 136: { Node node = new136(); push(goTo(67), node, true); } break;
                    case 137: { Node node = new137(); push(goTo(67), node, true); } break;
                    case 138: { Node node = new138(); push(goTo(68), node, true); } break;
                    case 139: { Node node = new139(); push(goTo(68), node, true); } break;
                    case 140: { Node node = new140(); push(goTo(69), node, true); } break;
                    case 141: { Node node = new141(); push(goTo(69), node, true); } break;
                    case 142: { Node node = new142(); push(goTo(70), node, true); } break;
                    case 143: { Node node = new143(); push(goTo(70), node, true); } break;
                    case 144: { Node node = new144(); push(goTo(71), node, true); } break;
                    case 145: { Node node = new145(); push(goTo(71), node, true); } break;
                    case 146: { Node node = new146(); push(goTo(71), node, true); } break;
                    case 147: { Node node = new147(); push(goTo(71), node, true); } break;
                    case 148: { Node node = new148(); push(goTo(72), node, true); } break;
                    case 149: { Node node = new149(); push(goTo(72), node, true); } break;
                    case 150: { Node node = new150(); push(goTo(72), node, true); } break;
                    case 151: { Node node = new151(); push(goTo(72), node, true); } break;
                    case 152: { Node node = new152(); push(goTo(73), node, true); } break;
                    case 153: { Node node = new153(); push(goTo(73), node, true); } break;
                    case 154: { Node node = new154(); push(goTo(74), node, true); } break;
                    case 155: { Node node = new155(); push(goTo(75), node, true); } break;
                    case 156: { Node node = new156(); push(goTo(75), node, true); } break;
                    case 157: { Node node = new157(); push(goTo(75), node, true); } break;
                    case 158: { Node node = new158(); push(goTo(75), node, true); } break;
                    case 159: { Node node = new159(); push(goTo(75), node, true); } break;
                    case 160: { Node node = new160(); push(goTo(76), node, true); } break;
                    case 161: { Node node = new161(); push(goTo(76), node, true); } break;
                    case 162: { Node node = new162(); push(goTo(77), node, true); } break;
                    case 163: { Node node = new163(); push(goTo(77), node, true); } break;
                    }
                    break;
                case ACCEPT:
                    {
                        EOF node2 = (EOF) lexer.next();
                        PServicep node1 = (PServicep) pop();
                        Start node = new Start(node1, node2);
                        return node;
                    }
                case ERROR:
                    throw new ParserException(
                        "[" + last_line + "," + last_pos + "] " +
                        errorMessages[errors[action[1]]]);
            }
        }
    }

    Node new0()
    {
        TCloseBr node6 = (TCloseBr) pop();
        PSessionsp node5 = (PSessionsp) pop();
        PDocumentsp node4 = (PDocumentsp) pop();
        PGlobalsp node3 = (PGlobalsp) pop();
        TOpenBr node2 = (TOpenBr) pop();
        TService node1 = (TService) pop();
        AService1Servicep node = new AService1Servicep(node1, node2, node3, node4, node5, node6);
        return node;
    }

    Node new1()
    {
        AEmptyGlobalsp node = new AEmptyGlobalsp();
        return node;
    }

    Node new2()
    {
        PNeglobalsp node1 = (PNeglobalsp) pop();
        AGlobals1Globalsp node = new AGlobals1Globalsp(node1);
        return node;
    }

    Node new3()
    {
        TSemicolon node2 = (TSemicolon) pop();
        PGlobalp node1 = (PGlobalp) pop();
        ANeglobals1Neglobalsp node = new ANeglobals1Neglobalsp(node1, node2);
        return node;
    }

    Node new4()
    {
        TSemicolon node3 = (TSemicolon) pop();
        PGlobalp node2 = (PGlobalp) pop();
        PNeglobalsp node1 = (PNeglobalsp) pop();
        ANeglobals2Neglobalsp node = new ANeglobals2Neglobalsp(node1, node2, node3);
        return node;
    }

    Node new5()
    {
        PIntinitp node5 = (PIntinitp) pop();
        TInt node4 = (TInt) pop();
        TSpecify node3 = (TSpecify) pop();
        PNenamesp node2 = (PNenamesp) pop();
        TGlobal node1 = (TGlobal) pop();
        AGlobal1Globalp node = new AGlobal1Globalp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new6()
    {
        PBoolinitp node5 = (PBoolinitp) pop();
        TBool node4 = (TBool) pop();
        TSpecify node3 = (TSpecify) pop();
        PNenamesp node2 = (PNenamesp) pop();
        TGlobal node1 = (TGlobal) pop();
        AGlobal2Globalp node = new AGlobal2Globalp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new7()
    {
        PTextinitp node5 = (PTextinitp) pop();
        TText node4 = (TText) pop();
        TSpecify node3 = (TSpecify) pop();
        PNenamesp node2 = (PNenamesp) pop();
        TGlobal node1 = (TGlobal) pop();
        AGlobal3Globalp node = new AGlobal3Globalp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new8()
    {
        PNamep node1 = (PNamep) pop();
        ANenames1Nenamesp node = new ANenames1Nenamesp(node1);
        return node;
    }

    Node new9()
    {
        PNamep node3 = (PNamep) pop();
        TComma node2 = (TComma) pop();
        PNenamesp node1 = (PNenamesp) pop();
        ANenames2Nenamesp node = new ANenames2Nenamesp(node1, node2, node3);
        return node;
    }

    Node new10()
    {
        TIdentifier node1 = (TIdentifier) pop();
        AName1Namep node = new AName1Namep(node1);
        return node;
    }

    Node new11()
    {
        AEmptyIntinitp node = new AEmptyIntinitp();
        return node;
    }

    Node new12()
    {
        TNumber node2 = (TNumber) pop();
        TAssignNormaldoc node1 = (TAssignNormaldoc) pop();
        AIntinit1Intinitp node = new AIntinit1Intinitp(node1, node2);
        return node;
    }

    Node new13()
    {
        AEmptyBoolinitp node = new AEmptyBoolinitp();
        return node;
    }

    Node new14()
    {
        TTrue node2 = (TTrue) pop();
        TAssignNormaldoc node1 = (TAssignNormaldoc) pop();
        ABoolinit1Boolinitp node = new ABoolinit1Boolinitp(node1, node2);
        return node;
    }

    Node new15()
    {
        TFalse node2 = (TFalse) pop();
        TAssignNormaldoc node1 = (TAssignNormaldoc) pop();
        ABoolinit2Boolinitp node = new ABoolinit2Boolinitp(node1, node2);
        return node;
    }

    Node new16()
    {
        PStringp node3 = (PStringp) pop();
        TQuote node2 = (TQuote) pop();
        TAssignNormaldoc node1 = (TAssignNormaldoc) pop();
        ATextinit11Textinit1p node = new ATextinit11Textinit1p(node1, node2, node3);
        return node;
    }

    Node new17()
    {
        AEmptyTextinitp node = new AEmptyTextinitp();
        return node;
    }

    Node new18()
    {
        TQuote node2 = (TQuote) pop();
        PTextinit1p node1 = (PTextinit1p) pop();
        ATextinit1Textinitp node = new ATextinit1Textinitp(node1, node2);
        return node;
    }

    Node new19()
    {
        AEmptyStringp node = new AEmptyStringp();
        return node;
    }

    Node new20()
    {
        TString node1 = (TString) pop();
        AStringp1Stringp node = new AStringp1Stringp(node1);
        return node;
    }

    Node new21()
    {
        TStringSp4 node1 = (TStringSp4) pop();
        AStringp2Stringp node = new AStringp2Stringp(node1);
        return node;
    }

    Node new22()
    {
        PDocumentp node1 = (PDocumentp) pop();
        ADocuments1Documentsp node = new ADocuments1Documentsp(node1);
        return node;
    }

    Node new23()
    {
        PDocumentp node2 = (PDocumentp) pop();
        PDocumentsp node1 = (PDocumentsp) pop();
        ADocuments2Documentsp node = new ADocuments2Documentsp(node1, node2);
        return node;
    }

    Node new24()
    {
        TCloseBr node6 = (TCloseBr) pop();
        PHtmlp node5 = (PHtmlp) pop();
        TOpenBr node4 = (TOpenBr) pop();
        PTitlep node3 = (PTitlep) pop();
        TIdentifier node2 = (TIdentifier) pop();
        TDocument node1 = (TDocument) pop();
        ADocument1Documentp node = new ADocument1Documentp(node1, node2, node3, node4, node5, node6);
        return node;
    }

    Node new25()
    {
        PStringp node3 = (PStringp) pop();
        TQuote node2 = (TQuote) pop();
        TLeftBrack1 node1 = (TLeftBrack1) pop();
        ATitle11Title1p node = new ATitle11Title1p(node1, node2, node3);
        return node;
    }

    Node new26()
    {
        AEmptyTitlep node = new AEmptyTitlep();
        return node;
    }

    Node new27()
    {
        TRightBrack1 node3 = (TRightBrack1) pop();
        TQuote node2 = (TQuote) pop();
        PTitle1p node1 = (PTitle1p) pop();
        ATitle1Titlep node = new ATitle1Titlep(node1, node2, node3);
        return node;
    }

    Node new28()
    {
        PEntityp node1 = (PEntityp) pop();
        AHtml1Htmlp node = new AHtml1Htmlp(node1);
        return node;
    }

    Node new29()
    {
        PEntityp node2 = (PEntityp) pop();
        PHtmlp node1 = (PHtmlp) pop();
        AHtml2Htmlp node = new AHtml2Htmlp(node1, node2);
        return node;
    }

    Node new30()
    {
        TQuote node4 = (TQuote) pop();
        TAssignNormaldoc node3 = (TAssignNormaldoc) pop();
        TSrc node2 = (TSrc) pop();
        TImg node1 = (TImg) pop();
        AEntity91pEntity9p node = new AEntity91pEntity9p(node1, node2, node3, node4);
        return node;
    }

    Node new31()
    {
        TQuote node4 = (TQuote) pop();
        TAssignNormaldoc node3 = (TAssignNormaldoc) pop();
        TFile node2 = (TFile) pop();
        TInclude node1 = (TInclude) pop();
        AEntity101pEntity10p node = new AEntity101pEntity10p(node1, node2, node3, node4);
        return node;
    }

    Node new32()
    {
        TQuote node4 = (TQuote) pop();
        TAssignNormaldoc node3 = (TAssignNormaldoc) pop();
        THref node2 = (THref) pop();
        TA node1 = (TA) pop();
        AEntity111pEntity11p node = new AEntity111pEntity11p(node1, node2, node3, node4);
        return node;
    }

    Node new33()
    {
        TQuote node4 = (TQuote) pop();
        TAssignSp2 node3 = (TAssignSp2) pop();
        TName node2 = (TName) pop();
        TVar node1 = (TVar) pop();
        AEntity141pEntity14p node = new AEntity141pEntity14p(node1, node2, node3, node4);
        return node;
    }

    Node new34()
    {
        TQuote node4 = (TQuote) pop();
        TAssignSp2 node3 = (TAssignSp2) pop();
        TName node2 = (TName) pop();
        TSelect node1 = (TSelect) pop();
        AEntity151pEntity15p node = new AEntity151pEntity15p(node1, node2, node3, node4);
        return node;
    }

    Node new35()
    {
        TQuote node4 = (TQuote) pop();
        TAssignSp2 node3 = (TAssignSp2) pop();
        TName node2 = (TName) pop();
        TInput node1 = (TInput) pop();
        AEntity1611pEntity161p node = new AEntity1611pEntity161p(node1, node2, node3, node4);
        return node;
    }

    Node new36()
    {
        TAssignNormaldoc node4 = (TAssignNormaldoc) pop();
        TType node3 = (TType) pop();
        TQuote node2 = (TQuote) pop();
        PStringp node1 = (PStringp) pop();
        AEntity1621pEntity162p node = new AEntity1621pEntity162p(node1, node2, node3, node4);
        return node;
    }

    Node new37()
    {
        TClose node2 = (TClose) pop();
        TQuote node1 = (TQuote) pop();
        AEntity1711pEntity171p node = new AEntity1711pEntity171p(node1, node2);
        return node;
    }

    Node new38()
    {
        TQuote node4 = (TQuote) pop();
        TAssignNormaldoc node3 = (TAssignNormaldoc) pop();
        TCodebase node2 = (TCodebase) pop();
        TApplet node1 = (TApplet) pop();
        AEntity1811pEntity181p node = new AEntity1811pEntity181p(node1, node2, node3, node4);
        return node;
    }

    Node new39()
    {
        TQuote node2 = (TQuote) pop();
        PStringp node1 = (PStringp) pop();
        AEntity1821pEntity182p node = new AEntity1821pEntity182p(node1, node2);
        return node;
    }

    Node new40()
    {
        TQuote node3 = (TQuote) pop();
        TAssignNormaldoc node2 = (TAssignNormaldoc) pop();
        TCode node1 = (TCode) pop();
        AEntity1831pEntity183p node = new AEntity1831pEntity183p(node1, node2, node3);
        return node;
    }

    Node new41()
    {
        TNumber node5 = (TNumber) pop();
        TAssignNormaldoc node4 = (TAssignNormaldoc) pop();
        TWidth node3 = (TWidth) pop();
        TQuote node2 = (TQuote) pop();
        PStringp node1 = (PStringp) pop();
        AEntity1841pEntity184p node = new AEntity1841pEntity184p(node1, node2, node3, node4, node5);
        return node;
    }

    Node new42()
    {
        TString1 node1 = (TString1) pop();
        AEntity1sEntityp node = new AEntity1sEntityp(node1);
        return node;
    }

    Node new43()
    {
        TNumber node1 = (TNumber) pop();
        AEntity1nEntityp node = new AEntity1nEntityp(node1);
        return node;
    }

    Node new44()
    {
        TTrue node1 = (TTrue) pop();
        AEntity1tEntityp node = new AEntity1tEntityp(node1);
        return node;
    }

    Node new45()
    {
        TFalse node1 = (TFalse) pop();
        AEntity1fEntityp node = new AEntity1fEntityp(node1);
        return node;
    }

    Node new46()
    {
        TBoldEnd node3 = (TBoldEnd) pop();
        PHtmlp node2 = (PHtmlp) pop();
        TBold node1 = (TBold) pop();
        AEntity2Entityp node = new AEntity2Entityp(node1, node2, node3);
        return node;
    }

    Node new47()
    {
        TItalicEnd node3 = (TItalicEnd) pop();
        PHtmlp node2 = (PHtmlp) pop();
        TItalic node1 = (TItalic) pop();
        AEntity3Entityp node = new AEntity3Entityp(node1, node2, node3);
        return node;
    }

    Node new48()
    {
        THeader1End node3 = (THeader1End) pop();
        PHtmlp node2 = (PHtmlp) pop();
        THeader1 node1 = (THeader1) pop();
        AEntity4Entityp node = new AEntity4Entityp(node1, node2, node3);
        return node;
    }

    Node new49()
    {
        THeader2End node3 = (THeader2End) pop();
        PHtmlp node2 = (PHtmlp) pop();
        THeader2 node1 = (THeader2) pop();
        AEntity5Entityp node = new AEntity5Entityp(node1, node2, node3);
        return node;
    }

    Node new50()
    {
        TPara node1 = (TPara) pop();
        AEntity6Entityp node = new AEntity6Entityp(node1);
        return node;
    }

    Node new51()
    {
        TBr node1 = (TBr) pop();
        AEntity7Entityp node = new AEntity7Entityp(node1);
        return node;
    }

    Node new52()
    {
        THr node1 = (THr) pop();
        AEntity8Entityp node = new AEntity8Entityp(node1);
        return node;
    }

    Node new53()
    {
        TClose node4 = (TClose) pop();
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        PEntity9p node1 = (PEntity9p) pop();
        AEntity9Entityp node = new AEntity9Entityp(node1, node2, node3, node4);
        return node;
    }

    Node new54()
    {
        TClose node4 = (TClose) pop();
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        PEntity10p node1 = (PEntity10p) pop();
        AEntity10Entityp node = new AEntity10Entityp(node1, node2, node3, node4);
        return node;
    }

    Node new55()
    {
        TAEnd node6 = (TAEnd) pop();
        PHtmlp node5 = (PHtmlp) pop();
        TClose node4 = (TClose) pop();
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        PEntity11p node1 = (PEntity11p) pop();
        AEntity11Entityp node = new AEntity11Entityp(node1, node2, node3, node4, node5, node6);
        return node;
    }

    Node new56()
    {
        TListEnd node3 = (TListEnd) pop();
        PItemsp node2 = (PItemsp) pop();
        TList node1 = (TList) pop();
        AEntity12Entityp node = new AEntity12Entityp(node1, node2, node3);
        return node;
    }

    Node new57()
    {
        TTableEnd node3 = (TTableEnd) pop();
        PRowsp node2 = (PRowsp) pop();
        TTable node1 = (TTable) pop();
        AEntity13Entityp node = new AEntity13Entityp(node1, node2, node3);
        return node;
    }

    Node new58()
    {
        TClose node4 = (TClose) pop();
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        PEntity14p node1 = (PEntity14p) pop();
        AEntity14Entityp node = new AEntity14Entityp(node1, node2, node3, node4);
        return node;
    }

    Node new59()
    {
        TSelectEnd node6 = (TSelectEnd) pop();
        POptionsp node5 = (POptionsp) pop();
        TClose node4 = (TClose) pop();
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        PEntity15p node1 = (PEntity15p) pop();
        AEntity15Entityp node = new AEntity15Entityp(node1, node2, node3, node4, node5, node6);
        return node;
    }

    Node new60()
    {
        TClose node7 = (TClose) pop();
        TNumber node6 = (TNumber) pop();
        TAssignNormaldoc node5 = (TAssignNormaldoc) pop();
        TSize node4 = (TSize) pop();
        TTextConst node3 = (TTextConst) pop();
        PEntity162p node2 = (PEntity162p) pop();
        PEntity161p node1 = (PEntity161p) pop();
        AEntity16Entityp node = new AEntity16Entityp(node1, node2, node3, node4, node5, node6, node7);
        return node;
    }

    Node new61()
    {
        PEntity171p node8 = (PEntity171p) pop();
        PStringp node7 = (PStringp) pop();
        TQuote node6 = (TQuote) pop();
        TAssignNormaldoc node5 = (TAssignNormaldoc) pop();
        TValue node4 = (TValue) pop();
        TRadio node3 = (TRadio) pop();
        PEntity162p node2 = (PEntity162p) pop();
        PEntity161p node1 = (PEntity161p) pop();
        AEntity17Entityp node = new AEntity17Entityp(node1, node2, node3, node4, node5, node6, node7, node8);
        return node;
    }

    Node new62()
    {
        TAppletEnd node10 = (TAppletEnd) pop();
        PArgumentsp node9 = (PArgumentsp) pop();
        TClose node8 = (TClose) pop();
        TNumber node7 = (TNumber) pop();
        TAssignNormaldoc node6 = (TAssignNormaldoc) pop();
        THeight node5 = (THeight) pop();
        PEntity184p node4 = (PEntity184p) pop();
        PEntity183p node3 = (PEntity183p) pop();
        PEntity182p node2 = (PEntity182p) pop();
        PEntity181p node1 = (PEntity181p) pop();
        AEntity18Entityp node = new AEntity18Entityp(node1, node2, node3, node4, node5, node6, node7, node8, node9, node10);
        return node;
    }

    Node new63()
    {
        POptionp node1 = (POptionp) pop();
        AOptions1Optionsp node = new AOptions1Optionsp(node1);
        return node;
    }

    Node new64()
    {
        POptionp node2 = (POptionp) pop();
        POptionsp node1 = (POptionsp) pop();
        AOptions2Optionsp node = new AOptions2Optionsp(node1, node2);
        return node;
    }

    Node new65()
    {
        TQuote node4 = (TQuote) pop();
        TAssignNormaldoc node3 = (TAssignNormaldoc) pop();
        TValue node2 = (TValue) pop();
        POptionp node1 = (POptionp) pop();
        AOption11Option1p node = new AOption11Option1p(node1, node2, node3, node4);
        return node;
    }

    Node new66()
    {
        PLiteralsp node5 = (PLiteralsp) pop();
        TClose node4 = (TClose) pop();
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        POption1p node1 = (POption1p) pop();
        AOption1Optionp node = new AOption1Optionp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new67()
    {
        PLiteralp node1 = (PLiteralp) pop();
        ALiterals1Literalsp node = new ALiterals1Literalsp(node1);
        return node;
    }

    Node new68()
    {
        PLiteralp node2 = (PLiteralp) pop();
        PLiteralsp node1 = (PLiteralsp) pop();
        ALiterals2Literalsp node = new ALiterals2Literalsp(node1, node2);
        return node;
    }

    Node new69()
    {
        PEntity182p node2 = (PEntity182p) pop();
        TQuote node1 = (TQuote) pop();
        ALiteral1Literalp node = new ALiteral1Literalp(node1, node2);
        return node;
    }

    Node new70()
    {
        TNumber node1 = (TNumber) pop();
        ALiteral2Literalp node = new ALiteral2Literalp(node1);
        return node;
    }

    Node new71()
    {
        TTrue node1 = (TTrue) pop();
        ALiteral3Literalp node = new ALiteral3Literalp(node1);
        return node;
    }

    Node new72()
    {
        TFalse node1 = (TFalse) pop();
        ALiteral4Literalp node = new ALiteral4Literalp(node1);
        return node;
    }

    Node new73()
    {
        PItemp node1 = (PItemp) pop();
        AItems1Itemsp node = new AItems1Itemsp(node1);
        return node;
    }

    Node new74()
    {
        PItemp node2 = (PItemp) pop();
        PItemsp node1 = (PItemsp) pop();
        AItems2Itemsp node = new AItems2Itemsp(node1, node2);
        return node;
    }

    Node new75()
    {
        PHtmlp node2 = (PHtmlp) pop();
        TLi node1 = (TLi) pop();
        AItem1Itemp node = new AItem1Itemp(node1, node2);
        return node;
    }

    Node new76()
    {
        PRowp node1 = (PRowp) pop();
        ARows1Rowsp node = new ARows1Rowsp(node1);
        return node;
    }

    Node new77()
    {
        PRowp node2 = (PRowp) pop();
        PRowsp node1 = (PRowsp) pop();
        ARows2Rowsp node = new ARows2Rowsp(node1, node2);
        return node;
    }

    Node new78()
    {
        TTrEnd node3 = (TTrEnd) pop();
        PEntriesp node2 = (PEntriesp) pop();
        TTr node1 = (TTr) pop();
        ARow1Rowp node = new ARow1Rowp(node1, node2, node3);
        return node;
    }

    Node new79()
    {
        PEntryp node1 = (PEntryp) pop();
        AEntries1Entriesp node = new AEntries1Entriesp(node1);
        return node;
    }

    Node new80()
    {
        PEntryp node2 = (PEntryp) pop();
        PEntriesp node1 = (PEntriesp) pop();
        AEntries2Entriesp node = new AEntries2Entriesp(node1, node2);
        return node;
    }

    Node new81()
    {
        TTdEnd node3 = (TTdEnd) pop();
        PHtmlp node2 = (PHtmlp) pop();
        TTd node1 = (TTd) pop();
        AEntry1Entryp node = new AEntry1Entryp(node1, node2, node3);
        return node;
    }

    Node new82()
    {
        AEmptyArgumentsp node = new AEmptyArgumentsp();
        return node;
    }

    Node new83()
    {
        PNeargumentsp node1 = (PNeargumentsp) pop();
        AArguments1Argumentsp node = new AArguments1Argumentsp(node1);
        return node;
    }

    Node new84()
    {
        PArgumentp node1 = (PArgumentp) pop();
        ANearguments1Neargumentsp node = new ANearguments1Neargumentsp(node1);
        return node;
    }

    Node new85()
    {
        PArgumentp node2 = (PArgumentp) pop();
        PNeargumentsp node1 = (PNeargumentsp) pop();
        ANearguments2Neargumentsp node = new ANearguments2Neargumentsp(node1, node2);
        return node;
    }

    Node new86()
    {
        TQuote node4 = (TQuote) pop();
        TAssignSp2 node3 = (TAssignSp2) pop();
        TName node2 = (TName) pop();
        TParam node1 = (TParam) pop();
        AArgument11Argument1p node = new AArgument11Argument1p(node1, node2, node3, node4);
        return node;
    }

    Node new87()
    {
        TQuote node4 = (TQuote) pop();
        TAssignSp2 node3 = (TAssignSp2) pop();
        TName node2 = (TName) pop();
        TResult node1 = (TResult) pop();
        AArgument31Argument3p node = new AArgument31Argument3p(node1, node2, node3, node4);
        return node;
    }

    Node new88()
    {
        PStringp node2 = (PStringp) pop();
        PArgument1p node1 = (PArgument1p) pop();
        AArgdum1Argdump node = new AArgdum1Argdump(node1, node2);
        return node;
    }

    Node new89()
    {
        TClose node6 = (TClose) pop();
        PStringp node5 = (PStringp) pop();
        TAssignNormaldoc node4 = (TAssignNormaldoc) pop();
        TValue node3 = (TValue) pop();
        TQuote node2 = (TQuote) pop();
        PArgdump node1 = (PArgdump) pop();
        AArgument1Argumentp node = new AArgument1Argumentp(node1, node2, node3, node4, node5, node6);
        return node;
    }

    Node new90()
    {
        TClose node3 = (TClose) pop();
        TQuote node2 = (TQuote) pop();
        PArgdump node1 = (PArgdump) pop();
        AArgument2Argumentp node = new AArgument2Argumentp(node1, node2, node3);
        return node;
    }

    Node new91()
    {
        TClose node4 = (TClose) pop();
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        PArgument3p node1 = (PArgument3p) pop();
        AArgument3Argumentp node = new AArgument3Argumentp(node1, node2, node3, node4);
        return node;
    }

    Node new92()
    {
        PSessionp node1 = (PSessionp) pop();
        ASessions1Sessionsp node = new ASessions1Sessionsp(node1);
        return node;
    }

    Node new93()
    {
        PSessionp node2 = (PSessionp) pop();
        PSessionsp node1 = (PSessionsp) pop();
        ASessions2Sessionsp node = new ASessions2Sessionsp(node1, node2);
        return node;
    }

    Node new94()
    {
        PTerminationp node7 = (PTerminationp) pop();
        TCloseBr node6 = (TCloseBr) pop();
        PStatementseqp node5 = (PStatementseqp) pop();
        PLocalsp node4 = (PLocalsp) pop();
        TOpenBr node3 = (TOpenBr) pop();
        TIdentifier node2 = (TIdentifier) pop();
        TSession node1 = (TSession) pop();
        ASession1Sessionp node = new ASession1Sessionp(node1, node2, node3, node4, node5, node6, node7);
        return node;
    }

    Node new95()
    {
        TQuote node3 = (TQuote) pop();
        TWith node2 = (TWith) pop();
        TEnds node1 = (TEnds) pop();
        ATermination11Termination1p node = new ATermination11Termination1p(node1, node2, node3);
        return node;
    }

    Node new96()
    {
        AEmptyTerminationp node = new AEmptyTerminationp();
        return node;
    }

    Node new97()
    {
        TQuote node3 = (TQuote) pop();
        PStringp node2 = (PStringp) pop();
        PTermination1p node1 = (PTermination1p) pop();
        ATermination1Terminationp node = new ATermination1Terminationp(node1, node2, node3);
        return node;
    }

    Node new98()
    {
        AEmptyLocalsp node = new AEmptyLocalsp();
        return node;
    }

    Node new99()
    {
        PNelocalsp node1 = (PNelocalsp) pop();
        ALocals1Localsp node = new ALocals1Localsp(node1);
        return node;
    }

    Node new100()
    {
        TSemicolon node2 = (TSemicolon) pop();
        PLocalp node1 = (PLocalp) pop();
        ANelocals1Nelocalsp node = new ANelocals1Nelocalsp(node1, node2);
        return node;
    }

    Node new101()
    {
        TSemicolon node3 = (TSemicolon) pop();
        PLocalp node2 = (PLocalp) pop();
        PNelocalsp node1 = (PNelocalsp) pop();
        ANelocals2Nelocalsp node = new ANelocals2Nelocalsp(node1, node2, node3);
        return node;
    }

    Node new102()
    {
        PIntinitsp node5 = (PIntinitsp) pop();
        TInt node4 = (TInt) pop();
        TSpecify node3 = (TSpecify) pop();
        PNenamesp node2 = (PNenamesp) pop();
        TLocal node1 = (TLocal) pop();
        ALocal1Localp node = new ALocal1Localp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new103()
    {
        PBoolinitsp node5 = (PBoolinitsp) pop();
        TBool node4 = (TBool) pop();
        TSpecify node3 = (TSpecify) pop();
        PNenamesp node2 = (PNenamesp) pop();
        TLocal node1 = (TLocal) pop();
        ALocal2Localp node = new ALocal2Localp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new104()
    {
        PTextinitsp node5 = (PTextinitsp) pop();
        TText node4 = (TText) pop();
        TSpecify node3 = (TSpecify) pop();
        PNenamesp node2 = (PNenamesp) pop();
        TLocal node1 = (TLocal) pop();
        ALocal3Localp node = new ALocal3Localp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new105()
    {
        AEmptyIntinitsp node = new AEmptyIntinitsp();
        return node;
    }

    Node new106()
    {
        TNumber node2 = (TNumber) pop();
        TEqualSes node1 = (TEqualSes) pop();
        AIntinits1Intinitsp node = new AIntinits1Intinitsp(node1, node2);
        return node;
    }

    Node new107()
    {
        AEmptyBoolinitsp node = new AEmptyBoolinitsp();
        return node;
    }

    Node new108()
    {
        TTrue node2 = (TTrue) pop();
        TEqualSes node1 = (TEqualSes) pop();
        ABoolinits1Boolinitsp node = new ABoolinits1Boolinitsp(node1, node2);
        return node;
    }

    Node new109()
    {
        TFalse node2 = (TFalse) pop();
        TEqualSes node1 = (TEqualSes) pop();
        ABoolinits2Boolinitsp node = new ABoolinits2Boolinitsp(node1, node2);
        return node;
    }

    Node new110()
    {
        PStringp node3 = (PStringp) pop();
        TQuote node2 = (TQuote) pop();
        TEqualSes node1 = (TEqualSes) pop();
        ATextinits11Textinit1sp node = new ATextinits11Textinit1sp(node1, node2, node3);
        return node;
    }

    Node new111()
    {
        AEmptyTextinitsp node = new AEmptyTextinitsp();
        return node;
    }

    Node new112()
    {
        TQuote node2 = (TQuote) pop();
        PTextinit1sp node1 = (PTextinit1sp) pop();
        ATextinits1Textinitsp node = new ATextinits1Textinitsp(node1, node2);
        return node;
    }

    Node new113()
    {
        TCloseBr node5 = (TCloseBr) pop();
        PStatementseqp node4 = (PStatementseqp) pop();
        TOpenBr node3 = (TOpenBr) pop();
        PExpp node2 = (PExpp) pop();
        TIf node1 = (TIf) pop();
        AStatement711Statement71p node = new AStatement711Statement71p(node1, node2, node3, node4, node5);
        return node;
    }

    Node new114()
    {
        AEmptyStatement72p node = new AEmptyStatement72p();
        return node;
    }

    Node new115()
    {
        TCloseBr node4 = (TCloseBr) pop();
        PStatementseqp node3 = (PStatementseqp) pop();
        TOpenBr node2 = (TOpenBr) pop();
        TElse node1 = (TElse) pop();
        AStatement721Statement72p node = new AStatement721Statement72p(node1, node2, node3, node4);
        return node;
    }

    Node new116()
    {
        AEmptyStatementp node = new AEmptyStatementp();
        return node;
    }

    Node new117()
    {
        TStop node1 = (TStop) pop();
        AStatement1Statementp node = new AStatement1Statementp(node1);
        return node;
    }

    Node new118()
    {
        PExpp node3 = (PExpp) pop();
        TAssignSes node2 = (TAssignSes) pop();
        TIdentifier node1 = (TIdentifier) pop();
        AStatement2Statementp node = new AStatement2Statementp(node1, node2, node3);
        return node;
    }

    Node new119()
    {
        TCloseBr node5 = (TCloseBr) pop();
        PStatementseqp node4 = (PStatementseqp) pop();
        TOpenBr node3 = (TOpenBr) pop();
        TIdentifier node2 = (TIdentifier) pop();
        TTake node1 = (TTake) pop();
        AStatement3Statementp node = new AStatement3Statementp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new120()
    {
        PParametersp node3 = (PParametersp) pop();
        TIdentifier node2 = (TIdentifier) pop();
        TShow node1 = (TShow) pop();
        AStatement5Statementp node = new AStatement5Statementp(node1, node2, node3);
        return node;
    }

    Node new121()
    {
        PStatement72p node2 = (PStatement72p) pop();
        PStatement71p node1 = (PStatement71p) pop();
        AStatement7Statementp node = new AStatement7Statementp(node1, node2);
        return node;
    }

    Node new122()
    {
        TCloseBr node5 = (TCloseBr) pop();
        PStatementseqp node4 = (PStatementseqp) pop();
        TOpenBr node3 = (TOpenBr) pop();
        PExpp node2 = (PExpp) pop();
        TWhile node1 = (TWhile) pop();
        AStatement8Statementp node = new AStatement8Statementp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new123()
    {
        PStatementp node1 = (PStatementp) pop();
        AStatementseq1Statementseqp node = new AStatementseq1Statementseqp(node1);
        return node;
    }

    Node new124()
    {
        PStatementp node3 = (PStatementp) pop();
        TSemicolon node2 = (TSemicolon) pop();
        PStatementseqp node1 = (PStatementseqp) pop();
        AStatementseq2Statementseqp node = new AStatementseq2Statementseqp(node1, node2, node3);
        return node;
    }

    Node new125()
    {
        AEmptyParametersp node = new AEmptyParametersp();
        return node;
    }

    Node new126()
    {
        TRightParen node2 = (TRightParen) pop();
        TLeftParen node1 = (TLeftParen) pop();
        AParameters1Parametersp node = new AParameters1Parametersp(node1, node2);
        return node;
    }

    Node new127()
    {
        TRightParen node3 = (TRightParen) pop();
        PNeparlistp node2 = (PNeparlistp) pop();
        TLeftParen node1 = (TLeftParen) pop();
        AParameters2Parametersp node = new AParameters2Parametersp(node1, node2, node3);
        return node;
    }

    Node new128()
    {
        PParameterp node1 = (PParameterp) pop();
        ANeparlist1Neparlistp node = new ANeparlist1Neparlistp(node1);
        return node;
    }

    Node new129()
    {
        PParameterp node3 = (PParameterp) pop();
        TComma node2 = (TComma) pop();
        PNeparlistp node1 = (PNeparlistp) pop();
        ANeparlist2Neparlistp node = new ANeparlist2Neparlistp(node1, node2, node3);
        return node;
    }

    Node new130()
    {
        TOut node2 = (TOut) pop();
        TIdentifier node1 = (TIdentifier) pop();
        AParameter21Parameter2p node = new AParameter21Parameter2p(node1, node2);
        return node;
    }

    Node new131()
    {
        PExpp node3 = (PExpp) pop();
        TIn node2 = (TIn) pop();
        TIdentifier node1 = (TIdentifier) pop();
        AParameter1Parameterp node = new AParameter1Parameterp(node1, node2, node3);
        return node;
    }

    Node new132()
    {
        TIdentifier node2 = (TIdentifier) pop();
        PParameter2p node1 = (PParameter2p) pop();
        AParameter2Parameterp node = new AParameter2Parameterp(node1, node2);
        return node;
    }

    Node new133()
    {
        TInterval node2 = (TInterval) pop();
        POrexpp node1 = (POrexpp) pop();
        AExppIntExppInt node = new AExppIntExppInt(node1, node2);
        return node;
    }

    Node new134()
    {
        POrexpp node1 = (POrexpp) pop();
        AExp1Expp node = new AExp1Expp(node1);
        return node;
    }

    Node new135()
    {
        TRightBrack node5 = (TRightBrack) pop();
        POrexpp node4 = (POrexpp) pop();
        PExppInt node3 = (PExppInt) pop();
        TLeftBrack node2 = (TLeftBrack) pop();
        PExpp node1 = (PExpp) pop();
        AExp2Expp node = new AExp2Expp(node1, node2, node3, node4, node5);
        return node;
    }

    Node new136()
    {
        PAndexpp node1 = (PAndexpp) pop();
        AOrexp1Orexpp node = new AOrexp1Orexpp(node1);
        return node;
    }

    Node new137()
    {
        PAndexpp node3 = (PAndexpp) pop();
        TOr node2 = (TOr) pop();
        POrexpp node1 = (POrexpp) pop();
        AOrexp2Orexpp node = new AOrexp2Orexpp(node1, node2, node3);
        return node;
    }

    Node new138()
    {
        PEqexpp node1 = (PEqexpp) pop();
        AAndexp1Andexpp node = new AAndexp1Andexpp(node1);
        return node;
    }

    Node new139()
    {
        PEqexpp node3 = (PEqexpp) pop();
        TAnd node2 = (TAnd) pop();
        PAndexpp node1 = (PAndexpp) pop();
        AAndexp2Andexpp node = new AAndexp2Andexpp(node1, node2, node3);
        return node;
    }

    Node new140()
    {
        PRelexpp node1 = (PRelexpp) pop();
        AEqexp1Eqexpp node = new AEqexp1Eqexpp(node1);
        return node;
    }

    Node new141()
    {
        PRelexpp node3 = (PRelexpp) pop();
        TEqualSes node2 = (TEqualSes) pop();
        PEqexpp node1 = (PEqexpp) pop();
        AEqexp2Eqexpp node = new AEqexp2Eqexpp(node1, node2, node3);
        return node;
    }

    Node new142()
    {
        PAddexpp node1 = (PAddexpp) pop();
        ARelexp1Relexpp node = new ARelexp1Relexpp(node1);
        return node;
    }

    Node new143()
    {
        PAddexpp node3 = (PAddexpp) pop();
        TGt node2 = (TGt) pop();
        PRelexpp node1 = (PRelexpp) pop();
        ARelexp2Relexpp node = new ARelexp2Relexpp(node1, node2, node3);
        return node;
    }

    Node new144()
    {
        PMultexpp node1 = (PMultexpp) pop();
        AAddexp1Addexpp node = new AAddexp1Addexpp(node1);
        return node;
    }

    Node new145()
    {
        PMultexpp node3 = (PMultexpp) pop();
        TPlus node2 = (TPlus) pop();
        PAddexpp node1 = (PAddexpp) pop();
        AAddexp2Addexpp node = new AAddexp2Addexpp(node1, node2, node3);
        return node;
    }

    Node new146()
    {
        PMultexpp node3 = (PMultexpp) pop();
        TMinus node2 = (TMinus) pop();
        PAddexpp node1 = (PAddexpp) pop();
        AAddexp3Addexpp node = new AAddexp3Addexpp(node1, node2, node3);
        return node;
    }

    Node new147()
    {
        PMultexpp node3 = (PMultexpp) pop();
        TAutoInc node2 = (TAutoInc) pop();
        PAddexpp node1 = (PAddexpp) pop();
        AAddexp4Addexpp node = new AAddexp4Addexpp(node1, node2, node3);
        return node;
    }

    Node new148()
    {
        PUnaryexpp node1 = (PUnaryexpp) pop();
        AMultexp1Multexpp node = new AMultexp1Multexpp(node1);
        return node;
    }

    Node new149()
    {
        PUnaryexpp node3 = (PUnaryexpp) pop();
        TMultiply node2 = (TMultiply) pop();
        PMultexpp node1 = (PMultexpp) pop();
        AMultexp2Multexpp node = new AMultexp2Multexpp(node1, node2, node3);
        return node;
    }

    Node new150()
    {
        PUnaryexpp node3 = (PUnaryexpp) pop();
        TDivide node2 = (TDivide) pop();
        PMultexpp node1 = (PMultexpp) pop();
        AMultexp3Multexpp node = new AMultexp3Multexpp(node1, node2, node3);
        return node;
    }

    Node new151()
    {
        PUnaryexpp node3 = (PUnaryexpp) pop();
        TModulo node2 = (TModulo) pop();
        PMultexpp node1 = (PMultexpp) pop();
        AMultexp4Multexpp node = new AMultexp4Multexpp(node1, node2, node3);
        return node;
    }

    Node new152()
    {
        PUnaryexpnmp node1 = (PUnaryexpnmp) pop();
        AUnaryexp1Unaryexpp node = new AUnaryexp1Unaryexpp(node1);
        return node;
    }

    Node new153()
    {
        PUnaryexpp node2 = (PUnaryexpp) pop();
        TMinus node1 = (TMinus) pop();
        AUnaryexp2Unaryexpp node = new AUnaryexp2Unaryexpp(node1, node2);
        return node;
    }

    Node new154()
    {
        PExpp node2 = (PExpp) pop();
        TAbs node1 = (TAbs) pop();
        AAbsExp1AbsExpp node = new AAbsExp1AbsExpp(node1, node2);
        return node;
    }

    Node new155()
    {
        PPostfixexpp node1 = (PPostfixexpp) pop();
        AUnaryexpnm1Unaryexpnmp node = new AUnaryexpnm1Unaryexpnmp(node1);
        return node;
    }

    Node new156()
    {
        PUnaryexpp node2 = (PUnaryexpp) pop();
        TNot node1 = (TNot) pop();
        AUnaryexpnm2Unaryexpnmp node = new AUnaryexpnm2Unaryexpnmp(node1, node2);
        return node;
    }

    Node new157()
    {
        TAbs node2 = (TAbs) pop();
        PAbsExpp node1 = (PAbsExpp) pop();
        AUnaryexpnm3Unaryexpnmp node = new AUnaryexpnm3Unaryexpnmp(node1, node2);
        return node;
    }

    Node new158()
    {
        TRightBrack node4 = (TRightBrack) pop();
        PExpp node3 = (PExpp) pop();
        TLeftBrack node2 = (TLeftBrack) pop();
        TRandom node1 = (TRandom) pop();
        AUnaryexpnm4Unaryexpnmp node = new AUnaryexpnm4Unaryexpnmp(node1, node2, node3, node4);
        return node;
    }

    Node new159()
    {
        TRightBrack node4 = (TRightBrack) pop();
        PExpp node3 = (PExpp) pop();
        TLeftBrack node2 = (TLeftBrack) pop();
        TSystem node1 = (TSystem) pop();
        AUnaryexpnm5Unaryexpnmp node = new AUnaryexpnm5Unaryexpnmp(node1, node2, node3, node4);
        return node;
    }

    Node new160()
    {
        TIdentifier node1 = (TIdentifier) pop();
        APostfixexp1Postfixexpp node = new APostfixexp1Postfixexpp(node1);
        return node;
    }

    Node new161()
    {
        PPrimexpp node1 = (PPrimexpp) pop();
        APostfixexp2Postfixexpp node = new APostfixexp2Postfixexpp(node1);
        return node;
    }

    Node new162()
    {
        PLiteralp node1 = (PLiteralp) pop();
        APrimexp1Primexpp node = new APrimexp1Primexpp(node1);
        return node;
    }

    Node new163()
    {
        TRightBrack node3 = (TRightBrack) pop();
        PExpp node2 = (PExpp) pop();
        TLeftBrack node1 = (TLeftBrack) pop();
        APrimexp2Primexpp node = new APrimexp2Primexpp(node1, node2, node3);
        return node;
    }

    private static int[][][] actionTable;
/*      {
			{{-1, ERROR, 0}, {0, SHIFT, 1}, },
			{{-1, ERROR, 1}, {66, SHIFT, 3}, },
			{{-1, ERROR, 2}, {101, ACCEPT, -1}, },
			{{-1, REDUCE, 1}, {3, SHIFT, 4}, },
			{{-1, ERROR, 4}, {43, SHIFT, 8}, },
			{{-1, ERROR, 5}, {1, SHIFT, 11}, },
			{{-1, REDUCE, 2}, {3, SHIFT, 4}, },
			{{-1, ERROR, 7}, {32, SHIFT, 15}, },
			{{-1, REDUCE, 10}, },
			{{-1, ERROR, 9}, {42, SHIFT, 16}, {47, SHIFT, 17}, },
			{{-1, REDUCE, 8}, },
			{{-1, ERROR, 11}, {43, SHIFT, 18}, },
			{{-1, ERROR, 12}, {1, SHIFT, 11}, {2, SHIFT, 19}, },
			{{-1, REDUCE, 22}, },
			{{-1, ERROR, 14}, {32, SHIFT, 23}, },
			{{-1, REDUCE, 3}, },
			{{-1, ERROR, 16}, {43, SHIFT, 8}, },
			{{-1, ERROR, 17}, {13, SHIFT, 25}, {14, SHIFT, 26}, {15, SHIFT, 27}, },
			{{-1, REDUCE, 26}, {39, SHIFT, 28}, },
			{{-1, ERROR, 19}, {43, SHIFT, 31}, },
			{{-1, REDUCE, 23}, },
			{{-1, ERROR, 21}, {2, SHIFT, 19}, {97, SHIFT, 32}, },
			{{-1, REDUCE, 92}, },
			{{-1, REDUCE, 4}, },
			{{-1, REDUCE, 9}, },
			{{-1, REDUCE, 13}, {48, SHIFT, 34}, },
			{{-1, REDUCE, 17}, {48, SHIFT, 36}, },
			{{-1, REDUCE, 11}, {48, SHIFT, 39}, },
			{{-1, ERROR, 28}, {98, SHIFT, 41}, },
			{{-1, ERROR, 29}, {98, SHIFT, 42}, },
			{{-1, ERROR, 30}, {66, SHIFT, 43}, },
			{{-1, ERROR, 31}, {66, SHIFT, 44}, },
			{{-1, REDUCE, 0}, },
			{{-1, REDUCE, 93}, },
			{{-1, ERROR, 34}, {45, SHIFT, 45}, {46, SHIFT, 46}, },
			{{-1, REDUCE, 6}, },
			{{-1, ERROR, 36}, {98, SHIFT, 47}, },
			{{-1, ERROR, 37}, {98, SHIFT, 48}, },
			{{-1, REDUCE, 7}, },
			{{-1, ERROR, 39}, {44, SHIFT, 49}, },
			{{-1, REDUCE, 5}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, ERROR, 42}, {40, SHIFT, 53}, },
			{{-1, ERROR, 43}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, REDUCE, 98}, {4, SHIFT, 83}, },
			{{-1, REDUCE, 14}, },
			{{-1, REDUCE, 15}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 18}, },
			{{-1, REDUCE, 12}, },
			{{-1, REDUCE, 20}, },
			{{-1, REDUCE, 21}, },
			{{-1, REDUCE, 25}, },
			{{-1, REDUCE, 27}, },
			{{-1, REDUCE, 43}, },
			{{-1, REDUCE, 44}, },
			{{-1, REDUCE, 45}, },
			{{-1, ERROR, 57}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 58}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 59}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 60}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, REDUCE, 50}, },
			{{-1, REDUCE, 51}, },
			{{-1, REDUCE, 52}, },
			{{-1, ERROR, 64}, {61, SHIFT, 92}, },
			{{-1, ERROR, 65}, {63, SHIFT, 93}, },
			{{-1, ERROR, 66}, {67, SHIFT, 94}, },
			{{-1, ERROR, 67}, {70, SHIFT, 95}, },
			{{-1, ERROR, 68}, {71, SHIFT, 98}, },
			{{-1, ERROR, 69}, {82, SHIFT, 101}, },
			{{-1, ERROR, 70}, {82, SHIFT, 102}, },
			{{-1, ERROR, 71}, {82, SHIFT, 103}, },
			{{-1, ERROR, 72}, {93, SHIFT, 104}, },
			{{-1, REDUCE, 42}, },
			{{-1, ERROR, 74}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {97, SHIFT, 105}, {100, SHIFT, 73}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 28}, },
			{{-1, ERROR, 83}, {43, SHIFT, 8}, },
			{{-1, REDUCE, 116}, {6, SHIFT, 117}, {7, SHIFT, 118}, {8, SHIFT, 119}, {16, SHIFT, 120}, {18, SHIFT, 121}, {43, SHIFT, 122}, },
			{{-1, REDUCE, 99}, {4, SHIFT, 83}, },
			{{-1, ERROR, 86}, {32, SHIFT, 127}, },
			{{-1, REDUCE, 16}, },
			{{-1, ERROR, 88}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {50, SHIFT, 128}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 89}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {52, SHIFT, 129}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 90}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {54, SHIFT, 130}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 91}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {56, SHIFT, 131}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 92}, {48, SHIFT, 132}, },
			{{-1, ERROR, 93}, {48, SHIFT, 133}, },
			{{-1, ERROR, 94}, {48, SHIFT, 134}, },
			{{-1, ERROR, 95}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 96}, {69, SHIFT, 136}, {70, SHIFT, 95}, },
			{{-1, REDUCE, 73}, },
			{{-1, ERROR, 98}, {73, SHIFT, 138}, },
			{{-1, ERROR, 99}, {71, SHIFT, 98}, {76, SHIFT, 141}, },
			{{-1, REDUCE, 76}, },
			{{-1, ERROR, 101}, {83, SHIFT, 143}, },
			{{-1, ERROR, 102}, {83, SHIFT, 144}, },
			{{-1, ERROR, 103}, {83, SHIFT, 145}, },
			{{-1, ERROR, 104}, {48, SHIFT, 146}, },
			{{-1, REDUCE, 24}, },
			{{-1, REDUCE, 29}, },
			{{-1, ERROR, 107}, {98, SHIFT, 147}, },
			{{-1, ERROR, 108}, {98, SHIFT, 148}, },
			{{-1, ERROR, 109}, {98, SHIFT, 149}, },
			{{-1, ERROR, 110}, {98, SHIFT, 150}, },
			{{-1, ERROR, 111}, {98, SHIFT, 151}, },
			{{-1, ERROR, 112}, {98, SHIFT, 152}, },
			{{-1, ERROR, 113}, {88, SHIFT, 153}, {89, SHIFT, 154}, },
			{{-1, ERROR, 114}, {98, SHIFT, 155}, },
			{{-1, ERROR, 115}, {94, SHIFT, 156}, },
			{{-1, ERROR, 116}, {42, SHIFT, 16}, {47, SHIFT, 158}, },
			{{-1, REDUCE, 117}, },
			{{-1, ERROR, 118}, {43, SHIFT, 159}, },
			{{-1, ERROR, 119}, {43, SHIFT, 160}, },
			{{-1, ERROR, 120}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 121}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 122}, {5, SHIFT, 186}, },
			{{-1, REDUCE, 114}, {17, SHIFT, 187}, },
			{{-1, REDUCE, 123}, },
			{{-1, ERROR, 125}, {32, SHIFT, 189}, {97, SHIFT, 190}, },
			{{-1, ERROR, 126}, {32, SHIFT, 191}, },
			{{-1, REDUCE, 100}, },
			{{-1, REDUCE, 46}, },
			{{-1, REDUCE, 47}, },
			{{-1, REDUCE, 48}, },
			{{-1, REDUCE, 49}, },
			{{-1, ERROR, 132}, {98, SHIFT, 192}, },
			{{-1, ERROR, 133}, {98, SHIFT, 193}, },
			{{-1, ERROR, 134}, {98, SHIFT, 194}, },
			{{-1, REDUCE, 75}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, REDUCE, 56}, },
			{{-1, REDUCE, 74}, },
			{{-1, ERROR, 138}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 139}, {72, SHIFT, 196}, {73, SHIFT, 138}, },
			{{-1, REDUCE, 79}, },
			{{-1, REDUCE, 57}, },
			{{-1, REDUCE, 77}, },
			{{-1, ERROR, 143}, {98, SHIFT, 198}, },
			{{-1, ERROR, 144}, {98, SHIFT, 199}, },
			{{-1, ERROR, 145}, {98, SHIFT, 200}, },
			{{-1, ERROR, 146}, {98, SHIFT, 201}, },
			{{-1, ERROR, 147}, {99, SHIFT, 202}, },
			{{-1, ERROR, 148}, {99, SHIFT, 203}, },
			{{-1, ERROR, 149}, {99, SHIFT, 204}, },
			{{-1, ERROR, 150}, {99, SHIFT, 205}, },
			{{-1, ERROR, 151}, {99, SHIFT, 206}, },
			{{-1, ERROR, 152}, {85, SHIFT, 207}, },
			{{-1, ERROR, 153}, {86, SHIFT, 208}, },
			{{-1, ERROR, 154}, {87, SHIFT, 209}, },
			{{-1, REDUCE, 39}, },
			{{-1, ERROR, 156}, {48, SHIFT, 210}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, ERROR, 158}, {13, SHIFT, 213}, {14, SHIFT, 214}, {15, SHIFT, 215}, },
			{{-1, ERROR, 159}, {66, SHIFT, 216}, },
			{{-1, REDUCE, 125}, {35, SHIFT, 217}, },
			{{-1, ERROR, 161}, {33, SHIFT, 219}, },
			{{-1, ERROR, 162}, {33, SHIFT, 220}, },
			{{-1, ERROR, 163}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 164}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 165}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 166}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, REDUCE, 160}, },
			{{-1, REDUCE, 70}, },
			{{-1, REDUCE, 71}, },
			{{-1, REDUCE, 72}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 162}, },
			{{-1, ERROR, 173}, {33, SHIFT, 226}, {66, SHIFT, 227}, },
			{{-1, REDUCE, 134}, {23, SHIFT, 228}, },
			{{-1, REDUCE, 136}, {21, SHIFT, 229}, },
			{{-1, REDUCE, 138}, {19, SHIFT, 230}, },
			{{-1, REDUCE, 140}, {20, SHIFT, 231}, },
			{{-1, REDUCE, 142}, {24, SHIFT, 232}, {26, SHIFT, 233}, {27, SHIFT, 234}, },
			{{-1, REDUCE, 144}, {28, SHIFT, 235}, {29, SHIFT, 236}, {30, SHIFT, 237}, },
			{{-1, REDUCE, 148}, },
			{{-1, ERROR, 181}, {31, SHIFT, 238}, },
			{{-1, REDUCE, 152}, },
			{{-1, REDUCE, 155}, },
			{{-1, REDUCE, 161}, },
			{{-1, ERROR, 185}, {33, SHIFT, 226}, {66, SHIFT, 239}, },
			{{-1, ERROR, 186}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 187}, {66, SHIFT, 241}, },
			{{-1, REDUCE, 121}, },
			{{-1, REDUCE, 116}, {6, SHIFT, 117}, {7, SHIFT, 118}, {8, SHIFT, 119}, {16, SHIFT, 120}, {18, SHIFT, 121}, {43, SHIFT, 122}, },
			{{-1, REDUCE, 96}, {37, SHIFT, 243}, },
			{{-1, REDUCE, 101}, },
			{{-1, REDUCE, 30}, },
			{{-1, REDUCE, 31}, },
			{{-1, REDUCE, 32}, },
			{{-1, ERROR, 195}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {74, SHIFT, 246}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, REDUCE, 78}, },
			{{-1, REDUCE, 80}, },
			{{-1, REDUCE, 33}, },
			{{-1, REDUCE, 34}, },
			{{-1, REDUCE, 35}, },
			{{-1, REDUCE, 38}, },
			{{-1, REDUCE, 53}, },
			{{-1, REDUCE, 54}, },
			{{-1, ERROR, 204}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, REDUCE, 58}, },
			{{-1, ERROR, 206}, },
			{{-1, ERROR, 207}, {48, SHIFT, 251}, },
			{{-1, ERROR, 208}, {48, SHIFT, 252}, },
			{{-1, ERROR, 209}, {48, SHIFT, 253}, },
			{{-1, ERROR, 210}, {98, SHIFT, 254}, },
			{{-1, ERROR, 211}, {98, SHIFT, 255}, },
			{{-1, ERROR, 212}, {96, SHIFT, 256}, },
			{{-1, REDUCE, 107}, {19, SHIFT, 257}, },
			{{-1, REDUCE, 111}, {19, SHIFT, 259}, },
			{{-1, REDUCE, 105}, {19, SHIFT, 262}, },
			{{-1, REDUCE, 116}, {6, SHIFT, 117}, {7, SHIFT, 118}, {8, SHIFT, 119}, {16, SHIFT, 120}, {18, SHIFT, 121}, {43, SHIFT, 122}, },
			{{-1, ERROR, 217}, {36, SHIFT, 265}, {43, SHIFT, 266}, },
			{{-1, REDUCE, 120}, },
			{{-1, ERROR, 219}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 220}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, REDUCE, 156}, },
			{{-1, REDUCE, 153}, },
			{{-1, REDUCE, 154}, {33, SHIFT, 226}, },
			{{-1, ERROR, 224}, {33, SHIFT, 226}, {34, SHIFT, 272}, },
			{{-1, REDUCE, 69}, },
			{{-1, ERROR, 226}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, REDUCE, 116}, {6, SHIFT, 117}, {7, SHIFT, 118}, {8, SHIFT, 119}, {16, SHIFT, 120}, {18, SHIFT, 121}, {43, SHIFT, 122}, },
			{{-1, ERROR, 228}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 229}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 230}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 231}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 232}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 233}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 234}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 235}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 236}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 237}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, REDUCE, 157}, },
			{{-1, REDUCE, 116}, {6, SHIFT, 117}, {7, SHIFT, 118}, {8, SHIFT, 119}, {16, SHIFT, 120}, {18, SHIFT, 121}, {43, SHIFT, 122}, },
			{{-1, REDUCE, 118}, {33, SHIFT, 226}, },
			{{-1, REDUCE, 116}, {6, SHIFT, 117}, {7, SHIFT, 118}, {8, SHIFT, 119}, {16, SHIFT, 120}, {18, SHIFT, 121}, {43, SHIFT, 122}, },
			{{-1, REDUCE, 124}, },
			{{-1, ERROR, 243}, {38, SHIFT, 288}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 94}, },
			{{-1, REDUCE, 81}, },
			{{-1, ERROR, 247}, {44, SHIFT, 54}, {45, SHIFT, 55}, {46, SHIFT, 56}, {49, SHIFT, 57}, {51, SHIFT, 58}, {53, SHIFT, 59}, {55, SHIFT, 60}, {57, SHIFT, 61}, {58, SHIFT, 62}, {59, SHIFT, 63}, {60, SHIFT, 64}, {62, SHIFT, 65}, {64, SHIFT, 66}, {65, SHIFT, 290}, {68, SHIFT, 67}, {75, SHIFT, 68}, {77, SHIFT, 69}, {78, SHIFT, 70}, {79, SHIFT, 71}, {90, SHIFT, 72}, {100, SHIFT, 73}, },
			{{-1, ERROR, 248}, {92, SHIFT, 291}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 63}, {87, SHIFT, 294}, },
			{{-1, REDUCE, 36}, },
			{{-1, ERROR, 252}, {44, SHIFT, 295}, },
			{{-1, ERROR, 253}, {98, SHIFT, 296}, },
			{{-1, REDUCE, 40}, },
			{{-1, ERROR, 255}, {95, SHIFT, 297}, },
			{{-1, ERROR, 256}, {48, SHIFT, 298}, },
			{{-1, ERROR, 257}, {45, SHIFT, 299}, {46, SHIFT, 300}, },
			{{-1, REDUCE, 103}, },
			{{-1, ERROR, 259}, {98, SHIFT, 301}, },
			{{-1, ERROR, 260}, {98, SHIFT, 302}, },
			{{-1, REDUCE, 104}, },
			{{-1, ERROR, 262}, {44, SHIFT, 303}, },
			{{-1, REDUCE, 102}, },
			{{-1, ERROR, 264}, {32, SHIFT, 189}, {97, SHIFT, 304}, },
			{{-1, REDUCE, 126}, },
			{{-1, ERROR, 266}, {9, SHIFT, 305}, {10, SHIFT, 306}, },
			{{-1, ERROR, 267}, {36, SHIFT, 307}, {42, SHIFT, 308}, },
			{{-1, ERROR, 268}, {43, SHIFT, 309}, },
			{{-1, REDUCE, 128}, },
			{{-1, ERROR, 270}, {33, SHIFT, 226}, {34, SHIFT, 310}, },
			{{-1, ERROR, 271}, {33, SHIFT, 226}, {34, SHIFT, 311}, },
			{{-1, REDUCE, 163}, },
			{{-1, ERROR, 273}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, ERROR, 274}, {23, SHIFT, 228}, {25, SHIFT, 313}, },
			{{-1, ERROR, 275}, {32, SHIFT, 189}, {97, SHIFT, 314}, },
			{{-1, REDUCE, 137}, {21, SHIFT, 229}, },
			{{-1, REDUCE, 139}, {19, SHIFT, 230}, },
			{{-1, REDUCE, 141}, {20, SHIFT, 231}, },
			{{-1, REDUCE, 143}, {24, SHIFT, 232}, {26, SHIFT, 233}, {27, SHIFT, 234}, },
			{{-1, REDUCE, 147}, {28, SHIFT, 235}, {29, SHIFT, 236}, {30, SHIFT, 237}, },
			{{-1, REDUCE, 145}, {28, SHIFT, 235}, {29, SHIFT, 236}, {30, SHIFT, 237}, },
			{{-1, REDUCE, 146}, {28, SHIFT, 235}, {29, SHIFT, 236}, {30, SHIFT, 237}, },
			{{-1, REDUCE, 149}, },
			{{-1, REDUCE, 150}, },
			{{-1, REDUCE, 151}, },
			{{-1, ERROR, 286}, {32, SHIFT, 189}, {97, SHIFT, 315}, },
			{{-1, ERROR, 287}, {32, SHIFT, 189}, {97, SHIFT, 316}, },
			{{-1, ERROR, 288}, {98, SHIFT, 317}, },
			{{-1, ERROR, 289}, {98, SHIFT, 318}, },
			{{-1, REDUCE, 55}, },
			{{-1, REDUCE, 59}, },
			{{-1, REDUCE, 64}, {87, SHIFT, 294}, },
			{{-1, ERROR, 293}, {98, SHIFT, 319}, },
			{{-1, ERROR, 294}, {48, SHIFT, 320}, },
			{{-1, ERROR, 295}, {99, SHIFT, 321}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, ERROR, 297}, {48, SHIFT, 323}, },
			{{-1, ERROR, 298}, {44, SHIFT, 324}, },
			{{-1, REDUCE, 108}, },
			{{-1, REDUCE, 109}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 112}, },
			{{-1, REDUCE, 106}, },
			{{-1, REDUCE, 119}, },
			{{-1, ERROR, 305}, {11, SHIFT, 161}, {12, SHIFT, 162}, {22, SHIFT, 163}, {27, SHIFT, 164}, {31, SHIFT, 165}, {33, SHIFT, 166}, {43, SHIFT, 167}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, REDUCE, 130}, },
			{{-1, REDUCE, 127}, },
			{{-1, ERROR, 308}, {43, SHIFT, 266}, },
			{{-1, REDUCE, 132}, },
			{{-1, REDUCE, 158}, },
			{{-1, REDUCE, 159}, },
			{{-1, ERROR, 312}, {23, SHIFT, 228}, {34, SHIFT, 328}, },
			{{-1, REDUCE, 133}, },
			{{-1, REDUCE, 113}, },
			{{-1, REDUCE, 122}, },
			{{-1, REDUCE, 115}, },
			{{-1, REDUCE, 95}, },
			{{-1, REDUCE, 97}, },
			{{-1, ERROR, 319}, {99, SHIFT, 329}, },
			{{-1, ERROR, 320}, {98, SHIFT, 330}, },
			{{-1, REDUCE, 60}, },
			{{-1, ERROR, 322}, {98, SHIFT, 331}, },
			{{-1, ERROR, 323}, {44, SHIFT, 333}, },
			{{-1, ERROR, 324}, {99, SHIFT, 334}, },
			{{-1, REDUCE, 110}, },
			{{-1, REDUCE, 131}, {33, SHIFT, 226}, },
			{{-1, REDUCE, 129}, },
			{{-1, REDUCE, 135}, },
			{{-1, ERROR, 329}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, REDUCE, 65}, },
			{{-1, ERROR, 331}, {99, SHIFT, 337}, },
			{{-1, REDUCE, 61}, },
			{{-1, REDUCE, 41}, },
			{{-1, REDUCE, 82}, {80, SHIFT, 338}, {81, SHIFT, 339}, },
			{{-1, REDUCE, 66}, {44, SHIFT, 168}, {45, SHIFT, 169}, {46, SHIFT, 170}, {98, SHIFT, 171}, },
			{{-1, REDUCE, 67}, },
			{{-1, REDUCE, 37}, },
			{{-1, ERROR, 338}, {82, SHIFT, 347}, },
			{{-1, ERROR, 339}, {82, SHIFT, 348}, },
			{{-1, ERROR, 340}, {91, SHIFT, 349}, },
			{{-1, REDUCE, 83}, {80, SHIFT, 338}, {81, SHIFT, 339}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, ERROR, 344}, {98, SHIFT, 353}, },
			{{-1, REDUCE, 84}, },
			{{-1, REDUCE, 68}, },
			{{-1, ERROR, 347}, {83, SHIFT, 354}, },
			{{-1, ERROR, 348}, {83, SHIFT, 355}, },
			{{-1, REDUCE, 62}, },
			{{-1, REDUCE, 85}, },
			{{-1, REDUCE, 88}, },
			{{-1, ERROR, 352}, {98, SHIFT, 356}, },
			{{-1, ERROR, 353}, {87, SHIFT, 357}, {99, SHIFT, 358}, },
			{{-1, ERROR, 354}, {98, SHIFT, 359}, },
			{{-1, ERROR, 355}, {98, SHIFT, 360}, },
			{{-1, ERROR, 356}, {99, SHIFT, 361}, },
			{{-1, ERROR, 357}, {48, SHIFT, 362}, },
			{{-1, REDUCE, 90}, },
			{{-1, REDUCE, 86}, },
			{{-1, REDUCE, 87}, },
			{{-1, REDUCE, 91}, },
			{{-1, REDUCE, 19}, {41, SHIFT, 50}, {84, SHIFT, 51}, },
			{{-1, ERROR, 363}, {99, SHIFT, 364}, },
			{{-1, REDUCE, 89}, },
        };*/
    private static int[][][] gotoTable;
/*      {
			{{-1, 2}, },
			{{-1, 5}, },
			{{-1, 6}, },
			{{-1, 7}, {6, 14}, },
			{{-1, 9}, {83, 116}, },
			{{-1, 10}, {16, 24}, },
			{{-1, 40}, },
			{{-1, 35}, },
			{{-1, 37}, },
			{{-1, 38}, },
			{{-1, 114}, {41, 52}, {47, 87}, {75, 107}, {76, 108}, {77, 109}, {78, 110}, {79, 111}, {80, 112}, {157, 211}, {244, 289}, {249, 293}, {296, 322}, {301, 325}, {342, 351}, {343, 352}, {362, 363}, },
			{{-1, 12}, },
			{{-1, 13}, {12, 20}, },
			{{-1, 29}, },
			{{-1, 30}, },
			{{-1, 74}, {57, 88}, {58, 89}, {59, 90}, {60, 91}, {95, 135}, {138, 195}, {204, 247}, },
			{{-1, 75}, },
			{{-1, 76}, },
			{{-1, 77}, },
			{{-1, 78}, },
			{{-1, 79}, },
			{{-1, 80}, },
			{{-1, 113}, },
			{{-1, 332}, },
			{{-1, 81}, },
			{{-1, 115}, {171, 225}, },
			{{-1, 157}, },
			{{-1, 212}, },
			{{-1, 82}, {74, 106}, {88, 106}, {89, 106}, {90, 106}, {91, 106}, {135, 106}, {195, 106}, {247, 106}, },
			{{-1, 248}, },
			{{-1, 249}, },
			{{-1, 250}, {248, 292}, },
			{{-1, 335}, },
			{{-1, 172}, {329, 336}, {335, 346}, },
			{{-1, 96}, },
			{{-1, 97}, {96, 137}, },
			{{-1, 99}, },
			{{-1, 100}, {99, 142}, },
			{{-1, 139}, },
			{{-1, 140}, {139, 197}, },
			{{-1, 340}, },
			{{-1, 341}, },
			{{-1, 342}, },
			{{-1, 343}, },
			{{-1, 344}, },
			{{-1, 345}, {341, 350}, },
			{{-1, 21}, },
			{{-1, 22}, {21, 33}, },
			{{-1, 244}, },
			{{-1, 245}, },
			{{-1, 84}, },
			{{-1, 85}, },
			{{-1, 86}, {85, 126}, },
			{{-1, 263}, },
			{{-1, 258}, },
			{{-1, 260}, },
			{{-1, 261}, },
			{{-1, 123}, },
			{{-1, 188}, },
			{{-1, 124}, {189, 242}, },
			{{-1, 125}, {216, 264}, {227, 275}, {239, 286}, {241, 287}, },
			{{-1, 218}, },
			{{-1, 267}, },
			{{-1, 268}, },
			{{-1, 269}, {308, 327}, },
			{{-1, 273}, },
			{{-1, 173}, {121, 185}, {165, 223}, {166, 224}, {186, 240}, {219, 270}, {220, 271}, {305, 326}, },
			{{-1, 174}, {226, 274}, {273, 312}, },
			{{-1, 175}, {228, 276}, },
			{{-1, 176}, {229, 277}, },
			{{-1, 177}, {230, 278}, },
			{{-1, 178}, {231, 279}, },
			{{-1, 179}, {232, 280}, {233, 281}, {234, 282}, },
			{{-1, 180}, {163, 221}, {164, 222}, {235, 283}, {236, 284}, {237, 285}, },
			{{-1, 181}, },
			{{-1, 182}, },
			{{-1, 183}, },
			{{-1, 184}, },
        };*/
    private static String[] errorMessages;
/*      {
			"TService expected.",
			"TOpenBr expected.",
			"EOF expected.",
			"TDocument TGlobal expected.",
			"TIdentifier expected.",
			"TDocument expected.",
			"TSemicolon expected.",
			"TComma TSpecify expected.",
			"TDocument TSession expected.",
			"TBool TText TInt expected.",
			"TLeftBrack1 TOpenBr expected.",
			"TSession TCloseBr expected.",
			"TSemicolon TAssignNormaldoc expected.",
			"TQuote expected.",
			"TTrue TFalse expected.",
			"TNumber expected.",
			"TString TStringSp4 TQuote expected.",
			"TRightBrack1 expected.",
			"TNumber TTrue TFalse TBold TItalic THeader1 THeader2 TPara TBr THr TImg TInclude TA TList TTable TVar TSelect TInput TApplet TString1 expected.",
			"TLocal TStop TTake TShow TIf TWhile TSemicolon TIdentifier TCloseBr expected.",
			"TQuote TClose expected.",
			"TNumber TTrue TFalse TBold TBoldEnd TItalic TItalicEnd THeader1 THeader1End THeader2 THeader2End TPara TBr THr TImg TInclude TA TAEnd TList TListEnd TLi TTdEnd TTable TVar TSelect TInput TApplet TCloseBr TString1 expected.",
			"TSrc expected.",
			"TFile expected.",
			"THref expected.",
			"TLi expected.",
			"TTr expected.",
			"TName expected.",
			"TCodebase expected.",
			"TNumber TTrue TFalse TBold TItalic THeader1 THeader2 TPara TBr THr TImg TInclude TA TList TTable TVar TSelect TInput TApplet TCloseBr TString1 expected.",
			"TStop TTake TShow TIf TWhile TSemicolon TIdentifier TCloseBr expected.",
			"TNumber TTrue TFalse TBold TBoldEnd TItalic THeader1 THeader2 TPara TBr THr TImg TInclude TA TList TTable TVar TSelect TInput TApplet TString1 expected.",
			"TNumber TTrue TFalse TBold TItalic TItalicEnd THeader1 THeader2 TPara TBr THr TImg TInclude TA TList TTable TVar TSelect TInput TApplet TString1 expected.",
			"TNumber TTrue TFalse TBold TItalic THeader1 THeader1End THeader2 TPara TBr THr TImg TInclude TA TList TTable TVar TSelect TInput TApplet TString1 expected.",
			"TNumber TTrue TFalse TBold TItalic THeader1 THeader2 THeader2End TPara TBr THr TImg TInclude TA TList TTable TVar TSelect TInput TApplet TString1 expected.",
			"TAssignNormaldoc expected.",
			"TListEnd TLi expected.",
			"TTd expected.",
			"TTr TTableEnd expected.",
			"TAssignSp2 expected.",
			"TTextConst TRadio expected.",
			"TCode expected.",
			"TSemicolon TCloseBr expected.",
			"TRandom TSystem TNot TMinus TAbs TLeftBrack TIdentifier TNumber TTrue TFalse TQuote expected.",
			"TAssignSes expected.",
			"TElse TSemicolon TCloseBr expected.",
			"TNumber TTrue TFalse TBold TItalic THeader1 THeader2 TPara TBr THr TImg TInclude TA TList TListEnd TLi TTable TVar TSelect TInput TApplet TString1 expected.",
			"TTrEnd TTd expected.",
			"TClose expected.",
			"TType expected.",
			"TSize expected.",
			"TValue expected.",
			"TEqualSes TGt TAnd TOr TAutoInc TInterval TPlus TMinus TMultiply TDivide TModulo TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TNumber TTrue TFalse TOpenBr TValue TSelectEnd TCode TCloseBr TQuote expected.",
			"TSemicolon TLeftParen TCloseBr expected.",
			"TLeftBrack expected.",
			"TEqualSes TGt TAnd TOr TAutoInc TInterval TPlus TMinus TMultiply TDivide TModulo TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TOpenBr TCloseBr expected.",
			"TEqualSes TGt TAnd TOr TAutoInc TInterval TPlus TMinus TMultiply TDivide TModulo TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TNumber TTrue TFalse TOpenBr TValue TSelectEnd TCloseBr TQuote expected.",
			"TLeftBrack TOpenBr expected.",
			"TOr TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TOpenBr TCloseBr expected.",
			"TAnd TOr TInterval TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TOpenBr TCloseBr expected.",
			"TEqualSes TAnd TOr TInterval TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TOpenBr TCloseBr expected.",
			"TEqualSes TGt TAnd TOr TInterval TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TOpenBr TCloseBr expected.",
			"TEqualSes TGt TAnd TOr TAutoInc TInterval TPlus TMinus TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TOpenBr TCloseBr expected.",
			"TAbs expected.",
			"TSession TEnds TCloseBr expected.",
			"TNumber TTrue TFalse TBold TItalic THeader1 THeader2 TPara TBr THr TImg TInclude TA TList TTdEnd TTable TVar TSelect TInput TApplet TString1 expected.",
			"expected.",
			"THeight expected.",
			"TEqualSes TSemicolon expected.",
			"TRightParen TIdentifier expected.",
			"TAbs TLeftBrack expected.",
			"TLeftBrack TRightBrack expected.",
			"TSemicolon TLeftBrack TCloseBr expected.",
			"TWith expected.",
			"TNumber TTrue TFalse TBold TItalic THeader1 THeader2 TPara TBr THr TImg TInclude TA TAEnd TList TTable TVar TSelect TInput TApplet TString1 expected.",
			"TSelectEnd expected.",
			"TValue TSelectEnd expected.",
			"TWidth expected.",
			"TIn TOut expected.",
			"TRightParen TComma expected.",
			"TOr TInterval expected.",
			"TOr TRightBrack expected.",
			"TLeftBrack TRightParen TComma expected.",
			"TAbs TSemicolon TLeftBrack TRightBrack TRightParen TComma TOpenBr TCloseBr expected.",
			"TNumber TTrue TFalse TQuote expected.",
			"TParam TResult TAppletEnd expected.",
			"TNumber TTrue TFalse TValue TSelectEnd TQuote expected.",
			"TAppletEnd expected.",
			"TValue TClose expected.",
			"TString TStringSp4 TClose expected.",
        };*/
    private static int[] errors;
/*      {
			0, 1, 2, 3, 4, 5, 3, 6, 7, 7, 7, 4, 8, 8, 6, 3, 4, 9, 10, 4, 8, 11, 11, 3, 7, 12, 12, 12, 13, 13, 1, 1, 2, 11, 14, 6, 13, 13, 6, 15, 6, 16, 17, 18, 19, 6, 6, 16, 6, 6, 20, 20, 13, 1, 21, 21, 21, 18, 18, 18, 18, 21, 21, 21, 22, 23, 24, 25, 26, 27, 27, 27, 28, 21, 29, 16, 16, 16, 16, 16, 16, 16, 21, 4, 30, 19, 6, 13, 31, 32, 33, 34, 35, 35, 35, 18, 36, 36, 37, 38, 38, 39, 39, 39, 35, 8, 21, 13, 13, 13, 13, 13, 13, 40, 13, 41, 7, 42, 4, 4, 43, 43, 44, 45, 42, 42, 6, 19, 21, 21, 21, 21, 13, 13, 13, 46, 21, 36, 18, 47, 47, 21, 38, 13, 13, 13, 13, 48, 48, 48, 48, 48, 49, 50, 51, 52, 35, 16, 9, 1, 53, 54, 54, 43, 43, 43, 43, 55, 56, 56, 56, 16, 55, 57, 58, 59, 60, 61, 62, 55, 55, 63, 55, 55, 55, 57, 43, 1, 42, 30, 64, 19, 16, 16, 16, 65, 38, 47, 16, 16, 16, 16, 21, 21, 18, 21, 66, 35, 35, 35, 13, 13, 67, 68, 68, 68, 30, 69, 42, 43, 43, 55, 55, 70, 71, 56, 43, 30, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 55, 30, 72, 30, 42, 73, 16, 11, 47, 74, 75, 16, 76, 40, 15, 13, 16, 77, 35, 14, 6, 13, 13, 6, 15, 6, 42, 42, 78, 79, 4, 79, 71, 71, 55, 43, 80, 42, 59, 60, 61, 62, 55, 55, 55, 55, 55, 55, 42, 42, 13, 13, 21, 21, 76, 13, 35, 48, 16, 35, 15, 6, 6, 16, 6, 6, 42, 43, 4, 42, 4, 79, 55, 55, 81, 43, 45, 42, 42, 16, 11, 48, 13, 21, 13, 15, 48, 13, 82, 79, 83, 84, 16, 48, 21, 67, 85, 86, 86, 21, 27, 27, 87, 85, 16, 16, 13, 85, 86, 39, 39, 21, 85, 13, 13, 88, 13, 13, 48, 35, 85, 16, 16, 85, 89, 48, 85, 
        };*/
}
