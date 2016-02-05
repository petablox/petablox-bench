package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEqexp1Eqexpp extends PEqexpp
{
    private PRelexpp _relexpp_;

    public AEqexp1Eqexpp()
    {
    }

    public AEqexp1Eqexpp(
        PRelexpp _relexpp_)
    {
        setRelexpp(_relexpp_);

    }
    public Object clone()
    {
        return new AEqexp1Eqexpp(
            (PRelexpp) cloneNode(_relexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEqexp1Eqexpp(this);
    }

    public PRelexpp getRelexpp()
    {
        return _relexpp_;
    }

    public void setRelexpp(PRelexpp node)
    {
        if(_relexpp_ != null)
        {
            _relexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _relexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_relexpp_);
    }

    void removeChild(Node child)
    {
        if(_relexpp_ == child)
        {
            _relexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_relexpp_ == oldChild)
        {
            setRelexpp((PRelexpp) newChild);
            return;
        }

    }
}
