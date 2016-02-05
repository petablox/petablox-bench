package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AHtml1Htmlp extends PHtmlp
{
    private PEntityp _entityp_;

    public AHtml1Htmlp()
    {
    }

    public AHtml1Htmlp(
        PEntityp _entityp_)
    {
        setEntityp(_entityp_);

    }
    public Object clone()
    {
        return new AHtml1Htmlp(
            (PEntityp) cloneNode(_entityp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAHtml1Htmlp(this);
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
            + toString(_entityp_);
    }

    void removeChild(Node child)
    {
        if(_entityp_ == child)
        {
            _entityp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entityp_ == oldChild)
        {
            setEntityp((PEntityp) newChild);
            return;
        }

    }
}
