                An interpreter for mathematical expressions
                *******************************************
                Author    : Jens- Uwe Dolinsky
                Email     : dolinsky@amundsen.mb.hs-wismar.de
                Copyright : 1998 Jens- Uwe Dolinsky

Overview:
#########

1. Introduction
2. Contains of the package
3. Implementation interface
    Methods
4. Note



Introduction
############

This file is a short introduction to the programming interface of a
computer algebra system developed with Suns's Java Programming
Language (Sun, Java are registered Trademarks).
The homepage of this project has the URL:

  "http://www.mb.hs-wismar.de/Mitarbeiter/Pawletta/00Uwe/casE.html".

All information about the features of the system can be found there
and is not included in this text to keep consistency.



Contains of the package
#######################

All files are packed into a zipped tar- file

1. All required class- files of the math kernel and the applet
2. This documentation
3. One calculation example in Java- Source


Implementation interface
########################


The interface consists only of one class denoted as "Math_interpreter".
Before the interpreter can be used, an instance of this class has to
be created. Calling the method <calculate> launches all further actions.

class Math_interpreter
{
  public Math_interpreter() throws Exception
  public String calculate(String expression) throws Exception
}


  Methods
  *******

  public Math_interpreter() throws Exception

        Constructor: initialises all components of the calculator
        If any error occurs during the initialisation, a general
        exception will be thrown.


  public String calculate(String expression) throws Exception

        Main method: It calculates the String <expression> (for Syntax and
        notation see URL above) and returns  the result as String.
        If any errors occurs (e.g. parse error) a general exception
        will be thrown which has to be caught by the application.
        The error text can than be analysed as usual.

Alternitively the interpreter can be started as a stand alone application.
In this case expressions can be passed as command line arguments. The results
will be issued on the standard output in the respective order.


Note
####

The use of this package is free, It can and should
be distributed. But the Copyright remains with the author.
Although it should not happen:
The author gives no guaranty for damages or other
problems caused by the interpreter or interface.

