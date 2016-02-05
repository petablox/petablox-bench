package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AIntinits1Intinitsp extends PIntinitsp
{
    private TEqualSes _equalSes_;
    private TNumber _number_;

    public AIntinits1Intinitsp()
    {
    }

    public AIntinits1Intinitsp(
        TEqualSes _equalSes_,
        TNumber _number_)
    {
        setEqualSes(_equalSes_);

        setNumber(_number_);

    }
    public Object clone()
    {
        return new AIntinits1Intinitsp(
            (TEqualSes) cloneNode(_equalSes_),
            (TNumber) cloneNode(_number_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAIntinits1Intinitsp(this);
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

    public TNumber getNumber()
    {
        return _number_;
    }

    public void setNumber(TNumber node)
    {
        if(_number_ != null)
        {
            _number_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _number_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_equalSes_)
            + toString(_number_);
    }

    void removeChild(Node child)
    {
        if(_equalSes_ == child)
        {
            _equalSes_ = null;
            return;
        }

        if(_number_ == child)
        {
            _number_ = null;
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

        if(_number_ == oldChild)
        {
            setNumber((TNumber) newChild);
            return;
        }

    }
}
