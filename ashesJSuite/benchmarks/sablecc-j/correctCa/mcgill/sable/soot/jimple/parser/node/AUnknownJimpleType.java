package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AUnknownJimpleType extends PJimpleType
{
    private TUnknown _unknown_;

    public AUnknownJimpleType()
    {
    }

    public AUnknownJimpleType(
        TUnknown _unknown_)
    {
        setUnknown(_unknown_);

    }
    public Object clone()
    {
        return new AUnknownJimpleType(
            (TUnknown) cloneNode(_unknown_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnknownJimpleType(this);
    }

    public TUnknown getUnknown()
    {
        return _unknown_;
    }

    public void setUnknown(TUnknown node)
    {
        if(_unknown_ != null)
        {
            _unknown_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _unknown_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_unknown_);
    }

    void removeChild(Node child)
    {
        if(_unknown_ == child)
        {
            _unknown_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_unknown_ == oldChild)
        {
            setUnknown((TUnknown) newChild);
            return;
        }

    }
}
