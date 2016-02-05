package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AUnaryexp2Unaryexpp extends PUnaryexpp
{
    private TMinus _minus_;
    private PUnaryexpp _unaryexpp_;

    public AUnaryexp2Unaryexpp()
    {
    }

    public AUnaryexp2Unaryexpp(
        TMinus _minus_,
        PUnaryexpp _unaryexpp_)
    {
        setMinus(_minus_);

        setUnaryexpp(_unaryexpp_);

    }
    public Object clone()
    {
        return new AUnaryexp2Unaryexpp(
            (TMinus) cloneNode(_minus_),
            (PUnaryexpp) cloneNode(_unaryexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnaryexp2Unaryexpp(this);
    }

    public TMinus getMinus()
    {
        return _minus_;
    }

    public void setMinus(TMinus node)
    {
        if(_minus_ != null)
        {
            _minus_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _minus_ = node;
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
            + toString(_minus_)
            + toString(_unaryexpp_);
    }

    void removeChild(Node child)
    {
        if(_minus_ == child)
        {
            _minus_ = null;
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
        if(_minus_ == oldChild)
        {
            setMinus((TMinus) newChild);
            return;
        }

        if(_unaryexpp_ == oldChild)
        {
            setUnaryexpp((PUnaryexpp) newChild);
            return;
        }

    }
}
