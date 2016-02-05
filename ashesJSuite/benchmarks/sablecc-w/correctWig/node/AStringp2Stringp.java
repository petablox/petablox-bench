package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStringp2Stringp extends PStringp
{
    private TStringSp4 _stringSp4_;

    public AStringp2Stringp()
    {
    }

    public AStringp2Stringp(
        TStringSp4 _stringSp4_)
    {
        setStringSp4(_stringSp4_);

    }
    public Object clone()
    {
        return new AStringp2Stringp(
            (TStringSp4) cloneNode(_stringSp4_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStringp2Stringp(this);
    }

    public TStringSp4 getStringSp4()
    {
        return _stringSp4_;
    }

    public void setStringSp4(TStringSp4 node)
    {
        if(_stringSp4_ != null)
        {
            _stringSp4_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _stringSp4_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_stringSp4_);
    }

    void removeChild(Node child)
    {
        if(_stringSp4_ == child)
        {
            _stringSp4_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_stringSp4_ == oldChild)
        {
            setStringSp4((TStringSp4) newChild);
            return;
        }

    }
}
