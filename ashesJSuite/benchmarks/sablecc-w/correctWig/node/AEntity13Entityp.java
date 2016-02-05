package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity13Entityp extends PEntityp
{
    private TTable _table_;
    private PRowsp _rowsp_;
    private TTableEnd _tableEnd_;

    public AEntity13Entityp()
    {
    }

    public AEntity13Entityp(
        TTable _table_,
        PRowsp _rowsp_,
        TTableEnd _tableEnd_)
    {
        setTable(_table_);

        setRowsp(_rowsp_);

        setTableEnd(_tableEnd_);

    }
    public Object clone()
    {
        return new AEntity13Entityp(
            (TTable) cloneNode(_table_),
            (PRowsp) cloneNode(_rowsp_),
            (TTableEnd) cloneNode(_tableEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity13Entityp(this);
    }

    public TTable getTable()
    {
        return _table_;
    }

    public void setTable(TTable node)
    {
        if(_table_ != null)
        {
            _table_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _table_ = node;
    }

    public PRowsp getRowsp()
    {
        return _rowsp_;
    }

    public void setRowsp(PRowsp node)
    {
        if(_rowsp_ != null)
        {
            _rowsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _rowsp_ = node;
    }

    public TTableEnd getTableEnd()
    {
        return _tableEnd_;
    }

    public void setTableEnd(TTableEnd node)
    {
        if(_tableEnd_ != null)
        {
            _tableEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _tableEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_table_)
            + toString(_rowsp_)
            + toString(_tableEnd_);
    }

    void removeChild(Node child)
    {
        if(_table_ == child)
        {
            _table_ = null;
            return;
        }

        if(_rowsp_ == child)
        {
            _rowsp_ = null;
            return;
        }

        if(_tableEnd_ == child)
        {
            _tableEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_table_ == oldChild)
        {
            setTable((TTable) newChild);
            return;
        }

        if(_rowsp_ == oldChild)
        {
            setRowsp((PRowsp) newChild);
            return;
        }

        if(_tableEnd_ == oldChild)
        {
            setTableEnd((TTableEnd) newChild);
            return;
        }

    }
}
