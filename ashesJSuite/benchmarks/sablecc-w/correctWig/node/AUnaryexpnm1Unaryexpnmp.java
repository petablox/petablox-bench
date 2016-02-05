package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AUnaryexpnm1Unaryexpnmp extends PUnaryexpnmp
{
    private PPostfixexpp _postfixexpp_;

    public AUnaryexpnm1Unaryexpnmp()
    {
    }

    public AUnaryexpnm1Unaryexpnmp(
        PPostfixexpp _postfixexpp_)
    {
        setPostfixexpp(_postfixexpp_);

    }
    public Object clone()
    {
        return new AUnaryexpnm1Unaryexpnmp(
            (PPostfixexpp) cloneNode(_postfixexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAUnaryexpnm1Unaryexpnmp(this);
    }

    public PPostfixexpp getPostfixexpp()
    {
        return _postfixexpp_;
    }

    public void setPostfixexpp(PPostfixexpp node)
    {
        if(_postfixexpp_ != null)
        {
            _postfixexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _postfixexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_postfixexpp_);
    }

    void removeChild(Node child)
    {
        if(_postfixexpp_ == child)
        {
            _postfixexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_postfixexpp_ == oldChild)
        {
            setPostfixexpp((PPostfixexpp) newChild);
            return;
        }

    }
}
