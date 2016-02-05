package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity91pEntity9p extends PEntity9p
{
    private TImg _img_;
    private TSrc _src_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;

    public AEntity91pEntity9p()
    {
    }

    public AEntity91pEntity9p(
        TImg _img_,
        TSrc _src_,
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_)
    {
        setImg(_img_);

        setSrc(_src_);

        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity91pEntity9p(
            (TImg) cloneNode(_img_),
            (TSrc) cloneNode(_src_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity91pEntity9p(this);
    }

    public TImg getImg()
    {
        return _img_;
    }

    public void setImg(TImg node)
    {
        if(_img_ != null)
        {
            _img_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _img_ = node;
    }

    public TSrc getSrc()
    {
        return _src_;
    }

    public void setSrc(TSrc node)
    {
        if(_src_ != null)
        {
            _src_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _src_ = node;
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
            + toString(_img_)
            + toString(_src_)
            + toString(_assignNormaldoc_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_img_ == child)
        {
            _img_ = null;
            return;
        }

        if(_src_ == child)
        {
            _src_ = null;
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
        if(_img_ == oldChild)
        {
            setImg((TImg) newChild);
            return;
        }

        if(_src_ == oldChild)
        {
            setSrc((TSrc) newChild);
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
