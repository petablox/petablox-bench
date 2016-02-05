package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TPara extends Token
{
    public TPara()
    {
        super.setText("<p>");
    }

    public TPara(int line, int pos)
    {
        super.setText("<p>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TPara(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTPara(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TPara text.");
    }
}
