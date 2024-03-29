package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TClass extends Token
{
    public TClass()
    {
        super.setText("class");
    }

    public TClass(int line, int pos)
    {
        super.setText("class");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TClass(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTClass(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TClass text.");
    }
}
