package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ABoolinit1Boolinitp extends PBoolinitp
{
    private TAssignNormaldoc _assignNormaldoc_;
    private TTrue _true_;

    public ABoolinit1Boolinitp()
    {
    }

    public ABoolinit1Boolinitp(
        TAssignNormaldoc _assignNormaldoc_,
        TTrue _true_)
    {
        setAssignNormaldoc(_assignNormaldoc_);

        setTrue(_true_);

    }
    public Object clone()
    {
        return new ABoolinit1Boolinitp(
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TTrue) cloneNode(_true_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseABoolinit1Boolinitp(this);
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

    public TTrue getTrue()
    {
        return _true_;
    }

    public void setTrue(TTrue node)
    {
        if(_true_ != null)
        {
            _true_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _true_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_assignNormaldoc_)
            + toString(_true_);
    }

    void removeChild(Node child)
    {
        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

        if(_true_ == child)
        {
            _true_ = null;
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

        if(_true_ == oldChild)
        {
            setTrue((TTrue) newChild);
            return;
        }

    }
}
