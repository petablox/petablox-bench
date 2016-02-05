package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TGlobal extends Token
{
    public TGlobal()
    {
        super.setText("global");
    }

    public TGlobal(int line, int pos)
    {
        super.setText("global");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TGlobal(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTGlobal(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TGlobal text.");
    }
}
