package javasrc.app;

import javasrc.symtab.*;
import javasrc.xref.*;
import javasrc.util.*;
import java.util.*;
import java.io.*;

public class JavaSrc
{
    public static final boolean debug = false;
    public static final String DEFAULT_DIR = ".";
    public static final String USAGE = "Usage: java "+
                                   "-Doutdir=<doc dir> "+
                                   "-Dtitle=<title> "+
				   "javasrc.JavaSrc "+
				   "<source dir> [<source dir> <source dir> ...]";


    public static String getOutDir() { return _outDir; }
    public static void setOutDir(String d) { _outDir=d; }
    public static String getTitle() { return _title; }
    public static void setTitle(String t) { _title=t; }

    // Define a main
    public static void main(String[] args)
    {
        // Use a try/catch block for parser exceptions
        try
        {
            // create a new symbol table
            SymbolTable symbolTable = new SymbolTable();

            // if we have at least one command-line argument
            if (args.length > 0 )
            {
		initializeDefaults();

                System.err.println("Parsing...");

                // for each directory/file specified on the command line
                for(int i=0; i< args.length;i++)
                    JavaXref.doFile(new File(args[i]), symbolTable); // parse it

                System.err.println("Resolving types...");

                // resolve the types of all symbols in the symbol table
                symbolTable.resolveTypes();
		symbolTable.resolveRefs();
            }
            else
                System.err.println(USAGE);

            // write the report
            System.out.println("Writing class files...");

	    // Create main frames
	    createIndex();
	    createStyleSheet();
	    createAllClassesFrame();
	    createOverviewSummaryFrame();
	    createFilenameFrame();

	    // Create class files
	    Vector tagList = new Vector(200,200);
            symbolTable.generateTags(tagList);
	    createClassFiles(tagList);

	    // Create reference files
            if (debug) System.out.println("Writing reference files...");
	    symbolTable.generateReferenceFiles(getOutDir());

	    // Create package files
            System.out.println("Writing package files...");
	    Hashtable packageTags = new Hashtable(2);
            packageTags = symbolTable.generatePackageTags();
	    createPackageFiles(packageTags);
	    createOverviewFrame(packageTags);
	}
        catch(Exception e)
        {
            System.err.println("exception: "+e);
            e.printStackTrace(System.err);   // so we can get stack trace
        }
    }

    public static void initializeDefaults()
    {
	String outdir = (String) System.getProperty("outdir");
	if (outdir==null)
	  outdir=DEFAULT_DIR;
	JavaSrc.setOutDir(outdir);

	String title = (String) System.getProperty("title");
	if (title==null)
	  title="JavaSrc: "+outdir;
	JavaSrc.setTitle(title);
    }

    public static void createDirs(File f)
    {
	String parentDir = f.getParent();

	File directory = new File(parentDir);
	if (!directory.exists())
	  directory.mkdirs();
    }

    public static void createIndex()
    {
	String fileName = JavaSrc.getOutDir()+File.separatorChar+"index.html";
	File file = new File(fileName);
	createDirs(file);

	try
        {
	  PrintWriter pw = new PrintWriter(new FileOutputStream(file));
	  pw.println("<TITLE>"+JavaSrc.getTitle()+"</TITLE>");
	  pw.println("<FRAMESET cols=\"20%,80%\">");
	  pw.println("  <FRAMESET rows=\"30%,70%\">");
	  pw.println("    <FRAME src=\"overview-frame.html\" name=\"packageListFrame\">");
	  pw.println("    <FRAME src=\"allclasses-frame.html\" name=\"packageFrame\">");
	  pw.println("  </FRAMESET>");
	  pw.println("  ");
          pw.println("  <FRAMESET ROWS=40,*>");
	  pw.println("    <FRAME src=\"filename.html\" name=\"filenameFrame\" scrolling=no>");
	  pw.println("    <FRAME src=\"overview-summary.html\" name=\"classFrame\">");
	  pw.println("  </FRAMESET>");
	  pw.println("</FRAMESET>");
	  pw.close();
	}
	catch (Exception e) { e.printStackTrace(); }
    }

