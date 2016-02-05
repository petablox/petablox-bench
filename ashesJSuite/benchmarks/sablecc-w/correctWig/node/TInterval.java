package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TInterval extends Token
{
    public TInterval()
    {
        super.setText("..");
    }

    public TInterval(int line, int pos)
    {
        super.setText("..");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TInterval(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTInterval(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TInterval text.");
    }
}
