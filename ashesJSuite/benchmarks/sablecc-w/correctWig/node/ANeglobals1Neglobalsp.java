package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ANeglobals1Neglobalsp extends PNeglobalsp
{
    private PGlobalp _globalp_;
    private TSemicolon _semicolon_;

    public ANeglobals1Neglobalsp()
    {
    }

    public ANeglobals1Neglobalsp(
        PGlobalp _globalp_,
        TSemicolon _semicolon_)
    {
        setGlobalp(_globalp_);

        setSemicolon(_semicolon_);

    }
    public Object clone()
    {
        return new ANeglobals1Neglobalsp(
            (PGlobalp) cloneNode(_globalp_),
            (TSemicolon) cloneNode(_semicolon_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANeglobals1Neglobalsp(this);
    }

    public PGlobalp getGlobalp()
    {
        return _globalp_;
    }

    public void setGlobalp(PGlobalp node)
    {
        if(_globalp_ != null)
        {
            _globalp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _globalp_ = node;
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
            + toString(_globalp_)
            + toString(_semicolon_);
    }

    void removeChild(Node child)
    {
        if(_globalp_ == child)
        {
            _globalp_ = null;
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
        if(_globalp_ == oldChild)
        {
            setGlobalp((PGlobalp) newChild);
            return;
        }

        if(_semicolon_ == oldChild)
        {
            setSemicolon((TSemicolon) newChild);
            return;
        }

    }
}
