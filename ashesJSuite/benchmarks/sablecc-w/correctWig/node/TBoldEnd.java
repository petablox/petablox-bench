package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TBoldEnd extends Token
{
    public TBoldEnd()
    {
        super.setText("</b>");
    }

    public TBoldEnd(int line, int pos)
    {
        super.setText("</b>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TBoldEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTBoldEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TBoldEnd text.");
    }
}
