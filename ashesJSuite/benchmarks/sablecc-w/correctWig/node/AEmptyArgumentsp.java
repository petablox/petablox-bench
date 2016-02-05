package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyArgumentsp extends PArgumentsp
{

    public AEmptyArgumentsp()
    {
    }
    public Object clone()
    {
        return new AEmptyArgumentsp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyArgumentsp(this);
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
