package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity3Entityp extends PEntityp
{
    private TItalic _italic_;
    private PHtmlp _htmlp_;
    private TItalicEnd _italicEnd_;

    public AEntity3Entityp()
    {
    }

    public AEntity3Entityp(
        TItalic _italic_,
        PHtmlp _htmlp_,
        TItalicEnd _italicEnd_)
    {
        setItalic(_italic_);

        setHtmlp(_htmlp_);

        setItalicEnd(_italicEnd_);

    }
    public Object clone()
    {
        return new AEntity3Entityp(
            (TItalic) cloneNode(_italic_),
            (PHtmlp) cloneNode(_htmlp_),
            (TItalicEnd) cloneNode(_italicEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity3Entityp(this);
    }

    public TItalic getItalic()
    {
        return _italic_;
    }

    public void setItalic(TItalic node)
    {
        if(_italic_ != null)
        {
            _italic_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _italic_ = node;
    }

    public PHtmlp getHtmlp()
    {
        return _htmlp_;
    }

    public void setHtmlp(PHtmlp node)
    {
        if(_htmlp_ != null)
        {
            _htmlp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _htmlp_ = node;
    }

    public TItalicEnd getItalicEnd()
    {
        return _italicEnd_;
    }

    public void setItalicEnd(TItalicEnd node)
    {
        if(_italicEnd_ != null)
        {
            _italicEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _italicEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_italic_)
            + toString(_htmlp_)
            + toString(_italicEnd_);
    }

    void removeChild(Node child)
    {
        if(_italic_ == child)
        {
            _italic_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_italicEnd_ == child)
        {
            _italicEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_italic_ == oldChild)
        {
            setItalic((TItalic) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_italicEnd_ == oldChild)
        {
            setItalicEnd((TItalicEnd) newChild);
            return;
        }

    }
}
