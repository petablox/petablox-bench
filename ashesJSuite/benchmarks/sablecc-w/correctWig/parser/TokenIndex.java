package wig.parser;

import wig.node.*;
import wig.analysis.*;

class TokenIndex extends AnalysisAdapter
{
    int index;

    public void caseTService(TService node)
    {
        index = 0;
    }

    public void caseTDocument(TDocument node)
    {
        index = 1;
    }

    public void caseTSession(TSession node)
    {
        index = 2;
    }

    public void caseTGlobal(TGlobal node)
    {
        index = 3;
    }

    public void caseTLocal(TLocal node)
    {
        index = 4;
    }

    public void caseTAssignSes(TAssignSes node)
    {
        index = 5;
    }

    public void caseTStop(TStop node)
    {
        index = 6;
    }

    public void caseTTake(TTake node)
    {
        index = 7;
    }

    public void caseTShow(TShow node)
    {
        index = 8;
    }

    public void caseTIn(TIn node)
    {
        index = 9;
    }

    public void caseTOut(TOut node)
    {
        index = 10;
    }

    public void caseTRandom(TRandom node)
    {
        index = 11;
    }

    public void caseTSystem(TSystem node)
    {
        index = 12;
    }

    public void caseTBool(TBool node)
    {
        index = 13;
    }

    public void caseTText(TText node)
    {
        index = 14;
    }

    public void caseTInt(TInt node)
    {
        index = 15;
    }

    public void caseTIf(TIf node)
    {
        index = 16;
    }

    public void caseTElse(TElse node)
    {
        index = 17;
    }

    public void caseTWhile(TWhile node)
    {
        index = 18;
    }

    public void caseTEqualSes(TEqualSes node)
    {
        index = 19;
    }

    public void caseTGt(TGt node)
    {
        index = 20;
    }

    public void caseTAnd(TAnd node)
    {
        index = 21;
    }

    public void caseTNot(TNot node)
    {
        index = 22;
    }

    public void caseTOr(TOr node)
    {
        index = 23;
    }

    public void caseTAutoInc(TAutoInc node)
    {
        index = 24;
    }

    public void caseTInterval(TInterval node)
    {
        index = 25;
    }

    public void caseTPlus(TPlus node)
    {
        index = 26;
    }

    public void caseTMinus(TMinus node)
    {
        index = 27;
    }

    public void caseTMultiply(TMultiply node)
    {
        index = 28;
    }

    public void caseTDivide(TDivide node)
    {
        index = 29;
    }

    public void caseTModulo(TModulo node)
    {
        index = 30;
    }

    public void caseTAbs(TAbs node)
    {
        index = 31;
    }

    public void caseTSemicolon(TSemicolon node)
    {
        index = 32;
    }

    public void caseTLeftBrack(TLeftBrack node)
    {
        index = 33;
    }

    public void caseTRightBrack(TRightBrack node)
    {
        index = 34;
    }

    public void caseTLeftParen(TLeftParen node)
    {
        index = 35;
    }

    public void caseTRightParen(TRightParen node)
    {
        index = 36;
    }

    public void caseTEnds(TEnds node)
    {
        index = 37;
    }

    public void caseTWith(TWith node)
    {
        index = 38;
    }

    public void caseTLeftBrack1(TLeftBrack1 node)
    {
        index = 39;
    }

    public void caseTRightBrack1(TRightBrack1 node)
    {
        index = 40;
    }

    public void caseTString(TString node)
    {
        index = 41;
    }

    public void caseTComma(TComma node)
    {
        index = 42;
    }

    public void caseTIdentifier(TIdentifier node)
    {
        index = 43;
    }

    public void caseTNumber(TNumber node)
    {
        index = 44;
    }

    public void caseTTrue(TTrue node)
    {
        index = 45;
    }

    public void caseTFalse(TFalse node)
    {
        index = 46;
    }

    public void caseTSpecify(TSpecify node)
    {
        index = 47;
    }

    public void caseTAssignNormaldoc(TAssignNormaldoc node)
    {
        index = 48;
    }

