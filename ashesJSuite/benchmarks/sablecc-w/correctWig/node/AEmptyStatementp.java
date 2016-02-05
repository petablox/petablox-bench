package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyStatementp extends PStatementp
{

    public AEmptyStatementp()
    {
    }
    public Object clone()
    {
        return new AEmptyStatementp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyStatementp(this);
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
