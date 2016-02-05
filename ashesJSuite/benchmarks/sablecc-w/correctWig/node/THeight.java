package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class THeight extends Token
{
    public THeight()
    {
        super.setText("height");
    }

    public THeight(int line, int pos)
    {
        super.setText("height");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new THeight(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTHeight(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change THeight text.");
    }
}
