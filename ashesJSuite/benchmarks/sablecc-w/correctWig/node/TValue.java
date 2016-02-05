package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TValue extends Token
{
    public TValue()
    {
        super.setText("value");
    }

    public TValue(int line, int pos)
    {
        super.setText("value");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TValue(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTValue(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TValue text.");
    }
}
