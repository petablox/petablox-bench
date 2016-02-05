package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AMultexp4Multexpp extends PMultexpp
{
    private PMultexpp _multexpp_;
    private TModulo _modulo_;
    private PUnaryexpp _unaryexpp_;

    public AMultexp4Multexpp()
    {
    }

    public AMultexp4Multexpp(
        PMultexpp _multexpp_,
        TModulo _modulo_,
        PUnaryexpp _unaryexpp_)
    {
        setMultexpp(_multexpp_);

        setModulo(_modulo_);

        setUnaryexpp(_unaryexpp_);

    }
    public Object clone()
    {
        return new AMultexp4Multexpp(
            (PMultexpp) cloneNode(_multexpp_),
            (TModulo) cloneNode(_modulo_),
            (PUnaryexpp) cloneNode(_unaryexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAMultexp4Multexpp(this);
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

    public TModulo getModulo()
    {
        return _modulo_;
    }

    public void setModulo(TModulo node)
    {
        if(_modulo_ != null)
        {
            _modulo_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _modulo_ = node;
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
            + toString(_modulo_)
            + toString(_unaryexpp_);
    }

    void removeChild(Node child)
    {
        if(_multexpp_ == child)
        {
            _multexpp_ = null;
            return;
        }

        if(_modulo_ == child)
        {
            _modulo_ = null;
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

        if(_modulo_ == oldChild)
        {
            setModulo((TModulo) newChild);
            return;
        }

        if(_unaryexpp_ == oldChild)
        {
            setUnaryexpp((PUnaryexpp) newChild);
            return;
        }

    }
}
