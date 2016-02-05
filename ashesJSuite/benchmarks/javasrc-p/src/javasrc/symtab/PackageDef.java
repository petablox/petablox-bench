package javasrc.symtab;

import java.util.*;
import java.io.*;

/*******************************************************************************
 * Definition of a package. 
 ******************************************************************************/
public class PackageDef extends ScopedDef       
{
    //==========================================================================
    //==  Methods
    //==========================================================================

    /** Constructor to create a package object */
    PackageDef(String name,                // the name of the package
               Occurrence occ,             // where it was defined (NULL)
               ScopedDef parentScope) {    // which scope owns it
        super(name, occ, parentScope);
    }   

    public void generateReferenceFiles(String path)
    {
	Enumeration e;
	Definition d;
	Occurrence o;
	String newPath;
	File currentFile=null;
	Vector files=new Vector(20,20);

	if (hasElements())
	{
	   JavaHashtable ht = getElements();
	   e = ht.elements();
	   while (e.hasMoreElements())
	   {
	      d = (Definition) e.nextElement();
	      newPath=path+File.separatorChar+d.getPackagePath();
	      if (d instanceof ClassDef)
              {		  
		 try
		 {
		   String refName = ((ScopedDef) d).getRefName();
	           String fileName=newPath+File.separatorChar+refName;
	           currentFile=new File(fileName);		      
		   FileWriter output;
		   if (files.contains(currentFile))
		   {
		      output = new FileWriter(currentFile.getPath(),true);
		   }
		   else
		   {		     
	              SymbolTable.createDirs(currentFile);	
		      output = new FileWriter(currentFile);
		      files.addElement(currentFile);
		   }

		   ((ClassDef) d).generateReferences(output);
	           output.flush();
	           output.close();	  
		 }
		 catch (Exception ex) {ex.printStackTrace(); }		     
              }
	   }
	}
    }

    public Vector generateClassList()
    {
	Enumeration e;
	Definition d;
	Occurrence o;
	ClassTag tag;
	Vector tagList=null;
	String tagText;

        // List all classes in this package
	if (hasElements())
	{
	   tagList = new Vector(2);
	   JavaHashtable ht = getElements();
	   e = ht.elements();
	   String baseName;
	   String link;
	   while (e.hasMoreElements())
	   {
	      d = (Definition) e.nextElement();
	      if (d instanceof ClassDef)
              {		  		  
		  o = d.getOccurrence();		  
		  SymbolTable.addFileClassDef(o.getFile(),(ClassDef) d);
		  baseName = o.getFile().getName();
		  baseName = baseName.substring(0,baseName.lastIndexOf("."));
		  link = baseName+"_java.html";
		  if (!baseName.equals(d.getName()))
		  {
		     link+="#"+o.getLine();
		  }
		  tagText="<a href=\""+link+"\""+
		          "TARGET=\"classFrame\">"+d.getName()+"</a> <br>";
		  tag = new ClassTag(((ClassDef) d).getScopedClassName(),tagText);
		  tagList.addElement(tag);
		  ((ClassDef) d).generateClassList(tagList);
              }
	   }
	}

	return (tagList);
    }

    /** Generate HTML tags for this package */
    public void generateTags(Vector tagList)
    {
	Enumeration e;
	Definition d;
	Occurrence o;

        // if we found any definitions in this package, report them
        if (hasElements())
            tagElements(tagList);
    }   

    private static String _currentPackPath;
}
