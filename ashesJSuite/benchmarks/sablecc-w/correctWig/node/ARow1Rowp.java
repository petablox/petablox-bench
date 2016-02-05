package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ARow1Rowp extends PRowp
{
    private TTr _tr_;
    private PEntriesp _entriesp_;
    private TTrEnd _trEnd_;

    public ARow1Rowp()
    {
    }

    public ARow1Rowp(
        TTr _tr_,
        PEntriesp _entriesp_,
        TTrEnd _trEnd_)
    {
        setTr(_tr_);

        setEntriesp(_entriesp_);

        setTrEnd(_trEnd_);

    }
    public Object clone()
    {
        return new ARow1Rowp(
            (TTr) cloneNode(_tr_),
            (PEntriesp) cloneNode(_entriesp_),
            (TTrEnd) cloneNode(_trEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseARow1Rowp(this);
    }

    public TTr getTr()
    {
        return _tr_;
    }

    public void setTr(TTr node)
    {
        if(_tr_ != null)
        {
            _tr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _tr_ = node;
    }

    public PEntriesp getEntriesp()
    {
        return _entriesp_;
    }

    public void setEntriesp(PEntriesp node)
    {
        if(_entriesp_ != null)
        {
            _entriesp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entriesp_ = node;
    }

    public TTrEnd getTrEnd()
    {
        return _trEnd_;
    }

    public void setTrEnd(TTrEnd node)
    {
        if(_trEnd_ != null)
        {
            _trEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _trEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_tr_)
            + toString(_entriesp_)
            + toString(_trEnd_);
    }

    void removeChild(Node child)
    {
        if(_tr_ == child)
        {
            _tr_ = null;
            return;
        }

        if(_entriesp_ == child)
        {
            _entriesp_ = null;
            return;
        }

        if(_trEnd_ == child)
        {
            _trEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_tr_ == oldChild)
        {
            setTr((TTr) newChild);
            return;
        }

        if(_entriesp_ == oldChild)
        {
            setEntriesp((PEntriesp) newChild);
            return;
        }

        if(_trEnd_ == oldChild)
        {
            setTrEnd((TTrEnd) newChild);
            return;
        }

    }
}
