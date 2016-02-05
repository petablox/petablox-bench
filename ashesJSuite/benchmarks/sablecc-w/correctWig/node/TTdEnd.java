package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTdEnd extends Token
{
    public TTdEnd()
    {
        super.setText("</td>");
    }

    public TTdEnd(int line, int pos)
    {
        super.setText("</td>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTdEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTdEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTdEnd text.");
    }
}
