package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TLocal extends Token
{
    public TLocal()
    {
        super.setText("local");
    }

    public TLocal(int line, int pos)
    {
        super.setText("local");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TLocal(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTLocal(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TLocal text.");
    }
}