    public static void createStyleSheet()
    {
	String fileName = JavaSrc.getOutDir()+File.separatorChar+"styles.css";
	File file = new File(fileName);
	if (!file.exists())
        {
	 createDirs(file);

	  try
          {
	    PrintWriter pw = new PrintWriter(new FileOutputStream(file));
	    pw.println(".comment   { color:darkred;font-style:italic }");
	    pw.println(".linenum   { color:blue;font-style:normal }");
	    pw.println(".classDef  { color:blue;font-style:bold }");
	    pw.println(".classRef  { color:blue;font-style:bold }");
	    pw.println(".methodDef { color:blue;font-style:bold }");
	    pw.println(".methodRef { color:blue;font-style:bold }");
	    pw.println(".varDef    { color:blue;font-style:bold }");
	    pw.println(".varRef    { color:blue;font-style:bold }");
	    pw.close();
	  }
	  catch (Exception e) { e.printStackTrace(); }
	}
    }

    public static void createOverviewFrame(Hashtable packageTags)
    {
	String packageName;
	String packageFileName;
	String fileName = JavaSrc.getOutDir()+File.separatorChar+"overview-frame.html";
	File file = new File(fileName);
	createDirs(file);

	try
        {
	  PrintWriter pw = new PrintWriter(new FileOutputStream(file));

	  Vector sortedItems = JSCollections.sortEnumeration(packageTags.keys());
	  Enumeration e = sortedItems.elements();

	  while (e.hasMoreElements())
          {	    
	    SortableString s =(SortableString) e.nextElement();
	    packageName=(String) s.getString();
	    packageFileName=packageName.replace('.',File.separatorChar)+
		File.separatorChar+"classList.html";
	    pw.println("<A HREF=\""+packageFileName+"\" TARGET=\"packageFrame\">"+
		       packageName+"</A> <br>");
          }
	  pw.close();
	}
	catch (Exception e) { e.printStackTrace(); }
    }

    public static void createFilenameFrame()
    {
	String fileName = JavaSrc.getOutDir()+File.separatorChar+"filename.html";
	File file = new File(fileName);
	createDirs(file);

	try
        {
	  PrintWriter pw = new PrintWriter(new FileOutputStream(file));
	  pw.println("<LAYER><NOLAYER><DIV ID=textDiv></NOLAYER><NOLAYER></DIV></NOLAYER></LAYER>");
	  pw.close();
	}
	catch (Exception e) { e.printStackTrace(); }
    }

    public static void createAllClassesFrame()
    {
	String fileName = JavaSrc.getOutDir()+File.separatorChar+"allclasses-frame.html";
	File file = new File(fileName);
	createDirs(file);

	try
        {
	  PrintWriter pw = new PrintWriter(new FileOutputStream(file));
	  pw.println("packageFrame");
	  pw.close();
	}
	catch (Exception e) { e.printStackTrace(); }
    }

    public static void createOverviewSummaryFrame()
    {
	String fileName = JavaSrc.getOutDir()+File.separatorChar+"overview-summary.html";
	File file = new File(fileName);
	createDirs(file);

	try
        {
	  PrintWriter pw = new PrintWriter(new FileOutputStream(file));
	  pw.println("classFrame");
	  pw.close();
	}
	catch (Exception e) { e.printStackTrace(); }
    }

    public static String getBackupPath(Object[] tagList,int element)
    {
	String newPath;
	HTMLTag t = (HTMLTag) tagList[element];
	String packageName=t.getPackageName();
	if (packageName.equals(""))
        {
	   File tempFile=t.getFile();
	   int i=Math.min(element+1,tagList.length);	   
	   HTMLTag tempTag = (HTMLTag) tagList[i];
	   while (tempTag.getFile().equals(tempFile) && i<tagList.length)
	   {
	      if (tempTag.getPackageName()!=null && tempTag.getPackageName().length()>0)
	      {
		packageName=tempTag.getPackageName();
		break;
	      }
	      i++;
	      tempTag = (HTMLTag) tagList[i];	      
           }
	}

       StringTokenizer st = new StringTokenizer(packageName,".");
       String backup="";
       int dirs=0;

       dirs=st.countTokens();
       for (int j=0;j<dirs;j++)
	 backup=backup+".."+File.separatorChar;
       newPath=backup;

       return(newPath);
    }

