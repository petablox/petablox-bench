package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TPrivate extends Token
{
    public TPrivate()
    {
        super.setText("private");
    }

    public TPrivate(int line, int pos)
    {
        super.setText("private");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TPrivate(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTPrivate(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TPrivate text.");
    }
}
