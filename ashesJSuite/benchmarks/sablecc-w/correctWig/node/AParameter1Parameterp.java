package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AParameter1Parameterp extends PParameterp
{
    private TIdentifier _identifier_;
    private TIn _in_;
    private PExpp _expp_;

    public AParameter1Parameterp()
    {
    }

    public AParameter1Parameterp(
        TIdentifier _identifier_,
        TIn _in_,
        PExpp _expp_)
    {
        setIdentifier(_identifier_);

        setIn(_in_);

        setExpp(_expp_);

    }
    public Object clone()
    {
        return new AParameter1Parameterp(
            (TIdentifier) cloneNode(_identifier_),
            (TIn) cloneNode(_in_),
            (PExpp) cloneNode(_expp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAParameter1Parameterp(this);
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

    public TIn getIn()
    {
        return _in_;
    }

    public void setIn(TIn node)
    {
        if(_in_ != null)
        {
            _in_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _in_ = node;
    }

    public PExpp getExpp()
    {
        return _expp_;
    }

    public void setExpp(PExpp node)
    {
        if(_expp_ != null)
        {
            _expp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _expp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_identifier_)
            + toString(_in_)
            + toString(_expp_);
    }

    void removeChild(Node child)
    {
        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

        if(_in_ == child)
        {
            _in_ = null;
            return;
        }

        if(_expp_ == child)
        {
            _expp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_identifier_ == oldChild)
        {
            setIdentifier((TIdentifier) newChild);
            return;
        }

        if(_in_ == oldChild)
        {
            setIn((TIn) newChild);
            return;
        }

        if(_expp_ == oldChild)
        {
            setExpp((PExpp) newChild);
            return;
        }

    }
}
