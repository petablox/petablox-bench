//  Supers.java -- operations involving superclasses for the runtime

package toba.runtime;

import toba.classfile.*;
import java.io.IOException;

class Supers {

    private static void
    resolveIfaceRefs (ClassData cd,
                      ClassLoader loader)
    {
        for (int i = 0; i < cd.interfaces.length; i++) {
            ClassRef cr = cd.interfaces [i];
            if (! cr.isResolved (loader)) {
                Resolve.resolveClassRef (cr, loader);
            }
            resolveIfaceRefs (ClassData.forClass (cr.getRefClass (loader)), loader);
        }
    }

// load and define the superclasses and interfaces of a given class
    public static void
    load (ClassData cdata,
          ClassLoader loader) 
    throws ClassNotFoundException
         , NoClassDefFoundError
         , IOException
    {
        // If we done any resolution on the class, we've already 
        // loaded superclasses
        if (cdata.state != ClassData.RES_NONE)
            return;

        if (cdata.supername != null) {
            // We don't resolve our superclass yet, to avoid any
            // circular loading problems
            Class sc = SystemClassLoader.invokeLoader(loader, cdata.supername, 
                                                      false);
            ClassData sccdata = ClassRT.getClassData(sc);
            if (sccdata == null) {
                throw new NoClassDefFoundError(cdata.supername);
            }
            cdata.superclass = sccdata;
        }
        
        cdata.state = ClassData.RES_SUPERCLASSES;

        /* The IHash.mark call we're going to do below is going to want
         * to have the interfaces loaded---at the moment, all we have
         * is their ClassRef structures.  Walk the implements tree resolving
         * all interfaces relative to this class loader. */
        for (ClassData c = cdata; null != c; c = c.superclass) {
            resolveIfaceRefs (c, loader);
        }

        cdata.buildTables();
        IHash.mark(loader, cdata);
        return;
    }
}
