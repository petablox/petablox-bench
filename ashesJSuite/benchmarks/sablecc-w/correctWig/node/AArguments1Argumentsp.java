package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AArguments1Argumentsp extends PArgumentsp
{
    private PNeargumentsp _neargumentsp_;

    public AArguments1Argumentsp()
    {
    }

    public AArguments1Argumentsp(
        PNeargumentsp _neargumentsp_)
    {
        setNeargumentsp(_neargumentsp_);

    }
    public Object clone()
    {
        return new AArguments1Argumentsp(
            (PNeargumentsp) cloneNode(_neargumentsp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAArguments1Argumentsp(this);
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

    public String toString()
    {
        return ""
            + toString(_neargumentsp_);
    }

    void removeChild(Node child)
    {
        if(_neargumentsp_ == child)
        {
            _neargumentsp_ = null;
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

    }
}
