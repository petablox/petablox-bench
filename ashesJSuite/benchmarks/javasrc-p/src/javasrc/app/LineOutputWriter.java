package javasrc.app;

import java.io.*;

public class LineOutputWriter extends HTMLOutputWriter
{
   public static int MAXCOLS=5;

   public LineOutputWriter(OutputStream output)
   {
     super(output);

     _lineNumber=1;
     _firstLine=true;
     _oldLength=1;
     _spaceString = new String("\t");
   }

   public void write(int c) throws IOException
   {
     if (_firstLine)
     {
       _firstLine=false;
       writeLineNumber();
     }

     super.write(c);

     if (c=='\n')
     {
       writeLineNumber();
     }     
   }

   public void writeHTML(int c) throws IOException
   {     
     if (_firstLine)
     {
       _firstLine=false;
       writeLineNumber();
     }

     super.writeHTML(c);

     if (c=='\n')
     {
       writeLineNumber();
     }     
   }
 
   public void write(String s) throws IOException
   {
      int length=s.length();
      for (int i=0;i<length;i++)
        this.write(s.charAt(i));
   }
 
   public void writeHTML(String s) throws IOException
   {
      int length=s.length();
      for (int i=0;i<length;i++)
        this.writeHTML(s.charAt(i));
   }

   public void writeLineNumber() throws IOException
   {
     String lineString=Integer.toString(_lineNumber);
  
     // add linenum tag
     lineString="<a name="+lineString+" class=\"linenum\">"+lineString;
     lineString+=_spaceString;
     lineString+="</SPAN>";

     this.write(lineString);

     _lineNumber++;
   }

   private int      _lineNumber;
   private boolean  _firstLine;
   private int      _oldLength;
   private String   _spaceString;
}
