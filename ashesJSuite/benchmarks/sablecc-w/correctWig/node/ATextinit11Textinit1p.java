package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ATextinit11Textinit1p extends PTextinit1p
{
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;
    private PStringp _stringp_;

    public ATextinit11Textinit1p()
    {
    }

    public ATextinit11Textinit1p(
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_,
        PStringp _stringp_)
    {
        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

        setStringp(_stringp_);

    }
    public Object clone()
    {
        return new ATextinit11Textinit1p(
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_),
            (PStringp) cloneNode(_stringp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseATextinit11Textinit1p(this);
    }

    public TAssignNormaldoc getAssignNormaldoc()
    {
        return _assignNormaldoc_;
    }

    public void setAssignNormaldoc(TAssignNormaldoc node)
    {
        if(_assignNormaldoc_ != null)
        {
            _assignNormaldoc_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _assignNormaldoc_ = node;
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

    public String toString()
    {
        return ""
            + toString(_assignNormaldoc_)
            + toString(_quote_)
            + toString(_stringp_);
    }

    void removeChild(Node child)
    {
        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

        if(_stringp_ == child)
        {
            _stringp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_assignNormaldoc_ == oldChild)
        {
            setAssignNormaldoc((TAssignNormaldoc) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

        if(_stringp_ == oldChild)
        {
            setStringp((PStringp) newChild);
            return;
        }

    }
}
