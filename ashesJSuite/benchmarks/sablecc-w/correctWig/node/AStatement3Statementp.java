package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatement3Statementp extends PStatementp
{
    private TTake _take_;
    private TIdentifier _identifier_;
    private TOpenBr _openBr_;
    private PStatementseqp _statementseqp_;
    private TCloseBr _closeBr_;

    public AStatement3Statementp()
    {
    }

    public AStatement3Statementp(
        TTake _take_,
        TIdentifier _identifier_,
        TOpenBr _openBr_,
        PStatementseqp _statementseqp_,
        TCloseBr _closeBr_)
    {
        setTake(_take_);

        setIdentifier(_identifier_);

        setOpenBr(_openBr_);

        setStatementseqp(_statementseqp_);

        setCloseBr(_closeBr_);

    }
    public Object clone()
    {
        return new AStatement3Statementp(
            (TTake) cloneNode(_take_),
            (TIdentifier) cloneNode(_identifier_),
            (TOpenBr) cloneNode(_openBr_),
            (PStatementseqp) cloneNode(_statementseqp_),
            (TCloseBr) cloneNode(_closeBr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatement3Statementp(this);
    }

    public TTake getTake()
    {
        return _take_;
    }

    public void setTake(TTake node)
    {
        if(_take_ != null)
        {
            _take_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _take_ = node;
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

    public TOpenBr getOpenBr()
    {
        return _openBr_;
    }

    public void setOpenBr(TOpenBr node)
    {
        if(_openBr_ != null)
        {
            _openBr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _openBr_ = node;
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

    public TCloseBr getCloseBr()
    {
        return _closeBr_;
    }

    public void setCloseBr(TCloseBr node)
    {
        if(_closeBr_ != null)
        {
            _closeBr_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _closeBr_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_take_)
            + toString(_identifier_)
            + toString(_openBr_)
            + toString(_statementseqp_)
            + toString(_closeBr_);
    }

    void removeChild(Node child)
    {
        if(_take_ == child)
        {
            _take_ = null;
            return;
        }

        if(_identifier_ == child)
        {
            _identifier_ = null;
            return;
        }

        if(_openBr_ == child)
        {
            _openBr_ = null;
            return;
        }

        if(_statementseqp_ == child)
        {
            _statementseqp_ = null;
            return;
        }

        if(_closeBr_ == child)
        {
            _closeBr_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_take_ == oldChild)
        {
            setTake((TTake) newChild);
            return;
        }

        if(_identifier_ == oldChild)
        {
            setIdentifier((TIdentifier) newChild);
            return;
        }

        if(_openBr_ == oldChild)
        {
            setOpenBr((TOpenBr) newChild);
            return;
        }

        if(_statementseqp_ == oldChild)
        {
            setStatementseqp((PStatementseqp) newChild);
            return;
        }

        if(_closeBr_ == oldChild)
        {
            setCloseBr((TCloseBr) newChild);
            return;
        }

    }
}
