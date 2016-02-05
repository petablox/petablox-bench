package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyParametersp extends PParametersp
{

    public AEmptyParametersp()
    {
    }
    public Object clone()
    {
        return new AEmptyParametersp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyParametersp(this);
    }

    public String toString()
    {
        return "";
    }

    void removeChild(Node child)
    {
    }

    void replaceChild(Node oldChild, Node newChild)
    {
    }
}
