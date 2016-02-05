package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TRightParen extends Token
{
    public TRightParen()
    {
        super.setText("]");
    }

    public TRightParen(int line, int pos)
    {
        super.setText("]");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TRightParen(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTRightParen(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TRightParen text.");
    }
}
