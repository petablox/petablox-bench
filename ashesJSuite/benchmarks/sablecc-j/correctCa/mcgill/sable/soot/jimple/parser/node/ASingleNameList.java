package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class ASingleNameList extends PNameList
{
    private TName _name_;

    public ASingleNameList()
    {
    }

    public ASingleNameList(
        TName _name_)
    {
        setName(_name_);

    }
    public Object clone()
    {
        return new ASingleNameList(
            (TName) cloneNode(_name_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseASingleNameList(this);
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

    public String toString()
    {
        return ""
            + toString(_name_);
    }

    void removeChild(Node child)
    {
        if(_name_ == child)
        {
            _name_ = null;
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

    }
}
