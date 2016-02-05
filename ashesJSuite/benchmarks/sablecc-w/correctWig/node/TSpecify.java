package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TSpecify extends Token
{
    public TSpecify()
    {
        super.setText(":");
    }

    public TSpecify(int line, int pos)
    {
        super.setText(":");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TSpecify(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTSpecify(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TSpecify text.");
    }
}
