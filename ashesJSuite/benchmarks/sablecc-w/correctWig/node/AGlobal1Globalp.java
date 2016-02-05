package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AGlobal1Globalp extends PGlobalp
{
    private TGlobal _global_;
    private PNenamesp _nenamesp_;
    private TSpecify _specify_;
    private TInt _int_;
    private PIntinitp _intinitp_;

    public AGlobal1Globalp()
    {
    }

    public AGlobal1Globalp(
        TGlobal _global_,
        PNenamesp _nenamesp_,
        TSpecify _specify_,
        TInt _int_,
        PIntinitp _intinitp_)
    {
        setGlobal(_global_);

        setNenamesp(_nenamesp_);

        setSpecify(_specify_);

        setInt(_int_);

        setIntinitp(_intinitp_);

    }
    public Object clone()
    {
        return new AGlobal1Globalp(
            (TGlobal) cloneNode(_global_),
            (PNenamesp) cloneNode(_nenamesp_),
            (TSpecify) cloneNode(_specify_),
            (TInt) cloneNode(_int_),
            (PIntinitp) cloneNode(_intinitp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAGlobal1Globalp(this);
    }

    public TGlobal getGlobal()
    {
        return _global_;
    }

    public void setGlobal(TGlobal node)
    {
        if(_global_ != null)
        {
            _global_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _global_ = node;
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

    public TSpecify getSpecify()
    {
        return _specify_;
    }

    public void setSpecify(TSpecify node)
    {
        if(_specify_ != null)
        {
            _specify_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _specify_ = node;
    }

    public TInt getInt()
    {
        return _int_;
    }

    public void setInt(TInt node)
    {
        if(_int_ != null)
        {
            _int_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _int_ = node;
    }

    public PIntinitp getIntinitp()
    {
        return _intinitp_;
    }

    public void setIntinitp(PIntinitp node)
    {
        if(_intinitp_ != null)
        {
            _intinitp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _intinitp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_global_)
            + toString(_nenamesp_)
            + toString(_specify_)
            + toString(_int_)
            + toString(_intinitp_);
    }

    void removeChild(Node child)
    {
        if(_global_ == child)
        {
            _global_ = null;
            return;
        }

        if(_nenamesp_ == child)
        {
            _nenamesp_ = null;
            return;
        }

        if(_specify_ == child)
        {
            _specify_ = null;
            return;
        }

        if(_int_ == child)
        {
            _int_ = null;
            return;
        }

        if(_intinitp_ == child)
        {
            _intinitp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_global_ == oldChild)
        {
            setGlobal((TGlobal) newChild);
            return;
        }

        if(_nenamesp_ == oldChild)
        {
            setNenamesp((PNenamesp) newChild);
            return;
        }

        if(_specify_ == oldChild)
        {
            setSpecify((TSpecify) newChild);
            return;
        }

        if(_int_ == oldChild)
        {
            setInt((TInt) newChild);
            return;
        }

        if(_intinitp_ == oldChild)
        {
            setIntinitp((PIntinitp) newChild);
            return;
        }

    }
}
