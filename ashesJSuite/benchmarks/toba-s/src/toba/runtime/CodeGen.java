//  CodeGen.java - Build class data structures on the fly for
//                 various dynamic loading systems.

package toba.runtime;

import toba.classfile.*;
import java.io.*;

public abstract class CodeGen {
    // The code generator used by the system to generate classes.
    static CodeGen generator;

    /** Verify all JIT requirements, like where things are in runtime
      * data structures.
      * Toba hash code: __RTwoi
      */
    public static native void
    verifyRequirements ();

    // For now, we support only one code generator at a time, which is
    // normally initialized by the static initializer for the class which
    // extends CodeGen in an implementation; say the InterpCodeGen or
    // JITCodeGen.
    public static void
    setGenerator (CodeGen ng)
    {
        generator = ng;
        return;
    }
    public static CodeGen
    getGenerator ()
    {
        return generator;
    }
      

    // Generate code for Method m in Class c
    // This should call m.setMethodCode on an instance of MethodCode
    // or a subtype of it, generate the code, and return the MethodCode
    // object.
    protected abstract MethodCode
    generateCode(Class c, Method m);

    // Define a class from the given data
    Class defineClass(ClassLoader loader, byte data[], 
		      int offset, int length) 
    {
	DataInputStream instream = 
	    new DataInputStream(
		new ByteArrayInputStream(data, offset, length));
	return defineClass(loader, instream);
    }


    Class defineClass(ClassLoader loader, DataInputStream instream)
	throws NoClassDefFoundError
    {
	ClassData cdata;
	Class cl, superclass;

	try {
	    // Convert the stream into a ClassData obj
	    cdata = ClassData.forStream (loader, instream);
	    // Load the appropriate superclasses 
	    Supers.load (cdata, loader);
	} catch (ClassFormatError e) {
	    throw new NoClassDefFoundError(e.getMessage());
	} catch (ClassNotFoundException e) {
	    throw new NoClassDefFoundError(e.getMessage());
	} catch (java.io.IOException e) {
	    throw new ClassFormatError(e.getMessage());
	}

        /* We only build native classes if we didn't get this ClassData from
         * an existing native class. */
        if (ClassData.CDSRC_tobaclass != cdata.cdsrc) {
            cl = buildNativeClass(cdata, loader);

            /* Install a pointer to the loaded class into ClassData */
            cdata.javaClass = cl;
        } else {
            cl = cdata.javaClass;
            if (null == cl) {
                throw new InternalError ("CDSRC_tobaclass didn't assign javaClass");
            }
        }
	return cl;
    }

    /* Resolve class references and generate the methods for this class */
    void resolveClass(Class c, ClassLoader loader) {
	// synchronize on c to prevent multiple resolution of the class
//System.out.println ("CodeGen.resolveClass " + c);
	synchronized(c) {
	    int flags = ClassRT.getFlags(c);
	    ClassData cdata = ClassRT.getClassData(c);
	    Class sc = c.getSuperclass();

	    // Resolve our superclass if necessary
	    if (sc != null) {
		ClassData sccdata = ClassRT.getClassData(sc);
		if (sccdata.state != ClassData.RES_CONSTANTS) {
		    resolveClass(sc, sc.getClassLoader ());
		}
	    }

	    Resolve.resolveClass(cdata, loader);

	    // Set list of referenced classes
            if (ClassData.CDSRC_tobaclass != cdata.cdsrc) {
                /* This is a build-native-class thing; don't do for
                 * tobaclass-sourced data */
                ClassRT.setReferencedClasses(c, referencedClasses(c, loader));
            }
	}
    }

    // Size and alignment information that is machine dependent
    static native int typeSpace(char c);
    static native int typeAlignment(char c);
    static native int baseSize();
    static native int baseAlignment();


    /** Native route to store a one-byte value into a given C address.
      * @param addr where value should go
      * @param v value to store
      * Toba hash code: _lb_hu2R9
      */
    static public native void
    pokeByte (long addr, byte v);
    
    /** Native route to store a two-byte value into a given C address.
      * @param addr where value should go
      * @param v value to store
      * Toba hash code: _ls_cLN3R
      */
    static public native void
    pokeShort (long addr, short v);
    
    /** Native route to store a four-byte value into a given C address.
      * @param addr where value should go
      * @param v value to store
      * Toba hash code: _li_ZDc1h
      */
    static public native void
    pokeInt (long addr, int v);
    
    /** Native route to store an eight-byte value into a given C address.
      * @param addr where value should go
      * @param v value to store
      * Toba hash code: _ll_FO5Cd
      */
    static public native void
    pokeLong (long addr, long v);
    

