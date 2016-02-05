package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALocal3Localp extends PLocalp
{
    private TLocal _local_;
    private PNenamesp _nenamesp_;
    private TSpecify _specify_;
    private TText _text_;
    private PTextinitsp _textinitsp_;

    public ALocal3Localp()
    {
    }

    public ALocal3Localp(
        TLocal _local_,
        PNenamesp _nenamesp_,
        TSpecify _specify_,
        TText _text_,
        PTextinitsp _textinitsp_)
    {
        setLocal(_local_);

        setNenamesp(_nenamesp_);

        setSpecify(_specify_);

        setText(_text_);

        setTextinitsp(_textinitsp_);

    }
    public Object clone()
    {
        return new ALocal3Localp(
            (TLocal) cloneNode(_local_),
            (PNenamesp) cloneNode(_nenamesp_),
            (TSpecify) cloneNode(_specify_),
            (TText) cloneNode(_text_),
            (PTextinitsp) cloneNode(_textinitsp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALocal3Localp(this);
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

    public TText getText()
    {
        return _text_;
    }

    public void setText(TText node)
    {
        if(_text_ != null)
        {
            _text_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _text_ = node;
    }

    public PTextinitsp getTextinitsp()
    {
        return _textinitsp_;
    }

    public void setTextinitsp(PTextinitsp node)
    {
        if(_textinitsp_ != null)
        {
            _textinitsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _textinitsp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_local_)
            + toString(_nenamesp_)
            + toString(_specify_)
            + toString(_text_)
            + toString(_textinitsp_);
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

        if(_text_ == child)
        {
            _text_ = null;
            return;
        }

        if(_textinitsp_ == child)
        {
            _textinitsp_ = null;
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

        if(_text_ == oldChild)
        {
            setText((TText) newChild);
            return;
        }

        if(_textinitsp_ == oldChild)
        {
            setTextinitsp((PTextinitsp) newChild);
            return;
        }

    }
}
