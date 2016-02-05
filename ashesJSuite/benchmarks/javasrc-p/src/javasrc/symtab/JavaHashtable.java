package javasrc.symtab;

import java.util.*;

/*******************************************************************************
 * An extension of the java.util.Hashtable that is used to 
 * add some simple looup and type resolution
 ******************************************************************************/
class JavaHashtable extends java.util.Hashtable {
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** prevent nested resolutions... */
    private boolean resolving=false;
    private boolean resolvingRefs=false;

    private static final int CLASS = 0;
    private static final int INTERFACE = 1;
    private static final int EITHER = 2;


    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor to create a new java hash table */
    JavaHashtable() {
        super();
    }


    /** Generate tag info for elements */
    void tagElements(Vector tagList)
    {
        Enumeration e = elements();
        while(e.hasMoreElements())
	{
            ((Taggable)e.nextElement()).generateTags(tagList);
	}
    }


    /** Resolve the types of dummy elements in the hash table */
    void resolveTypes(SymbolTable symbolTable)
    {	
        if (!resolving) {
            resolving = true;
            // walk through each element in the hash table
            Enumeration e = elements();
            while(e.hasMoreElements()) {
                Definition d = (Definition)e.nextElement();
		
		// System.out.println("JHT:resolving "+d.getName());
		// System.out.println("className="+d.getClass().getName());
                // if the element is a Dummy class or dummy interface, we
                //   will replace it with the real definition
                if (d instanceof DummyClass)
		{
		    // System.out.println("Resolving DummyClass:"+d.getName());
                    Definition newD;
                    
                    // get its package name and look up the class/interace
                    String pkg = ((DummyClass)d).getPackage();
                    newD = symbolTable.lookupDummy(d);
                
                    // if we found the class/interface, 
                    //    add a reference to it, and replace the current def
                    //    with the one we found
                    if (newD != null)
		    {
                        newD.addReference(d.getOccurrence());
                        remove(d.getName());
                        put(d.getName(), newD);
                    }   
                }               
                // otherwise, ask it if it needs resolution
                else
                    d.resolveTypes(symbolTable);
            }   
        }   
    }

    /** Resolve the types of dummy elements in the hash table */
    void resolveRefs(SymbolTable symbolTable)
    {	
	// System.out.println("JavaHashTable:resolveRefs");
        if (!resolvingRefs) {
            resolvingRefs = true;
            // walk through each element in the hash table
            Enumeration e = elements();
            while(e.hasMoreElements()) {
                Definition d = (Definition)e.nextElement();
                d.resolveRefs(symbolTable);
            }   
        }   
    }
}
