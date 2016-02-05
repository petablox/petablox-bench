package javasrc.symtab;

import java.io.*;
import java.util.*;
import javasrc.xref.*;
import javasrc.util.*;

/*******************************************************************************
 * A SymbolTable object keeps track of all symbols encountered while 
 *  parsing a file.  It's main components are a list of all packages
 *  that have been parsed or imported, and a stack of symbols that represent
 *  the syntactical scope of a source file as it is being parsed.
 ******************************************************************************/
public class SymbolTable        
{
    public static final boolean debug = false;

    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** a dummy scope to hold things like primitive types */
    private BlockDef baseScope = null;

    /** the "default" package to hold classes w/o package definitions */
    private PackageDef defaultPackage = null;
    
    /** A list of all strings encountered in the source */
    private StringTable   names = new StringTable();
    
    /** A stack of currently-active scopes */
    private JavaStack     activeScopes;
    
    /** A list of all packages that have been parsed or imported */
    private JavaHashtable packages;
    
    /** A specific scope to look in if the source code contains
     *  an explicitly-qualified identifier
     */
    private Definition    qualifiedScope;
    
    /** The file that is currently being parsed */
    private File          currentFile;
    
    /** The method header that is currently being parsed.
     *  This is used to associate variable definitions as
     *  parameters to a method
     */
    private MethodDef     currentMethod;
    
    /** A list of packages that are being imported on demand */
    private JavaVector    demand;
    
    /** A list of classes that have been explicitly imported */
    private JavaHashtable importedClasses;
    
    /** The java.lang package */
    private PackageDef javaLang;

    /** The "java.lang.Object" class */
    private ClassDef object;

    /** Container for comment tags */
    private Vector _comments;

    /** Hashtable holds Vectors of ClassDefs for files */
    private static Hashtable _fileClassDefs;

    //==========================================================================
    //==  Methods
    //==========================================================================

    public Hashtable getPackages() { return packages; }    

    public JavaHashtable getImports() {return importedClasses;}
    public void setImports(JavaHashtable imp) { importedClasses = imp; }
    public JavaVector getDemand() { return demand; }
    public void setDemand(JavaVector dem) { demand = dem; }

    /** Constructor to create a new symbol table */ 
    public SymbolTable() {
        // allocate storage for the packages and scope lists
        packages        = new JavaHashtable();
        activeScopes    = new JavaStack();
        
        // Create a package object to represent java.lang
        javaLang        = new PackageDef(getUniqueName("java.lang"),
                                          new Occurrence(null,0),null);

        // Create a block to hold predefined types
        baseScope = new BlockDef(null, null, null);
        pushScope(baseScope);
        baseScope.setDefaultOrBaseScope(true);

        // Create Vector for comments
        _comments = new Vector(100);

        // define the predefined types
        // treat them as being an inheritance hierarchy to make widening
        //   conversions automatic. For example, a float can widen to a double,
        //   so we treat float as a _subclass_ of double.  This makes
        //   parameter matching for method lookup simple!
        //   (NOTE: the real parameter lookup routine that would be used
        //          for method resolution is not implemented in this simple
        //          cross-reference tool.  However, treating the primitives
        //          as an inheritance hierarchy is included to show a
        //          technique that might be used in a real cross-reference tool.)
        PrimitiveDef pBoolean = new PrimitiveDef(getUniqueName("boolean"),
                                                          getObject(), baseScope);
        PrimitiveDef pDouble  = new PrimitiveDef(getUniqueName("double"),
                                                          getObject(), baseScope);
        PrimitiveDef pFloat   = new PrimitiveDef(getUniqueName("float"),
                                                          pDouble,     baseScope);
        PrimitiveDef pLong    = new PrimitiveDef(getUniqueName("long"),
                                                          pFloat,      baseScope);
        PrimitiveDef pInt     = new PrimitiveDef(getUniqueName("int"),
                                                          pLong,       baseScope);
        PrimitiveDef pShort   = new PrimitiveDef(getUniqueName("short"),
                                                          pInt,        baseScope);
        PrimitiveDef pByte    = new PrimitiveDef(getUniqueName("byte"),
                                                          pShort,      baseScope);
        PrimitiveDef pChar    = new PrimitiveDef(getUniqueName("char"),
                                                          pInt,        baseScope);
        PrimitiveDef pVoid    = new PrimitiveDef(getUniqueName("void"),
                                                          getObject(), baseScope);
        
        baseScope.add(pBoolean);
        baseScope.add(pDouble);
        baseScope.add(pFloat);
        baseScope.add(pLong);
        baseScope.add(pInt);
        baseScope.add(pShort);
        baseScope.add(pByte);
        baseScope.add(pChar);
        baseScope.add(pVoid);
    }   


