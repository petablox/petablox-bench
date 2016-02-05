package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEqexp2Eqexpp extends PEqexpp
{
    private PEqexpp _eqexpp_;
    private TEqualSes _equalSes_;
    private PRelexpp _relexpp_;

    public AEqexp2Eqexpp()
    {
    }

    public AEqexp2Eqexpp(
        PEqexpp _eqexpp_,
        TEqualSes _equalSes_,
        PRelexpp _relexpp_)
    {
        setEqexpp(_eqexpp_);

        setEqualSes(_equalSes_);

        setRelexpp(_relexpp_);

    }
    public Object clone()
    {
        return new AEqexp2Eqexpp(
            (PEqexpp) cloneNode(_eqexpp_),
            (TEqualSes) cloneNode(_equalSes_),
            (PRelexpp) cloneNode(_relexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEqexp2Eqexpp(this);
    }

    public PEqexpp getEqexpp()
    {
        return _eqexpp_;
    }

    public void setEqexpp(PEqexpp node)
    {
        if(_eqexpp_ != null)
        {
            _eqexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _eqexpp_ = node;
    }

    public TEqualSes getEqualSes()
    {
        return _equalSes_;
    }

    public void setEqualSes(TEqualSes node)
    {
        if(_equalSes_ != null)
        {
            _equalSes_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _equalSes_ = node;
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
            + toString(_eqexpp_)
            + toString(_equalSes_)
            + toString(_relexpp_);
    }

    void removeChild(Node child)
    {
        if(_eqexpp_ == child)
        {
            _eqexpp_ = null;
            return;
        }

        if(_equalSes_ == child)
        {
            _equalSes_ = null;
            return;
        }

        if(_relexpp_ == child)
        {
            _relexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_eqexpp_ == oldChild)
        {
            setEqexpp((PEqexpp) newChild);
            return;
        }

        if(_equalSes_ == oldChild)
        {
            setEqualSes((TEqualSes) newChild);
            return;
        }

        if(_relexpp_ == oldChild)
        {
            setRelexpp((PRelexpp) newChild);
            return;
        }

    }
}
