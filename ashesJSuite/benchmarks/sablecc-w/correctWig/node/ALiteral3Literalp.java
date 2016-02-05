package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALiteral3Literalp extends PLiteralp
{
    private TTrue _true_;

    public ALiteral3Literalp()
    {
    }

    public ALiteral3Literalp(
        TTrue _true_)
    {
        setTrue(_true_);

    }
    public Object clone()
    {
        return new ALiteral3Literalp(
            (TTrue) cloneNode(_true_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALiteral3Literalp(this);
    }

    public TTrue getTrue()
    {
        return _true_;
    }

    public void setTrue(TTrue node)
    {
        if(_true_ != null)
        {
            _true_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _true_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_true_);
    }

    void removeChild(Node child)
    {
        if(_true_ == child)
        {
            _true_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_true_ == oldChild)
        {
            setTrue((TTrue) newChild);
            return;
        }

    }
}