    /** Native routine to convert an object reference value into a long address
      * @param or object reference to store
      * @returns address of a block that holds the object reference value
      * Toba hash code: _O_HIiqz
      */
    static public native long
    getNativeObjectAddr (Object or);

    /** Return the address of some native symbol, such as a hashed native
      * method name; presumably we can find this through dlopen or some
      * other registry.
      * Toba hash code: _S_rTxsP
      */
    static public native long
    getNativeSymbolAddress (String cname);

    // Construct a list of the classes referenced by this class
    private long[] referencedClasses(Class c,
                                     ClassLoader loader) 
    {
	int nrefs = 0;
	ClassData cdata = ClassRT.getClassData(c);

	/* Count the number of references to other classes that are
	 * made by this class */
	for (int i = 0; i < cdata.constants.length; i++) {
	    Constant k = cdata.constants[i];
	    if (k != null && k.tag == Constant.CLASS) {
		ClassRef r = (ClassRef)k.value;
		String s = Names.baseclass(r.name);
		// s == null if k is an array of primitives
		if (s != null) {
		    nrefs++;
		}
	    }
	}
	long[] refs = new long[nrefs];

	// Fill out the array of all referenced classes.
	int index = 0;
	for (int i = 0; i < cdata.constants.length; i++) {
	    Constant k = cdata.constants[i];
	    if (k != null && k.tag == Constant.CLASS) {
		ClassRef r = (ClassRef)k.value;
                String s = Names.baseclass(r.name);
		Class refClass;
		if (s != null) {
                    /* OK, what we want to add is the base class of this
                     * class.  I.e., strip away all the array stuff.
                     * Toba does this at runtime; we can't just use
                     * Class.forName(s) because that results in an infinite
                     * loop.  Note: the getFoo stuff in ClassRT.c is _not_
                     * protected against attempting to lookup a class that
                     * doesn't have a C structure yet, so this may dump
                     * core if somehow we got an array class without a
                     * corresponding base class. */
                    refClass = r.getRefClass (loader);
                    while (0 != 
			   (ClassRT.IS_ARRAY & ClassRT.getFlags (refClass))) {
                        refClass = ClassRT.getElementClass (refClass);
                    }
		    refs[index++] = ClassRT.getNativeClass(refClass);
		}
	    }
	}
	return refs;
    }

	

    // Construct a list of all of the superclasses of this class, 
    // given its first superclass
    private long[] superclasses(Class c, Class superclass) 
    {
	int nsupers = 1;

	/* We count ourselves in this */
	Class sc = superclass;
	while (sc != null) {
	    nsupers++;
	    sc = sc.getSuperclass();
	}
	
	long[] supers = new long[nsupers];

	int index = 0;
	supers[index++] = ClassRT.getNativeClass(c);
	sc = superclass;
	while (sc != null) {
	    supers[index++] = ClassRT.getNativeClass(sc);
	    sc = sc.getSuperclass();
	}
	return supers;
    }

    // Construct a list of the interfaces used by this class
    private long[] interfaces(Class c)
	throws NoClassDefFoundError
    {
	int ninters = 0;
	Class sc = c;

	// Count the number of interfaces
	while (sc != null) {
	    ninters += ClassRT.getClassData(sc).interfaces.length;
	    sc = sc.getSuperclass();
	}

	long[] inters = new long[ninters];
	int index = 0;

	sc = c;
	while (sc != null) {
	    ClassData sccdata = ClassRT.getClassData(sc);
	    ClassLoader loader = sc.getClassLoader ();
	    for (int i = 0; i < sccdata.interfaces.length; i++) {
		Class intf;
		ClassRef r = sccdata.interfaces[i];
		Resolve.resolveClassRef(r, loader);
		intf = r.getRefClass(loader);
		inters[index++] = ClassRT.getNativeClass(intf);
	    }
	    sc = sc.getSuperclass();
	}
	return inters;

    }

