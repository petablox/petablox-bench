package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AOption1Optionp extends POptionp
{
    private POption1p _option1p_;
    private PStringp _stringp_;
    private TQuote _quote_;
    private TClose _close_;
    private PLiteralsp _literalsp_;

    public AOption1Optionp()
    {
    }

    public AOption1Optionp(
        POption1p _option1p_,
        PStringp _stringp_,
        TQuote _quote_,
        TClose _close_,
        PLiteralsp _literalsp_)
    {
        setOption1p(_option1p_);

        setStringp(_stringp_);

        setQuote(_quote_);

        setClose(_close_);

        setLiteralsp(_literalsp_);

    }
    public Object clone()
    {
        return new AOption1Optionp(
            (POption1p) cloneNode(_option1p_),
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_),
            (TClose) cloneNode(_close_),
            (PLiteralsp) cloneNode(_literalsp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAOption1Optionp(this);
    }

    public POption1p getOption1p()
    {
        return _option1p_;
    }

    public void setOption1p(POption1p node)
    {
        if(_option1p_ != null)
        {
            _option1p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _option1p_ = node;
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

    public PLiteralsp getLiteralsp()
    {
        return _literalsp_;
    }

    public void setLiteralsp(PLiteralsp node)
    {
        if(_literalsp_ != null)
        {
            _literalsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _literalsp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_option1p_)
            + toString(_stringp_)
            + toString(_quote_)
            + toString(_close_)
            + toString(_literalsp_);
    }

    void removeChild(Node child)
    {
        if(_option1p_ == child)
        {
            _option1p_ = null;
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

        if(_literalsp_ == child)
        {
            _literalsp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_option1p_ == oldChild)
        {
            setOption1p((POption1p) newChild);
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

        if(_literalsp_ == oldChild)
        {
            setLiteralsp((PLiteralsp) newChild);
            return;
        }

    }
}
