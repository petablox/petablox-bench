package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TImplements extends Token
{
    public TImplements()
    {
        super.setText("implements");
    }

    public TImplements(int line, int pos)
    {
        super.setText("implements");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TImplements(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTImplements(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TImplements text.");
    }
}
