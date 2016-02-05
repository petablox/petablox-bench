package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TLi extends Token
{
    public TLi()
    {
        super.setText("<li>");
    }

    public TLi(int line, int pos)
    {
        super.setText("<li>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TLi(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTLi(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TLi text.");
    }
}
