package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class Start extends Node
{
    private PFile _pFile_;
    private EOF _eof_;

    public Start()
    {
    }

    public Start(
        PFile _pFile_,
        EOF _eof_)
    {
        setPFile(_pFile_);
        setEOF(_eof_);
    }

    public Object clone()
    {
        return new Start(
            (PFile) cloneNode(_pFile_),
            (EOF) cloneNode(_eof_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseStart(this);
    }

    public PFile getPFile()
    {
        return _pFile_;
    }

    public void setPFile(PFile node)
    {
        if(_pFile_ != null)
        {
            _pFile_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _pFile_ = node;
    }

    public EOF getEOF()
    {
        return _eof_;
    }

    public void setEOF(EOF node)
    {
        if(_eof_ != null)
        {
            _eof_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _eof_ = node;
    }

    void removeChild(Node child)
    {
        if(_pFile_ == child)
        {
            _pFile_ = null;
            return;
        }

        if(_eof_ == child)
        {
            _eof_ = null;
            return;
        }
    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_pFile_ == oldChild)
        {
            setPFile((PFile) newChild);
            return;
        }

        if(_eof_ == oldChild)
        {
            setEOF((EOF) newChild);
            return;
        }
    }

    public String toString()
    {
        return "" +
            toString(_pFile_) +
            toString(_eof_);
    }
}
