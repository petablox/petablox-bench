package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TFalse extends Token
{
    public TFalse(String text)
    {
        setText(text);
    }

    public TFalse(String text, int line, int pos)
    {
        setText(text);
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TFalse(getText(), getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTFalse(this);
    }
}
