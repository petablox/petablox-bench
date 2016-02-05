package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1711pEntity171p extends PEntity171p
{
    private TQuote _quote_;
    private TClose _close_;

    public AEntity1711pEntity171p()
    {
    }

    public AEntity1711pEntity171p(
        TQuote _quote_,
        TClose _close_)
    {
        setQuote(_quote_);

        setClose(_close_);

    }
    public Object clone()
    {
        return new AEntity1711pEntity171p(
            (TQuote) cloneNode(_quote_),
            (TClose) cloneNode(_close_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1711pEntity171p(this);
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

    public TClose getClose()
    {
        return _close_;
    }

    public void setClose(TClose node)
    {
        if(_close_ != null)
        {
            _close_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _close_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_quote_)
            + toString(_close_);
    }

    void removeChild(Node child)
    {
        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

        if(_close_ == child)
        {
            _close_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

        if(_close_ == oldChild)
        {
            setClose((TClose) newChild);
            return;
        }

    }
}
