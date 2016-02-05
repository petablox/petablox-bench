package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TString extends Token
{
    public TString(String text)
    {
        setText(text);
    }

    public TString(String text, int line, int pos)
    {
        setText(text);
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TString(getText(), getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTString(this);
    }
}
