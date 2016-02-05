package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TAppletEnd extends Token
{
    public TAppletEnd()
    {
        super.setText("</applet>");
    }

    public TAppletEnd(int line, int pos)
    {
        super.setText("</applet>");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TAppletEnd(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTAppletEnd(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TAppletEnd text.");
    }
}
