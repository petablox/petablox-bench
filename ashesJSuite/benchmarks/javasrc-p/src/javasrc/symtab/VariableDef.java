package javasrc.symtab;

import java.util.*;
import java.io.*;

/*******************************************************************************
 * Definition of a variable in a source file.
 *  This can be member data in class, 
 *  a local variable or a method parameter.
 ******************************************************************************/
class VariableDef extends Definition implements TypedDef
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** The type of the variable */
    private Definition type = null;


    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor to create a new variable symbol */
    VariableDef(String name,               // the variable's name
                Occurrence occ,            // where it was defined
                ClassDef type,             // the type of the variable
                ScopedDef parentScope) {   // which scope owns it
        super(name, occ, parentScope);
        this.type = type;
    }   


    /** get the type of the variable */
    public Definition getType() {
        return type;
    }   

    public void generateReferences(FileWriter output)
    {
	String linkString;
	String linkFileName;

	try
	{
          String nameString = "<p>Variable: <a name="+getName()+
	                      " href="+getSourceName()+"#"+getName()+">"+
	                      getName()+"</a><br>";
	  output.write(nameString);

          JavaVector v = getReferences();
          Enumeration e = v.elements();
          while (e.hasMoreElements())
          {
            Occurrence o = (Occurrence) e.nextElement();
            if (o!=null)
            { 
	     linkFileName = getOccurrencePath(o)+o.getLinkReference();
             linkString = "<a href="+linkFileName+">"+getName()+"</a> in "+
		         o.getPackageName()+", "+
		         o.getClassName()+", "+
		         o.getMethodName()+", "+
	                 o.getFile().getName()+" , line "+
                         Integer.toString(o.getLine())+"<br>\n";
	     output.write(linkString);
            }
          }
	}
	catch (IOException e) { };
    }   

    public void generateTags(Vector tagList)
    {
	String linkString;
	String linkFileName;

        String nameString = "<a class=\"varDef\" name="+getName()+
	                      " href="+getRefName()+"#"+getName()+">"+getName()+"</a>";

	// generate tag for this method
	if (getOccurrence()==null)
          return;

	HTMLTag t = new HTMLTag(getOccurrence(),getName(),nameString);
        tagList.addElement(t);
       
        // generate tags for all references to the variable
        JavaVector v = getReferences();
        Enumeration e = v.elements();
        while (e.hasMoreElements())
        {
           Occurrence o = (Occurrence) e.nextElement();
	   // System.out.println("Occurrence:"+o.getLine());
	   linkFileName = getRelativePath(o)+getSourceName();
           linkString = "<a class=\"varRef\" href="+linkFileName+"#"+getName()+">"+getName()+"</a>";
	   if (o!=null)
           {
	     t = new HTMLTag(o,getName(),linkString);
             tagList.addElement(t);
           }
        }
    }   

    /** Resolve referenced symbols used by this variable */
    void resolveTypes(SymbolTable symbolTable)
    {
        if (type != null && type instanceof DummyClass) {
            // resolve the type of the variable
            Definition newType = (Definition)symbolTable.lookupDummy(type);
            if (newType != null) {
                newType.addReference(type.getOccurrence());
                type = newType;
            }
        }   
        super.resolveTypes(symbolTable);
    }
}
