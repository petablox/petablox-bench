package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class THeader2 extends Token
{
    public THeader2()
    {
        super.setText("<h2>");
    }

    public THeader2(int line, int pos)
    {
        super.setText("<h2>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new THeader2(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTHeader2(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change THeader2 text.");
    }
}
