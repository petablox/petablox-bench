package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALiteral1Literalp extends PLiteralp
{
    private TQuote _quote_;
    private PEntity182p _entity182p_;

    public ALiteral1Literalp()
    {
    }

    public ALiteral1Literalp(
        TQuote _quote_,
        PEntity182p _entity182p_)
    {
        setQuote(_quote_);

        setEntity182p(_entity182p_);

    }
    public Object clone()
    {
        return new ALiteral1Literalp(
            (TQuote) cloneNode(_quote_),
            (PEntity182p) cloneNode(_entity182p_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALiteral1Literalp(this);
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

    public PEntity182p getEntity182p()
    {
        return _entity182p_;
    }

    public void setEntity182p(PEntity182p node)
    {
        if(_entity182p_ != null)
        {
            _entity182p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity182p_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_quote_)
            + toString(_entity182p_);
    }

    void removeChild(Node child)
    {
        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

        if(_entity182p_ == child)
        {
            _entity182p_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

        if(_entity182p_ == oldChild)
        {
            setEntity182p((PEntity182p) newChild);
            return;
        }

    }
}
