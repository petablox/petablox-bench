package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TSystem extends Token
{
    public TSystem()
    {
        super.setText("system");
    }

    public TSystem(int line, int pos)
    {
        super.setText("system");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TSystem(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTSystem(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TSystem text.");
    }
}