    /** Add a package to the list of packages available on demand
     *  ("On demand" refers to imports that use an "*" to mean "any class
     *  that resides in the package."  For example
     *     import java.awt.*;
     *  is an on-demand import that says "if we don't find a class anywhere
     *  else, try to find it in the java.awt.* package.
     */
    void addDemand(PackageDef pkg) {
        demand.addElement(pkg);
    }

    public static void createDirs(File f)
    {
	String parentDir = f.getParent();

	File directory = new File(parentDir);
	if (!directory.exists())
	  directory.mkdirs();
    }

    public static void addFileClassDef(File f,ClassDef classDef)
    {
      if (_fileClassDefs==null)
	_fileClassDefs=new Hashtable(2);

      Vector v = (Vector) _fileClassDefs.get(f);
      if (v==null)
      {
	 v = new Vector(2,2);
	 _fileClassDefs.put(f,v);
      }

      v.addElement(classDef);
    }

    public static String getClassList(File f)
    {
      if (_fileClassDefs==null)
	return null;

      Vector v = (Vector) _fileClassDefs.get(f);
      if (v==null)
	 return null;

      String list="";
      for (int i=0;i<v.size();i++)
      {
	Definition d = (Definition) v.elementAt(i);
	String name = d.getName();
	list+=name;
	if (i<v.size()-1)
	  list+=", ";
      }

      return (list);
    }

    /** Add a package that has been imported */
    public void addImport(JavaToken tok, String className, String packageName)
    {
	// System.out.println("addImport:"+packageName+","+className);

        if (importedClasses == null) // lazy instantiation
            importedClasses = new JavaHashtable();  
        
        // if there is no package name, use the default package
        if (packageName.equals(".") || packageName.equals(""))
        {
            importedClasses.put(getUniqueName("~default~"), getDefaultPackage());
            return;
        }   
            
        // otherwise, chop the extra "." that the parser adds...
        else
            packageName = packageName.substring(1);
            
        // if there is no class, we are importing a package on demand
        // so create a dummy package definition (if one doesn't already
        // exist)
        if (className == null)
        {
            Definition d = (Definition)packages.get(packageName);
            if (d == null)
            {
                d = new PackageDef(getUniqueName(packageName),
                                   new Occurrence(currentFile, tok.getLine(),tok.getColumn()),
                                   null);
                packages.put(packageName, d);
            }   
            importedClasses.put(d.getName(), d);
            // reference(tok);
        }   
        
        // otherwise, create a placeholder class for class/interface ref
        else
        {
	    // System.out.println("Created placeholder for:"+getUniqueName(className));
            importedClasses.put(getUniqueName(className),
                new DummyClass(getUniqueName(className),
                               new Occurrence(currentFile, tok.getLine(),tok.getColumn()),
                               getUniqueName(packageName)));
            // reference(tok);
        }   
    }


    /** Add an element to the current scope */
    void addToCurrentScope(Definition def) {
        // add the definition to the current scope
        getCurrentScope().add(def);
        
        // set the parent scope for the definition
        def.setParentScope(getCurrentScope());
    }   


    /** We are done with imports, so clear the list */
    void closeImports() {
        demand          = null;
        importedClasses = null;
    }   


