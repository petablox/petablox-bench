package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TService extends Token
{
    public TService()
    {
        super.setText("service");
    }

    public TService(int line, int pos)
    {
        super.setText("service");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TService(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTService(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TService text.");
    }
}
