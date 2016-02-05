package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAutoInc extends Token
{
    public TAutoInc()
    {
        super.setText("++");
    }

    public TAutoInc(int line, int pos)
    {
        super.setText("++");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAutoInc(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAutoInc(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAutoInc text.");
    }
}
