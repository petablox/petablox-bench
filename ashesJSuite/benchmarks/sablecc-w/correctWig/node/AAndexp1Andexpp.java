package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AAndexp1Andexpp extends PAndexpp
{
    private PEqexpp _eqexpp_;

    public AAndexp1Andexpp()
    {
    }

    public AAndexp1Andexpp(
        PEqexpp _eqexpp_)
    {
        setEqexpp(_eqexpp_);

    }
    public Object clone()
    {
        return new AAndexp1Andexpp(
            (PEqexpp) cloneNode(_eqexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAndexp1Andexpp(this);
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
            + toString(_eqexpp_);
    }

    void removeChild(Node child)
    {
        if(_eqexpp_ == child)
        {
            _eqexpp_ = null;
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

    }
}
