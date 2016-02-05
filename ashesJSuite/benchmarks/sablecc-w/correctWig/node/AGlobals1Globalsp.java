package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AGlobals1Globalsp extends PGlobalsp
{
    private PNeglobalsp _neglobalsp_;

    public AGlobals1Globalsp()
    {
    }

    public AGlobals1Globalsp(
        PNeglobalsp _neglobalsp_)
    {
        setNeglobalsp(_neglobalsp_);

    }
    public Object clone()
    {
        return new AGlobals1Globalsp(
            (PNeglobalsp) cloneNode(_neglobalsp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAGlobals1Globalsp(this);
    }

    public PNeglobalsp getNeglobalsp()
    {
        return _neglobalsp_;
    }

    public void setNeglobalsp(PNeglobalsp node)
    {
        if(_neglobalsp_ != null)
        {
            _neglobalsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _neglobalsp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_neglobalsp_);
    }

    void removeChild(Node child)
    {
        if(_neglobalsp_ == child)
        {
            _neglobalsp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_neglobalsp_ == oldChild)
        {
            setNeglobalsp((PNeglobalsp) newChild);
            return;
        }

    }
}
