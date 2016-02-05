package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TListEnd extends Token
{
    public TListEnd()
    {
        super.setText("</ul>");
    }

    public TListEnd(int line, int pos)
    {
        super.setText("</ul>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TListEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTListEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TListEnd text.");
    }
}
