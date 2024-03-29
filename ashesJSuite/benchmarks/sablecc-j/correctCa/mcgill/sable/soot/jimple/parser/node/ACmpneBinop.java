package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class ACmpneBinop extends PBinop
{
    private TCmpne _cmpne_;

    public ACmpneBinop()
    {
    }

    public ACmpneBinop(
        TCmpne _cmpne_)
    {
        setCmpne(_cmpne_);

    }
    public Object clone()
    {
        return new ACmpneBinop(
            (TCmpne) cloneNode(_cmpne_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseACmpneBinop(this);
    }

    public TCmpne getCmpne()
    {
        return _cmpne_;
    }

    public void setCmpne(TCmpne node)
    {
        if(_cmpne_ != null)
        {
            _cmpne_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _cmpne_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_cmpne_);
    }

    void removeChild(Node child)
    {
        if(_cmpne_ == child)
        {
            _cmpne_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_cmpne_ == oldChild)
        {
            setCmpne((TCmpne) newChild);
            return;
        }

    }
}
