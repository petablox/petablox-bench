// Resolve.java - Code for resolving references inside of classfiles,
//                particularly class references

/* Note: What this really does is "linking", and it's more than just
 * resolution of symbolic references.  We also invoke a resolver on
 * generated code, to backpatch addresses or whatever else might be
 * needed. */

package toba.runtime;

import toba.classfile.*;

public class
Resolve
{
private static String tabPrefix = "";

    // Do the work of resolving class reference into a real 
    // class, given a classloader to use if necessary
    private static Class resolveClassName(String classname, 
					  ClassLoader loader) 
    {
	Class refclass;
	int narrays;

//System.out.println (tabPrefix + "Resolve.resolveClassName " + classname);
tabPrefix += " ";
	// Lookup the base name of the class, in case it is an array.
	String clname = Names.baseclass(classname);

	// See how many array dimensions are specified
	narrays = 0;
	while (classname.charAt(narrays) == '[')
	    narrays++;

	try {
	    if (clname == null) {
		// Array of primitives class
		refclass = 
		    SystemClassLoader.loadPrimitiveClass(
			classname.charAt(narrays)); 
	    } else {
		// referenced classes are not resolved until resolution occurs.
		refclass = SystemClassLoader.invokeLoader(loader, clname, false);
	    }

	    // If an array was specified, run through and get the array class.
	    while (narrays > 0) {
		refclass = ClassRT.getArrayClass(refclass);
		narrays--;
	    }
	} catch (ClassNotFoundException e) {
	    throw new NoClassDefFoundError(classname);
	}

tabPrefix = tabPrefix.substring (1);
//System.out.println (tabPrefix + "done Resolve.resolveClassName " + classname);
	return refclass;
    }

    public static void resolveClassRef(ClassRef r, ClassLoader l) {
	if (r.isResolved(l) == false)
	    r.resolveTo(resolveClassName(r.name, l), l);
    }

    // Resolve references in the constant pool, and link code, and
    // whatever else is needed to link in the class and make it
    // ready to initialize.
    public static void resolveClass(ClassData cdata, ClassLoader l) {
	if (cdata.state == ClassData.RES_CONSTANTS) {
	    return;
        }
// System.out.println (tabPrefix + "Resolve.resolveClass " + cdata.name);
tabPrefix += " ";
	cdata.state = ClassData.RES_CONSTANTS;

        /* If this is from a Toba class, we don't have any constants, and
         * if we did, they'd have been resolved anyway. */
        if (ClassData.CDSRC_tobaclass == cdata.cdsrc) {
tabPrefix = tabPrefix.substring (1);
//System.out.println (tabPrefix + "toba done Resolve.resolveClass " + cdata.name);
            return;
        }

	// Set Class References to point to the appropriate classes
        resolveClassRef (cdata.myRef, l);
	for (int i = 0; i < cdata.constants.length; i++) {
	    Constant k = cdata.constants[i];
	    if (k != null && k.tag == Constant.CLASS) {
		ClassRef r = (ClassRef)k.value;
		resolveClassRef(r, l);
	    }
	}

        /* The methods of this class may have exception lists that included
         * references to classes we had not yet loaded at the time the
         * native class structure was built.  Go back and stick the correct
         * class pointer into the exception lists for all methods. */
        ClassRT.updateMethodExceptionLists (cdata);

//System.out.println (tabPrefix + "codegen Resolve.resolveClass " + cdata.name);
        /* We generated code based on entries in the method table; now go
         * back and do whatever linking is required so we can call those
         * functions.  It is _not_ the case that all methods appear as
         * MethodRefs in the constant table. */
        for (int i = 0; i < cdata.methods.length; i++) {
            Field f = cdata.methods[i]; // Field for method
            Method m = (Method) f.tableObj; // Method object from field

            if (null == m) {
                /* No method structure associated with this field.  We'll have
                 * to assume it was loaded by somebody who did everything right.
                 * Lord knows how we find it if we need, say, its address.
                 * Somebody probably should have copied that out from the
                 * C structure that somebody else presumably generated. */
                continue;
            }
            if (null == m.mtcode) {
                /* Every method object must have been assigned a method
                 * code object, usually in CodeGen.generateCode. */
                throw new InternalError ("No method code structure.");
            }
            /* Call the resolver for this code block */
            if (f.name.equals ("main") && f.signature.equals ("([Ljava/lang/String;)V")) {
//                System.out.println ("FORCED resolve of " + m);
                m.mtcode.resolveCode ();
            }
//            m.mcode.resolveCode ();
        }
tabPrefix = tabPrefix.substring (1);
//System.out.println (tabPrefix + "jit done Resolve.resolveClass " + cdata.name);
    }
}
