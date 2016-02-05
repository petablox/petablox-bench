package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AOption11Option1p extends POption1p
{
    private POptionp _optionp_;
    private TValue _value_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;

    public AOption11Option1p()
    {
    }

    public AOption11Option1p(
        POptionp _optionp_,
        TValue _value_,
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_)
    {
        setOptionp(_optionp_);

        setValue(_value_);

        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AOption11Option1p(
            (POptionp) cloneNode(_optionp_),
            (TValue) cloneNode(_value_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAOption11Option1p(this);
    }

    public POptionp getOptionp()
    {
        return _optionp_;
    }

    public void setOptionp(POptionp node)
    {
        if(_optionp_ != null)
        {
            _optionp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _optionp_ = node;
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
            + toString(_optionp_)
            + toString(_value_)
            + toString(_assignNormaldoc_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_optionp_ == child)
        {
            _optionp_ = null;
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

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_optionp_ == oldChild)
        {
            setOptionp((POptionp) newChild);
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

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

    }
}
