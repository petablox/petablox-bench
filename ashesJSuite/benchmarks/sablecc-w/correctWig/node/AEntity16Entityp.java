package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity16Entityp extends PEntityp
{
    private PEntity161p _entity161p_;
    private PEntity162p _entity162p_;
    private TTextConst _textConst_;
    private TSize _size_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TNumber _number_;
    private TClose _close_;

    public AEntity16Entityp()
    {
    }

    public AEntity16Entityp(
        PEntity161p _entity161p_,
        PEntity162p _entity162p_,
        TTextConst _textConst_,
        TSize _size_,
        TAssignNormaldoc _assignNormaldoc_,
        TNumber _number_,
        TClose _close_)
    {
        setEntity161p(_entity161p_);

        setEntity162p(_entity162p_);

        setTextConst(_textConst_);

        setSize(_size_);

        setAssignNormaldoc(_assignNormaldoc_);

        setNumber(_number_);

        setClose(_close_);

    }
    public Object clone()
    {
        return new AEntity16Entityp(
            (PEntity161p) cloneNode(_entity161p_),
            (PEntity162p) cloneNode(_entity162p_),
            (TTextConst) cloneNode(_textConst_),
            (TSize) cloneNode(_size_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TNumber) cloneNode(_number_),
            (TClose) cloneNode(_close_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity16Entityp(this);
    }

    public PEntity161p getEntity161p()
    {
        return _entity161p_;
    }

    public void setEntity161p(PEntity161p node)
    {
        if(_entity161p_ != null)
        {
            _entity161p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity161p_ = node;
    }

    public PEntity162p getEntity162p()
    {
        return _entity162p_;
    }

    public void setEntity162p(PEntity162p node)
    {
        if(_entity162p_ != null)
        {
            _entity162p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity162p_ = node;
    }

    public TTextConst getTextConst()
    {
        return _textConst_;
    }

    public void setTextConst(TTextConst node)
    {
        if(_textConst_ != null)
        {
            _textConst_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _textConst_ = node;
    }

    public TSize getSize()
    {
        return _size_;
    }

    public void setSize(TSize node)
    {
        if(_size_ != null)
        {
            _size_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _size_ = node;
    }

    public TAssignNormaldoc getAssignNormaldoc()
    {
        return _assignNormaldoc_;
    }

    public void setAssignNormaldoc(TAssignNormaldoc node)
    {
        if(_assignNormaldoc_ != null)
        {
            _assignNormaldoc_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _assignNormaldoc_ = node;
    }

    public TNumber getNumber()
    {
        return _number_;
    }

    public void setNumber(TNumber node)
    {
        if(_number_ != null)
        {
            _number_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _number_ = node;
    }

    public TClose getClose()
    {
        return _close_;
    }

    public void setClose(TClose node)
    {
        if(_close_ != null)
        {
            _close_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _close_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_entity161p_)
            + toString(_entity162p_)
            + toString(_textConst_)
            + toString(_size_)
            + toString(_assignNormaldoc_)
            + toString(_number_)
            + toString(_close_);
    }

    void removeChild(Node child)
    {
        if(_entity161p_ == child)
        {
            _entity161p_ = null;
            return;
        }

        if(_entity162p_ == child)
        {
            _entity162p_ = null;
            return;
        }

        if(_textConst_ == child)
        {
            _textConst_ = null;
            return;
        }

        if(_size_ == child)
        {
            _size_ = null;
            return;
        }

        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

        if(_number_ == child)
        {
            _number_ = null;
            return;
        }

        if(_close_ == child)
        {
            _close_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entity161p_ == oldChild)
        {
            setEntity161p((PEntity161p) newChild);
            return;
        }

        if(_entity162p_ == oldChild)
        {
            setEntity162p((PEntity162p) newChild);
            return;
        }

        if(_textConst_ == oldChild)
        {
            setTextConst((TTextConst) newChild);
            return;
        }

        if(_size_ == oldChild)
        {
            setSize((TSize) newChild);
            return;
        }

        if(_assignNormaldoc_ == oldChild)
        {
            setAssignNormaldoc((TAssignNormaldoc) newChild);
            return;
        }

        if(_number_ == oldChild)
        {
            setNumber((TNumber) newChild);
            return;
        }

        if(_close_ == oldChild)
        {
            setClose((TClose) newChild);
            return;
        }

    }
}