    /* Compute the byte offsets of each field in the vars field
     * and return them as an array of offsets. */
    private int[] instanceOffsets(Class c)
    {
	Class sc;
	ClassData cdata = ClassRT.getClassData(c);
	ClassData sccdata;

	Field[] vars = cdata.ivtable;
	Field[] scvars = null;
	int[] offsets = new int[vars.length];
	int curroffset = baseSize();
	int index = 0;


	sc = c.getSuperclass();
	if (sc != null) {
	    sccdata = ClassRT.getClassData(sc);

	    if (sccdata.ivtable.length > 0) {
		scvars = sccdata.ivtable;

		for (int i = 0; i < scvars.length; i++) {
		    offsets[i] = 
			ClassRT.getInstanceVarOffset(sc, scvars[i].tableslot);
		}
		
		index = scvars.length;
		curroffset = offsets[index - 1] + 
		    typeSpace(scvars[index - 1].signature.charAt(0));
	    }
	    
	} 

	for (int i = index; i < vars.length; i++) {
	    int fieldsize = typeSpace(vars[i].signature.charAt(0));

	    /* Extend the current offset to the right alignment 
	     * for the current field */
	    int alignment = typeAlignment(vars[i].signature.charAt(0));
	    int curralign = 8 - (curroffset % 8);
	    curroffset += (curralign % fieldsize);
	    offsets[i] = curroffset;

	    /* And then set aside space for the variable */
	    curroffset += fieldsize;
	}
	return offsets; 
    }

    
    /* Pass in the instance info, and compute the instance size */
    private int instanceSize(Field[] vars, int[] offsets)
    {
	int size;

	if (vars.length == 0)
	    return baseSize();

	size = offsets[offsets.length - 1] + 
	    typeSpace(vars[vars.length - 1].signature.charAt(0));

	/* Pad the size out to the alignment of the largest element 
	 * in the instance */
	int largestalign = baseAlignment();
	for (int i = 0; i < vars.length; i++) {
	    int a = typeAlignment(vars[i].signature.charAt(0));
	    if (a > largestalign)
		largestalign = a;
	}
	size += ((8 - (size % 8)) % largestalign);
	return size;
    }

    private int classVariableSpace(Field[] cvars)
    {
	int currspace = 0;
	for (int i = 0; i < cvars.length; i++) {
	    int fieldsize = typeSpace(cvars[i].signature.charAt(0));

	    /* Extend the current offset to the right alignment 
	     * for the current field */
	    int alignment = typeAlignment(cvars[i].signature.charAt(0));
	    int curralign = 8 - (currspace % 8);
	    currspace += (curralign % fieldsize);
	    /* And then set aside space for the variable */
	    currspace += fieldsize;
	}
	return currspace;
    }

    private int classVariableAlignment(Field[] cvars)
    {
	int maxalignment = 0;
	for (int i = 0; i < cvars.length; i++) {
	    int alignment = typeAlignment(cvars[i].signature.charAt(0));
	    if (alignment > maxalignment)
		maxalignment = alignment;
	}
	return maxalignment;
    }

    /* Compute the offset of each class variable in the class 
     * variable structure. The native code turns this into actual
     * addresses. */
    private int[] classVariableOffsets(Field[] cvars)
    {

	int curroffset = 0;
	int[] cvoffsets = new int[cvars.length];

	for (int i = 0; i < cvars.length; i++) {
	    int fieldsize = typeSpace(cvars[i].signature.charAt(0));

	    /* Extend the current offset to the right alignment 
	     * for the current field */
	    int alignment = typeAlignment(cvars[i].signature.charAt(0));
	    int curralign = 8 - (curroffset % 8);
	    curroffset += (curralign % fieldsize);
	    cvoffsets[i] = curroffset;
	    /* And then set aside space for the variable */
	    curroffset += fieldsize;
	}
	return cvoffsets;
    }

    // Method used to get the addresses of all methods in the class
    // Used to generate the method table for subclasses
    private long[] getInstanceMethodAddrs(Class c)
    {
	ClassData cdata = ClassRT.getClassData(c);
	long[] addr = new long[cdata.imtable.length];
	for (int i = 0; i < cdata.imtable.length; i++)
	{ 
	    addr[i] = ClassRT.getMethodAddr(c, cdata.imtable [i]);
	}
	return addr;
    }

    private long[] instanceMethodAddrs(Class c, Field[] meths, 
				       int mtlength)
    {
	long[] addrs = new long[mtlength];
	Class sc = c.getSuperclass();
	ClassData cdata = ClassRT.getClassData(c);

	/* Look up the addresses for methods that we inherit */
	if (sc != null) { 
	    long[] superaddrs = getInstanceMethodAddrs(sc);
	    System.arraycopy(superaddrs, 0, addrs, 0,
			     superaddrs.length);
	}
	
	// Meths only contains entries for locally implemented methods, 
	for (int i = 0; i < meths.length; i++) {
	    Field f = meths[i];
	    /* Find the right classdata for this method */
	    if (0 == (f.access & (ClassData.ACC_ABSTRACT | ClassData.ACC_STATIC))) {
                MethodCode mc = generateCode(c, new Method(cdata, f));
                addrs[f.tableslot] = mc.getEntryPoint ();
                if (0 == addrs [f.tableslot]) {
                    throw new InternalError ("generateCode failed to return imeth address for " + mc.method);
                }
            }
	}
	return addrs;
    }

