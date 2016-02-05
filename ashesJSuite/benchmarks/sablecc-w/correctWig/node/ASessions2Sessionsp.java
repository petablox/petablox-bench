package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ASessions2Sessionsp extends PSessionsp
{
    private PSessionsp _sessionsp_;
    private PSessionp _sessionp_;

    public ASessions2Sessionsp()
    {
    }

    public ASessions2Sessionsp(
        PSessionsp _sessionsp_,
        PSessionp _sessionp_)
    {
        setSessionsp(_sessionsp_);

        setSessionp(_sessionp_);

    }
    public Object clone()
    {
        return new ASessions2Sessionsp(
            (PSessionsp) cloneNode(_sessionsp_),
            (PSessionp) cloneNode(_sessionp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseASessions2Sessionsp(this);
    }

    public PSessionsp getSessionsp()
    {
        return _sessionsp_;
    }

    public void setSessionsp(PSessionsp node)
    {
        if(_sessionsp_ != null)
        {
            _sessionsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _sessionsp_ = node;
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
            + toString(_sessionsp_)
            + toString(_sessionp_);
    }

    void removeChild(Node child)
    {
        if(_sessionsp_ == child)
        {
            _sessionsp_ = null;
            return;
        }

        if(_sessionp_ == child)
        {
            _sessionp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_sessionsp_ == oldChild)
        {
            setSessionsp((PSessionsp) newChild);
            return;
        }

        if(_sessionp_ == oldChild)
        {
            setSessionp((PSessionp) newChild);
            return;
        }

    }
}
