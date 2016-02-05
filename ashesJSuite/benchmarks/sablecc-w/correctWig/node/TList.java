package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TList extends Token
{
    public TList()
    {
        super.setText("<ul>");
    }

    public TList(int line, int pos)
    {
        super.setText("<ul>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TList(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTList(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TList text.");
    }
}
