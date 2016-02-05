package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyIntinitsp extends PIntinitsp
{

    public AEmptyIntinitsp()
    {
    }
    public Object clone()
    {
        return new AEmptyIntinitsp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyIntinitsp(this);
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
