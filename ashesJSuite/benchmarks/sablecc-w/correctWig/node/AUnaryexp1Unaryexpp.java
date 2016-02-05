package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AUnaryexp1Unaryexpp extends PUnaryexpp
{
    private PUnaryexpnmp _unaryexpnmp_;

    public AUnaryexp1Unaryexpp()
    {
    }

    public AUnaryexp1Unaryexpp(
        PUnaryexpnmp _unaryexpnmp_)
    {
        setUnaryexpnmp(_unaryexpnmp_);

    }
    public Object clone()
    {
        return new AUnaryexp1Unaryexpp(
            (PUnaryexpnmp) cloneNode(_unaryexpnmp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnaryexp1Unaryexpp(this);
    }

    public PUnaryexpnmp getUnaryexpnmp()
    {
        return _unaryexpnmp_;
    }

    public void setUnaryexpnmp(PUnaryexpnmp node)
    {
        if(_unaryexpnmp_ != null)
        {
            _unaryexpnmp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _unaryexpnmp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_unaryexpnmp_);
    }

    void removeChild(Node child)
    {
        if(_unaryexpnmp_ == child)
        {
            _unaryexpnmp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_unaryexpnmp_ == oldChild)
        {
            setUnaryexpnmp((PUnaryexpnmp) newChild);
            return;
        }

    }
}
