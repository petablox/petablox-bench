package ca.mcgill.sable.soot.jimple.parser.node;

import ca.mcgill.sable.util.*;
import ca.mcgill.sable.soot.jimple.parser.analysis.*;

public final class TEntermonitor extends Token
{
    public TEntermonitor()
    {
        super.setText("entermonitor");
    }

    public TEntermonitor(int line, int pos)
    {
        super.setText("entermonitor");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TEntermonitor(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTEntermonitor(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TEntermonitor text.");
    }
}
