package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTableEnd extends Token
{
    public TTableEnd()
    {
        super.setText("</table>");
    }

    public TTableEnd(int line, int pos)
    {
        super.setText("</table>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTableEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTableEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTableEnd text.");
    }
}
