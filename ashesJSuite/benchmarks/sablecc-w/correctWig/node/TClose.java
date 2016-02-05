package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TClose extends Token
{
    public TClose()
    {
        super.setText(">");
    }

    public TClose(int line, int pos)
    {
        super.setText(">");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TClose(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTClose(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TClose text.");
    }
}
