package javasrc.symtab;

import java.util.*;
import javasrc.xref.*;
import java.io.*;

/*******************************************************************************
 * An extended Vector class to provide simple lookup and type resolution
 * methods
 ******************************************************************************/
public class JavaVector extends java.util.Vector {
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** prevent nested resolutions... */
    private boolean resolvingRefs=false;
    private boolean resolvingTypes=false;


    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor to create a new Java vector */
    public JavaVector() {
        super();
    }


    /** Add a new element to the vector (used for debugging) */
    public void addElement(Definition o) {
        super.addElement(o);
        if (o == null)
            throw new IllegalArgumentException("null element added to vector");
        
    }   


    /** get an element from the */
    public Definition getElement(String name) {
        Enumeration e = elements();
        while(e.hasMoreElements()) {
            Definition d = (Definition)e.nextElement();
            if (d.getName().equals(name))
                return d;
        }
        return null;
    }   

    /** Write information about each element in the vector to the report, */
    void generateTags(Vector tagList)
    {
        Enumeration e = elements();
        while(e.hasMoreElements())
            ((Taggable)e.nextElement()).generateTags(tagList);
    }   

    void generateReferences(FileWriter output)
    {
        Enumeration e = elements();
        while(e.hasMoreElements())
	{
	  Object element=e.nextElement();
	  if (element instanceof Definition)
	  {
	    Definition d = (Definition) element;
            d.generateReferences(output);	    
	  }
	}
    }   

    /** Resolve references that are stored as JavaTokens */
    public void resolveRefs(SymbolTable symbolTable)
    {
	// System.out.println("JavaVector:resolveRefs");
        if (!resolvingRefs) {
            resolvingRefs = true;
            // resolve each element in the list
            Enumeration e = elements();
            while(e.hasMoreElements())
            {
                JavaToken t = (JavaToken)e.nextElement();
		// System.out.println("! resolving reference to:"+t.getText());
                Definition d = symbolTable.lookup(t.getText(),t.getParamCount());
                if (d == null)
		{
                    d = symbolTable.findPackage(t.getText());
		}
                if (d != null)
		{
		    // System.out.println("Found reference:"+d.getQualifiedName());
                    d.addReference(new Occurrence(t.getFile(),t.getLine(),
						  t.getColumn(),
						  t.getPackageName(),
						  t.getClassName(),
						  t.getMethodName()));
		}
		if (d != null)
		{
		    // System.out.println("! resolving element refs");
		  d.resolveRefs(symbolTable);
		}
            } 
        }   
    }


    /** Resolve the types of dummy elements in the vector */
    public void resolveTypes(SymbolTable symbolTable) {
        if (!resolvingTypes) {
            resolvingTypes = true;
            Enumeration e = elements();
            while(e.hasMoreElements()) {
                Definition d = (Definition)e.nextElement();
		// System.out.println("Resolving type for "+d.getName());
		// System.out.println("JVec:resolving "+d.getName());
		// System.out.println("className="+d.getClass().getName());
                if (d instanceof DummyClass)
		{
                    String pkg = ((DummyClass)d).getPackage();
                    Definition newD = symbolTable.lookupDummy(d);
                    if (newD != null)
		    {
                        newD.addReference(d.getOccurrence());
                        removeElement(d);
                        addElement(newD);
                    }   
                }   
                else
                    d.resolveTypes(symbolTable);
            }   
        }   
    }
}
