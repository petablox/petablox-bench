package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity141pEntity14p extends PEntity14p
{
    private TVar _var_;
    private TName _name_;
    private TAssignSp2 _assignSp2_;
    private TQuote _quote_;

    public AEntity141pEntity14p()
    {
    }

    public AEntity141pEntity14p(
        TVar _var_,
        TName _name_,
        TAssignSp2 _assignSp2_,
        TQuote _quote_)
    {
        setVar(_var_);

        setName(_name_);

        setAssignSp2(_assignSp2_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity141pEntity14p(
            (TVar) cloneNode(_var_),
            (TName) cloneNode(_name_),
            (TAssignSp2) cloneNode(_assignSp2_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity141pEntity14p(this);
    }

    public TVar getVar()
    {
        return _var_;
    }

    public void setVar(TVar node)
    {
        if(_var_ != null)
        {
            _var_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _var_ = node;
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
            + toString(_var_)
            + toString(_name_)
            + toString(_assignSp2_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_var_ == child)
        {
            _var_ = null;
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
        if(_var_ == oldChild)
        {
            setVar((TVar) newChild);
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
