import Math_interpreter;
/*
This example shows the application of the math_interpreter.
Some modifications made by Patrick Lam in order to increase the running time.
*/
class mathtest
{
    public static void main(String s[])
    {
      try
      {          //At first the instance of the interpreter has to be generated.
        Math_interpreter m=new Math_interpreter();
                 //Two calculation examples
        System.out.println(m.calculate("DIFF (SINH(x^2),x)"));
        System.out.println(m.calculate("INT(x^2*SIN(x),x)"));
        System.out.println(m.calculate("DIFF(-1/5*x^2*TAN(LN(x)/2),x)"));
        System.out.println(m.calculate("DIFF(SIN(t^x),t)"));
        System.out.println(m.calculate("DIFF(DIFF(1/(x^2 + y^2),x),y)"));
        System.out.println(m.calculate("INT(x^4*SIN(PI*x),x)"));
        System.out.println(m.calculate("INT(3*x^4+SIN(x),x,0,4)"));
        System.out.println(m.calculate("(8+123)*67-6"));
        System.out.println(m.calculate("APPROX(SIN(23)*COS(3*0.7))"));
        System.out.println(m.calculate("APPROX(SIN(92)*COS(6*0.7))"));
        System.out.println(m.calculate("SUBST(2x^2+x-3,x,4)"));
        System.out.println(m.calculate("SUBST(6x^9+7y^3-2x^2+x-3,x,4)"));
        System.out.println(m.calculate("TAYLOR(SINH(x^2),x,0,9)"));
        System.out.println(m.calculate("FOURIER(x,x,0,1,6)"));
      }
      catch (Exception e)
      { System.out.println("Error"+e.toString());
      }
    }
}
