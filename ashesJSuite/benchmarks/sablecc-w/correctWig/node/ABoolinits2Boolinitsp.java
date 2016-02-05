package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ABoolinits2Boolinitsp extends PBoolinitsp
{
    private TEqualSes _equalSes_;
    private TFalse _false_;

    public ABoolinits2Boolinitsp()
    {
    }

    public ABoolinits2Boolinitsp(
        TEqualSes _equalSes_,
        TFalse _false_)
    {
        setEqualSes(_equalSes_);

        setFalse(_false_);

    }
    public Object clone()
    {
        return new ABoolinits2Boolinitsp(
            (TEqualSes) cloneNode(_equalSes_),
            (TFalse) cloneNode(_false_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseABoolinits2Boolinitsp(this);
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

    public TFalse getFalse()
    {
        return _false_;
    }

    public void setFalse(TFalse node)
    {
        if(_false_ != null)
        {
            _false_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _false_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_equalSes_)
            + toString(_false_);
    }

    void removeChild(Node child)
    {
        if(_equalSes_ == child)
        {
            _equalSes_ = null;
            return;
        }

        if(_false_ == child)
        {
            _false_ = null;
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

        if(_false_ == oldChild)
        {
            setFalse((TFalse) newChild);
            return;
        }

    }
}
