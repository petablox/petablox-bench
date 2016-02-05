package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AExp2Expp extends PExpp
{
    private PExpp _expp_;
    private TLeftBrack _leftBrack_;
    private PExppInt _exppInt_;
    private POrexpp _orexpp_;
    private TRightBrack _rightBrack_;

    public AExp2Expp()
    {
    }

    public AExp2Expp(
        PExpp _expp_,
        TLeftBrack _leftBrack_,
        PExppInt _exppInt_,
        POrexpp _orexpp_,
        TRightBrack _rightBrack_)
    {
        setExpp(_expp_);

        setLeftBrack(_leftBrack_);

        setExppInt(_exppInt_);

        setOrexpp(_orexpp_);

        setRightBrack(_rightBrack_);

    }
    public Object clone()
    {
        return new AExp2Expp(
            (PExpp) cloneNode(_expp_),
            (TLeftBrack) cloneNode(_leftBrack_),
            (PExppInt) cloneNode(_exppInt_),
            (POrexpp) cloneNode(_orexpp_),
            (TRightBrack) cloneNode(_rightBrack_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAExp2Expp(this);
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

    public TLeftBrack getLeftBrack()
    {
        return _leftBrack_;
    }

    public void setLeftBrack(TLeftBrack node)
    {
        if(_leftBrack_ != null)
        {
            _leftBrack_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _leftBrack_ = node;
    }

    public PExppInt getExppInt()
    {
        return _exppInt_;
    }

    public void setExppInt(PExppInt node)
    {
        if(_exppInt_ != null)
        {
            _exppInt_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _exppInt_ = node;
    }

    public POrexpp getOrexpp()
    {
        return _orexpp_;
    }

    public void setOrexpp(POrexpp node)
    {
        if(_orexpp_ != null)
        {
            _orexpp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _orexpp_ = node;
    }

    public TRightBrack getRightBrack()
    {
        return _rightBrack_;
    }

    public void setRightBrack(TRightBrack node)
    {
        if(_rightBrack_ != null)
        {
            _rightBrack_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rightBrack_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_expp_)
            + toString(_leftBrack_)
            + toString(_exppInt_)
            + toString(_orexpp_)
            + toString(_rightBrack_);
    }

    void removeChild(Node child)
    {
        if(_expp_ == child)
        {
            _expp_ = null;
            return;
        }

        if(_leftBrack_ == child)
        {
            _leftBrack_ = null;
            return;
        }

        if(_exppInt_ == child)
        {
            _exppInt_ = null;
            return;
        }

        if(_orexpp_ == child)
        {
            _orexpp_ = null;
            return;
        }

        if(_rightBrack_ == child)
        {
            _rightBrack_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_expp_ == oldChild)
        {
            setExpp((PExpp) newChild);
            return;
        }

        if(_leftBrack_ == oldChild)
        {
            setLeftBrack((TLeftBrack) newChild);
            return;
        }

        if(_exppInt_ == oldChild)
        {
            setExppInt((PExppInt) newChild);
            return;
        }

        if(_orexpp_ == oldChild)
        {
            setOrexpp((POrexpp) newChild);
            return;
        }

        if(_rightBrack_ == oldChild)
        {
            setRightBrack((TRightBrack) newChild);
            return;
        }

    }
}
