package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity101pEntity10p extends PEntity10p
{
    private TInclude _include_;
    private TFile _file_;
    private TAssignNormaldoc _assignNormaldoc_;
    private TQuote _quote_;

    public AEntity101pEntity10p()
    {
    }

    public AEntity101pEntity10p(
        TInclude _include_,
        TFile _file_,
        TAssignNormaldoc _assignNormaldoc_,
        TQuote _quote_)
    {
        setInclude(_include_);

        setFile(_file_);

        setAssignNormaldoc(_assignNormaldoc_);

        setQuote(_quote_);

    }
    public Object clone()
    {
        return new AEntity101pEntity10p(
            (TInclude) cloneNode(_include_),
            (TFile) cloneNode(_file_),
            (TAssignNormaldoc) cloneNode(_assignNormaldoc_),
            (TQuote) cloneNode(_quote_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity101pEntity10p(this);
    }

    public TInclude getInclude()
    {
        return _include_;
    }

    public void setInclude(TInclude node)
    {
        if(_include_ != null)
        {
            _include_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _include_ = node;
    }

    public TFile getFile()
    {
        return _file_;
    }

    public void setFile(TFile node)
    {
        if(_file_ != null)
        {
            _file_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _file_ = node;
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
            + toString(_include_)
            + toString(_file_)
            + toString(_assignNormaldoc_)
            + toString(_quote_);
    }

    void removeChild(Node child)
    {
        if(_include_ == child)
        {
            _include_ = null;
            return;
        }

        if(_file_ == child)
        {
            _file_ = null;
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
        if(_include_ == oldChild)
        {
            setInclude((TInclude) newChild);
            return;
        }

        if(_file_ == oldChild)
        {
            setFile((TFile) newChild);
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
