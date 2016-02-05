package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TEnds extends Token
{
    public TEnds()
    {
        super.setText("ends");
    }

    public TEnds(int line, int pos)
    {
        super.setText("ends");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TEnds(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTEnds(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TEnds text.");
    }
}
