package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TNot extends Token
{
    public TNot()
    {
        super.setText("not");
    }

    public TNot(int line, int pos)
    {
        super.setText("not");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TNot(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTNot(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TNot text.");
    }
}
