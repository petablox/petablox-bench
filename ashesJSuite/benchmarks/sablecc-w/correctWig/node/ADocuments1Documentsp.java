package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ADocuments1Documentsp extends PDocumentsp
{
    private PDocumentp _documentp_;

    public ADocuments1Documentsp()
    {
    }

    public ADocuments1Documentsp(
        PDocumentp _documentp_)
    {
        setDocumentp(_documentp_);

    }
    public Object clone()
    {
        return new ADocuments1Documentsp(
            (PDocumentp) cloneNode(_documentp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseADocuments1Documentsp(this);
    }

    public PDocumentp getDocumentp()
    {
        return _documentp_;
    }

    public void setDocumentp(PDocumentp node)
    {
        if(_documentp_ != null)
        {
            _documentp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _documentp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_documentp_);
    }

    void removeChild(Node child)
    {
        if(_documentp_ == child)
        {
            _documentp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_documentp_ == oldChild)
        {
            setDocumentp((PDocumentp) newChild);
            return;
        }

    }
}
