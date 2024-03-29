package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class ACmpBinop extends PBinop
{
    private TCmp _cmp_;

    public ACmpBinop()
    {
    }

    public ACmpBinop(
        TCmp _cmp_)
    {
        setCmp(_cmp_);

    }
    public Object clone()
    {
        return new ACmpBinop(
            (TCmp) cloneNode(_cmp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseACmpBinop(this);
    }

    public TCmp getCmp()
    {
        return _cmp_;
    }

    public void setCmp(TCmp node)
    {
        if(_cmp_ != null)
        {
            _cmp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _cmp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_cmp_);
    }

    void removeChild(Node child)
    {
        if(_cmp_ == child)
        {
            _cmp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_cmp_ == oldChild)
        {
            setCmp((TCmp) newChild);
            return;
        }

    }
}
