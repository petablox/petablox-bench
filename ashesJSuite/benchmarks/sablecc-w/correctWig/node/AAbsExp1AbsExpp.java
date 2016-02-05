package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AAbsExp1AbsExpp extends PAbsExpp
{
    private TAbs _abs_;
    private PExpp _expp_;

    public AAbsExp1AbsExpp()
    {
    }

    public AAbsExp1AbsExpp(
        TAbs _abs_,
        PExpp _expp_)
    {
        setAbs(_abs_);

        setExpp(_expp_);

    }
    public Object clone()
    {
        return new AAbsExp1AbsExpp(
            (TAbs) cloneNode(_abs_),
            (PExpp) cloneNode(_expp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAbsExp1AbsExpp(this);
    }

    public TAbs getAbs()
    {
        return _abs_;
    }

    public void setAbs(TAbs node)
    {
        if(_abs_ != null)
        {
            _abs_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _abs_ = node;
    }

    public PExpp getExpp()
    {
        return _expp_;
    }

    public void setExpp(PExpp node)
    {
        if(_expp_ != null)
        {
            _expp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _expp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_abs_)
            + toString(_expp_);
    }

    void removeChild(Node child)
    {
        if(_abs_ == child)
        {
            _abs_ = null;
            return;
        }

        if(_expp_ == child)
        {
            _expp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_abs_ == oldChild)
        {
            setAbs((TAbs) newChild);
            return;
        }

        if(_expp_ == oldChild)
        {
            setExpp((PExpp) newChild);
            return;
        }

    }
}
