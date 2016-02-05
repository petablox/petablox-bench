package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AOptions1Optionsp extends POptionsp
{
    private POptionp _optionp_;

    public AOptions1Optionsp()
    {
    }

    public AOptions1Optionsp(
        POptionp _optionp_)
    {
        setOptionp(_optionp_);

    }
    public Object clone()
    {
        return new AOptions1Optionsp(
            (POptionp) cloneNode(_optionp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAOptions1Optionsp(this);
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
            + toString(_optionp_);
    }

    void removeChild(Node child)
    {
        if(_optionp_ == child)
        {
            _optionp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_optionp_ == oldChild)
        {
            setOptionp((POptionp) newChild);
            return;
        }

    }
}