    /** Define a curly-brace-delimited block of code */
    public Definition defineBlock(JavaToken tok) {
        // create a new block definition and push it
        // as the current scope
        BlockDef def = new BlockDef(null, getOccurrence(tok), getCurrentScope());
        addToCurrentScope(def);
        return pushScope(def);
    }   


    /** Define a class object */
    public void defineClass(JavaToken theClass,      // class being created
                                 JavaToken superClass,    // its superclass
                                 JavaVector interfaces) { // interfaces it implements
        // note -- we leave interfaces as a vector of JavaTokens for now
        //         we'll resolve them in pass 2.

        // create a new class definition for the class
        ClassDef def = new ClassDef(getUniqueName(theClass),
                                          getOccurrence(theClass),
                                          superClass==null ?
                                                null :
                                                getDummyClass(superClass),
                                          interfaces,
                                          getCurrentScope());
                                         
        def.setType(ClassDef.CLASS);
                                         
        // add the imported classes/packages to the class
        def.setImports(importedClasses);
        
        // add the class to the current scope
        addToCurrentScope(def);

        SymbolTable.addFileClassDef(currentFile,def);

        // make the claa be the new current scope
        pushScope(def);
    }   


    /** Define an interface object */
    public void defineInterface(JavaToken theInterface,
                                      JavaVector superInterfaces) {
        // note -- we leave superInterfaces as a vector of JavaTokens for now.
        //         we'll resolve in pass 2.
        
        // create the new interface object
        ClassDef def = new ClassDef(getUniqueName(theInterface),
                                    getOccurrence(theInterface),
                                    null, // no super class...
                                    superInterfaces,
                                    getCurrentScope());
                                             
        def.setType(ClassDef.INTERFACE);
        
        // add it to the current scope
        addToCurrentScope(def);
        
        // make the interface the current scope
        pushScope(def);
    }   


    /** Define a new label object */
    public void defineLabel(JavaToken theLabel) {
        addToCurrentScope(new LabelDef(getUniqueName(theLabel),
                                getOccurrence(theLabel),
                                getCurrentScope()));
    }   

    public String escapeHTML(String text)
    {
      String newText=""; 
      char c;

      for (int i=0;i<text.length();i++)
      {
        c=text.charAt(i);
        switch (c)
        {
          case '<':
	    newText+="&lt;";
            break;
          default:
            newText+=c; 
            break;
        }
      }

      return newText;
    }

    /** Define a new comment object */
    public void defineComment(int line,int column, String text)
    {
	String commentText = escapeHTML(text); // escape HTML characters in comments
        String newText = "<span class=\"comment\">"+commentText+"</span>";
	String packageName=getCurrentPackageName();
	
	HTMLTag t = new HTMLTag(currentFile,line,column,packageName,text,newText);
	_comments.addElement(t);
    }

    /** Define a new method object */
    public void defineMethod(JavaToken theMethod, JavaToken type)
    {
        // if there is no type, this is a constructor
        String name;
	String className=null;

        if (type == null)
        {
	    // System.out.println("defineMethod:"+theMethod.getText());
            // name = "~constructor~";
            name = theMethod.getText();
	    className = theMethod.getText();
            currentMethod = new MethodDef(getUniqueName(name),
					  className,
                                          getOccurrence(theMethod),
                                          getDummyClass(type),
                                          getCurrentScope());
        }            
        // otherwise use its real name
        else
	{
            if (theMethod == null)
	    {
                theMethod = type;
                type = null;
            }   
            name = theMethod.getText();         
            currentMethod = new MethodDef(getUniqueName(name),
                                          getOccurrence(theMethod),
                                          getDummyClass(type),
                                          getCurrentScope());
        }   

        // add the method to the current scope
        addToCurrentScope(currentMethod);
        
        // make the method be the current scope
        pushScope(currentMethod);
    }


    /** Define a new package object 
     *  This is an adapter version to get the name of the package from a token
     */
    public void definePackage(JavaToken tok) {
        definePackage(getUniqueName(tok));
    }   


