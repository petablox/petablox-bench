package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AStatement721Statement72p extends PStatement72p
{
    private TElse _else_;
    private TOpenBr _openBr_;
    private PStatementseqp _statementseqp_;
    private TCloseBr _closeBr_;

    public AStatement721Statement72p()
    {
    }

    public AStatement721Statement72p(
        TElse _else_,
        TOpenBr _openBr_,
        PStatementseqp _statementseqp_,
        TCloseBr _closeBr_)
    {
        setElse(_else_);

        setOpenBr(_openBr_);

        setStatementseqp(_statementseqp_);

        setCloseBr(_closeBr_);

    }
    public Object clone()
    {
        return new AStatement721Statement72p(
            (TElse) cloneNode(_else_),
            (TOpenBr) cloneNode(_openBr_),
            (PStatementseqp) cloneNode(_statementseqp_),
            (TCloseBr) cloneNode(_closeBr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAStatement721Statement72p(this);
    }

    public TElse getElse()
    {
        return _else_;
    }

    public void setElse(TElse node)
    {
        if(_else_ != null)
        {
            _else_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _else_ = node;
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
            + toString(_else_)
            + toString(_openBr_)
            + toString(_statementseqp_)
            + toString(_closeBr_);
    }

    void removeChild(Node child)
    {
        if(_else_ == child)
        {
            _else_ = null;
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
        if(_else_ == oldChild)
        {
            setElse((TElse) newChild);
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
