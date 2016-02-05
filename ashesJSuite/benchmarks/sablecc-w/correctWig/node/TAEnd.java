package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAEnd extends Token
{
    public TAEnd()
    {
        super.setText("</a>");
    }

    public TAEnd(int line, int pos)
    {
        super.setText("</a>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAEnd text.");
    }
}
