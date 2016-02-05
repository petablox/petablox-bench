package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntries1Entriesp extends PEntriesp
{
    private PEntryp _entryp_;

    public AEntries1Entriesp()
    {
    }

    public AEntries1Entriesp(
        PEntryp _entryp_)
    {
        setEntryp(_entryp_);

    }
    public Object clone()
    {
        return new AEntries1Entriesp(
            (PEntryp) cloneNode(_entryp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntries1Entriesp(this);
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
            + toString(_entryp_);
    }

    void removeChild(Node child)
    {
        if(_entryp_ == child)
        {
            _entryp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entryp_ == oldChild)
        {
            setEntryp((PEntryp) newChild);
            return;
        }

    }
}
