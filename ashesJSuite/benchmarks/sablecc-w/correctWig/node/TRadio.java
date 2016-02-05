package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TRadio extends Token
{
    public TRadio()
    {
        super.setText("\"radio\"");
    }

    public TRadio(int line, int pos)
    {
        super.setText("\"radio\"");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TRadio(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTRadio(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TRadio text.");
    }
}
