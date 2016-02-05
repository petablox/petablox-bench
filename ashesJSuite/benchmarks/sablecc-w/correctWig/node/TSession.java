package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TSession extends Token
{
    public TSession()
    {
        super.setText("session");
    }

    public TSession(int line, int pos)
    {
        super.setText("session");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TSession(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTSession(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TSession text.");
    }
}
