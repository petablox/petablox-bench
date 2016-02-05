package wig.analysis;

import ca.mcgill.sable.util.*;
import wig.node.*;

public class DepthFirstAdapter extends AnalysisAdapter
{
    public void inStart(Start node)
    {
        defaultIn(node);
    }

    public void outStart(Start node)
    {
        defaultOut(node);
    }

    public void defaultIn(Node node)
    {
    }

    public void defaultOut(Node node)
    {
    }

    public void caseStart(Start node)
    {
        inStart(node);
        node.getPServicep().apply(this);
        node.getEOF().apply(this);
        outStart(node);
    }

    public void inAService1Servicep(AService1Servicep node)
    {
        defaultIn(node);
    }

    public void outAService1Servicep(AService1Servicep node)
    {
        defaultOut(node);
    }

    public void caseAService1Servicep(AService1Servicep node)
    {
        inAService1Servicep(node);
        if(node.getService() != null)
        {
            node.getService().apply(this);
        }
        if(node.getOpenBr() != null)
        {
            node.getOpenBr().apply(this);
        }
        if(node.getGlobalsp() != null)
        {
            node.getGlobalsp().apply(this);
        }
        if(node.getDocumentsp() != null)
        {
            node.getDocumentsp().apply(this);
        }
        if(node.getSessionsp() != null)
        {
            node.getSessionsp().apply(this);
        }
        if(node.getCloseBr() != null)
        {
            node.getCloseBr().apply(this);
        }
        outAService1Servicep(node);
    }

    public void inAEmptyGlobalsp(AEmptyGlobalsp node)
    {
        defaultIn(node);
    }

    public void outAEmptyGlobalsp(AEmptyGlobalsp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyGlobalsp(AEmptyGlobalsp node)
    {
        inAEmptyGlobalsp(node);
        outAEmptyGlobalsp(node);
    }

    public void inAGlobals1Globalsp(AGlobals1Globalsp node)
    {
        defaultIn(node);
    }

    public void outAGlobals1Globalsp(AGlobals1Globalsp node)
    {
        defaultOut(node);
    }

    public void caseAGlobals1Globalsp(AGlobals1Globalsp node)
    {
        inAGlobals1Globalsp(node);
        if(node.getNeglobalsp() != null)
        {
            node.getNeglobalsp().apply(this);
        }
        outAGlobals1Globalsp(node);
    }

    public void inANeglobals1Neglobalsp(ANeglobals1Neglobalsp node)
    {
        defaultIn(node);
    }

    public void outANeglobals1Neglobalsp(ANeglobals1Neglobalsp node)
    {
        defaultOut(node);
    }

    public void caseANeglobals1Neglobalsp(ANeglobals1Neglobalsp node)
    {
        inANeglobals1Neglobalsp(node);
        if(node.getGlobalp() != null)
        {
            node.getGlobalp().apply(this);
        }
        if(node.getSemicolon() != null)
        {
            node.getSemicolon().apply(this);
        }
        outANeglobals1Neglobalsp(node);
    }

    public void inANeglobals2Neglobalsp(ANeglobals2Neglobalsp node)
    {
        defaultIn(node);
    }

    public void outANeglobals2Neglobalsp(ANeglobals2Neglobalsp node)
    {
        defaultOut(node);
    }

    public void caseANeglobals2Neglobalsp(ANeglobals2Neglobalsp node)
    {
        inANeglobals2Neglobalsp(node);
        if(node.getNeglobalsp() != null)
        {
            node.getNeglobalsp().apply(this);
        }
        if(node.getGlobalp() != null)
        {
            node.getGlobalp().apply(this);
        }
        if(node.getSemicolon() != null)
        {
            node.getSemicolon().apply(this);
        }
        outANeglobals2Neglobalsp(node);
    }

    public void inAGlobal1Globalp(AGlobal1Globalp node)
    {
        defaultIn(node);
    }

    public void outAGlobal1Globalp(AGlobal1Globalp node)
    {
        defaultOut(node);
    }

    public void caseAGlobal1Globalp(AGlobal1Globalp node)
    {
        inAGlobal1Globalp(node);
        if(node.getGlobal() != null)
        {
            node.getGlobal().apply(this);
        }
        if(node.getNenamesp() != null)
        {
            node.getNenamesp().apply(this);
        }
        if(node.getSpecify() != null)
        {
            node.getSpecify().apply(this);
        }
        if(node.getInt() != null)
        {
            node.getInt().apply(this);
        }
        if(node.getIntinitp() != null)
        {
            node.getIntinitp().apply(this);
        }
        outAGlobal1Globalp(node);
    }

    public void inAGlobal2Globalp(AGlobal2Globalp node)
    {
        defaultIn(node);
    }

    public void outAGlobal2Globalp(AGlobal2Globalp node)
    {
        defaultOut(node);
    }

    public void caseAGlobal2Globalp(AGlobal2Globalp node)
    {
        inAGlobal2Globalp(node);
        if(node.getGlobal() != null)
        {
            node.getGlobal().apply(this);
        }
        if(node.getNenamesp() != null)
        {
            node.getNenamesp().apply(this);
        }
        if(node.getSpecify() != null)
        {
            node.getSpecify().apply(this);
        }
        if(node.getBool() != null)
        {
            node.getBool().apply(this);
        }
        if(node.getBoolinitp() != null)
        {
            node.getBoolinitp().apply(this);
        }
        outAGlobal2Globalp(node);
    }

    public void inAGlobal3Globalp(AGlobal3Globalp node)
    {
        defaultIn(node);
    }

    public void outAGlobal3Globalp(AGlobal3Globalp node)
    {
        defaultOut(node);
    }

    public void caseAGlobal3Globalp(AGlobal3Globalp node)
    {
        inAGlobal3Globalp(node);
        if(node.getGlobal() != null)
        {
            node.getGlobal().apply(this);
        }
        if(node.getNenamesp() != null)
        {
            node.getNenamesp().apply(this);
        }
        if(node.getSpecify() != null)
        {
            node.getSpecify().apply(this);
        }
        if(node.getText() != null)
        {
            node.getText().apply(this);
        }
        if(node.getTextinitp() != null)
        {
            node.getTextinitp().apply(this);
        }
        outAGlobal3Globalp(node);
    }

    public void inANenames1Nenamesp(ANenames1Nenamesp node)
    {
        defaultIn(node);
    }

    public void outANenames1Nenamesp(ANenames1Nenamesp node)
    {
        defaultOut(node);
    }

    public void caseANenames1Nenamesp(ANenames1Nenamesp node)
    {
        inANenames1Nenamesp(node);
        if(node.getNamep() != null)
        {
            node.getNamep().apply(this);
        }
        outANenames1Nenamesp(node);
    }

    public void inANenames2Nenamesp(ANenames2Nenamesp node)
    {
        defaultIn(node);
    }

    public void outANenames2Nenamesp(ANenames2Nenamesp node)
    {
        defaultOut(node);
    }

    public void caseANenames2Nenamesp(ANenames2Nenamesp node)
    {
        inANenames2Nenamesp(node);
        if(node.getNenamesp() != null)
        {
            node.getNenamesp().apply(this);
        }
        if(node.getComma() != null)
        {
            node.getComma().apply(this);
        }
        if(node.getNamep() != null)
        {
            node.getNamep().apply(this);
        }
        outANenames2Nenamesp(node);
    }

    public void inAName1Namep(AName1Namep node)
    {
        defaultIn(node);
    }

    public void outAName1Namep(AName1Namep node)
    {
        defaultOut(node);
    }

    public void caseAName1Namep(AName1Namep node)
    {
        inAName1Namep(node);
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        outAName1Namep(node);
    }

    public void inAEmptyIntinitp(AEmptyIntinitp node)
    {
        defaultIn(node);
    }

    public void outAEmptyIntinitp(AEmptyIntinitp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyIntinitp(AEmptyIntinitp node)
    {
        inAEmptyIntinitp(node);
        outAEmptyIntinitp(node);
    }

    public void inAIntinit1Intinitp(AIntinit1Intinitp node)
    {
        defaultIn(node);
    }

    public void outAIntinit1Intinitp(AIntinit1Intinitp node)
    {
        defaultOut(node);
    }

    public void caseAIntinit1Intinitp(AIntinit1Intinitp node)
    {
        inAIntinit1Intinitp(node);
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getNumber() != null)
        {
            node.getNumber().apply(this);
        }
        outAIntinit1Intinitp(node);
    }

    public void inAEmptyBoolinitp(AEmptyBoolinitp node)
    {
        defaultIn(node);
    }

    public void outAEmptyBoolinitp(AEmptyBoolinitp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyBoolinitp(AEmptyBoolinitp node)
    {
        inAEmptyBoolinitp(node);
        outAEmptyBoolinitp(node);
    }

    public void inABoolinit1Boolinitp(ABoolinit1Boolinitp node)
    {
        defaultIn(node);
    }

    public void outABoolinit1Boolinitp(ABoolinit1Boolinitp node)
    {
        defaultOut(node);
    }

    public void caseABoolinit1Boolinitp(ABoolinit1Boolinitp node)
    {
        inABoolinit1Boolinitp(node);
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getTrue() != null)
        {
            node.getTrue().apply(this);
        }
        outABoolinit1Boolinitp(node);
    }

    public void inABoolinit2Boolinitp(ABoolinit2Boolinitp node)
    {
        defaultIn(node);
    }

    public void outABoolinit2Boolinitp(ABoolinit2Boolinitp node)
    {
        defaultOut(node);
    }

    public void caseABoolinit2Boolinitp(ABoolinit2Boolinitp node)
    {
        inABoolinit2Boolinitp(node);
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getFalse() != null)
        {
            node.getFalse().apply(this);
        }
        outABoolinit2Boolinitp(node);
    }

    public void inATextinit11Textinit1p(ATextinit11Textinit1p node)
    {
        defaultIn(node);
    }

    public void outATextinit11Textinit1p(ATextinit11Textinit1p node)
    {
        defaultOut(node);
    }

    public void caseATextinit11Textinit1p(ATextinit11Textinit1p node)
    {
        inATextinit11Textinit1p(node);
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        outATextinit11Textinit1p(node);
    }

    public void inAEmptyTextinitp(AEmptyTextinitp node)
    {
        defaultIn(node);
    }

