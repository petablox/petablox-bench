package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AAddexp4Addexpp extends PAddexpp
{
    private PAddexpp _addexpp_;
    private TAutoInc _autoInc_;
    private PMultexpp _multexpp_;

    public AAddexp4Addexpp()
    {
    }

    public AAddexp4Addexpp(
        PAddexpp _addexpp_,
        TAutoInc _autoInc_,
        PMultexpp _multexpp_)
    {
        setAddexpp(_addexpp_);

        setAutoInc(_autoInc_);

        setMultexpp(_multexpp_);

    }
    public Object clone()
    {
        return new AAddexp4Addexpp(
            (PAddexpp) cloneNode(_addexpp_),
            (TAutoInc) cloneNode(_autoInc_),
            (PMultexpp) cloneNode(_multexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAddexp4Addexpp(this);
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

    public TAutoInc getAutoInc()
    {
        return _autoInc_;
    }

    public void setAutoInc(TAutoInc node)
    {
        if(_autoInc_ != null)
        {
            _autoInc_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _autoInc_ = node;
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
            + toString(_autoInc_)
            + toString(_multexpp_);
    }

    void removeChild(Node child)
    {
        if(_addexpp_ == child)
        {
            _addexpp_ = null;
            return;
        }

        if(_autoInc_ == child)
        {
            _autoInc_ = null;
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

        if(_autoInc_ == oldChild)
        {
            setAutoInc((TAutoInc) newChild);
            return;
        }

        if(_multexpp_ == oldChild)
        {
            setMultexpp((PMultexpp) newChild);
            return;
        }

    }
}
