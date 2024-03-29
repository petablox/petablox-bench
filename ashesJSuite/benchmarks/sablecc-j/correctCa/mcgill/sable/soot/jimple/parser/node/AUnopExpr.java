package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AUnopExpr extends PUnopExpr
{
    private PUnop _unop_;
    private PImmediate _immediate_;

    public AUnopExpr()
    {
    }

    public AUnopExpr(
        PUnop _unop_,
        PImmediate _immediate_)
    {
        setUnop(_unop_);

        setImmediate(_immediate_);

    }
    public Object clone()
    {
        return new AUnopExpr(
            (PUnop) cloneNode(_unop_),
            (PImmediate) cloneNode(_immediate_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnopExpr(this);
    }

    public PUnop getUnop()
    {
        return _unop_;
    }

    public void setUnop(PUnop node)
    {
        if(_unop_ != null)
        {
            _unop_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _unop_ = node;
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

    public String toString()
    {
        return ""
            + toString(_unop_)
            + toString(_immediate_);
    }

    void removeChild(Node child)
    {
        if(_unop_ == child)
        {
            _unop_ = null;
            return;
        }

        if(_immediate_ == child)
        {
            _immediate_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_unop_ == oldChild)
        {
            setUnop((PUnop) newChild);
            return;
        }

        if(_immediate_ == oldChild)
        {
            setImmediate((PImmediate) newChild);
            return;
        }

    }
}
