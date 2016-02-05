package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TBr extends Token
{
    public TBr()
    {
        super.setText("<br>");
    }

    public TBr(int line, int pos)
    {
        super.setText("<br>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TBr(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTBr(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TBr text.");
    }
}
