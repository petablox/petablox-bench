package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity11Entityp extends PEntityp
{
    private PEntity11p _entity11p_;
    private PStringp _stringp_;
    private TQuote _quote_;
    private TClose _close_;
    private PHtmlp _htmlp_;
    private TAEnd _aEnd_;

    public AEntity11Entityp()
    {
    }

    public AEntity11Entityp(
        PEntity11p _entity11p_,
        PStringp _stringp_,
        TQuote _quote_,
        TClose _close_,
        PHtmlp _htmlp_,
        TAEnd _aEnd_)
    {
        setEntity11p(_entity11p_);

        setStringp(_stringp_);

        setQuote(_quote_);

        setClose(_close_);

        setHtmlp(_htmlp_);

        setAEnd(_aEnd_);

    }
    public Object clone()
    {
        return new AEntity11Entityp(
            (PEntity11p) cloneNode(_entity11p_),
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_),
            (TClose) cloneNode(_close_),
            (PHtmlp) cloneNode(_htmlp_),
            (TAEnd) cloneNode(_aEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity11Entityp(this);
    }

    public PEntity11p getEntity11p()
    {
        return _entity11p_;
    }

    public void setEntity11p(PEntity11p node)
    {
        if(_entity11p_ != null)
        {
            _entity11p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity11p_ = node;
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

    public TQuote getQuote()
    {
        return _quote_;
    }

    public void setQuote(TQuote node)
    {
        if(_quote_ != null)
        {
            _quote_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _quote_ = node;
    }

    public TClose getClose()
    {
        return _close_;
    }

    public void setClose(TClose node)
    {
        if(_close_ != null)
        {
            _close_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _close_ = node;
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

    public TAEnd getAEnd()
    {
        return _aEnd_;
    }

    public void setAEnd(TAEnd node)
    {
        if(_aEnd_ != null)
        {
            _aEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _aEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_entity11p_)
            + toString(_stringp_)
            + toString(_quote_)
            + toString(_close_)
            + toString(_htmlp_)
            + toString(_aEnd_);
    }

    void removeChild(Node child)
    {
        if(_entity11p_ == child)
        {
            _entity11p_ = null;
            return;
        }

        if(_stringp_ == child)
        {
            _stringp_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

        if(_close_ == child)
        {
            _close_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_aEnd_ == child)
        {
            _aEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entity11p_ == oldChild)
        {
            setEntity11p((PEntity11p) newChild);
            return;
        }

        if(_stringp_ == oldChild)
        {
            setStringp((PStringp) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

        if(_close_ == oldChild)
        {
            setClose((TClose) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_aEnd_ == oldChild)
        {
            setAEnd((TAEnd) newChild);
            return;
        }

    }
}
