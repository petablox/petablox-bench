package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALocal1Localp extends PLocalp
{
    private TLocal _local_;
    private PNenamesp _nenamesp_;
    private TSpecify _specify_;
    private TInt _int_;
    private PIntinitsp _intinitsp_;

    public ALocal1Localp()
    {
    }

    public ALocal1Localp(
        TLocal _local_,
        PNenamesp _nenamesp_,
        TSpecify _specify_,
        TInt _int_,
        PIntinitsp _intinitsp_)
    {
        setLocal(_local_);

        setNenamesp(_nenamesp_);

        setSpecify(_specify_);

        setInt(_int_);

        setIntinitsp(_intinitsp_);

    }
    public Object clone()
    {
        return new ALocal1Localp(
            (TLocal) cloneNode(_local_),
            (PNenamesp) cloneNode(_nenamesp_),
            (TSpecify) cloneNode(_specify_),
            (TInt) cloneNode(_int_),
            (PIntinitsp) cloneNode(_intinitsp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALocal1Localp(this);
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

    public PIntinitsp getIntinitsp()
    {
        return _intinitsp_;
    }

    public void setIntinitsp(PIntinitsp node)
    {
        if(_intinitsp_ != null)
        {
            _intinitsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _intinitsp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_local_)
            + toString(_nenamesp_)
            + toString(_specify_)
            + toString(_int_)
            + toString(_intinitsp_);
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

        if(_int_ == child)
        {
            _int_ = null;
            return;
        }

        if(_intinitsp_ == child)
        {
            _intinitsp_ = null;
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

        if(_int_ == oldChild)
        {
            setInt((TInt) newChild);
            return;
        }

        if(_intinitsp_ == oldChild)
        {
            setIntinitsp((PIntinitsp) newChild);
            return;
        }

    }
}
