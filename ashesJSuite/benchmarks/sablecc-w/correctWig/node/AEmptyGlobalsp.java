package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyGlobalsp extends PGlobalsp
{

    public AEmptyGlobalsp()
    {
    }
    public Object clone()
    {
        return new AEmptyGlobalsp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyGlobalsp(this);
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
