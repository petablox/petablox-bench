package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAssignNormaldoc extends Token
{
    public TAssignNormaldoc()
    {
        super.setText("=");
    }

    public TAssignNormaldoc(int line, int pos)
    {
        super.setText("=");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAssignNormaldoc(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAssignNormaldoc(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAssignNormaldoc text.");
    }
}
