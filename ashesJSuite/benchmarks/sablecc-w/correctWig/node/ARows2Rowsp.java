package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ARows2Rowsp extends PRowsp
{
    private PRowsp _rowsp_;
    private PRowp _rowp_;

    public ARows2Rowsp()
    {
    }

    public ARows2Rowsp(
        PRowsp _rowsp_,
        PRowp _rowp_)
    {
        setRowsp(_rowsp_);

        setRowp(_rowp_);

    }
    public Object clone()
    {
        return new ARows2Rowsp(
            (PRowsp) cloneNode(_rowsp_),
            (PRowp) cloneNode(_rowp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseARows2Rowsp(this);
    }

    public PRowsp getRowsp()
    {
        return _rowsp_;
    }

    public void setRowsp(PRowsp node)
    {
        if(_rowsp_ != null)
        {
            _rowsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rowsp_ = node;
    }

    public PRowp getRowp()
    {
        return _rowp_;
    }

    public void setRowp(PRowp node)
    {
        if(_rowp_ != null)
        {
            _rowp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rowp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_rowsp_)
            + toString(_rowp_);
    }

    void removeChild(Node child)
    {
        if(_rowsp_ == child)
        {
            _rowsp_ = null;
            return;
        }

        if(_rowp_ == child)
        {
            _rowp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_rowsp_ == oldChild)
        {
            setRowsp((PRowsp) newChild);
            return;
        }

        if(_rowp_ == oldChild)
        {
            setRowp((PRowp) newChild);
            return;
        }

    }
}
