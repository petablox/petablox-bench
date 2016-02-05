package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TIn extends Token
{
    public TIn()
    {
        super.setText("<-");
    }

    public TIn(int line, int pos)
    {
        super.setText("<-");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TIn(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTIn(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TIn text.");
    }
}
