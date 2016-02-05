package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANeparlist2Neparlistp extends PNeparlistp
{
    private PNeparlistp _neparlistp_;
    private TComma _comma_;
    private PParameterp _parameterp_;

    public ANeparlist2Neparlistp()
    {
    }

    public ANeparlist2Neparlistp(
        PNeparlistp _neparlistp_,
        TComma _comma_,
        PParameterp _parameterp_)
    {
        setNeparlistp(_neparlistp_);

        setComma(_comma_);

        setParameterp(_parameterp_);

    }
    public Object clone()
    {
        return new ANeparlist2Neparlistp(
            (PNeparlistp) cloneNode(_neparlistp_),
            (TComma) cloneNode(_comma_),
            (PParameterp) cloneNode(_parameterp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANeparlist2Neparlistp(this);
    }

    public PNeparlistp getNeparlistp()
    {
        return _neparlistp_;
    }

    public void setNeparlistp(PNeparlistp node)
    {
        if(_neparlistp_ != null)
        {
            _neparlistp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _neparlistp_ = node;
    }

    public TComma getComma()
    {
        return _comma_;
    }

    public void setComma(TComma node)
    {
        if(_comma_ != null)
        {
            _comma_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _comma_ = node;
    }

    public PParameterp getParameterp()
    {
        return _parameterp_;
    }

    public void setParameterp(PParameterp node)
    {
        if(_parameterp_ != null)
        {
            _parameterp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _parameterp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_neparlistp_)
            + toString(_comma_)
            + toString(_parameterp_);
    }

    void removeChild(Node child)
    {
        if(_neparlistp_ == child)
        {
            _neparlistp_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_parameterp_ == child)
        {
            _parameterp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_neparlistp_ == oldChild)
        {
            setNeparlistp((PNeparlistp) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_parameterp_ == oldChild)
        {
            setParameterp((PParameterp) newChild);
            return;
        }

    }
}
