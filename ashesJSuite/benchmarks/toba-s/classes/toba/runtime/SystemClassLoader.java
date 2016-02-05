//  SystemClassLoader.java -- the class loader that the system uses for finding
//                            classes at runtime.

package toba.runtime;

import toba.classfile.*;
import java.util.*;
import java.io.*;
import java.util.zip.*;
public class SystemClassLoader extends ClassLoader {
    Hashtable cache = new Hashtable();

    // routines used by the runtime to invoke the protected 
    // loadClass routine in all versions of java.lang.ClassLoader
    static native Class invokeLoader(ClassLoader c, String s, boolean t)
	throws ClassNotFoundException;
    public static native Class findNativeClass(String name);

    public static Class
    systemLoadClass (String name,
                     boolean resolve)
    throws ClassNotFoundException
    {
        return invokeLoader (null, name, resolve);
    }
    
    public Class
    loadClass(String name, boolean resolve) 
	throws ClassNotFoundException
    {
	Class c = null;

	c = (Class)cache.get(name.intern());

	if (c == null) {
	    c = findNativeClass(name);
	    if (c == null) {
		if (CodeGen.generator == null) {
		    throw new InternalError("Dynamic Loading method not defined.");
                }

//                System.out.println (name + " attempting to find in file");
                DataInputStream cfin = ClassFile.find (name);
//                System.out.println (name + " jitting from classfile");
		c = CodeGen.generator.defineClass(null, cfin);
//	    } else {
//                System.out.println (name + " loaded from binary");
            }
//	} else {
//            System.out.println (name + " loaded from cache");
        }

//        System.out.println (name + " being registered");
	registerNewClass(name, c);
	if (resolve) {
//            System.out.println (name + " being resolved");
	    resolveClass(c);
	}

	return c;
    }

    /* Register a new class with a given name. */
    synchronized void registerNewClass(String name, Class c) 
    {
	String ni = name.intern();
        /* NB: Any attempt to print things within this routine will result
         * in a core dump.  Go figure. */
	if (!cache.containsKey(ni)) {
	    cache.put(ni, c);
        }
    }

    SystemClassLoader() {}


    // toba-specific routines used to load and resolve class references

    // lookup a primitive class
    public static Class loadPrimitiveClass(char c) {
	Class cl;
	switch (c) {
	  case 'Z': cl = findNativeClass("boolean"); break;
	  case 'B': cl = findNativeClass("byte"); break;
	  case 'C': cl = findNativeClass("char"); break;
	  case 'S': cl = findNativeClass("short"); break;
	  case 'I': cl = findNativeClass("int"); break;
	  case 'J': cl = findNativeClass("long"); break;
	  case 'F': cl = findNativeClass("float"); break;
	  case 'D': cl = findNativeClass("double"); break;
	  default: throw new InternalError();
	}
	if (cl == null)
	    throw new InternalError("Null return in loadPrimitiveClass");

	return cl;
    }

}
