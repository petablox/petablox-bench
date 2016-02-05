package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AService1Servicep extends PServicep
{
    private TService _service_;
    private TOpenBr _openBr_;
    private PGlobalsp _globalsp_;
    private PDocumentsp _documentsp_;
    private PSessionsp _sessionsp_;
    private TCloseBr _closeBr_;

    public AService1Servicep()
    {
    }

    public AService1Servicep(
        TService _service_,
        TOpenBr _openBr_,
        PGlobalsp _globalsp_,
        PDocumentsp _documentsp_,
        PSessionsp _sessionsp_,
        TCloseBr _closeBr_)
    {
        setService(_service_);

        setOpenBr(_openBr_);

        setGlobalsp(_globalsp_);

        setDocumentsp(_documentsp_);

        setSessionsp(_sessionsp_);

        setCloseBr(_closeBr_);

    }
    public Object clone()
    {
        return new AService1Servicep(
            (TService) cloneNode(_service_),
            (TOpenBr) cloneNode(_openBr_),
            (PGlobalsp) cloneNode(_globalsp_),
            (PDocumentsp) cloneNode(_documentsp_),
            (PSessionsp) cloneNode(_sessionsp_),
            (TCloseBr) cloneNode(_closeBr_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAService1Servicep(this);
    }

    public TService getService()
    {
        return _service_;
    }

    public void setService(TService node)
    {
        if(_service_ != null)
        {
            _service_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _service_ = node;
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

    public PGlobalsp getGlobalsp()
    {
        return _globalsp_;
    }

    public void setGlobalsp(PGlobalsp node)
    {
        if(_globalsp_ != null)
        {
            _globalsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _globalsp_ = node;
    }

    public PDocumentsp getDocumentsp()
    {
        return _documentsp_;
    }

    public void setDocumentsp(PDocumentsp node)
    {
        if(_documentsp_ != null)
        {
            _documentsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _documentsp_ = node;
    }

    public PSessionsp getSessionsp()
    {
        return _sessionsp_;
    }

    public void setSessionsp(PSessionsp node)
    {
        if(_sessionsp_ != null)
        {
            _sessionsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _sessionsp_ = node;
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
            + toString(_service_)
            + toString(_openBr_)
            + toString(_globalsp_)
            + toString(_documentsp_)
            + toString(_sessionsp_)
            + toString(_closeBr_);
    }

    void removeChild(Node child)
    {
        if(_service_ == child)
        {
            _service_ = null;
            return;
        }

        if(_openBr_ == child)
        {
            _openBr_ = null;
            return;
        }

        if(_globalsp_ == child)
        {
            _globalsp_ = null;
            return;
        }

        if(_documentsp_ == child)
        {
            _documentsp_ = null;
            return;
        }

        if(_sessionsp_ == child)
        {
            _sessionsp_ = null;
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
        if(_service_ == oldChild)
        {
            setService((TService) newChild);
            return;
        }

        if(_openBr_ == oldChild)
        {
            setOpenBr((TOpenBr) newChild);
            return;
        }

        if(_globalsp_ == oldChild)
        {
            setGlobalsp((PGlobalsp) newChild);
            return;
        }

        if(_documentsp_ == oldChild)
        {
            setDocumentsp((PDocumentsp) newChild);
            return;
        }

        if(_sessionsp_ == oldChild)
        {
            setSessionsp((PSessionsp) newChild);
            return;
        }

        if(_closeBr_ == oldChild)
        {
            setCloseBr((TCloseBr) newChild);
            return;
        }

    }
}
