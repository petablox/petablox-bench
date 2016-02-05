package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AExp1Expp extends PExpp
{
    private POrexpp _orexpp_;

    public AExp1Expp()
    {
    }

    public AExp1Expp(
        POrexpp _orexpp_)
    {
        setOrexpp(_orexpp_);

    }
    public Object clone()
    {
        return new AExp1Expp(
            (POrexpp) cloneNode(_orexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAExp1Expp(this);
    }

    public POrexpp getOrexpp()
    {
        return _orexpp_;
    }

    public void setOrexpp(POrexpp node)
    {
        if(_orexpp_ != null)
        {
            _orexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _orexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_orexpp_);
    }

    void removeChild(Node child)
    {
        if(_orexpp_ == child)
        {
            _orexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_orexpp_ == oldChild)
        {
            setOrexpp((POrexpp) newChild);
            return;
        }

    }
}
