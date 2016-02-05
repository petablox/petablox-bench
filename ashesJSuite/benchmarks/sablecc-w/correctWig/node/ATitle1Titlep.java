package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATitle1Titlep extends PTitlep
{
    private PTitle1p _title1p_;
    private TQuote _quote_;
    private TRightBrack1 _rightBrack1_;

    public ATitle1Titlep()
    {
    }

    public ATitle1Titlep(
        PTitle1p _title1p_,
        TQuote _quote_,
        TRightBrack1 _rightBrack1_)
    {
        setTitle1p(_title1p_);

        setQuote(_quote_);

        setRightBrack1(_rightBrack1_);

    }
    public Object clone()
    {
        return new ATitle1Titlep(
            (PTitle1p) cloneNode(_title1p_),
            (TQuote) cloneNode(_quote_),
            (TRightBrack1) cloneNode(_rightBrack1_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATitle1Titlep(this);
    }

    public PTitle1p getTitle1p()
    {
        return _title1p_;
    }

    public void setTitle1p(PTitle1p node)
    {
        if(_title1p_ != null)
        {
            _title1p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _title1p_ = node;
    }

    public TQuote getQuote()
    {
        return _quote_;
    }

    public void setQuote(TQuote node)
    {
        if(_quote_ != null)
        {
            _quote_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _quote_ = node;
    }

    public TRightBrack1 getRightBrack1()
    {
        return _rightBrack1_;
    }

    public void setRightBrack1(TRightBrack1 node)
    {
        if(_rightBrack1_ != null)
        {
            _rightBrack1_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rightBrack1_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_title1p_)
            + toString(_quote_)
            + toString(_rightBrack1_);
    }

    void removeChild(Node child)
    {
        if(_title1p_ == child)
        {
            _title1p_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

        if(_rightBrack1_ == child)
        {
            _rightBrack1_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_title1p_ == oldChild)
        {
            setTitle1p((PTitle1p) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

        if(_rightBrack1_ == oldChild)
        {
            setRightBrack1((TRightBrack1) newChild);
            return;
        }

    }
}
