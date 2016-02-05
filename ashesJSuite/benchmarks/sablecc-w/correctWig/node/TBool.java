package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TBool extends Token
{
    public TBool()
    {
        super.setText("bool");
    }

    public TBool(int line, int pos)
    {
        super.setText("bool");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TBool(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTBool(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TBool text.");
    }
}
