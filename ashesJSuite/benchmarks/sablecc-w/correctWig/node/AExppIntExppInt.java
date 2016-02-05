package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AExppIntExppInt extends PExppInt
{
    private POrexpp _orexpp_;
    private TInterval _interval_;

    public AExppIntExppInt()
    {
    }

    public AExppIntExppInt(
        POrexpp _orexpp_,
        TInterval _interval_)
    {
        setOrexpp(_orexpp_);

        setInterval(_interval_);

    }
    public Object clone()
    {
        return new AExppIntExppInt(
            (POrexpp) cloneNode(_orexpp_),
            (TInterval) cloneNode(_interval_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAExppIntExppInt(this);
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

    public TInterval getInterval()
    {
        return _interval_;
    }

    public void setInterval(TInterval node)
    {
        if(_interval_ != null)
        {
            _interval_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _interval_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_orexpp_)
            + toString(_interval_);
    }

    void removeChild(Node child)
    {
        if(_orexpp_ == child)
        {
            _orexpp_ = null;
            return;
        }

        if(_interval_ == child)
        {
            _interval_ = null;
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

        if(_interval_ == oldChild)
        {
            setInterval((TInterval) newChild);
            return;
        }

    }
}
