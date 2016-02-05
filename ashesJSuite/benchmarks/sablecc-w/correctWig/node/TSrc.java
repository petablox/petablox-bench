package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TSrc extends Token
{
    public TSrc()
    {
        super.setText("src");
    }

    public TSrc(int line, int pos)
    {
        super.setText("src");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TSrc(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTSrc(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TSrc text.");
    }
}
