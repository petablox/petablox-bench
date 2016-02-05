package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AGlobal3Globalp extends PGlobalp
{
    private TGlobal _global_;
    private PNenamesp _nenamesp_;
    private TSpecify _specify_;
    private TText _text_;
    private PTextinitp _textinitp_;

    public AGlobal3Globalp()
    {
    }

    public AGlobal3Globalp(
        TGlobal _global_,
        PNenamesp _nenamesp_,
        TSpecify _specify_,
        TText _text_,
        PTextinitp _textinitp_)
    {
        setGlobal(_global_);

        setNenamesp(_nenamesp_);

        setSpecify(_specify_);

        setText(_text_);

        setTextinitp(_textinitp_);

    }
    public Object clone()
    {
        return new AGlobal3Globalp(
            (TGlobal) cloneNode(_global_),
            (PNenamesp) cloneNode(_nenamesp_),
            (TSpecify) cloneNode(_specify_),
            (TText) cloneNode(_text_),
            (PTextinitp) cloneNode(_textinitp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAGlobal3Globalp(this);
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

    public PTextinitp getTextinitp()
    {
        return _textinitp_;
    }

    public void setTextinitp(PTextinitp node)
    {
        if(_textinitp_ != null)
        {
            _textinitp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _textinitp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_global_)
            + toString(_nenamesp_)
            + toString(_specify_)
            + toString(_text_)
            + toString(_textinitp_);
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

        if(_text_ == child)
        {
            _text_ = null;
            return;
        }

        if(_textinitp_ == child)
        {
            _textinitp_ = null;
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

        if(_text_ == oldChild)
        {
            setText((TText) newChild);
            return;
        }

        if(_textinitp_ == oldChild)
        {
            setTextinitp((PTextinitp) newChild);
            return;
        }

    }
}
