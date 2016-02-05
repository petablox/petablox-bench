package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStringp1Stringp extends PStringp
{
    private TString _string_;

    public AStringp1Stringp()
    {
    }

    public AStringp1Stringp(
        TString _string_)
    {
        setString(_string_);

    }
    public Object clone()
    {
        return new AStringp1Stringp(
            (TString) cloneNode(_string_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStringp1Stringp(this);
    }

    public TString getString()
    {
        return _string_;
    }

    public void setString(TString node)
    {
        if(_string_ != null)
        {
            _string_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _string_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_string_);
    }

    void removeChild(Node child)
    {
        if(_string_ == child)
        {
            _string_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_string_ == oldChild)
        {
            setString((TString) newChild);
            return;
        }

    }
}
