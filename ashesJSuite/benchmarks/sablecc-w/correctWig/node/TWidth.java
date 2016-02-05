package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TWidth extends Token
{
    public TWidth()
    {
        super.setText("width");
    }

    public TWidth(int line, int pos)
    {
        super.setText("width");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TWidth(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTWidth(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TWidth text.");
    }
}
