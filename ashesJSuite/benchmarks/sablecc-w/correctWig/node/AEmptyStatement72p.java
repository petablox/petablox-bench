package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyStatement72p extends PStatement72p
{

    public AEmptyStatement72p()
    {
    }
    public Object clone()
    {
        return new AEmptyStatement72p();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyStatement72p(this);
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
