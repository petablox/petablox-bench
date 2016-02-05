package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TStop extends Token
{
    public TStop()
    {
        super.setText("stop");
    }

    public TStop(int line, int pos)
    {
        super.setText("stop");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TStop(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTStop(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TStop text.");
    }
}
