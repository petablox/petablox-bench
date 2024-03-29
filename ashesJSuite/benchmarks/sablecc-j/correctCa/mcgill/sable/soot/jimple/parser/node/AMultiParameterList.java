package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AMultiParameterList extends PParameterList
{
    private PParameter _parameter_;
    private TComma _comma_;
    private PParameterList _parameterList_;

    public AMultiParameterList()
    {
    }

    public AMultiParameterList(
        PParameter _parameter_,
        TComma _comma_,
        PParameterList _parameterList_)
    {
        setParameter(_parameter_);

        setComma(_comma_);

        setParameterList(_parameterList_);

    }
    public Object clone()
    {
        return new AMultiParameterList(
            (PParameter) cloneNode(_parameter_),
            (TComma) cloneNode(_comma_),
            (PParameterList) cloneNode(_parameterList_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAMultiParameterList(this);
    }

    public PParameter getParameter()
    {
        return _parameter_;
    }

    public void setParameter(PParameter node)
    {
        if(_parameter_ != null)
        {
            _parameter_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _parameter_ = node;
    }

    public TComma getComma()
    {
        return _comma_;
    }

    public void setComma(TComma node)
    {
        if(_comma_ != null)
        {
            _comma_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _comma_ = node;
    }

    public PParameterList getParameterList()
    {
        return _parameterList_;
    }

    public void setParameterList(PParameterList node)
    {
        if(_parameterList_ != null)
        {
            _parameterList_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _parameterList_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_parameter_)
            + toString(_comma_)
            + toString(_parameterList_);
    }

    void removeChild(Node child)
    {
        if(_parameter_ == child)
        {
            _parameter_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_parameterList_ == child)
        {
            _parameterList_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_parameter_ == oldChild)
        {
            setParameter((PParameter) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_parameterList_ == oldChild)
        {
            setParameterList((PParameterList) newChild);
            return;
        }

    }
}
