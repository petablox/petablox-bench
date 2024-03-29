package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TCatch extends Token
{
    public TCatch()
    {
        super.setText("catch");
    }

    public TCatch(int line, int pos)
    {
        super.setText("catch");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TCatch(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTCatch(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TCatch text.");
    }
}
