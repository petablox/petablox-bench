package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TString1 extends Token
{
    public TString1(String text)
    {
        setText(text);
    }

    public TString1(String text, int line, int pos)
    {
        setText(text);
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TString1(getText(), getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTString1(this);
    }
}
