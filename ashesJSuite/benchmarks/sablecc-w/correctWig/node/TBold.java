package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TBold extends Token
{
    public TBold()
    {
        super.setText("<b>");
    }

    public TBold(int line, int pos)
    {
        super.setText("<b>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TBold(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTBold(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TBold text.");
    }
}
