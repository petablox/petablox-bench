package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TLeftBrack extends Token
{
    public TLeftBrack()
    {
        super.setText("(");
    }

    public TLeftBrack(int line, int pos)
    {
        super.setText("(");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TLeftBrack(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTLeftBrack(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TLeftBrack text.");
    }
}
