package javasrc.symtab;

/*******************************************************************************
 * An abstract class representing a symbol that can import packages.
 ******************************************************************************/
abstract class HasImports extends ScopedDef       
{ 
    //==========================================================================
    //==  Class Variables
    //==========================================================================
    
    /** A table of all packages imported by this symbol */
    private JavaHashtable imports;


    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor to set up an object that can have imports */
    HasImports(String name,               // name of the symbol
               Occurrence occ,            // where it's defined
               ScopedDef parentScope) {   // which scope owns it
        super(name, occ, parentScope);
    }   


    /** Tell the symbol table that we are done with our imports */
    void closeImports(SymbolTable symbolTable) {
	// System.out.println("Closing imports");
        symbolTable.closeImports();
    }   


    /** Ask if this is a toplevel class or not 
     *  This is true if the parentScope is a package
     */
    boolean isTopLevel() {
        return (getParentScope() instanceof PackageDef);
    }


    /** Tell the symbol table that we need to import some classes */
    void openImports(SymbolTable symbolTable) {
	// System.out.println("Opening imports");
        symbolTable.openImports(imports);
    }


    /** Resolve any referenced symbols  */
    void resolveTypes(SymbolTable symbolTable)
    {
	// System.out.println("Resolving imports");
	/*
        if (imports != null)            // resolve imported classes/packages
            imports.resolveTypes(symbolTable);
            
        */

        if (isTopLevel())
	{
            openImports(symbolTable); // make them available for lookup
	}
        super.resolveTypes(symbolTable); // resolve class/interface contents
        // closeImports() is done in class resolution
    }   


    /** Resolve any referenced symbols  */
    void resolveRefs(SymbolTable symbolTable)
    {
	// System.out.println("Resolving imports");
	/*
        if (imports != null)            // resolve imported classes/packages
            imports.resolveTypes(symbolTable);
	*/
            
        if (isTopLevel())
	{
            openImports(symbolTable); // make them available for lookup
	}
        super.resolveRefs(symbolTable); // resolve class/interface contents
        // closeImports() is done in class resolution
    }   

    /** Set the list of imported classes/packages */
    void setImports(JavaHashtable imports) {
        this.imports = imports;
    }   
}
