package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AItems1Itemsp extends PItemsp
{
    private PItemp _itemp_;

    public AItems1Itemsp()
    {
    }

    public AItems1Itemsp(
        PItemp _itemp_)
    {
        setItemp(_itemp_);

    }
    public Object clone()
    {
        return new AItems1Itemsp(
            (PItemp) cloneNode(_itemp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAItems1Itemsp(this);
    }

    public PItemp getItemp()
    {
        return _itemp_;
    }

    public void setItemp(PItemp node)
    {
        if(_itemp_ != null)
        {
            _itemp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _itemp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_itemp_);
    }

    void removeChild(Node child)
    {
        if(_itemp_ == child)
        {
            _itemp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_itemp_ == oldChild)
        {
            setItemp((PItemp) newChild);
            return;
        }

    }
}
