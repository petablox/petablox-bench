package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatementseq2Statementseqp extends PStatementseqp
{
    private PStatementseqp _statementseqp_;
    private TSemicolon _semicolon_;
    private PStatementp _statementp_;

    public AStatementseq2Statementseqp()
    {
    }

    public AStatementseq2Statementseqp(
        PStatementseqp _statementseqp_,
        TSemicolon _semicolon_,
        PStatementp _statementp_)
    {
        setStatementseqp(_statementseqp_);

        setSemicolon(_semicolon_);

        setStatementp(_statementp_);

    }
    public Object clone()
    {
        return new AStatementseq2Statementseqp(
            (PStatementseqp) cloneNode(_statementseqp_),
            (TSemicolon) cloneNode(_semicolon_),
            (PStatementp) cloneNode(_statementp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatementseq2Statementseqp(this);
    }

    public PStatementseqp getStatementseqp()
    {
        return _statementseqp_;
    }

    public void setStatementseqp(PStatementseqp node)
    {
        if(_statementseqp_ != null)
        {
            _statementseqp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _statementseqp_ = node;
    }

    public TSemicolon getSemicolon()
    {
        return _semicolon_;
    }

    public void setSemicolon(TSemicolon node)
    {
        if(_semicolon_ != null)
        {
            _semicolon_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _semicolon_ = node;
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
            + toString(_statementseqp_)
            + toString(_semicolon_)
            + toString(_statementp_);
    }

    void removeChild(Node child)
    {
        if(_statementseqp_ == child)
        {
            _statementseqp_ = null;
            return;
        }

        if(_semicolon_ == child)
        {
            _semicolon_ = null;
            return;
        }

        if(_statementp_ == child)
        {
            _statementp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_statementseqp_ == oldChild)
        {
            setStatementseqp((PStatementseqp) newChild);
            return;
        }

        if(_semicolon_ == oldChild)
        {
            setSemicolon((TSemicolon) newChild);
            return;
        }

        if(_statementp_ == oldChild)
        {
            setStatementp((PStatementp) newChild);
            return;
        }

    }
}
