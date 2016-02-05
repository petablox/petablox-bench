package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AParameter21Parameter2p extends PParameter2p
{
    private TIdentifier _identifier_;
    private TOut _out_;

    public AParameter21Parameter2p()
    {
    }

    public AParameter21Parameter2p(
        TIdentifier _identifier_,
        TOut _out_)
    {
        setIdentifier(_identifier_);

        setOut(_out_);

    }
    public Object clone()
    {
        return new AParameter21Parameter2p(
            (TIdentifier) cloneNode(_identifier_),
            (TOut) cloneNode(_out_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAParameter21Parameter2p(this);
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

    public TOut getOut()
    {
        return _out_;
    }

    public void setOut(TOut node)
    {
        if(_out_ != null)
        {
            _out_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _out_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_identifier_)
            + toString(_out_);
    }

    void removeChild(Node child)
    {
        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

        if(_out_ == child)
        {
            _out_ = null;
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

        if(_out_ == oldChild)
        {
            setOut((TOut) newChild);
            return;
        }

    }
}
