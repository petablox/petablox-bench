package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1nEntityp extends PEntityp
{
    private TNumber _number_;

    public AEntity1nEntityp()
    {
    }

    public AEntity1nEntityp(
        TNumber _number_)
    {
        setNumber(_number_);

    }
    public Object clone()
    {
        return new AEntity1nEntityp(
            (TNumber) cloneNode(_number_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1nEntityp(this);
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
            + toString(_number_);
    }

    void removeChild(Node child)
    {
        if(_number_ == child)
        {
            _number_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_number_ == oldChild)
        {
            setNumber((TNumber) newChild);
            return;
        }

    }
}
