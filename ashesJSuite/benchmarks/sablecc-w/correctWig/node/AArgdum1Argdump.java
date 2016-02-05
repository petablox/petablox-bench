package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AArgdum1Argdump extends PArgdump
{
    private PArgument1p _argument1p_;
    private PStringp _stringp_;

    public AArgdum1Argdump()
    {
    }

    public AArgdum1Argdump(
        PArgument1p _argument1p_,
        PStringp _stringp_)
    {
        setArgument1p(_argument1p_);

        setStringp(_stringp_);

    }
    public Object clone()
    {
        return new AArgdum1Argdump(
            (PArgument1p) cloneNode(_argument1p_),
            (PStringp) cloneNode(_stringp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAArgdum1Argdump(this);
    }

    public PArgument1p getArgument1p()
    {
        return _argument1p_;
    }

    public void setArgument1p(PArgument1p node)
    {
        if(_argument1p_ != null)
        {
            _argument1p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _argument1p_ = node;
    }

    public PStringp getStringp()
    {
        return _stringp_;
    }

    public void setStringp(PStringp node)
    {
        if(_stringp_ != null)
        {
            _stringp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _stringp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_argument1p_)
            + toString(_stringp_);
    }

    void removeChild(Node child)
    {
        if(_argument1p_ == child)
        {
            _argument1p_ = null;
            return;
        }

        if(_stringp_ == child)
        {
            _stringp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_argument1p_ == oldChild)
        {
            setArgument1p((PArgument1p) newChild);
            return;
        }

        if(_stringp_ == oldChild)
        {
            setStringp((PStringp) newChild);
            return;
        }

    }
}
