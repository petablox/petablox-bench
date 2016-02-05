package wig.analysis;

import ca.mcgill.sable.util.*;
import java.util.*;
import wig.node.*;

public class AnalysisAdapter implements Analysis
{
    private Hashtable in;
    private Hashtable out;

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
            this.in = new Hashtable(1);
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
            this.out = new Hashtable(1);
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
    public void caseStart(Start node)
    {
        defaultCase(node);
    }

    public void caseAService1Servicep(AService1Servicep node)
    {
        defaultCase(node);
    }

    public void caseAEmptyGlobalsp(AEmptyGlobalsp node)
    {
        defaultCase(node);
    }

    public void caseAGlobals1Globalsp(AGlobals1Globalsp node)
    {
        defaultCase(node);
    }

    public void caseANeglobals1Neglobalsp(ANeglobals1Neglobalsp node)
    {
        defaultCase(node);
    }

    public void caseANeglobals2Neglobalsp(ANeglobals2Neglobalsp node)
    {
        defaultCase(node);
    }

    public void caseAGlobal1Globalp(AGlobal1Globalp node)
    {
        defaultCase(node);
    }

    public void caseAGlobal2Globalp(AGlobal2Globalp node)
    {
        defaultCase(node);
    }

    public void caseAGlobal3Globalp(AGlobal3Globalp node)
    {
        defaultCase(node);
    }

    public void caseANenames1Nenamesp(ANenames1Nenamesp node)
    {
        defaultCase(node);
    }

    public void caseANenames2Nenamesp(ANenames2Nenamesp node)
    {
        defaultCase(node);
    }

    public void caseAName1Namep(AName1Namep node)
    {
        defaultCase(node);
    }

    public void caseAEmptyIntinitp(AEmptyIntinitp node)
    {
        defaultCase(node);
    }

