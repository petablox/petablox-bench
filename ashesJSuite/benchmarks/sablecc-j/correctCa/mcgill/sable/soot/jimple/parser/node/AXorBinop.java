package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class AXorBinop extends PBinop
{
    private TXor _xor_;

    public AXorBinop()
    {
    }

    public AXorBinop(
        TXor _xor_)
    {
        setXor(_xor_);

    }
    public Object clone()
    {
        return new AXorBinop(
            (TXor) cloneNode(_xor_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAXorBinop(this);
    }

    public TXor getXor()
    {
        return _xor_;
    }

    public void setXor(TXor node)
    {
        if(_xor_ != null)
        {
            _xor_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _xor_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_xor_);
    }

    void removeChild(Node child)
    {
        if(_xor_ == child)
        {
            _xor_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_xor_ == oldChild)
        {
            setXor((TXor) newChild);
            return;
        }

    }
}
