package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyTerminationp extends PTerminationp
{

    public AEmptyTerminationp()
    {
    }
    public Object clone()
    {
        return new AEmptyTerminationp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyTerminationp(this);
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
