package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AArgument2Argumentp extends PArgumentp
{
    private PArgdump _argdump_;
    private TQuote _quote_;
    private TClose _close_;

    public AArgument2Argumentp()
    {
    }

    public AArgument2Argumentp(
        PArgdump _argdump_,
        TQuote _quote_,
        TClose _close_)
    {
        setArgdump(_argdump_);

        setQuote(_quote_);

        setClose(_close_);

    }
    public Object clone()
    {
        return new AArgument2Argumentp(
            (PArgdump) cloneNode(_argdump_),
            (TQuote) cloneNode(_quote_),
            (TClose) cloneNode(_close_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAArgument2Argumentp(this);
    }

    public PArgdump getArgdump()
    {
        return _argdump_;
    }

    public void setArgdump(PArgdump node)
    {
        if(_argdump_ != null)
        {
            _argdump_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _argdump_ = node;
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
            + toString(_argdump_)
            + toString(_quote_)
            + toString(_close_);
    }

    void removeChild(Node child)
    {
        if(_argdump_ == child)
        {
            _argdump_ = null;
            return;
        }

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
        if(_argdump_ == oldChild)
        {
            setArgdump((PArgdump) newChild);
            return;
        }

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
