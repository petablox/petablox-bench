package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAssignSes extends Token
{
    public TAssignSes()
    {
        super.setText(":=");
    }

    public TAssignSes(int line, int pos)
    {
        super.setText(":=");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAssignSes(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAssignSes(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAssignSes text.");
    }
}
