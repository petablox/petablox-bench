package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TTextConst extends Token
{
    public TTextConst()
    {
        super.setText("\"text\"");
    }

    public TTextConst(int line, int pos)
    {
        super.setText("\"text\"");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TTextConst(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTTextConst(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TTextConst text.");
    }
}
