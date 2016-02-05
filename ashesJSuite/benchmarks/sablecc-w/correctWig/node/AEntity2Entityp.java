package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity2Entityp extends PEntityp
{
    private TBold _bold_;
    private PHtmlp _htmlp_;
    private TBoldEnd _boldEnd_;

    public AEntity2Entityp()
    {
    }

    public AEntity2Entityp(
        TBold _bold_,
        PHtmlp _htmlp_,
        TBoldEnd _boldEnd_)
    {
        setBold(_bold_);

        setHtmlp(_htmlp_);

        setBoldEnd(_boldEnd_);

    }
    public Object clone()
    {
        return new AEntity2Entityp(
            (TBold) cloneNode(_bold_),
            (PHtmlp) cloneNode(_htmlp_),
            (TBoldEnd) cloneNode(_boldEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity2Entityp(this);
    }

    public TBold getBold()
    {
        return _bold_;
    }

    public void setBold(TBold node)
    {
        if(_bold_ != null)
        {
            _bold_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _bold_ = node;
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

    public TBoldEnd getBoldEnd()
    {
        return _boldEnd_;
    }

    public void setBoldEnd(TBoldEnd node)
    {
        if(_boldEnd_ != null)
        {
            _boldEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _boldEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_bold_)
            + toString(_htmlp_)
            + toString(_boldEnd_);
    }

    void removeChild(Node child)
    {
        if(_bold_ == child)
        {
            _bold_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_boldEnd_ == child)
        {
            _boldEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_bold_ == oldChild)
        {
            setBold((TBold) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_boldEnd_ == oldChild)
        {
            setBoldEnd((TBoldEnd) newChild);
            return;
        }

    }
}
