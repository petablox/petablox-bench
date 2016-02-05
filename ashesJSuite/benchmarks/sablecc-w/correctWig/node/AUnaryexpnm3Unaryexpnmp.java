package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AUnaryexpnm3Unaryexpnmp extends PUnaryexpnmp
{
    private PAbsExpp _absExpp_;
    private TAbs _abs_;

    public AUnaryexpnm3Unaryexpnmp()
    {
    }

    public AUnaryexpnm3Unaryexpnmp(
        PAbsExpp _absExpp_,
        TAbs _abs_)
    {
        setAbsExpp(_absExpp_);

        setAbs(_abs_);

    }
    public Object clone()
    {
        return new AUnaryexpnm3Unaryexpnmp(
            (PAbsExpp) cloneNode(_absExpp_),
            (TAbs) cloneNode(_abs_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnaryexpnm3Unaryexpnmp(this);
    }

    public PAbsExpp getAbsExpp()
    {
        return _absExpp_;
    }

    public void setAbsExpp(PAbsExpp node)
    {
        if(_absExpp_ != null)
        {
            _absExpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _absExpp_ = node;
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

    public String toString()
    {
        return ""
            + toString(_absExpp_)
            + toString(_abs_);
    }

    void removeChild(Node child)
    {
        if(_absExpp_ == child)
        {
            _absExpp_ = null;
            return;
        }

        if(_abs_ == child)
        {
            _abs_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_absExpp_ == oldChild)
        {
            setAbsExpp((PAbsExpp) newChild);
            return;
        }

        if(_abs_ == oldChild)
        {
            setAbs((TAbs) newChild);
            return;
        }

    }
}
