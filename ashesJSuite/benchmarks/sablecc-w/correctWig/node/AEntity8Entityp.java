package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity8Entityp extends PEntityp
{
    private THr _hr_;

    public AEntity8Entityp()
    {
    }

    public AEntity8Entityp(
        THr _hr_)
    {
        setHr(_hr_);

    }
    public Object clone()
    {
        return new AEntity8Entityp(
            (THr) cloneNode(_hr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity8Entityp(this);
    }

    public THr getHr()
    {
        return _hr_;
    }

    public void setHr(THr node)
    {
        if(_hr_ != null)
        {
            _hr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _hr_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_hr_);
    }

    void removeChild(Node child)
    {
        if(_hr_ == child)
        {
            _hr_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_hr_ == oldChild)
        {
            setHr((THr) newChild);
            return;
        }

    }
}
