package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TImg extends Token
{
    public TImg()
    {
        super.setText("<img");
    }

    public TImg(int line, int pos)
    {
        super.setText("<img");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TImg(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTImg(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TImg text.");
    }
}
