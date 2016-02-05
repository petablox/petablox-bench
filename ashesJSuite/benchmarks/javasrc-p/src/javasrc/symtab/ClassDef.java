package javasrc.symtab;

import java.util.*;
import javasrc.xref.*;
import java.io.*;

/*******************************************************************************
 * Definition of a Java class OR interface
 *  These are merged together because there are places where we just don't
 *  know if something is an interface or class (because we are not looking
 *  at the classes/interfaces that are imported.)
 ******************************************************************************/
class ClassDef extends HasImports       
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    static final int CLASS = 0;
    static final int INTERFACE = 1;
    static final int EITHER = 2;
    
    /** The type of object this represents 
     *  We may not initially know, as a statement like
     *    import java.awt.Color
     *  _could_ be referring to a class _or_ interface.
     *  Of course a full implementation of a cross-reference
     *    tool would either parse the imports at this point,
     *    or read information from the class file...
     */
    private int classOrInterface=EITHER;
    
    /** The class from which this class was extended 
     *  (This only applies if this represents a CLASS)
     */
    private ClassDef superClass;
    
    /** A list of classes that extend this class, OR
     *  interfaces that extend this interface
     */
    private JavaVector subClasses;
    
    /** A list of interfaces that this class implements, OR
     *  a list of super interfaces for this interface
     */
    private JavaVector interfaces;
    
    /** A list of classes that implement this interface
     *  (This only applies if this represents an INTERFACE)
     */
    private JavaVector implementers;        

    
    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor for java.lang.Object
     *  This was the easiest way to avoid a nasty endless recursion
     */
    ClassDef() {
        super("Object", null, null);
    }   

    /** Constructor to set up a class */
    ClassDef(String name,               // thhe name of the class
             Occurrence occ,            // where it was defined
             ClassDef superClass,       // its superclass (if applicable)
             JavaVector interfaces,     // interfaces that it implements
             ScopedDef parentScope) {   // which scope owns it
        super(name, occ, parentScope);
        
        // if a superclass was specified, set it
        if (superClass != null)
            this.superClass = superClass;
	
        // keep track of implemented interfaces
        this.interfaces = interfaces;
    }   


    /** Adds a reference to the list of classes that implement this interface */
    void addImplementer(ClassDef def) {
        getImplementers().addElement(def);
        setType(INTERFACE);
        def.setType(CLASS);
    }   


    /** Add a reference to a class that extends this class 
     *  (or an interface that extends this interface
     */
    void addSubclass(ClassDef subclass) {
        getSubClasses().addElement(subclass);
    }   


    /** get the list of classes that implement this interface */
    JavaVector getImplementers() {
        if (implementers == null) // lazy instantiation
            implementers = new JavaVector();
        return implementers;
    }   


    /** Return the list of interfaces that this class implements
     *  (or the interfaces that this interface extends)
     */
    JavaVector getInterfaces() {
        return interfaces;
    }


    /** return a list of all subclasses/subinterfaces of this */
    JavaVector getSubClasses() {
        if (subClasses == null)
            subClasses = new JavaVector();
        return subClasses;
    }   


    /** Return a reference to the superclass of this class */
    ClassDef getSuperClass() {
        return superClass;
    }


    /** Does this represent a Java class? */
    boolean isClass() {
        return classOrInterface == CLASS;
    }   


    /** Does this represent a Java interface? */
    boolean isInterface() {
        return classOrInterface == INTERFACE;
    }   


    /** Lookup a method in the class or its superclasses */
    Definition lookup(String name, int numParams)
    {
        // try to look it up in our scope
        Definition d = super.lookup(name, numParams);
        
        // if not found, look it up in our superclass (if we have one)
        if (d == null)
	{
	    // System.out.println("ClassDef.lookup: nothing found for "+name);
            if (getSuperClass() != null)
            {
                setType(CLASS);
                getSuperClass().setType(CLASS);
                d = getSuperClass().lookup(name, numParams);
            }   
	}
	  
        // if still not found, look for it in any of our implemented interfaces
        if (d == null && interfaces != null)
        {
            Enumeration e = interfaces.elements();
            while(d == null && e.hasMoreElements())
                d = ((ClassDef)e.nextElement()).lookup(name, numParams);
        }   
        
        return d;
    }   

    public void generateReferences(FileWriter output)
    {
	// System.out.println("Generating references for:"+getName());
	try
        {
          String nameString = "<p>Class: <a name="+getName()+
	                    " href="+getSourceName()+"#"+getName()+">"+
	                    getScopedClassName()+"</a><br>";
	  String linkFileName;
	  String linkString;

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
		
          JavaHashtable ht = getElements();
	  // Variables
	  Enumeration el = ht.elements();		  
          while(el.hasMoreElements())
	  {
	    Object d = el.nextElement();
	    if (d instanceof VariableDef)
	    {
	      ((Definition) d).generateReferences(output);	    
	    }
	  }

	  // Methods
	  el = ht.elements();		  
          while(el.hasMoreElements())
	  {
	    Object d = el.nextElement();
	    if ((d instanceof MethodDef) || (d instanceof MultiDef))
	    {
	      ((Definition) d).generateReferences(output);	    
	    }
	  }

	  output.write("<hr>\n");
	  // Now inner classes
	  el = ht.elements();	
          while(el.hasMoreElements())
	  {
	    Object d = el.nextElement();
	    if (d instanceof ClassDef)
	    {
	      ((Definition) d).generateReferences(output);	    
	    }
	  }
	}
	catch (Exception ex)  { ex.printStackTrace(); return; }
    }
    

    /** Write information about the class to the tagList */
    public void generateTags(Vector tagList)
    {
        String nameString = "<a class=\"classDef\" name="+getName()+
	                    " href="+getRefName()+"#"+getName()+">"+getName()+"</a>";
	String linkString;
	String linkFileName;	

	// generate tag for this class
        if (getOccurrence()!=null)
        {
	 HTMLTag t = new HTMLTag(getOccurrence(),getName(),nameString);
         tagList.addElement(t);

         // generate tags for all references to the class
         JavaVector v = getReferences();
	 // System.out.println("Found "+v.size()+" references to "+getName());
         Enumeration e = v.elements();
         while (e.hasMoreElements())
         {
           Occurrence o = (Occurrence) e.nextElement();
	   // System.out.println("Reference in file:"+o.getFile());
	   linkFileName = getRelativePath(o)+getSourceName();	   
           linkString = "<a class=\"classRef\" href="+linkFileName+"#"+getName()+">"+getName()+"</a>";
           if (o!=null)
           {
	     t = new HTMLTag(o,getName(),linkString);
             tagList.addElement(t);
           }
         }
        }

        tagElements(tagList);
    }   


    /** resolve referenced symbols */
    void resolveTypes(SymbolTable symbolTable)
    {
        System.err.println("resolving: "+getQualifiedName());
        // resolve superclass laundry
        super.resolveTypes(symbolTable);
        
        // if we have subclasses, resolve them to their symbols
        if (subClasses != null)
	{
            subClasses.resolveTypes(symbolTable);
	    // Make sure we re-open imports
	    openImports(symbolTable);
        }
    
        // if we have a superclass, resolve it
        ClassDef newSuperClass = getSuperClass();
        if (newSuperClass != null && newSuperClass instanceof DummyClass)
        {
            // get its package name and look up the class/interace
            String pkg = ((DummyClass)newSuperClass).getPackage();
            newSuperClass = (ClassDef)symbolTable.lookupDummy(newSuperClass);
            if (newSuperClass == null)
                newSuperClass = new
                    DummyClass(symbolTable.getUniqueName(getSuperClass().getName()),
                               null, symbolTable.getUniqueName(pkg));

            // if we were able to resolve the superclass, add the reference
            // to its reference list and make it this class' superclass
            if (newSuperClass != null) {
                newSuperClass.addReference(getSuperClass().getOccurrence());
                setSuperClass(newSuperClass);
                newSuperClass.addSubclass(this);
                newSuperClass.setType(ClassDef.CLASS);
            }   
            setType(CLASS);
        }   

        // if this class implements any interfaces, resolve those interfaces
        if (interfaces != null) {
            interfaces.resolveTypes(symbolTable);
            
            // add this class to the list of implementers for each interface
            Enumeration e = interfaces.elements();
            while(e.hasMoreElements())          
                ((ClassDef)e.nextElement()).addImplementer(this);
        }
        
        // we're done, so toss the packages (only for top-level classes)
        if (isTopLevel())
            closeImports(symbolTable);
    }   
 
    void resolveRefs(SymbolTable symbolTable)
    {
	JavaHashtable oldImports = symbolTable.getImports();
	JavaVector    oldDemand  = symbolTable.getDemand();
	super.resolveRefs(symbolTable);
	if (isTopLevel())
	{
	  closeImports(symbolTable);
	  symbolTable.setImports(oldImports);
	  symbolTable.setDemand(oldDemand);
	}
    }

    public void generateClassList(Vector tagList)
    {
	Enumeration e;
	Definition d;
	Occurrence o;
	ClassTag tag;
	String tagText;

        // List all classes in this class
	if (hasElements())
	{
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
		  baseName = o.getFile().getName();
		  baseName = baseName.substring(0,baseName.lastIndexOf("."));
		  link = baseName+"_java.html";
		  if (!baseName.equals(d.getName()))
		  {
		     link+="#"+o.getLine();
		  }
		  tagText="<a href=\""+link+"\""+
		          "TARGET=\"classFrame\">"+d.getScopedClassName()+"</a> <br>";
		  // System.out.println(d.getName()+" in file "+baseName);
		  tag = new ClassTag(d.getScopedClassName(),tagText);
		  tagList.addElement(tag);
		  ((ClassDef) d).generateClassList(tagList);
              }
	   }
	}
    }

    /** Set the list of interfaces that this class implements */
    void setInterfaces(JavaVector interfaces) {
        this.interfaces = interfaces;
    }


    /** set the superclass of this class */
    void setSuperClass(ClassDef superClass) {
        this.superClass = superClass;
        setType(CLASS);
        superClass.setType(CLASS);
    }   


    /** Specify if this is a class or interface once we know */
    void setType(int type) {
        classOrInterface = type;
    }   
}
