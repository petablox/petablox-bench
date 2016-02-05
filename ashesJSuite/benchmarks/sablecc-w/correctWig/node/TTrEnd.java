package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTrEnd extends Token
{
    public TTrEnd()
    {
        super.setText("</tr>");
    }

    public TTrEnd(int line, int pos)
    {
        super.setText("</tr>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTrEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTrEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTrEnd text.");
    }
}
