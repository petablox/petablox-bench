package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TLeftBrack1 extends Token
{
    public TLeftBrack1()
    {
        super.setText("(");
    }

    public TLeftBrack1(int line, int pos)
    {
        super.setText("(");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TLeftBrack1(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTLeftBrack1(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TLeftBrack1 text.");
    }
}
