package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALocals1Localsp extends PLocalsp
{
    private PNelocalsp _nelocalsp_;

    public ALocals1Localsp()
    {
    }

    public ALocals1Localsp(
        PNelocalsp _nelocalsp_)
    {
        setNelocalsp(_nelocalsp_);

    }
    public Object clone()
    {
        return new ALocals1Localsp(
            (PNelocalsp) cloneNode(_nelocalsp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALocals1Localsp(this);
    }

    public PNelocalsp getNelocalsp()
    {
        return _nelocalsp_;
    }

    public void setNelocalsp(PNelocalsp node)
    {
        if(_nelocalsp_ != null)
        {
            _nelocalsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _nelocalsp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_nelocalsp_);
    }

    void removeChild(Node child)
    {
        if(_nelocalsp_ == child)
        {
            _nelocalsp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_nelocalsp_ == oldChild)
        {
            setNelocalsp((PNelocalsp) newChild);
            return;
        }

    }
}
