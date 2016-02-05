package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity4Entityp extends PEntityp
{
    private THeader1 _header1_;
    private PHtmlp _htmlp_;
    private THeader1End _header1End_;

    public AEntity4Entityp()
    {
    }

    public AEntity4Entityp(
        THeader1 _header1_,
        PHtmlp _htmlp_,
        THeader1End _header1End_)
    {
        setHeader1(_header1_);

        setHtmlp(_htmlp_);

        setHeader1End(_header1End_);

    }
    public Object clone()
    {
        return new AEntity4Entityp(
            (THeader1) cloneNode(_header1_),
            (PHtmlp) cloneNode(_htmlp_),
            (THeader1End) cloneNode(_header1End_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity4Entityp(this);
    }

    public THeader1 getHeader1()
    {
        return _header1_;
    }

    public void setHeader1(THeader1 node)
    {
        if(_header1_ != null)
        {
            _header1_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _header1_ = node;
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

    public THeader1End getHeader1End()
    {
        return _header1End_;
    }

    public void setHeader1End(THeader1End node)
    {
        if(_header1End_ != null)
        {
            _header1End_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _header1End_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_header1_)
            + toString(_htmlp_)
            + toString(_header1End_);
    }

    void removeChild(Node child)
    {
        if(_header1_ == child)
        {
            _header1_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_header1End_ == child)
        {
            _header1End_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_header1_ == oldChild)
        {
            setHeader1((THeader1) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_header1End_ == oldChild)
        {
            setHeader1End((THeader1End) newChild);
            return;
        }

    }
}
