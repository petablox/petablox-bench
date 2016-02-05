package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AHtml2Htmlp extends PHtmlp
{
    private PHtmlp _htmlp_;
    private PEntityp _entityp_;

    public AHtml2Htmlp()
    {
    }

    public AHtml2Htmlp(
        PHtmlp _htmlp_,
        PEntityp _entityp_)
    {
        setHtmlp(_htmlp_);

        setEntityp(_entityp_);

    }
    public Object clone()
    {
        return new AHtml2Htmlp(
            (PHtmlp) cloneNode(_htmlp_),
            (PEntityp) cloneNode(_entityp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAHtml2Htmlp(this);
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

    public PEntityp getEntityp()
    {
        return _entityp_;
    }

    public void setEntityp(PEntityp node)
    {
        if(_entityp_ != null)
        {
            _entityp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entityp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_htmlp_)
            + toString(_entityp_);
    }

    void removeChild(Node child)
    {
        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_entityp_ == child)
        {
            _entityp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_entityp_ == oldChild)
        {
            setEntityp((PEntityp) newChild);
            return;
        }

    }
}
