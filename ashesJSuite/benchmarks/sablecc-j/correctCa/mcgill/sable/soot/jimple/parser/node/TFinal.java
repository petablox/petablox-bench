package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TFinal extends Token
{
    public TFinal()
    {
        super.setText("final");
    }

    public TFinal(int line, int pos)
    {
        super.setText("final");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TFinal(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTFinal(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TFinal text.");
    }
}
