package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ABoolinits1Boolinitsp extends PBoolinitsp
{
    private TEqualSes _equalSes_;
    private TTrue _true_;

    public ABoolinits1Boolinitsp()
    {
    }

    public ABoolinits1Boolinitsp(
        TEqualSes _equalSes_,
        TTrue _true_)
    {
        setEqualSes(_equalSes_);

        setTrue(_true_);

    }
    public Object clone()
    {
        return new ABoolinits1Boolinitsp(
            (TEqualSes) cloneNode(_equalSes_),
            (TTrue) cloneNode(_true_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseABoolinits1Boolinitsp(this);
    }

    public TEqualSes getEqualSes()
    {
        return _equalSes_;
    }

    public void setEqualSes(TEqualSes node)
    {
        if(_equalSes_ != null)
        {
            _equalSes_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _equalSes_ = node;
    }

    public TTrue getTrue()
    {
        return _true_;
    }

    public void setTrue(TTrue node)
    {
        if(_true_ != null)
        {
            _true_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _true_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_equalSes_)
            + toString(_true_);
    }

    void removeChild(Node child)
    {
        if(_equalSes_ == child)
        {
            _equalSes_ = null;
            return;
        }

        if(_true_ == child)
        {
            _true_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_equalSes_ == oldChild)
        {
            setEqualSes((TEqualSes) newChild);
            return;
        }

        if(_true_ == oldChild)
        {
            setTrue((TTrue) newChild);
            return;
        }

    }
}
