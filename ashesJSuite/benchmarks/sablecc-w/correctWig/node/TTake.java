package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTake extends Token
{
    public TTake()
    {
        super.setText("take");
    }

    public TTake(int line, int pos)
    {
        super.setText("take");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTake(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTake(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTake text.");
    }
}
