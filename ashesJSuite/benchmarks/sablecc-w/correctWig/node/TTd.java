package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTd extends Token
{
    public TTd()
    {
        super.setText("<td>");
    }

    public TTd(int line, int pos)
    {
        super.setText("<td>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTd text.");
    }
}
