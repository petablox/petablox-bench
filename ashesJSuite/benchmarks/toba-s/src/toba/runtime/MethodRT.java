//  MethodRT.java -- methods for manipulating (invoking) methods at runtime

//  Copyright 1996, 1997 Arizona Board of Regents;
//  see COPYRIGHT file for details.


package toba.runtime;

import toba.classfile.*;

/* Class containing static routines dealing with Methods in
 * classes at runtime. */

class MethodRT {

    /** Retrieve a pointer to the struct mt_generic which describes
      * the given instance method.
      * @param c Class in which to search
      * @param instancep If true, search in instance table; else search static table
      * @param index Index of the desired method
      * @returns long address of struct mt_generic
      * Toba Hash: _Czi_Oh7NV
      */
    public static native long getMethodTEnt(Class c, boolean instancep, int index);

    /** Return the address of the struct mt_generic associated with the
      * named method.
      * @param c Class to look in
      * @param f Field naming a method
      * @returns long address of mt_generic structure
      */
    public static long
    getMethodTEnt (Class c, Field f)
    {
        return getMethodTEnt (c, (0 == (f.access & ClassData.ACC_STATIC)), f.tableslot);
    }

    public static native long getInstanceMethodAddr(Class c, int index);
    public static native long getStaticMethodAddr(Class c, int index);

    public static long getMethodAddr(Class c, Field f) {
	if ((f.access & ClassData.ACC_STATIC) != 0) {
	    return getStaticMethodAddr(c, f.tableslot);
	} else {
	    return getInstanceMethodAddr(c, f.tableslot);
	} 
    }

    private static native void invokeMethod(Field f, long addr, toba.interpreter.EvalStack s);

    public static void invokeMethod(Class c, Field f, toba.interpreter.EvalStack s) {
	long addr;

        addr = getMethodAddr(c, f);

	if (addr == 0)
	    throw new UnsatisfiedLinkError();

	invokeMethod(f, addr, s);
    }

};
