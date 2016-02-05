package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AMultexp1Multexpp extends PMultexpp
{
    private PUnaryexpp _unaryexpp_;

    public AMultexp1Multexpp()
    {
    }

    public AMultexp1Multexpp(
        PUnaryexpp _unaryexpp_)
    {
        setUnaryexpp(_unaryexpp_);

    }
    public Object clone()
    {
        return new AMultexp1Multexpp(
            (PUnaryexpp) cloneNode(_unaryexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAMultexp1Multexpp(this);
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
            + toString(_unaryexpp_);
    }

    void removeChild(Node child)
    {
        if(_unaryexpp_ == child)
        {
            _unaryexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_unaryexpp_ == oldChild)
        {
            setUnaryexpp((PUnaryexpp) newChild);
            return;
        }

    }
}
