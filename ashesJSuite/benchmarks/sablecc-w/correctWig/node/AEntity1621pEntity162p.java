package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1621pEntity162p extends PEntity162p
{
    private PStringp _stringp_;
    private TQuote _quote_;
    private TType _type_;
    private TAssignNormaldoc _assignNormaldoc_;

    public AEntity1621pEntity162p()
    {
    }

    public AEntity1621pEntity162p(
        PStringp _stringp_,
        TQuote _quote_,
        TType _type_,
        TAssignNormaldoc _assignNormaldoc_)
    {
        setStringp(_stringp_);

        setQuote(_quote_);

        setType(_type_);

        setAssignNormaldoc(_assignNormaldoc_);

    }
    public Object clone()
    {
        return new AEntity1621pEntity162p(
            (PStringp) cloneNode(_stringp_),
            (TQuote) cloneNode(_quote_),
            (TType) cloneNode(_type_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1621pEntity162p(this);
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

    public TType getType()
    {
        return _type_;
    }

    public void setType(TType node)
    {
        if(_type_ != null)
        {
            _type_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _type_ = node;
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

    public String toString()
    {
        return ""
            + toString(_stringp_)
            + toString(_quote_)
            + toString(_type_)
            + toString(_assignNormaldoc_);
    }

    void removeChild(Node child)
    {
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

        if(_type_ == child)
        {
            _type_ = null;
            return;
        }

        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
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

        if(_type_ == oldChild)
        {
            setType((TType) newChild);
            return;
        }

        if(_assignNormaldoc_ == oldChild)
        {
            setAssignNormaldoc((TAssignNormaldoc) newChild);
            return;
        }

    }
}
