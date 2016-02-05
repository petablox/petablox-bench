package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ARelexp1Relexpp extends PRelexpp
{
    private PAddexpp _addexpp_;

    public ARelexp1Relexpp()
    {
    }

    public ARelexp1Relexpp(
        PAddexpp _addexpp_)
    {
        setAddexpp(_addexpp_);

    }
    public Object clone()
    {
        return new ARelexp1Relexpp(
            (PAddexpp) cloneNode(_addexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseARelexp1Relexpp(this);
    }

    public PAddexpp getAddexpp()
    {
        return _addexpp_;
    }

    public void setAddexpp(PAddexpp node)
    {
        if(_addexpp_ != null)
        {
            _addexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _addexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_addexpp_);
    }

    void removeChild(Node child)
    {
        if(_addexpp_ == child)
        {
            _addexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_addexpp_ == oldChild)
        {
            setAddexpp((PAddexpp) newChild);
            return;
        }

    }
}
