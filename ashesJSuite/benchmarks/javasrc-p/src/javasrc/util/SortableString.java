package javasrc.util;

public class SortableString implements JSComparable
{
  public String getString() { return _s; }

  public SortableString(String s)
  {
    _s=s;
  }

  public int compareTo(Object o)
  {
    return _s.compareTo(((SortableString) o).getString());
  }

  private String _s;
}
