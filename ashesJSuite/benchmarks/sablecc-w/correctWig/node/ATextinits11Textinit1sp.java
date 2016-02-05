package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATextinits11Textinit1sp extends PTextinit1sp
{
    private TEqualSes _equalSes_;
    private TQuote _quote_;
    private PStringp _stringp_;

    public ATextinits11Textinit1sp()
    {
    }

    public ATextinits11Textinit1sp(
        TEqualSes _equalSes_,
        TQuote _quote_,
        PStringp _stringp_)
    {
        setEqualSes(_equalSes_);

        setQuote(_quote_);

        setStringp(_stringp_);

    }
    public Object clone()
    {
        return new ATextinits11Textinit1sp(
            (TEqualSes) cloneNode(_equalSes_),
            (TQuote) cloneNode(_quote_),
            (PStringp) cloneNode(_stringp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATextinits11Textinit1sp(this);
    }

    public TEqualSes getEqualSes()
    {
        return _equalSes_;
    }

    public void setEqualSes(TEqualSes node)
    {
        if(_equalSes_ != null)
        {
            _equalSes_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _equalSes_ = node;
    }

    public TQuote getQuote()
    {
        return _quote_;
    }

    public void setQuote(TQuote node)
    {
        if(_quote_ != null)
        {
            _quote_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _quote_ = node;
    }

    public PStringp getStringp()
    {
        return _stringp_;
    }

    public void setStringp(PStringp node)
    {
        if(_stringp_ != null)
        {
            _stringp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _stringp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_equalSes_)
            + toString(_quote_)
            + toString(_stringp_);
    }

    void removeChild(Node child)
    {
        if(_equalSes_ == child)
        {
            _equalSes_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

        if(_stringp_ == child)
        {
            _stringp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_equalSes_ == oldChild)
        {
            setEqualSes((TEqualSes) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

        if(_stringp_ == oldChild)
        {
            setStringp((PStringp) newChild);
            return;
        }

    }
}
