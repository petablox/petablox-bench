package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity7Entityp extends PEntityp
{
    private TBr _br_;

    public AEntity7Entityp()
    {
    }

    public AEntity7Entityp(
        TBr _br_)
    {
        setBr(_br_);

    }
    public Object clone()
    {
        return new AEntity7Entityp(
            (TBr) cloneNode(_br_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity7Entityp(this);
    }

    public TBr getBr()
    {
        return _br_;
    }

    public void setBr(TBr node)
    {
        if(_br_ != null)
        {
            _br_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _br_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_br_);
    }

    void removeChild(Node child)
    {
        if(_br_ == child)
        {
            _br_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_br_ == oldChild)
        {
            setBr((TBr) newChild);
            return;
        }

    }
}
