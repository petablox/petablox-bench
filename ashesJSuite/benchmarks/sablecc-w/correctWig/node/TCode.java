package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TCode extends Token
{
    public TCode()
    {
        super.setText("code");
    }

    public TCode(int line, int pos)
    {
        super.setText("code");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TCode(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTCode(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TCode text.");
    }
}
