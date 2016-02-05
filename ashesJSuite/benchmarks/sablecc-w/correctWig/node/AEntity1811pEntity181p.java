package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity1811pEntity181p extends PEntity181p
{
    private TApplet _applet_;
    private TCodebase _codebase_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;

    public AEntity1811pEntity181p()
    {
    }

    public AEntity1811pEntity181p(
        TApplet _applet_,
        TCodebase _codebase_,
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_)
    {
        setApplet(_applet_);

        setCodebase(_codebase_);

        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity1811pEntity181p(
            (TApplet) cloneNode(_applet_),
            (TCodebase) cloneNode(_codebase_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity1811pEntity181p(this);
    }

    public TApplet getApplet()
    {
        return _applet_;
    }

    public void setApplet(TApplet node)
    {
        if(_applet_ != null)
        {
            _applet_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _applet_ = node;
    }

    public TCodebase getCodebase()
    {
        return _codebase_;
    }

    public void setCodebase(TCodebase node)
    {
        if(_codebase_ != null)
        {
            _codebase_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _codebase_ = node;
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

    public TQuote getQuote()
    {
        return _quote_;
    }

    public void setQuote(TQuote node)
    {
        if(_quote_ != null)
        {
            _quote_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _quote_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_applet_)
            + toString(_codebase_)
            + toString(_assignNormaldoc_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_applet_ == child)
        {
            _applet_ = null;
            return;
        }

        if(_codebase_ == child)
        {
            _codebase_ = null;
            return;
        }

        if(_assignNormaldoc_ == child)
        {
            _assignNormaldoc_ = null;
            return;
        }

        if(_quote_ == child)
        {
            _quote_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_applet_ == oldChild)
        {
            setApplet((TApplet) newChild);
            return;
        }

        if(_codebase_ == oldChild)
        {
            setCodebase((TCodebase) newChild);
            return;
        }

        if(_assignNormaldoc_ == oldChild)
        {
            setAssignNormaldoc((TAssignNormaldoc) newChild);
            return;
        }

        if(_quote_ == oldChild)
        {
            setQuote((TQuote) newChild);
            return;
        }

    }
}
