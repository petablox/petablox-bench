package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1831pEntity183p extends PEntity183p
{
    private TCode _code_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;

    public AEntity1831pEntity183p()
    {
    }

    public AEntity1831pEntity183p(
        TCode _code_,
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_)
    {
        setCode(_code_);

        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity1831pEntity183p(
            (TCode) cloneNode(_code_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1831pEntity183p(this);
    }

    public TCode getCode()
    {
        return _code_;
    }

    public void setCode(TCode node)
    {
        if(_code_ != null)
        {
            _code_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _code_ = node;
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
            + toString(_code_)
            + toString(_assignNormaldoc_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_code_ == child)
        {
            _code_ = null;
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
        if(_code_ == oldChild)
        {
            setCode((TCode) newChild);
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
