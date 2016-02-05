package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class THeader1 extends Token
{
    public THeader1()
    {
        super.setText("<h1>");
    }

    public THeader1(int line, int pos)
    {
        super.setText("<h1>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new THeader1(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTHeader1(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change THeader1 text.");
    }
}
