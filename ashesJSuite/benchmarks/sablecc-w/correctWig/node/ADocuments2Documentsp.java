package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ADocuments2Documentsp extends PDocumentsp
{
    private PDocumentsp _documentsp_;
    private PDocumentp _documentp_;

    public ADocuments2Documentsp()
    {
    }

    public ADocuments2Documentsp(
        PDocumentsp _documentsp_,
        PDocumentp _documentp_)
    {
        setDocumentsp(_documentsp_);

        setDocumentp(_documentp_);

    }
    public Object clone()
    {
        return new ADocuments2Documentsp(
            (PDocumentsp) cloneNode(_documentsp_),
            (PDocumentp) cloneNode(_documentp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseADocuments2Documentsp(this);
    }

    public PDocumentsp getDocumentsp()
    {
        return _documentsp_;
    }

    public void setDocumentsp(PDocumentsp node)
    {
        if(_documentsp_ != null)
        {
            _documentsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _documentsp_ = node;
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
            + toString(_documentsp_)
            + toString(_documentp_);
    }

    void removeChild(Node child)
    {
        if(_documentsp_ == child)
        {
            _documentsp_ = null;
            return;
        }

        if(_documentp_ == child)
        {
            _documentp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_documentsp_ == oldChild)
        {
            setDocumentsp((PDocumentsp) newChild);
            return;
        }

        if(_documentp_ == oldChild)
        {
            setDocumentp((PDocumentp) newChild);
            return;
        }

    }
}
