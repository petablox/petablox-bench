package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity6Entityp extends PEntityp
{
    private TPara _para_;

    public AEntity6Entityp()
    {
    }

    public AEntity6Entityp(
        TPara _para_)
    {
        setPara(_para_);

    }
    public Object clone()
    {
        return new AEntity6Entityp(
            (TPara) cloneNode(_para_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity6Entityp(this);
    }

    public TPara getPara()
    {
        return _para_;
    }

    public void setPara(TPara node)
    {
        if(_para_ != null)
        {
            _para_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _para_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_para_);
    }

    void removeChild(Node child)
    {
        if(_para_ == child)
        {
            _para_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_para_ == oldChild)
        {
            setPara((TPara) newChild);
            return;
        }

    }
}
