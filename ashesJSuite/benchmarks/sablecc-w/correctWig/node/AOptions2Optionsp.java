package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AOptions2Optionsp extends POptionsp
{
    private POptionsp _optionsp_;
    private POptionp _optionp_;

    public AOptions2Optionsp()
    {
    }

    public AOptions2Optionsp(
        POptionsp _optionsp_,
        POptionp _optionp_)
    {
        setOptionsp(_optionsp_);

        setOptionp(_optionp_);

    }
    public Object clone()
    {
        return new AOptions2Optionsp(
            (POptionsp) cloneNode(_optionsp_),
            (POptionp) cloneNode(_optionp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAOptions2Optionsp(this);
    }

    public POptionsp getOptionsp()
    {
        return _optionsp_;
    }

    public void setOptionsp(POptionsp node)
    {
        if(_optionsp_ != null)
        {
            _optionsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _optionsp_ = node;
    }

    public POptionp getOptionp()
    {
        return _optionp_;
    }

    public void setOptionp(POptionp node)
    {
        if(_optionp_ != null)
        {
            _optionp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _optionp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_optionsp_)
            + toString(_optionp_);
    }

    void removeChild(Node child)
    {
        if(_optionsp_ == child)
        {
            _optionsp_ = null;
            return;
        }

        if(_optionp_ == child)
        {
            _optionp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_optionsp_ == oldChild)
        {
            setOptionsp((POptionsp) newChild);
            return;
        }

        if(_optionp_ == oldChild)
        {
            setOptionp((POptionp) newChild);
            return;
        }

    }
}
