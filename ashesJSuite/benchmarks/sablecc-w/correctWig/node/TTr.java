package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTr extends Token
{
    public TTr()
    {
        super.setText("<tr>");
    }

    public TTr(int line, int pos)
    {
        super.setText("<tr>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTr(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTr(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTr text.");
    }
}
