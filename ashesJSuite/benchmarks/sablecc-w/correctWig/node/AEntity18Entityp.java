package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity18Entityp extends PEntityp
{
    private PEntity181p _entity181p_;
    private PEntity182p _entity182p_;
    private PEntity183p _entity183p_;
    private PEntity184p _entity184p_;
    private THeight _height_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TNumber _number_;
    private TClose _close_;
    private PArgumentsp _argumentsp_;
    private TAppletEnd _appletEnd_;

    public AEntity18Entityp()
    {
    }

    public AEntity18Entityp(
        PEntity181p _entity181p_,
        PEntity182p _entity182p_,
        PEntity183p _entity183p_,
        PEntity184p _entity184p_,
        THeight _height_,
        TAssignNormaldoc _assignNormaldoc_,
        TNumber _number_,
        TClose _close_,
        PArgumentsp _argumentsp_,
        TAppletEnd _appletEnd_)
    {
        setEntity181p(_entity181p_);

        setEntity182p(_entity182p_);

        setEntity183p(_entity183p_);

        setEntity184p(_entity184p_);

        setHeight(_height_);

        setAssignNormaldoc(_assignNormaldoc_);

        setNumber(_number_);

        setClose(_close_);

        setArgumentsp(_argumentsp_);

        setAppletEnd(_appletEnd_);

    }
    public Object clone()
    {
        return new AEntity18Entityp(
            (PEntity181p) cloneNode(_entity181p_),
            (PEntity182p) cloneNode(_entity182p_),
            (PEntity183p) cloneNode(_entity183p_),
            (PEntity184p) cloneNode(_entity184p_),
            (THeight) cloneNode(_height_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TNumber) cloneNode(_number_),
            (TClose) cloneNode(_close_),
            (PArgumentsp) cloneNode(_argumentsp_),
            (TAppletEnd) cloneNode(_appletEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity18Entityp(this);
    }

    public PEntity181p getEntity181p()
    {
        return _entity181p_;
    }

    public void setEntity181p(PEntity181p node)
    {
        if(_entity181p_ != null)
        {
            _entity181p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity181p_ = node;
    }

    public PEntity182p getEntity182p()
    {
        return _entity182p_;
    }

    public void setEntity182p(PEntity182p node)
    {
        if(_entity182p_ != null)
        {
            _entity182p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity182p_ = node;
    }

    public PEntity183p getEntity183p()
    {
        return _entity183p_;
    }

    public void setEntity183p(PEntity183p node)
    {
        if(_entity183p_ != null)
        {
            _entity183p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity183p_ = node;
    }

    public PEntity184p getEntity184p()
    {
        return _entity184p_;
    }

    public void setEntity184p(PEntity184p node)
    {
        if(_entity184p_ != null)
        {
            _entity184p_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _entity184p_ = node;
    }

    public THeight getHeight()
    {
        return _height_;
    }

    public void setHeight(THeight node)
    {
        if(_height_ != null)
        {
            _height_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _height_ = node;
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

    public PArgumentsp getArgumentsp()
    {
        return _argumentsp_;
    }

    public void setArgumentsp(PArgumentsp node)
    {
        if(_argumentsp_ != null)
        {
            _argumentsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _argumentsp_ = node;
    }

    public TAppletEnd getAppletEnd()
    {
        return _appletEnd_;
    }

    public void setAppletEnd(TAppletEnd node)
    {
        if(_appletEnd_ != null)
        {
            _appletEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _appletEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_entity181p_)
            + toString(_entity182p_)
            + toString(_entity183p_)
            + toString(_entity184p_)
            + toString(_height_)
            + toString(_assignNormaldoc_)
            + toString(_number_)
            + toString(_close_)
            + toString(_argumentsp_)
            + toString(_appletEnd_);
    }

    void removeChild(Node child)
    {
        if(_entity181p_ == child)
        {
            _entity181p_ = null;
            return;
        }

        if(_entity182p_ == child)
        {
            _entity182p_ = null;
            return;
        }

        if(_entity183p_ == child)
        {
            _entity183p_ = null;
            return;
        }

        if(_entity184p_ == child)
        {
            _entity184p_ = null;
            return;
        }

        if(_height_ == child)
        {
            _height_ = null;
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

        if(_argumentsp_ == child)
        {
            _argumentsp_ = null;
            return;
        }

        if(_appletEnd_ == child)
        {
            _appletEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_entity181p_ == oldChild)
        {
            setEntity181p((PEntity181p) newChild);
            return;
        }

        if(_entity182p_ == oldChild)
        {
            setEntity182p((PEntity182p) newChild);
            return;
        }

        if(_entity183p_ == oldChild)
        {
            setEntity183p((PEntity183p) newChild);
            return;
        }

        if(_entity184p_ == oldChild)
        {
            setEntity184p((PEntity184p) newChild);
            return;
        }

        if(_height_ == oldChild)
        {
            setHeight((THeight) newChild);
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

        if(_argumentsp_ == oldChild)
        {
            setArgumentsp((PArgumentsp) newChild);
            return;
        }

        if(_appletEnd_ == oldChild)
        {
            setAppletEnd((TAppletEnd) newChild);
            return;
        }

    }
}
