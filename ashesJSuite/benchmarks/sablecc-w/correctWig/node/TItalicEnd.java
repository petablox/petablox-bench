package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TItalicEnd extends Token
{
    public TItalicEnd()
    {
        super.setText("</i>");
    }

    public TItalicEnd(int line, int pos)
    {
        super.setText("</i>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TItalicEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTItalicEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TItalicEnd text.");
    }
}
