package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAssignSp2 extends Token
{
    public TAssignSp2()
    {
        super.setText("=");
    }

    public TAssignSp2(int line, int pos)
    {
        super.setText("=");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAssignSp2(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAssignSp2(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAssignSp2 text.");
    }
}
