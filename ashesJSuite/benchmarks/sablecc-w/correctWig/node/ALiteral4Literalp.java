package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALiteral4Literalp extends PLiteralp
{
    private TFalse _false_;

    public ALiteral4Literalp()
    {
    }

    public ALiteral4Literalp(
        TFalse _false_)
    {
        setFalse(_false_);

    }
    public Object clone()
    {
        return new ALiteral4Literalp(
            (TFalse) cloneNode(_false_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALiteral4Literalp(this);
    }

    public TFalse getFalse()
    {
        return _false_;
    }

    public void setFalse(TFalse node)
    {
        if(_false_ != null)
        {
            _false_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _false_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_false_);
    }

    void removeChild(Node child)
    {
        if(_false_ == child)
        {
            _false_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_false_ == oldChild)
        {
            setFalse((TFalse) newChild);
            return;
        }

    }
}
