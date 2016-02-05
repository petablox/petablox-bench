package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AItem1Itemp extends PItemp
{
    private TLi _li_;
    private PHtmlp _htmlp_;

    public AItem1Itemp()
    {
    }

    public AItem1Itemp(
        TLi _li_,
        PHtmlp _htmlp_)
    {
        setLi(_li_);

        setHtmlp(_htmlp_);

    }
    public Object clone()
    {
        return new AItem1Itemp(
            (TLi) cloneNode(_li_),
            (PHtmlp) cloneNode(_htmlp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAItem1Itemp(this);
    }

    public TLi getLi()
    {
        return _li_;
    }

    public void setLi(TLi node)
    {
        if(_li_ != null)
        {
            _li_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _li_ = node;
    }

    public PHtmlp getHtmlp()
    {
        return _htmlp_;
    }

    public void setHtmlp(PHtmlp node)
    {
        if(_htmlp_ != null)
        {
            _htmlp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _htmlp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_li_)
            + toString(_htmlp_);
    }

    void removeChild(Node child)
    {
        if(_li_ == child)
        {
            _li_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_li_ == oldChild)
        {
            setLi((TLi) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

    }
}
