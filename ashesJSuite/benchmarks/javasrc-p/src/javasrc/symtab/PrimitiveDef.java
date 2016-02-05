package javasrc.symtab;

import java.util.*;

/*******************************************************************************
 * Definition of a primitive type. We subclass ClassDef here as a shortcut
 *  for method parameter lookups.  By defining primitives in a hierarchy
 *  we get the primitive type promotion for free.  For this cross-reference
 *  tool we don't actually perform any type conversions, but we thought it
 *  would be a good example of how some constructs can be used in similar
 *  ways, even though it might not appear like the proper model.
 ******************************************************************************/
class PrimitiveDef extends ClassDef       
{ 
    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor to create a primitive type object */
    PrimitiveDef(String name,               // the name of the primitive
                 ClassDef superClass,       // the superclass (if applicable)
                 ScopedDef parentScope) {   // which scope owns it
        super(name, null, superClass, null, parentScope);
    }   

    /** Write information about this primitive type to the tagList */
    public void generateTags(Vector tagList)
    {
    /*
        out.println(getName() + " (Primitive type)");
        listReferences(out);
    */
    }
}