    public static void createPackageFiles(Hashtable packageTags)
    {
	String packageName;
	String fileName;
	Vector tags;
	File file;
	PrintWriter pw;
	ClassTag t;

	Enumeration e = packageTags.keys();
	while (e.hasMoreElements())
        {	    
	    SortableString s =(SortableString) e.nextElement();
	    packageName=(String) s.getString();
	    tags = (Vector) packageTags.get(s);
	    fileName=JavaSrc.getOutDir()+File.separatorChar+
		packageName.replace('.',File.separatorChar)+
		File.separatorChar+"classList.html";
            file = new File(fileName);
	    createDirs(file);

	    
	    try
	    {
              pw = new PrintWriter(new FileOutputStream(file));

              pw.println("<center>" + packageName + "</center> <br>");
	      pw.println("<TABLE BORDER=\"0\" WIDTH=\"100\"");
	      pw.println("<TR> <TD NOWRAP>");
              for (int i=0;i<tags.size();i++)
              {	    
		t = (ClassTag) tags.elementAt(i);
		pw.println(t);
	      }
	      pw.println("</TD></TR></TABLE>");
              pw.close();
	    }
	    catch (Exception ex)
            {
	      System.err.println("Error writing file:"+fileName);
	    }
        }
    }

    public static HTMLOutputWriter createClassFile(Object[] tagList,int element) throws IOException
    {
	HTMLTag t = (HTMLTag) tagList[element];
	String packageName=t.getPackageName();
	if (packageName.equals(""))
        {
	   File tempFile=t.getFile();
	   int i=Math.min(element+1,tagList.length);	   
	   HTMLTag tempTag = (HTMLTag) tagList[i];
	   while (tempTag.getFile().equals(tempFile) && i<tagList.length)
	   {
	      if (tempTag.getPackageName()!=null && tempTag.getPackageName().length()>0)
	      {
		packageName=tempTag.getPackageName();
		break;
	      }
	      i++;
	      tempTag = (HTMLTag) tagList[i];	      
           }
	}

        String fileName = t.getFile().toString();

	if (debug) System.out.println("Package name="+t.getPackageName());

	String packagePath = packageName.replace('.',File.separatorChar);
        String pathName = JavaSrc.getOutDir()+File.separatorChar+packagePath;
        String baseName = fileName.substring(fileName.lastIndexOf(File.separatorChar),fileName.length());

        String className = baseName.substring(0,baseName.lastIndexOf('.')).replace(File.separatorChar,'.');


        baseName=baseName.replace('.','_');
        baseName = baseName+".html";
        String newFileName = pathName+baseName;

	File f = new File(newFileName);
	createDirs(f);

	HTMLOutputWriter output=new LineOutputWriter(new FileOutputStream(f));
        String backup=getBackupPath(tagList,element);
        String header="<head>\n"+
                      "<LINK rel=\"stylesheet\" type=\"text/css\" name=\"style1\""+
                      "href=\""+backup+"styles.css\">\n"+
		        "</head>\n"; 
	output.write(header,0,header.length());

	String script=
"<script language=javascript>\n"+
"<!-- Hide from non-javascript browsers\n" + 
"browserName=navigator.appName;\n"+
"if (browserName.indexOf('Netscape')>=0)\n"+
"{\n"+
"parent.filenameFrame.document.layers[0].document.clear();\n"+
"parent.filenameFrame.document.layers[0].document.open();\n"+
"parent.filenameFrame.document.layers[0].document.write(\n"+
"'<A HREF=\"classList.html\" TARGET=\"packageFrame\">" + packageName + "</A>: " + SymbolTable.getClassList(t.getFile()) + "');\n"+
"parent.filenameFrame.document.layers[0].document.close();\n"+
"}\n"+
"if (browserName.indexOf('Microsoft')>=0)\n"+
"{\n"+
"parent.frames.filenameFrame.textDiv.innerHTML="+
"'<A HREF=\"classList.html\" TARGET=\"packageFrame\">" + packageName + "</A>: " + SymbolTable.getClassList(t.getFile()) + "';"+
"}\n"+
"//-->\n"+
"</script>";

        output.write(script,0,script.length());

	output.write("<pre>\n",0,6);

	return (output);
    }

