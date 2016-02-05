package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TLeftParen extends Token
{
    public TLeftParen()
    {
        super.setText("[");
    }

    public TLeftParen(int line, int pos)
    {
        super.setText("[");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TLeftParen(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTLeftParen(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TLeftParen text.");
    }
}
