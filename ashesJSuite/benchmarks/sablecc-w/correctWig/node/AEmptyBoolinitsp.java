package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyBoolinitsp extends PBoolinitsp
{

    public AEmptyBoolinitsp()
    {
    }
    public Object clone()
    {
        return new AEmptyBoolinitsp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyBoolinitsp(this);
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
