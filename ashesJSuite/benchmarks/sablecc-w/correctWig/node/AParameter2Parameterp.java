package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AParameter2Parameterp extends PParameterp
{
    private PParameter2p _parameter2p_;
    private TIdentifier _identifier_;

    public AParameter2Parameterp()
    {
    }

    public AParameter2Parameterp(
        PParameter2p _parameter2p_,
        TIdentifier _identifier_)
    {
        setParameter2p(_parameter2p_);

        setIdentifier(_identifier_);

    }
    public Object clone()
    {
        return new AParameter2Parameterp(
            (PParameter2p) cloneNode(_parameter2p_),
            (TIdentifier) cloneNode(_identifier_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAParameter2Parameterp(this);
    }

    public PParameter2p getParameter2p()
    {
        return _parameter2p_;
    }

    public void setParameter2p(PParameter2p node)
    {
        if(_parameter2p_ != null)
        {
            _parameter2p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _parameter2p_ = node;
    }

    public TIdentifier getIdentifier()
    {
        return _identifier_;
    }

    public void setIdentifier(TIdentifier node)
    {
        if(_identifier_ != null)
        {
            _identifier_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _identifier_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_parameter2p_)
            + toString(_identifier_);
    }

    void removeChild(Node child)
    {
        if(_parameter2p_ == child)
        {
            _parameter2p_ = null;
            return;
        }

        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_parameter2p_ == oldChild)
        {
            setParameter2p((PParameter2p) newChild);
            return;
        }

        if(_identifier_ == oldChild)
        {
            setIdentifier((TIdentifier) newChild);
            return;
        }

    }
}
