package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity10Entityp extends PEntityp
{
    private PEntity10p _entity10p_;
    private PStringp _stringp_;
    private TQuote _quote_;
    private TClose _close_;

    public AEntity10Entityp()
    {
    }

    public AEntity10Entityp(
        PEntity10p _entity10p_,
        PStringp _stringp_,
        TQuote _quote_,
        TClose _close_)
    {
        setEntity10p(_entity10p_);

        setStringp(_stringp_);

        setQuote(_quote_);

        setClose(_close_);

    }
    public Object clone()
    {
        return new AEntity10Entityp(
            (PEntity10p) cloneNode(_entity10p_),
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_),
            (TClose) cloneNode(_close_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity10Entityp(this);
    }

    public PEntity10p getEntity10p()
    {
        return _entity10p_;
    }

    public void setEntity10p(PEntity10p node)
    {
        if(_entity10p_ != null)
        {
            _entity10p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity10p_ = node;
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
            + toString(_entity10p_)
            + toString(_stringp_)
            + toString(_quote_)
            + toString(_close_);
    }

    void removeChild(Node child)
    {
        if(_entity10p_ == child)
        {
            _entity10p_ = null;
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

        if(_close_ == child)
        {
            _close_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entity10p_ == oldChild)
        {
            setEntity10p((PEntity10p) newChild);
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

        if(_close_ == oldChild)
        {
            setClose((TClose) newChild);
            return;
        }

    }
}
