package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAbs extends Token
{
    public TAbs()
    {
        super.setText("|");
    }

    public TAbs(int line, int pos)
    {
        super.setText("|");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAbs(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAbs(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAbs text.");
    }
}
