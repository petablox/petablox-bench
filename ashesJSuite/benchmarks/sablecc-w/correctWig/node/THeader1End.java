package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class THeader1End extends Token
{
    public THeader1End()
    {
        super.setText("</h1>");
    }

    public THeader1End(int line, int pos)
    {
        super.setText("</h1>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new THeader1End(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTHeader1End(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change THeader1End text.");
    }
}
