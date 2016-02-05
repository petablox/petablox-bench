package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AUnaryexpnm2Unaryexpnmp extends PUnaryexpnmp
{
    private TNot _not_;
    private PUnaryexpp _unaryexpp_;

    public AUnaryexpnm2Unaryexpnmp()
    {
    }

    public AUnaryexpnm2Unaryexpnmp(
        TNot _not_,
        PUnaryexpp _unaryexpp_)
    {
        setNot(_not_);

        setUnaryexpp(_unaryexpp_);

    }
    public Object clone()
    {
        return new AUnaryexpnm2Unaryexpnmp(
            (TNot) cloneNode(_not_),
            (PUnaryexpp) cloneNode(_unaryexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnaryexpnm2Unaryexpnmp(this);
    }

    public TNot getNot()
    {
        return _not_;
    }

    public void setNot(TNot node)
    {
        if(_not_ != null)
        {
            _not_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _not_ = node;
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
            + toString(_not_)
            + toString(_unaryexpp_);
    }

    void removeChild(Node child)
    {
        if(_not_ == child)
        {
            _not_ = null;
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
        if(_not_ == oldChild)
        {
            setNot((TNot) newChild);
            return;
        }

        if(_unaryexpp_ == oldChild)
        {
            setUnaryexpp((PUnaryexpp) newChild);
            return;
        }

    }
}
