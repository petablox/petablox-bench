package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TResult extends Token
{
    public TResult()
    {
        super.setText("<result");
    }

    public TResult(int line, int pos)
    {
        super.setText("<result");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TResult(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTResult(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TResult text.");
    }
}
