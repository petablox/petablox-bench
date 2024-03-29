package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AMultiNameList extends PNameList
{
    private TName _name_;
    private TComma _comma_;
    private PNameList _nameList_;

    public AMultiNameList()
    {
    }

    public AMultiNameList(
        TName _name_,
        TComma _comma_,
        PNameList _nameList_)
    {
        setName(_name_);

        setComma(_comma_);

        setNameList(_nameList_);

    }
    public Object clone()
    {
        return new AMultiNameList(
            (TName) cloneNode(_name_),
            (TComma) cloneNode(_comma_),
            (PNameList) cloneNode(_nameList_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAMultiNameList(this);
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

    public PNameList getNameList()
    {
        return _nameList_;
    }

    public void setNameList(PNameList node)
    {
        if(_nameList_ != null)
        {
            _nameList_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _nameList_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_name_)
            + toString(_comma_)
            + toString(_nameList_);
    }

    void removeChild(Node child)
    {
        if(_name_ == child)
        {
            _name_ = null;
            return;
        }

        if(_comma_ == child)
        {
            _comma_ = null;
            return;
        }

        if(_nameList_ == child)
        {
            _nameList_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_name_ == oldChild)
        {
            setName((TName) newChild);
            return;
        }

        if(_comma_ == oldChild)
        {
            setComma((TComma) newChild);
            return;
        }

        if(_nameList_ == oldChild)
        {
            setNameList((PNameList) newChild);
            return;
        }

    }
}
