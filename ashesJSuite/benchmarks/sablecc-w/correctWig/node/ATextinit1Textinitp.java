package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATextinit1Textinitp extends PTextinitp
{
    private PTextinit1p _textinit1p_;
    private TQuote _quote_;

    public ATextinit1Textinitp()
    {
    }

    public ATextinit1Textinitp(
        PTextinit1p _textinit1p_,
        TQuote _quote_)
    {
        setTextinit1p(_textinit1p_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new ATextinit1Textinitp(
            (PTextinit1p) cloneNode(_textinit1p_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATextinit1Textinitp(this);
    }

    public PTextinit1p getTextinit1p()
    {
        return _textinit1p_;
    }

    public void setTextinit1p(PTextinit1p node)
    {
        if(_textinit1p_ != null)
        {
            _textinit1p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _textinit1p_ = node;
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

    public String toString()
    {
        return ""
            + toString(_textinit1p_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_textinit1p_ == child)
        {
            _textinit1p_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_textinit1p_ == oldChild)
        {
            setTextinit1p((PTextinit1p) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

    }
}
