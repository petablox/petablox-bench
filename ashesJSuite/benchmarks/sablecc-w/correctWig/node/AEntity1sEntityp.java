package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1sEntityp extends PEntityp
{
    private TString1 _string1_;

    public AEntity1sEntityp()
    {
    }

    public AEntity1sEntityp(
        TString1 _string1_)
    {
        setString1(_string1_);

    }
    public Object clone()
    {
        return new AEntity1sEntityp(
            (TString1) cloneNode(_string1_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1sEntityp(this);
    }

    public TString1 getString1()
    {
        return _string1_;
    }

    public void setString1(TString1 node)
    {
        if(_string1_ != null)
        {
            _string1_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _string1_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_string1_);
    }

    void removeChild(Node child)
    {
        if(_string1_ == child)
        {
            _string1_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_string1_ == oldChild)
        {
            setString1((TString1) newChild);
            return;
        }

    }
}
