/**
  * Abstract class to support building code on-the-fly
  * @version $Id: CodeBlock.java,v 1.12 1999/03/09 01:57:29 pab Exp $
  * @author Peter A. Bigot
  *
  * This class is used by the Toba just-in-time compiler to support code
  * generation when classes are loaded.  It extends the classfile
  * MethodCode class, which has basic information about the method and code
  * type.  It is itself abstract, and is extended by machine-specific
  * classes which build the code appropriate for the target machine.
  * Essentially, code is built up instruction-by-instruction until
  * complete.  It is then transferred to a native block of memory.
  * Procedure calls are handled separately, since they will generally need
  * to be backpatched once the native block for the target function is
  * known.
  */

/* This is part of the Just-In-Time component of the Toba system */
package toba.jit;

import toba.classfile.*;
import toba.runtime.*;

abstract class
CodeBlock
    extends MethodCode
{
    /* We could use a Vector object for this, but hand-managing does
     * just as well, and may allow some tricks that Vector doesn't. */
    private byte codeBytes[];           // This is where instructions are built up
    private int maxCodeBytes = 0;       // Maximum length of Java array
    private int numCodeBytes = 0;       // Current length of Java array

    protected int instrToByteOffs [];   // Mapping from instr index to code start
    protected int nBackPatches;         // Number of backpatches in this code so far

    protected long handlerTableAddress; // Where in memory handler table lives
    protected int localHandlerTarget; // Where relative to mtentry local handler target is

    protected BackpatchInfo syncwrap_bpi; // Backpatch info for wrapped sync method

    protected CodeGen myGenerator; // Who did the generation of this code?

    protected ClassLoader codeClassLoader; // Who loaded this code?
    public void
    setCodeClassLoader (ClassLoader cl)
    {
        codeClassLoader = cl;
        return;
    }
    public ClassLoader
    getCodeClassLoader ()
    {
        return codeClassLoader;
    }

    /* Set this true if byte order is LSB to MSB (Intel, Vax), and false
     * if byte order is MSB to LSB (SPARC). */
    protected boolean littleEndian = false;

    /* If true, jumps are relative to the pc of the following instruction;
     * otherwise, they are relative to the pc of the jump/call instruction. */
    protected boolean jumpFromNextInstr = false;

    /* If we don't make this static, we have to qualify every call to BV,
     * which is a royal pain.  Let's just pretend we'll never generate
     * code for two different architectures at the same time. */
    private static int valBVrlen = 32; // Default expected length of incoming string bitvecs

    /* Set this true if we want storeWord to verify that it's storing
     * into an aligned area.  Necessary on SPARC, undesirable on Intel. */
    private boolean checkWordAlign = true;

    /* Set this to true if we don't want to store data into the codeByte
     * array, even if we haven't locked it yet. */
    private boolean lockCodeBytes = false;

    private boolean allNativeCode = false;
    public void
    setAllNativeCode (boolean bv) {
        allNativeCode = bv;
        return;
    }

    /** Create a new CodeBlock object
      * @param m method to which code block applies
      * @param imax number of bytes expected in code block
      */
    public
    CodeBlock (Method m,        // Method the code applies to
               int imax)        // Expected size of code block
    {
        super (m);
        /* Allocate a new array, and set the current size to 0, and the
         * max size to that provided */
        codeBytes = new byte [imax];
        maxCodeBytes = imax;
        numCodeBytes = 0;
        /* Allocate space for a mapping from instruction index to where
         * code related to that instruction starts. */
        if (null == m) {
            instrToByteOffs = new int [10];
        } else {
            if (null == m.instrs) {
                instrToByteOffs = new int [10];
            } else {
                instrToByteOffs = new int [m.instrs.length];
            }
        }
        nBackPatches = 0;

        localHandlerTarget = -1;
        handlerTableAddress = 0L;
    }

    /** Create a new CodeBlock object
      * @param m method to which code block applies
      */
    public
    CodeBlock (Method m)
    {
        this (m, 10);
    }

    /** Set boolean indicating whether endianness for storing word data
      * is little-endian.
      * @param nv new value for littleEndian
      * @returns boolean previous value of littleEndian
      */
    protected boolean
    setLittleEndian (boolean nv) 
    {
        boolean ov = littleEndian;
        littleEndian = nv;
        return ov;
    }

    /** Set boolean indicating whether relative jumps are from this instruction
      * (false) or the next one (true).
      * @param nv new value for jumpFromNextInstr
      * @returns boolean previous value of jumpFromNextInstr
      */
    protected boolean
    setJumpFromNextInstr (boolean nv) 
    {
        boolean ov = jumpFromNextInstr;
        jumpFromNextInstr = nv;
        return ov;
    }

    protected boolean
    setCheckWordAlign (boolean nv) 
    {
        boolean ov = checkWordAlign;
        checkWordAlign = nv;
        return ov;
    }

    protected boolean
    setLockCodeBytes (boolean nv) 
    {
        boolean ov = lockCodeBytes;
        lockCodeBytes = nv;
        return ov;
    }

    /** Convert from a signed integer to an nbit-bit string encoding
      * @param bv integer representation of value to encode
      * @param nbits number of bits used in encoding
      * @returns nbit-character string of 0s and 1s encoding bv
      */
    protected static String
    BS (int bv,                 // Value to encode
        int nbits)              // Number of bits to use
    {
        String sreg = "";       // Built-up bit string

        /* Build up the string in MSB to LSB order left to right */
        for (int bi = nbits-1; 0 <= bi; bi--) {
            sreg += (0 != (bv & (1 << bi))) ? "1" : "0";
        }
        return sreg;
    }

    /** Convert from a bit string to an int
      * @param bs A string of 0s and 1s; spaces are ignored
      * @param rlen String must have rlen 0s + 1s
      * @returns the integer value represented by the string
      */
    protected static int
    BV (String bs,              // Bit string to decode
        int rlen)               // Required length of string in bits
    {
        int val;                // Value being built up
        int bm;                 // Bit mask of next bit in buildup
        int nbits;              // Number of valid bits in the string
        int i;                  // Index over bits in string
        
// System.out.println ("Converting " + bs + " to " + rlen + "-bit integer");
        /* Walk from LSB to MSB building up the value. */
        val = 0;
        bm = 1;
        nbits = 0;
        for (i = bs.length() - 1; 0 <= i; i--) {
            char c;

            c = bs.charAt (i);
            if (' ' == c) {
                continue;
            }
            if ('1' == c) {
                val |= bm;
            } else if ('0' != c) {
                throw new InternalError ("CodeBlock.BV: Input bit string has illegal character: " + bs);
            }
            ++nbits;
            bm <<= 1;
        }
        if (rlen != nbits) {
            throw new InternalError ("CodeBlock.BV: Input bit string has " + nbits + " valid bit characters; need " + rlen);
        }
        return val;
    }

    /** Convert from a bit string to an int, using the default length.
      * @param bs A string of 0s and 1s; spaces are ignored
      * @returns the integer value represented by the string
      */
    protected static int
    BV (String bs)              // Bit string to decode
    {
        return BV (bs, valBVrlen);
    }


    /** Set the default expected length for bitstrings decoded by BV
      * @param nlen new length for default BV rlen
      * @returns int previous value of default BV rlen
      */
    protected int
    setBVlength (int nlen)
    {
        int olen;

        olen = valBVrlen;
        valBVrlen = nlen;
        return olen;
    }

    /** What will be the offset, in bytes, of the next instruction?
      * @returns index used for next instruction
      */
    public int
    nextByteOffs () {
        return numCodeBytes;
    }
    public void
    setByteOffs (int ncb) {
        if (ncb > numCodeBytes) {
            throw new InternalError ("CodeBlock: attempt to jump to offset " + ncb + " with only " + numCodeBytes + " available.");
        }
        numCodeBytes = ncb;
        return;
    }

    private int epilogOffs;
    /** Indicate that from here on out is epilog code */
    public void
    setEpilogOffs () {
        epilogOffs = numCodeBytes;
    }
    /** Return the marked offset in the codeBytes of the function epilog */
    public int
    getEpilogOffs () {
        return epilogOffs;
    }

    /** Okay, so what's all this native block stuff?
      * We're building machine code that is to be executed directly.  To
      * invoke that code, we need a function pointer to it.  That has to be
      * the start of a sequence of bytes in C space.  Java array data won't
      * do, since it can be garbage collected or moved arbitrarily.
      *
      * Now, subroutine calls require the address of the subroutine being
      * called (whattaconcept), but we may not have built the code for that
      * routine yet.  Since we can't allocate the C space until we know how
      * long the function will be, we have to save the location of unresolved
      * calls for future backpatching.  So, after we've built the function
      * code, leaving holes for to-be-resolved calls, we allocate the C block
      * where the function will live.  We can then use that address to
      * back-patch calls, even if the code hasn't been stored into it yet
      * (e.g., if there are calls to be backpatched in this function).
      * A further complication, even if we know the address of a routine
      * we're going to call, is on architectures like the SPARC where calls
      * are relative to the address of the call instruction.
      * So, basically, we can build code during the load phase, but can't
      * install the call instructions until linking, when all modules already
      * have code blocks allocated.
      *
      * Does that make sense to everybody?
      */

    /** Native routine to allocate a block of memory at least numCodeBytes bytes
      * long, into which the code generated in this object will be copied.
      * @param numCodeBytes size in bytes required to store code
      * @returns address of native block for code
      * Toba hash code: _i_eyDZd */
    static private native long
    allocNativeBlock (int numCodeBytes); // How many bytes are needed?

    /** Native routine to copy data from the Java array arr into the
      * native code block mtentry.
      * @param codeBytes[] byte array of machine code
      * @param numCodeBytes prefex of array to save
      * @param mtentry pre-allocated native block of code.
      * @returns address of native block for code
      * Toba hash code: _abil_J4do9
      */
    static private native void
    copyNativeCode (byte codeBytes[],    // Java array of data
                    int nCodeBytes,     // Number of bytes to copy
                    long mtentry);      // Where data should be copied

    /** Copy the generated code into a native block of memory.
      * Invoking this precludes addition of instructions to the code, since
      * it permanently assigns a target address to the code start.
      * @returns the address of the native block containing the code
      */
    protected long
    installCode ()
    {
        /* If we haven't already allocated a block, get one big enough to
         * hold what we've already built up.  Can't add any more
         * instructions after this.  */
        if (0 == mtentry) {
            /* Shrink the array down to what we need */
            expandArr (numCodeBytes);
            mtentry = setMethodEntry (allocNativeBlock (numCodeBytes));
            if (0 == mtentry) {
                throw new OutOfMemoryError ("allocating " + numCodeBytes + " bytes for native JIT code");
            }
            /* If we have a synchronization wrapper, the value stored
             * is relative to the start of the buffer.  Update that
             * to be absolute. */
            if (null != syncwrap_bpi) {
                syncwrap_bpi.setLongVal (mtentry + syncwrap_bpi.setLongVal (-1));
            }
        }
        if (! allNativeCode) {
            /* Copy the data from the array into the native block. */
//        System.out.println ("Copying into code at " + Long.toHexString (mtentry));
            copyNativeCode (codeBytes, numCodeBytes, mtentry);
        }
        return mtentry;
    }

    protected void
    overwriteInstalledCode (byte [] codeBytes,
                            int offs)
    {
        if (0 == mtentry) {
            throw new InternalError ("CodeBlock: overwrite of non-installed code");
        }
        if ((mtentry + offs + codeBytes.length) > numCodeBytes) {
            throw new InternalError ("CodeBlock: overwrite of installed code overruns code block");
        }
        copyNativeCode (codeBytes, codeBytes.length, mtentry + offs);
        return;
    }

    /** Expand (or shrink) the Java array to hold at least nmax bytes
      * @param nmax number of bytes now required in code block
      */
    private void
    expandArr (int nmax)        // Size required for array
    {
        /* Allocate a new array, copy the old one into it, and update the
         * fields to reflect the new array and size. */
        byte newarr[] = new byte [nmax];
        System.arraycopy (codeBytes, 0, newarr, 0, (codeBytes.length < nmax) ? codeBytes.length : nmax);
        codeBytes = newarr;
        maxCodeBytes = nmax;
        return;
    }

    protected int
    storeWord (int v,
               int offs)
    {
        if (checkWordAlign && (0 != (offs & 0x03))) {
            throw new InternalError ("CodeBlock: attempt to store word data at misaligned offset");
        }
        if (! lockCodeBytes) {
//            System.out.println ("storing word " + Integer.toHexString (v) + " at offset " + offs);
            /* Store the value, increment the used size, and return the value */
            if (littleEndian) {
                codeBytes [offs++] = (byte) (0xFF & (v >>>  0));
                codeBytes [offs++] = (byte) (0xFF & (v >>>  8));
                codeBytes [offs++] = (byte) (0xFF & (v >>> 16));
                codeBytes [offs++] = (byte) (0xFF & (v >>> 24));
            } else {
                codeBytes [offs++] = (byte) (0xFF & (v >>> 24));
                codeBytes [offs++] = (byte) (0xFF & (v >>> 16));
                codeBytes [offs++] = (byte) (0xFF & (v >>>  8));
                codeBytes [offs++] = (byte) (0xFF & (v >>>  0));
            }
        }
        return v;
    }

    protected byte
    storeByte (byte v,
               int offs)
    {
        if (! lockCodeBytes) {
            codeBytes [offs++] = v;
        }
        return v;
    }

    protected byte[]
    storeByteArray (byte va[],
                    int offs)
    {
        int i;

        if (! lockCodeBytes) {
//            System.out.println ("storing " + va.length + " bytes at " + offs);
            for (i = 0; i < va.length; i++) {
                codeBytes [offs++] = va [i];
            }
        }
        return va;
    }

    /** Add a new word (4-bytes) to the end of the array, expanding it if necessary
      * @param v new word going onto array tail
      * @returns value of parameter v
      */
    protected int
    addWord (int v)             // Instruction to add
    {
        /* If we've allocated the native block where the code will live,
         * we can't generate any more code: somebody may already have a
         * reference to it. */
//        System.out.println ("addword 0x" + Integer.toHexString (v));
        if ((0 != mtentry) || lockCodeBytes) {
            /* If we've already closed off, or otherwise have locked
             * off storage, just return the data silently---presumbly,
             * we're using it in an storeByte* call.  */
            return v;
        }
        /* If we're at the limit of the allocated array, expand it */
        if ((numCodeBytes + 4) > maxCodeBytes) {
            expandArr (2*maxCodeBytes + 5);
        }

        /* Store the value at the end.  Expansion ensured there's room. */
        numCodeBytes += 4;
        return storeWord (v, numCodeBytes - 4);
    }

    /** Add a new byte to the end of the array, expanding it if necessary
      * @param v new byte going onto array tail
      * @returns value of parameter v
      */
    protected byte
    addByte (byte v)             // Instruction to add
    {
        /* If we've allocated the native block where the code will live,
         * we can't generate any more code: somebody may already have a
         * reference to it. */
        if ((0 != mtentry) || lockCodeBytes) {
            /* If we've already closed off, or otherwise have locked
             * off storage, just return the data silently---presumbly,
             * we're using it in an storeByte* call.  */
            return v;
        }
        /* If we're at the limit of the allocated array, expand it */
        if ((numCodeBytes + 1) > maxCodeBytes) {
            expandArr (2*maxCodeBytes + 5);
        }

        /* Store the value at the end.  Expansion ensured there's room. */
        return storeByte (v, numCodeBytes++);
    }

    /** Add a new array of bytes to the end of the array, expanding it if necessary
      * @param va new bytes going onto array tail
      * @returns value of parameter va
      */
    protected byte[]
    addByteArray (byte va[])    // Bytes to add
    {
        /* If we've allocated the native block where the code will live,
         * we can't generate any more code: somebody may already have a
         * reference to it. */
        if ((0 != mtentry) || lockCodeBytes) {
            /* If we've already closed off, or otherwise have locked
             * off storage, just return the data silently---presumbly,
             * we're using it in an storeByte* call.  */
            return va;
        }
        /* If we're at the limit of the allocated array, expand it */
        if ((numCodeBytes + va.length) >= maxCodeBytes) {
            expandArr (2*maxCodeBytes + va.length);
        }

        /* Store the value at the end.  Expansion ensured there's room. */
        numCodeBytes += va.length;
        return storeByteArray (va, numCodeBytes - va.length);
    }

    /** Retrieve value of code byte at a given index.
      * @param offs from where in the codeBytes array the value should be read
      * @returns the value stored therein
      */
    protected int
    getCodeByte (int offs)      // offset of byte
    {
        return codeBytes [offs];
    }

    /** Retrieve value of code word (4-byte) at a given index.
      * @param offs from where in the codeBytes array the value should be read
      * @returns the value stored therein
      */
    protected int
    getCodeWord (int offs)      // offset of byte
    {
        int v;
        int i;
        int sv;
        
        if (checkWordAlign && (0 != (offs & 0x03))) {
            throw new InternalError ("CodeBlock: attempt to access word data at misaligned offset");
        }
        v = 0;
        if (littleEndian) {
            sv = 0;
            for (i = 0; i < 4; i++) {
                v += ((0x7F & codeBytes [offs+i]) + (0x80 & codeBytes [offs+i])) << sv;
                sv += 8;
            }
        } else {
            sv = 24;
            for (i = 0; i < 4; i++) {
                v += ((0x7F & codeBytes [offs+i]) + (0x80 & codeBytes [offs+i])) << sv;
                sv -= 8;
            }
        }
        return v;
    }

    /** Retrieve value of a sequence of code bytes at a given index.
      * @param offs from where in the codeBytes array the value should be read
      * @returns the value stored therein
      */
    protected byte[]
    getCodeByteArray (int offs,      // offset of sequence start
                      int len)       // Length of sequence to retrieve
    {
        byte rv[] = new byte [len];
        System.arraycopy (codeBytes, offs, rv, 0, len);
        return rv;
    }

    /** Print the code block in hexadecimal form, one byte per line */
    public void
    dumpHex ()
    {
        int ii;
        int cw;

        System.out.println (numCodeBytes + " bytes for " + method.instrs.length  + " instructions:");
        ii = 0;
        cw = 0;
        while (cw < numCodeBytes) {
            while ((ii < method.instrs.length) && (instrToByteOffs [ii] == cw)) {
                System.out.println ("# " + method.instrs [ii]);
                ++ii;
            }
            System.out.println ("                " + Integer.toHexString (codeBytes [cw]));
            ++cw;
        }
        return;
    }


    /* These are a set of backpatch types which are used by most if not
     * all JITs.  The actual code generated in each case is architecture-
     * dependent. */

    // Call to the MethodRef parameter: MethodRef mr
    protected static final int brCALL = 1;
    // Jump to the local label: long tlbl
    protected static final int brJUMP = 2;
    // Load from the VariableRef parameter: VariableRef vr
    protected static final int brLOAD = 3;
    // Set from the FieldRef table slot: FieldRef fr
    protected static final int brFIELDLOAD = 4;
    // Call to a fixed address: long addr
    protected static final int brACALL = 5;
    // Load a pointer to the native class for a reference: (ClassRef|FieldRef) fr
    protected static final int brLOADNatCl = 6;
    // Set from the FieldRef table slot: ClassRef cr
    protected static final int brCLREFLOAD = 7;
    // Set to the method entry point plus the offset: long offs
    protected static final int brLOADCodeRel = 8;
    // Initialize a switch address table: long swtaddr
    protected static final int brINITSwitchTable = 9;
    // Set to the address where the given jvm pc starts: long offs
    protected static final int brLOADCodeAbs = 10;
    // Set to the address where the given label starts: long offs
    protected static final int brLOADCodeLbl = 11;
    // Overwrite the code at address with provided code: byte [] codeseq
    protected static final int brOverWriteCode = 12;
    // Find the address of a dynamically loaded native method
    protected static final int brLOADDynNative = 13;

    private BackpatchInfo bpinfo;

    abstract byte []
    UNIMP (int codeval);
    abstract byte []
    NOP ();
    abstract byte []
    RELATIVE_CALL (int offs);
    abstract byte []
    RELATIVE_JUMP (int offs);
    abstract byte []
    LOAD_REG (int val, Object reg);

    protected byte[]
    evalBrCALL (int roffs)
    {
        return RELATIVE_CALL (roffs);
    }
    protected byte[]
    evalBrJUMP (int roffs)
    {
        return RELATIVE_JUMP (roffs);
    }
    protected byte[]
    evalBrLOAD (int roffs,
                Object reg)
    {
        return LOAD_REG (roffs, reg);
    }
    protected byte[]
    evalBrFIELDLOAD (int v,
                     Object reg)
    {
        return LOAD_REG (v, reg);
    }
    protected byte[]
    evalBrACALL (int roffs)
    {
        return RELATIVE_CALL (roffs);
    }
    protected byte[]
    evalBrLOADNatCl (int v,
                     Object reg)
    {
        return LOAD_REG (v, reg);
    }
    protected byte[]
    evalBrCLREFLOAD (int v,
                     Object reg)
    {
        return LOAD_REG (v, reg);
    }
    protected byte[]
    evalBrLOADCodeRel (int v,
                       Object reg)
    {
        return LOAD_REG (v, reg);
    }
    protected byte[]
    evalBrLOADCodeAbs (int v,
                       Object reg)
    {
        return LOAD_REG (v, reg);
    }
    protected byte[]
    evalBrLOADCodeLbl (int v,
                       Object reg)
    {
        return LOAD_REG (v, reg);
    }

    void
    doBackPatch (BackpatchInfo bpi)
    {
        long lpc;               // Address of program counter for instruction
        int toffs;              // Target offset within code buffer
        FieldRef fr;            // Field reference
        Field fd;               // Field value
        Method mt;              // Method value
        long addr;              // Generic address
        int iv;                 // Generic integer
        Class cl;               // Class value
        ClassRef cr;            // Class reference

//            System.err.println ("Resolving backpatch:" + bpi);

        if (null != bpi.or) {
            if (bpi.or instanceof FieldRef) {
                fr = (FieldRef) bpi.or;
                if (! fr.isResolved ()) {
//                    System.out.println ("CodeBlock.backpatchInfo: Resolving field " + fr);
                    cr = (ClassRef) fr.cl;
                    if (! cr.isResolved (codeClassLoader)) {
                        Resolve.resolveClassRef (cr, codeClassLoader);
                    }
                    cl = cr.getRefClass (codeClassLoader);
                    fr.resolveWith (ClassRT.getClassData (cl));
                    if (! fr.isResolved()) {
                        throw new InternalError ("CodeBlock.backpatchInfo: Resolution of field " + fr + " failed");
                    }
                }
            } else if (bpi.or instanceof ClassRef) {
                cr = (ClassRef) bpi.or;
                if (! cr.isResolved (codeClassLoader)) {
                    /* Resolve this relative to the whosit that loaded the
                     * class this method belongs to. */
                    Resolve.resolveClassRef (cr, codeClassLoader);
                    if (! cr.isResolved(codeClassLoader)) {
                        throw new InternalError ("CodeBlock.backpatchInfo: Resolution of class " + cr + " failed");
                    }
                }
            } else if ((bpi.or instanceof byte[]) ||
                       ((bpi.or instanceof Method) && (brLOADDynNative == bpi.brtype))) {
                /* don't need to do anything */
            } else {
                throw new InternalError ("CodeBlock.backpatchInfo: Unrecognized object ref: "
                                         + bpi.or.getClass().getName ());
            }
        }
        switch (bpi.brtype) {
            case brCALL:
                if (null == bpi.or) {
                    throw new InternalError ("Call is missing target reference");
                }
                fr = (FieldRef) bpi.or;
                if (! fr.isResolved ()) {
                    throw new InternalError ("brCALL: FieldRef not resolved");
                }
                fd = fr.getField();
                mt = (Method) fd.tableObj;
                if (null != mt) {
                    /* We generated the code for this, so there had better
                     * be a mt.mtcode object with what we need in it. */
                    if (null == mt.mtcode) {
                        throw new InternalError ("Method does not have code information");
                    }
                    addr = mt.mtcode.getEntryPoint ();
                } else {
                    /* This is a native function loaded from a library?
                     * See if we can grab what we need from that. */
                    fr = (FieldRef) bpi.or;
                    addr = ClassRT.getMethodAddr (fr.cl.getRefClass (codeClassLoader), fd);
                }
                if (0 == addr) {
                    throw new UnsatisfiedLinkError ("Method " + fr + " does not have code entrypoint.");
                }
                lpc = bpi.loffs + method.mtcode.getMethodEntry ();
                if (jumpFromNextInstr) {
                    lpc += bpi.inseqlen;
                }
                storeByteArray (evalBrCALL ((int)(addr - lpc)), bpi.loffs);
                break;
            case brJUMP:
                if (-1 == bpi.lv) {
                    toffs = getEpilogOffs ();
                } else {
                    toffs = instrToByteOffs [method.lblmap [(int) bpi.lv]];
                }
                lpc = bpi.loffs;
                if (jumpFromNextInstr) {
                    lpc += bpi.inseqlen;
                }
                storeByteArray (evalBrJUMP ((int) (toffs - lpc)), bpi.loffs);
                break;
            case brLOAD:
                fr = (FieldRef) bpi.or;
                if (! fr.isResolved ()) {
                    throw new InternalError ("brLOAD: FieldRef not resolved");
                }
                fd = fr.getField ();
                addr = ClassRT.getClassVarAddr (fr.cl.getRefClass (codeClassLoader), fd.tableslot);
                storeByteArray (evalBrLOAD ((int)addr, bpi.treg), bpi.loffs);
                break;
            case brACALL:
                /* Generate a call to the function at the provided absolute
                 * address */
                addr = bpi.lv;
                lpc = method.mtcode.getMethodEntry ();
                if (0 == lpc) {
                    throw new UnsatisfiedLinkError ("Method " + method + " does not have code entrypoint.");
                }
                lpc += bpi.loffs;
                if (jumpFromNextInstr) {
                    lpc += bpi.inseqlen;
                }
                storeByteArray (evalBrACALL ((int) (addr - lpc)), bpi.loffs);
                break;
            case brFIELDLOAD:
                /* Load the tableslot value from the reference */
                fr = (FieldRef) bpi.or;
                if (! fr.isResolved ()) {
                    throw new InternalError ("brFIELDLOAD: FieldRef not resolved");
                }
                fd = fr.getField();
                iv = fd.tableslot;
                storeByteArray (evalBrFIELDLOAD (iv, bpi.treg), bpi.loffs);
                break;
            case brCLREFLOAD:
                /* Load the class reference value from the reference */
                cr = (ClassRef) bpi.or;
                if (! cr.isResolved (codeClassLoader)) {
                    throw new InternalError ("brCLREFLOAD: ClassRef not resolved");
                }
                cl = cr.getRefClass(codeClassLoader);
                if (null == cl) {
                    throw new UnsatisfiedLinkError ("Class " + cr.name + " unresolved.");
                }
                iv = (int) CodeGen.getNativeObjectAddr (cl);
                storeByteArray (evalBrCLREFLOAD (iv, bpi.treg), bpi.loffs);
                break;
            case brLOADCodeRel:
                storeByteArray (evalBrLOADCodeRel ((int) (bpi.lv + mtentry), bpi.treg), bpi.loffs);
                break;
            case brLOADCodeAbs:
                toffs = (int) (mtentry + instrToByteOffs [method.pcmap [(int) bpi.lv]]);
                storeByteArray (evalBrLOADCodeAbs (toffs, bpi.treg), bpi.loffs);
                break;
            case brLOADCodeLbl:
                toffs = (int) (mtentry + instrToByteOffs [method.lblmap [(int) bpi.lv]]);
                storeByteArray (evalBrLOADCodeLbl (toffs, bpi.treg), bpi.loffs);
                break;
            case brINITSwitchTable:
                /* Store into the switch table target addresses, or keys
                 * and targets, depending on switch type. */
                addr = bpi.lv;
                if (Opcode.TBLSW == bpi.ins.opcode.code) {
                    /* Tableswitch: store sequence of addresses */
                    iv = 1 + bpi.ins.more [2] - bpi.ins.more [1];
                    for (int i = 0; i < iv; i++) {
                        CodeGen.pokeInt (addr, (int) (mtentry + instrToByteOffs [method.pcmap [bpi.ins.more[3+i]]]));
                        addr += 4;
                    }
                } else {
                    if (Opcode.LKPSW != bpi.ins.opcode.code) {
                        throw new InternalError ("brINITSwitchTable on non-switch instruction");
                    }
                    for (int i = 0; i < bpi.ins.more [1]; i++) {
                        CodeGen.pokeInt (addr, bpi.ins.more [2+2*i]);
                        CodeGen.pokeInt (addr+4, (int) (mtentry + instrToByteOffs [method.pcmap [bpi.ins.more[3+2*i]]]));
                        addr += 8;
                    }
                }
                break;
            case brLOADNatCl:
                /* Load a pointer to the native "struct class *" class
                 * structure of an object or class reference */
                if (bpi.or instanceof FieldRef) {
                    fr = (FieldRef) bpi.or;
                    if (! fr.isResolved ()) {
                        throw new InternalError ("brLOADNatCl: FieldRef not resolved");
                    }
                    cr = fr.cl;
                    fd = fr.getField ();
                } else if (bpi.or instanceof ClassRef) {
                    cr = (ClassRef) bpi.or;
                } else {
                    throw new InternalError ("Invalid type for brLOADNatCl: " + bpi.or);
                }
                if (! cr.isResolved (codeClassLoader)) {
                    throw new InternalError ("brLOADNatCl: ClassRef not resolved");
                }
                addr = ClassRT.getNativeClass (cr.getRefClass (codeClassLoader));
                if (0 == addr) {
                    throw new UnsatisfiedLinkError ("Class " + cr.name + " unresolved.");
                }
                storeByteArray (evalBrLOADNatCl ((int)addr, bpi.treg), bpi.loffs);
                break;
            case brOverWriteCode:
                storeByteArray ((byte []) bpi.or, bpi.loffs);
                break;
            case brLOADDynNative:
                mt = (Method) bpi.or;
                fd = mt.fl;
                addr = CodeGen.getNativeSymbolAddress (fd.cname);
                if (0 == addr) {
                    throw new UnsatisfiedLinkError ("Native method " + fd.cname + " (from "
                                                    + mt.cl.name + "." + fd.name + " not resolved");
                }
                /** !!ToDo!! This is _extremely_ unstable.  What it is is,
                  * we're using "mtentry" as both the entry point, and the
                  * start of a buffer into which we write code.  Thing
                  * is, if this native method doesn't have any sort of
                  * preserved wrapper---i.e., it's not synchronized---we
                  * want to set the mtentry to the real address of the
                  * function.  But we have to make damned sure that nobody
                  * then uses mtentry as the destination of where to
                  * copy stuff.  We hack around that with setAllNativeCode
                  * which prevents the installation copy, but it's not
                  * absolutely clear that this code here and that in
                  * JITCodeGen.java where the brLOADDynNative backpatch
                  * is created are fully in sync. */
                if (null != syncwrap_bpi) {
                    syncwrap_bpi.setLongVal (addr);
                    if (syncwrap_bpi.isDone) {
                        syncwrap_bpi.isDone = false;
                        doBackPatch (syncwrap_bpi);
                    }
                } else {
                    setMethodEntry (addr);
                    setAllNativeCode (true);
                }
                break;
            default:
                throw new InternalError ("Unrecognized backpatch type " + bpi.brtype);
        }
        bpi.isDone = true;
        return;
    }
                 

    /** Resolve all unresolved references and addresses in the code cache.
      */
    protected void
    backpatchCode () {
        BackpatchInfo bpi;      // Chain through backpatch records
        long addr;              // Generic address

        /* Do all the normal backpatches we have queued up. */
        bpi = bpinfo;
        while (null != bpi) {
            if (! bpi.isDone) {
                doBackPatch (bpi);
            }
            bpi = bpi.getNext ();
        }
    }

    /** Reserve space for code that will need a literal value only available after linking.
      * This version does something with a reference value.
      * @param brtype integer call code
      * @param ins instruction that evoked the reference
      * @param treg the target register for backpatches, where appropriate
      * @param or Reference to variable, method, or class; null if intra-function branch
      * @returns BackpatchInfo the structure encoding this backpatch
      */
    public BackpatchInfo
    reserveCode (int brtype,    // Type of reservation needed
                 Instr ins,     // Instruction evoking operation
                 Object treg,   // Target register of operation
                 Object or)     // Reference to decode
    {
        BackpatchInfo bpi;      // Backpatch object generated here
        byte instr [];          // Instructions to implement backpatch
        int nui;                // Number of UNIMPs inserted so far

        /* No matter whether the target has been resolved or not, we can't
         * emit code now, because we don't know where our %pc will be, and
         * the call is often with a relative address.  We also may not know
         * how many bytes it will take to perform this operation.  So what
         * we do is lock the codeByte array, then evaluate the function
         * that will generate the actual instruction, with a dummy
         * argument, and count the number of bytes in what it returns.
         * That's how much space is required. */
        setLockCodeBytes (true);
        switch (brtype) {
            case brLOAD:
                instr = evalBrLOAD (1000, treg);
                break;
            case brFIELDLOAD:
                instr = evalBrLOAD (1000, treg);
                break;
            case brCLREFLOAD:
                instr = evalBrLOAD (1000, treg);
                break;
            case brLOADNatCl:
                instr = evalBrLOAD (1000, treg);
                break;
            case brCALL:
                instr = evalBrCALL (1000);
                break;
            case brLOADDynNative:
            case brOverWriteCode:
                instr = null;
                break;
            default:
                throw new InternalError ("Unknown object backpatch reservation code " + brtype);
        }
        bpi = new BackpatchInfo (brtype, ins, treg, nextByteOffs(), or);
        bpinfo = bpi.setNext (bpinfo);
        setLockCodeBytes (false);
        if (null != instr) {
            bpi.setInsSeqLen (instr.length);
        
            /* Reserve as many bytes as the backpatch requires.  Fill the
             * reserved memory with some instruction that will blow chow if
             * it gets executed. */
            nui = 0;
            while (nui < instr.length) {
                byte rv[];
                rv = UNIMP (nBackPatches);
                nui += rv.length;
            }
            if (nui != instr.length) {
                throw new InternalError ("x86: Blew it filling backpatch reservation.");
            }
        }
        ++nBackPatches;
        return bpi;
    }

    /** Reserve space for code that will need a literal value only available after linking.
      * This version does something with an integral value, usually pc-relative
      * @param brtype integer call code
      * @param ins instruction that evoked the reference
      * @param treg the target register for backpatches, where appropriate
      * @param lv long integer value
      * @returns BackpatchInfo the structure encoding this backpatch
      */
    public BackpatchInfo
    reserveCode (int brtype,    // Type of reservation needed
                 Instr ins,     // Instruction evoking operation
                 Object treg,   // Target register of operation
                 long lv)       // Integer value
    {
        BackpatchInfo bpi;      // Backpatch object generated here
        byte instr [];          // Instructions to implement backpatch
        int nui;                // Number of UNIMPs inserted so far

        /* No matter whether the target has been resolved or not, we can't
         * emit code now, because we don't know where our %pc will be, and
         * the call is often with a relative address.  We also may not know
         * how many bytes it will take to perform this operation.  So what
         * we do is lock the codeByte array, then evaluate the function
         * that will generate the actual instruction, with a dummy
         * argument, and count the number of bytes in what it returns.
         * That's how much space is required. */
        setLockCodeBytes (true);
        switch (brtype) {
            case brLOADCodeRel:
                instr = evalBrLOADCodeRel (1000, treg);
                break;
            case brLOADCodeLbl:
                instr = evalBrLOADCodeLbl (1000, treg);
                break;
            case brLOADCodeAbs:
                instr = evalBrLOADCodeAbs (1000, treg);
                break;
            case brJUMP:
                instr = evalBrACALL (1000);
                break;
            case brACALL:
                instr = evalBrACALL (1000);
                break;
            case brINITSwitchTable:
                instr = new byte [0];
                break;
            default:
                throw new InternalError ("Unknown integral backpatch reservation code " + brtype);
        }
        bpi = new BackpatchInfo (brtype, ins, treg, nextByteOffs(), lv);
        bpinfo = bpi.setNext (bpinfo);
        bpi.setInsSeqLen (instr.length);

        /* Reserve as many bytes as the backpatch requires.  Fill the
         * reserved memory with some instruction that will blow chow if
         * it gets executed. */
        setLockCodeBytes (false);
        nui = 0;
        while (nui < instr.length) {
            byte rv[];
            rv = UNIMP (nBackPatches);
            nui += rv.length;
        }
        if (nui != instr.length) {
            throw new InternalError ("x86: Blew it filling backpatch reservation.");
        }
        ++nBackPatches;

        return bpi;
    }

    /** Do whatever linking is required to make the code finally work.
      * For example, we may not have stored target addresses because we
      * didn't know enough to do them during code generation.
      */
    public synchronized void
    resolveCode ()
    {
        long bTime;
        
        if (isResolved) {
            /* In the presence of multiple threads, this routine might
             * get called multiple times for the same method.  Since
             * it's synchronized, only one resolution will succeed,
             * but we need to check whether somebody snuck in ahead of
             * us, and return if so. */
            return;
        }

        if (0 == mtentry) {
            throw new InternalError ("Attempt to link code w/o known address");
        }

//        System.err.println ("CodeBlock.resolveCode: called on " + method.cl.name + "." + method.fl.name +
//                               " at " + Long.toHexString (mtentry));
        bTime = System.currentTimeMillis ();
        /* Backpatch the calls and static references that require true
         * addresses.  Does the syncwrap stuff, too. */
        try {
            backpatchCode ();
        } catch (InternalError e) {
            System.out.println ("Backpatch caught " + e + " in " + method);
            throw e;
        }

        /* Copy the code into the execution block */
        installCode ();

//        System.err.println ("CodeBlock.resolveCode: installed " + method.cl.name + "." + method.fl.name);
        /* Build the exception handler table, if there is one. */
        long htptr = handlerTableAddress;
        if (null != method.handlers) {
            for (int i = 0; i < method.handlers.length; i++) {
                /* exception handling table is defined in toba.h.  If it
                 * changes, fix this, and the EmitExceptHandle code in
                 * the real code generator class. */
                /* 
                   struct handler {
                      Class class;                // exception
                      unsigned short start_pc;
                      unsigned short end_pc;
                      unsigned int handler_pc;    // JIT requires this to be at least 32bit
                   };
                */

                int cls = 0;
                /* Store the address of the C exception class handled by this range */
                if (null != method.handlers [i].type) {
                    ClassRef href = method.handlers [i].type;

                    /* Handler type might not be resolved: make sure it is */
                    if (! href.isResolved (codeClassLoader)) {
                        Resolve.resolveClassRef (href, codeClassLoader);
                    }
                    cls = (int) ClassRT.getNativeClass (href.getRefClass(codeClassLoader));
                }
                
                short start_pc = (short) method.handlers [i].start;
                short end_pc = (short) method.handlers [i].end;
                int handler_pc = (int) (mtentry + instrToByteOffs [method.pcmap [method.handlers [i].jump]]);

                CodeGen.pokeInt (htptr, cls);
                htptr += 4;
                CodeGen.pokeShort (htptr, start_pc);
                htptr += 2;
                CodeGen.pokeShort (htptr, end_pc);
                htptr += 2;
                CodeGen.pokeInt (htptr, handler_pc);
                htptr += 4;
            }
        }
        
        /* Set the resolve flag, and update the entry point for this function
         * Don't do that before we're really finished, 'cuz the thread
         * start routine might read it and start running something before
         * we finish backpatching, if the resolution procedure is interrupted */
        isResolved = true;
        Class jclass = method.cl.javaClass;
        Field jfield = method.fl;
        ClassRT.setMethodAddr (jclass, jfield, mtentry);

        if (shouldTimeCodegen) {
            resolveTime = (int) (System.currentTimeMillis () - bTime);

            System.err.println ("<" + method.cl.name + "." + method.fl.name +
                                ": compile " + method.instrs.length + " instr in " +
                                compileTime + "ms; resolve in " +
                                resolveTime + "ms; " + numCodeBytes + " bytes at 0x" +
                                Long.toHexString ((long) mtentry) + ">");
        }
//        System.err.println ("CodeBlock.resolveCode: done at " + Long.toHexString ((long) mtentry));

        return;
    }

    protected byte[]
    getCodeBlock ()
    {
        byte rv [];

        rv = new byte [numCodeBytes];
        System.arraycopy (codeBytes, 0, rv, 0, numCodeBytes);
        return rv;
    }
}
