package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TWhile extends Token
{
    public TWhile()
    {
        super.setText("while");
    }

    public TWhile(int line, int pos)
    {
        super.setText("while");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TWhile(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTWhile(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TWhile text.");
    }
}
