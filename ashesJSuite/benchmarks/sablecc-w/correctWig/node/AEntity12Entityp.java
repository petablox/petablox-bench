package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEntity12Entityp extends PEntityp
{
    private TList _list_;
    private PItemsp _itemsp_;
    private TListEnd _listEnd_;

    public AEntity12Entityp()
    {
    }

    public AEntity12Entityp(
        TList _list_,
        PItemsp _itemsp_,
        TListEnd _listEnd_)
    {
        setList(_list_);

        setItemsp(_itemsp_);

        setListEnd(_listEnd_);

    }
    public Object clone()
    {
        return new AEntity12Entityp(
            (TList) cloneNode(_list_),
            (PItemsp) cloneNode(_itemsp_),
            (TListEnd) cloneNode(_listEnd_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEntity12Entityp(this);
    }

    public TList getList()
    {
        return _list_;
    }

    public void setList(TList node)
    {
        if(_list_ != null)
        {
            _list_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _list_ = node;
    }

    public PItemsp getItemsp()
    {
        return _itemsp_;
    }

    public void setItemsp(PItemsp node)
    {
        if(_itemsp_ != null)
        {
            _itemsp_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _itemsp_ = node;
    }

    public TListEnd getListEnd()
    {
        return _listEnd_;
    }

    public void setListEnd(TListEnd node)
    {
        if(_listEnd_ != null)
        {
            _listEnd_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _listEnd_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_list_)
            + toString(_itemsp_)
            + toString(_listEnd_);
    }

    void removeChild(Node child)
    {
        if(_list_ == child)
        {
            _list_ = null;
            return;
        }

        if(_itemsp_ == child)
        {
            _itemsp_ = null;
            return;
        }

        if(_listEnd_ == child)
        {
            _listEnd_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_list_ == oldChild)
        {
            setList((TList) newChild);
            return;
        }

        if(_itemsp_ == oldChild)
        {
            setItemsp((PItemsp) newChild);
            return;
        }

        if(_listEnd_ == oldChild)
        {
            setListEnd((TListEnd) newChild);
            return;
        }

    }
}
