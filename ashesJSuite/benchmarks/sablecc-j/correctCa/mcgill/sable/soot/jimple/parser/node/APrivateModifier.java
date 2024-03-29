package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class APrivateModifier extends PModifier
{
    private TPrivate _private_;

    public APrivateModifier()
    {
    }

    public APrivateModifier(
        TPrivate _private_)
    {
        setPrivate(_private_);

    }
    public Object clone()
    {
        return new APrivateModifier(
            (TPrivate) cloneNode(_private_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAPrivateModifier(this);
    }

    public TPrivate getPrivate()
    {
        return _private_;
    }

    public void setPrivate(TPrivate node)
    {
        if(_private_ != null)
        {
            _private_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _private_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_private_);
    }

    void removeChild(Node child)
    {
        if(_private_ == child)
        {
            _private_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_private_ == oldChild)
        {
            setPrivate((TPrivate) newChild);
            return;
        }

    }
}
