package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TSelect extends Token
{
    public TSelect()
    {
        super.setText("<select");
    }

    public TSelect(int line, int pos)
    {
        super.setText("<select");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TSelect(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTSelect(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TSelect text.");
    }
}