    private long[] staticMethodAddrs(Class c, Field[] meths)
    {
	// No inheritance of static methods, so easy.
	long[] addrs = new long[meths.length];
	ClassData cdata = ClassRT.getClassData(c);

	for (int i = 0; i < meths.length; i++) {
	    Field f = meths[i];
	    /* Find the right classdata for this method */
	    if (0 == (f.access & (ClassData.ACC_ABSTRACT))) {
                MethodCode mc = generateCode(c, new Method(cdata, meths[i]));
                addrs[i] = mc.getEntryPoint ();
                if (0 == addrs [i]) {
                    throw new InternalError ("generateCode failed to return smeth address");
                }
            }
	}
	return addrs;
    }

    private String[] internStrings(Class c)
    {
	ClassData cdata = ClassRT.getClassData(c);
	Constant[] cons = cdata.constants;

	int nstrings = 0;

	/* cons[0] is unused and null */
	for (int i = 1; i < cons.length; i++) {
	    Constant co = cons[i];
	    if ((co != null) &&
		((co.tag == Constant.UTF8) ||
		 (co.tag == Constant.UNICODE))) {
		nstrings++;
	    }
	}

	// We set aside an extra entry, so that if the cdata.name 
	// field has been mangled because of '/' to '.', we have space
	// for BOTH of those strings.
	String[] strpool = new String[nstrings + 1];

	/* The strings were already interned as they were created. 
	 * We just put them in a list in the class to conform 
	 * to the format of the class data structure. */
	strpool[0] = cdata.name;
	int index = 1;
	/* cons[0] is unused and null */
	for (int i = 1; i < cons.length; i++) {
	    Constant co = cons[i];
	    if ((co != null) &&
		((co.tag == Constant.UTF8) ||
		 (co.tag == Constant.UNICODE))) {
		String s = (String)co.value;
	    }
	}

	return strpool;
    }

    /** Return an array of addresses of the struct mt_generic descriptions
      * of the methods listed.  Do _NOT_ return the address of the methods;
      * that's not what the findinterface function is supposed to give back.
      * @param c Class in which to search for methods
      * @param hlist List of fields for which we want address
      * @returns long[] Array of addresses for fields.
      */
    private long[] hashAddrs(Class c, Field[] hlist) {
	long[] addrs = new long[hlist.length];
	for (int i = 0; i < hlist.length; i++) {
	    Field f = hlist[i];
	    if (f != null)
		addrs[i] = ClassRT.getMethodTEnt(c, f);
	    else 
		addrs[i] = 0;
	}
	return addrs;
    }

    private void setSpecialMethods(Class c)
	throws NoSuchMethodError
    {
	/* We need to find the following methods - the class
	 * initializer(the static method named "<clinit>()V"), the
	 * no-arg class constructor (the instance method named
	 * "<init>()V"), and the finalizer (the instance method named
	 * "finalize()V") */
	
	// Find the no-arg constructor - there has to be one, or or
	// we throw a NoSuchMethodError
	boolean cons_set = false, fin_set = false;
	ClassData cdata = ClassRT.getClassData(c);

	for (int i = 0; i < cdata.imtable.length; i++) {
	    Field f = cdata.imtable[i];
	    if ((f.name.equals ("<init>")) &&
		(f.signature.equals ("()V"))) {
		ClassRT.setConstructor(c, ClassRT.getMethodAddr(c, f));
		cons_set = true;
	    } else if ((f.name.equals ("finalize")) &&
		       (f.signature.equals ("()V"))) {
		ClassRT.setFinalizer(c, ClassRT.getMethodAddr(c, f));
		fin_set = true;
	    }
	}

	if (!cons_set)
	    throw new NoSuchMethodError("No <init> method in class " + 
					cdata.name);
	if (!fin_set)
	    throw new NoSuchMethodError("No <finalize> method in class " + 
					cdata.name);

	for (int i = 0; i < cdata.smtable.length; i++) {
	    Field f = cdata.smtable[i];
	    if ((f.name.equals ("<clinit>")) &&
		(f.signature.equals ("()V"))) {
		ClassRT.setClassInitializer(c, ClassRT.getMethodAddr(c, f));
	    }
	}
    }

