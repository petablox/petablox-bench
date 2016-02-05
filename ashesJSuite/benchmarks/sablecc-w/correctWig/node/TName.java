package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TName extends Token
{
    public TName()
    {
        super.setText("name");
    }

    public TName(int line, int pos)
    {
        super.setText("name");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TName(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTName(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TName text.");
    }
}
