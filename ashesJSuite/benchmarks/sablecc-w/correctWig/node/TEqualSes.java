package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TEqualSes extends Token
{
    public TEqualSes()
    {
        super.setText("=");
    }

    public TEqualSes(int line, int pos)
    {
        super.setText("=");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TEqualSes(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTEqualSes(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TEqualSes text.");
    }
}
