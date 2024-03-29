package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class ANewExpression extends PExpression
{
    private PNewExpr _newExpr_;

    public ANewExpression()
    {
    }

    public ANewExpression(
        PNewExpr _newExpr_)
    {
        setNewExpr(_newExpr_);

    }
    public Object clone()
    {
        return new ANewExpression(
            (PNewExpr) cloneNode(_newExpr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseANewExpression(this);
    }

    public PNewExpr getNewExpr()
    {
        return _newExpr_;
    }

    public void setNewExpr(PNewExpr node)
    {
        if(_newExpr_ != null)
        {
            _newExpr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _newExpr_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_newExpr_);
    }

    void removeChild(Node child)
    {
        if(_newExpr_ == child)
        {
            _newExpr_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_newExpr_ == oldChild)
        {
            setNewExpr((PNewExpr) newChild);
            return;
        }

    }
}
