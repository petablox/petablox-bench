package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AAddexp2Addexpp extends PAddexpp
{
    private PAddexpp _addexpp_;
    private TPlus _plus_;
    private PMultexpp _multexpp_;

    public AAddexp2Addexpp()
    {
    }

    public AAddexp2Addexpp(
        PAddexpp _addexpp_,
        TPlus _plus_,
        PMultexpp _multexpp_)
    {
        setAddexpp(_addexpp_);

        setPlus(_plus_);

        setMultexpp(_multexpp_);

    }
    public Object clone()
    {
        return new AAddexp2Addexpp(
            (PAddexpp) cloneNode(_addexpp_),
            (TPlus) cloneNode(_plus_),
            (PMultexpp) cloneNode(_multexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAddexp2Addexpp(this);
    }

    public PAddexpp getAddexpp()
    {
        return _addexpp_;
    }

    public void setAddexpp(PAddexpp node)
    {
        if(_addexpp_ != null)
        {
            _addexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _addexpp_ = node;
    }

    public TPlus getPlus()
    {
        return _plus_;
    }

    public void setPlus(TPlus node)
    {
        if(_plus_ != null)
        {
            _plus_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _plus_ = node;
    }

    public PMultexpp getMultexpp()
    {
        return _multexpp_;
    }

    public void setMultexpp(PMultexpp node)
    {
        if(_multexpp_ != null)
        {
            _multexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _multexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_addexpp_)
            + toString(_plus_)
            + toString(_multexpp_);
    }

    void removeChild(Node child)
    {
        if(_addexpp_ == child)
        {
            _addexpp_ = null;
            return;
        }

        if(_plus_ == child)
        {
            _plus_ = null;
            return;
        }

        if(_multexpp_ == child)
        {
            _multexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_addexpp_ == oldChild)
        {
            setAddexpp((PAddexpp) newChild);
            return;
        }

        if(_plus_ == oldChild)
        {
            setPlus((TPlus) newChild);
            return;
        }

        if(_multexpp_ == oldChild)
        {
            setMultexpp((PMultexpp) newChild);
            return;
        }

    }
}
