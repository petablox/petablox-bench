//  VariableRT.java -- methods for manipulating variables at runtime

//  Copyright 1996, 1997 Arizona Board of Regents;
//  see COPYRIGHT file for details.


package toba.runtime;

import toba.classfile.*;

class VariableRT {
    public static native Class getObjectClass(Object o);
    
    public static native int getInstanceVarOffset(Class c, int index);
    public static native long getClassVarAddr(Class c, int index);

    public static native Object getObjectClassVar(long addr);
    public static native int    getIntClassVar(long addr);
    public static native short  getShortClassVar(long addr);
    public static native char   getCharClassVar(long addr);
    public static native byte   getByteClassVar(long addr);
    public static native boolean getBooleanClassVar(long addr);
    public static native long   getLongClassVar(long addr);
    public static native float  getFloatClassVar(long addr);
    public static native double getDoubleClassVar(long addr);

    public static native Object getObjectInstanceVar(Object o, int offset);
    public static native int    getIntInstanceVar(Object o, int offset);
    public static native short  getShortInstanceVar(Object o, int offset);
    public static native char   getCharInstanceVar(Object o, int offset);
    public static native byte   getByteInstanceVar(Object o, int offset);
    public static native boolean getBooleanInstanceVar(Object o, int offset);
    public static native long   getLongInstanceVar(Object o, int offset);
    public static native float  getFloatInstanceVar(Object o, int offset);
    public static native double getDoubleInstanceVar(Object o, int offset);

    public static native void setClassVar(long addr, Object o);
    public static native void setClassVar(long addr, int i);
    public static native void setClassVar(long addr, short i);
    public static native void setClassVar(long addr, char i);
    public static native void setClassVar(long addr, byte i);
    public static native void setClassVar(long addr, boolean i);
    public static native void setClassVar(long addr, long l);
    public static native void setClassVar(long addr, float f);
    public static native void setClassVar(long addr, double d);

    public static native void setInstanceVar(Object o, int offset, Object v);
    public static native void setInstanceVar(Object o, int offset, int i);
    public static native void setInstanceVar(Object o, int offset, short i);
    public static native void setInstanceVar(Object o, int offset, char i);
    public static native void setInstanceVar(Object o, int offset, byte i);
    public static native void setInstanceVar(Object o, int offset, boolean i);
    public static native void setInstanceVar(Object o, int offset, long l);
    public static native void setInstanceVar(Object o, int offset, float f);
    public static native void setInstanceVar(Object o, int offset, double d);

    public static native Object allocInstance(Class c);

    public static native Object newArray(Class c, int count);
    public static native Object newArray(Class c, int[] count);

    public static native int arrayLength(Object o);
    /* Return true if o is castable to (or subclass of) class c */
    public static native boolean isCastableTo(Class c, Object o);

    public static native void monitorEnter(Object o, Instr[] curpc, Instr nextpc);
    public static native void monitorExit(Object o, Instr[] curpc, Instr nextpc);

};
