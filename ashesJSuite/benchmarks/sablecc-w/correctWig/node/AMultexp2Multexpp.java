package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AMultexp2Multexpp extends PMultexpp
{
    private PMultexpp _multexpp_;
    private TMultiply _multiply_;
    private PUnaryexpp _unaryexpp_;

    public AMultexp2Multexpp()
    {
    }

    public AMultexp2Multexpp(
        PMultexpp _multexpp_,
        TMultiply _multiply_,
        PUnaryexpp _unaryexpp_)
    {
        setMultexpp(_multexpp_);

        setMultiply(_multiply_);

        setUnaryexpp(_unaryexpp_);

    }
    public Object clone()
    {
        return new AMultexp2Multexpp(
            (PMultexpp) cloneNode(_multexpp_),
            (TMultiply) cloneNode(_multiply_),
            (PUnaryexpp) cloneNode(_unaryexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAMultexp2Multexpp(this);
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

    public TMultiply getMultiply()
    {
        return _multiply_;
    }

    public void setMultiply(TMultiply node)
    {
        if(_multiply_ != null)
        {
            _multiply_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _multiply_ = node;
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
            + toString(_multiply_)
            + toString(_unaryexpp_);
    }

    void removeChild(Node child)
    {
        if(_multexpp_ == child)
        {
            _multexpp_ = null;
            return;
        }

        if(_multiply_ == child)
        {
            _multiply_ = null;
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

        if(_multiply_ == oldChild)
        {
            setMultiply((TMultiply) newChild);
            return;
        }

        if(_unaryexpp_ == oldChild)
        {
            setUnaryexpp((PUnaryexpp) newChild);
            return;
        }

    }
}
