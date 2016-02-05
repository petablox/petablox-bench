package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TModulo extends Token
{
    public TModulo()
    {
        super.setText("%");
    }

    public TModulo(int line, int pos)
    {
        super.setText("%");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TModulo(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTModulo(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TModulo text.");
    }
}
