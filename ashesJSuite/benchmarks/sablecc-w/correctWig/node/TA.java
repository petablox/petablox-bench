package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TA extends Token
{
    public TA()
    {
        super.setText("<a");
    }

    public TA(int line, int pos)
    {
        super.setText("<a");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TA(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTA(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TA text.");
    }
}
