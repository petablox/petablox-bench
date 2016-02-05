package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity15Entityp extends PEntityp
{
    private PEntity15p _entity15p_;
    private PStringp _stringp_;
    private TQuote _quote_;
    private TClose _close_;
    private POptionsp _optionsp_;
    private TSelectEnd _selectEnd_;

    public AEntity15Entityp()
    {
    }

    public AEntity15Entityp(
        PEntity15p _entity15p_,
        PStringp _stringp_,
        TQuote _quote_,
        TClose _close_,
        POptionsp _optionsp_,
        TSelectEnd _selectEnd_)
    {
        setEntity15p(_entity15p_);

        setStringp(_stringp_);

        setQuote(_quote_);

        setClose(_close_);

        setOptionsp(_optionsp_);

        setSelectEnd(_selectEnd_);

    }
    public Object clone()
    {
        return new AEntity15Entityp(
            (PEntity15p) cloneNode(_entity15p_),
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_),
            (TClose) cloneNode(_close_),
            (POptionsp) cloneNode(_optionsp_),
            (TSelectEnd) cloneNode(_selectEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity15Entityp(this);
    }

    public PEntity15p getEntity15p()
    {
        return _entity15p_;
    }

    public void setEntity15p(PEntity15p node)
    {
        if(_entity15p_ != null)
        {
            _entity15p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity15p_ = node;
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

    public POptionsp getOptionsp()
    {
        return _optionsp_;
    }

    public void setOptionsp(POptionsp node)
    {
        if(_optionsp_ != null)
        {
            _optionsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _optionsp_ = node;
    }

    public TSelectEnd getSelectEnd()
    {
        return _selectEnd_;
    }

    public void setSelectEnd(TSelectEnd node)
    {
        if(_selectEnd_ != null)
        {
            _selectEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _selectEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_entity15p_)
            + toString(_stringp_)
            + toString(_quote_)
            + toString(_close_)
            + toString(_optionsp_)
            + toString(_selectEnd_);
    }

    void removeChild(Node child)
    {
        if(_entity15p_ == child)
        {
            _entity15p_ = null;
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

        if(_optionsp_ == child)
        {
            _optionsp_ = null;
            return;
        }

        if(_selectEnd_ == child)
        {
            _selectEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entity15p_ == oldChild)
        {
            setEntity15p((PEntity15p) newChild);
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

        if(_optionsp_ == oldChild)
        {
            setOptionsp((POptionsp) newChild);
            return;
        }

        if(_selectEnd_ == oldChild)
        {
            setSelectEnd((TSelectEnd) newChild);
            return;
        }

    }
}
