package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANenames2Nenamesp extends PNenamesp
{
    private PNenamesp _nenamesp_;
    private TComma _comma_;
    private PNamep _namep_;

    public ANenames2Nenamesp()
    {
    }

    public ANenames2Nenamesp(
        PNenamesp _nenamesp_,
        TComma _comma_,
        PNamep _namep_)
    {
        setNenamesp(_nenamesp_);

        setComma(_comma_);

        setNamep(_namep_);

    }
    public Object clone()
    {
        return new ANenames2Nenamesp(
            (PNenamesp) cloneNode(_nenamesp_),
            (TComma) cloneNode(_comma_),
            (PNamep) cloneNode(_namep_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANenames2Nenamesp(this);
    }

    public PNenamesp getNenamesp()
    {
        return _nenamesp_;
    }

    public void setNenamesp(PNenamesp node)
    {
        if(_nenamesp_ != null)
        {
            _nenamesp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _nenamesp_ = node;
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

    public PNamep getNamep()
    {
        return _namep_;
    }

    public void setNamep(PNamep node)
    {
        if(_namep_ != null)
        {
            _namep_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _namep_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_nenamesp_)
            + toString(_comma_)
            + toString(_namep_);
    }

    void removeChild(Node child)
    {
        if(_nenamesp_ == child)
        {
            _nenamesp_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_namep_ == child)
        {
            _namep_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_nenamesp_ == oldChild)
        {
            setNenamesp((PNenamesp) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_namep_ == oldChild)
        {
            setNamep((PNamep) newChild);
            return;
        }

    }
}
