package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class APostfixexp2Postfixexpp extends PPostfixexpp
{
    private PPrimexpp _primexpp_;

    public APostfixexp2Postfixexpp()
    {
    }

    public APostfixexp2Postfixexpp(
        PPrimexpp _primexpp_)
    {
        setPrimexpp(_primexpp_);

    }
    public Object clone()
    {
        return new APostfixexp2Postfixexpp(
            (PPrimexpp) cloneNode(_primexpp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAPostfixexp2Postfixexpp(this);
    }

    public PPrimexpp getPrimexpp()
    {
        return _primexpp_;
    }

    public void setPrimexpp(PPrimexpp node)
    {
        if(_primexpp_ != null)
        {
            _primexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _primexpp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_primexpp_);
    }

    void removeChild(Node child)
    {
        if(_primexpp_ == child)
        {
            _primexpp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_primexpp_ == oldChild)
        {
            setPrimexpp((PPrimexpp) newChild);
            return;
        }

    }
}
