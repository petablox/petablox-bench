package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class ANegUnop extends PUnop
{
    private TNeg _neg_;

    public ANegUnop()
    {
    }

    public ANegUnop(
        TNeg _neg_)
    {
        setNeg(_neg_);

    }
    public Object clone()
    {
        return new ANegUnop(
            (TNeg) cloneNode(_neg_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANegUnop(this);
    }

    public TNeg getNeg()
    {
        return _neg_;
    }

    public void setNeg(TNeg node)
    {
        if(_neg_ != null)
        {
            _neg_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _neg_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_neg_);
    }

    void removeChild(Node child)
    {
        if(_neg_ == child)
        {
            _neg_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_neg_ == oldChild)
        {
            setNeg((TNeg) newChild);
            return;
        }

    }
}
