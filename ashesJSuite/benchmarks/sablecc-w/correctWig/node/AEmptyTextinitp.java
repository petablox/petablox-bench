package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class AEmptyTextinitp extends PTextinitp
{

    public AEmptyTextinitp()
    {
    }
    public Object clone()
    {
        return new AEmptyTextinitp();
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseAEmptyTextinitp(this);
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
