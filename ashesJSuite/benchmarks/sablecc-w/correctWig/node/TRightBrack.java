package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TRightBrack extends Token
{
    public TRightBrack()
    {
        super.setText(")");
    }

    public TRightBrack(int line, int pos)
    {
        super.setText(")");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TRightBrack(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTRightBrack(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TRightBrack text.");
    }
}
