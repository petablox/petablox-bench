package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyTitlep extends PTitlep
{

    public AEmptyTitlep()
    {
    }
    public Object clone()
    {
        return new AEmptyTitlep();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyTitlep(this);
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
