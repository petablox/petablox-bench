package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TText extends Token
{
    public TText()
    {
        super.setText("text");
    }

    public TText(int line, int pos)
    {
        super.setText("text");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TText(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTText(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TText text.");
    }
}
