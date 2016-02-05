package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatementseq1Statementseqp extends PStatementseqp
{
    private PStatementp _statementp_;

    public AStatementseq1Statementseqp()
    {
    }

    public AStatementseq1Statementseqp(
        PStatementp _statementp_)
    {
        setStatementp(_statementp_);

    }
    public Object clone()
    {
        return new AStatementseq1Statementseqp(
            (PStatementp) cloneNode(_statementp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatementseq1Statementseqp(this);
    }

    public PStatementp getStatementp()
    {
        return _statementp_;
    }

    public void setStatementp(PStatementp node)
    {
        if(_statementp_ != null)
        {
            _statementp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _statementp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_statementp_);
    }

    void removeChild(Node child)
    {
        if(_statementp_ == child)
        {
            _statementp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_statementp_ == oldChild)
        {
            setStatementp((PStatementp) newChild);
            return;
        }

    }
}
