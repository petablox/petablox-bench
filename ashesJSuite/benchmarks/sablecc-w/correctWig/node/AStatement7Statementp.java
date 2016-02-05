package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatement7Statementp extends PStatementp
{
    private PStatement71p _statement71p_;
    private PStatement72p _statement72p_;

    public AStatement7Statementp()
    {
    }

    public AStatement7Statementp(
        PStatement71p _statement71p_,
        PStatement72p _statement72p_)
    {
        setStatement71p(_statement71p_);

        setStatement72p(_statement72p_);

    }
    public Object clone()
    {
        return new AStatement7Statementp(
            (PStatement71p) cloneNode(_statement71p_),
            (PStatement72p) cloneNode(_statement72p_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatement7Statementp(this);
    }

    public PStatement71p getStatement71p()
    {
        return _statement71p_;
    }

    public void setStatement71p(PStatement71p node)
    {
        if(_statement71p_ != null)
        {
            _statement71p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _statement71p_ = node;
    }

    public PStatement72p getStatement72p()
    {
        return _statement72p_;
    }

    public void setStatement72p(PStatement72p node)
    {
        if(_statement72p_ != null)
        {
            _statement72p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _statement72p_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_statement71p_)
            + toString(_statement72p_);
    }

    void removeChild(Node child)
    {
        if(_statement71p_ == child)
        {
            _statement71p_ = null;
            return;
        }

        if(_statement72p_ == child)
        {
            _statement72p_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_statement71p_ == oldChild)
        {
            setStatement71p((PStatement71p) newChild);
            return;
        }

        if(_statement72p_ == oldChild)
        {
            setStatement72p((PStatement72p) newChild);
            return;
        }

    }
}
