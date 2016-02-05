package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyStringp extends PStringp
{

    public AEmptyStringp()
    {
    }
    public Object clone()
    {
        return new AEmptyStringp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyStringp(this);
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
