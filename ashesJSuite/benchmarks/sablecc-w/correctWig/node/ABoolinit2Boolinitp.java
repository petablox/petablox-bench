package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ABoolinit2Boolinitp extends PBoolinitp
{
    private TAssignNormaldoc _assignNormaldoc_;
    private TFalse _false_;

    public ABoolinit2Boolinitp()
    {
    }

    public ABoolinit2Boolinitp(
        TAssignNormaldoc _assignNormaldoc_,
        TFalse _false_)
    {
        setAssignNormaldoc(_assignNormaldoc_);

        setFalse(_false_);

    }
    public Object clone()
    {
        return new ABoolinit2Boolinitp(
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TFalse) cloneNode(_false_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseABoolinit2Boolinitp(this);
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

    public TFalse getFalse()
    {
        return _false_;
    }

    public void setFalse(TFalse node)
    {
        if(_false_ != null)
        {
            _false_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _false_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_assignNormaldoc_)
            + toString(_false_);
    }

    void removeChild(Node child)
    {
        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

        if(_false_ == child)
        {
            _false_ = null;
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

        if(_false_ == oldChild)
        {
            setFalse((TFalse) newChild);
            return;
        }

    }
}
