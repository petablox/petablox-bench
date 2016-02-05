package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TInclude extends Token
{
    public TInclude()
    {
        super.setText("<include");
    }

    public TInclude(int line, int pos)
    {
        super.setText("<include");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TInclude(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTInclude(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TInclude text.");
    }
}
