package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyIntinitp extends PIntinitp
{

    public AEmptyIntinitp()
    {
    }
    public Object clone()
    {
        return new AEmptyIntinitp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyIntinitp(this);
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
