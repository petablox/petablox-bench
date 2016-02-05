package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TSelectEnd extends Token
{
    public TSelectEnd()
    {
        super.setText("</select>");
    }

    public TSelectEnd(int line, int pos)
    {
        super.setText("</select>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TSelectEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTSelectEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TSelectEnd text.");
    }
}
