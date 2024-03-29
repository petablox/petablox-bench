package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AIfStatement extends PStatement
{
    private TIf _if_;
    private PBoolExpr _boolExpr_;
    private PGotoStmt _gotoStmt_;

    public AIfStatement()
    {
    }

    public AIfStatement(
        TIf _if_,
        PBoolExpr _boolExpr_,
        PGotoStmt _gotoStmt_)
    {
        setIf(_if_);

        setBoolExpr(_boolExpr_);

        setGotoStmt(_gotoStmt_);

    }
    public Object clone()
    {
        return new AIfStatement(
            (TIf) cloneNode(_if_),
            (PBoolExpr) cloneNode(_boolExpr_),
            (PGotoStmt) cloneNode(_gotoStmt_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAIfStatement(this);
    }

    public TIf getIf()
    {
        return _if_;
    }

    public void setIf(TIf node)
    {
        if(_if_ != null)
        {
            _if_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _if_ = node;
    }

    public PBoolExpr getBoolExpr()
    {
        return _boolExpr_;
    }

    public void setBoolExpr(PBoolExpr node)
    {
        if(_boolExpr_ != null)
        {
            _boolExpr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _boolExpr_ = node;
    }

    public PGotoStmt getGotoStmt()
    {
        return _gotoStmt_;
    }

    public void setGotoStmt(PGotoStmt node)
    {
        if(_gotoStmt_ != null)
        {
            _gotoStmt_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _gotoStmt_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_if_)
            + toString(_boolExpr_)
            + toString(_gotoStmt_);
    }

    void removeChild(Node child)
    {
        if(_if_ == child)
        {
            _if_ = null;
            return;
        }

        if(_boolExpr_ == child)
        {
            _boolExpr_ = null;
            return;
        }

        if(_gotoStmt_ == child)
        {
            _gotoStmt_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_if_ == oldChild)
        {
            setIf((TIf) newChild);
            return;
        }

        if(_boolExpr_ == oldChild)
        {
            setBoolExpr((PBoolExpr) newChild);
            return;
        }

        if(_gotoStmt_ == oldChild)
        {
            setGotoStmt((PGotoStmt) newChild);
            return;
        }

    }
}
