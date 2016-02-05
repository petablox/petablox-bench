package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TVar extends Token
{
    public TVar()
    {
        super.setText("<var");
    }

    public TVar(int line, int pos)
    {
        super.setText("<var");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TVar(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTVar(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TVar text.");
    }
}
