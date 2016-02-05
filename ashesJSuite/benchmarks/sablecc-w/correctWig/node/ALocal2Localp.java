package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALocal2Localp extends PLocalp
{
    private TLocal _local_;
    private PNenamesp _nenamesp_;
    private TSpecify _specify_;
    private TBool _bool_;
    private PBoolinitsp _boolinitsp_;

    public ALocal2Localp()
    {
    }

    public ALocal2Localp(
        TLocal _local_,
        PNenamesp _nenamesp_,
        TSpecify _specify_,
        TBool _bool_,
        PBoolinitsp _boolinitsp_)
    {
        setLocal(_local_);

        setNenamesp(_nenamesp_);

        setSpecify(_specify_);

        setBool(_bool_);

        setBoolinitsp(_boolinitsp_);

    }
    public Object clone()
    {
        return new ALocal2Localp(
            (TLocal) cloneNode(_local_),
            (PNenamesp) cloneNode(_nenamesp_),
            (TSpecify) cloneNode(_specify_),
            (TBool) cloneNode(_bool_),
            (PBoolinitsp) cloneNode(_boolinitsp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALocal2Localp(this);
    }

    public TLocal getLocal()
    {
        return _local_;
    }

    public void setLocal(TLocal node)
    {
        if(_local_ != null)
        {
            _local_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _local_ = node;
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

    public PBoolinitsp getBoolinitsp()
    {
        return _boolinitsp_;
    }

    public void setBoolinitsp(PBoolinitsp node)
    {
        if(_boolinitsp_ != null)
        {
            _boolinitsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _boolinitsp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_local_)
            + toString(_nenamesp_)
            + toString(_specify_)
            + toString(_bool_)
            + toString(_boolinitsp_);
    }

    void removeChild(Node child)
    {
        if(_local_ == child)
        {
            _local_ = null;
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

        if(_boolinitsp_ == child)
        {
            _boolinitsp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_local_ == oldChild)
        {
            setLocal((TLocal) newChild);
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

        if(_boolinitsp_ == oldChild)
        {
            setBoolinitsp((PBoolinitsp) newChild);
            return;
        }

    }
}
