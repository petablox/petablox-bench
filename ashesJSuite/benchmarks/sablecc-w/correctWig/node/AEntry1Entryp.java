package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntry1Entryp extends PEntryp
{
    private TTd _td_;
    private PHtmlp _htmlp_;
    private TTdEnd _tdEnd_;

    public AEntry1Entryp()
    {
    }

    public AEntry1Entryp(
        TTd _td_,
        PHtmlp _htmlp_,
        TTdEnd _tdEnd_)
    {
        setTd(_td_);

        setHtmlp(_htmlp_);

        setTdEnd(_tdEnd_);

    }
    public Object clone()
    {
        return new AEntry1Entryp(
            (TTd) cloneNode(_td_),
            (PHtmlp) cloneNode(_htmlp_),
            (TTdEnd) cloneNode(_tdEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntry1Entryp(this);
    }

    public TTd getTd()
    {
        return _td_;
    }

    public void setTd(TTd node)
    {
        if(_td_ != null)
        {
            _td_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _td_ = node;
    }

    public PHtmlp getHtmlp()
    {
        return _htmlp_;
    }

    public void setHtmlp(PHtmlp node)
    {
        if(_htmlp_ != null)
        {
            _htmlp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _htmlp_ = node;
    }

    public TTdEnd getTdEnd()
    {
        return _tdEnd_;
    }

    public void setTdEnd(TTdEnd node)
    {
        if(_tdEnd_ != null)
        {
            _tdEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _tdEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_td_)
            + toString(_htmlp_)
            + toString(_tdEnd_);
    }

    void removeChild(Node child)
    {
        if(_td_ == child)
        {
            _td_ = null;
            return;
        }

        if(_htmlp_ == child)
        {
            _htmlp_ = null;
            return;
        }

        if(_tdEnd_ == child)
        {
            _tdEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_td_ == oldChild)
        {
            setTd((TTd) newChild);
            return;
        }

        if(_htmlp_ == oldChild)
        {
            setHtmlp((PHtmlp) newChild);
            return;
        }

        if(_tdEnd_ == oldChild)
        {
            setTdEnd((TTdEnd) newChild);
            return;
        }

    }
}
