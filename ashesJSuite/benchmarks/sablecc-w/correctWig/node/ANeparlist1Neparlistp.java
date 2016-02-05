package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANeparlist1Neparlistp extends PNeparlistp
{
    private PParameterp _parameterp_;

    public ANeparlist1Neparlistp()
    {
    }

    public ANeparlist1Neparlistp(
        PParameterp _parameterp_)
    {
        setParameterp(_parameterp_);

    }
    public Object clone()
    {
        return new ANeparlist1Neparlistp(
            (PParameterp) cloneNode(_parameterp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANeparlist1Neparlistp(this);
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
            + toString(_parameterp_);
    }

    void removeChild(Node child)
    {
        if(_parameterp_ == child)
        {
            _parameterp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_parameterp_ == oldChild)
        {
            setParameterp((PParameterp) newChild);
            return;
        }

    }
}
