package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AAddexp1Addexpp extends PAddexpp
{
    private PMultexpp _multexpp_;

    public AAddexp1Addexpp()
    {
    }

    public AAddexp1Addexpp(
        PMultexpp _multexpp_)
    {
        setMultexpp(_multexpp_);

    }
    public Object clone()
    {
        return new AAddexp1Addexpp(
            (PMultexpp) cloneNode(_multexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAddexp1Addexpp(this);
    }

    public PMultexpp getMultexpp()
    {
        return _multexpp_;
    }

    public void setMultexpp(PMultexpp node)
    {
        if(_multexpp_ != null)
        {
            _multexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _multexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_multexpp_);
    }

    void removeChild(Node child)
    {
        if(_multexpp_ == child)
        {
            _multexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_multexpp_ == oldChild)
        {
            setMultexpp((PMultexpp) newChild);
            return;
        }

    }
}
