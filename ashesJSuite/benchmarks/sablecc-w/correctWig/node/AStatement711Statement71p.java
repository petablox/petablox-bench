package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatement711Statement71p extends PStatement71p
{
    private TIf _if_;
    private PExpp _expp_;
    private TOpenBr _openBr_;
    private PStatementseqp _statementseqp_;
    private TCloseBr _closeBr_;

    public AStatement711Statement71p()
    {
    }

    public AStatement711Statement71p(
        TIf _if_,
        PExpp _expp_,
        TOpenBr _openBr_,
        PStatementseqp _statementseqp_,
        TCloseBr _closeBr_)
    {
        setIf(_if_);

        setExpp(_expp_);

        setOpenBr(_openBr_);

        setStatementseqp(_statementseqp_);

        setCloseBr(_closeBr_);

    }
    public Object clone()
    {
        return new AStatement711Statement71p(
            (TIf) cloneNode(_if_),
            (PExpp) cloneNode(_expp_),
            (TOpenBr) cloneNode(_openBr_),
            (PStatementseqp) cloneNode(_statementseqp_),
            (TCloseBr) cloneNode(_closeBr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatement711Statement71p(this);
    }

    public TIf getIf()
    {
        return _if_;
    }

    public void setIf(TIf node)
    {
        if(_if_ != null)
        {
            _if_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _if_ = node;
    }

    public PExpp getExpp()
    {
        return _expp_;
    }

    public void setExpp(PExpp node)
    {
        if(_expp_ != null)
        {
            _expp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _expp_ = node;
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
            + toString(_if_)
            + toString(_expp_)
            + toString(_openBr_)
            + toString(_statementseqp_)
            + toString(_closeBr_);
    }

    void removeChild(Node child)
    {
        if(_if_ == child)
        {
            _if_ = null;
            return;
        }

        if(_expp_ == child)
        {
            _expp_ = null;
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
        if(_if_ == oldChild)
        {
            setIf((TIf) newChild);
            return;
        }

        if(_expp_ == oldChild)
        {
            setExpp((PExpp) newChild);
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
