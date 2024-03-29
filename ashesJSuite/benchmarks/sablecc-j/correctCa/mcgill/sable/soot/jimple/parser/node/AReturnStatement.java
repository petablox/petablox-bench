package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AReturnStatement extends PStatement
{
    private TReturn _return_;
    private PImmediate _immediate_;
    private TSemicolon _semicolon_;

    public AReturnStatement()
    {
    }

    public AReturnStatement(
        TReturn _return_,
        PImmediate _immediate_,
        TSemicolon _semicolon_)
    {
        setReturn(_return_);

        setImmediate(_immediate_);

        setSemicolon(_semicolon_);

    }
    public Object clone()
    {
        return new AReturnStatement(
            (TReturn) cloneNode(_return_),
            (PImmediate) cloneNode(_immediate_),
            (TSemicolon) cloneNode(_semicolon_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAReturnStatement(this);
    }

    public TReturn getReturn()
    {
        return _return_;
    }

    public void setReturn(TReturn node)
    {
        if(_return_ != null)
        {
            _return_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _return_ = node;
    }

    public PImmediate getImmediate()
    {
        return _immediate_;
    }

    public void setImmediate(PImmediate node)
    {
        if(_immediate_ != null)
        {
            _immediate_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _immediate_ = node;
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
            + toString(_return_)
            + toString(_immediate_)
            + toString(_semicolon_);
    }

    void removeChild(Node child)
    {
        if(_return_ == child)
        {
            _return_ = null;
            return;
        }

        if(_immediate_ == child)
        {
            _immediate_ = null;
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
        if(_return_ == oldChild)
        {
            setReturn((TReturn) newChild);
            return;
        }

        if(_immediate_ == oldChild)
        {
            setImmediate((PImmediate) newChild);
            return;
        }

        if(_semicolon_ == oldChild)
        {
            setSemicolon((TSemicolon) newChild);
            return;
        }

    }
}
