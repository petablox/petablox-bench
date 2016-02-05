package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAnd extends Token
{
    public TAnd()
    {
        super.setText("and");
    }

    public TAnd(int line, int pos)
    {
        super.setText("and");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAnd text.");
    }
}
