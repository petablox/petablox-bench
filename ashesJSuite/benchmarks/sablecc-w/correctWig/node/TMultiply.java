package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TMultiply extends Token
{
    public TMultiply()
    {
        super.setText("*");
    }

    public TMultiply(int line, int pos)
    {
        super.setText("*");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TMultiply(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTMultiply(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TMultiply text.");
    }
}
