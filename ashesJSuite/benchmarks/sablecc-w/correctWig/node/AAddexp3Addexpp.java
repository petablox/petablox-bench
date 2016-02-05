package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AAddexp3Addexpp extends PAddexpp
{
    private PAddexpp _addexpp_;
    private TMinus _minus_;
    private PMultexpp _multexpp_;

    public AAddexp3Addexpp()
    {
    }

    public AAddexp3Addexpp(
        PAddexpp _addexpp_,
        TMinus _minus_,
        PMultexpp _multexpp_)
    {
        setAddexpp(_addexpp_);

        setMinus(_minus_);

        setMultexpp(_multexpp_);

    }
    public Object clone()
    {
        return new AAddexp3Addexpp(
            (PAddexpp) cloneNode(_addexpp_),
            (TMinus) cloneNode(_minus_),
            (PMultexpp) cloneNode(_multexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAAddexp3Addexpp(this);
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

    public TMinus getMinus()
    {
        return _minus_;
    }

    public void setMinus(TMinus node)
    {
        if(_minus_ != null)
        {
            _minus_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _minus_ = node;
    }

    public PMultexpp getMultexpp()
    {
        return _multexpp_;
    }

    public void setMultexpp(PMultexpp node)
    {
        if(_multexpp_ != null)
        {
            _multexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _multexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_addexpp_)
            + toString(_minus_)
            + toString(_multexpp_);
    }

    void removeChild(Node child)
    {
        if(_addexpp_ == child)
        {
            _addexpp_ = null;
            return;
        }

        if(_minus_ == child)
        {
            _minus_ = null;
            return;
        }

        if(_multexpp_ == child)
        {
            _multexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_addexpp_ == oldChild)
        {
            setAddexpp((PAddexpp) newChild);
            return;
        }

        if(_minus_ == oldChild)
        {
            setMinus((TMinus) newChild);
            return;
        }

        if(_multexpp_ == oldChild)
        {
            setMultexpp((PMultexpp) newChild);
            return;
        }

    }
}
