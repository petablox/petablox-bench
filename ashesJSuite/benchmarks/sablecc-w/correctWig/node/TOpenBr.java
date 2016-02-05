package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TOpenBr extends Token
{
    public TOpenBr()
    {
        super.setText("{");
    }

    public TOpenBr(int line, int pos)
    {
        super.setText("{");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TOpenBr(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTOpenBr(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TOpenBr text.");
    }
}