    public void caseTBold(TBold node)
    {
        index = 49;
    }

    public void caseTBoldEnd(TBoldEnd node)
    {
        index = 50;
    }

    public void caseTItalic(TItalic node)
    {
        index = 51;
    }

    public void caseTItalicEnd(TItalicEnd node)
    {
        index = 52;
    }

    public void caseTHeader1(THeader1 node)
    {
        index = 53;
    }

    public void caseTHeader1End(THeader1End node)
    {
        index = 54;
    }

    public void caseTHeader2(THeader2 node)
    {
        index = 55;
    }

    public void caseTHeader2End(THeader2End node)
    {
        index = 56;
    }

    public void caseTPara(TPara node)
    {
        index = 57;
    }

    public void caseTBr(TBr node)
    {
        index = 58;
    }

    public void caseTHr(THr node)
    {
        index = 59;
    }

    public void caseTImg(TImg node)
    {
        index = 60;
    }

    public void caseTSrc(TSrc node)
    {
        index = 61;
    }

    public void caseTInclude(TInclude node)
    {
        index = 62;
    }

    public void caseTFile(TFile node)
    {
        index = 63;
    }

    public void caseTA(TA node)
    {
        index = 64;
    }

    public void caseTAEnd(TAEnd node)
    {
        index = 65;
    }

    public void caseTOpenBr(TOpenBr node)
    {
        index = 66;
    }

    public void caseTHref(THref node)
    {
        index = 67;
    }

    public void caseTList(TList node)
    {
        index = 68;
    }

    public void caseTListEnd(TListEnd node)
    {
        index = 69;
    }

    public void caseTLi(TLi node)
    {
        index = 70;
    }

    public void caseTTr(TTr node)
    {
        index = 71;
    }

    public void caseTTrEnd(TTrEnd node)
    {
        index = 72;
    }

    public void caseTTd(TTd node)
    {
        index = 73;
    }

    public void caseTTdEnd(TTdEnd node)
    {
        index = 74;
    }

    public void caseTTable(TTable node)
    {
        index = 75;
    }

    public void caseTTableEnd(TTableEnd node)
    {
        index = 76;
    }

    public void caseTVar(TVar node)
    {
        index = 77;
    }

    public void caseTSelect(TSelect node)
    {
        index = 78;
    }

    public void caseTInput(TInput node)
    {
        index = 79;
    }

    public void caseTParam(TParam node)
    {
        index = 80;
    }

    public void caseTResult(TResult node)
    {
        index = 81;
    }

    public void caseTName(TName node)
    {
        index = 82;
    }

    public void caseTAssignSp2(TAssignSp2 node)
    {
        index = 83;
    }

    public void caseTStringSp4(TStringSp4 node)
    {
        index = 84;
    }

    public void caseTType(TType node)
    {
        index = 85;
    }

    public void caseTSize(TSize node)
    {
        index = 86;
    }

    public void caseTValue(TValue node)
    {
        index = 87;
    }

    public void caseTTextConst(TTextConst node)
    {
        index = 88;
    }

    public void caseTRadio(TRadio node)
    {
        index = 89;
    }

    public void caseTApplet(TApplet node)
    {
        index = 90;
    }

    public void caseTAppletEnd(TAppletEnd node)
    {
        index = 91;
    }

    public void caseTSelectEnd(TSelectEnd node)
    {
        index = 92;
    }

    public void caseTCodebase(TCodebase node)
    {
        index = 93;
    }

    public void caseTCode(TCode node)
    {
        index = 94;
    }

    public void caseTWidth(TWidth node)
    {
        index = 95;
    }

    public void caseTHeight(THeight node)
    {
        index = 96;
    }

    public void caseTCloseBr(TCloseBr node)
    {
        index = 97;
    }

    public void caseTQuote(TQuote node)
    {
        index = 98;
    }

    public void caseTClose(TClose node)
    {
        index = 99;
    }

    public void caseTString1(TString1 node)
    {
        index = 100;
    }

    public void caseEOF(EOF node)
    {
        index = 101;
    }
}
