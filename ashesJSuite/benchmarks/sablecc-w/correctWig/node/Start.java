package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class Start extends Node
{
    private PServicep _pServicep_;
    private EOF _eof_;

    public Start()
    {
    }

    public Start(
        PServicep _pServicep_,
        EOF _eof_)
    {
        setPServicep(_pServicep_);
        setEOF(_eof_);
    }

    public Object clone()
    {
        return new Start(
            (PServicep) cloneNode(_pServicep_),
            (EOF) cloneNode(_eof_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseStart(this);
    }

    public PServicep getPServicep()
    {
        return _pServicep_;
    }

    public void setPServicep(PServicep node)
    {
        if(_pServicep_ != null)
        {
            _pServicep_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _pServicep_ = node;
    }

    public EOF getEOF()
    {
        return _eof_;
    }

    public void setEOF(EOF node)
    {
        if(_eof_ != null)
        {
            _eof_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _eof_ = node;
    }

    void removeChild(Node child)
    {
        if(_pServicep_ == child)
        {
            _pServicep_ = null;
            return;
        }

        if(_eof_ == child)
        {
            _eof_ = null;
            return;
        }
    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_pServicep_ == oldChild)
        {
            setPServicep((PServicep) newChild);
            return;
        }

        if(_eof_ == oldChild)
        {
            setEOF((EOF) newChild);
            return;
        }
    }

    public String toString()
    {
        return "" +
            toString(_pServicep_) +
            toString(_eof_);
    }
}
