package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AMultexp3Multexpp extends PMultexpp
{
    private PMultexpp _multexpp_;
    private TDivide _divide_;
    private PUnaryexpp _unaryexpp_;

    public AMultexp3Multexpp()
    {
    }

    public AMultexp3Multexpp(
        PMultexpp _multexpp_,
        TDivide _divide_,
        PUnaryexpp _unaryexpp_)
    {
        setMultexpp(_multexpp_);

        setDivide(_divide_);

        setUnaryexpp(_unaryexpp_);

    }
    public Object clone()
    {
        return new AMultexp3Multexpp(
            (PMultexpp) cloneNode(_multexpp_),
            (TDivide) cloneNode(_divide_),
            (PUnaryexpp) cloneNode(_unaryexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAMultexp3Multexpp(this);
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

    public TDivide getDivide()
    {
        return _divide_;
    }

    public void setDivide(TDivide node)
    {
        if(_divide_ != null)
        {
            _divide_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _divide_ = node;
    }

    public PUnaryexpp getUnaryexpp()
    {
        return _unaryexpp_;
    }

    public void setUnaryexpp(PUnaryexpp node)
    {
        if(_unaryexpp_ != null)
        {
            _unaryexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _unaryexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_multexpp_)
            + toString(_divide_)
            + toString(_unaryexpp_);
    }

    void removeChild(Node child)
    {
        if(_multexpp_ == child)
        {
            _multexpp_ = null;
            return;
        }

        if(_divide_ == child)
        {
            _divide_ = null;
            return;
        }

        if(_unaryexpp_ == child)
        {
            _unaryexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_multexpp_ == oldChild)
        {
            setMultexpp((PMultexpp) newChild);
            return;
        }

        if(_divide_ == oldChild)
        {
            setDivide((TDivide) newChild);
            return;
        }

        if(_unaryexpp_ == oldChild)
        {
            setUnaryexpp((PUnaryexpp) newChild);
            return;
        }

    }
}
