package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TNew extends Token
{
    public TNew()
    {
        super.setText("new");
    }

    public TNew(int line, int pos)
    {
        super.setText("new");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TNew(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTNew(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TNew text.");
    }
}
