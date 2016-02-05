package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyBoolinitp extends PBoolinitp
{

    public AEmptyBoolinitp()
    {
    }
    public Object clone()
    {
        return new AEmptyBoolinitp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyBoolinitp(this);
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