    public void outAEmptyTextinitp(AEmptyTextinitp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyTextinitp(AEmptyTextinitp node)
    {
        inAEmptyTextinitp(node);
        outAEmptyTextinitp(node);
    }

    public void inATextinit1Textinitp(ATextinit1Textinitp node)
    {
        defaultIn(node);
    }

    public void outATextinit1Textinitp(ATextinit1Textinitp node)
    {
        defaultOut(node);
    }

    public void caseATextinit1Textinitp(ATextinit1Textinitp node)
    {
        inATextinit1Textinitp(node);
        if(node.getTextinit1p() != null)
        {
            node.getTextinit1p().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outATextinit1Textinitp(node);
    }

    public void inAEmptyStringp(AEmptyStringp node)
    {
        defaultIn(node);
    }

    public void outAEmptyStringp(AEmptyStringp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyStringp(AEmptyStringp node)
    {
        inAEmptyStringp(node);
        outAEmptyStringp(node);
    }

    public void inAStringp1Stringp(AStringp1Stringp node)
    {
        defaultIn(node);
    }

    public void outAStringp1Stringp(AStringp1Stringp node)
    {
        defaultOut(node);
    }

    public void caseAStringp1Stringp(AStringp1Stringp node)
    {
        inAStringp1Stringp(node);
        if(node.getString() != null)
        {
            node.getString().apply(this);
        }
        outAStringp1Stringp(node);
    }

    public void inAStringp2Stringp(AStringp2Stringp node)
    {
        defaultIn(node);
    }

    public void outAStringp2Stringp(AStringp2Stringp node)
    {
        defaultOut(node);
    }

    public void caseAStringp2Stringp(AStringp2Stringp node)
    {
        inAStringp2Stringp(node);
        if(node.getStringSp4() != null)
        {
            node.getStringSp4().apply(this);
        }
        outAStringp2Stringp(node);
    }

    public void inADocuments1Documentsp(ADocuments1Documentsp node)
    {
        defaultIn(node);
    }

    public void outADocuments1Documentsp(ADocuments1Documentsp node)
    {
        defaultOut(node);
    }

    public void caseADocuments1Documentsp(ADocuments1Documentsp node)
    {
        inADocuments1Documentsp(node);
        if(node.getDocumentp() != null)
        {
            node.getDocumentp().apply(this);
        }
        outADocuments1Documentsp(node);
    }

    public void inADocuments2Documentsp(ADocuments2Documentsp node)
    {
        defaultIn(node);
    }

    public void outADocuments2Documentsp(ADocuments2Documentsp node)
    {
        defaultOut(node);
    }

    public void caseADocuments2Documentsp(ADocuments2Documentsp node)
    {
        inADocuments2Documentsp(node);
        if(node.getDocumentsp() != null)
        {
            node.getDocumentsp().apply(this);
        }
        if(node.getDocumentp() != null)
        {
            node.getDocumentp().apply(this);
        }
        outADocuments2Documentsp(node);
    }

    public void inADocument1Documentp(ADocument1Documentp node)
    {
        defaultIn(node);
    }

    public void outADocument1Documentp(ADocument1Documentp node)
    {
        defaultOut(node);
    }

    public void caseADocument1Documentp(ADocument1Documentp node)
    {
        inADocument1Documentp(node);
        if(node.getDocument() != null)
        {
            node.getDocument().apply(this);
        }
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        if(node.getTitlep() != null)
        {
            node.getTitlep().apply(this);
        }
        if(node.getOpenBr() != null)
        {
            node.getOpenBr().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getCloseBr() != null)
        {
            node.getCloseBr().apply(this);
        }
        outADocument1Documentp(node);
    }

    public void inATitle11Title1p(ATitle11Title1p node)
    {
        defaultIn(node);
    }

    public void outATitle11Title1p(ATitle11Title1p node)
    {
        defaultOut(node);
    }

    public void caseATitle11Title1p(ATitle11Title1p node)
    {
        inATitle11Title1p(node);
        if(node.getLeftBrack1() != null)
        {
            node.getLeftBrack1().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        outATitle11Title1p(node);
    }

    public void inAEmptyTitlep(AEmptyTitlep node)
    {
        defaultIn(node);
    }

    public void outAEmptyTitlep(AEmptyTitlep node)
    {
        defaultOut(node);
    }

    public void caseAEmptyTitlep(AEmptyTitlep node)
    {
        inAEmptyTitlep(node);
        outAEmptyTitlep(node);
    }

    public void inATitle1Titlep(ATitle1Titlep node)
    {
        defaultIn(node);
    }

    public void outATitle1Titlep(ATitle1Titlep node)
    {
        defaultOut(node);
    }

    public void caseATitle1Titlep(ATitle1Titlep node)
    {
        inATitle1Titlep(node);
        if(node.getTitle1p() != null)
        {
            node.getTitle1p().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getRightBrack1() != null)
        {
            node.getRightBrack1().apply(this);
        }
        outATitle1Titlep(node);
    }

    public void inAHtml1Htmlp(AHtml1Htmlp node)
    {
        defaultIn(node);
    }

    public void outAHtml1Htmlp(AHtml1Htmlp node)
    {
        defaultOut(node);
    }

    public void caseAHtml1Htmlp(AHtml1Htmlp node)
    {
        inAHtml1Htmlp(node);
        if(node.getEntityp() != null)
        {
            node.getEntityp().apply(this);
        }
        outAHtml1Htmlp(node);
    }

    public void inAHtml2Htmlp(AHtml2Htmlp node)
    {
        defaultIn(node);
    }

    public void outAHtml2Htmlp(AHtml2Htmlp node)
    {
        defaultOut(node);
    }

    public void caseAHtml2Htmlp(AHtml2Htmlp node)
    {
        inAHtml2Htmlp(node);
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getEntityp() != null)
        {
            node.getEntityp().apply(this);
        }
        outAHtml2Htmlp(node);
    }

    public void inAEntity91pEntity9p(AEntity91pEntity9p node)
    {
        defaultIn(node);
    }

    public void outAEntity91pEntity9p(AEntity91pEntity9p node)
    {
        defaultOut(node);
    }

    public void caseAEntity91pEntity9p(AEntity91pEntity9p node)
    {
        inAEntity91pEntity9p(node);
        if(node.getImg() != null)
        {
            node.getImg().apply(this);
        }
        if(node.getSrc() != null)
        {
            node.getSrc().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity91pEntity9p(node);
    }

    public void inAEntity101pEntity10p(AEntity101pEntity10p node)
    {
        defaultIn(node);
    }

    public void outAEntity101pEntity10p(AEntity101pEntity10p node)
    {
        defaultOut(node);
    }

    public void caseAEntity101pEntity10p(AEntity101pEntity10p node)
    {
        inAEntity101pEntity10p(node);
        if(node.getInclude() != null)
        {
            node.getInclude().apply(this);
        }
        if(node.getFile() != null)
        {
            node.getFile().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity101pEntity10p(node);
    }

    public void inAEntity111pEntity11p(AEntity111pEntity11p node)
    {
        defaultIn(node);
    }

    public void outAEntity111pEntity11p(AEntity111pEntity11p node)
    {
        defaultOut(node);
    }

    public void caseAEntity111pEntity11p(AEntity111pEntity11p node)
    {
        inAEntity111pEntity11p(node);
        if(node.getA() != null)
        {
            node.getA().apply(this);
        }
        if(node.getHref() != null)
        {
            node.getHref().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity111pEntity11p(node);
    }

    public void inAEntity141pEntity14p(AEntity141pEntity14p node)
    {
        defaultIn(node);
    }

    public void outAEntity141pEntity14p(AEntity141pEntity14p node)
    {
        defaultOut(node);
    }

    public void caseAEntity141pEntity14p(AEntity141pEntity14p node)
    {
        inAEntity141pEntity14p(node);
        if(node.getVar() != null)
        {
            node.getVar().apply(this);
        }
        if(node.getName() != null)
        {
            node.getName().apply(this);
        }
        if(node.getAssignSp2() != null)
        {
            node.getAssignSp2().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity141pEntity14p(node);
    }

    public void inAEntity151pEntity15p(AEntity151pEntity15p node)
    {
        defaultIn(node);
    }

    public void outAEntity151pEntity15p(AEntity151pEntity15p node)
    {
        defaultOut(node);
    }

    public void caseAEntity151pEntity15p(AEntity151pEntity15p node)
    {
        inAEntity151pEntity15p(node);
        if(node.getSelect() != null)
        {
            node.getSelect().apply(this);
        }
        if(node.getName() != null)
        {
            node.getName().apply(this);
        }
        if(node.getAssignSp2() != null)
        {
            node.getAssignSp2().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity151pEntity15p(node);
    }

    public void inAEntity1611pEntity161p(AEntity1611pEntity161p node)
    {
        defaultIn(node);
    }

    public void outAEntity1611pEntity161p(AEntity1611pEntity161p node)
    {
        defaultOut(node);
    }

    public void caseAEntity1611pEntity161p(AEntity1611pEntity161p node)
    {
        inAEntity1611pEntity161p(node);
        if(node.getInput() != null)
        {
            node.getInput().apply(this);
        }
        if(node.getName() != null)
        {
            node.getName().apply(this);
        }
        if(node.getAssignSp2() != null)
        {
            node.getAssignSp2().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity1611pEntity161p(node);
    }

    public void inAEntity1621pEntity162p(AEntity1621pEntity162p node)
    {
        defaultIn(node);
    }

    public void outAEntity1621pEntity162p(AEntity1621pEntity162p node)
    {
        defaultOut(node);
    }

    public void caseAEntity1621pEntity162p(AEntity1621pEntity162p node)
    {
        inAEntity1621pEntity162p(node);
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getType() != null)
        {
            node.getType().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        outAEntity1621pEntity162p(node);
    }

    public void inAEntity1711pEntity171p(AEntity1711pEntity171p node)
    {
        defaultIn(node);
    }

    public void outAEntity1711pEntity171p(AEntity1711pEntity171p node)
    {
        defaultOut(node);
    }

    public void caseAEntity1711pEntity171p(AEntity1711pEntity171p node)
    {
        inAEntity1711pEntity171p(node);
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAEntity1711pEntity171p(node);
    }

    public void inAEntity1811pEntity181p(AEntity1811pEntity181p node)
    {
        defaultIn(node);
    }

    public void outAEntity1811pEntity181p(AEntity1811pEntity181p node)
    {
        defaultOut(node);
    }

    public void caseAEntity1811pEntity181p(AEntity1811pEntity181p node)
    {
        inAEntity1811pEntity181p(node);
        if(node.getApplet() != null)
        {
            node.getApplet().apply(this);
        }
        if(node.getCodebase() != null)
        {
            node.getCodebase().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity1811pEntity181p(node);
    }

    public void inAEntity1821pEntity182p(AEntity1821pEntity182p node)
    {
        defaultIn(node);
    }

    public void outAEntity1821pEntity182p(AEntity1821pEntity182p node)
    {
        defaultOut(node);
    }

    public void caseAEntity1821pEntity182p(AEntity1821pEntity182p node)
    {
        inAEntity1821pEntity182p(node);
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity1821pEntity182p(node);
    }

    public void inAEntity1831pEntity183p(AEntity1831pEntity183p node)
    {
        defaultIn(node);
    }

    public void outAEntity1831pEntity183p(AEntity1831pEntity183p node)
    {
        defaultOut(node);
    }

    public void caseAEntity1831pEntity183p(AEntity1831pEntity183p node)
    {
        inAEntity1831pEntity183p(node);
        if(node.getCode() != null)
        {
            node.getCode().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAEntity1831pEntity183p(node);
    }

    public void inAEntity1841pEntity184p(AEntity1841pEntity184p node)
    {
        defaultIn(node);
    }

    public void outAEntity1841pEntity184p(AEntity1841pEntity184p node)
    {
        defaultOut(node);
    }

    public void caseAEntity1841pEntity184p(AEntity1841pEntity184p node)
    {
        inAEntity1841pEntity184p(node);
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getWidth() != null)
        {
            node.getWidth().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getNumber() != null)
        {
            node.getNumber().apply(this);
        }
        outAEntity1841pEntity184p(node);
    }

    public void inAEntity1sEntityp(AEntity1sEntityp node)
    {
        defaultIn(node);
    }

    public void outAEntity1sEntityp(AEntity1sEntityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity1sEntityp(AEntity1sEntityp node)
    {
        inAEntity1sEntityp(node);
        if(node.getString1() != null)
        {
            node.getString1().apply(this);
        }
        outAEntity1sEntityp(node);
    }

    public void inAEntity1nEntityp(AEntity1nEntityp node)
    {
        defaultIn(node);
    }

    public void outAEntity1nEntityp(AEntity1nEntityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity1nEntityp(AEntity1nEntityp node)
    {
        inAEntity1nEntityp(node);
        if(node.getNumber() != null)
        {
            node.getNumber().apply(this);
        }
        outAEntity1nEntityp(node);
    }

    public void inAEntity1tEntityp(AEntity1tEntityp node)
    {
        defaultIn(node);
    }

    public void outAEntity1tEntityp(AEntity1tEntityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity1tEntityp(AEntity1tEntityp node)
    {
        inAEntity1tEntityp(node);
        if(node.getTrue() != null)
        {
            node.getTrue().apply(this);
        }
        outAEntity1tEntityp(node);
    }

    public void inAEntity1fEntityp(AEntity1fEntityp node)
    {
        defaultIn(node);
    }

    public void outAEntity1fEntityp(AEntity1fEntityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity1fEntityp(AEntity1fEntityp node)
    {
        inAEntity1fEntityp(node);
        if(node.getFalse() != null)
        {
            node.getFalse().apply(this);
        }
        outAEntity1fEntityp(node);
    }

    public void inAEntity2Entityp(AEntity2Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity2Entityp(AEntity2Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity2Entityp(AEntity2Entityp node)
    {
        inAEntity2Entityp(node);
        if(node.getBold() != null)
        {
            node.getBold().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getBoldEnd() != null)
        {
            node.getBoldEnd().apply(this);
        }
        outAEntity2Entityp(node);
    }

    public void inAEntity3Entityp(AEntity3Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity3Entityp(AEntity3Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity3Entityp(AEntity3Entityp node)
    {
        inAEntity3Entityp(node);
        if(node.getItalic() != null)
        {
            node.getItalic().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getItalicEnd() != null)
        {
            node.getItalicEnd().apply(this);
        }
        outAEntity3Entityp(node);
    }

    public void inAEntity4Entityp(AEntity4Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity4Entityp(AEntity4Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity4Entityp(AEntity4Entityp node)
    {
        inAEntity4Entityp(node);
        if(node.getHeader1() != null)
        {
            node.getHeader1().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getHeader1End() != null)
        {
            node.getHeader1End().apply(this);
        }
        outAEntity4Entityp(node);
    }

    public void inAEntity5Entityp(AEntity5Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity5Entityp(AEntity5Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity5Entityp(AEntity5Entityp node)
    {
        inAEntity5Entityp(node);
        if(node.getHeader2() != null)
        {
            node.getHeader2().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getHeader2End() != null)
        {
            node.getHeader2End().apply(this);
        }
        outAEntity5Entityp(node);
    }

    public void inAEntity6Entityp(AEntity6Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity6Entityp(AEntity6Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity6Entityp(AEntity6Entityp node)
    {
        inAEntity6Entityp(node);
        if(node.getPara() != null)
        {
            node.getPara().apply(this);
        }
        outAEntity6Entityp(node);
    }

    public void inAEntity7Entityp(AEntity7Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity7Entityp(AEntity7Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity7Entityp(AEntity7Entityp node)
    {
        inAEntity7Entityp(node);
        if(node.getBr() != null)
        {
            node.getBr().apply(this);
        }
        outAEntity7Entityp(node);
    }

    public void inAEntity8Entityp(AEntity8Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity8Entityp(AEntity8Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity8Entityp(AEntity8Entityp node)
    {
        inAEntity8Entityp(node);
        if(node.getHr() != null)
        {
            node.getHr().apply(this);
        }
        outAEntity8Entityp(node);
    }

    public void inAEntity9Entityp(AEntity9Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity9Entityp(AEntity9Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity9Entityp(AEntity9Entityp node)
    {
        inAEntity9Entityp(node);
        if(node.getEntity9p() != null)
        {
            node.getEntity9p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAEntity9Entityp(node);
    }

    public void inAEntity10Entityp(AEntity10Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity10Entityp(AEntity10Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity10Entityp(AEntity10Entityp node)
    {
        inAEntity10Entityp(node);
        if(node.getEntity10p() != null)
        {
            node.getEntity10p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAEntity10Entityp(node);
    }

    public void inAEntity11Entityp(AEntity11Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity11Entityp(AEntity11Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity11Entityp(AEntity11Entityp node)
    {
        inAEntity11Entityp(node);
        if(node.getEntity11p() != null)
        {
            node.getEntity11p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getAEnd() != null)
        {
            node.getAEnd().apply(this);
        }
        outAEntity11Entityp(node);
    }

    public void inAEntity12Entityp(AEntity12Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity12Entityp(AEntity12Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity12Entityp(AEntity12Entityp node)
    {
        inAEntity12Entityp(node);
        if(node.getList() != null)
        {
            node.getList().apply(this);
        }
        if(node.getItemsp() != null)
        {
            node.getItemsp().apply(this);
        }
        if(node.getListEnd() != null)
        {
            node.getListEnd().apply(this);
        }
        outAEntity12Entityp(node);
    }

    public void inAEntity13Entityp(AEntity13Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity13Entityp(AEntity13Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity13Entityp(AEntity13Entityp node)
    {
        inAEntity13Entityp(node);
        if(node.getTable() != null)
        {
            node.getTable().apply(this);
        }
        if(node.getRowsp() != null)
        {
            node.getRowsp().apply(this);
        }
        if(node.getTableEnd() != null)
        {
            node.getTableEnd().apply(this);
        }
        outAEntity13Entityp(node);
    }

    public void inAEntity14Entityp(AEntity14Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity14Entityp(AEntity14Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity14Entityp(AEntity14Entityp node)
    {
        inAEntity14Entityp(node);
        if(node.getEntity14p() != null)
        {
            node.getEntity14p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAEntity14Entityp(node);
    }

    public void inAEntity15Entityp(AEntity15Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity15Entityp(AEntity15Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity15Entityp(AEntity15Entityp node)
    {
        inAEntity15Entityp(node);
        if(node.getEntity15p() != null)
        {
            node.getEntity15p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        if(node.getOptionsp() != null)
        {
            node.getOptionsp().apply(this);
        }
        if(node.getSelectEnd() != null)
        {
            node.getSelectEnd().apply(this);
        }
        outAEntity15Entityp(node);
    }

    public void inAEntity16Entityp(AEntity16Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity16Entityp(AEntity16Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity16Entityp(AEntity16Entityp node)
    {
        inAEntity16Entityp(node);
        if(node.getEntity161p() != null)
        {
            node.getEntity161p().apply(this);
        }
        if(node.getEntity162p() != null)
        {
            node.getEntity162p().apply(this);
        }
        if(node.getTextConst() != null)
        {
            node.getTextConst().apply(this);
        }
        if(node.getSize() != null)
        {
            node.getSize().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getNumber() != null)
        {
            node.getNumber().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAEntity16Entityp(node);
    }

    public void inAEntity17Entityp(AEntity17Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity17Entityp(AEntity17Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity17Entityp(AEntity17Entityp node)
    {
        inAEntity17Entityp(node);
        if(node.getEntity161p() != null)
        {
            node.getEntity161p().apply(this);
        }
        if(node.getEntity162p() != null)
        {
            node.getEntity162p().apply(this);
        }
        if(node.getRadio() != null)
        {
            node.getRadio().apply(this);
        }
        if(node.getValue() != null)
        {
            node.getValue().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getEntity171p() != null)
        {
            node.getEntity171p().apply(this);
        }
        outAEntity17Entityp(node);
    }

    public void inAEntity18Entityp(AEntity18Entityp node)
    {
        defaultIn(node);
    }

    public void outAEntity18Entityp(AEntity18Entityp node)
    {
        defaultOut(node);
    }

    public void caseAEntity18Entityp(AEntity18Entityp node)
    {
        inAEntity18Entityp(node);
        if(node.getEntity181p() != null)
        {
            node.getEntity181p().apply(this);
        }
        if(node.getEntity182p() != null)
        {
            node.getEntity182p().apply(this);
        }
        if(node.getEntity183p() != null)
        {
            node.getEntity183p().apply(this);
        }
        if(node.getEntity184p() != null)
        {
            node.getEntity184p().apply(this);
        }
        if(node.getHeight() != null)
        {
            node.getHeight().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getNumber() != null)
        {
            node.getNumber().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        if(node.getArgumentsp() != null)
        {
            node.getArgumentsp().apply(this);
        }
        if(node.getAppletEnd() != null)
        {
            node.getAppletEnd().apply(this);
        }
        outAEntity18Entityp(node);
    }

    public void inAOptions1Optionsp(AOptions1Optionsp node)
    {
        defaultIn(node);
    }

    public void outAOptions1Optionsp(AOptions1Optionsp node)
    {
        defaultOut(node);
    }

    public void caseAOptions1Optionsp(AOptions1Optionsp node)
    {
        inAOptions1Optionsp(node);
        if(node.getOptionp() != null)
        {
            node.getOptionp().apply(this);
        }
        outAOptions1Optionsp(node);
    }

    public void inAOptions2Optionsp(AOptions2Optionsp node)
    {
        defaultIn(node);
    }

    public void outAOptions2Optionsp(AOptions2Optionsp node)
    {
        defaultOut(node);
    }

    public void caseAOptions2Optionsp(AOptions2Optionsp node)
    {
        inAOptions2Optionsp(node);
        if(node.getOptionsp() != null)
        {
            node.getOptionsp().apply(this);
        }
        if(node.getOptionp() != null)
        {
            node.getOptionp().apply(this);
        }
        outAOptions2Optionsp(node);
    }

    public void inAOption11Option1p(AOption11Option1p node)
    {
        defaultIn(node);
    }

    public void outAOption11Option1p(AOption11Option1p node)
    {
        defaultOut(node);
    }

    public void caseAOption11Option1p(AOption11Option1p node)
    {
        inAOption11Option1p(node);
        if(node.getOptionp() != null)
        {
            node.getOptionp().apply(this);
        }
        if(node.getValue() != null)
        {
            node.getValue().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAOption11Option1p(node);
    }

    public void inAOption1Optionp(AOption1Optionp node)
    {
        defaultIn(node);
    }

    public void outAOption1Optionp(AOption1Optionp node)
    {
        defaultOut(node);
    }

    public void caseAOption1Optionp(AOption1Optionp node)
    {
        inAOption1Optionp(node);
        if(node.getOption1p() != null)
        {
            node.getOption1p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        if(node.getLiteralsp() != null)
        {
            node.getLiteralsp().apply(this);
        }
        outAOption1Optionp(node);
    }

    public void inALiterals1Literalsp(ALiterals1Literalsp node)
    {
        defaultIn(node);
    }

    public void outALiterals1Literalsp(ALiterals1Literalsp node)
    {
        defaultOut(node);
    }

    public void caseALiterals1Literalsp(ALiterals1Literalsp node)
    {
        inALiterals1Literalsp(node);
        if(node.getLiteralp() != null)
        {
            node.getLiteralp().apply(this);
        }
        outALiterals1Literalsp(node);
    }

    public void inALiterals2Literalsp(ALiterals2Literalsp node)
    {
        defaultIn(node);
    }

    public void outALiterals2Literalsp(ALiterals2Literalsp node)
    {
        defaultOut(node);
    }

    public void caseALiterals2Literalsp(ALiterals2Literalsp node)
    {
        inALiterals2Literalsp(node);
        if(node.getLiteralsp() != null)
        {
            node.getLiteralsp().apply(this);
        }
        if(node.getLiteralp() != null)
        {
            node.getLiteralp().apply(this);
        }
        outALiterals2Literalsp(node);
    }

    public void inALiteral1Literalp(ALiteral1Literalp node)
    {
        defaultIn(node);
    }

    public void outALiteral1Literalp(ALiteral1Literalp node)
    {
        defaultOut(node);
    }

    public void caseALiteral1Literalp(ALiteral1Literalp node)
    {
        inALiteral1Literalp(node);
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getEntity182p() != null)
        {
            node.getEntity182p().apply(this);
        }
        outALiteral1Literalp(node);
    }

    public void inALiteral2Literalp(ALiteral2Literalp node)
    {
        defaultIn(node);
    }

    public void outALiteral2Literalp(ALiteral2Literalp node)
    {
        defaultOut(node);
    }

    public void caseALiteral2Literalp(ALiteral2Literalp node)
    {
        inALiteral2Literalp(node);
        if(node.getNumber() != null)
        {
            node.getNumber().apply(this);
        }
        outALiteral2Literalp(node);
    }

    public void inALiteral3Literalp(ALiteral3Literalp node)
    {
        defaultIn(node);
    }

    public void outALiteral3Literalp(ALiteral3Literalp node)
    {
        defaultOut(node);
    }

    public void caseALiteral3Literalp(ALiteral3Literalp node)
    {
        inALiteral3Literalp(node);
        if(node.getTrue() != null)
        {
            node.getTrue().apply(this);
        }
        outALiteral3Literalp(node);
    }

    public void inALiteral4Literalp(ALiteral4Literalp node)
    {
        defaultIn(node);
    }

    public void outALiteral4Literalp(ALiteral4Literalp node)
    {
        defaultOut(node);
    }

    public void caseALiteral4Literalp(ALiteral4Literalp node)
    {
        inALiteral4Literalp(node);
        if(node.getFalse() != null)
        {
            node.getFalse().apply(this);
        }
        outALiteral4Literalp(node);
    }

    public void inAItems1Itemsp(AItems1Itemsp node)
    {
        defaultIn(node);
    }

    public void outAItems1Itemsp(AItems1Itemsp node)
    {
        defaultOut(node);
    }

    public void caseAItems1Itemsp(AItems1Itemsp node)
    {
        inAItems1Itemsp(node);
        if(node.getItemp() != null)
        {
            node.getItemp().apply(this);
        }
        outAItems1Itemsp(node);
    }

    public void inAItems2Itemsp(AItems2Itemsp node)
    {
        defaultIn(node);
    }

    public void outAItems2Itemsp(AItems2Itemsp node)
    {
        defaultOut(node);
    }

    public void caseAItems2Itemsp(AItems2Itemsp node)
    {
        inAItems2Itemsp(node);
        if(node.getItemsp() != null)
        {
            node.getItemsp().apply(this);
        }
        if(node.getItemp() != null)
        {
            node.getItemp().apply(this);
        }
        outAItems2Itemsp(node);
    }

    public void inAItem1Itemp(AItem1Itemp node)
    {
        defaultIn(node);
    }

    public void outAItem1Itemp(AItem1Itemp node)
    {
        defaultOut(node);
    }

    public void caseAItem1Itemp(AItem1Itemp node)
    {
        inAItem1Itemp(node);
        if(node.getLi() != null)
        {
            node.getLi().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        outAItem1Itemp(node);
    }

    public void inARows1Rowsp(ARows1Rowsp node)
    {
        defaultIn(node);
    }

    public void outARows1Rowsp(ARows1Rowsp node)
    {
        defaultOut(node);
    }

    public void caseARows1Rowsp(ARows1Rowsp node)
    {
        inARows1Rowsp(node);
        if(node.getRowp() != null)
        {
            node.getRowp().apply(this);
        }
        outARows1Rowsp(node);
    }

    public void inARows2Rowsp(ARows2Rowsp node)
    {
        defaultIn(node);
    }

    public void outARows2Rowsp(ARows2Rowsp node)
    {
        defaultOut(node);
    }

    public void caseARows2Rowsp(ARows2Rowsp node)
    {
        inARows2Rowsp(node);
        if(node.getRowsp() != null)
        {
            node.getRowsp().apply(this);
        }
        if(node.getRowp() != null)
        {
            node.getRowp().apply(this);
        }
        outARows2Rowsp(node);
    }

    public void inARow1Rowp(ARow1Rowp node)
    {
        defaultIn(node);
    }

    public void outARow1Rowp(ARow1Rowp node)
    {
        defaultOut(node);
    }

    public void caseARow1Rowp(ARow1Rowp node)
    {
        inARow1Rowp(node);
        if(node.getTr() != null)
        {
            node.getTr().apply(this);
        }
        if(node.getEntriesp() != null)
        {
            node.getEntriesp().apply(this);
        }
        if(node.getTrEnd() != null)
        {
            node.getTrEnd().apply(this);
        }
        outARow1Rowp(node);
    }

    public void inAEntries1Entriesp(AEntries1Entriesp node)
    {
        defaultIn(node);
    }

    public void outAEntries1Entriesp(AEntries1Entriesp node)
    {
        defaultOut(node);
    }

    public void caseAEntries1Entriesp(AEntries1Entriesp node)
    {
        inAEntries1Entriesp(node);
        if(node.getEntryp() != null)
        {
            node.getEntryp().apply(this);
        }
        outAEntries1Entriesp(node);
    }

    public void inAEntries2Entriesp(AEntries2Entriesp node)
    {
        defaultIn(node);
    }

    public void outAEntries2Entriesp(AEntries2Entriesp node)
    {
        defaultOut(node);
    }

    public void caseAEntries2Entriesp(AEntries2Entriesp node)
    {
        inAEntries2Entriesp(node);
        if(node.getEntriesp() != null)
        {
            node.getEntriesp().apply(this);
        }
        if(node.getEntryp() != null)
        {
            node.getEntryp().apply(this);
        }
        outAEntries2Entriesp(node);
    }

    public void inAEntry1Entryp(AEntry1Entryp node)
    {
        defaultIn(node);
    }

    public void outAEntry1Entryp(AEntry1Entryp node)
    {
        defaultOut(node);
    }

    public void caseAEntry1Entryp(AEntry1Entryp node)
    {
        inAEntry1Entryp(node);
        if(node.getTd() != null)
        {
            node.getTd().apply(this);
        }
        if(node.getHtmlp() != null)
        {
            node.getHtmlp().apply(this);
        }
        if(node.getTdEnd() != null)
        {
            node.getTdEnd().apply(this);
        }
        outAEntry1Entryp(node);
    }

    public void inAEmptyArgumentsp(AEmptyArgumentsp node)
    {
        defaultIn(node);
    }

    public void outAEmptyArgumentsp(AEmptyArgumentsp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyArgumentsp(AEmptyArgumentsp node)
    {
        inAEmptyArgumentsp(node);
        outAEmptyArgumentsp(node);
    }

    public void inAArguments1Argumentsp(AArguments1Argumentsp node)
    {
        defaultIn(node);
    }

    public void outAArguments1Argumentsp(AArguments1Argumentsp node)
    {
        defaultOut(node);
    }

    public void caseAArguments1Argumentsp(AArguments1Argumentsp node)
    {
        inAArguments1Argumentsp(node);
        if(node.getNeargumentsp() != null)
        {
            node.getNeargumentsp().apply(this);
        }
        outAArguments1Argumentsp(node);
    }

    public void inANearguments1Neargumentsp(ANearguments1Neargumentsp node)
    {
        defaultIn(node);
    }

    public void outANearguments1Neargumentsp(ANearguments1Neargumentsp node)
    {
        defaultOut(node);
    }

    public void caseANearguments1Neargumentsp(ANearguments1Neargumentsp node)
    {
        inANearguments1Neargumentsp(node);
        if(node.getArgumentp() != null)
        {
            node.getArgumentp().apply(this);
        }
        outANearguments1Neargumentsp(node);
    }

    public void inANearguments2Neargumentsp(ANearguments2Neargumentsp node)
    {
        defaultIn(node);
    }

    public void outANearguments2Neargumentsp(ANearguments2Neargumentsp node)
    {
        defaultOut(node);
    }

    public void caseANearguments2Neargumentsp(ANearguments2Neargumentsp node)
    {
        inANearguments2Neargumentsp(node);
        if(node.getNeargumentsp() != null)
        {
            node.getNeargumentsp().apply(this);
        }
        if(node.getArgumentp() != null)
        {
            node.getArgumentp().apply(this);
        }
        outANearguments2Neargumentsp(node);
    }

    public void inAArgument11Argument1p(AArgument11Argument1p node)
    {
        defaultIn(node);
    }

    public void outAArgument11Argument1p(AArgument11Argument1p node)
    {
        defaultOut(node);
    }

    public void caseAArgument11Argument1p(AArgument11Argument1p node)
    {
        inAArgument11Argument1p(node);
        if(node.getParam() != null)
        {
            node.getParam().apply(this);
        }
        if(node.getName() != null)
        {
            node.getName().apply(this);
        }
        if(node.getAssignSp2() != null)
        {
            node.getAssignSp2().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAArgument11Argument1p(node);
    }

    public void inAArgument31Argument3p(AArgument31Argument3p node)
    {
        defaultIn(node);
    }

    public void outAArgument31Argument3p(AArgument31Argument3p node)
    {
        defaultOut(node);
    }

    public void caseAArgument31Argument3p(AArgument31Argument3p node)
    {
        inAArgument31Argument3p(node);
        if(node.getResult() != null)
        {
            node.getResult().apply(this);
        }
        if(node.getName() != null)
        {
            node.getName().apply(this);
        }
        if(node.getAssignSp2() != null)
        {
            node.getAssignSp2().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outAArgument31Argument3p(node);
    }

    public void inAArgdum1Argdump(AArgdum1Argdump node)
    {
        defaultIn(node);
    }

    public void outAArgdum1Argdump(AArgdum1Argdump node)
    {
        defaultOut(node);
    }

    public void caseAArgdum1Argdump(AArgdum1Argdump node)
    {
        inAArgdum1Argdump(node);
        if(node.getArgument1p() != null)
        {
            node.getArgument1p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        outAArgdum1Argdump(node);
    }

    public void inAArgument1Argumentp(AArgument1Argumentp node)
    {
        defaultIn(node);
    }

    public void outAArgument1Argumentp(AArgument1Argumentp node)
    {
        defaultOut(node);
    }

    public void caseAArgument1Argumentp(AArgument1Argumentp node)
    {
        inAArgument1Argumentp(node);
        if(node.getArgdump() != null)
        {
            node.getArgdump().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getValue() != null)
        {
            node.getValue().apply(this);
        }
        if(node.getAssignNormaldoc() != null)
        {
            node.getAssignNormaldoc().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAArgument1Argumentp(node);
    }

    public void inAArgument2Argumentp(AArgument2Argumentp node)
    {
        defaultIn(node);
    }

    public void outAArgument2Argumentp(AArgument2Argumentp node)
    {
        defaultOut(node);
    }

    public void caseAArgument2Argumentp(AArgument2Argumentp node)
    {
        inAArgument2Argumentp(node);
        if(node.getArgdump() != null)
        {
            node.getArgdump().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAArgument2Argumentp(node);
    }

    public void inAArgument3Argumentp(AArgument3Argumentp node)
    {
        defaultIn(node);
    }

    public void outAArgument3Argumentp(AArgument3Argumentp node)
    {
        defaultOut(node);
    }

    public void caseAArgument3Argumentp(AArgument3Argumentp node)
    {
        inAArgument3Argumentp(node);
        if(node.getArgument3p() != null)
        {
            node.getArgument3p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAArgument3Argumentp(node);
    }

    public void inASessions1Sessionsp(ASessions1Sessionsp node)
    {
        defaultIn(node);
    }

    public void outASessions1Sessionsp(ASessions1Sessionsp node)
    {
        defaultOut(node);
    }

    public void caseASessions1Sessionsp(ASessions1Sessionsp node)
    {
        inASessions1Sessionsp(node);
        if(node.getSessionp() != null)
        {
            node.getSessionp().apply(this);
        }
        outASessions1Sessionsp(node);
    }

    public void inASessions2Sessionsp(ASessions2Sessionsp node)
    {
        defaultIn(node);
    }

    public void outASessions2Sessionsp(ASessions2Sessionsp node)
    {
        defaultOut(node);
    }

    public void caseASessions2Sessionsp(ASessions2Sessionsp node)
    {
        inASessions2Sessionsp(node);
        if(node.getSessionsp() != null)
        {
            node.getSessionsp().apply(this);
        }
        if(node.getSessionp() != null)
        {
            node.getSessionp().apply(this);
        }
        outASessions2Sessionsp(node);
    }

    public void inASession1Sessionp(ASession1Sessionp node)
    {
        defaultIn(node);
    }

    public void outASession1Sessionp(ASession1Sessionp node)
    {
        defaultOut(node);
    }

    public void caseASession1Sessionp(ASession1Sessionp node)
    {
        inASession1Sessionp(node);
        if(node.getSession() != null)
        {
            node.getSession().apply(this);
        }
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        if(node.getOpenBr() != null)
        {
            node.getOpenBr().apply(this);
        }
        if(node.getLocalsp() != null)
        {
            node.getLocalsp().apply(this);
        }
        if(node.getStatementseqp() != null)
        {
            node.getStatementseqp().apply(this);
        }
        if(node.getCloseBr() != null)
        {
            node.getCloseBr().apply(this);
        }
        if(node.getTerminationp() != null)
        {
            node.getTerminationp().apply(this);
        }
        outASession1Sessionp(node);
    }

    public void inATermination11Termination1p(ATermination11Termination1p node)
    {
        defaultIn(node);
    }

    public void outATermination11Termination1p(ATermination11Termination1p node)
    {
        defaultOut(node);
    }

    public void caseATermination11Termination1p(ATermination11Termination1p node)
    {
        inATermination11Termination1p(node);
        if(node.getEnds() != null)
        {
            node.getEnds().apply(this);
        }
        if(node.getWith() != null)
        {
            node.getWith().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outATermination11Termination1p(node);
    }

    public void inAEmptyTerminationp(AEmptyTerminationp node)
    {
        defaultIn(node);
    }

    public void outAEmptyTerminationp(AEmptyTerminationp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyTerminationp(AEmptyTerminationp node)
    {
        inAEmptyTerminationp(node);
        outAEmptyTerminationp(node);
    }

    public void inATermination1Terminationp(ATermination1Terminationp node)
    {
        defaultIn(node);
    }

    public void outATermination1Terminationp(ATermination1Terminationp node)
    {
        defaultOut(node);
    }

    public void caseATermination1Terminationp(ATermination1Terminationp node)
    {
        inATermination1Terminationp(node);
        if(node.getTermination1p() != null)
        {
            node.getTermination1p().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outATermination1Terminationp(node);
    }

    public void inAEmptyLocalsp(AEmptyLocalsp node)
    {
        defaultIn(node);
    }

    public void outAEmptyLocalsp(AEmptyLocalsp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyLocalsp(AEmptyLocalsp node)
    {
        inAEmptyLocalsp(node);
        outAEmptyLocalsp(node);
    }

    public void inALocals1Localsp(ALocals1Localsp node)
    {
        defaultIn(node);
    }

    public void outALocals1Localsp(ALocals1Localsp node)
    {
        defaultOut(node);
    }

    public void caseALocals1Localsp(ALocals1Localsp node)
    {
        inALocals1Localsp(node);
        if(node.getNelocalsp() != null)
        {
            node.getNelocalsp().apply(this);
        }
        outALocals1Localsp(node);
    }

    public void inANelocals1Nelocalsp(ANelocals1Nelocalsp node)
    {
        defaultIn(node);
    }

    public void outANelocals1Nelocalsp(ANelocals1Nelocalsp node)
    {
        defaultOut(node);
    }

    public void caseANelocals1Nelocalsp(ANelocals1Nelocalsp node)
    {
        inANelocals1Nelocalsp(node);
        if(node.getLocalp() != null)
        {
            node.getLocalp().apply(this);
        }
        if(node.getSemicolon() != null)
        {
            node.getSemicolon().apply(this);
        }
        outANelocals1Nelocalsp(node);
    }

    public void inANelocals2Nelocalsp(ANelocals2Nelocalsp node)
    {
        defaultIn(node);
    }

    public void outANelocals2Nelocalsp(ANelocals2Nelocalsp node)
    {
        defaultOut(node);
    }

    public void caseANelocals2Nelocalsp(ANelocals2Nelocalsp node)
    {
        inANelocals2Nelocalsp(node);
        if(node.getNelocalsp() != null)
        {
            node.getNelocalsp().apply(this);
        }
        if(node.getLocalp() != null)
        {
            node.getLocalp().apply(this);
        }
        if(node.getSemicolon() != null)
        {
            node.getSemicolon().apply(this);
        }
        outANelocals2Nelocalsp(node);
    }

    public void inALocal1Localp(ALocal1Localp node)
    {
        defaultIn(node);
    }

    public void outALocal1Localp(ALocal1Localp node)
    {
        defaultOut(node);
    }

    public void caseALocal1Localp(ALocal1Localp node)
    {
        inALocal1Localp(node);
        if(node.getLocal() != null)
        {
            node.getLocal().apply(this);
        }
        if(node.getNenamesp() != null)
        {
            node.getNenamesp().apply(this);
        }
        if(node.getSpecify() != null)
        {
            node.getSpecify().apply(this);
        }
        if(node.getInt() != null)
        {
            node.getInt().apply(this);
        }
        if(node.getIntinitsp() != null)
        {
            node.getIntinitsp().apply(this);
        }
        outALocal1Localp(node);
    }

    public void inALocal2Localp(ALocal2Localp node)
    {
        defaultIn(node);
    }

    public void outALocal2Localp(ALocal2Localp node)
    {
        defaultOut(node);
    }

    public void caseALocal2Localp(ALocal2Localp node)
    {
        inALocal2Localp(node);
        if(node.getLocal() != null)
        {
            node.getLocal().apply(this);
        }
        if(node.getNenamesp() != null)
        {
            node.getNenamesp().apply(this);
        }
        if(node.getSpecify() != null)
        {
            node.getSpecify().apply(this);
        }
        if(node.getBool() != null)
        {
            node.getBool().apply(this);
        }
        if(node.getBoolinitsp() != null)
        {
            node.getBoolinitsp().apply(this);
        }
        outALocal2Localp(node);
    }

    public void inALocal3Localp(ALocal3Localp node)
    {
        defaultIn(node);
    }

    public void outALocal3Localp(ALocal3Localp node)
    {
        defaultOut(node);
    }

    public void caseALocal3Localp(ALocal3Localp node)
    {
        inALocal3Localp(node);
        if(node.getLocal() != null)
        {
            node.getLocal().apply(this);
        }
        if(node.getNenamesp() != null)
        {
            node.getNenamesp().apply(this);
        }
        if(node.getSpecify() != null)
        {
            node.getSpecify().apply(this);
        }
        if(node.getText() != null)
        {
            node.getText().apply(this);
        }
        if(node.getTextinitsp() != null)
        {
            node.getTextinitsp().apply(this);
        }
        outALocal3Localp(node);
    }

    public void inAEmptyIntinitsp(AEmptyIntinitsp node)
    {
        defaultIn(node);
    }

    public void outAEmptyIntinitsp(AEmptyIntinitsp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyIntinitsp(AEmptyIntinitsp node)
    {
        inAEmptyIntinitsp(node);
        outAEmptyIntinitsp(node);
    }

    public void inAIntinits1Intinitsp(AIntinits1Intinitsp node)
    {
        defaultIn(node);
    }

    public void outAIntinits1Intinitsp(AIntinits1Intinitsp node)
    {
        defaultOut(node);
    }

    public void caseAIntinits1Intinitsp(AIntinits1Intinitsp node)
    {
        inAIntinits1Intinitsp(node);
        if(node.getEqualSes() != null)
        {
            node.getEqualSes().apply(this);
        }
        if(node.getNumber() != null)
        {
            node.getNumber().apply(this);
        }
        outAIntinits1Intinitsp(node);
    }

    public void inAEmptyBoolinitsp(AEmptyBoolinitsp node)
    {
        defaultIn(node);
    }

    public void outAEmptyBoolinitsp(AEmptyBoolinitsp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyBoolinitsp(AEmptyBoolinitsp node)
    {
        inAEmptyBoolinitsp(node);
        outAEmptyBoolinitsp(node);
    }

    public void inABoolinits1Boolinitsp(ABoolinits1Boolinitsp node)
    {
        defaultIn(node);
    }

    public void outABoolinits1Boolinitsp(ABoolinits1Boolinitsp node)
    {
        defaultOut(node);
    }

    public void caseABoolinits1Boolinitsp(ABoolinits1Boolinitsp node)
    {
        inABoolinits1Boolinitsp(node);
        if(node.getEqualSes() != null)
        {
            node.getEqualSes().apply(this);
        }
        if(node.getTrue() != null)
        {
            node.getTrue().apply(this);
        }
        outABoolinits1Boolinitsp(node);
    }

    public void inABoolinits2Boolinitsp(ABoolinits2Boolinitsp node)
    {
        defaultIn(node);
    }

    public void outABoolinits2Boolinitsp(ABoolinits2Boolinitsp node)
    {
        defaultOut(node);
    }

    public void caseABoolinits2Boolinitsp(ABoolinits2Boolinitsp node)
    {
        inABoolinits2Boolinitsp(node);
        if(node.getEqualSes() != null)
        {
            node.getEqualSes().apply(this);
        }
        if(node.getFalse() != null)
        {
            node.getFalse().apply(this);
        }
        outABoolinits2Boolinitsp(node);
    }

    public void inATextinits11Textinit1sp(ATextinits11Textinit1sp node)
    {
        defaultIn(node);
    }

    public void outATextinits11Textinit1sp(ATextinits11Textinit1sp node)
    {
        defaultOut(node);
    }

    public void caseATextinits11Textinit1sp(ATextinits11Textinit1sp node)
    {
        inATextinits11Textinit1sp(node);
        if(node.getEqualSes() != null)
        {
            node.getEqualSes().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        if(node.getStringp() != null)
        {
            node.getStringp().apply(this);
        }
        outATextinits11Textinit1sp(node);
    }

    public void inAEmptyTextinitsp(AEmptyTextinitsp node)
    {
        defaultIn(node);
    }

    public void outAEmptyTextinitsp(AEmptyTextinitsp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyTextinitsp(AEmptyTextinitsp node)
    {
        inAEmptyTextinitsp(node);
        outAEmptyTextinitsp(node);
    }

    public void inATextinits1Textinitsp(ATextinits1Textinitsp node)
    {
        defaultIn(node);
    }

    public void outATextinits1Textinitsp(ATextinits1Textinitsp node)
    {
        defaultOut(node);
    }

    public void caseATextinits1Textinitsp(ATextinits1Textinitsp node)
    {
        inATextinits1Textinitsp(node);
        if(node.getTextinit1sp() != null)
        {
            node.getTextinit1sp().apply(this);
        }
        if(node.getQuote() != null)
        {
            node.getQuote().apply(this);
        }
        outATextinits1Textinitsp(node);
    }

    public void inAStatement711Statement71p(AStatement711Statement71p node)
    {
        defaultIn(node);
    }

    public void outAStatement711Statement71p(AStatement711Statement71p node)
    {
        defaultOut(node);
    }

    public void caseAStatement711Statement71p(AStatement711Statement71p node)
    {
        inAStatement711Statement71p(node);
        if(node.getIf() != null)
        {
            node.getIf().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        if(node.getOpenBr() != null)
        {
            node.getOpenBr().apply(this);
        }
        if(node.getStatementseqp() != null)
        {
            node.getStatementseqp().apply(this);
        }
        if(node.getCloseBr() != null)
        {
            node.getCloseBr().apply(this);
        }
        outAStatement711Statement71p(node);
    }

    public void inAEmptyStatement72p(AEmptyStatement72p node)
    {
        defaultIn(node);
    }

    public void outAEmptyStatement72p(AEmptyStatement72p node)
    {
        defaultOut(node);
    }

    public void caseAEmptyStatement72p(AEmptyStatement72p node)
    {
        inAEmptyStatement72p(node);
        outAEmptyStatement72p(node);
    }

    public void inAStatement721Statement72p(AStatement721Statement72p node)
    {
        defaultIn(node);
    }

    public void outAStatement721Statement72p(AStatement721Statement72p node)
    {
        defaultOut(node);
    }

    public void caseAStatement721Statement72p(AStatement721Statement72p node)
    {
        inAStatement721Statement72p(node);
        if(node.getElse() != null)
        {
            node.getElse().apply(this);
        }
        if(node.getOpenBr() != null)
        {
            node.getOpenBr().apply(this);
        }
        if(node.getStatementseqp() != null)
        {
            node.getStatementseqp().apply(this);
        }
        if(node.getCloseBr() != null)
        {
            node.getCloseBr().apply(this);
        }
        outAStatement721Statement72p(node);
    }

    public void inAEmptyStatementp(AEmptyStatementp node)
    {
        defaultIn(node);
    }

    public void outAEmptyStatementp(AEmptyStatementp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyStatementp(AEmptyStatementp node)
    {
        inAEmptyStatementp(node);
        outAEmptyStatementp(node);
    }

    public void inAStatement1Statementp(AStatement1Statementp node)
    {
        defaultIn(node);
    }

    public void outAStatement1Statementp(AStatement1Statementp node)
    {
        defaultOut(node);
    }

    public void caseAStatement1Statementp(AStatement1Statementp node)
    {
        inAStatement1Statementp(node);
        if(node.getStop() != null)
        {
            node.getStop().apply(this);
        }
        outAStatement1Statementp(node);
    }

    public void inAStatement2Statementp(AStatement2Statementp node)
    {
        defaultIn(node);
    }

    public void outAStatement2Statementp(AStatement2Statementp node)
    {
        defaultOut(node);
    }

    public void caseAStatement2Statementp(AStatement2Statementp node)
    {
        inAStatement2Statementp(node);
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        if(node.getAssignSes() != null)
        {
            node.getAssignSes().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        outAStatement2Statementp(node);
    }

    public void inAStatement3Statementp(AStatement3Statementp node)
    {
        defaultIn(node);
    }

    public void outAStatement3Statementp(AStatement3Statementp node)
    {
        defaultOut(node);
    }

    public void caseAStatement3Statementp(AStatement3Statementp node)
    {
        inAStatement3Statementp(node);
        if(node.getTake() != null)
        {
            node.getTake().apply(this);
        }
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        if(node.getOpenBr() != null)
        {
            node.getOpenBr().apply(this);
        }
        if(node.getStatementseqp() != null)
        {
            node.getStatementseqp().apply(this);
        }
        if(node.getCloseBr() != null)
        {
            node.getCloseBr().apply(this);
        }
        outAStatement3Statementp(node);
    }

    public void inAStatement5Statementp(AStatement5Statementp node)
    {
        defaultIn(node);
    }

    public void outAStatement5Statementp(AStatement5Statementp node)
    {
        defaultOut(node);
    }

    public void caseAStatement5Statementp(AStatement5Statementp node)
    {
        inAStatement5Statementp(node);
        if(node.getShow() != null)
        {
            node.getShow().apply(this);
        }
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        if(node.getParametersp() != null)
        {
            node.getParametersp().apply(this);
        }
        outAStatement5Statementp(node);
    }

    public void inAStatement7Statementp(AStatement7Statementp node)
    {
        defaultIn(node);
    }

    public void outAStatement7Statementp(AStatement7Statementp node)
    {
        defaultOut(node);
    }

    public void caseAStatement7Statementp(AStatement7Statementp node)
    {
        inAStatement7Statementp(node);
        if(node.getStatement71p() != null)
        {
            node.getStatement71p().apply(this);
        }
        if(node.getStatement72p() != null)
        {
            node.getStatement72p().apply(this);
        }
        outAStatement7Statementp(node);
    }

    public void inAStatement8Statementp(AStatement8Statementp node)
    {
        defaultIn(node);
    }

    public void outAStatement8Statementp(AStatement8Statementp node)
    {
        defaultOut(node);
    }

    public void caseAStatement8Statementp(AStatement8Statementp node)
    {
        inAStatement8Statementp(node);
        if(node.getWhile() != null)
        {
            node.getWhile().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        if(node.getOpenBr() != null)
        {
            node.getOpenBr().apply(this);
        }
        if(node.getStatementseqp() != null)
        {
            node.getStatementseqp().apply(this);
        }
        if(node.getCloseBr() != null)
        {
            node.getCloseBr().apply(this);
        }
        outAStatement8Statementp(node);
    }

    public void inAStatementseq1Statementseqp(AStatementseq1Statementseqp node)
    {
        defaultIn(node);
    }

    public void outAStatementseq1Statementseqp(AStatementseq1Statementseqp node)
    {
        defaultOut(node);
    }

    public void caseAStatementseq1Statementseqp(AStatementseq1Statementseqp node)
    {
        inAStatementseq1Statementseqp(node);
        if(node.getStatementp() != null)
        {
            node.getStatementp().apply(this);
        }
        outAStatementseq1Statementseqp(node);
    }

    public void inAStatementseq2Statementseqp(AStatementseq2Statementseqp node)
    {
        defaultIn(node);
    }

    public void outAStatementseq2Statementseqp(AStatementseq2Statementseqp node)
    {
        defaultOut(node);
    }

    public void caseAStatementseq2Statementseqp(AStatementseq2Statementseqp node)
    {
        inAStatementseq2Statementseqp(node);
        if(node.getStatementseqp() != null)
        {
            node.getStatementseqp().apply(this);
        }
        if(node.getSemicolon() != null)
        {
            node.getSemicolon().apply(this);
        }
        if(node.getStatementp() != null)
        {
            node.getStatementp().apply(this);
        }
        outAStatementseq2Statementseqp(node);
    }

    public void inAEmptyParametersp(AEmptyParametersp node)
    {
        defaultIn(node);
    }

    public void outAEmptyParametersp(AEmptyParametersp node)
    {
        defaultOut(node);
    }

    public void caseAEmptyParametersp(AEmptyParametersp node)
    {
        inAEmptyParametersp(node);
        outAEmptyParametersp(node);
    }

    public void inAParameters1Parametersp(AParameters1Parametersp node)
    {
        defaultIn(node);
    }

    public void outAParameters1Parametersp(AParameters1Parametersp node)
    {
        defaultOut(node);
    }

    public void caseAParameters1Parametersp(AParameters1Parametersp node)
    {
        inAParameters1Parametersp(node);
        if(node.getLeftParen() != null)
        {
            node.getLeftParen().apply(this);
        }
        if(node.getRightParen() != null)
        {
            node.getRightParen().apply(this);
        }
        outAParameters1Parametersp(node);
    }

    public void inAParameters2Parametersp(AParameters2Parametersp node)
    {
        defaultIn(node);
    }

    public void outAParameters2Parametersp(AParameters2Parametersp node)
    {
        defaultOut(node);
    }

    public void caseAParameters2Parametersp(AParameters2Parametersp node)
    {
        inAParameters2Parametersp(node);
        if(node.getLeftParen() != null)
        {
            node.getLeftParen().apply(this);
        }
        if(node.getNeparlistp() != null)
        {
            node.getNeparlistp().apply(this);
        }
        if(node.getRightParen() != null)
        {
            node.getRightParen().apply(this);
        }
        outAParameters2Parametersp(node);
    }

    public void inANeparlist1Neparlistp(ANeparlist1Neparlistp node)
    {
        defaultIn(node);
    }

    public void outANeparlist1Neparlistp(ANeparlist1Neparlistp node)
    {
        defaultOut(node);
    }

    public void caseANeparlist1Neparlistp(ANeparlist1Neparlistp node)
    {
        inANeparlist1Neparlistp(node);
        if(node.getParameterp() != null)
        {
            node.getParameterp().apply(this);
        }
        outANeparlist1Neparlistp(node);
    }

    public void inANeparlist2Neparlistp(ANeparlist2Neparlistp node)
    {
        defaultIn(node);
    }

    public void outANeparlist2Neparlistp(ANeparlist2Neparlistp node)
    {
        defaultOut(node);
    }

    public void caseANeparlist2Neparlistp(ANeparlist2Neparlistp node)
    {
        inANeparlist2Neparlistp(node);
        if(node.getNeparlistp() != null)
        {
            node.getNeparlistp().apply(this);
        }
        if(node.getComma() != null)
        {
            node.getComma().apply(this);
        }
        if(node.getParameterp() != null)
        {
            node.getParameterp().apply(this);
        }
        outANeparlist2Neparlistp(node);
    }

    public void inAParameter21Parameter2p(AParameter21Parameter2p node)
    {
        defaultIn(node);
    }

    public void outAParameter21Parameter2p(AParameter21Parameter2p node)
    {
        defaultOut(node);
    }

    public void caseAParameter21Parameter2p(AParameter21Parameter2p node)
    {
        inAParameter21Parameter2p(node);
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        if(node.getOut() != null)
        {
            node.getOut().apply(this);
        }
        outAParameter21Parameter2p(node);
    }

    public void inAParameter1Parameterp(AParameter1Parameterp node)
    {
        defaultIn(node);
    }

    public void outAParameter1Parameterp(AParameter1Parameterp node)
    {
        defaultOut(node);
    }

    public void caseAParameter1Parameterp(AParameter1Parameterp node)
    {
        inAParameter1Parameterp(node);
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        if(node.getIn() != null)
        {
            node.getIn().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        outAParameter1Parameterp(node);
    }

    public void inAParameter2Parameterp(AParameter2Parameterp node)
    {
        defaultIn(node);
    }

    public void outAParameter2Parameterp(AParameter2Parameterp node)
    {
        defaultOut(node);
    }

    public void caseAParameter2Parameterp(AParameter2Parameterp node)
    {
        inAParameter2Parameterp(node);
        if(node.getParameter2p() != null)
        {
            node.getParameter2p().apply(this);
        }
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        outAParameter2Parameterp(node);
    }

    public void inAExppIntExppInt(AExppIntExppInt node)
    {
        defaultIn(node);
    }

    public void outAExppIntExppInt(AExppIntExppInt node)
    {
        defaultOut(node);
    }

    public void caseAExppIntExppInt(AExppIntExppInt node)
    {
        inAExppIntExppInt(node);
        if(node.getOrexpp() != null)
        {
            node.getOrexpp().apply(this);
        }
        if(node.getInterval() != null)
        {
            node.getInterval().apply(this);
        }
        outAExppIntExppInt(node);
    }

    public void inAExp1Expp(AExp1Expp node)
    {
        defaultIn(node);
    }

    public void outAExp1Expp(AExp1Expp node)
    {
        defaultOut(node);
    }

    public void caseAExp1Expp(AExp1Expp node)
    {
        inAExp1Expp(node);
        if(node.getOrexpp() != null)
        {
            node.getOrexpp().apply(this);
        }
        outAExp1Expp(node);
    }

    public void inAExp2Expp(AExp2Expp node)
    {
        defaultIn(node);
    }

    public void outAExp2Expp(AExp2Expp node)
    {
        defaultOut(node);
    }

    public void caseAExp2Expp(AExp2Expp node)
    {
        inAExp2Expp(node);
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        if(node.getLeftBrack() != null)
        {
            node.getLeftBrack().apply(this);
        }
        if(node.getExppInt() != null)
        {
            node.getExppInt().apply(this);
        }
        if(node.getOrexpp() != null)
        {
            node.getOrexpp().apply(this);
        }
        if(node.getRightBrack() != null)
        {
            node.getRightBrack().apply(this);
        }
        outAExp2Expp(node);
    }

    public void inAOrexp1Orexpp(AOrexp1Orexpp node)
    {
        defaultIn(node);
    }

    public void outAOrexp1Orexpp(AOrexp1Orexpp node)
    {
        defaultOut(node);
    }

    public void caseAOrexp1Orexpp(AOrexp1Orexpp node)
    {
        inAOrexp1Orexpp(node);
        if(node.getAndexpp() != null)
        {
            node.getAndexpp().apply(this);
        }
        outAOrexp1Orexpp(node);
    }

    public void inAOrexp2Orexpp(AOrexp2Orexpp node)
    {
        defaultIn(node);
    }

    public void outAOrexp2Orexpp(AOrexp2Orexpp node)
    {
        defaultOut(node);
    }

    public void caseAOrexp2Orexpp(AOrexp2Orexpp node)
    {
        inAOrexp2Orexpp(node);
        if(node.getOrexpp() != null)
        {
            node.getOrexpp().apply(this);
        }
        if(node.getOr() != null)
        {
            node.getOr().apply(this);
        }
        if(node.getAndexpp() != null)
        {
            node.getAndexpp().apply(this);
        }
        outAOrexp2Orexpp(node);
    }

    public void inAAndexp1Andexpp(AAndexp1Andexpp node)
    {
        defaultIn(node);
    }

    public void outAAndexp1Andexpp(AAndexp1Andexpp node)
    {
        defaultOut(node);
    }

    public void caseAAndexp1Andexpp(AAndexp1Andexpp node)
    {
        inAAndexp1Andexpp(node);
        if(node.getEqexpp() != null)
        {
            node.getEqexpp().apply(this);
        }
        outAAndexp1Andexpp(node);
    }

    public void inAAndexp2Andexpp(AAndexp2Andexpp node)
    {
        defaultIn(node);
    }

    public void outAAndexp2Andexpp(AAndexp2Andexpp node)
    {
        defaultOut(node);
    }

    public void caseAAndexp2Andexpp(AAndexp2Andexpp node)
    {
        inAAndexp2Andexpp(node);
        if(node.getAndexpp() != null)
        {
            node.getAndexpp().apply(this);
        }
        if(node.getAnd() != null)
        {
            node.getAnd().apply(this);
        }
        if(node.getEqexpp() != null)
        {
            node.getEqexpp().apply(this);
        }
        outAAndexp2Andexpp(node);
    }

    public void inAEqexp1Eqexpp(AEqexp1Eqexpp node)
    {
        defaultIn(node);
    }

    public void outAEqexp1Eqexpp(AEqexp1Eqexpp node)
    {
        defaultOut(node);
    }

    public void caseAEqexp1Eqexpp(AEqexp1Eqexpp node)
    {
        inAEqexp1Eqexpp(node);
        if(node.getRelexpp() != null)
        {
            node.getRelexpp().apply(this);
        }
        outAEqexp1Eqexpp(node);
    }

    public void inAEqexp2Eqexpp(AEqexp2Eqexpp node)
    {
        defaultIn(node);
    }

    public void outAEqexp2Eqexpp(AEqexp2Eqexpp node)
    {
        defaultOut(node);
    }

    public void caseAEqexp2Eqexpp(AEqexp2Eqexpp node)
    {
        inAEqexp2Eqexpp(node);
        if(node.getEqexpp() != null)
        {
            node.getEqexpp().apply(this);
        }
        if(node.getEqualSes() != null)
        {
            node.getEqualSes().apply(this);
        }
        if(node.getRelexpp() != null)
        {
            node.getRelexpp().apply(this);
        }
        outAEqexp2Eqexpp(node);
    }

    public void inARelexp1Relexpp(ARelexp1Relexpp node)
    {
        defaultIn(node);
    }

    public void outARelexp1Relexpp(ARelexp1Relexpp node)
    {
        defaultOut(node);
    }

    public void caseARelexp1Relexpp(ARelexp1Relexpp node)
    {
        inARelexp1Relexpp(node);
        if(node.getAddexpp() != null)
        {
            node.getAddexpp().apply(this);
        }
        outARelexp1Relexpp(node);
    }

    public void inARelexp2Relexpp(ARelexp2Relexpp node)
    {
        defaultIn(node);
    }

    public void outARelexp2Relexpp(ARelexp2Relexpp node)
    {
        defaultOut(node);
    }

    public void caseARelexp2Relexpp(ARelexp2Relexpp node)
    {
        inARelexp2Relexpp(node);
        if(node.getRelexpp() != null)
        {
            node.getRelexpp().apply(this);
        }
        if(node.getGt() != null)
        {
            node.getGt().apply(this);
        }
        if(node.getAddexpp() != null)
        {
            node.getAddexpp().apply(this);
        }
        outARelexp2Relexpp(node);
    }

    public void inAAddexp1Addexpp(AAddexp1Addexpp node)
    {
        defaultIn(node);
    }

    public void outAAddexp1Addexpp(AAddexp1Addexpp node)
    {
        defaultOut(node);
    }

    public void caseAAddexp1Addexpp(AAddexp1Addexpp node)
    {
        inAAddexp1Addexpp(node);
        if(node.getMultexpp() != null)
        {
            node.getMultexpp().apply(this);
        }
        outAAddexp1Addexpp(node);
    }

    public void inAAddexp2Addexpp(AAddexp2Addexpp node)
    {
        defaultIn(node);
    }

    public void outAAddexp2Addexpp(AAddexp2Addexpp node)
    {
        defaultOut(node);
    }

    public void caseAAddexp2Addexpp(AAddexp2Addexpp node)
    {
        inAAddexp2Addexpp(node);
        if(node.getAddexpp() != null)
        {
            node.getAddexpp().apply(this);
        }
        if(node.getPlus() != null)
        {
            node.getPlus().apply(this);
        }
        if(node.getMultexpp() != null)
        {
            node.getMultexpp().apply(this);
        }
        outAAddexp2Addexpp(node);
    }

    public void inAAddexp3Addexpp(AAddexp3Addexpp node)
    {
        defaultIn(node);
    }

    public void outAAddexp3Addexpp(AAddexp3Addexpp node)
    {
        defaultOut(node);
    }

    public void caseAAddexp3Addexpp(AAddexp3Addexpp node)
    {
        inAAddexp3Addexpp(node);
        if(node.getAddexpp() != null)
        {
            node.getAddexpp().apply(this);
        }
        if(node.getMinus() != null)
        {
            node.getMinus().apply(this);
        }
        if(node.getMultexpp() != null)
        {
            node.getMultexpp().apply(this);
        }
        outAAddexp3Addexpp(node);
    }

    public void inAAddexp4Addexpp(AAddexp4Addexpp node)
    {
        defaultIn(node);
    }

    public void outAAddexp4Addexpp(AAddexp4Addexpp node)
    {
        defaultOut(node);
    }

    public void caseAAddexp4Addexpp(AAddexp4Addexpp node)
    {
        inAAddexp4Addexpp(node);
        if(node.getAddexpp() != null)
        {
            node.getAddexpp().apply(this);
        }
        if(node.getAutoInc() != null)
        {
            node.getAutoInc().apply(this);
        }
        if(node.getMultexpp() != null)
        {
            node.getMultexpp().apply(this);
        }
        outAAddexp4Addexpp(node);
    }

    public void inAMultexp1Multexpp(AMultexp1Multexpp node)
    {
        defaultIn(node);
    }

    public void outAMultexp1Multexpp(AMultexp1Multexpp node)
    {
        defaultOut(node);
    }

    public void caseAMultexp1Multexpp(AMultexp1Multexpp node)
    {
        inAMultexp1Multexpp(node);
        if(node.getUnaryexpp() != null)
        {
            node.getUnaryexpp().apply(this);
        }
        outAMultexp1Multexpp(node);
    }

    public void inAMultexp2Multexpp(AMultexp2Multexpp node)
    {
        defaultIn(node);
    }

    public void outAMultexp2Multexpp(AMultexp2Multexpp node)
    {
        defaultOut(node);
    }

    public void caseAMultexp2Multexpp(AMultexp2Multexpp node)
    {
        inAMultexp2Multexpp(node);
        if(node.getMultexpp() != null)
        {
            node.getMultexpp().apply(this);
        }
        if(node.getMultiply() != null)
        {
            node.getMultiply().apply(this);
        }
        if(node.getUnaryexpp() != null)
        {
            node.getUnaryexpp().apply(this);
        }
        outAMultexp2Multexpp(node);
    }

    public void inAMultexp3Multexpp(AMultexp3Multexpp node)
    {
        defaultIn(node);
    }

    public void outAMultexp3Multexpp(AMultexp3Multexpp node)
    {
        defaultOut(node);
    }

    public void caseAMultexp3Multexpp(AMultexp3Multexpp node)
    {
        inAMultexp3Multexpp(node);
        if(node.getMultexpp() != null)
        {
            node.getMultexpp().apply(this);
        }
        if(node.getDivide() != null)
        {
            node.getDivide().apply(this);
        }
        if(node.getUnaryexpp() != null)
        {
            node.getUnaryexpp().apply(this);
        }
        outAMultexp3Multexpp(node);
    }

    public void inAMultexp4Multexpp(AMultexp4Multexpp node)
    {
        defaultIn(node);
    }

    public void outAMultexp4Multexpp(AMultexp4Multexpp node)
    {
        defaultOut(node);
    }

    public void caseAMultexp4Multexpp(AMultexp4Multexpp node)
    {
        inAMultexp4Multexpp(node);
        if(node.getMultexpp() != null)
        {
            node.getMultexpp().apply(this);
        }
        if(node.getModulo() != null)
        {
            node.getModulo().apply(this);
        }
        if(node.getUnaryexpp() != null)
        {
            node.getUnaryexpp().apply(this);
        }
        outAMultexp4Multexpp(node);
    }

    public void inAUnaryexp1Unaryexpp(AUnaryexp1Unaryexpp node)
    {
        defaultIn(node);
    }

    public void outAUnaryexp1Unaryexpp(AUnaryexp1Unaryexpp node)
    {
        defaultOut(node);
    }

    public void caseAUnaryexp1Unaryexpp(AUnaryexp1Unaryexpp node)
    {
        inAUnaryexp1Unaryexpp(node);
        if(node.getUnaryexpnmp() != null)
        {
            node.getUnaryexpnmp().apply(this);
        }
        outAUnaryexp1Unaryexpp(node);
    }

    public void inAUnaryexp2Unaryexpp(AUnaryexp2Unaryexpp node)
    {
        defaultIn(node);
    }

    public void outAUnaryexp2Unaryexpp(AUnaryexp2Unaryexpp node)
    {
        defaultOut(node);
    }

    public void caseAUnaryexp2Unaryexpp(AUnaryexp2Unaryexpp node)
    {
        inAUnaryexp2Unaryexpp(node);
        if(node.getMinus() != null)
        {
            node.getMinus().apply(this);
        }
        if(node.getUnaryexpp() != null)
        {
            node.getUnaryexpp().apply(this);
        }
        outAUnaryexp2Unaryexpp(node);
    }

    public void inAAbsExp1AbsExpp(AAbsExp1AbsExpp node)
    {
        defaultIn(node);
    }

    public void outAAbsExp1AbsExpp(AAbsExp1AbsExpp node)
    {
        defaultOut(node);
    }

    public void caseAAbsExp1AbsExpp(AAbsExp1AbsExpp node)
    {
        inAAbsExp1AbsExpp(node);
        if(node.getAbs() != null)
        {
            node.getAbs().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        outAAbsExp1AbsExpp(node);
    }

    public void inAUnaryexpnm1Unaryexpnmp(AUnaryexpnm1Unaryexpnmp node)
    {
        defaultIn(node);
    }

    public void outAUnaryexpnm1Unaryexpnmp(AUnaryexpnm1Unaryexpnmp node)
    {
        defaultOut(node);
    }

    public void caseAUnaryexpnm1Unaryexpnmp(AUnaryexpnm1Unaryexpnmp node)
    {
        inAUnaryexpnm1Unaryexpnmp(node);
        if(node.getPostfixexpp() != null)
        {
            node.getPostfixexpp().apply(this);
        }
        outAUnaryexpnm1Unaryexpnmp(node);
    }

    public void inAUnaryexpnm2Unaryexpnmp(AUnaryexpnm2Unaryexpnmp node)
    {
        defaultIn(node);
    }

    public void outAUnaryexpnm2Unaryexpnmp(AUnaryexpnm2Unaryexpnmp node)
    {
        defaultOut(node);
    }

    public void caseAUnaryexpnm2Unaryexpnmp(AUnaryexpnm2Unaryexpnmp node)
    {
        inAUnaryexpnm2Unaryexpnmp(node);
        if(node.getNot() != null)
        {
            node.getNot().apply(this);
        }
        if(node.getUnaryexpp() != null)
        {
            node.getUnaryexpp().apply(this);
        }
        outAUnaryexpnm2Unaryexpnmp(node);
    }

    public void inAUnaryexpnm3Unaryexpnmp(AUnaryexpnm3Unaryexpnmp node)
    {
        defaultIn(node);
    }

    public void outAUnaryexpnm3Unaryexpnmp(AUnaryexpnm3Unaryexpnmp node)
    {
        defaultOut(node);
    }

    public void caseAUnaryexpnm3Unaryexpnmp(AUnaryexpnm3Unaryexpnmp node)
    {
        inAUnaryexpnm3Unaryexpnmp(node);
        if(node.getAbsExpp() != null)
        {
            node.getAbsExpp().apply(this);
        }
        if(node.getAbs() != null)
        {
            node.getAbs().apply(this);
        }
        outAUnaryexpnm3Unaryexpnmp(node);
    }

    public void inAUnaryexpnm4Unaryexpnmp(AUnaryexpnm4Unaryexpnmp node)
    {
        defaultIn(node);
    }

    public void outAUnaryexpnm4Unaryexpnmp(AUnaryexpnm4Unaryexpnmp node)
    {
        defaultOut(node);
    }

    public void caseAUnaryexpnm4Unaryexpnmp(AUnaryexpnm4Unaryexpnmp node)
    {
        inAUnaryexpnm4Unaryexpnmp(node);
        if(node.getRandom() != null)
        {
            node.getRandom().apply(this);
        }
        if(node.getLeftBrack() != null)
        {
            node.getLeftBrack().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        if(node.getRightBrack() != null)
        {
            node.getRightBrack().apply(this);
        }
        outAUnaryexpnm4Unaryexpnmp(node);
    }

    public void inAUnaryexpnm5Unaryexpnmp(AUnaryexpnm5Unaryexpnmp node)
    {
        defaultIn(node);
    }

    public void outAUnaryexpnm5Unaryexpnmp(AUnaryexpnm5Unaryexpnmp node)
    {
        defaultOut(node);
    }

    public void caseAUnaryexpnm5Unaryexpnmp(AUnaryexpnm5Unaryexpnmp node)
    {
        inAUnaryexpnm5Unaryexpnmp(node);
        if(node.getSystem() != null)
        {
            node.getSystem().apply(this);
        }
        if(node.getLeftBrack() != null)
        {
            node.getLeftBrack().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        if(node.getRightBrack() != null)
        {
            node.getRightBrack().apply(this);
        }
        outAUnaryexpnm5Unaryexpnmp(node);
    }

    public void inAPostfixexp1Postfixexpp(APostfixexp1Postfixexpp node)
    {
        defaultIn(node);
    }

    public void outAPostfixexp1Postfixexpp(APostfixexp1Postfixexpp node)
    {
        defaultOut(node);
    }

    public void caseAPostfixexp1Postfixexpp(APostfixexp1Postfixexpp node)
    {
        inAPostfixexp1Postfixexpp(node);
        if(node.getIdentifier() != null)
        {
            node.getIdentifier().apply(this);
        }
        outAPostfixexp1Postfixexpp(node);
    }

    public void inAPostfixexp2Postfixexpp(APostfixexp2Postfixexpp node)
    {
        defaultIn(node);
    }

    public void outAPostfixexp2Postfixexpp(APostfixexp2Postfixexpp node)
    {
        defaultOut(node);
    }

    public void caseAPostfixexp2Postfixexpp(APostfixexp2Postfixexpp node)
    {
        inAPostfixexp2Postfixexpp(node);
        if(node.getPrimexpp() != null)
        {
            node.getPrimexpp().apply(this);
        }
        outAPostfixexp2Postfixexpp(node);
    }

    public void inAPrimexp1Primexpp(APrimexp1Primexpp node)
    {
        defaultIn(node);
    }

    public void outAPrimexp1Primexpp(APrimexp1Primexpp node)
    {
        defaultOut(node);
    }

    public void caseAPrimexp1Primexpp(APrimexp1Primexpp node)
    {
        inAPrimexp1Primexpp(node);
        if(node.getLiteralp() != null)
        {
            node.getLiteralp().apply(this);
        }
        outAPrimexp1Primexpp(node);
    }

    public void inAPrimexp2Primexpp(APrimexp2Primexpp node)
    {
        defaultIn(node);
    }

    public void outAPrimexp2Primexpp(APrimexp2Primexpp node)
    {
        defaultOut(node);
    }

    public void caseAPrimexp2Primexpp(APrimexp2Primexpp node)
    {
        inAPrimexp2Primexpp(node);
        if(node.getLeftBrack() != null)
        {
            node.getLeftBrack().apply(this);
        }
        if(node.getExpp() != null)
        {
            node.getExpp().apply(this);
        }
        if(node.getRightBrack() != null)
        {
            node.getRightBrack().apply(this);
        }
        outAPrimexp2Primexpp(node);
    }
}
