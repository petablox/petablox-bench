package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATitle11Title1p extends PTitle1p
{
    private TLeftBrack1 _leftBrack1_;
    private TQuote _quote_;
    private PStringp _stringp_;

    public ATitle11Title1p()
    {
    }

    public ATitle11Title1p(
        TLeftBrack1 _leftBrack1_,
        TQuote _quote_,
        PStringp _stringp_)
    {
        setLeftBrack1(_leftBrack1_);

        setQuote(_quote_);

        setStringp(_stringp_);

    }
    public Object clone()
    {
        return new ATitle11Title1p(
            (TLeftBrack1) cloneNode(_leftBrack1_),
            (TQuote) cloneNode(_quote_),
            (PStringp) cloneNode(_stringp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATitle11Title1p(this);
    }

    public TLeftBrack1 getLeftBrack1()
    {
        return _leftBrack1_;
    }

    public void setLeftBrack1(TLeftBrack1 node)
    {
        if(_leftBrack1_ != null)
        {
            _leftBrack1_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _leftBrack1_ = node;
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

    public PStringp getStringp()
    {
        return _stringp_;
    }

    public void setStringp(PStringp node)
    {
        if(_stringp_ != null)
        {
            _stringp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _stringp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_leftBrack1_)
            + toString(_quote_)
            + toString(_stringp_);
    }

    void removeChild(Node child)
    {
        if(_leftBrack1_ == child)
        {
            _leftBrack1_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

        if(_stringp_ == child)
        {
            _stringp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_leftBrack1_ == oldChild)
        {
            setLeftBrack1((TLeftBrack1) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

        if(_stringp_ == oldChild)
        {
            setStringp((PStringp) newChild);
            return;
        }

    }
}
