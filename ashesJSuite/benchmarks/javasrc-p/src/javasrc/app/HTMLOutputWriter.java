package javasrc.app;

import java.io.*;

public class HTMLOutputWriter extends OutputStreamWriter
{
   public HTMLOutputWriter(OutputStream output)
   {
     super(output);
   }

   public void writeHTML(int c) throws IOException
   {    
     switch (c)
     {
        case '<':
          this.write("&lt;");
          break;
        default:
          super.write(c);
	  break;
     }
   }

   public void writeHTML(String s) throws IOException
   {    
      for (int i=0;i<s.length();i++)
        this.writeHTML(s.charAt(i));
   }
}
