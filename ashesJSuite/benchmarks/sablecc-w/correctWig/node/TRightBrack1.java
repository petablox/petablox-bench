package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TRightBrack1 extends Token
{
    public TRightBrack1()
    {
        super.setText(")");
    }

    public TRightBrack1(int line, int pos)
    {
        super.setText(")");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TRightBrack1(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTRightBrack1(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TRightBrack1 text.");
    }
}
