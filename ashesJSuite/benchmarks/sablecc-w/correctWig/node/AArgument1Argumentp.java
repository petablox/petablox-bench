package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AArgument1Argumentp extends PArgumentp
{
    private PArgdump _argdump_;
    private TQuote _quote_;
    private TValue _value_;
    private TAssignNormaldoc _assignNormaldoc_;
    private PStringp _stringp_;
    private TClose _close_;

    public AArgument1Argumentp()
    {
    }

    public AArgument1Argumentp(
        PArgdump _argdump_,
        TQuote _quote_,
        TValue _value_,
        TAssignNormaldoc _assignNormaldoc_,
        PStringp _stringp_,
        TClose _close_)
    {
        setArgdump(_argdump_);

        setQuote(_quote_);

        setValue(_value_);

        setAssignNormaldoc(_assignNormaldoc_);

        setStringp(_stringp_);

        setClose(_close_);

    }
    public Object clone()
    {
        return new AArgument1Argumentp(
            (PArgdump) cloneNode(_argdump_),
            (TQuote) cloneNode(_quote_),
            (TValue) cloneNode(_value_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (PStringp) cloneNode(_stringp_),
            (TClose) cloneNode(_close_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAArgument1Argumentp(this);
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

    public TValue getValue()
    {
        return _value_;
    }

    public void setValue(TValue node)
    {
        if(_value_ != null)
        {
            _value_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _value_ = node;
    }

    public TAssignNormaldoc getAssignNormaldoc()
    {
        return _assignNormaldoc_;
    }

    public void setAssignNormaldoc(TAssignNormaldoc node)
    {
        if(_assignNormaldoc_ != null)
        {
            _assignNormaldoc_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _assignNormaldoc_ = node;
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
            + toString(_value_)
            + toString(_assignNormaldoc_)
            + toString(_stringp_)
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

        if(_value_ == child)
        {
            _value_ = null;
            return;
        }

        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

        if(_stringp_ == child)
        {
            _stringp_ = null;
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

        if(_value_ == oldChild)
        {
            setValue((TValue) newChild);
            return;
        }

        if(_assignNormaldoc_ == oldChild)
        {
            setAssignNormaldoc((TAssignNormaldoc) newChild);
            return;
        }

        if(_stringp_ == oldChild)
        {
            setStringp((PStringp) newChild);
            return;
        }

        if(_close_ == oldChild)
        {
            setClose((TClose) newChild);
            return;
        }

    }
}
