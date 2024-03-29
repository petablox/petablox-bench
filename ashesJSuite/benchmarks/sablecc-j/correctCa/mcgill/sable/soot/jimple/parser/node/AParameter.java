package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AParameter extends PParameter
{
    private PNonvoidType _nonvoidType_;

    public AParameter()
    {
    }

    public AParameter(
        PNonvoidType _nonvoidType_)
    {
        setNonvoidType(_nonvoidType_);

    }
    public Object clone()
    {
        return new AParameter(
            (PNonvoidType) cloneNode(_nonvoidType_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAParameter(this);
    }

    public PNonvoidType getNonvoidType()
    {
        return _nonvoidType_;
    }

    public void setNonvoidType(PNonvoidType node)
    {
        if(_nonvoidType_ != null)
        {
            _nonvoidType_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _nonvoidType_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_nonvoidType_);
    }

    void removeChild(Node child)
    {
        if(_nonvoidType_ == child)
        {
            _nonvoidType_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_nonvoidType_ == oldChild)
        {
            setNonvoidType((PNonvoidType) newChild);
            return;
        }

    }
}
