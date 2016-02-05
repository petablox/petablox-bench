package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TParam extends Token
{
    public TParam()
    {
        super.setText("<param");
    }

    public TParam(int line, int pos)
    {
        super.setText("<param");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TParam(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTParam(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TParam text.");
    }
}
