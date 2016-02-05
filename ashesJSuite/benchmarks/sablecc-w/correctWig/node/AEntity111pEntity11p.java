package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity111pEntity11p extends PEntity11p
{
    private TA _a_;
    private THref _href_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;

    public AEntity111pEntity11p()
    {
    }

    public AEntity111pEntity11p(
        TA _a_,
        THref _href_,
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_)
    {
        setA(_a_);

        setHref(_href_);

        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity111pEntity11p(
            (TA) cloneNode(_a_),
            (THref) cloneNode(_href_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity111pEntity11p(this);
    }

    public TA getA()
    {
        return _a_;
    }

    public void setA(TA node)
    {
        if(_a_ != null)
        {
            _a_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _a_ = node;
    }

    public THref getHref()
    {
        return _href_;
    }

    public void setHref(THref node)
    {
        if(_href_ != null)
        {
            _href_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _href_ = node;
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
            + toString(_a_)
            + toString(_href_)
            + toString(_assignNormaldoc_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_a_ == child)
        {
            _a_ = null;
            return;
        }

        if(_href_ == child)
        {
            _href_ = null;
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
        if(_a_ == oldChild)
        {
            setA((TA) newChild);
            return;
        }

        if(_href_ == oldChild)
        {
            setHref((THref) newChild);
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
