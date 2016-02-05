package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANelocals1Nelocalsp extends PNelocalsp
{
    private PLocalp _localp_;
    private TSemicolon _semicolon_;

    public ANelocals1Nelocalsp()
    {
    }

    public ANelocals1Nelocalsp(
        PLocalp _localp_,
        TSemicolon _semicolon_)
    {
        setLocalp(_localp_);

        setSemicolon(_semicolon_);

    }
    public Object clone()
    {
        return new ANelocals1Nelocalsp(
            (PLocalp) cloneNode(_localp_),
            (TSemicolon) cloneNode(_semicolon_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANelocals1Nelocalsp(this);
    }

    public PLocalp getLocalp()
    {
        return _localp_;
    }

    public void setLocalp(PLocalp node)
    {
        if(_localp_ != null)
        {
            _localp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _localp_ = node;
    }

    public TSemicolon getSemicolon()
    {
        return _semicolon_;
    }

    public void setSemicolon(TSemicolon node)
    {
        if(_semicolon_ != null)
        {
            _semicolon_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _semicolon_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_localp_)
            + toString(_semicolon_);
    }

    void removeChild(Node child)
    {
        if(_localp_ == child)
        {
            _localp_ = null;
            return;
        }

        if(_semicolon_ == child)
        {
            _semicolon_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_localp_ == oldChild)
        {
            setLocalp((PLocalp) newChild);
            return;
        }

        if(_semicolon_ == oldChild)
        {
            setSemicolon((TSemicolon) newChild);
            return;
        }

    }
}
