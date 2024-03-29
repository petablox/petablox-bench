/* This file was generated by SableCC (http://www.sable.mcgill.ca/sablecc/). */

package soot.jimple.parser.node;

import java.util.*;
import soot.jimple.parser.analysis.*;

public final class ABaseNonvoidType extends PNonvoidType
{
    private PBaseTypeNoName _baseTypeNoName_;
    private final LinkedList _arrayBrackets_ = new TypedLinkedList(new ArrayBrackets_Cast());

    public ABaseNonvoidType()
    {
    }

    public ABaseNonvoidType(
        PBaseTypeNoName _baseTypeNoName_,
        List _arrayBrackets_)
    {
        setBaseTypeNoName(_baseTypeNoName_);

        {
            Object temp[] = _arrayBrackets_.toArray();
            for(int i = 0; i < temp.length; i++)
            {
                this._arrayBrackets_.add(temp[i]);
            }
        }

    }

    public ABaseNonvoidType(
        PBaseTypeNoName _baseTypeNoName_,
        XPArrayBrackets _arrayBrackets_)
    {
        setBaseTypeNoName(_baseTypeNoName_);

        if(_arrayBrackets_ != null)
        {
            while(_arrayBrackets_ instanceof X1PArrayBrackets)
            {
                this._arrayBrackets_.addFirst(((X1PArrayBrackets) _arrayBrackets_).getPArrayBrackets());
                _arrayBrackets_ = ((X1PArrayBrackets) _arrayBrackets_).getXPArrayBrackets();
            }
            this._arrayBrackets_.addFirst(((X2PArrayBrackets) _arrayBrackets_).getPArrayBrackets());
        }

    }
    public Object clone()
    {
        return new ABaseNonvoidType(
            (PBaseTypeNoName) cloneNode(_baseTypeNoName_),
            cloneList(_arrayBrackets_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseABaseNonvoidType(this);
    }

    public PBaseTypeNoName getBaseTypeNoName()
    {
        return _baseTypeNoName_;
    }

    public void setBaseTypeNoName(PBaseTypeNoName node)
    {
        if(_baseTypeNoName_ != null)
        {
            _baseTypeNoName_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _baseTypeNoName_ = node;
    }

    public LinkedList getArrayBrackets()
    {
        return _arrayBrackets_;
    }

    public void setArrayBrackets(List list)
    {
        Object temp[] = list.toArray();
        for(int i = 0; i < temp.length; i++)
        {
            _arrayBrackets_.add(temp[i]);
        }
    }

    public String toString()
    {
        return ""
            + toString(_baseTypeNoName_)
            + toString(_arrayBrackets_);
    }

    void removeChild(Node child)
    {
        if(_baseTypeNoName_ == child)
        {
            _baseTypeNoName_ = null;
            return;
        }

        if(_arrayBrackets_.remove(child))
        {
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_baseTypeNoName_ == oldChild)
        {
            setBaseTypeNoName((PBaseTypeNoName) newChild);
            return;
        }

        for(ListIterator i = _arrayBrackets_.listIterator(); i.hasNext();)
        {
            if(i.next() == oldChild)
            {
                if(newChild != null)
                {
                    i.set(newChild);
                    oldChild.parent(null);
                    return;
                }

                i.remove();
                oldChild.parent(null);
                return;
            }
        }

    }

    private class ArrayBrackets_Cast implements Cast
    {
        public Object cast(Object o)
        {
            PArrayBrackets node = (PArrayBrackets) o;

            if((node.parent() != null) &&
                (node.parent() != ABaseNonvoidType.this))
            {
                node.parent().removeChild(node);
            }

            if((node.parent() == null) ||
                (node.parent() != ABaseNonvoidType.this))
            {
                node.parent(ABaseNonvoidType.this);
            }

            return node;
        }
    }
}
