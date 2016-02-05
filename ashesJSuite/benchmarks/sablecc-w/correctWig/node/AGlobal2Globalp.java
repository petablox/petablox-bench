package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AGlobal2Globalp extends PGlobalp
{
    private TGlobal _global_;
    private PNenamesp _nenamesp_;
    private TSpecify _specify_;
    private TBool _bool_;
    private PBoolinitp _boolinitp_;

    public AGlobal2Globalp()
    {
    }

    public AGlobal2Globalp(
        TGlobal _global_,
        PNenamesp _nenamesp_,
        TSpecify _specify_,
        TBool _bool_,
        PBoolinitp _boolinitp_)
    {
        setGlobal(_global_);

        setNenamesp(_nenamesp_);

        setSpecify(_specify_);

        setBool(_bool_);

        setBoolinitp(_boolinitp_);

    }
    public Object clone()
    {
        return new AGlobal2Globalp(
            (TGlobal) cloneNode(_global_),
            (PNenamesp) cloneNode(_nenamesp_),
            (TSpecify) cloneNode(_specify_),
            (TBool) cloneNode(_bool_),
            (PBoolinitp) cloneNode(_boolinitp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAGlobal2Globalp(this);
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

    public TBool getBool()
    {
        return _bool_;
    }

    public void setBool(TBool node)
    {
        if(_bool_ != null)
        {
            _bool_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _bool_ = node;
    }

    public PBoolinitp getBoolinitp()
    {
        return _boolinitp_;
    }

    public void setBoolinitp(PBoolinitp node)
    {
        if(_boolinitp_ != null)
        {
            _boolinitp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _boolinitp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_global_)
            + toString(_nenamesp_)
            + toString(_specify_)
            + toString(_bool_)
            + toString(_boolinitp_);
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

        if(_bool_ == child)
        {
            _bool_ = null;
            return;
        }

        if(_boolinitp_ == child)
        {
            _boolinitp_ = null;
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

        if(_bool_ == oldChild)
        {
            setBool((TBool) newChild);
            return;
        }

        if(_boolinitp_ == oldChild)
        {
            setBoolinitp((PBoolinitp) newChild);
            return;
        }

    }
}