    public static void createClassFiles(Vector tagList)
    {
	HTMLTag t;
	File javaFile;
	File htmlFile=null;
	LineNumberReader input;
	HTMLOutputWriter output;
	String line;	
	int currentColumn;
	int c;
	char ch;
	Object[] sortedList;

	System.err.println("Sorting...");
	sortedList = JSCollections.sortVector(tagList);
	// Collections.sort(tagList);
	t=(HTMLTag) sortedList[0];
	javaFile=t.getFile();

        // Create first file
	try	
	{
	  output=createClassFile(sortedList,0);
	  input=new LineNumberReader(new InputStreamReader(new FileInputStream(javaFile)));
          c=input.read();
	  currentColumn=1;
	}
	catch (Exception e)
        { 
	  System.out.println("1: Could not open file:"+javaFile.toString());
	  System.out.println("   or html file.");
	  return;
        }

	for (int i=0;i<sortedList.length;i++)
	{
	   t=(HTMLTag) sortedList[i];	   
	   if (debug) System.out.println("\nOrig Text=\""+t.getOrigText()+"\"");
	   if (debug) System.out.println("\nTag Text=\""+t.getText()+"\"");
	   if (debug) System.out.println("Length="+t.getOrigText().length());
	   if (debug) System.out.println("Line,col="+t.getLine()+","+t.getStartColumn());

	   // Check for new java file encountered.  
	   // Close previous files and open new ones.
	   String currentFile = javaFile.toString();
	   String newFile = t.getFile().toString();

	   if (debug) System.out.println("cur file=|"+currentFile+"|");
	   if (debug) System.out.println("new file=|"+newFile+"|");

	   if (!newFile.equals(currentFile))
	   {
	     try
	     {
	       // Write out rest of previous file
	       while (c!=-1)
	       {
	         output.writeHTML(c);
		 c=input.read();
               }
	       input.close();
	       output.write("</pre>\n",0,7);
	       output.flush();
	       output.close();

	       // Open new file
	       javaFile=t.getFile();
	       input=new LineNumberReader(new InputStreamReader(new FileInputStream(javaFile)));
	       output=createClassFile(sortedList,i);
	       currentColumn=1;
	       c=input.read();
	       // System.out.println("javaFile="+javaFile);
	     }
	     catch (Exception e)
	     {
	       System.out.println("2: Error handling tag:"+t);
	       System.out.println(e);
	       e.printStackTrace();
	       continue;
	     }
	   }
	  
	   // Check for new line encountered 
	   if (t.getLine() != (input.getLineNumber()+1))
           {
	     currentColumn=1;
	     // Write out characters until we reach the line
	     try
	     {	
	       if (debug) System.out.print("\nLooking for next tag line:|");
	       while (c!=-1 && (input.getLineNumber()+1)!=t.getLine())
	       {
	          output.writeHTML(c);		  
		  if (debug) System.out.write(c);
		  c=input.read();
	       }	       
	       // Write out last carriage return
	       output.writeHTML(c);
	       if (debug) System.out.write(c);
	       c=input.read();
	       if (debug) System.out.println("|");
	     }
             catch (Exception e)
             {
	       System.out.println("3: Error handling tag:"+t);
	       System.out.println(e);
	       e.printStackTrace();
               continue;
             }
	   }

	   try
	   {
	     // Write out line from current column to tag start column
	     // Make sure we skip to the method name itself	     
	     if (debug) System.out.println("\nCurrent column="+currentColumn);
	     if (debug) System.out.print("\nWriting up to tag start:|");
	     while (currentColumn<t.getStartColumn())
	     {
	       output.writeHTML(c);	       
	       if (c=='\n')
		 currentColumn=0;
	       if (debug) System.out.write(c);
	       c=input.read();
	       currentColumn++;	     
	     }
	     if (debug) System.out.println("|");
	     
	     // Write HTML tag
	     output.write(t.getText()); 
	     if (debug) System.out.println("Wrote tag:"+t.getText());

	     // Read past original token
	     int length=t.getOrigText().length();
	     if (t.getOrigText().indexOf("\r\n")>0)
	     {
	       StringTokenizer st = new StringTokenizer(t.getOrigText(),"\r\n");
	       int numBreaks = Math.max(st.countTokens()-1,1);
	       if (debug) System.out.println("numBreaks="+numBreaks);
	       length=length-numBreaks;
	     }
	     if (debug) System.out.print("\nSkipping:\"");
	     for (int j=0;j<length;j++)
	     {
		if (debug) System.out.write(c);
		if (c=='\n')
		  currentColumn=0;
		c=input.read();
	        currentColumn++;
	     }
	     if (c=='\n')
	       currentColumn=0;
	     if (debug) System.out.println("\"");

	     // System.out.println("!length,currentCol:"+line.length()+","+currentColumn);
	     // System.out.println("!origText:"+t.getOrigText());
           }
	   catch (Exception e)
           { 
	     System.out.println("4: Error handling tag:"+t);
	     System.out.println(e);
	     e.printStackTrace();
             continue; 
           }
        } // end for
	try
	{
	  while (c!=-1)
	  {
	    output.writeHTML(c);
	    c=input.read();
          }
	  input.close();
	  output.write("</pre>\n",0,7);
	  output.flush();
	  output.close();
	}
	catch (Exception e) { };
    }

  private static String _outDir;
  private static String _title;
}
