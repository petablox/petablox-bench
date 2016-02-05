package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ADocument1Documentp extends PDocumentp
{
    private TDocument _document_;
    private TIdentifier _identifier_;
    private PTitlep _titlep_;
    private TOpenBr _openBr_;
    private PHtmlp _htmlp_;
    private TCloseBr _closeBr_;

    public ADocument1Documentp()
    {
    }

    public ADocument1Documentp(
        TDocument _document_,
        TIdentifier _identifier_,
        PTitlep _titlep_,
        TOpenBr _openBr_,
        PHtmlp _htmlp_,
        TCloseBr _closeBr_)
    {
        setDocument(_document_);

        setIdentifier(_identifier_);

        setTitlep(_titlep_);

        setOpenBr(_openBr_);

        setHtmlp(_htmlp_);

        setCloseBr(_closeBr_);

    }
    public Object clone()
    {
        return new ADocument1Documentp(
            (TDocument) cloneNode(_document_),
            (TIdentifier) cloneNode(_identifier_),
            (PTitlep) cloneNode(_titlep_),
            (TOpenBr) cloneNode(_openBr_),
            (PHtmlp) cloneNode(_htmlp_),
            (TCloseBr) cloneNode(_closeBr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseADocument1Documentp(this);
    }

    public TDocument getDocument()
    {
        return _document_;
    }

    public void setDocument(TDocument node)
    {
        if(_document_ != null)
        {
            _document_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _document_ = node;
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

    public PTitlep getTitlep()
    {
        return _titlep_;
    }

    public void setTitlep(PTitlep node)
    {
        if(_titlep_ != null)
        {
            _titlep_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _titlep_ = node;
    }

    public TOpenBr getOpenBr()
    {
        return _openBr_;
    }

    public void setOpenBr(TOpenBr node)
    {
        if(_openBr_ != null)
        {
            _openBr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _openBr_ = node;
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

    public TCloseBr getCloseBr()
    {
        return _closeBr_;
    }

    public void setCloseBr(TCloseBr node)
    {
        if(_closeBr_ != null)
        {
            _closeBr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _closeBr_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_document_)
            + toString(_identifier_)
            + toString(_titlep_)
            + toString(_openBr_)
            + toString(_htmlp_)
            + toString(_closeBr_);
    }

    void removeChild(Node child)
    {
        if(_document_ == child)
        {
            _document_ = null;
            return;
        }

        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

        if(_titlep_ == child)
        {
            _titlep_ = null;
            return;
        }

        if(_openBr_ == child)
        {
            _openBr_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_closeBr_ == child)
        {
            _closeBr_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_document_ == oldChild)
        {
            setDocument((TDocument) newChild);
            return;
        }

        if(_identifier_ == oldChild)
        {
            setIdentifier((TIdentifier) newChild);
            return;
        }

        if(_titlep_ == oldChild)
        {
            setTitlep((PTitlep) newChild);
            return;
        }

        if(_openBr_ == oldChild)
        {
            setOpenBr((TOpenBr) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_closeBr_ == oldChild)
        {
            setCloseBr((TCloseBr) newChild);
            return;
        }

    }
}
