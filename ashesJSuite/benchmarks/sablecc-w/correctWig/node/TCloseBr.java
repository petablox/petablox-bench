package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TCloseBr extends Token
{
    public TCloseBr()
    {
        super.setText("}");
    }

    public TCloseBr(int line, int pos)
    {
        super.setText("}");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TCloseBr(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTCloseBr(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TCloseBr text.");
    }
}
