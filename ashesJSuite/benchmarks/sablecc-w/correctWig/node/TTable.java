package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTable extends Token
{
    public TTable()
    {
        super.setText("<table>");
    }

    public TTable(int line, int pos)
    {
        super.setText("<table>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTable(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTable(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTable text.");
    }
}
