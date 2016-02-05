package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALiterals1Literalsp extends PLiteralsp
{
    private PLiteralp _literalp_;

    public ALiterals1Literalsp()
    {
    }

    public ALiterals1Literalsp(
        PLiteralp _literalp_)
    {
        setLiteralp(_literalp_);

    }
    public Object clone()
    {
        return new ALiterals1Literalsp(
            (PLiteralp) cloneNode(_literalp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALiterals1Literalsp(this);
    }

    public PLiteralp getLiteralp()
    {
        return _literalp_;
    }

    public void setLiteralp(PLiteralp node)
    {
        if(_literalp_ != null)
        {
            _literalp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _literalp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_literalp_);
    }

    void removeChild(Node child)
    {
        if(_literalp_ == child)
        {
            _literalp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_literalp_ == oldChild)
        {
            setLiteralp((PLiteralp) newChild);
            return;
        }

    }
}
