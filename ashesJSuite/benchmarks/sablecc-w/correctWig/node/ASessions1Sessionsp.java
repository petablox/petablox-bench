package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ASessions1Sessionsp extends PSessionsp
{
    private PSessionp _sessionp_;

    public ASessions1Sessionsp()
    {
    }

    public ASessions1Sessionsp(
        PSessionp _sessionp_)
    {
        setSessionp(_sessionp_);

    }
    public Object clone()
    {
        return new ASessions1Sessionsp(
            (PSessionp) cloneNode(_sessionp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseASessions1Sessionsp(this);
    }

    public PSessionp getSessionp()
    {
        return _sessionp_;
    }

    public void setSessionp(PSessionp node)
    {
        if(_sessionp_ != null)
        {
            _sessionp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _sessionp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_sessionp_);
    }

    void removeChild(Node child)
    {
        if(_sessionp_ == child)
        {
            _sessionp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_sessionp_ == oldChild)
        {
            setSessionp((PSessionp) newChild);
            return;
        }

    }
}
