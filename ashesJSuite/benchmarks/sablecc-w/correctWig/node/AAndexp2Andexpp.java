package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AAndexp2Andexpp extends PAndexpp
{
    private PAndexpp _andexpp_;
    private TAnd _and_;
    private PEqexpp _eqexpp_;

    public AAndexp2Andexpp()
    {
    }

    public AAndexp2Andexpp(
        PAndexpp _andexpp_,
        TAnd _and_,
        PEqexpp _eqexpp_)
    {
        setAndexpp(_andexpp_);

        setAnd(_and_);

        setEqexpp(_eqexpp_);

    }
    public Object clone()
    {
        return new AAndexp2Andexpp(
            (PAndexpp) cloneNode(_andexpp_),
            (TAnd) cloneNode(_and_),
            (PEqexpp) cloneNode(_eqexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAndexp2Andexpp(this);
    }

    public PAndexpp getAndexpp()
    {
        return _andexpp_;
    }

    public void setAndexpp(PAndexpp node)
    {
        if(_andexpp_ != null)
        {
            _andexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _andexpp_ = node;
    }

    public TAnd getAnd()
    {
        return _and_;
    }

    public void setAnd(TAnd node)
    {
        if(_and_ != null)
        {
            _and_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _and_ = node;
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

    public String toString()
    {
        return ""
            + toString(_andexpp_)
            + toString(_and_)
            + toString(_eqexpp_);
    }

    void removeChild(Node child)
    {
        if(_andexpp_ == child)
        {
            _andexpp_ = null;
            return;
        }

        if(_and_ == child)
        {
            _and_ = null;
            return;
        }

        if(_eqexpp_ == child)
        {
            _eqexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_andexpp_ == oldChild)
        {
            setAndexpp((PAndexpp) newChild);
            return;
        }

        if(_and_ == oldChild)
        {
            setAnd((TAnd) newChild);
            return;
        }

        if(_eqexpp_ == oldChild)
        {
            setEqexpp((PEqexpp) newChild);
            return;
        }

    }
}
