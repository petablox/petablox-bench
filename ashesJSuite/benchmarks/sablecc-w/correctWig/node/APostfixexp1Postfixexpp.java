package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class APostfixexp1Postfixexpp extends PPostfixexpp
{
    private TIdentifier _identifier_;

    public APostfixexp1Postfixexpp()
    {
    }

    public APostfixexp1Postfixexpp(
        TIdentifier _identifier_)
    {
        setIdentifier(_identifier_);

    }
    public Object clone()
    {
        return new APostfixexp1Postfixexpp(
            (TIdentifier) cloneNode(_identifier_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAPostfixexp1Postfixexpp(this);
    }

    public TIdentifier getIdentifier()
    {
        return _identifier_;
    }

    public void setIdentifier(TIdentifier node)
    {
        if(_identifier_ != null)
        {
            _identifier_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _identifier_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_identifier_);
    }

    void removeChild(Node child)
    {
        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_identifier_ == oldChild)
        {
            setIdentifier((TIdentifier) newChild);
            return;
        }

    }
}
