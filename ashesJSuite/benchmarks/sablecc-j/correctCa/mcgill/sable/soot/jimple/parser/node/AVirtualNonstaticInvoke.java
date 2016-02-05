package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AVirtualNonstaticInvoke extends PNonstaticInvoke
{
    private TVirtualinvoke _virtualinvoke_;

    public AVirtualNonstaticInvoke()
    {
    }

    public AVirtualNonstaticInvoke(
        TVirtualinvoke _virtualinvoke_)
    {
        setVirtualinvoke(_virtualinvoke_);

    }
    public Object clone()
    {
        return new AVirtualNonstaticInvoke(
            (TVirtualinvoke) cloneNode(_virtualinvoke_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAVirtualNonstaticInvoke(this);
    }

    public TVirtualinvoke getVirtualinvoke()
    {
        return _virtualinvoke_;
    }

    public void setVirtualinvoke(TVirtualinvoke node)
    {
        if(_virtualinvoke_ != null)
        {
            _virtualinvoke_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _virtualinvoke_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_virtualinvoke_);
    }

    void removeChild(Node child)
    {
        if(_virtualinvoke_ == child)
        {
            _virtualinvoke_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_virtualinvoke_ == oldChild)
        {
            setVirtualinvoke((TVirtualinvoke) newChild);
            return;
        }

    }
}