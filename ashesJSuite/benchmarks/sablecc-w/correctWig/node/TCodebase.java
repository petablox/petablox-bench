package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TCodebase extends Token
{
    public TCodebase()
    {
        super.setText("codebase");
    }

    public TCodebase(int line, int pos)
    {
        super.setText("codebase");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TCodebase(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTCodebase(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TCodebase text.");
    }
}
