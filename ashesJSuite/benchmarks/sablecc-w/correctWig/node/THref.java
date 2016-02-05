package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class THref extends Token
{
    public THref()
    {
        super.setText("href");
    }

    public THref(int line, int pos)
    {
        super.setText("href");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new THref(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTHref(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change THref text.");
    }
}
