package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATermination11Termination1p extends PTermination1p
{
    private TEnds _ends_;
    private TWith _with_;
    private TQuote _quote_;

    public ATermination11Termination1p()
    {
    }

    public ATermination11Termination1p(
        TEnds _ends_,
        TWith _with_,
        TQuote _quote_)
    {
        setEnds(_ends_);

        setWith(_with_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new ATermination11Termination1p(
            (TEnds) cloneNode(_ends_),
            (TWith) cloneNode(_with_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATermination11Termination1p(this);
    }

    public TEnds getEnds()
    {
        return _ends_;
    }

    public void setEnds(TEnds node)
    {
        if(_ends_ != null)
        {
            _ends_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _ends_ = node;
    }

    public TWith getWith()
    {
        return _with_;
    }

    public void setWith(TWith node)
    {
        if(_with_ != null)
        {
            _with_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _with_ = node;
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
            + toString(_ends_)
            + toString(_with_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_ends_ == child)
        {
            _ends_ = null;
            return;
        }

        if(_with_ == child)
        {
            _with_ = null;
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
        if(_ends_ == oldChild)
        {
            setEnds((TEnds) newChild);
            return;
        }

        if(_with_ == oldChild)
        {
            setWith((TWith) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

    }
}
