package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1tEntityp extends PEntityp
{
    private TTrue _true_;

    public AEntity1tEntityp()
    {
    }

    public AEntity1tEntityp(
        TTrue _true_)
    {
        setTrue(_true_);

    }
    public Object clone()
    {
        return new AEntity1tEntityp(
            (TTrue) cloneNode(_true_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1tEntityp(this);
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
