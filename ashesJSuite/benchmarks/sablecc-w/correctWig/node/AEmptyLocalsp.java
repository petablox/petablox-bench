package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyLocalsp extends PLocalsp
{

    public AEmptyLocalsp()
    {
    }
    public Object clone()
    {
        return new AEmptyLocalsp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyLocalsp(this);
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
