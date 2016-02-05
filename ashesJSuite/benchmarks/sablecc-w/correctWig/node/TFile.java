package wig.node;

import ca.mcgill.sable.util.*;
import wig.analysis.*;

public final class TFile extends Token
{
    public TFile()
    {
        super.setText("file");
    }

    public TFile(int line, int pos)
    {
        super.setText("file");
        setLine(line);
        setPos(pos);
    }

    public Object clone()
    {
      return new TFile(getLine(), getPos());
    }

    public void apply(Switch sw)
    {
        ((Analysis) sw).caseTFile(this);
    }

    public void setText(String text)
    {
        throw new RuntimeException("Cannot change TFile text.");
    }
}
