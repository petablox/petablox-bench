package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TItalic extends Token
{
    public TItalic()
    {
        super.setText("<i>");
    }

    public TItalic(int line, int pos)
    {
        super.setText("<i>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TItalic(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTItalic(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TItalic text.");
    }
}
