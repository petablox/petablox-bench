package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity151pEntity15p extends PEntity15p
{
    private TSelect _select_;
    private TName _name_;
    private TAssignSp2 _assignSp2_;
    private TQuote _quote_;

    public AEntity151pEntity15p()
    {
    }

    public AEntity151pEntity15p(
        TSelect _select_,
        TName _name_,
        TAssignSp2 _assignSp2_,
        TQuote _quote_)
    {
        setSelect(_select_);

        setName(_name_);

        setAssignSp2(_assignSp2_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity151pEntity15p(
            (TSelect) cloneNode(_select_),
            (TName) cloneNode(_name_),
            (TAssignSp2) cloneNode(_assignSp2_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity151pEntity15p(this);
    }

    public TSelect getSelect()
    {
        return _select_;
    }

    public void setSelect(TSelect node)
    {
        if(_select_ != null)
        {
            _select_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _select_ = node;
    }

    public TName getName()
    {
        return _name_;
    }

    public void setName(TName node)
    {
        if(_name_ != null)
        {
            _name_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _name_ = node;
    }

    public TAssignSp2 getAssignSp2()
    {
        return _assignSp2_;
    }

    public void setAssignSp2(TAssignSp2 node)
    {
        if(_assignSp2_ != null)
        {
            _assignSp2_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _assignSp2_ = node;
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
            + toString(_select_)
            + toString(_name_)
            + toString(_assignSp2_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_select_ == child)
        {
            _select_ = null;
            return;
        }

        if(_name_ == child)
        {
            _name_ = null;
            return;
        }

        if(_assignSp2_ == child)
        {
            _assignSp2_ = null;
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
        if(_select_ == oldChild)
        {
            setSelect((TSelect) newChild);
            return;
        }

        if(_name_ == oldChild)
        {
            setName((TName) newChild);
            return;
        }

        if(_assignSp2_ == oldChild)
        {
            setAssignSp2((TAssignSp2) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

    }
}
