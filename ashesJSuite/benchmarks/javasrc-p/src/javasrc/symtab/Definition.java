package javasrc.symtab;

import java.util.*;
import java.io.*;

/*******************************************************************************
 * This abstract class represents a symbol definition in a Java source file.
 * All symbols used in our Java symbol table stem from this definition.
 ******************************************************************************/
abstract class Definition implements Taggable
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** A file location where the item was defined */
    private Occurrence definition;
    
    /** The scope that contains this symbol */
    private ScopedDef parentScope;
    
    /** A list of references to this symbol */
    private JavaVector references;
    
    /** The name of the symbol */
    private String name;

    private String _sourceName;
    private String _refName;

    public String getSourceName() { return _sourceName; }
    public String getRefName()    { return _refName; }

    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor for the base of a symbol definition */
    Definition(String name,              // the symbol name
               Occurrence occ,           // the location of its definition
               ScopedDef parentScope) {  // scope containing the def
        this.definition  = occ;
        this.parentScope = parentScope;
        this.name        = name;

	// Setup source and reference file names
	if (occ!=null && occ.getFile()!=null)
        {
	  String fileName = occ.getFile().toString();
	  String baseName = fileName.substring(fileName.lastIndexOf(File.separatorChar)+1,fileName.length());
	  baseName=baseName.replace('.','_');
	  _refName    = baseName+"_ref.html";    
	  _sourceName = baseName+".html";
	}
        
        // create a new vector to keep track of references to this symbol
        this.references  = new JavaVector();
    }   


    /** Add a location of a reference to the symbol to our reference list */
    void addReference(Occurrence occ)
    {
	// System.out.println("Adding reference in:"+occ.getFile()+" to "+getQualifiedName());
        references.addElement(occ);
    }   


    /** Get a String representation of the location where this symbol
     *  was defined
     */
    String getDef() {
        if (definition != null)
            return definition.getLocation();
        else
            return "";
    }   


    /** Get the basic name of the symbol */
    public String getName() {
        if (name == null)
            return "~NO NAME~";
        else
            return name;
    }   


    /** Get the information about where the symbol was defined */
    Occurrence getOccurrence()
    {
	if (definition!=null && definition.getPackageName()==null)
	  definition.setPackageName(getPackageName());
        return definition;
    }


    /** Get the symbol that contains the definition of this symbol */
    ScopedDef getParentScope() {
        return parentScope;
    }


    /** Get the fully-qualified name of the symbol
     *  Keep building the name by recursively calling the parentScope's
     *    getQualifiedName() method...
     */
    String getQualifiedName() {
        String nameToUse = name;
        if (name == null)
            nameToUse = "~NO NAME~";

        if (getParentScope() != null &&
             !getParentScope().isDefaultOrBaseScope())
            return getParentScope().getQualifiedName() + "." + nameToUse;
        else
            return nameToUse;
    }   

    /** Get the package name by going up the list of parents till we find the package */
    String getPackageName()
    {
	ScopedDef d=getParentScope();

	if (d==null)
	  return null;

	while (!(d instanceof PackageDef) && d.getParentScope()!=null)
	  d=d.getParentScope();

	return (d.getName());
    }   

    /** Get the name for the class without the package,but with outer classes */
    String getScopedClassName()
    {
	String name;
	ScopedDef d=getParentScope();

	if (!(d instanceof ClassDef))
	  return getName();

	name=d.getScopedClassName()+"."+getName();

	return (name);
    }   

    public String getPackagePath()
    {
       return getPackageName().replace('.',File.separatorChar);
    }

    String getRelativePath(Occurrence o)
    {
	String newPath="";
        String packageName=null;

	// System.out.println("Package Name for "+getName()+"="+getPackageName());
	// System.out.println("Package Name for occurrence in "+o.getFile()+"="+o.getPackageName());

        if (o!=null) 
	  packageName=o.getPackageName();
 
	if ((getPackageName()!=null) && (packageName !=null) 
	    && !getPackageName().equals(packageName))
        {
	  String pathName = getPackagePath();
	  StringTokenizer st = new StringTokenizer(packageName,".");
	  String backup="";
	  int dirs=0;

	  dirs=st.countTokens();
	  for (int j=0;j<dirs;j++)
	    backup=backup+".."+File.separatorChar;
	  newPath=backup+pathName+File.separatorChar;
	}

        return (newPath);
    }

    String getOccurrencePath(Occurrence o)
    {
	String packageName=o.getPackageName();
	String newPath="";

	// System.out.println("Package Name for "+getName()+"="+getPackageName());
	// System.out.println("Package Name for occurrence in "+o.getFile()+"="+o.getPackageName());

	if ((getPackageName()!=null) && (packageName !=null) 
	    && !getPackageName().equals(packageName))
        {
	  String pathName = o.getPackageName().replace('.',File.separatorChar);
	  StringTokenizer st = new StringTokenizer(packageName,".");
	  String backup="";
	  int dirs=0;

	  dirs=st.countTokens();
	  for (int j=0;j<dirs;j++)
	    backup=backup+".."+File.separatorChar;
	  newPath=backup+pathName+File.separatorChar;
	}

        return (newPath);
    }

    /** Determine if this symbol represents a class that is a superclass of
     *  another symbol.  For most symbols, this is false (because most symbols
     *  are not classes...).
     *  This method will be overridden for classes and interfaces.
     */
    boolean isSuperClassOf(Definition def) {
        return false;
    }   


    /** return a String representation of this class for printing */
    JavaVector getReferences() { return references; }       

    /** The "default" lookup routine.  This is used to search for a name within
     *  the scope of another symbol.  This version of the lookup method is a
     *  convenience that just passes -1 as the parameter count (meaning
     *  look the name up as a non-method symbol
     */
    Definition lookup(String name) {
        return lookup(name, -1);
    }   


    /** Lookup a method in our scope.  Because this is only a valid
     *  operation for scoped definitions, we default this to throw
     *  an exception that states so
     */
    Definition lookup(String name, int numParams) {
        throw new IllegalArgumentException("Can't lookup in a "+getClass());
    }   

    /** An abstract method used to tag information about this definition.
     */
    public abstract void generateTags(Vector tagList);

    /** generateReferences
     */
    public void generateReferences(FileWriter output)
    { 
       // Subclasses should override
    }

    /** This method resolves any references to other symbols.
     *  At this level there is nothing to resolve, so do nothing.
     */
    void resolveTypes(SymbolTable symbolTable) {
    }   

    /** This method resolves any references to other symbols.
     *  At this level there is nothing to resolve, so do nothing.
     */
    void resolveRefs(SymbolTable symbolTable) {
    }   


    /** Set a reference to the symbol that syntactically
     *  contains this symbol.
     */
    void setParentScope(ScopedDef parentScope) {
        this.parentScope = parentScope;
    }   


    /** return a String representation of this class for printing
     *  Note that this version of toString() is used by nearly all of
     *    the subclasses of Definition.
     */
    public String toString() {
        return getClass().getName() + " [" + getQualifiedName() + "]";
    }   
}
