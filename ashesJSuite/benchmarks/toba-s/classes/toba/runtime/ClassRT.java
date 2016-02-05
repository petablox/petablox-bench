//  ClassRT.java - additional toba-dependent routines for dealing with java.lang.Class
//                 instances at runtime - mainly used to build Classes at runtime

/* By "native class", we mean a precompiled one that only exists in the Toba
 * struct class format. */

package toba.runtime;

import toba.classfile.*;
import java.util.Hashtable;
import java.io.*;

/* Methods for manipulating and creating new Classes from inside the Java 
 * Runtime (I.E., these classes aren't meant to be used by the 
 * "general public." */

public class ClassRT {
    public static final int IS_INTERFACE = 0x0001; // The flags that are in the field 
    public static final int IS_ARRAY     = 0x0002; // getFlags returns
    public static final int IS_PRIMITIVE = 0x0004;
    public static final int IS_SETUP     = 0x0010;

    // Native routines to get fields of the underlying native 
    // class structure
    public static native int getFlags(Class c);
    public static native long getNativeClass(Class c);
    public static native Class getElementClass(Class c);
    public static native Class getArrayClass(Class c);

    // Routines used by the interpreter to manipulate classes
    public static native void initClass(Class c);

    private static native ClassData getClassDataInternal(Class c);
    public static ClassData getClassData(Class c) {
	ClassData cdata = getClassDataInternal(c);

	if (cdata != null) {
	    return cdata;
        }

	/* If cdata is null, this is either a pre-compiled class that 
	 * hasn't had it's class file loaded, or an array. */
	int flags = getFlags(c);
	if ((flags & IS_ARRAY) != 0) {
	    // java.lang.Object is the essential type of arrays
	    Class obj;
	    try {
		obj = Class.forName("java.lang.Object"); 
		ClassData objdata = ClassRT.getClassData(obj);
		ClassRT.setClassData(c, objdata);
		return objdata;
	    } catch(Exception e) {
		throw new InternalError();
	    }
	}

	/* Must be asking for the classdata of a pre-compiled class */
	try {
	    String name = c.getName();
	    cdata = ClassData.forClass (c);

	    if (cdata == null) {
		throw new NoClassDefFoundError(name);
            }

	    Supers.load(cdata, null);

	    return cdata;
        } catch (IOException e) {
            throw new NoClassDefFoundError(e.getMessage());
        } catch (ClassNotFoundException e) {
            throw new NoClassDefFoundError(e.getMessage());
	} catch (ClassFormatError e) {
	    throw new NoClassDefFoundError(e.getMessage());
        }
    }

    
    // Routines used to create the underlying native structure of a class.
    // used by toba.runtime.CodeGen
    static native Class allocateNativeClass(ClassData c, int mtlen, 
        				    int cvsz, int cvalign);
    static native void setName(Class c, String s);
    static native void setClassData(Class cl, ClassData c);
    static native void setReferencedClasses(Class c, long[] classes);
    static native void setSuperclasses(Class c, long[] classes);
    static native void setInterfaces(Class c, long[] inters, 
        			     int ndinters);
    static native void setClassLoader(Class c, ClassLoader l);
    static native void setFlags(Class c, int i);
    static native void setInstanceVariables(Class c, Field[] vars, 
        				    int[] offset);
    static native void setInstanceSize(Class c, int size);
    static native void setClassVariables(Class c, Field[] vars, 
        				 int[] offset, int cvalign);
    static native void setInstanceMethods(Class c, Field[] meths, 
        				  long[] addrs);
    static native void setStaticMethods(Class c, Field[] meths, 
        				long[] addrs);
    static native void setStringPool(Class c, String[] strs);
    static native void setHashTable(Class c, int hashmask, Field[] hlist,
				    long[] addrs);

    static native void setConstructor(Class c, long l);
    static native void setClassInitializer(Class c, long l);
    static native void setFinalizer(Class c, long l);
    static native void updateMethodExceptionLists(ClassData cd);

    /** Return the offset in an instance of a given instance variable.
      * @param c class we're looking at
      * @param index instance variable number
      * Toba Hash: _Ci_BWHS7 */
    public static native int
    getInstanceVarOffset(Class c, int index);
    /** Return the address of a given class variable.
      * @param c class we're looking at
      * @param index class variable number
      * Toba Hash: _Ci_PQTNy */
    public static native long
    getClassVarAddr(Class c, int index);

    /** Retrieve a pointer to the struct mt_generic which describes
      * the given instance method.
      * @param c Class in which to search
      * @param instancep If true, search in instance table; else search static table
      * @param index Index of the desired method
      * @returns long address of struct mt_generic
      * Toba Hash: _Czi_ph2B5
      */
    public static native long
    getMethodTEnt(Class c, boolean instancep, int index);

    /** Given a pointer to an internal struct mt_generic, get the function
      * pointer out of that structure.
      * @param mtp pointer to struct mt_generic
      * @returns long address of method
      * Toba Hash: _l_lUIsL
      */
    public static native long
    getMTEntFuncPtr (long mtp);

    /** Given a pointer to an internal struct mt_generic and a pointer to
      * a code block, set the method function pointer in that structure
      * to be the provided code block.
      * @param mtp pointer to struct mt_generic
      * @param fep pointer to code block
      * Toba Hash: _ll_JDMso
      */
    public static native void
    setMTEntFuncPtr (long mtp,
                     long fep);

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

    /** Return the address of the function associated with the named method.
      * @param c Class to look in
      * @param f Field naming a method
      * @returns long address of method
      */
    public static long 
    getMethodAddr(Class c, Field f) {
        return ClassRT.getMTEntFuncPtr (ClassRT.getMethodTEnt (c, f));
    }

    /** Set the code address of the method.
      * @param c Class to look in
      * @param f Field naming a method
      * @param a long address of method
      */
    public static void
    setMethodAddr(Class c, Field f, long addr) {
        ClassRT.setMTEntFuncPtr (ClassRT.getMethodTEnt (c, f), addr);
        return;
    }
};

