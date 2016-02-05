package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TOut extends Token
{
    public TOut()
    {
        super.setText("->");
    }

    public TOut(int line, int pos)
    {
        super.setText("->");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TOut(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTOut(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TOut text.");
    }
}
