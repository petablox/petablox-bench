package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class ASession1Sessionp extends PSessionp
{
    private TSession _session_;
    private TIdentifier _identifier_;
    private TOpenBr _openBr_;
    private PLocalsp _localsp_;
    private PStatementseqp _statementseqp_;
    private TCloseBr _closeBr_;
    private PTerminationp _terminationp_;

    public ASession1Sessionp()
    {
    }

    public ASession1Sessionp(
        TSession _session_,
        TIdentifier _identifier_,
        TOpenBr _openBr_,
        PLocalsp _localsp_,
        PStatementseqp _statementseqp_,
        TCloseBr _closeBr_,
        PTerminationp _terminationp_)
    {
        setSession(_session_);

        setIdentifier(_identifier_);

        setOpenBr(_openBr_);

        setLocalsp(_localsp_);

        setStatementseqp(_statementseqp_);

        setCloseBr(_closeBr_);

        setTerminationp(_terminationp_);

    }
    public Object clone()
    {
        return new ASession1Sessionp(
            (TSession) cloneNode(_session_),
            (TIdentifier) cloneNode(_identifier_),
            (TOpenBr) cloneNode(_openBr_),
            (PLocalsp) cloneNode(_localsp_),
            (PStatementseqp) cloneNode(_statementseqp_),
            (TCloseBr) cloneNode(_closeBr_),
            (PTerminationp) cloneNode(_terminationp_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseASession1Sessionp(this);
    }

    public TSession getSession()
    {
        return _session_;
    }

    public void setSession(TSession node)
    {
        if(_session_ != null)
        {
            _session_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _session_ = node;
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

    public PLocalsp getLocalsp()
    {
        return _localsp_;
    }

    public void setLocalsp(PLocalsp node)
    {
        if(_localsp_ != null)
        {
            _localsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _localsp_ = node;
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

    public PTerminationp getTerminationp()
    {
        return _terminationp_;
    }

    public void setTerminationp(PTerminationp node)
    {
        if(_terminationp_ != null)
        {
            _terminationp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _terminationp_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_session_)
            + toString(_identifier_)
            + toString(_openBr_)
            + toString(_localsp_)
            + toString(_statementseqp_)
            + toString(_closeBr_)
            + toString(_terminationp_);
    }

    void removeChild(Node child)
    {
        if(_session_ == child)
        {
            _session_ = null;
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

        if(_localsp_ == child)
        {
            _localsp_ = null;
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

        if(_terminationp_ == child)
        {
            _terminationp_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_session_ == oldChild)
        {
            setSession((TSession) newChild);
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

        if(_localsp_ == oldChild)
        {
            setLocalsp((PLocalsp) newChild);
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

        if(_terminationp_ == oldChild)
        {
            setTerminationp((PTerminationp) newChild);
            return;
        }

    }
}
