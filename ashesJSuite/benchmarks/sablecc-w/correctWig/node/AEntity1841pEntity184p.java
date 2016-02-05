package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1841pEntity184p extends PEntity184p
{
    private PStringp _stringp_;
    private TQuote _quote_;
    private TWidth _width_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TNumber _number_;

    public AEntity1841pEntity184p()
    {
    }

    public AEntity1841pEntity184p(
        PStringp _stringp_,
        TQuote _quote_,
        TWidth _width_,
        TAssignNormaldoc _assignNormaldoc_,
        TNumber _number_)
    {
        setStringp(_stringp_);

        setQuote(_quote_);

        setWidth(_width_);

        setAssignNormaldoc(_assignNormaldoc_);

        setNumber(_number_);

    }
    public Object clone()
    {
        return new AEntity1841pEntity184p(
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_),
            (TWidth) cloneNode(_width_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TNumber) cloneNode(_number_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1841pEntity184p(this);
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

    public TWidth getWidth()
    {
        return _width_;
    }

    public void setWidth(TWidth node)
    {
        if(_width_ != null)
        {
            _width_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _width_ = node;
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

    public TNumber getNumber()
    {
        return _number_;
    }

    public void setNumber(TNumber node)
    {
        if(_number_ != null)
        {
            _number_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _number_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_stringp_)
            + toString(_quote_)
            + toString(_width_)
            + toString(_assignNormaldoc_)
            + toString(_number_);
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

        if(_width_ == child)
        {
            _width_ = null;
            return;
        }

        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

        if(_number_ == child)
        {
            _number_ = null;
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

        if(_width_ == oldChild)
        {
            setWidth((TWidth) newChild);
            return;
        }

        if(_assignNormaldoc_ == oldChild)
        {
            setAssignNormaldoc((TAssignNormaldoc) newChild);
            return;
        }

        if(_number_ == oldChild)
        {
            setNumber((TNumber) newChild);
            return;
        }

    }
}
