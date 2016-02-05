package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ALiterals2Literalsp extends PLiteralsp
{
    private PLiteralsp _literalsp_;
    private PLiteralp _literalp_;

    public ALiterals2Literalsp()
    {
    }

    public ALiterals2Literalsp(
        PLiteralsp _literalsp_,
        PLiteralp _literalp_)
    {
        setLiteralsp(_literalsp_);

        setLiteralp(_literalp_);

    }
    public Object clone()
    {
        return new ALiterals2Literalsp(
            (PLiteralsp) cloneNode(_literalsp_),
            (PLiteralp) cloneNode(_literalp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALiterals2Literalsp(this);
    }

    public PLiteralsp getLiteralsp()
    {
        return _literalsp_;
    }

    public void setLiteralsp(PLiteralsp node)
    {
        if(_literalsp_ != null)
        {
            _literalsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _literalsp_ = node;
    }

    public PLiteralp getLiteralp()
    {
        return _literalp_;
    }

    public void setLiteralp(PLiteralp node)
    {
        if(_literalp_ != null)
        {
            _literalp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _literalp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_literalsp_)
            + toString(_literalp_);
    }

    void removeChild(Node child)
    {
        if(_literalsp_ == child)
        {
            _literalsp_ = null;
            return;
        }

        if(_literalp_ == child)
        {
            _literalp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_literalsp_ == oldChild)
        {
            setLiteralsp((PLiteralsp) newChild);
            return;
        }

        if(_literalp_ == oldChild)
        {
            setLiteralp((PLiteralp) newChild);
            return;
        }

    }
}
