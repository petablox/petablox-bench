package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatement5Statementp extends PStatementp
{
    private TShow _show_;
    private TIdentifier _identifier_;
    private PParametersp _parametersp_;

    public AStatement5Statementp()
    {
    }

    public AStatement5Statementp(
        TShow _show_,
        TIdentifier _identifier_,
        PParametersp _parametersp_)
    {
        setShow(_show_);

        setIdentifier(_identifier_);

        setParametersp(_parametersp_);

    }
    public Object clone()
    {
        return new AStatement5Statementp(
            (TShow) cloneNode(_show_),
            (TIdentifier) cloneNode(_identifier_),
            (PParametersp) cloneNode(_parametersp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatement5Statementp(this);
    }

    public TShow getShow()
    {
        return _show_;
    }

    public void setShow(TShow node)
    {
        if(_show_ != null)
        {
            _show_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _show_ = node;
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

    public PParametersp getParametersp()
    {
        return _parametersp_;
    }

    public void setParametersp(PParametersp node)
    {
        if(_parametersp_ != null)
        {
            _parametersp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _parametersp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_show_)
            + toString(_identifier_)
            + toString(_parametersp_);
    }

    void removeChild(Node child)
    {
        if(_show_ == child)
        {
            _show_ = null;
            return;
        }

        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

        if(_parametersp_ == child)
        {
            _parametersp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_show_ == oldChild)
        {
            setShow((TShow) newChild);
            return;
        }

        if(_identifier_ == oldChild)
        {
            setIdentifier((TIdentifier) newChild);
            return;
        }

        if(_parametersp_ == oldChild)
        {
            setParametersp((PParametersp) newChild);
            return;
        }

    }
}
