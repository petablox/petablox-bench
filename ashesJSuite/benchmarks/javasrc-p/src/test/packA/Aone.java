//
// Comment
//
package test.packA;

public class Aone
{
  public static Aone getInstance() { return _instance; }

  public Aone()
  {
    System.out.println("Aone constructor");
    init();
    init("Hello");
  }

  public void init()
  {
    System.out.println("A init");
  }

  public void init(String s)
  {
    System.out.println(s);
  }

  public void init(String s1,String s2)
  {
    System.out.println(s1+s2);
  }

  public static void initStatics()
  {
    _instance = new Aone();
  }

  private static Aone _instance;
}

class Atwo
{

  public Atwo()
  {


  }

}


