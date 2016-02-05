package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AOrexp1Orexpp extends POrexpp
{
    private PAndexpp _andexpp_;

    public AOrexp1Orexpp()
    {
    }

    public AOrexp1Orexpp(
        PAndexpp _andexpp_)
    {
        setAndexpp(_andexpp_);

    }
    public Object clone()
    {
        return new AOrexp1Orexpp(
            (PAndexpp) cloneNode(_andexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAOrexp1Orexpp(this);
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
            + toString(_andexpp_);
    }

    void removeChild(Node child)
    {
        if(_andexpp_ == child)
        {
            _andexpp_ = null;
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

    }
}
