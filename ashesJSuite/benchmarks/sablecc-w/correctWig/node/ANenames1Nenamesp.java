package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANenames1Nenamesp extends PNenamesp
{
    private PNamep _namep_;

    public ANenames1Nenamesp()
    {
    }

    public ANenames1Nenamesp(
        PNamep _namep_)
    {
        setNamep(_namep_);

    }
    public Object clone()
    {
        return new ANenames1Nenamesp(
            (PNamep) cloneNode(_namep_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANenames1Nenamesp(this);
    }

    public PNamep getNamep()
    {
        return _namep_;
    }

    public void setNamep(PNamep node)
    {
        if(_namep_ != null)
        {
            _namep_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _namep_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_namep_);
    }

    void removeChild(Node child)
    {
        if(_namep_ == child)
        {
            _namep_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_namep_ == oldChild)
        {
            setNamep((PNamep) newChild);
            return;
        }

    }
}
