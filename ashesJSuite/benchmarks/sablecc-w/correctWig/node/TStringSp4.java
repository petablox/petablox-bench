package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TStringSp4 extends Token
{
    public TStringSp4(String text)
    {
        setText(text);
    }

    public TStringSp4(String text, int line, int pos)
    {
        setText(text);
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TStringSp4(getText(), getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTStringSp4(this);
    }
}
