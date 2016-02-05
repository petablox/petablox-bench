package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATermination1Terminationp extends PTerminationp
{
    private PTermination1p _termination1p_;
    private PStringp _stringp_;
    private TQuote _quote_;

    public ATermination1Terminationp()
    {
    }

    public ATermination1Terminationp(
        PTermination1p _termination1p_,
        PStringp _stringp_,
        TQuote _quote_)
    {
        setTermination1p(_termination1p_);

        setStringp(_stringp_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new ATermination1Terminationp(
            (PTermination1p) cloneNode(_termination1p_),
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATermination1Terminationp(this);
    }

    public PTermination1p getTermination1p()
    {
        return _termination1p_;
    }

    public void setTermination1p(PTermination1p node)
    {
        if(_termination1p_ != null)
        {
            _termination1p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _termination1p_ = node;
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

    public String toString()
    {
        return ""
            + toString(_termination1p_)
            + toString(_stringp_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_termination1p_ == child)
        {
            _termination1p_ = null;
            return;
        }

        if(_stringp_ == child)
        {
            _stringp_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_termination1p_ == oldChild)
        {
            setTermination1p((PTermination1p) newChild);
            return;
        }

        if(_stringp_ == oldChild)
        {
            setStringp((PStringp) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

    }
}
