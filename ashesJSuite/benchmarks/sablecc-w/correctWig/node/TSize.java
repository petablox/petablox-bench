package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TSize extends Token
{
    public TSize()
    {
        super.setText("size");
    }

    public TSize(int line, int pos)
    {
        super.setText("size");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TSize(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTSize(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TSize text.");
    }
}
