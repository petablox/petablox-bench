package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AGotoStatement extends PStatement
{
    private PGotoStmt _gotoStmt_;

    public AGotoStatement()
    {
    }

    public AGotoStatement(
        PGotoStmt _gotoStmt_)
    {
        setGotoStmt(_gotoStmt_);

    }
    public Object clone()
    {
        return new AGotoStatement(
            (PGotoStmt) cloneNode(_gotoStmt_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAGotoStatement(this);
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
            + toString(_gotoStmt_);
    }

    void removeChild(Node child)
    {
        if(_gotoStmt_ == child)
        {
            _gotoStmt_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_gotoStmt_ == oldChild)
        {
            setGotoStmt((PGotoStmt) newChild);
            return;
        }

    }
}
