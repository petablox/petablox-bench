package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AShrBinop extends PBinop
{
    private TShr _shr_;

    public AShrBinop()
    {
    }

    public AShrBinop(
        TShr _shr_)
    {
        setShr(_shr_);

    }
    public Object clone()
    {
        return new AShrBinop(
            (TShr) cloneNode(_shr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAShrBinop(this);
    }

    public TShr getShr()
    {
        return _shr_;
    }

    public void setShr(TShr node)
    {
        if(_shr_ != null)
        {
            _shr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _shr_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_shr_);
    }

    void removeChild(Node child)
    {
        if(_shr_ == child)
        {
            _shr_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_shr_ == oldChild)
        {
            setShr((TShr) newChild);
            return;
        }

    }
}