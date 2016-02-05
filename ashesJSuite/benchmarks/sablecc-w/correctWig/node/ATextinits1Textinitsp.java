package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATextinits1Textinitsp extends PTextinitsp
{
    private PTextinit1sp _textinit1sp_;
    private TQuote _quote_;

    public ATextinits1Textinitsp()
    {
    }

    public ATextinits1Textinitsp(
        PTextinit1sp _textinit1sp_,
        TQuote _quote_)
    {
        setTextinit1sp(_textinit1sp_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new ATextinits1Textinitsp(
            (PTextinit1sp) cloneNode(_textinit1sp_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATextinits1Textinitsp(this);
    }

    public PTextinit1sp getTextinit1sp()
    {
        return _textinit1sp_;
    }

    public void setTextinit1sp(PTextinit1sp node)
    {
        if(_textinit1sp_ != null)
        {
            _textinit1sp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _textinit1sp_ = node;
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
            + toString(_textinit1sp_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_textinit1sp_ == child)
        {
            _textinit1sp_ = null;
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
        if(_textinit1sp_ == oldChild)
        {
            setTextinit1sp((PTextinit1sp) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

    }
}
