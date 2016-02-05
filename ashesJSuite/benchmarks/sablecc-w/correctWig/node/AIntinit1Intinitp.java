package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AIntinit1Intinitp extends PIntinitp
{
    private TAssignNormaldoc _assignNormaldoc_;
    private TNumber _number_;

    public AIntinit1Intinitp()
    {
    }

    public AIntinit1Intinitp(
        TAssignNormaldoc _assignNormaldoc_,
        TNumber _number_)
    {
        setAssignNormaldoc(_assignNormaldoc_);

        setNumber(_number_);

    }
    public Object clone()
    {
        return new AIntinit1Intinitp(
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TNumber) cloneNode(_number_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAIntinit1Intinitp(this);
    }

    public TAssignNormaldoc getAssignNormaldoc()
    {
        return _assignNormaldoc_;
    }

    public void setAssignNormaldoc(TAssignNormaldoc node)
    {
        if(_assignNormaldoc_ != null)
        {
            _assignNormaldoc_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _assignNormaldoc_ = node;
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
            + toString(_assignNormaldoc_)
            + toString(_number_);
    }

    void removeChild(Node child)
    {
        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
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
        if(_assignNormaldoc_ == oldChild)
        {
            setAssignNormaldoc((TAssignNormaldoc) newChild);
            return;
        }

        if(_number_ == oldChild)
        {
            setNumber((TNumber) newChild);
            return;
        }

    }
}