    /** Define a new package object */
    PackageDef definePackage(String name) {
        // try to find thew package
        PackageDef pkg = (PackageDef)packages.get(name);
        
        // if we don't already have the package, define it
        if (pkg == null) {
            pkg = new PackageDef(getUniqueName(name), null, null);
            packages.put(name, pkg);
        }   
        
        // make the package be the current scope
        pushScope(pkg);
        return pkg;
    }


    /** create a variable definition */
    public void defineVar(JavaToken theVariable, JavaToken type) {
        // create the variable definition
        VariableDef v = new VariableDef(getUniqueName(theVariable),
                                        getOccurrence(theVariable),
                                        getDummyClass(type),
                                        getCurrentScope());
                                            
        // if we are in a method's parameter def, add to its parameters
        if (currentMethod != null)
            currentMethod.add(v);
            
        // otherwise, add to the current scope
        else
            addToCurrentScope(v);
    }   


    /** State that we are done processing the method header */
    public void endMethodHead(JavaVector exceptions) {
        // set its thrown exception list
        currentMethod.setExceptions(exceptions);
        
        // reset the method indicator
        // NOTE:  this is not a problem for inner classes; you cannot define an
        //        inner class inside a formal parameter list, so we don't need a
        //        stack of methods here...
        currentMethod = null;
    }   


    /** look for the name in the import list for this class */
    Definition findInImports(String name)
    {
        Definition def=null;
        
	// System.out.println("findInImports:"+name);

        // look at the stuff we imported
        // (the name could be a class name)
        if (importedClasses != null)
            def = (Definition)importedClasses.get(name);
        
        // otherwise, take a look in the import-on-demand packages to
        //   see if the class is defined
        if (def==null && demand != null && name.charAt(0) != '~')
        {
            Enumeration e = demand.elements();
            while(def==null && e.hasMoreElements())
                def = ((PackageDef)e.nextElement()).lookup(name);
        }

        return def;
    }   


    /** Lookup a package in the list of all parsed packages */
    Definition findPackage(String name) {
        return (Definition)packages.get(name);
    }       


    /** Return the currently-active scope */
    ScopedDef getCurrentScope() {
        if (activeScopes.empty())
            return null;
        return (ScopedDef)activeScopes.peek();
    }   


    /** Define a new package object */
    PackageDef getDefaultPackage() {
        // if the default package has not yet been defined, create it
        // (lazy instantiation)
        if (defaultPackage == null) {
            defaultPackage = new PackageDef(getUniqueName("~default~"), null, null);
            packages.put(getUniqueName("~default~"), defaultPackage);
            defaultPackage.setDefaultOrBaseScope(true);
        }   
        return defaultPackage;
    }


    /** Create a new dummy class object */
    public DummyClass getDummyClass(JavaToken tok) {
        if (tok == null) return null;
        return new DummyClass(getUniqueName(tok), getOccurrence(tok));
    }   


    /** Get the java.lang.Object object */
    ClassDef getObject() {
        if (object == null) { // lazy instantiation
            object = new DummyClass();
            object.setType(ClassDef.CLASS);
            // add it to package java.lang
            javaLang.add(object);
        }   
        return object;  
    }   


    /** Create a new occurrence object */
    Occurrence getOccurrence(JavaToken tok)
    {     	
        if (tok == null)
            return new Occurrence(null, 0);
        else
            return new Occurrence(currentFile, tok.getLine(), tok.getColumn(),getCurrentPackageName(),getCurrentClassName(),getCurrentMethodName());
    }   


    /** return the current qualified scope for lookup.  */
    Definition getScope() {
        return qualifiedScope;
    }

    /** Get a unique occurrence of a String that has the name we want */
    String getUniqueName(JavaToken tok) {
        return getUniqueName(tok.getText());
    }   


    /** Get a unique occurrence of a String that has the specified name */
    String getUniqueName(String name) {
        return names.getName(name);
    }   


    /** Lookup a non-method in the symbol table 
     *  This version of lookup is a convenience wrapper that just passes -1
     *  as the parameter count to the real lookup routine
     */
    Definition lookup(String name) {
        return lookup(name, -1);
    }   


