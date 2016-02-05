package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity5Entityp extends PEntityp
{
    private THeader2 _header2_;
    private PHtmlp _htmlp_;
    private THeader2End _header2End_;

    public AEntity5Entityp()
    {
    }

    public AEntity5Entityp(
        THeader2 _header2_,
        PHtmlp _htmlp_,
        THeader2End _header2End_)
    {
        setHeader2(_header2_);

        setHtmlp(_htmlp_);

        setHeader2End(_header2End_);

    }
    public Object clone()
    {
        return new AEntity5Entityp(
            (THeader2) cloneNode(_header2_),
            (PHtmlp) cloneNode(_htmlp_),
            (THeader2End) cloneNode(_header2End_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity5Entityp(this);
    }

    public THeader2 getHeader2()
    {
        return _header2_;
    }

    public void setHeader2(THeader2 node)
    {
        if(_header2_ != null)
        {
            _header2_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _header2_ = node;
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

    public THeader2End getHeader2End()
    {
        return _header2End_;
    }

    public void setHeader2End(THeader2End node)
    {
        if(_header2End_ != null)
        {
            _header2End_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _header2End_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_header2_)
            + toString(_htmlp_)
            + toString(_header2End_);
    }

    void removeChild(Node child)
    {
        if(_header2_ == child)
        {
            _header2_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_header2End_ == child)
        {
            _header2End_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_header2_ == oldChild)
        {
            setHeader2((THeader2) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_header2End_ == oldChild)
        {
            setHeader2End((THeader2End) newChild);
            return;
        }

    }
}
