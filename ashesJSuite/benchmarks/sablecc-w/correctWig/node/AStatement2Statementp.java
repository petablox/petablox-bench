package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatement2Statementp extends PStatementp
{
    private TIdentifier _identifier_;
    private TAssignSes _assignSes_;
    private PExpp _expp_;

    public AStatement2Statementp()
    {
    }

    public AStatement2Statementp(
        TIdentifier _identifier_,
        TAssignSes _assignSes_,
        PExpp _expp_)
    {
        setIdentifier(_identifier_);

        setAssignSes(_assignSes_);

        setExpp(_expp_);

    }
    public Object clone()
    {
        return new AStatement2Statementp(
            (TIdentifier) cloneNode(_identifier_),
            (TAssignSes) cloneNode(_assignSes_),
            (PExpp) cloneNode(_expp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatement2Statementp(this);
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

    public TAssignSes getAssignSes()
    {
        return _assignSes_;
    }

    public void setAssignSes(TAssignSes node)
    {
        if(_assignSes_ != null)
        {
            _assignSes_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _assignSes_ = node;
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
            + toString(_assignSes_)
            + toString(_expp_);
    }

    void removeChild(Node child)
    {
        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

        if(_assignSes_ == child)
        {
            _assignSes_ = null;
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

        if(_assignSes_ == oldChild)
        {
            setAssignSes((TAssignSes) newChild);
            return;
        }

        if(_expp_ == oldChild)
        {
            setExpp((PExpp) newChild);
            return;
        }

    }
}
