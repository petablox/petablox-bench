package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANearguments1Neargumentsp extends PNeargumentsp
{
    private PArgumentp _argumentp_;

    public ANearguments1Neargumentsp()
    {
    }

    public ANearguments1Neargumentsp(
        PArgumentp _argumentp_)
    {
        setArgumentp(_argumentp_);

    }
    public Object clone()
    {
        return new ANearguments1Neargumentsp(
            (PArgumentp) cloneNode(_argumentp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANearguments1Neargumentsp(this);
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
            + toString(_argumentp_);
    }

    void removeChild(Node child)
    {
        if(_argumentp_ == child)
        {
            _argumentp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_argumentp_ == oldChild)
        {
            setArgumentp((PArgumentp) newChild);
            return;
        }

    }
}