    /** Lookup a name in the symbol table */
    Definition lookup(String name, int numParams)
    {
        Definition def     = null;
        StringTokenizer st = null;
        String afterPackage = null;

	// System.out.println("SymbolTable:lookup:"+name+","+numParams);
        
        // If we have a dot ('.') in the name, we must first resolve the package,
        //  class or interface that starts the name, the progress through the
        //  name
        if (name.indexOf('.') > 0)
        {
            ///NOTE: class names can have the same name as a package and
            //       context will determine the result!!!!
            //  eg.  pkg com.magelang.xref  and class xref in
            //       com.magelang can coexist...
            //  The lookup algorithm use here is far simpler, and may
            //    resolve improperly (ie, if we have packages 
            //    com.magelang.xref and com.magelang and the string we are
            //   testing is com.magelang.xref, we will always assume that it
            //   is a package)
            // A better implementation of this routine would
            //   try to find the proper name by trying to match the entire
            //   name at each stage rather than just finding the longest
            //   valid package name.
            String testName     = null;

            // break up the string into an enumerartion of substrings that were
            //   separated by dots ('.')
            st  = new StringTokenizer(name, ".");

            // We'll walk through to find the longest package name that we
            //   know about, then start checking to see if the rest of the
            //   elements are validly scoped within that package
            boolean doneWithPackage = false;
            while (st.hasMoreElements())
            {
                String id = (String)st.nextElement();
                Definition testIt = null;
                if (testName == null)
                {
                    testName = id;
                    // see if the first part of the name is an imported class
                    def = findInImports(testName);
                    if (def != null)
                    {
			// System.out.println("Found in imports:"+def.getName());
                        doneWithPackage = true;
                        id = (String)st.nextElement();
                    }   
                }   
                else
                    testName += "." + id;
                
                // keep track of the longest name that is a package
		// System.out.println("Looking for package:"+testName);
		testIt = (PackageDef) packages.get(testName);
                if (!doneWithPackage && (testIt != null))
                {
                    def = testIt;
                    afterPackage = null;
                }   
                else if (afterPackage == null)
                    afterPackage = id;
                else
                    afterPackage += "." + id;
            }
        }           
        // otherwise, just try to find the name in the imported classes/packages
        else if (numParams == -1)
        {
            def = findInImports(name);                  
            if (def != null)
            {
	        // System.out.println("lookup Returning import:"+def.getQualifiedName());
                return def;
	    }
        }   


        // At this point, we may have a definition that represents the
        //   part of the name to the left of the rightmost dot ('.')
        // If we have such a definition, there might be something after it;
        //   a final part of the name. If so, we need to push the scope of the
        //   leftmost part of the identifier.  If not, we just want to analyze
        //   the entire name as a unit.
	// System.out.println("lookup:def="+def);
	// System.out.println("lookup:afterpackage="+afterPackage);
        if (def != null && afterPackage != null)
	{
	    // System.out.println("Setting scope="+def.getName());
            setScope(def);
	}
        else
        {
	    // System.out.println("afterPackage="+name);
            afterPackage = name;
	}

        // Here we know we have more to look at...              
        if (afterPackage != null)
        {   // more to chew on...
            // check to see if we still have any DOTs in the name
            // if so, we'll need to figure out where certain names start/end
            st = new StringTokenizer(afterPackage, ".");
         
            // find and load the classes up to the last
            while (st.hasMoreElements())
            {
                String id = (String)st.nextElement();
                // if a explicit scope qualification was specified, look only there
                if (qualifiedScope != null)
                {
		    // System.out.println("Checking qualified scope:"+qualifiedScope);
                    def = qualifiedScope.lookup(id, numParams);
                    resetScope();
                }
                // Otherwise, first try a scoped lookup
                else
		{
		    // System.out.println("Checking activeScopes for:"+id);
		    def = activeScopes.lookup(id, numParams);
		    if (def==null)
		      def = activeScopes.lookup(id, -1);
                }

                if (def == null)
                {
		    // System.out.println(id+" Not found in activescopes");
		    break;
		}

                if (st.hasMoreElements())
                    setScope(def);
            }
        }

	if (def==null)
        {
	    // System.out.println("lookup returning null:"+name);
	}
	else
        {
	    // System.out.println("lookup returning:"+def.getQualifiedName());
	}
        return def;
    }


