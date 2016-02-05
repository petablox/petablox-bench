package test.packC;

import test.packB.*;
import test.packA.*;

public class Cone extends Bone
{
  private Bone b; 
  private Foo s;
  
  public Cone()
  {
    s = new Foo("Hello");
    System.out.println(s.length());
  }

  public void bar()
  {
    b = new Bone();
    b.foo().init();

    s = new Foo("Hello");
    System.out.println(s.length());

    Bone b2 = new Bone();
    b2.foo();
  }

  public static void main(String args[])
  {
    Cone c = new Cone();
    c.init();

    Aone.getInstance().init();
  }
}
