package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class ALocalVariable extends PVariable
{
    private PLocalName _localName_;

    public ALocalVariable()
    {
    }

    public ALocalVariable(
        PLocalName _localName_)
    {
        setLocalName(_localName_);

    }
    public Object clone()
    {
        return new ALocalVariable(
            (PLocalName) cloneNode(_localName_));
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseALocalVariable(this);
    }

    public PLocalName getLocalName()
    {
        return _localName_;
    }

    public void setLocalName(PLocalName node)
    {
        if(_localName_ != null)
        {
            _localName_.parent(null);
        }

        if(node != null)
        {
            if(node.parent() != null)
            {
                node.parent().removeChild(node);
            }

            node.parent(this);
        }

        _localName_ = node;
    }

    public String toString()
    {
        return ""
            + toString(_localName_);
    }

    void removeChild(Node child)
    {
        if(_localName_ == child)
        {
            _localName_ = null;
            return;
        }

    }

    void replaceChild(Node oldChild, Node newChild)
    {
        if(_localName_ == oldChild)
        {
            setLocalName((PLocalName) newChild);
            return;
        }

    }
}
