package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AArgument11Argument1p extends PArgument1p
{
    private TParam _param_;
    private TName _name_;
    private TAssignSp2 _assignSp2_;
    private TQuote _quote_;

    public AArgument11Argument1p()
    {
    }

    public AArgument11Argument1p(
        TParam _param_,
        TName _name_,
        TAssignSp2 _assignSp2_,
        TQuote _quote_)
    {
        setParam(_param_);

        setName(_name_);

        setAssignSp2(_assignSp2_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AArgument11Argument1p(
            (TParam) cloneNode(_param_),
            (TName) cloneNode(_name_),
            (TAssignSp2) cloneNode(_assignSp2_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAArgument11Argument1p(this);
    }

    public TParam getParam()
    {
        return _param_;
    }

    public void setParam(TParam node)
    {
        if(_param_ != null)
        {
            _param_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _param_ = node;
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
            + toString(_param_)
            + toString(_name_)
            + toString(_assignSp2_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_param_ == child)
        {
            _param_ = null;
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
        if(_param_ == oldChild)
        {
            setParam((TParam) newChild);
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
