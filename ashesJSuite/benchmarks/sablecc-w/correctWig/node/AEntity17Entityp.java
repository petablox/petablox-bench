package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity17Entityp extends PEntityp
{
    private PEntity161p _entity161p_;
    private PEntity162p _entity162p_;
    private TRadio _radio_;
    private TValue _value_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;
    private PStringp _stringp_;
    private PEntity171p _entity171p_;

    public AEntity17Entityp()
    {
    }

    public AEntity17Entityp(
        PEntity161p _entity161p_,
        PEntity162p _entity162p_,
        TRadio _radio_,
        TValue _value_,
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_,
        PStringp _stringp_,
        PEntity171p _entity171p_)
    {
        setEntity161p(_entity161p_);

        setEntity162p(_entity162p_);

        setRadio(_radio_);

        setValue(_value_);

        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

        setStringp(_stringp_);

        setEntity171p(_entity171p_);

    }
    public Object clone()
    {
        return new AEntity17Entityp(
            (PEntity161p) cloneNode(_entity161p_),
            (PEntity162p) cloneNode(_entity162p_),
            (TRadio) cloneNode(_radio_),
            (TValue) cloneNode(_value_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_),
            (PStringp) cloneNode(_stringp_),
            (PEntity171p) cloneNode(_entity171p_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity17Entityp(this);
    }

    public PEntity161p getEntity161p()
    {
        return _entity161p_;
    }

    public void setEntity161p(PEntity161p node)
    {
        if(_entity161p_ != null)
        {
            _entity161p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity161p_ = node;
    }

    public PEntity162p getEntity162p()
    {
        return _entity162p_;
    }

    public void setEntity162p(PEntity162p node)
    {
        if(_entity162p_ != null)
        {
            _entity162p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity162p_ = node;
    }

    public TRadio getRadio()
    {
        return _radio_;
    }

    public void setRadio(TRadio node)
    {
        if(_radio_ != null)
        {
            _radio_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _radio_ = node;
    }

    public TValue getValue()
    {
        return _value_;
    }

    public void setValue(TValue node)
    {
        if(_value_ != null)
        {
            _value_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _value_ = node;
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

    public PEntity171p getEntity171p()
    {
        return _entity171p_;
    }

    public void setEntity171p(PEntity171p node)
    {
        if(_entity171p_ != null)
        {
            _entity171p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity171p_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_entity161p_)
            + toString(_entity162p_)
            + toString(_radio_)
            + toString(_value_)
            + toString(_assignNormaldoc_)
            + toString(_quote_)
            + toString(_stringp_)
            + toString(_entity171p_);
    }

    void removeChild(Node child)
    {
        if(_entity161p_ == child)
        {
            _entity161p_ = null;
            return;
        }

        if(_entity162p_ == child)
        {
            _entity162p_ = null;
            return;
        }

        if(_radio_ == child)
        {
            _radio_ = null;
            return;
        }

        if(_value_ == child)
        {
            _value_ = null;
            return;
        }

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

        if(_entity171p_ == child)
        {
            _entity171p_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entity161p_ == oldChild)
        {
            setEntity161p((PEntity161p) newChild);
            return;
        }

        if(_entity162p_ == oldChild)
        {
            setEntity162p((PEntity162p) newChild);
            return;
        }

        if(_radio_ == oldChild)
        {
            setRadio((TRadio) newChild);
            return;
        }

        if(_value_ == oldChild)
        {
            setValue((TValue) newChild);
            return;
        }

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

        if(_entity171p_ == oldChild)
        {
            setEntity171p((PEntity171p) newChild);
            return;
        }

    }
}