    public void caseAIntinit1Intinitp(AIntinit1Intinitp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyBoolinitp(AEmptyBoolinitp node)
    {
        defaultCase(node);
    }

    public void caseABoolinit1Boolinitp(ABoolinit1Boolinitp node)
    {
        defaultCase(node);
    }

    public void caseABoolinit2Boolinitp(ABoolinit2Boolinitp node)
    {
        defaultCase(node);
    }

    public void caseATextinit11Textinit1p(ATextinit11Textinit1p node)
    {
        defaultCase(node);
    }

    public void caseAEmptyTextinitp(AEmptyTextinitp node)
    {
        defaultCase(node);
    }

    public void caseATextinit1Textinitp(ATextinit1Textinitp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyStringp(AEmptyStringp node)
    {
        defaultCase(node);
    }

    public void caseAStringp1Stringp(AStringp1Stringp node)
    {
        defaultCase(node);
    }

    public void caseAStringp2Stringp(AStringp2Stringp node)
    {
        defaultCase(node);
    }

    public void caseADocuments1Documentsp(ADocuments1Documentsp node)
    {
        defaultCase(node);
    }

    public void caseADocuments2Documentsp(ADocuments2Documentsp node)
    {
        defaultCase(node);
    }

    public void caseADocument1Documentp(ADocument1Documentp node)
    {
        defaultCase(node);
    }

    public void caseATitle11Title1p(ATitle11Title1p node)
    {
        defaultCase(node);
    }

    public void caseAEmptyTitlep(AEmptyTitlep node)
    {
        defaultCase(node);
    }

    public void caseATitle1Titlep(ATitle1Titlep node)
    {
        defaultCase(node);
    }

    public void caseAHtml1Htmlp(AHtml1Htmlp node)
    {
        defaultCase(node);
    }

    public void caseAHtml2Htmlp(AHtml2Htmlp node)
    {
        defaultCase(node);
    }

    public void caseAEntity91pEntity9p(AEntity91pEntity9p node)
    {
        defaultCase(node);
    }

    public void caseAEntity101pEntity10p(AEntity101pEntity10p node)
    {
        defaultCase(node);
    }

    public void caseAEntity111pEntity11p(AEntity111pEntity11p node)
    {
        defaultCase(node);
    }

    public void caseAEntity141pEntity14p(AEntity141pEntity14p node)
    {
        defaultCase(node);
    }

    public void caseAEntity151pEntity15p(AEntity151pEntity15p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1611pEntity161p(AEntity1611pEntity161p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1621pEntity162p(AEntity1621pEntity162p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1711pEntity171p(AEntity1711pEntity171p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1811pEntity181p(AEntity1811pEntity181p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1821pEntity182p(AEntity1821pEntity182p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1831pEntity183p(AEntity1831pEntity183p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1841pEntity184p(AEntity1841pEntity184p node)
    {
        defaultCase(node);
    }

    public void caseAEntity1sEntityp(AEntity1sEntityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity1nEntityp(AEntity1nEntityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity1tEntityp(AEntity1tEntityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity1fEntityp(AEntity1fEntityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity2Entityp(AEntity2Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity3Entityp(AEntity3Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity4Entityp(AEntity4Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity5Entityp(AEntity5Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity6Entityp(AEntity6Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity7Entityp(AEntity7Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity8Entityp(AEntity8Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity9Entityp(AEntity9Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity10Entityp(AEntity10Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity11Entityp(AEntity11Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity12Entityp(AEntity12Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity13Entityp(AEntity13Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity14Entityp(AEntity14Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity15Entityp(AEntity15Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity16Entityp(AEntity16Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity17Entityp(AEntity17Entityp node)
    {
        defaultCase(node);
    }

    public void caseAEntity18Entityp(AEntity18Entityp node)
    {
        defaultCase(node);
    }

    public void caseAOptions1Optionsp(AOptions1Optionsp node)
    {
        defaultCase(node);
    }

    public void caseAOptions2Optionsp(AOptions2Optionsp node)
    {
        defaultCase(node);
    }

    public void caseAOption11Option1p(AOption11Option1p node)
    {
        defaultCase(node);
    }

    public void caseAOption1Optionp(AOption1Optionp node)
    {
        defaultCase(node);
    }

    public void caseALiterals1Literalsp(ALiterals1Literalsp node)
    {
        defaultCase(node);
    }

    public void caseALiterals2Literalsp(ALiterals2Literalsp node)
    {
        defaultCase(node);
    }

    public void caseALiteral1Literalp(ALiteral1Literalp node)
    {
        defaultCase(node);
    }

    public void caseALiteral2Literalp(ALiteral2Literalp node)
    {
        defaultCase(node);
    }

    public void caseALiteral3Literalp(ALiteral3Literalp node)
    {
        defaultCase(node);
    }

    public void caseALiteral4Literalp(ALiteral4Literalp node)
    {
        defaultCase(node);
    }

    public void caseAItems1Itemsp(AItems1Itemsp node)
    {
        defaultCase(node);
    }

    public void caseAItems2Itemsp(AItems2Itemsp node)
    {
        defaultCase(node);
    }

    public void caseAItem1Itemp(AItem1Itemp node)
    {
        defaultCase(node);
    }

    public void caseARows1Rowsp(ARows1Rowsp node)
    {
        defaultCase(node);
    }

    public void caseARows2Rowsp(ARows2Rowsp node)
    {
        defaultCase(node);
    }

    public void caseARow1Rowp(ARow1Rowp node)
    {
        defaultCase(node);
    }

    public void caseAEntries1Entriesp(AEntries1Entriesp node)
    {
        defaultCase(node);
    }

    public void caseAEntries2Entriesp(AEntries2Entriesp node)
    {
        defaultCase(node);
    }

    public void caseAEntry1Entryp(AEntry1Entryp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyArgumentsp(AEmptyArgumentsp node)
    {
        defaultCase(node);
    }

    public void caseAArguments1Argumentsp(AArguments1Argumentsp node)
    {
        defaultCase(node);
    }

    public void caseANearguments1Neargumentsp(ANearguments1Neargumentsp node)
    {
        defaultCase(node);
    }

    public void caseANearguments2Neargumentsp(ANearguments2Neargumentsp node)
    {
        defaultCase(node);
    }

    public void caseAArgument11Argument1p(AArgument11Argument1p node)
    {
        defaultCase(node);
    }

    public void caseAArgument31Argument3p(AArgument31Argument3p node)
    {
        defaultCase(node);
    }

    public void caseAArgdum1Argdump(AArgdum1Argdump node)
    {
        defaultCase(node);
    }

    public void caseAArgument1Argumentp(AArgument1Argumentp node)
    {
        defaultCase(node);
    }

    public void caseAArgument2Argumentp(AArgument2Argumentp node)
    {
        defaultCase(node);
    }

    public void caseAArgument3Argumentp(AArgument3Argumentp node)
    {
        defaultCase(node);
    }

    public void caseASessions1Sessionsp(ASessions1Sessionsp node)
    {
        defaultCase(node);
    }

    public void caseASessions2Sessionsp(ASessions2Sessionsp node)
    {
        defaultCase(node);
    }

    public void caseASession1Sessionp(ASession1Sessionp node)
    {
        defaultCase(node);
    }

    public void caseATermination11Termination1p(ATermination11Termination1p node)
    {
        defaultCase(node);
    }

    public void caseAEmptyTerminationp(AEmptyTerminationp node)
    {
        defaultCase(node);
    }

    public void caseATermination1Terminationp(ATermination1Terminationp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyLocalsp(AEmptyLocalsp node)
    {
        defaultCase(node);
    }

    public void caseALocals1Localsp(ALocals1Localsp node)
    {
        defaultCase(node);
    }

    public void caseANelocals1Nelocalsp(ANelocals1Nelocalsp node)
    {
        defaultCase(node);
    }

    public void caseANelocals2Nelocalsp(ANelocals2Nelocalsp node)
    {
        defaultCase(node);
    }

    public void caseALocal1Localp(ALocal1Localp node)
    {
        defaultCase(node);
    }

    public void caseALocal2Localp(ALocal2Localp node)
    {
        defaultCase(node);
    }

    public void caseALocal3Localp(ALocal3Localp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyIntinitsp(AEmptyIntinitsp node)
    {
        defaultCase(node);
    }

    public void caseAIntinits1Intinitsp(AIntinits1Intinitsp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyBoolinitsp(AEmptyBoolinitsp node)
    {
        defaultCase(node);
    }

    public void caseABoolinits1Boolinitsp(ABoolinits1Boolinitsp node)
    {
        defaultCase(node);
    }

    public void caseABoolinits2Boolinitsp(ABoolinits2Boolinitsp node)
    {
        defaultCase(node);
    }

    public void caseATextinits11Textinit1sp(ATextinits11Textinit1sp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyTextinitsp(AEmptyTextinitsp node)
    {
        defaultCase(node);
    }

    public void caseATextinits1Textinitsp(ATextinits1Textinitsp node)
    {
        defaultCase(node);
    }

    public void caseAStatement711Statement71p(AStatement711Statement71p node)
    {
        defaultCase(node);
    }

    public void caseAEmptyStatement72p(AEmptyStatement72p node)
    {
        defaultCase(node);
    }

    public void caseAStatement721Statement72p(AStatement721Statement72p node)
    {
        defaultCase(node);
    }

    public void caseAEmptyStatementp(AEmptyStatementp node)
    {
        defaultCase(node);
    }

    public void caseAStatement1Statementp(AStatement1Statementp node)
    {
        defaultCase(node);
    }

    public void caseAStatement2Statementp(AStatement2Statementp node)
    {
        defaultCase(node);
    }

    public void caseAStatement3Statementp(AStatement3Statementp node)
    {
        defaultCase(node);
    }

    public void caseAStatement5Statementp(AStatement5Statementp node)
    {
        defaultCase(node);
    }

    public void caseAStatement7Statementp(AStatement7Statementp node)
    {
        defaultCase(node);
    }

    public void caseAStatement8Statementp(AStatement8Statementp node)
    {
        defaultCase(node);
    }

    public void caseAStatementseq1Statementseqp(AStatementseq1Statementseqp node)
    {
        defaultCase(node);
    }

    public void caseAStatementseq2Statementseqp(AStatementseq2Statementseqp node)
    {
        defaultCase(node);
    }

    public void caseAEmptyParametersp(AEmptyParametersp node)
    {
        defaultCase(node);
    }

    public void caseAParameters1Parametersp(AParameters1Parametersp node)
    {
        defaultCase(node);
    }

    public void caseAParameters2Parametersp(AParameters2Parametersp node)
    {
        defaultCase(node);
    }

    public void caseANeparlist1Neparlistp(ANeparlist1Neparlistp node)
    {
        defaultCase(node);
    }

    public void caseANeparlist2Neparlistp(ANeparlist2Neparlistp node)
    {
        defaultCase(node);
    }

    public void caseAParameter21Parameter2p(AParameter21Parameter2p node)
    {
        defaultCase(node);
    }

    public void caseAParameter1Parameterp(AParameter1Parameterp node)
    {
        defaultCase(node);
    }

    public void caseAParameter2Parameterp(AParameter2Parameterp node)
    {
        defaultCase(node);
    }

    public void caseAExppIntExppInt(AExppIntExppInt node)
    {
        defaultCase(node);
    }

    public void caseAExp1Expp(AExp1Expp node)
    {
        defaultCase(node);
    }

    public void caseAExp2Expp(AExp2Expp node)
    {
        defaultCase(node);
    }

    public void caseAOrexp1Orexpp(AOrexp1Orexpp node)
    {
        defaultCase(node);
    }

    public void caseAOrexp2Orexpp(AOrexp2Orexpp node)
    {
        defaultCase(node);
    }

    public void caseAAndexp1Andexpp(AAndexp1Andexpp node)
    {
        defaultCase(node);
    }

    public void caseAAndexp2Andexpp(AAndexp2Andexpp node)
    {
        defaultCase(node);
    }

    public void caseAEqexp1Eqexpp(AEqexp1Eqexpp node)
    {
        defaultCase(node);
    }

    public void caseAEqexp2Eqexpp(AEqexp2Eqexpp node)
    {
        defaultCase(node);
    }

    public void caseARelexp1Relexpp(ARelexp1Relexpp node)
    {
        defaultCase(node);
    }

    public void caseARelexp2Relexpp(ARelexp2Relexpp node)
    {
        defaultCase(node);
    }

    public void caseAAddexp1Addexpp(AAddexp1Addexpp node)
    {
        defaultCase(node);
    }

    public void caseAAddexp2Addexpp(AAddexp2Addexpp node)
    {
        defaultCase(node);
    }

    public void caseAAddexp3Addexpp(AAddexp3Addexpp node)
    {
        defaultCase(node);
    }

    public void caseAAddexp4Addexpp(AAddexp4Addexpp node)
    {
        defaultCase(node);
    }

    public void caseAMultexp1Multexpp(AMultexp1Multexpp node)
    {
        defaultCase(node);
    }

    public void caseAMultexp2Multexpp(AMultexp2Multexpp node)
    {
        defaultCase(node);
    }

    public void caseAMultexp3Multexpp(AMultexp3Multexpp node)
    {
        defaultCase(node);
    }

    public void caseAMultexp4Multexpp(AMultexp4Multexpp node)
    {
        defaultCase(node);
    }

    public void caseAUnaryexp1Unaryexpp(AUnaryexp1Unaryexpp node)
    {
        defaultCase(node);
    }

    public void caseAUnaryexp2Unaryexpp(AUnaryexp2Unaryexpp node)
    {
        defaultCase(node);
    }

    public void caseAAbsExp1AbsExpp(AAbsExp1AbsExpp node)
    {
        defaultCase(node);
    }

    public void caseAUnaryexpnm1Unaryexpnmp(AUnaryexpnm1Unaryexpnmp node)
    {
        defaultCase(node);
    }

    public void caseAUnaryexpnm2Unaryexpnmp(AUnaryexpnm2Unaryexpnmp node)
    {
        defaultCase(node);
    }

    public void caseAUnaryexpnm3Unaryexpnmp(AUnaryexpnm3Unaryexpnmp node)
    {
        defaultCase(node);
    }

    public void caseAUnaryexpnm4Unaryexpnmp(AUnaryexpnm4Unaryexpnmp node)
    {
        defaultCase(node);
    }

    public void caseAUnaryexpnm5Unaryexpnmp(AUnaryexpnm5Unaryexpnmp node)
    {
        defaultCase(node);
    }

    public void caseAPostfixexp1Postfixexpp(APostfixexp1Postfixexpp node)
    {
        defaultCase(node);
    }

    public void caseAPostfixexp2Postfixexpp(APostfixexp2Postfixexpp node)
    {
        defaultCase(node);
    }

    public void caseAPrimexp1Primexpp(APrimexp1Primexpp node)
    {
        defaultCase(node);
    }

    public void caseAPrimexp2Primexpp(APrimexp2Primexpp node)
    {
        defaultCase(node);
    }

    public void caseTService(TService node)
    {
        defaultCase(node);
    }

    public void caseTDocument(TDocument node)
    {
        defaultCase(node);
    }

    public void caseTSession(TSession node)
    {
        defaultCase(node);
    }

    public void caseTGlobal(TGlobal node)
    {
        defaultCase(node);
    }

    public void caseTLocal(TLocal node)
    {
        defaultCase(node);
    }

    public void caseTAssignSes(TAssignSes node)
    {
        defaultCase(node);
    }

    public void caseTStop(TStop node)
    {
        defaultCase(node);
    }

    public void caseTTake(TTake node)
    {
        defaultCase(node);
    }

    public void caseTShow(TShow node)
    {
        defaultCase(node);
    }

    public void caseTIn(TIn node)
    {
        defaultCase(node);
    }

    public void caseTOut(TOut node)
    {
        defaultCase(node);
    }

    public void caseTRandom(TRandom node)
    {
        defaultCase(node);
    }

    public void caseTSystem(TSystem node)
    {
        defaultCase(node);
    }

    public void caseTBool(TBool node)
    {
        defaultCase(node);
    }

    public void caseTText(TText node)
    {
        defaultCase(node);
    }

    public void caseTInt(TInt node)
    {
        defaultCase(node);
    }

    public void caseTIf(TIf node)
    {
        defaultCase(node);
    }

    public void caseTElse(TElse node)
    {
        defaultCase(node);
    }

    public void caseTWhile(TWhile node)
    {
        defaultCase(node);
    }

    public void caseTEqualSes(TEqualSes node)
    {
        defaultCase(node);
    }

    public void caseTGt(TGt node)
    {
        defaultCase(node);
    }

    public void caseTAnd(TAnd node)
    {
        defaultCase(node);
    }

    public void caseTNot(TNot node)
    {
        defaultCase(node);
    }

    public void caseTOr(TOr node)
    {
        defaultCase(node);
    }

    public void caseTAutoInc(TAutoInc node)
    {
        defaultCase(node);
    }

    public void caseTInterval(TInterval node)
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

    public void caseTMultiply(TMultiply node)
    {
        defaultCase(node);
    }

    public void caseTDivide(TDivide node)
    {
        defaultCase(node);
    }

    public void caseTModulo(TModulo node)
    {
        defaultCase(node);
    }

    public void caseTAbs(TAbs node)
    {
        defaultCase(node);
    }

    public void caseTSemicolon(TSemicolon node)
    {
        defaultCase(node);
    }

    public void caseTLeftBrack(TLeftBrack node)
    {
        defaultCase(node);
    }

    public void caseTRightBrack(TRightBrack node)
    {
        defaultCase(node);
    }

    public void caseTLeftParen(TLeftParen node)
    {
        defaultCase(node);
    }

    public void caseTRightParen(TRightParen node)
    {
        defaultCase(node);
    }

    public void caseTEnds(TEnds node)
    {
        defaultCase(node);
    }

    public void caseTWith(TWith node)
    {
        defaultCase(node);
    }

    public void caseTLeftBrack1(TLeftBrack1 node)
    {
        defaultCase(node);
    }

    public void caseTRightBrack1(TRightBrack1 node)
    {
        defaultCase(node);
    }

    public void caseTString(TString node)
    {
        defaultCase(node);
    }

    public void caseTComma(TComma node)
    {
        defaultCase(node);
    }

    public void caseTIdentifier(TIdentifier node)
    {
        defaultCase(node);
    }

    public void caseTNumber(TNumber node)
    {
        defaultCase(node);
    }

    public void caseTTrue(TTrue node)
    {
        defaultCase(node);
    }

    public void caseTFalse(TFalse node)
    {
        defaultCase(node);
    }

    public void caseTSpecify(TSpecify node)
    {
        defaultCase(node);
    }

    public void caseTAssignNormaldoc(TAssignNormaldoc node)
    {
        defaultCase(node);
    }

    public void caseTBold(TBold node)
    {
        defaultCase(node);
    }

    public void caseTBoldEnd(TBoldEnd node)
    {
        defaultCase(node);
    }

    public void caseTItalic(TItalic node)
    {
        defaultCase(node);
    }

    public void caseTItalicEnd(TItalicEnd node)
    {
        defaultCase(node);
    }

    public void caseTHeader1(THeader1 node)
    {
        defaultCase(node);
    }

    public void caseTHeader1End(THeader1End node)
    {
        defaultCase(node);
    }

    public void caseTHeader2(THeader2 node)
    {
        defaultCase(node);
    }

    public void caseTHeader2End(THeader2End node)
    {
        defaultCase(node);
    }

    public void caseTPara(TPara node)
    {
        defaultCase(node);
    }

    public void caseTBr(TBr node)
    {
        defaultCase(node);
    }

    public void caseTHr(THr node)
    {
        defaultCase(node);
    }

    public void caseTImg(TImg node)
    {
        defaultCase(node);
    }

    public void caseTSrc(TSrc node)
    {
        defaultCase(node);
    }

    public void caseTInclude(TInclude node)
    {
        defaultCase(node);
    }

    public void caseTFile(TFile node)
    {
        defaultCase(node);
    }

    public void caseTA(TA node)
    {
        defaultCase(node);
    }

    public void caseTAEnd(TAEnd node)
    {
        defaultCase(node);
    }

    public void caseTOpenBr(TOpenBr node)
    {
        defaultCase(node);
    }

    public void caseTHref(THref node)
    {
        defaultCase(node);
    }

    public void caseTList(TList node)
    {
        defaultCase(node);
    }

    public void caseTListEnd(TListEnd node)
    {
        defaultCase(node);
    }

    public void caseTLi(TLi node)
    {
        defaultCase(node);
    }

    public void caseTTr(TTr node)
    {
        defaultCase(node);
    }

    public void caseTTrEnd(TTrEnd node)
    {
        defaultCase(node);
    }

    public void caseTTd(TTd node)
    {
        defaultCase(node);
    }

    public void caseTTdEnd(TTdEnd node)
    {
        defaultCase(node);
    }

    public void caseTTable(TTable node)
    {
        defaultCase(node);
    }

    public void caseTTableEnd(TTableEnd node)
    {
        defaultCase(node);
    }

    public void caseTVar(TVar node)
    {
        defaultCase(node);
    }

    public void caseTSelect(TSelect node)
    {
        defaultCase(node);
    }

    public void caseTInput(TInput node)
    {
        defaultCase(node);
    }

    public void caseTParam(TParam node)
    {
        defaultCase(node);
    }

    public void caseTResult(TResult node)
    {
        defaultCase(node);
    }

    public void caseTName(TName node)
    {
        defaultCase(node);
    }

    public void caseTAssignSp2(TAssignSp2 node)
    {
        defaultCase(node);
    }

    public void caseTStringSp4(TStringSp4 node)
    {
        defaultCase(node);
    }

    public void caseTType(TType node)
    {
        defaultCase(node);
    }

    public void caseTSize(TSize node)
    {
        defaultCase(node);
    }

    public void caseTValue(TValue node)
    {
        defaultCase(node);
    }

    public void caseTTextConst(TTextConst node)
    {
        defaultCase(node);
    }

    public void caseTRadio(TRadio node)
    {
        defaultCase(node);
    }

    public void caseTApplet(TApplet node)
    {
        defaultCase(node);
    }

    public void caseTAppletEnd(TAppletEnd node)
    {
        defaultCase(node);
    }

    public void caseTSelectEnd(TSelectEnd node)
    {
        defaultCase(node);
    }

    public void caseTCodebase(TCodebase node)
    {
        defaultCase(node);
    }

    public void caseTCode(TCode node)
    {
        defaultCase(node);
    }

    public void caseTWidth(TWidth node)
    {
        defaultCase(node);
    }

    public void caseTHeight(THeight node)
    {
        defaultCase(node);
    }

    public void caseTCloseBr(TCloseBr node)
    {
        defaultCase(node);
    }

    public void caseTQuote(TQuote node)
    {
        defaultCase(node);
    }

    public void caseTClose(TClose node)
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

    public void caseTString1(TString1 node)
    {
        defaultCase(node);
    }

    public void caseEOF(EOF node)
    {
        defaultCase(node);
    }

    public void defaultCase(Node node)
    {
    }
}
