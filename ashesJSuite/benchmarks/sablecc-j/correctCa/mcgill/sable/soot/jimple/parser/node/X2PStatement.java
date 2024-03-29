package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class X2PStatement extends XPStatement
{
    private PStatement _pStatement_;

    public X2PStatement()
    {
    }

    public X2PStatement(
        PStatement _pStatement_)
    {
        setPStatement(_pStatement_);
    }

    public Object clone()
    {
        throw new RuntimeException("Unsupported Operation");
    }

    public void apply(Switch sw)
    {
        throw new RuntimeException("Switch not supported.");
    }

    public PStatement getPStatement()
    {
        return _pStatement_;
    }

    public void setPStatement(PStatement node)
    {
        if(_pStatement_ != null)
        {
            _pStatement_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _pStatement_ = node;
    }

    void removeChild(Node child)
    {
        if(_pStatement_ == child)
        {
            _pStatement_ = null;
        }
    }

    void replaceChild(Node oldChild, Node newChild)
    {
    }

    public String toString()
    {
        return "" +
            toString(_pStatement_);
    }
}
