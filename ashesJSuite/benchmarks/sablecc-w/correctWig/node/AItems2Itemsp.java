package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AItems2Itemsp extends PItemsp
{
    private PItemsp _itemsp_;
    private PItemp _itemp_;

    public AItems2Itemsp()
    {
    }

    public AItems2Itemsp(
        PItemsp _itemsp_,
        PItemp _itemp_)
    {
        setItemsp(_itemsp_);

        setItemp(_itemp_);

    }
    public Object clone()
    {
        return new AItems2Itemsp(
            (PItemsp) cloneNode(_itemsp_),
            (PItemp) cloneNode(_itemp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAItems2Itemsp(this);
    }

    public PItemsp getItemsp()
    {
        return _itemsp_;
    }

    public void setItemsp(PItemsp node)
    {
        if(_itemsp_ != null)
        {
            _itemsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _itemsp_ = node;
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
            + toString(_itemsp_)
            + toString(_itemp_);
    }

    void removeChild(Node child)
    {
        if(_itemsp_ == child)
        {
            _itemsp_ = null;
            return;
        }

        if(_itemp_ == child)
        {
            _itemp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_itemsp_ == oldChild)
        {
            setItemsp((PItemsp) newChild);
            return;
        }

        if(_itemp_ == oldChild)
        {
            setItemp((PItemp) newChild);
            return;
        }

    }
}
