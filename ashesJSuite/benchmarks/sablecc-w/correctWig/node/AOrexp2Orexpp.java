package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AOrexp2Orexpp extends POrexpp
{
    private POrexpp _orexpp_;
    private TOr _or_;
    private PAndexpp _andexpp_;

    public AOrexp2Orexpp()
    {
    }

    public AOrexp2Orexpp(
        POrexpp _orexpp_,
        TOr _or_,
        PAndexpp _andexpp_)
    {
        setOrexpp(_orexpp_);

        setOr(_or_);

        setAndexpp(_andexpp_);

    }
    public Object clone()
    {
        return new AOrexp2Orexpp(
            (POrexpp) cloneNode(_orexpp_),
            (TOr) cloneNode(_or_),
            (PAndexpp) cloneNode(_andexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAOrexp2Orexpp(this);
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

    public TOr getOr()
    {
        return _or_;
    }

    public void setOr(TOr node)
    {
        if(_or_ != null)
        {
            _or_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _or_ = node;
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

    public String toString()
    {
        return ""
            + toString(_orexpp_)
            + toString(_or_)
            + toString(_andexpp_);
    }

    void removeChild(Node child)
    {
        if(_orexpp_ == child)
        {
            _orexpp_ = null;
            return;
        }

        if(_or_ == child)
        {
            _or_ = null;
            return;
        }

        if(_andexpp_ == child)
        {
            _andexpp_ = null;
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

        if(_or_ == oldChild)
        {
            setOr((TOr) newChild);
            return;
        }

        if(_andexpp_ == oldChild)
        {
            setAndexpp((PAndexpp) newChild);
            return;
        }

    }
}
