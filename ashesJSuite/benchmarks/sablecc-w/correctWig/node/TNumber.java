package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TNumber extends Token
{
    public TNumber(String text)
    {
        setText(text);
    }

    public TNumber(String text, int line, int pos)
    {
        setText(text);
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TNumber(getText(), getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTNumber(this);
    }
}
