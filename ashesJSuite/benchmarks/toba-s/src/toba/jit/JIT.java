//  $Id: JIT.java,v 1.11 1999/03/09 01:57:30 pab Exp $
//  JIT.java - main entry point for java execution engine using just-in-time
//      compilation for methods.

package toba.jit;

import toba.classfile.*;
import toba.runtime.*;
import java.util.*;

class JIT {
    static void usage() {
	System.out.println("usage: JIT classname [args]");
	Runtime.getRuntime().exit(1);
    }

    /** Native function to invoke a void(String[]) function at a given address.
      * @param addr the address of the function entry point
      * @param args the arguments to the function.
      * Toba hash: laS_r1YxG
      */
    static native void
    startMain (long addr,
               String args[]);

    // Driver procedures for the command-line version of the JIT
    static public void main(String args[]) 
	throws ClassNotFoundException
    {
	String classname = null; // the name of the class to interpret
	Properties sysprops = null;
	int nargs = 0;
	for (int i = 0; (i < args.length) && (classname == null); i++) {
	    String arg = args[i];
	    nargs++;
	    if (arg.charAt(0) != '-')
		classname = arg;
	    else if (arg.charAt(1) == 'D') {
		int sepindex = arg.indexOf('=');
		if (sepindex < 0)
		    usage();

		String propname = arg.substring(2, sepindex);
		String propval  = arg.substring(sepindex+1);
		if (sysprops == null)
		    sysprops = System.getProperties();

		sysprops.put(propname, propval);
	    } else {
		usage();
	    }
	}

	// I should have a class name to run by now
	if (null == classname) {
	    usage();
        }

        JITCodeGen.Initialize ();
        JITCodeGen jcg = (JITCodeGen) CodeGen.getGenerator ();

        if (null != System.getProperty ("jtoba_instrument")) {
            jcg.InitInstrumentation ();
        }

	Class cl = toba.runtime.SystemClassLoader.systemLoadClass(classname, true);
	
	/* Create a descriptor for the main method */
	ClassRef cref = ClassRef.byName (classname);
	MethodRef mref = new MethodRef(cref, "main", "([Ljava/lang/String;)V");

	/* Resolve the class and method ref */
	cref.resolveTo(cl, null);
	mref.resolveWith(ClassRT.getClassData(cl));

        Method mt = (Method) mref.getField ().tableObj;
        if ((null != mt) && (null != mt.mtcode)) {
            /* This is a JIT-loaded class (as opposed to a pre-compiled
             * class that we happen to be starting through the jit).
             * Make sure that the entry point is resolved. */
            if (! mt.mtcode.getIsResolved ()) {
                mt.mtcode.resolveCode ();
            }
        }

        // Copy arguments into a string array
	String[] argstrings = new String[args.length - nargs];
	for (int i = nargs; i < args.length; i++) {
	    argstrings[i - nargs] = args[i];
        }

        long addr = ClassRT.getMethodAddr (cl, mref.getField());
        startMain (addr, argstrings);
        jcg.SummarizeInstrumentation ();
    }
}
