package javasrc.symtab;

import java.util.*;
import javasrc.xref.*;
import java.io.*;

/*******************************************************************************
 * A definition of a method in a class  
 ******************************************************************************/
class MethodDef extends ScopedDef implements TypedDef
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** The return type of the method */
    private Definition type = null;
    
    /** A list of formal parameters to the method */
    private JavaVector parameters;
    
    /** A list of exceptions that can be thrown */
    private JavaVector exceptions;

    private String className;

    private String _uniqueMethodString;

    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor to create a method definition object */
    MethodDef(String name,               // the name of the method
              Occurrence occ,            // where it was defined
              ClassDef type,             // the return type of the method
              ScopedDef parentScope) {   // which scope owns it
        super(name, occ, parentScope);
        this.type = type;
	// System.out.println("Method Name="+name);
    }

    /** Constructor to create a method definition object */
    MethodDef(String name,               // the name of the method
	      String className,          // className (for constructor methods)
              Occurrence occ,            // where it was defined
              ClassDef type,             // the return type of the method
              ScopedDef parentScope) {   // which scope owns it
        this(name, occ, type, parentScope);
	this.className = className;
    }


    /** Add a thrown exception to the method's exception list */
    void add(ClassDef excep) {
        if (exceptions == null) // lazy instantiation
            exceptions = new JavaVector();
        exceptions.addElement(excep);
    }   


    /** Add a parameter to the method's parameter list */
    void add(VariableDef param) {
        if (parameters == null) // lazy instantiation
            parameters = new JavaVector();
        parameters.addElement(param);
    }   

    private String getFullName()
    { 
      if (_uniqueMethodString!=null)
        return (_uniqueMethodString);

      _uniqueMethodString=getName()+"(";
      if (parameters!=null)
      {
        Enumeration e = parameters.elements();
        while (e.hasMoreElements())
        {
          VariableDef d = (VariableDef) e.nextElement();
	  _uniqueMethodString+=d.getType().getName();	
	  if (e.hasMoreElements())
	    _uniqueMethodString+=",";
        }
      }
      _uniqueMethodString+=")";

      return (_uniqueMethodString);
    }

    /** Find out how many parameters this method has */
    int getParamCount() {
        if (parameters == null)
            return 0;
        return parameters.size();
    }


    /** Return the return type of the method */
    public Definition getType() {
        return type;
    }   


    /** lookup the name as a local variable or local class in this class */
    Definition lookup(String name, int numParams)
    {
	// System.out.println("MethodDef:lookup:"+name+","+numParams);
        if (numParams == -1)
        {
            // look for it in the method's scope
            Definition d = super.lookup(name, numParams);
            if (d != null) return d;
        
            // otherwise, look in the parameters for the method
            if (parameters != null)
	    {
                Enumeration e = parameters.elements();
                while(e.hasMoreElements())
		{
                    d = (Definition)e.nextElement();
                    if (d.getName().equals(name))
                        return d;
                }   
            }   
        }   
        return null;
    }   

    public void generateReferences(FileWriter output)
    {
	String linkString;
	String linkFileName;
	String methodName=getName();

        if (methodName!=null && methodName.indexOf("~constructor~")>=0)
        {
	  methodName=this.className;
	}

	try
	{
          String nameString = "<p>Method: <a name="+getFullName()+
	                      " href="+getSourceName()+"#"+getFullName()+">"+
	                      getFullName()+"</a><br>";
	  output.write(nameString);

          JavaVector v = getReferences();
          Enumeration e = v.elements();
          while (e.hasMoreElements())
          {
            Occurrence o = (Occurrence) e.nextElement();
            if (o!=null)
            { 
	     linkFileName = getOccurrencePath(o)+o.getLinkReference();
             linkString = "<a href="+linkFileName+">"+
	                 getName()+"</a> in "+
		         o.getPackageName()+", "+
	                 o.getClassName()+ ", "+
	                 o.getMethodName()+ "," +
	                 o.getFile().getName()+": line "+
                         Integer.toString(o.getLine())+"<br>\n";
	     output.write(linkString);
            }
          }
	}
	catch (IOException e) { };
    }   

    /** Write information about this method to the report */
    public void generateTags(Vector tagList)
    {
	String methodName=getName();
	String linkString;
	String linkFileName;

        if (methodName!=null && methodName.indexOf("~constructor~")>=0)
        {
	  methodName=this.className;
	}
        String nameString = "<a class=\"methodDef\" name="+getFullName()+
	                      " href="+getRefName()+"#"+getFullName()+">"+methodName+"</a>";

	// generate tag for this method
	if (getOccurrence()==null)
          return;

	HTMLTag t = new HTMLTag(getOccurrence(),methodName,nameString);
        tagList.addElement(t);
       
        // generate tags for all references to the method
        JavaVector v = getReferences();
        Enumeration e = v.elements();
        while (e.hasMoreElements())
        {
           Occurrence o = (Occurrence) e.nextElement();
	   // System.out.println("Occurrence:"+o.getLine());
	   linkFileName = getRelativePath(o)+getSourceName();
           linkString = "<a class=\"methodRef\" href="+linkFileName+"#"+getFullName()+">"+methodName+"</a>";
	   if (o!=null)
           {
	     t = new HTMLTag(o,methodName,linkString);
             tagList.addElement(t);
           }
        }
    }   

    /** Resolve references to other symbols for pass 2 */
    void resolveTypes(SymbolTable symbolTable) {
        // if we have parameters and/or exceptions, resolve them
        if (parameters != null) parameters.resolveTypes(symbolTable);
        if (exceptions != null) exceptions.resolveTypes(symbolTable);
        
        // if we have a return type, resolve it
        if (type != null && type instanceof DummyClass) {
            Definition newType = symbolTable.lookupDummy(type);
            if (newType != null) {
                newType.addReference(type.getOccurrence());
                type = newType;
            }   
        }   
        
        // perform resolution for our superclass
        super.resolveTypes(symbolTable);
    }


    /** set the list of exceptions that this method can throw */
    void setExceptions(JavaVector exceptions) {
        this.exceptions = exceptions;
    }   
}