    private synchronized Class
    buildNativeClass(ClassData cdata, ClassLoader loader) 
    {
	int cvspace, cvalign;
	int[] cvoffsets;
	int instsize;
	int[] ivoffsets;
	ClassData superclass = cdata.superclass;
	Class nativesc;
	Class nativeClass; 
	long[] methCode;

        if (null != cdata.javaClass) {
            /* We already have the native class for this cdata.  However,
             * we may have created it in a nested call, e.g. through Supers.load,
             * in which case some of the data is incorrect.  Update things
             * here, then return the existing class. */
            IHash h = new IHash(cdata);
            ClassRT.setHashTable(cdata.javaClass, h.mask, h.hlist, 
                                 hashAddrs(cdata.javaClass, h.hlist));
            return cdata.javaClass;
        }

//System.out.println ("CodeGen.buildNativeClass " + cdata.name);
	if (superclass != null)
	    nativesc = superclass.javaClass;
	else
	    nativesc = null;

	cvspace = classVariableSpace(cdata.cvtable);
	cvalign = classVariableAlignment(cdata.cvtable);
	nativeClass = ClassRT.allocateNativeClass(cdata, 
						  cdata.imtable.length, 
						  cvspace, cvalign);
        cdata.javaClass = nativeClass;

	ClassRT.setSuperclasses(nativeClass, 
				superclasses(nativeClass, nativesc));
	ClassRT.setClassLoader(nativeClass, loader);

	/* String Pools calculations */
	ClassRT.setStringPool(nativeClass, internStrings(nativeClass));

	/* Instance variable/size calculations */
	ivoffsets = instanceOffsets(nativeClass);
	instsize = instanceSize(cdata.ivtable, ivoffsets);
	ClassRT.setInstanceVariables(nativeClass, cdata.ivtable, ivoffsets);
	ClassRT.setInstanceSize(nativeClass, instsize);

	/* Class variable calculations */
	cvoffsets = classVariableOffsets(cdata.cvtable);
	ClassRT.setClassVariables(nativeClass, cdata.cvtable, 
				  cvoffsets, cvalign);
        for (int i = 0; i < cdata.cvtable.length; i++) {
            Field f = cdata.cvtable [i];
            byte adata [];
            int cind;
            float fv;
            double dv;

            // See if the field has a constant value (initializer)
            adata = Attribute.find (f.attributes, "ConstantValue");
            if (null == adata) {
                continue;
            }
            /* OK, it does.  What's the value of the initializer?  If the
             * exception is thrown below, we probably had an invalid class
             * file. */
            cind = -1;
            try {
                cind = (new DataInputStream (new ByteArrayInputStream (adata))).readShort ();
            } catch (IOException e) {
            }
            if (0 > cind) {
                continue;
            }
            /* Set the field value. */
            Constant ival = cdata.constants [cind];
            long vaddr = ClassRT.getClassVarAddr (nativeClass, f.tableslot);
            switch (ival.tag) {
                case Constant.LONG: // Just assign value
                    pokeLong (vaddr, ((Long)ival.value).longValue ());
                    break;
                case Constant.FLOAT: //
                    fv = ((Float)ival.value).floatValue ();
                    pokeInt (vaddr, Float.floatToIntBits (fv));
                    break;
                case Constant.DOUBLE:
                    dv = ((Double)ival.value).doubleValue ();
                    pokeLong (vaddr, Double.doubleToLongBits (dv));
                    break;
                case Constant.INTEGER: // Just the value
                    pokeInt (vaddr, ((Integer)ival.value).intValue ());
                    break;
                case Constant.STRING:
                    pokeInt (vaddr, (int) getNativeObjectAddr (ival.value));
                    break;
                default:
                    throw new InternalError ("Invalid constant type for static final initializer");
            }
        }

	// Interface calculations
	ClassRT.setInterfaces(nativeClass, interfaces(nativeClass), 
			      cdata.interfaces.length);

	// Method table calculations
	methCode = instanceMethodAddrs(nativeClass, 
				       cdata.methods, // Not mtable!
				       cdata.imtable.length); 
	ClassRT.setInstanceMethods(nativeClass, cdata.imtable, methCode);

	// Static method calculations
	methCode = staticMethodAddrs(nativeClass, cdata.smtable);
	ClassRT.setStaticMethods(nativeClass, cdata.smtable, methCode);

	// Set special methods like the no-arg constructor, 
	// class initializer, and finalizer 
	setSpecialMethods(nativeClass);

	// Create the interface hash table 
	IHash h = new IHash(cdata);
	ClassRT.setHashTable(nativeClass, h.mask, h.hlist, 
			     hashAddrs(nativeClass, h.hlist));
	/* All done */
//System.out.println ("done CodeGen.buildNativeClass " + cdata.name);
	return nativeClass;
    }

}
