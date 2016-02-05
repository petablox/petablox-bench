package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TRandom extends Token
{
    public TRandom()
    {
        super.setText("random");
    }

    public TRandom(int line, int pos)
    {
        super.setText("random");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TRandom(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTRandom(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TRandom text.");
    }
}
