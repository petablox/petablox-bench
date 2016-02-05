package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ARows1Rowsp extends PRowsp
{
    private PRowp _rowp_;

    public ARows1Rowsp()
    {
    }

    public ARows1Rowsp(
        PRowp _rowp_)
    {
        setRowp(_rowp_);

    }
    public Object clone()
    {
        return new ARows1Rowsp(
            (PRowp) cloneNode(_rowp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseARows1Rowsp(this);
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
            + toString(_rowp_);
    }

    void removeChild(Node child)
    {
        if(_rowp_ == child)
        {
            _rowp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_rowp_ == oldChild)
        {
            setRowp((PRowp) newChild);
            return;
        }

    }
}
