package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANearguments2Neargumentsp extends PNeargumentsp
{
    private PNeargumentsp _neargumentsp_;
    private PArgumentp _argumentp_;

    public ANearguments2Neargumentsp()
    {
    }

    public ANearguments2Neargumentsp(
        PNeargumentsp _neargumentsp_,
        PArgumentp _argumentp_)
    {
        setNeargumentsp(_neargumentsp_);

        setArgumentp(_argumentp_);

    }
    public Object clone()
    {
        return new ANearguments2Neargumentsp(
            (PNeargumentsp) cloneNode(_neargumentsp_),
            (PArgumentp) cloneNode(_argumentp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANearguments2Neargumentsp(this);
    }

    public PNeargumentsp getNeargumentsp()
    {
        return _neargumentsp_;
    }

    public void setNeargumentsp(PNeargumentsp node)
    {
        if(_neargumentsp_ != null)
        {
            _neargumentsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _neargumentsp_ = node;
    }

    public PArgumentp getArgumentp()
    {
        return _argumentp_;
    }

    public void setArgumentp(PArgumentp node)
    {
        if(_argumentp_ != null)
        {
            _argumentp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _argumentp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_neargumentsp_)
            + toString(_argumentp_);
    }

    void removeChild(Node child)
    {
        if(_neargumentsp_ == child)
        {
            _neargumentsp_ = null;
            return;
        }

        if(_argumentp_ == child)
        {
            _argumentp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_neargumentsp_ == oldChild)
        {
            setNeargumentsp((PNeargumentsp) newChild);
            return;
        }

        if(_argumentp_ == oldChild)
        {
            setArgumentp((PArgumentp) newChild);
            return;
        }

    }
}
