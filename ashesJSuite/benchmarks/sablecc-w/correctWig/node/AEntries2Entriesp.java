package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntries2Entriesp extends PEntriesp
{
    private PEntriesp _entriesp_;
    private PEntryp _entryp_;

    public AEntries2Entriesp()
    {
    }

    public AEntries2Entriesp(
        PEntriesp _entriesp_,
        PEntryp _entryp_)
    {
        setEntriesp(_entriesp_);

        setEntryp(_entryp_);

    }
    public Object clone()
    {
        return new AEntries2Entriesp(
            (PEntriesp) cloneNode(_entriesp_),
            (PEntryp) cloneNode(_entryp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntries2Entriesp(this);
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

    public PEntryp getEntryp()
    {
        return _entryp_;
    }

    public void setEntryp(PEntryp node)
    {
        if(_entryp_ != null)
        {
            _entryp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entryp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_entriesp_)
            + toString(_entryp_);
    }

    void removeChild(Node child)
    {
        if(_entriesp_ == child)
        {
            _entriesp_ = null;
            return;
        }

        if(_entryp_ == child)
        {
            _entryp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entriesp_ == oldChild)
        {
            setEntriesp((PEntriesp) newChild);
            return;
        }

        if(_entryp_ == oldChild)
        {
            setEntryp((PEntryp) newChild);
            return;
        }

    }
}