    /** Lookup a class based on a placeholder for that class */
    Definition lookupDummy(Definition d)
    {
	// System.out.println("lookupDummy:"+d.getName());

	String className=null;
        String pkg = ((DummyClass)d).getPackage();
	Definition newD=null;

	if (pkg==null)
	  className=d.getName();
	else
	  className=pkg+"."+d.getName();
	
	// System.out.println("Looking up:"+className);

	newD=lookup(className);

	/*
	if (newD==null)
	  System.out.println("No definition found for "+className);
	else
	  System.out.println("Found "+newD.getQualifiedName());
	*/

        return newD;
    }   


    /** Set up the list of imported packages for use in symbol lookup */
    void openImports(JavaHashtable imports)
    {
        // start a new demand list
        demand = new JavaVector();
        
        // add package java.lang to the demand list...
        demand.addElement(javaLang);
        importedClasses = new JavaHashtable();
        
        // if this class has something to import...
        if (imports != null)
        {
            // walk through the list of imports
            Enumeration e = imports.elements();
            while(e.hasMoreElements())
            {
                // add the package or class to the demand or import list
                //   based on the type of import it was
                Definition d = (Definition)e.nextElement();
                if (d instanceof PackageDef)
		{
		    // System.out.println("Adding package "+d.getName()+" to imports");
                    addDemand((PackageDef)d);
		}
                else
		{
                    if (d instanceof DummyClass)
		    {
                        Definition newD = lookupDummy(d);
                        if (newD != null) 
			{
			   // System.out.println("Adding class "+newD.getName()+" to imports");
                           d = newD;
			}
                    }   
                    importedClasses.put(d.getName(), d);
                }   
            }
        }   
    }


    /** Clear the scope stack (except the base scope for primitives) */
    public void popAllScopes() {
        while(activeScopes.peek() != baseScope)
            activeScopes.pop();
        importedClasses = null;
    }   


    /** Pop off the current scope from the stack */
    public void popScope() {
        activeScopes.pop();
    }   


    /** Push a scope on the stack for symbol lookup */
    Definition pushScope(Definition scope)
    {
        if (!(scope instanceof ScopedDef))
            throw new RuntimeException("Not a ScopedDef");
        activeScopes.push(scope);
        return scope;
    }   

    /** Get current package scope **/
    String getCurrentPackageName()
    {
	String packageName="";

	if (activeScopes==null)
	  return packageName;

        Enumeration e = activeScopes.elements();
	while (e.hasMoreElements())
	{
	  ScopedDef d = (ScopedDef) e.nextElement();
	  if (d instanceof PackageDef)
	  {
	    packageName=d.getName();
	    break;
	  }
	}

        return packageName;
    }   

    /** Get current class scope **/
    String getCurrentClassName()
    {
	String className="?";

	if (activeScopes==null)
	  return className;

        Enumeration e = activeScopes.elements();
	while (e.hasMoreElements())
	{
	  ScopedDef d = (ScopedDef) e.nextElement();
	  if (d instanceof ClassDef)
	  {
	    className=d.getName();
	    break;
	  }
	}

        return className;
    }   

    /** Get current method scope **/
    String getCurrentMethodName()
    {
	String methodName="?";

	if (activeScopes==null)
	  return methodName;

        Enumeration e = activeScopes.elements();
	while (e.hasMoreElements())
	{
	  ScopedDef d = (ScopedDef) e.nextElement();
	  if (d instanceof MethodDef)
	  {
	    methodName=d.getName();
	    break;
	  }
	}

        return methodName;
    }   

