package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TDocument extends Token
{
    public TDocument()
    {
        super.setText("document");
    }

    public TDocument(int line, int pos)
    {
        super.setText("document");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TDocument(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTDocument(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TDocument text.");
    }
}
