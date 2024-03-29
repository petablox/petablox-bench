package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class ASynchronizedModifier extends PModifier
{
    private TSynchronized _synchronized_;

    public ASynchronizedModifier()
    {
    }

    public ASynchronizedModifier(
        TSynchronized _synchronized_)
    {
        setSynchronized(_synchronized_);

    }
    public Object clone()
    {
        return new ASynchronizedModifier(
            (TSynchronized) cloneNode(_synchronized_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseASynchronizedModifier(this);
    }

    public TSynchronized getSynchronized()
    {
        return _synchronized_;
    }

    public void setSynchronized(TSynchronized node)
    {
        if(_synchronized_ != null)
        {
            _synchronized_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _synchronized_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_synchronized_);
    }

    void removeChild(Node child)
    {
        if(_synchronized_ == child)
        {
            _synchronized_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_synchronized_ == oldChild)
        {
            setSynchronized((TSynchronized) newChild);
            return;
        }

    }
}
