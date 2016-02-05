package javasrc.symtab;

import java.util.*;

/*******************************************************************************
 * A label that appears in the source file. 
 ******************************************************************************/
class LabelDef extends Definition {
    //==========================================================================
    //==  Methods
    //==========================================================================
    

    /** Constructor to create a new label symbol */
    LabelDef(String name,               // name of the label
             Occurrence occ,            // where it was defined
             ScopedDef parentScope) {   // scope containing the def
        super(name, occ, parentScope);
    }

    /** Write information about the label to the tagList */
    public void generateTags(Vector tagList)
    {
        // state that this is a label
        // System.out.println(getQualifiedName() + " (Label) " + getDef());
        
        // list all references to this label
        // listReferences(System.out); 
    }   
}