    /** Add an unresolved reference to the current scope */
    public void reference(JavaToken t)
    {
        t.setFile(currentFile);
	t.setPackageName(getCurrentPackageName());
	t.setClassName(getCurrentClassName());
	t.setMethodName(getCurrentMethodName());
        getCurrentScope().addUnresolved(t);
	// System.out.println("Adding unresolved reference:"+t);
    }   


    public Hashtable generatePackageTags()
    {
	Vector tagList;
	Vector sortedList;
	Hashtable tagTable=new Hashtable(2);

        // Write out information about each package
        Enumeration e = packages.elements();
        while(e.hasMoreElements())
        {
            PackageDef p = (PackageDef)e.nextElement();
            tagList=p.generateClassList();
	    if (tagList!=null)
            {
              sortedList = JSCollections.sortEnumeration(tagList.elements());	
	      tagTable.put(new SortableString(p.getScopedClassName()),sortedList);
            }
        }   

	return (tagTable);
    }


    public void generateReferenceFiles(String path)
    {
        // Write out information about each package
        Enumeration e = packages.elements();
        while(e.hasMoreElements())
        {
            PackageDef p = (PackageDef)e.nextElement();
            p.generateReferenceFiles(path);
        }   
    }   

    /** Generate HTML tags */
    public void generateTags(Vector tagList)
    {
	Enumeration enum = packages.elements();
	while (enum.hasMoreElements())
	{
          PackageDef p = (PackageDef) enum.nextElement();
          System.out.println("Generating tag list for package:"+p.getName());
          p.generateTags(tagList);
	}

	generateCommentTags(tagList);
    }   

    public void generateCommentTags(Vector tagList)
    {
       HTMLTag t;

       for (int i=0;i<_comments.size();i++)
       {
	  t = (HTMLTag) _comments.elementAt(i);
	  tagList.addElement(t);
       }
    }

    /** unset the qualifiedScope so normal scoped lookup applies on the next
     *  name to look up
     */
    void resetScope() {
        setScope((Definition)null);
    }   


    /** resolve types of anything that needs resolution in the symbol table */
    public void resolveTypes()
    {
        // for each package, resolve its references
        if (defaultPackage != null)
            defaultPackage.resolveTypes(this);
        packages.resolveTypes(this);
    }

    /** resolve types of anything that needs resolution in the symbol table */
    public void resolveRefs()
    {
        // for each package, resolve its references
        if (defaultPackage != null)
            defaultPackage.resolveRefs(this);
        packages.resolveRefs(this);
    }


    /** Mark the current file that is being parsed */
    public void setFile(File file) {
        currentFile = file;
    }   


    /** set the lookup scope to the nearest enclosing class (for "this.x") */
    public void setNearestClassScope() {
        // find the nearest class scope
        setScope(activeScopes.findTopmostClass());
    }   


    /** Set the qualified scope for the next name lookup.  Names will only be
     *  searched for within that scope.  This version of setScope looks up
     *  the definition to set based on its name as received from a token...
     */
    void setScope(JavaToken t)
    {
        Definition def = lookup(t.getText());
        if (def != null)
        {
            def.addReference(getOccurrence(t));
            setScope(def);
        }   
    }   


    /** Set the qualified scope for the next name lookup.  Names will only be
     *  searched for within that scope
     */
    void setScope(Definition d) {
        while (d != null && (d instanceof TypedDef))
            d = ((TypedDef)d).getType();
        if (d == null || d instanceof ScopedDef)
            qualifiedScope = d;
    }


    /** Set the qualified scope for the next name lookup.  Names will only be
     *  searched for within that scope.  This version of setScope looks up
     *  the definition to set based on its name...
     */
    void setScope(String name) {
        Definition def = lookup(name);
        if (def != null)
            setScope(def);
    }   


    /** Return a String representation for the entire symbol table */
    public String toString() {
        return "Symbol Table";
    }   


    /** Used to push the scope of the default package.  This is used by the
     *    parser if the source file being parsed does not contain a package
     *    specification.
     */
    public void useDefaultPackage() {
        pushScope(getDefaultPackage());
    }   
}
