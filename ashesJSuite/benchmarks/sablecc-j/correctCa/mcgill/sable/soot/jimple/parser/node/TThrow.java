package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TThrow extends Token
{
    public TThrow()
    {
        super.setText("throw");
    }

    public TThrow(int line, int pos)
    {
        super.setText("throw");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TThrow(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTThrow(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TThrow text.");
    }
}
