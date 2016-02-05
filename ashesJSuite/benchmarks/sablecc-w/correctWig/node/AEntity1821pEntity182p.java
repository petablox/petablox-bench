package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1821pEntity182p extends PEntity182p
{
    private PStringp _stringp_;
    private TQuote _quote_;

    public AEntity1821pEntity182p()
    {
    }

    public AEntity1821pEntity182p(
        PStringp _stringp_,
        TQuote _quote_)
    {
        setStringp(_stringp_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity1821pEntity182p(
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1821pEntity182p(this);
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
            + toString(_stringp_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
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
