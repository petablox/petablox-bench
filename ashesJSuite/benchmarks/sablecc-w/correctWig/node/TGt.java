package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TGt extends Token
{
    public TGt()
    {
        super.setText(">");
    }

    public TGt(int line, int pos)
    {
        super.setText(">");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TGt(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTGt(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TGt text.");
    }
}
