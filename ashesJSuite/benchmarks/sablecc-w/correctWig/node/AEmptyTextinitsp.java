package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyTextinitsp extends PTextinitsp
{

    public AEmptyTextinitsp()
    {
    }
    public Object clone()
    {
        return new AEmptyTextinitsp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyTextinitsp(this);
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
