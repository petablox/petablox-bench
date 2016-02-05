package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class THeader2End extends Token
{
    public THeader2End()
    {
        super.setText("</h2>");
    }

    public THeader2End(int line, int pos)
    {
        super.setText("</h2>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new THeader2End(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTHeader2End(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change THeader2End text.");
    }
}
