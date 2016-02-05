package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TApplet extends Token
{
    public TApplet()
    {
        super.setText("<applet");
    }

    public TApplet(int line, int pos)
    {
        super.setText("<applet");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TApplet(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTApplet(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TApplet text.");
    }
}
