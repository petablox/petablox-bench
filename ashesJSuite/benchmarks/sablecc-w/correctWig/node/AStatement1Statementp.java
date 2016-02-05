package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatement1Statementp extends PStatementp
{
    private TStop _stop_;

    public AStatement1Statementp()
    {
    }

    public AStatement1Statementp(
        TStop _stop_)
    {
        setStop(_stop_);

    }
    public Object clone()
    {
        return new AStatement1Statementp(
            (TStop) cloneNode(_stop_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatement1Statementp(this);
    }

    public TStop getStop()
    {
        return _stop_;
    }

    public void setStop(TStop node)
    {
        if(_stop_ != null)
        {
            _stop_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _stop_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_stop_);
    }

    void removeChild(Node child)
    {
        if(_stop_ == child)
        {
            _stop_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_stop_ == oldChild)
        {
            setStop((TStop) newChild);
            return;
        }

    }
}
