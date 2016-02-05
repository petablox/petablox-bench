package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ARelexp2Relexpp extends PRelexpp
{
    private PRelexpp _relexpp_;
    private TGt _gt_;
    private PAddexpp _addexpp_;

    public ARelexp2Relexpp()
    {
    }

    public ARelexp2Relexpp(
        PRelexpp _relexpp_,
        TGt _gt_,
        PAddexpp _addexpp_)
    {
        setRelexpp(_relexpp_);

        setGt(_gt_);

        setAddexpp(_addexpp_);

    }
    public Object clone()
    {
        return new ARelexp2Relexpp(
            (PRelexpp) cloneNode(_relexpp_),
            (TGt) cloneNode(_gt_),
            (PAddexpp) cloneNode(_addexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseARelexp2Relexpp(this);
    }

    public PRelexpp getRelexpp()
    {
        return _relexpp_;
    }

    public void setRelexpp(PRelexpp node)
    {
        if(_relexpp_ != null)
        {
            _relexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _relexpp_ = node;
    }

    public TGt getGt()
    {
        return _gt_;
    }

    public void setGt(TGt node)
    {
        if(_gt_ != null)
        {
            _gt_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _gt_ = node;
    }

    public PAddexpp getAddexpp()
    {
        return _addexpp_;
    }

    public void setAddexpp(PAddexpp node)
    {
        if(_addexpp_ != null)
        {
            _addexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _addexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_relexpp_)
            + toString(_gt_)
            + toString(_addexpp_);
    }

    void removeChild(Node child)
    {
        if(_relexpp_ == child)
        {
            _relexpp_ = null;
            return;
        }

        if(_gt_ == child)
        {
            _gt_ = null;
            return;
        }

        if(_addexpp_ == child)
        {
            _addexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_relexpp_ == oldChild)
        {
            setRelexpp((PRelexpp) newChild);
            return;
        }

        if(_gt_ == oldChild)
        {
            setGt((TGt) newChild);
            return;
        }

        if(_addexpp_ == oldChild)
        {
            setAddexpp((PAddexpp) newChild);
            return;
        }

    }
}
