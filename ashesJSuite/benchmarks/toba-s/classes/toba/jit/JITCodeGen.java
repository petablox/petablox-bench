/** use just-in-time compilation to generate code for methods
  * @version $Id: Intel86JITCodeGen.java,v 1.17 1999/04/06 03:30:37 pab Exp $
  */

/* This is part of the Just-In-Time compiler for the Toba system.  NB:
 * Although we work with an instance of this class, the code is not
 * necessarily clean for multiple active instances; cf the static
 * variables. */
package toba.jit;

/* A note about REQUIRE: At various locations in this module are comments
 * which start with !! REQUIRE.  The body of those comments is a C equality
 * test, which verifies that some constant we're using in the jit, normally
 * dealing with the offset of a particular field in a runtime structure, is
 * still correct (nobody mucked with structure layout).  The requirements
 * are parsed by genRequire, which emits a body of C code that should
 * be inserted into runtime_CodeGen.c. */

/* We need the basic Toba runtime data structures, and the classfile
 * structures. */
import toba.runtime.*;
import toba.classfile.*;

class
JITCodeGen
extends CodeGen {

    /** Initialize the CodeGen class so its generator points to us.
      * This must be done before anybody touches code generation, because
      * the system class loader is going to look at CodeGen.generator,
      * and if it's null will die a quick and painful death. */
    public static void 
    Initialize ()
    {
        JITCodeGen jcg;
        
        /* Verify our requirements */
        CodeGen.verifyRequirements ();
        
        /* Set the global code generator to use one of us.  Do _NOT_ throw
         * away one we've already assigned; we may have done some initialization
         * in the C code (specifically, codegen_init). */
        jcg = (JITCodeGen) CodeGen.getGenerator ();
        if (null == jcg) {
            CodeGen.setGenerator (jcg = new JITCodeGen ());
        }
    }

    /* Chances are, we'll have done this explicitly (since CodeGen.generator
     * can be examined without being an active use of JITCodeGen), but
     * just in case.... */
    static {
        Initialize ();
    }

    /** Trivial constructor
      */
    public 
    JITCodeGen ()
    {
        super();
    }

    /** Return the native data address of a java array.
      * Toba hash code: _O_TCJx0
      */
    public native static long
    getArrayDataAddress (Object ap);

    /** Return a pointer to a C-format string containing this data.
      * Toba hash code: _S_Z43yi
      */
    public native static long
    getStringAddress (String s);
        
    /* Primitive instrumentation support: counts the number of instructions
     * executed dynamically in code jit'd with this code generator, and
     * emits that information at the end of the program. */

    private int instrcounts [];         // Array of counts
    private long icaddr;                // Native pointer to array data

    public void
    InitInstrumentation ()
    {
        int i;
        instrcounts = new int [256];
        i = instrcounts.length;
        while (0 <= --i) {
            instrcounts [i] = 0;
        }
        icaddr = getArrayDataAddress (instrcounts);
    }

    public void
    SummarizeInstrumentation ()
    {
        int i;
        if (0 == icaddr) {
            return;
        }
        System.out.println ("\n# Dynamic JVM instruction counts:");
        for (i = 0; i < instrcounts.length; i++) {
            if (0 != instrcounts [i]) {
                Opcode opc = Opcode.lookupOpcode (i);
                System.out.println (opc.name + ": " + instrcounts [i]);
            }
        }
    }

    /** With glibc2 (libc6 under Linux), setjmp becomes a two-argument
      * call to sigsetjmp; second argument should be zero.  This flag is set
      * in codegen_init to indicate whether we need to set up the second
      * argument. */
    protected boolean useBinarySetjmp = false;

    /** With SCOUT_THREADS, the overhead of pre-emption handling with calling
      * yield on each back edge is too high; use a comparison between two
      * longs to determine whether the time has reached a point where it
      * is appropriate to call the yield function. */
    protected boolean useScoutThreadPreemption = false;

    private static final Register R_eax = Register.R_eax;
    private static final Register R_ecx = Register.R_ecx;
    private static final Register R_edx = Register.R_edx;
    private static final Register R_ebx = Register.R_ebx;
    private static final MemoryRef MR_ebx = new MemoryRef (R_ebx);
    private static final Register R_esp = Register.R_esp;
    private static final MemoryRef MR_esp = new MemoryRef (R_esp);
    private static final Register R_ebp = Register.R_ebp;
    private static final Register R_esi = Register.R_esi;
    private static final Register R_edi = Register.R_edi;
    private static final Register R_al = Register.R_al;
    private static final Register R_bl = Register.R_bl;
    private static final Register R_cl = Register.R_cl;
    private static final Register R_dl = Register.R_dl;
    private static final Register R_ah = Register.R_ah;
    private static final Register R_bh = Register.R_bh;
    private static final Register R_ch = Register.R_ch;
    private static final Register R_dh = Register.R_dh;
    
    private static final Register R_ST0 = Register.R_ST0;
    private static final Register R_ST1 = Register.R_ST1;
    private static final Register R_ST2 = Register.R_ST2;
    private static final Register R_ST3 = Register.R_ST3;
    private static final Register R_ST4 = Register.R_ST4;
    private static final Register R_ST5 = Register.R_ST5;
    private static final Register R_ST6 = Register.R_ST6;
    private static final Register R_ST7 = Register.R_ST7;


    /** Allocate a block of sz bytes in uncollectable memory.
      * @param sz number of bytes we need
      * @returns address of allocated block
      * Toba Hash: _i_qYFS3
      */
    private static native long
    allocUncolMemory (int sz);

    /* Function ID values to name functions.  Must match the defs in
     * runtime/jit_JITCodeGen.c.  Where's an include facility when you
     * need one? */
    static final int FID_new = 1;
    static final int FID_anewarray = 2;
    static final int FID_initclass = 3;
    static final int FID_vmnewarray = 4;
    static final int FID_throwAIOBE = 5;
    static final int FID_geteltoffs = 6;
    static final int FID_intdiv = 7;
    static final int FID_intrem = 8;
    static final int FID_longdiv = 9;
    static final int FID_longrem = 10;
    static final int FID_longmul = 11;
    static final int FID_remdr = 12;
    static final int FID_dtoi = 13;
    static final int FID_dtol = 14;
    static final int FID_longshift = 15;
    static final int FID_long2f = 16;
    static final int FID_long2d = 17;
    static final int FID_longcmp = 18;
    static final int FID_puts = 19;
    static final int FID_throwNPE = 20;
    static final int FID_mythread = 21;
    static final int FID_sthread_got_exc = 22;
    static final int FID_setjmp = 23;
    static final int FID_longjmp = 24;
    static final int FID_findhandler = 25;
    static final int FID_athrow = 26;
    static final int FID_monitorenter = 27;
    static final int FID_monitorexit = 28;
    static final int FID_throwCCE = 29;
    static final int FID_instanceof = 30;
    static final int FID_findinterface = 31;
    static final int FID_throwNASE = 32;
    static final int FID_enterclass = 33;
    static final int FID_exitclass = 34;
    static final int FID_backjumpfn = 35;
    static final int FID_timeNow = 36;
    static final int FID_timeSliceEnd = 37;
    static final int FID_throwJITIntErr = 38;
    static final int FID_CodeBlock_resolveCode = 39;

    /** Return some arbitrary function's address
      * @param fid an index naming the function we want
      * @returns address as long
      * Toba hash code:  _i_m3SYh
      */
    private static native long
    getFuncAddr (int fid);

    static final long FA_new = getFuncAddr (FID_new);
    static final long FA_anewarray = getFuncAddr (FID_anewarray);
    static final long FA_initclass = getFuncAddr (FID_initclass);
    static final long FA_vmnewarray = getFuncAddr (FID_vmnewarray);
    static final long FA_throwAIOBE = getFuncAddr (FID_throwAIOBE);
    static final long FA_geteltoffs = getFuncAddr (FID_geteltoffs);
    static final long FA_intdiv = getFuncAddr (FID_intdiv);
    static final long FA_intrem = getFuncAddr (FID_intrem);
    static final long FA_longdiv = getFuncAddr (FID_longdiv);
    static final long FA_longrem = getFuncAddr (FID_longrem);
    static final long FA_longmul = getFuncAddr (FID_longmul);
    static final long FA_remdr = getFuncAddr (FID_remdr);
    static final long FA_dtoi = getFuncAddr (FID_dtoi);
    static final long FA_dtol = getFuncAddr (FID_dtol);
    static final long FA_longshift = getFuncAddr (FID_longshift);
    static final long FA_long2f = getFuncAddr (FID_long2f);
    static final long FA_long2d = getFuncAddr (FID_long2d);
    static final long FA_longcmp = getFuncAddr (FID_longcmp);
    static final long FA_puts = getFuncAddr (FID_puts);
    static final long FA_throwNPE = getFuncAddr (FID_throwNPE);
    static final long FA_mythread = getFuncAddr (FID_mythread);
    static final long FA_sthread_got_exc = getFuncAddr (FID_sthread_got_exc);
    static final long FA_setjmp = getFuncAddr (FID_setjmp);
    static final long FA_longjmp = getFuncAddr (FID_longjmp);
    static final long FA_findhandler = getFuncAddr (FID_findhandler);
    static final long FA_athrow = getFuncAddr (FID_athrow);
    static final long FA_monitorenter = getFuncAddr (FID_monitorenter);
    static final long FA_monitorexit = getFuncAddr (FID_monitorexit);
    static final long FA_throwCCE = getFuncAddr (FID_throwCCE);
    static final long FA_instanceof = getFuncAddr (FID_instanceof);
    static final long FA_findinterface = getFuncAddr (FID_findinterface);
    static final long FA_throwNASE = getFuncAddr (FID_throwNASE);
    static final long FA_enterclass = getFuncAddr (FID_enterclass);
    static final long FA_exitclass = getFuncAddr (FID_exitclass);
    static final long FA_backjumpfn = getFuncAddr (FID_backjumpfn);
    static final long FA_timeNow = getFuncAddr (FID_timeNow);
    static final long FA_timeSliceEnd = getFuncAddr (FID_timeSliceEnd);
    static final long FA_throwJITIntErr = getFuncAddr (FID_throwJITIntErr);
    static final long FA_CodeBlock_resolveCode = getFuncAddr (FID_CodeBlock_resolveCode);

    private static final int OID_mythread_jmpbuf = 1;
    private static final int OID_mythread_exception = 2;
    private static final int OID_class_flags = 3;
    private static final int OID_class_nsupers = 4;
    private static final int OID_class_supers = 5;
    private static final int OID_mtgeneric_f = 6;
    private static final int OID_mcode_isresolved = 7;
    private static final int OID_mcode_mtentry = 8;
    private static final int OID_barray_length = 9;
    private static final int OID_barray_data = 10;

    private static final Immediate immZero8b = new Immediate (0, 1, true);
    private static final Immediate IMM_0 = new Immediate (0);
    private static final Immediate IMM_1 = new Immediate (1);
    private static final Immediate IMM_2 = new Immediate (2);
    private static final Immediate IMM_3 = new Immediate (3);
    private static final Immediate IMM_4 = new Immediate (4);
    private static final Immediate IMM_8 = new Immediate (8);
    private static final Immediate IMM_16 = new Immediate (16);

    private static final Immediate IO_class_flags = new Immediate (getFieldOffset (OID_class_flags));
    private static final Immediate IO_class_nsupers = new Immediate (getFieldOffset (OID_class_nsupers));
    private static final Immediate IO_class_supers = new Immediate (getFieldOffset (OID_class_supers));
    private static final Immediate IO_mythread_jmpbuf = new Immediate (getFieldOffset (OID_mythread_jmpbuf));
    private static final Immediate IO_mythread_exception = new Immediate (getFieldOffset (OID_mythread_exception));
    private static final Immediate IO_mtgeneric_f = new Immediate (getFieldOffset (OID_mtgeneric_f));
    private static final Immediate IO_mcode_isresolved = new Immediate (getFieldOffset (OID_mcode_isresolved));
    private static final Immediate IO_mcode_mtentry = new Immediate (getFieldOffset (OID_mcode_mtentry));
    private static final Immediate IO_barray_length = new Immediate (getFieldOffset (OID_barray_length));
    private static final Immediate IO_barray_data = new Immediate (getFieldOffset (OID_barray_data));

    private static final MemoryRef FMA_timeSliceEnd = new MemoryRef (new Immediate ((int) FA_timeSliceEnd), null);
    private static final MemoryRef FMA_timeNow = new MemoryRef (new Immediate ((int) FA_timeNow), null);


    /** Return the offset within a structure of a given field
      * @param oid an index naming the structure offset we want
      * @returns offset as int
      * Toba hash code: _i_N1XnB
      */
    private static native int
    getFieldOffset (int oid);

    /** Return a pointer to the cl_Foo structure for the primitive type
      * Foo.
      * @param tid Opcode.T_Foo code for type foo
      * @param getArray Return pointer to acl_Foo.C instead of cl_Foo
      * @returns address as long
      * Toba hash code: _ii_QHITB
      */
    private static native long
    getNPprimclass (int tid, int getArray);

    private Intel86 code;               // Where the code is built up
    private int frame_size;             // Size of activation record

    /* To handle exceptions, we need the following local variables:
     *  + char * methname; // Name of this method
     *  + Object instref; // instance reference (in synchronized methods)
     *  + struct mythread * tdata;
     *  + volatile int pc;  // or monitorheld, for syncwrappers
     *  + void * oldbuf;
     *  + jmp_buf newbuf;
     */
    private static final int ARLV_NumVars = 6;
    private static final int ARLV_methname = 5; // char * methodname
    private static final int ARLV_insref = 4; // Object instance_ref, for sync method
    private static final int ARLV_tdata = 3; // struct mythread *
    private static final int ARLV_pc = 2; // volatile int (overlaid with monitorheld)
    private static final int ARLV_monitorheld = 2; // volatile int (overlaid with pc)
    private static final int ARLV_oldbuf = 1; // void *
    private static final int ARLV_newbuf = 0; // jmp_buf

    /* Probably the first few are one word, but maybe not.  jmp_buf is a
     * pretty good sized structure.  The first array of ints is
     * initialized to the sizes of these objects; the second to their
     * offsets within an activation record. */

    private static int excOheadSize [];
    private static int excOheadOffs [];
    private static int excOheadTotal;

    /** Return the number of bytes required to hold each of the local
      * overhead variables.  The order of storage must match the index
      * ordering of ARLV_foo above.
      * @returns array of ints with variable sizes.
      * Toba hash code: __Ds3WL
      */
    private static native int[]
    getOverheadSize ();

    /* Overhead initialization */
    static {
        int offs;
        int i;
        
        /* Get the size of the local variables, then compute their offsets,
         * with necessary alignments. */
        excOheadSize = getOverheadSize ();
        excOheadOffs = new int [excOheadSize.length];
        offs = 0;
        for (i = 0; i < excOheadSize.length; i++) {
            if (4 < excOheadSize [i]) {
                // 8-byte align large elements
                offs = (7 + offs) & ~0x07;
            } else {
                // 4-byte align normal elements
                offs = (3 + offs) & ~0x03;
            }
            excOheadOffs [i] = offs;
            offs += excOheadSize [i];
        }

        // 8-byte align whatever follows
        excOheadTotal = (7 + offs) & ~0x07;

        /* Go through and update the offsets so we can get to values
         * at %ebp[- (overheadOffs + excOheadOffs[ARLV])]. */
        for (i = 0; i < excOheadOffs.length; i++) {
            excOheadOffs [i] = (excOheadTotal - excOheadOffs [i]);
//            System.out.println ("OH " + i + " is at " + excOheadOffs [i] + " of " + excOheadTotal);
        }
    }

    /* This is the offset from %ebp to where the overhead data starts.
     * Covers: %esi, %edi, %ebx */
    private int overheadOffs = 3 * 4;

    /* This is the overhead size for this code's AR: either 0 or
     * excOheadTotal */
    private int overheadSize;

    /** Convert from local variable number to a MemoryRef operand representing
      * a load from the AR.
      * @param lvi The local variable offset; starts from zero
      * @returns reference to stack location of local variable */
    private MemoryRef
    LVOffs (int lvi)
    {
        return new MemoryRef (new Immediate (- (overheadOffs + overheadSize + 4 * (1 + lvi))), R_ebp);
    }
    private MemoryRef
    excOheadAddr (int arlv)
    {
//        System.out.println (arlv + " is " + (overheadOffs + excOheadOffs [arlv]) + " below %ebp");
        return new MemoryRef (new Immediate (- (overheadOffs + excOheadOffs [arlv])), R_ebp);
    }

    /** Allocate activation record, preserve callee-saved registers, and
      * copy parameters onto Java stack.
      * @param m method for which we're generating code
      * @param ndata number of words to reserve for local data; -1 for normal method
      */
    private void
    Prologue (Method m,         // What we're generating code for
              int ndata)        // Number of data words for special AR
    {
        int i;                  // General purpose index
        int maxcaw;             // Maximum callee argument words
        int aw;                 // Callee argument words

//        System.out.println ("Method argstack in: " + m.astack + " rstack " + m.rstack);
        /* Start by saving the old base pointer, and setting the new
         * one. */
        code.PUSH (R_ebp);
        code.MOV (R_esp, R_ebp);
        
        /* Build up the frame size as we add things to the stack */
        frame_size = 0;

        /* Save the basic offset for the overhead information */
        overheadOffs = frame_size;
        
        /* What kind of AR are we generating? */
        if (0 <= ndata) {
            /* If we were told a non-zero amount of local data to store, just do
             * that.  We're probably generating the AR for a synchronization
             * wrapper.  NB: The caller is responsible for setting overheadSize,
             * _before_ this function is called. */
            frame_size += overheadSize;
            frame_size += 4 * ndata;
        } else {
            /* We're computing what's needed for the method under consideration.
             * Now, if there's an exception handler, we need to add local storage
             * for some support data. */
            overheadSize = 0;
            if ((null != m.handlers) && (0 < m.handlers.length)) {
                overheadSize = excOheadTotal;
            }
            frame_size += overheadSize;

            /* Now add space for local Java variables */
            frame_size += 4 * m.max_locals;

            /* Here's where the Java evaluation stack starts.  Inform
             * the low-level code generator, so it can maintain the ES
             * pointer when it pushes and pops. */
            code.setEStackBase (frame_size);

            /* Add space for the Java evaluation stack */
            frame_size += 4 * m.max_stack;
        }

        /* Sanity checks: frame size must be word-aligned */
        if (0 != (frame_size % 4)) {
            throw new InternalError ("frame size not multiple of 4");
        }
        
        /* Set the stack pointer to be below what we've reserved. */
        code.SUB (new Immediate (frame_size), R_esp);

        /* Presume we're going to modify all the callee-saved registers, so
         * save them now. */
        code.PUSH (R_esi);
        code.PUSH (R_edi);
        code.PUSH (R_ebx);

        /* Stuff the name of this function in the standard location.
         * NB: We can only do this if there are exception handlers, because
         * otherwise we didn't allocate space for local variables on
         * the AR. */
        if ((null != m.handlers) && (0 < m.handlers.length)) {
            code.MOV (new Immediate ((int)getStringAddress (m.cl.name + "." + m.fl.name)), excOheadAddr (ARLV_methname));
//        code.PUSH (excOheadAddr (ARLV_methname));
//        code.reserveCode (CodeBlock.brACALL, m.instrs[0], null, FA_puts);
//        code.ADD (new Immediate (2), R_esp);
        }

        /* If we're creating a standard frame for executing Java code, then
         * store the arguments into the local variable arena.  If not,
         * whoever's creating us should take responsibility for preserving
         * arguments. */
        if (0 > ndata) {
            int an;             // Number of arguments moved
            int naw;            // Number of argument words moved
            char c;             // Char denoting argument type

            /* The problem here is that the JVM local variables are in the
             * wrong order relative to how the parameters are passed on
             * the Intel stack.  We need to reverse them; but we can't
             * reverse the words in 64-bit entities.  So we walk through
             * doing copies from the caller args into the JVM locals
             * based on the type of the parameters.  Fortunately, all
             * parameters of 1 or 2 bytes are passed as full 4-byte words. */

            /* Keep track of the number of words transferred so far. */
            naw = 0;

            /* If this is an instance method, the first whosit is the
             * object reference. */
            if (0 == (m.fl.access & ClassData.ACC_STATIC)) {
                code.MOV (new MemoryRef (IMM_8, R_ebp), R_eax);
                code.MOV (R_eax, LVOffs(0));
                ++naw;
            }

            naw = 0;
            while (naw < m.astack.length()) {
                if ('x' == m.astack.charAt (naw)) {
                    /* Copy over a double word, stored LSW MSW, and
                     * preserve its order. */
                    code.MOV (new MemoryRef (new Immediate (8+4*naw), R_ebp), R_esi); // LSW
                    code.MOV (new MemoryRef (new Immediate (12+4*naw), R_ebp), R_edi); // MSW
                    code.MOV (R_esi, LVOffs (naw+1)); // LSW
                    code.MOV (R_edi, LVOffs (naw)); // MSW
                    naw += 2;
                } else {
                    /* Copy over a single word */
                    code.MOV (new MemoryRef (new Immediate (8+4*naw), R_ebp), R_eax);
                    code.MOV (R_eax, LVOffs (naw));
                    naw++;
                }
            }
        }

        /* Call the yield function if there is one */
        if (null != m.instrs) {
            emitBackJumpCall (m.instrs[0]);
        }

        return;
    }

    /* Given an array structure at %ebx, and an index at %eax, make
     * sure the index is legitimate, and compute the address of the
     * desired element.  The element address is returned in %ebx. */
    private void
    emitEltOffsetCode (int esz,
                       Instr ins)
    {
        int sf;

        /* Make sure the array reference isn't null. */
        
        code.OR (R_ebx, R_ebx);
        code.Jccn (Intel86.CND_nz, IMM_0);
        int boffs = code.nextByteOffs ();

        /* Call throwNullPointerException (0) */
        code.PUSH (IMM_0);
        code.reserveCode (CodeBlock.brACALL, ins, null, FA_throwNPE);
        /* No need to pop args; we never return here. */
        code.UNIMP (0);        // sure about that?
        /* Here's where we end up if we were nz */
        code.PatchNearJump (boffs, code.nextByteOffs() - boffs);
        
        /* Make sure the index is in range. */
        code.OR (R_eax, R_eax);
        code.Jccn (Intel86.CND_l, IMM_0);
        boffs = code.nextByteOffs ();
        /* ecx = ebx->length */
        code.MOV (new MemoryRef (IO_barray_length, R_ebx), R_ecx);
        /* eax < ecx? */
        code.CMP (R_ecx, R_eax);
        code.Jccn (Intel86.CND_l, IMM_0);
        code.PatchNearJump (boffs, code.nextByteOffs() - boffs);
        boffs = code.nextByteOffs ();
        code.PUSH (R_eax);
        code.PUSH (R_ebx);
        code.reserveCode (CodeBlock.brACALL, ins, null, FA_throwAIOBE);
        code.UNIMP (0);        // sure about that?
        /* Here's where we end up if we were in range */
        code.PatchNearJump (boffs, code.nextByteOffs() - boffs);
        code.LEA (new MemoryRef (IO_barray_data, R_ebx, esz, R_eax, 4), R_ebx);
        return;
    }

    /** Generate code to initialize a class if necessary, leaving the class
      * reference in %ebx.
      * @param i the instruction that induced the initialization requirement
      * @param or the reference to the object (FieldRef or ClassRef) that may need to be initialized
      */
    private void
    emitClassInit (Instr i,
                   Object or)
    {
        int boffs;
        
        /* Load the address of the native struct class object that is the
         * basis of the object referred to by fr. */
        code.reserveCode (CodeBlock.brLOADNatCl, i, R_ebx, or);

        /* The first word of the class object is the flag indicating
         * whether it needs to be initialized.  If that's zero, the class
         * has been initialized, and we skip over the call to the
         * initializer.*/
        code.CMP (IMM_0, MR_ebx);
        code.Jccn (Intel86.CND_z, IMM_0);
        boffs = code.nextByteOffs ();
        code.PUSH (R_ebx);
        code.reserveCode (CodeBlock.brACALL, i, null, FA_initclass);
        code.ADD (IMM_4, R_esp);
        code.PatchNearJump (boffs, code.nextByteOffs() - boffs);
    }

    /** Push na arguments off the evaluation stack onto the code stack for
      * calling a C function.   ES args are popped last to first, so first
      * arg is at top of C stack.  MUST NOT TRASH %eax.
      * @param nwords number of words used as parameters
      * @returns int number of bytes pushed onto stack */
    private int
    setCallArgs (int nwords)
    {
        int an;
        for (an = 0; an < nwords; an++) {
            code.PUSH (new MemoryRef (new Immediate (code.peekEStackOffs (an)), R_ebp));
        }
        code.tossES (nwords);
        return 4*nwords;
    }

    /** Get arguments off evaluation stack and put them where they're
      * needed for the function call.
      * @param sig Signature of caller's parameters
      * @returns int number of bytes pushed onto stack */
    private int
    setCallArgs (String sig)
    {
        int naw;                // Number of words in arguments
        int an;                 // Argument word counter

        an = 0;
        naw = sig.length () - 1;
        while (0 <= naw) {
            if ((0 < naw) && ('x' == sig.charAt (naw-1))) {
                /* Copy over a double word, stored LSW MSW, and
                 * preserve its order. */
                code.PUSH (new MemoryRef (new Immediate (code.peekEStackOffs (an+1)), R_ebp)); // msw
                code.PUSH (new MemoryRef (new Immediate (code.peekEStackOffs (an)), R_ebp)); // lsw
                naw -= 2;
                an += 2;
            } else {
                /* Copy over a single word */
                code.PUSH (new MemoryRef (new Immediate (code.peekEStackOffs (an)), R_ebp));
                naw--;
                an++;
            }
        }

        /* Update the estack pointer based on what we pushed */
        code.tossES (an);

//        System.out.println ("Set " + an + " arg words from " + sig);

        /* Return the number of bytes we pushed. */
        return 4*an;
    }


    private void
    emitBackJumpCall (Instr ci)
    {
        long bjfn;
        int boffs;

        /* Get the address of the function we call on back edges.  If there
         * is none, just return. */

        bjfn = FA_backjumpfn;
        if (0 == bjfn) {
            return;
        }

        /* If we're running with scout thread preemption, see if the
         * time slice is over. */
        boffs = -1;
        if (useScoutThreadPreemption) {
            code.MOV (FMA_timeSliceEnd, R_eax);
            code.CMP (R_eax, FMA_timeNow);
            code.Jccn (Intel86.CND_b, IMM_0);
            boffs = code.nextByteOffs ();
        }
        code.reserveCode (CodeBlock.brACALL, ci, null, bjfn);
        if (0 <= boffs) {
            code.PatchNearJump (boffs, code.nextByteOffs () - boffs);
        }
    }

    /** If the source is past the destination, this is a backedge, and we
      * insert a call to some routine that needs to be called regularly.
      * E.g., a thread yield function on a non-preemptive thread system.
      * NB: This may trash registers %eax, %ecx, and flags. */
    private void
    checkBackJump (Instr ci,    // Current instruction
                   int src,     // Where we are now (label, addr, ??)
                   int dst)     // Where we're jumping to (label, addr, ??)
    {
        if (src > dst) {
            emitBackJumpCall (ci);
        }
        return;
    }

    /** Pull object off stack and make sure it's not a null pointer.
      * After this, the object reference is in the specified register.
      * @param i how far back down stack to look, zero is top elt
      * @param treg what register to put object reference into
      * @param npeCode indicate what NullPointerException argument to throw
      */
    private void
    checkObjectRef (int i,
                    Register treg,
                    Instr ins)
    {
        /* Load the value from the JVM stack */
        code.peekES (i, treg);
        /* Compare it to zero */
        code.OR (treg, treg);
        /* If not zero, jump next few instructions */
        code.Jccn (Intel86.CND_nz, IMM_0);
        int boffs = code.nextByteOffs ();
        /* Call throwNullPointerException (0) */
        code.PUSH (IMM_0);
        code.reserveCode (CodeBlock.brACALL, ins, null, FA_throwNPE);
        /* No need to pop args; we never return here. */
        code.UNIMP (0);        // sure about that?
        /* Here's where we end up if we were nz */
        code.PatchNearJump (boffs, code.nextByteOffs() - boffs);
        return;
    }

    /** Emit code for an if_cmp/ifcond instruction, including the jumps.
      * @param i the instruction we're executing code for.
      * @param m the method i belongs to, for looking up target addresses
      */
    private void
    EmitIfCmp (Instr i,         // Instruction to codegen
               Method m)        // Method info
    {
        int boffs;
        
        /* Operands are either one or two words.  Pop what's necessary,
         * and set the condition codes to represent the status of the
         * condition variable. */
        if (Opcode.IFZRO == i.opcode.kind) {
            code.popES (R_eax);
            code.OR (R_eax, R_eax);
        } else {
            // Better be IFCMP
            code.popES (R_ebx);
            code.popES (R_eax);
            // Subtracts source from dest
            code.CMP (R_ebx, R_eax);
        }
        /* Because we're jumping to a JVM offset, which may be in code
         * we haven't built yet, we need to generate a brJUMP-style
         * backpatch.  Rather than make a backpatch type for each condition,
         * we invert the test result and jump around an unconditional
         * jump if the test failed. */
        switch (i.opcode.code) {
            case Opcode.IF_ICMPEQ:
            case Opcode.IF_ACMPEQ:
            case Opcode.IFNULL:
            case Opcode.IFEQ:
                // Equality test: skip jump if not equal
                code.Jccn (Intel86.CND_ne, IMM_0);
                break;
            case Opcode.IF_ICMPNE:
            case Opcode.IF_ACMPNE:
            case Opcode.IFNE:
            case Opcode.IFNONNULL:
                // Inquality test: skip jump if equal
                code.Jccn (Intel86.CND_e, IMM_0);
                break;
            case Opcode.IF_ICMPLT:
            case Opcode.IFLT:
                code.Jccn (Intel86.CND_ge, IMM_0);
                break;
            case Opcode.IF_ICMPGT:
            case Opcode.IFGT:
                code.Jccn (Intel86.CND_le, IMM_0);
                break;
            case Opcode.IF_ICMPLE:
            case Opcode.IFLE:
                code.Jccn (Intel86.CND_g, IMM_0);
                break;
            case Opcode.IF_ICMPGE:
            case Opcode.IFGE:
                code.Jccn (Intel86.CND_l, IMM_0);
                break;
        }
        boffs = code.nextByteOffs ();
//        System.out.println ("Jump to pc " + i.val + " is label " + m.instrs[m.pcmap [i.val]].label);
        checkBackJump (i, i.pc, i.val);
        code.reserveCode (CodeBlock.brJUMP, i, null, m.instrs[m.pcmap [i.val]].label);
        code.PatchNearJump (boffs, (code.nextByteOffs () - boffs));
        /* Continues here if OK */
    }

    /** Emit code for a unary operation
      * @param i instruction for codegen
      */
    private void
    EmitUnOp (Instr i)
    {
        String opdtype;         // Type of operands of instruction
        boolean donestore;
        int boffs;
        int boffs2;

        opdtype = i.opcode.push;
        /* Load the operand into its registers.  Boy it'd be cool if the
         * operand input type was available, but all we have is the
         * output type, and there be cast operations here. */
        switch (i.opcode.code) {
            case Opcode.INEG:
            case Opcode.I2L:
            case Opcode.I2F:
            case Opcode.I2D:
            case Opcode.INT2BYTE:
            case Opcode.INT2CHAR:
            case Opcode.INT2SHORT:
                /* stack: op1 -> %eax */
                code.popES (R_eax);
                break;
            case Opcode.FNEG:
            case Opcode.F2D:
            case Opcode.F2I:
            case Opcode.F2L:
                /* stack: op1  -> %ST(0) */
                code.FpopES ();
                break;
            case Opcode.LNEG:
            case Opcode.L2I:
            case Opcode.L2F:
            case Opcode.L2D:
                /* stack: op1.w1 op1.w2  -> %l2 */
                code.LpopES (R_edx, R_eax);
                break;
            case Opcode.DNEG:
            case Opcode.D2F:
            case Opcode.D2I:
            case Opcode.D2L:
                /* stack: op1.w1 op1.w2  -> ST(0) */
                code.DpopES ();
                break;;
            default:
                throw new InternalError ("Bad opcode in unop." + i);
        }
        /* Emit the code to operate on the results */
        donestore = false;
        switch (i.opcode.code) {
            /* int operands: %eax  -> %eax */
            case Opcode.INEG:
                code.NEG (R_eax);
                break;
            case Opcode.I2L:
                code.CWD ();
                break;
            case Opcode.I2F:
            case Opcode.I2D:
                code.SUB (IMM_8, R_esp);
                code.MOV (R_eax, MR_esp);
                code.FILD (MR_esp);
                code.ADD (IMM_8, R_esp);
                break;
            case Opcode.INT2BYTE:
                code.AND (new Immediate (0xFF, 1, false), R_eax);
                // Now, sign-extend back to an int
                code.PrefixOPSIZE ();
                code.CBW ();
                code.CBW ();
                break;
            case Opcode.INT2CHAR:
                code.AND (new Immediate (0xFFFF), R_eax);
                // Don't sign extend this: char is unsigned
                break;
            case Opcode.INT2SHORT:
                code.AND (new Immediate (0xFFFF), R_eax);
                // Now, sign-extend back to an int
                code.CBW ();
                break;
                
            /* long operands: %edx:%eax -> %edx:%eax */
            case Opcode.LNEG:
                code.NEG (R_eax);
                code.ADC (IMM_0, R_edx);
                code.NEG (R_edx);
                break;
            case Opcode.L2I:
                // Don't have to do anything
                break;
            case Opcode.L2F:
            case Opcode.L2D:
                code.PUSH (R_edx);
                code.PUSH (R_eax);
                code.FILD (new MemoryRef (R_esp).setRefSize (8));
                code.ADD (IMM_8, R_esp);
                break;

            /* Float operands: %f2 -> %f0 */
            case Opcode.FNEG:
                code.FCHS ();
                break;
            case Opcode.D2I:
            case Opcode.F2I:
            case Opcode.D2L:
            case Opcode.F2L:
//NaNsup                /* First, let's go hunting for special cases.  See whether
//NaNsup                 * the value is NaN. */
//NaNsup                code.FTST ();
//NaNsup                code.FNSTSW ();
//NaNsup                code.SHR (IMM_8, R_eax);
//NaNsup                code.AND (new Immediate (0x45), "%al");
//NaNsup                code.CMP (new Immediate (0x45), "%al");
//NaNsup                code.Jccn (Intel86.CND_ne, IMM_0);
//NaNsup                boffs = code.nextByteOffs ();
//NaNsup                /* Is a NaN.  Result is should be zero. */
//NaNsup                code.XOR (R_eax, R_eax);
//NaNsup                if ((Opcode.D2L == i.opcode.code) ||
//NaNsup                    (Opcode.F2L == i.opcode.code)) {
//NaNsup                    code.XOR (R_edx, R_edx);
//NaNsup                }
//NaNsup                code.JMPn (IMM_0);
//NaNsup                boffs2 = code.nextByteOffs ();
//NaNsup                code.PatchNearJump (boffs, (boffs2 - boffs));

                /* Yes, we really do reset the FPU control word every time
                 * we do a cast.  So do gcc-generated casts to ints. */
                code.SUB (new Immediate (12), R_esp);
                code.FNSTCW (new MemoryRef (IMM_8, R_esp).setRefSize (2));
                code.MOV (new MemoryRef (IMM_8, R_esp), R_edx);
                /* Bits 12 and 11 of the 16-bit control word are the rounding
                 * control field.  Normally 00 (round-to-nearest), we want
                 * it to be 11 (round-to-zero).   GCC wipes out the other
                 * flags in that byte, so we'll presume that's OK to do. */
                /* Note that, for foo-to-int, we allocate one more word
                 * of stack space than necessary; that eliminates the
                 * need to duplicate this sequence. */
                code.MOV (new Immediate (0x0C), R_dh);
                code.MOV (R_edx, MR_esp);
                code.FLDCW (new MemoryRef (R_esp).setRefSize (2));
                /* This generates the wrong answer for NaN and values above
                 * MAX_VALUE; for those, it stores the integer indefinite
                 * value which is MIN_VALUE.  We'd have to special-case to
                 * fix that. */

                if ((Opcode.F2L == i.opcode.code) ||
                    (Opcode.D2L == i.opcode.code)) {
                    code.FISTP (new MemoryRef (R_esp).setRefSize (8));
                } else {
                    code.FISTP (new MemoryRef (R_esp).setRefSize (4));
                }
                code.FLDCW (new MemoryRef (IMM_8, R_esp).setRefSize (2));
                code.POP (R_eax); // lsw
                code.POP (R_edx); // msw, if long
                code.POP (R_ebx); // throwaway
//NaNsup                // End up here after special-case handling */
//NaNsup                code.PatchNearJump (boffs2, (code.nextByteOffs () - boffs2));

                break;
            case Opcode.F2D:
                /* NOP */
                break;
                
            /* Double operands: %f2 -> %f0 */
            case Opcode.DNEG:
                code.FCHS ();
                break;
                /* D2I: see F2I */
            case Opcode.D2F:
                /* NOP */
                break;
                /* D2L: see F2L */
                
            default:
                throw new InternalError ("Unop code " + i.opcode + " not supported in JIT");
        }
        /* Store the result back on the execution stack, unless we did it
         * already (e.g., for float-to-int conversions) */
        if (! donestore) {
            if (opdtype.equals ("i")) {
                /* stack: %l0 -> val */
                code.pushES (R_eax);
            } else if (opdtype.equals ("f")) {
                /* stack: %f0 -> val */
                code.FpushES ();
            } else if (opdtype.equals ("xl")) {
                /* stack: %l0 -> val.w1 val.w2 */
                code.LpushES (R_edx, R_eax);
            } else if (opdtype.equals ("xd")) {
                /* stack: %f0 -> val.w1 val.w2 */
                code.DpushES ();
            } else {
                throw new InternalError ("Bad type in unop.");
            }
        }
        return;
    }

    /** Emit code for a binary operation
      * @param i instruction for codegen
      */
    private void
    EmitBinOp (Instr i)
    {
        String opdtype;         // Type of operands of instruction

        opdtype = i.opcode.push;
        /* Load the operands into their registers.  Fortunately, no
         * binary operators are cast operators, so the output and input
         * types are the same.  Um, except for long shifts. */
        if (opdtype.equals ("i")) {
            /* stack: op1 op2  -> %eax %ecx */
            code.popES (R_ecx);
            code.popES (R_eax);
        } else if (opdtype.equals ("f")) {
            /* stack: op1 op2  -> ST(0) ST(1) */
            code.FpopES ();
            code.FpopES ();
        } else if (opdtype.equals ("xl")) {
            if ((Opcode.LSHL == i.opcode.code) ||
                (Opcode.LSHR == i.opcode.code) ||
                (Opcode.LUSHR == i.opcode.code)) {
                /* stack: op1.w1 op1.w2 op2 -> %o0 %o2 */
                /* We're going to call a function to do these, so pop
                 * right into the outgoing args. */
                code.popES (R_ecx);
                code.LpopES (R_edx, R_eax);
            } else {
                /* stack: op1.w1 op1.w2 op2.w1 op2.w2  -> %l2 %l4 */
                code.LpopES (R_ebx, R_ecx);
                code.LpopES (R_edx, R_eax);
            }
        } else if (opdtype.equals ("xd")) {
            /* stack: op1.w1 op1.w2 op2.w1 op2.w2  -> ST(0) ST(1) */
            code.DpopES ();
            code.DpopES ();
        } else {
            throw new InternalError ("Bad type in binop.");
        }
        /* Emit the code to operate on the results */
        switch (i.opcode.code) {
            /* int operands: %eax op %ecx -> %eax */
            case Opcode.IADD:
                code.ADD (R_ecx, R_eax);
                break;
            case Opcode.ISUB:
                code.NEG (R_ecx);
                code.ADD (R_ecx, R_eax);
                break;
            case Opcode.IMUL:
                code.IMUL (R_ecx);
                break;
            case Opcode.IREM:
                code.CWD ();
                /* DIV and REM generate the wrong answer for MIN_VALUE/-1,
                 * which is unrepresentable.  In fact, on Linux, this
                 * throws an FPE.  We'd have to special-case that. */
                code.IDIV (R_ecx);
                code.MOV (R_edx, R_eax);
                break;
            case Opcode.IDIV:
                code.CWD ();
                code.IDIV (R_ecx);
                break;
            case Opcode.IAND:
                code.AND (R_ecx, R_eax);
                break;
            case Opcode.IOR:
                code.OR (R_ecx, R_eax);
                break;
            case Opcode.IXOR:
                code.XOR (R_ecx, R_eax);
                break;
            case Opcode.ISHL:
                code.SHL (R_cl, R_eax);
                break;
            case Opcode.ISHR:
                code.SAR (R_cl, R_eax);
                break;
            case Opcode.IUSHR:
                code.SHR (R_cl, R_eax);
                break;
                
            /* long operands: %edx:%eax op %ebx:%ecx -> %edx:%eax */
            case Opcode.LADD:
                code.ADD (R_ecx, R_eax);
                code.ADC (R_ebx, R_edx);
                break;
            case Opcode.LSUB:
                code.SUB (R_ecx, R_eax);
                code.SBB (R_ebx, R_edx);
                break;
            case Opcode.LMUL:
            case Opcode.LREM:
            case Opcode.LDIV:
                /* Everybody else does this with a function call; let's
                 * do it that way too. */
                code.PUSH (R_ebx); 
                code.PUSH (R_ecx); 
                code.PUSH (R_edx); 
                code.PUSH (R_eax); 
                code.reserveCode (CodeBlock.brACALL, i, null,
                                  getFuncAddr ((Opcode.LREM == i.opcode.code) ? FID_longrem :
                                               (Opcode.LDIV == i.opcode.code) ? FID_longdiv :
                                               FID_longmul));
                code.ADD (IMM_16, R_esp);
                break;
            case Opcode.LAND:
                code.AND (R_ecx, R_eax);
                code.AND (R_ebx, R_edx);
                break;
            case Opcode.LOR:
                code.OR (R_ecx, R_eax);
                code.OR (R_ebx, R_edx);
                break;
            case Opcode.LXOR:
                code.XOR (R_ecx, R_eax);
                code.XOR (R_ebx, R_edx);
                break;
            case Opcode.LSHL:
            case Opcode.LSHR:
            case Opcode.LUSHR:
                /* Already have op1 and op2 into %o0, %o1, %o2, so put in
                 * the operator type, and call the function. */
                code.PUSH (new Immediate (i.opcode.code));
                code.PUSH (R_ecx);
                code.PUSH (R_edx);
                code.PUSH (R_eax);
                code.reserveCode (CodeBlock.brACALL, i, null, FA_longshift);
                code.ADD (IMM_16, R_esp);
                break;

                /* Float operands: %f2 op %f3 -> %f0 */
            case Opcode.DADD:
            case Opcode.FADD:
                code.FADDP (R_ST1);
                break;
            case Opcode.DSUB:
            case Opcode.FSUB:
                code.FSUBRP (R_ST1);
                break;
            case Opcode.DMUL:
            case Opcode.FMUL:
                code.FMULP (R_ST1);
                break;
            case Opcode.DDIV:
            case Opcode.FDIV:
                /*!! UNFINISHED -- check for divbyzero !!*/
                code.FDIVRP (R_ST1);
                break;
            case Opcode.DREM:
            case Opcode.FREM:
                /*!! UNFINISHED -- is this correct? !!*/
                /* Convert from single to double precision, and call
                 * the remdr function in toba */
                code.SUB (IMM_16, R_esp);
                code.FSTP (new MemoryRef (R_esp).setRefSize (8));
                code.FSTP (new MemoryRef (IMM_8, R_esp).setRefSize (8));
                code.reserveCode (CodeBlock.brACALL, i, null, FA_remdr);
                code.ADD (IMM_16, R_esp);
                break;

            /* Double operands: same as single prec */

            default:
                throw new InternalError ("Binop code " + i.opcode + " not supported in JIT");
        }
        /* Store the result back on the execution stack */
        if (opdtype.equals ("i")) {
            /* stack: %l0 -> val */
            code.pushES (R_eax);
        } else if (opdtype.equals ("f")) {
            /* stack: %f0 -> val */
            code.FpushES ();
        } else if (opdtype.equals ("xl")) {
            /* stack: %l0 -> val.w1 val.w2 */
            code.LpushES (R_edx, R_eax);
        } else if (opdtype.equals ("xd")) {
            /* stack: %f0 -> val.w1 val.w2 */
            code.DpushES ();
        } else {
            throw new InternalError ("Bad type in binop.");
        }
        return;
    }

    /** Assuming we just got back from a call to the given method, push
      * the return value onto the evaluation stack.
      * @param mr MethodRef of called method (FieldRef if interface method)
      */
    private void
    EmitRetvalStore (FieldRef mr)
    {
        String s = mr.signature;
        switch (s.charAt (s.indexOf (')') + 1)) {
            case Field.FT_byte:
            case Field.FT_char:
            case Field.FT_int:
            case Field.FT_object:
            case Field.FT_short:
            case Field.FT_boolean:
            case Field.FT_array:
                code.pushES (R_eax);
                break;
            case Field.FT_float:
                code.FpushES ();
                break;
            case Field.FT_long:
                code.LpushES (R_edx, R_eax);
                break;
            case Field.FT_double:
                code.DpushES ();
                break;
            case Field.FT_void:
                break;
            default:
                throw new InternalError ("WTF in " + s + " from " + mr);
        }
        return;
    }

    /** Load the pointer to the C class for type into register
      * @param i instruction inducing the load
      * @param cr ClassRef to type we're looking for; not necessarily resolved
      * @param getArray If nonzero, want the array-of-type instead of base type
      * @param reg Register pointer should go into
      */
    private void
    loadClassPointer (Instr i,  // Instruction inducing load
                      ClassRef cr, // Reference to class
                      int getArray, // Get array, or base type?
                      Register reg) // Name of target register
    {
        int cp;                 // Integer representation of pointer
        int arank;
        
        /* We have here the name of a primitive or reference type.
         * We need to get the pointer to the struct class that defines
         * it. */
        arank = 0;
        while (Field.FT_array == cr.name.charAt(arank)) {
            arank++;
        }
        cp = 0;
        switch (cr.name.charAt (arank)) {
            case Field.FT_byte:
                cp = (int) getNPprimclass (Opcode.T_BYTE, getArray);
                break;
            case Field.FT_char:
                cp = (int) getNPprimclass (Opcode.T_CHAR, getArray);
                break;
            case Field.FT_double:
                cp = (int) getNPprimclass (Opcode.T_DOUBLE, getArray);
                break;
            case Field.FT_float:
                cp = (int) getNPprimclass (Opcode.T_FLOAT, getArray);
                break;
            case Field.FT_int:
                cp = (int) getNPprimclass (Opcode.T_INT, getArray);
                break;
            case Field.FT_long:
                cp = (int) getNPprimclass (Opcode.T_LONG, getArray);
                break;
            case Field.FT_short:
                cp = (int) getNPprimclass (Opcode.T_SHORT, getArray);
                break;
            case Field.FT_boolean:
                cp = (int) getNPprimclass (Opcode.T_BOOLEAN, getArray);
                break;
            default:
                /* Something not a primitive class.  We should just be able
                 * to load the native class.  We'd better not want an
                 * array version of it, though. */
                if (0 != getArray) {
                    throw new InternalError ("Don't support loadClassPointer of array non-primitives");
                }
                code.reserveCode (CodeBlock.brLOADNatCl, i, reg, cr);
                cp = 0;
                break;
        }
        /* If haven't already gotten the class address into reg,
         * put it there */
        if (0 != cp) {
            code.MOV (new Immediate (cp), reg);
        }
        return;
    }

    /** Take a value of a particular type out of memory and push it onto
      * the evaluation stack.
      * @param areg Register containing memory address of value; _not_ %eax
      * @param tychar Encoded type of object at address
      */
    private void
    pushFromMemory (Register areg,
                    char tychar)
    {
        if (areg.equals (R_eax)) {
            throw new InternalError ("can't use %eax as address reg in popIntoMemory");
        }
/* code.freeReg (R_eax); */
        /* Load the whosit at areg onto the evaluation stack.  If the value
         * is less than one int, extend to an int, with or without sign, as
         * appropriate. */
        switch (tychar) {
            default:
                throw new InternalError ("invalid pushFromMemory type " + tychar);
            case Field.FT_void:
                throw new InternalError ("invalid pushFromMemory void data.");
            case Field.FT_boolean:
                code.XOR (R_eax, R_eax);
                code.MOV (new MemoryRef (areg).setRefSize (1), R_al);
                code.pushES (R_eax);
                break;
            case Field.FT_byte:
                code.XOR (R_eax, R_eax);
                code.MOV (new MemoryRef (areg).setRefSize (1), R_al);
                code.PrefixOPSIZE ();
                code.CBW ();
                code.CBW ();
                code.pushES (R_eax);
                break;
            case Field.FT_char:
                code.XOR (R_eax, R_eax);
                code.PrefixOPSIZE ();
                code.MOV (new MemoryRef (areg), R_eax);
                code.pushES (R_eax);
                break;
            case Field.FT_short:
                code.XOR (R_eax, R_eax);
                code.PrefixOPSIZE ();
                code.MOV (new MemoryRef (areg).setRefSize (2), R_eax);
                code.CBW ();
                code.pushES (R_eax);
                break;
            case Field.FT_float:
            case Field.FT_int:
            case Field.FT_object:
            case Field.FT_array:
                code.MOV (new MemoryRef (areg), R_eax);
                code.pushES (R_eax);
                break;
            case Field.FT_double:
            case Field.FT_long:
                code.MOV (new MemoryRef (IMM_4, areg), R_eax);
                code.pushES (R_eax); // msw
                code.MOV (new MemoryRef (areg), R_eax);
                code.pushES (R_eax); // lsw
                break;
        }
        return;
    }

    /** Take a value of a particular type off the stack and store it into
      * memory.
      * @param areg Register containing memory address of value; _not_ %eax
      * @param tychar Encoded type of object to be stored at address
      */
    private void
    popIntoMemory (Register areg,
                   char tychar)
    {
        if (areg.equals (R_eax)) {
            throw new InternalError ("can't use %eax as address reg in popIntoMemory");
        }
        /* Load the whosit at areg onto the evaluation stack.  If the value
         * is less than one int, extend to an int, with or without sign, as
         * appropriate. */
        code.popES (R_eax);
        switch (tychar) {
            default:
                throw new InternalError ("invalid popIntoMemory type " + tychar);
            case Field.FT_void:
                throw new InternalError ("invalid popIntoMemory void data.");
            case Field.FT_boolean:
            case Field.FT_byte:
                code.MOV (R_al, new MemoryRef (areg).setRefSize (1));
                break;
            case Field.FT_char:
            case Field.FT_short:
                code.PrefixOPSIZE ();
                code.MOV (R_eax, new MemoryRef (areg));
                break;
            case Field.FT_float:
            case Field.FT_int:
            case Field.FT_object:
            case Field.FT_array:
                code.MOV (R_eax, new MemoryRef (areg));
                break;
            case Field.FT_double:
            case Field.FT_long:
                code.MOV (R_eax, new MemoryRef (areg)); // lsw
                code.popES (R_eax);
                code.MOV (R_eax, new MemoryRef (IMM_4, areg)); // msw
                break;
        }
        return;
    }
    
    /* %ebx has been initialized to an object reference.  Return one or zero
     * in %eax depending on whether the object can be cast to the provided
     * class. */
    private void
    EmitCkInstance (Instr i,
                    ClassRef cr)
    {
        int iv;
        
/* code.freeReg (R_eax); */

        /* If the target type is Object, the cast always succeeds, whether
         * the object is of non-array or array class. */
        if (cr.name.equals ("java.lang.Object")) {
            code.MOV (IMM_1, R_eax);
            return;
        }

/* code.freeReg (); // all of them
 */
        /* Get a pointer to the C class of the object into %o1. */
        code.MOV (MR_ebx, R_esi);
        
        if (Field.FT_array != cr.name.charAt(0)) {
            /* Non array objects: if going to an interface, %esi must implement
             * it; if going to a class, %esi must be a subclass of it.  We don't
             * know yet whether this is a class or an interface, so have to
             * make the decision at runtime. */
            code.reserveCode (CodeBlock.brLOADNatCl, i, R_edi, cr);
            code.MOV (new MemoryRef (IO_class_flags, R_edi), R_eax);
            code.TEST (new Immediate (ClassRT.IS_INTERFACE), R_eax);
            code.Jccn (Intel86.CND_nz, IMM_0);
            int bo_isiface = code.nextByteOffs ();
            /* Is not an interface: we're OK iff o2 is a super class of %esi. */
            code.MOV (new MemoryRef (IO_class_nsupers, R_esi), R_ecx);
            code.MOV (new MemoryRef (IO_class_nsupers, R_edi), R_edx);
            code.SUB (R_edx, R_ecx);
            code.Jccn (Intel86.CND_l, IMM_0);
            int bo_fail1 = code.nextByteOffs ();
            /* OK, %esi->nsupers >= o2->nsupers.  See if the superclass up
             * that high is right.
             * %esi->supers[%esi->nsupers-%edi->nsupers] == o2 */
            code.MOV (new MemoryRef (IO_class_supers, R_esi), R_esi);
            code.MOV (new MemoryRef (null, R_esi, 4, R_ecx, 4), R_ecx);
            code.CMP (R_ecx, R_edi);
            /* If not equal, jump to the failure point */
            code.Jccn (Intel86.CND_ne, IMM_0);
            int bo_fail2 = code.nextByteOffs ();
            /* Are equal: cast is OK. */
            code.MOV (IMM_1, R_eax);
            code.JMPn (IMM_0);
            int bo_exit1 = code.nextByteOffs ();

            /* OK, here on out it's an interface.  Just call instanceof. */
            code.PatchNearJump (bo_isiface, (code.nextByteOffs() - bo_isiface));

            /* We already have %ebx as the object ref, %edi as the target
             * class pointer.  Rearrange to meet the parameter requirements
             * of instanceof(Object,Class,ArrayDim). */
            code.PUSH (IMM_0);
            code.PUSH (R_edi);
            code.PUSH (R_ebx);
            code.reserveCode (CodeBlock.brACALL, i, null, FA_instanceof);
            code.ADD (new Immediate (3*4), R_esp);

            /* Jump to exit */
            code.JMPn (IMM_0);
            int bo_exit2 = code.nextByteOffs ();
            
            /* Fail: backpatch all fails, and clear the return value */
            code.PatchNearJump (bo_fail1, (code.nextByteOffs() - bo_fail1));
            code.PatchNearJump (bo_fail2, (code.nextByteOffs() - bo_fail2));
            code.XOR (R_eax, R_eax);

            /* Exit: backpatch all exits */
            code.PatchNearJump (bo_exit1, (code.nextByteOffs() - bo_exit1));
            code.PatchNearJump (bo_exit2, (code.nextByteOffs() - bo_exit2));
            
            return;
        }

        if ((Field.FT_array != cr.name.charAt(1)) &&
            (Field.FT_object != cr.name.charAt(1))) {
            /* Array of primitive object: class has to be array of that
             * primitive object.  Load the pointer to the appropriate class,
             * hiding inside the acl_Foo object. */
            loadClassPointer (i, cr, 1, R_edi);
            /* Presume this will work, to simplify control flow */
            code.MOV (IMM_1, R_eax);
            /* See if classes match */
            code.CMP (R_esi, R_edi);
            code.Jccn (Intel86.CND_e, IMM_0);
            int bo_exit = code.nextByteOffs ();
            /* Nope, set to fail. */
            code.XOR (R_eax, R_eax);
            /* Here's where we go out. */
            code.PatchNearJump (bo_exit, (code.nextByteOffs() - bo_exit));
            
        }
        /* General array of object.  Count up the array depth,
         * and call instanceof checking against the base class of the
         * target class. */
        int n = 0;
        while (Field.FT_array == cr.name.charAt(n)) {
            ++n;
        }
        if (Field.FT_object == cr.name.charAt(n)) {
            /* Problem: loadClassPointer can't get the base class, because
             * classes haven't been resolved yet.  So just call as 0, and have
             * instanceof do the walk down the array chain. */
            /* !!TOFIX!! We really need to be able to get ClassRefs that
             * will be resolved, when we only have a string name. */
            n = 0;
        }

        /* Already have object reference in %ebx.  Put class pointer into
         * %edi, presuming this loadClassPointer function will go down to
         * the base object.  Put array rank into %edi.  Call instanceof. */
        code.PUSH (new Immediate (n));
        loadClassPointer (i, cr, 0, R_eax);
        code.PUSH (R_eax);
        code.PUSH (R_ebx);
        code.reserveCode (CodeBlock.brACALL, i, null, FA_instanceof);
        code.ADD (new Immediate (3*4), R_esp);
    }

    /** Add the code for a JVM instruction to the code cache
      * @param i the instruction to generate code for
      * @param m the method that i appears in
      */
    private void
    EmitCode (Method m,         // Method we're in
              int idx)          // Index of instruction to work with
    {
        Instr i;                // Instruction we're working with
        Opcode opc;             // Opcode for instruction
        int lvi;                // Local variable index
        MethodRef mr;           // MethodRef for operand
        VariableRef vr;         // VariableRef for operand
        FieldRef fr;            // FieldRef for operand
        Constant cn;            // Constant for operand
        Class c;                // Class for m
        Field f;                // Field for m in c
        int aw;                 // Number of argwords
        int ab;                 // Number of arg bytes
        long adr;               // Generic address value
        String opdtype;         // Type of operand
        int iv;                 // Intermediate int value
        long lv;                // Intermediate long value
        ClassRef cr;            // Class reference value
        char tychar;            // Type character, from Field.FT_*
        int boffs;              // Branch offset, for local backpatching
        int boffs2;             // Another branch offset, for local backpatching
        int boffs3;             // Another branch offset, for local backpatching
        BackpatchInfo bpi;      // Backpatch info structure created

        i = m.instrs [idx];
//        System.out.println (i.toString());

        /* Mark where code related to this instruction starts. */
        if (idx >= code.instrToByteOffs.length) {
            throw new InternalError ("EmitCode: idx " + idx + " but iTBO length " + code.instrToByteOffs.length +
                                        " with instr len " + m.instrs.length);
        }
        code.instrToByteOffs [idx] = code.nextByteOffs ();

        /* Tell the low-level generator where the evaluation stack
         * is at right now.  For the most part, this will be either the same
         * as the previous instruction, or zero at the top of a basic block,
         * but in the presence of trinary operators it can be non-empty at
         * the start of a basic block.  We have to assume that the evaluation
         * stack is in a check-pointed state then. */
//        int oesd = code.getEStackDepth ();
//        int nesd = i.before.length ();
//        if ((oesd != nesd) && (0 != nesd) && (Opcode.POP != i.opcode.code)) {
//            System.out.println ("In " + m.cl.name + "." + m.fl.name + " from:\n" + m.instrs[idx-1] + "\nset estack from " + code.getEStackDepth () + " to " + i.before.length () + " before:\n" + i);
//        }
        code.setEStackTop (i.before.length());

        /* If we're doing exception handling, we need to update the pc
         * variable so we can tell where the exception was raised. */
        if (0 < m.handlers.length) {
            code.MOV (new Immediate (i.pc), excOheadAddr (ARLV_pc));
        }

        /* If instrumentation is enabled, increment the counter for this
         * instruction. */
        if (null != instrcounts) {
            code.INC (new MemoryRef (new Immediate ((int) (icaddr + 4 * i.opcode.code)), null));
        }

        /* We can often deal with a bunch of instructions at once, so
         * we switch on the opcode kind, rather than the exact opcode. */
        opc = i.opcode;
        switch (opc.kind) {
            case Opcode.CONST: /* Tconst_#, aconst_null, bipush, sipush:  _ => _, val */
                opdtype = opc.push;
                if ('x' == opdtype.charAt (0)) {
                    /* Two-word constant.  Either a long or a double. */
                    if ('d' == opdtype.charAt (1)) {
                        lv = Double.doubleToLongBits ((double)(opc.var + i.val));
                    } else {
                        lv = (long) (opc.var + i.val);
                    }
                    /* push MSW, LSW */
                    code.pushES (new Immediate ((int) (lv >>> 32)));
                    code.pushES (new Immediate ((int) (lv & 0xFFFFFFFF)));
                } else {
                    /* One-word constant.  Either floating point or integral */
                    if ('f' == opdtype.charAt (0)) {
                        iv = Float.floatToIntBits ((float)(opc.var + i.val));
                    } else {
                        iv = (int) (opc.var + i.val);
                    }
                    code.pushES (new Immediate (iv));
                }
                break;
            case Opcode.LDC: /* ldc, ldc_w, ldc2_w: _ => _, val */
                cn = i.con;
                /* Load the constants through immediates; at the moment,
                 * every constant can be interpreted as immediates, even
                 * floating point, so we don't need a data area. */
                switch (cn.tag) {
                    case Constant.INTEGER:
                    case Constant.FLOAT:
                        /* Integer values can be loaded directly. */
                        if (Constant.FLOAT == cn.tag) {
                            iv = Float.floatToIntBits (((Float)cn.value).floatValue());
                        } else {
                            iv = ((Integer)cn.value).intValue();
                        }
                        code.pushES (new Immediate (iv));
                        break;
                    case Constant.STRING:
                        /* Strings (i.e., references to java.lang.string)
                         * don't need to be stored in a data area, but we
                         * do need to convert from the reference to an
                         * integral value. */
                        iv = (int) CodeGen.getNativeObjectAddr ((Object)cn.value);
                        code.pushES (new Immediate (iv));
                        break;
                    case Constant.LONG:
                    case Constant.DOUBLE:
                        /* Long values can be loaded directly. */
                        if (Constant.DOUBLE == cn.tag) {
                            lv = Double.doubleToLongBits (((Double)cn.value).doubleValue());
                        } else {
                            lv = ((Long)cn.value).longValue();
                        }
                        /* push MSW, LSW */
                        code.pushES (new Immediate ((int) (lv >>> 32)));
                        code.pushES (new Immediate ((int) (lv & 0xFFFFFFFF)));
                        break;
                }
                break;
            case Opcode.LOAD: /* [ilfda]load{,_[0123]}: _ => _, val */
                /* It appears that Toba will guarantee that the val field
                 * of the Opcode will be zero if this is a ?LOAD_x variant,
                 * so we can get the local variable number by adding the
                 * val and var fields. */
                lvi = opc.var + i.val;
                /* Pull the value out of the local variable area and push
                 * it onto the eval stack.  If it's a double-word type with
                 * the high word in lvi, do the high word first, then
                 * the low word. */
/*
  tr = code.findFreeReg (R_eax, R_edx, R_ecx); // in order of preference
  use tr for R_eax in what follows
 */
                if ('x' == opc.push.charAt (0)) {
                    code.MOV (LVOffs (lvi), R_eax);
                    code.pushES (R_eax);
/* tr = code.findFreeReg () */
                    lvi++;
                }
                code.MOV (LVOffs (lvi), R_eax);
                code.pushES (R_eax);
                break;
            case Opcode.STORE: /* [ilfda]store{,_[0123]}: _, val => _ */
                lvi = opc.var + i.val;

                /* Pop the value off the stack and stuff it into the local
                 * variable area.  If this is a double word type, it lives
                 * at the local vars lvi and lvi+1.  However, the high word
                 * is at lvi, and the low at lvi+1, so we've got to pop
                 * into lvi+1 first. */

/* tr = code.popES ();
   code.MOV (tr, LVOffs (lvi));
   */
                if (2 == opc.pop) {
                    code.popES (R_eax);
                    code.MOV (R_eax, LVOffs (lvi+1));
                    code.popES (R_eax);
                    code.MOV (R_eax, LVOffs (lvi));
                } else {
                    code.popES (R_eax);
                    code.MOV (R_eax, LVOffs (lvi));
                }
                break;
            case Opcode.IINC: /* _ => _ */
                if (1 == i.more [0]) {
                    code.INC (LVOffs (i.val));
                } else if (-1 == i.more [0]) {
                    code.DEC (LVOffs (i.val));
                } else {
                    code.ADD (new Immediate (i.more[0]), LVOffs (i.val));
                }
                break;
            case Opcode.GETS: /* getstatic: _ => _, val */
                vr = (VariableRef) i.con.value;

                /*!! UNFINISHED -- check access, existence !!*/
                /* Emit code to call the class initializer if necessary */
                emitClassInit (i, (Object) vr);

                /* Reserve space for code that will load the address of the
                 * variable into %l6.  Address may not known until link time. */
/* code.freeReg (R_ebx); */
                code.reserveCode (CodeBlock.brLOAD, i, R_ebx, vr);

                /* Load the whosis from the %l6 area */
                pushFromMemory (R_ebx, vr.signature.charAt (0));
                break;
            case Opcode.PUTS: /* putstatic: _, val => _ */
                vr = (VariableRef) i.con.value;

                /*!! UNFINISHED -- check access, existence, type !!*/
                /* Emit code to call the class initializer if necessary */
                emitClassInit (i, (Object) vr);

                /* Reserve space for code that will load the address of the
                 * variable into %l6.  Address may not known until link time. */
                code.reserveCode (CodeBlock.brLOAD, i, R_ebx, vr);

                /* Store the whosis into the %l6 area */
                popIntoMemory (R_ebx, vr.signature.charAt (0));
                break;
            case Opcode.GETF: /* getfield: _, ref => _, val */
                vr = (VariableRef) i.con.value;

                /* Verify that the instance object is not null. */
                checkObjectRef (0, R_ebx, i);
                /* Make like we popped it instead of just peeked */
                code.tossES (1);

                /* %ebx is now a pointer to an instance structure.  First field
                 * of the instance structure is a pointer to the C class of
                 * the object.  128 bytes into that is the pointer to the
                 * array of instance variable specs (struct vt_generics). */
//!! REQUIRE: 128 == offsetof (struct class, ivars)
//!! REQUIRE: 0 == offsetof (struct vt_generic, offset)
                code.MOV (MR_ebx, R_esi);
                code.MOV (new MemoryRef (new Immediate (128), R_esi), R_esi);

                /* Now: what we're interested in is the n'th element in the
                 * array of vt_generic structures which follows the class structure
                 * that's pointed to by %esi.  Unfortunately, we don't know
                 * what n is yet.  Load that into %eax at link time. */
                code.reserveCode (CodeBlock.brFIELDLOAD, i, R_eax, vr);

                /* Now access the offset field of the n'th vt_generic in the
                 * array that starts at %esi; the offset field is the first
                 * field in the structure.  We add that to the address of
                 * the instance variable to get the address of the field. */
//!! REQUIRE: 36 == sizeof (struct vt_generic)
                code.MOV (R_eax, R_ecx);
                code.SHL (new Immediate (3), R_eax); // multiply by 8
                code.ADD (R_ecx, R_eax); // add one: multiply by 9
                // scale by 4: 4*9=36
                code.ADD (new MemoryRef (null, R_esi, 4, R_eax, 4), R_ebx);

                /* Push from memory. */
                pushFromMemory (R_ebx, vr.signature.charAt (0));
                
                break;
            case Opcode.PUTF: /* putfield: _, obj, val => _ */
                vr = (VariableRef) i.con.value;

                /* Verify that the instance object is not null.  The object
                 * is n words down the stack, where n is the size of the value
                 * to store. */
                if ((Field.FT_long == vr.signature.charAt(0)) ||
                    (Field.FT_double == vr.signature.charAt(0))) {
                    checkObjectRef (2, R_ebx, i);
                } else {
                    checkObjectRef (1, R_ebx, i);
                }

                /* %ebx is now a pointer to an instance structure.  First field
                 * of the instance structure is a pointer to the C class of
                 * the object.  128 bytes into that is the pointer to the
                 * array of instance variable specs (struct vt_generics). */
//!! REQUIRE: 128 == offsetof (struct class, ivars)
//!! REQUIRE: 0 == offsetof (struct vt_generic, offset)
                code.MOV (MR_ebx, R_esi);
                code.MOV (new MemoryRef (new Immediate (128), R_esi), R_esi);

                /* Now: what we're interested in is the n'th element in the
                 * array of vt_generic structures which follows the class structure
                 * that's pointed to by %esi.  Unfortunately, we don't know
                 * what n is yet.  Load that into %eax at link time. */
                code.reserveCode (CodeBlock.brFIELDLOAD, i, R_eax, vr);

                /* Now access the offset field of the n'th vt_generic in the
                 * array that starts at %esi; the offset field is the first
                 * field in the structure.  We add that to the address of
                 * the instance variable to get the address of the field. */
//!! REQUIRE: 36 == sizeof (struct vt_generic)
                code.MOV (R_eax, R_ecx);
                code.SHL (new Immediate (3), R_eax); // multiply by 8
                code.ADD (R_ecx, R_eax); // add one: multiply by 9
                // scale by 4: 4*9=36
                code.ADD (new MemoryRef (null, R_esi, 4, R_eax, 4), R_ebx);

                /* Pop result into memory */
                popIntoMemory (R_ebx, vr.signature.charAt (0));
                /* Throw away the object ref we don't need any more */
                code.tossES (1);

                break;
            case Opcode.NEW: /* new: _ => _, obj */
                /* Backpatch load struct class reference into %eax */
                cr = (ClassRef) i.con.value;
                code.reserveCode (CodeBlock.brLOADNatCl, i, R_eax, cr);
                /* Now, with C class structure, call the routine that allocates
                 * an instance method */
                code.PUSH (R_eax);
                code.reserveCode (CodeBlock.brACALL, i, null, FA_new);
                code.ADD (IMM_4, R_esp);
                
                /* Push the instance reference onto the stack */
                code.pushES (R_eax);
                break;
            case Opcode.ACAST: /* checkcast: _, obj => _, obj */
                /* Look at the top element, without popping it. */
                code.peekES (0, R_ebx);
                /* If it's null, we're OK. */
                code.TEST (R_ebx, R_ebx);
                code.Jccn (Intel86.CND_z, IMM_0);
                boffs = code.nextByteOffs ();

                /* Otherwise, see if it can be cast to the required type */
                EmitCkInstance (i, (ClassRef)i.con.value);
                /* If %o0 is zero, throw a ClassCastException, with the
                 * object instance as parameter. */
                code.TEST (R_eax, R_eax);
                code.Jccn (Intel86.CND_nz, IMM_0);
                boffs2 = code.nextByteOffs ();
                code.PUSH (R_ebx);
                code.reserveCode (CodeBlock.brACALL, i, null, FA_throwCCE);
                code.UNIMP (0);
                code.PatchNearJump (boffs, (code.nextByteOffs() - boffs));
                code.PatchNearJump (boffs2, (code.nextByteOffs() - boffs2));
                break;
            case Opcode.INSTC: /* instanceof: _, obj => _, val */
                /* Pop the object off the stack; instanceof consumes the ref */
                code.popES (R_eax);
                /* If it's null, we're going to push 0. */
                code.TEST (R_eax, R_eax);
                code.Jccn (Intel86.CND_z, IMM_0);
                boffs = code.nextByteOffs ();
                /* Otherwise, see if it can be cast to the required type */
                code.MOV (R_eax, R_ebx);
                EmitCkInstance (i, (ClassRef)i.con.value);
                /* Here %eax is 0 or 1 relative to whether the cast is legal. */
                code.PatchNearJump (boffs, (code.nextByteOffs() - boffs));
                /* Push the result. */
                code.pushES (R_eax);
                break;
            case Opcode.NEWA: /* newarray: _, cnt => _, aref */
                /* Allocate a new array.  Element type is the val parameter;
                 * we need the core class for that type. */
/* code.freeReg (R_eax, R_ebx); */
                iv = (int) getNPprimclass (i.val, 0);
                code.MOV (new Immediate (iv), R_ebx);
                /* Pop array size */
                code.popES (R_eax);
                /* Verify it's non-negative */
                code.TEST (R_eax, R_eax);
                code.Jccn (Intel86.CND_ge, IMM_0);
                boffs = code.nextByteOffs ();
                /* Call throwNegativeArraySizeException (size) */
                code.PUSH (R_eax);
                code.reserveCode (CodeBlock.brACALL, i, null, FA_throwNASE);
                code.UNIMP (0);
                
                /* Call the anewarray function */
                code.PatchNearJump (boffs, (code.nextByteOffs() - boffs));
                code.PUSH (R_eax);
                code.PUSH (R_ebx);
                code.reserveCode (CodeBlock.brACALL, i, null, FA_anewarray);
                code.ADD (IMM_8, R_esp);

                /* Store the reference onto the stack */
                code.pushES (R_eax);
                break;
            case Opcode.ANEWA: /* anewarray: _, cnt => _, aref */
                cr = (ClassRef) i.con.value;
                iv = 0;
                while ('[' == cr.name.charAt(iv)) {
                    ++iv;
                }
                if (0 == iv) {
                    /* Not a multidimensional array: get the reference and go. */
                    code.reserveCode (CodeBlock.brLOADNatCl, i, R_ebx, cr);
                    code.popES (R_eax);
                    /* Verify it's non-negative */
                    code.TEST (R_eax, R_eax);
                    code.Jccn (Intel86.CND_ge, IMM_0);
                    boffs = code.nextByteOffs ();
                    /* Call throwNegativeArraySizeException(size) */
                    code.PUSH (R_eax);
                    code.reserveCode (CodeBlock.brACALL, i, null, FA_throwNASE);
                    code.UNIMP (0);
                    code.PatchNearJump (boffs, (code.nextByteOffs() - boffs));
                    code.PUSH (R_eax);
                    code.PUSH (R_ebx);
                    code.reserveCode (CodeBlock.brACALL, i, null, FA_anewarray);
                    code.ADD (IMM_8, R_esp);
                } else {
                    int cp;
                    
                    loadClassPointer (i, cr, 0, R_ebx);
                    /* iv: Number of dimensions of array is second arg */
                    /* 1: Number of dimensions we're going to allocate is third */
                    /* Count for top axis is fourth */
                    code.popES (R_eax);
                    /* Verify it's non-negative */
                    code.TEST (R_eax, R_eax);
                    code.Jccn (Intel86.CND_ge, IMM_0);
                    boffs = code.nextByteOffs ();
                    /* Call throwNegativeArraySizeException (sz) */
                    code.PUSH (R_eax);
                    code.reserveCode (CodeBlock.brACALL, i, null, FA_throwNASE);
                    code.UNIMP (0);

                    code.PatchNearJump (boffs, (code.nextByteOffs() - boffs));
                    code.PUSH (R_eax);
                    code.PUSH (IMM_1);
                    code.PUSH (new Immediate (iv));
                    code.PUSH (R_ebx);
                    code.reserveCode (CodeBlock.brACALL, i, null, FA_vmnewarray);
                    code.ADD (IMM_16, R_esp);
                }
                /* Store value onto stack */
                code.pushES (R_eax);
                break;
            case Opcode.MNEWA: /* multianewarray: _, cnt1 [, cnt...] => _, aref */
                /* Based on the element type, determine the number of
                 * dimensions in the whole array */
                cr = (ClassRef) i.con.value;
                iv = 0;
                while ('[' == cr.name.charAt(iv)) {
                    ++iv;
                }

                /* The underlying vmnewarray function wants the class
                 * of the ultimate base type; get a reference to that. */
                cr = ClassRef.bySignature (cr.name.substring (iv));

                /* Push the dimension values into the call stack */
                setCallArgs (i.more[0]);

                /* Push number of specs that we pushed: ndim */
                code.PUSH (new Immediate (i.more [0]));

                /* Push the rank of the array we're going to create.
                 * Note that we're passing the ultimate element class
                 * so the arraydim incorporates any dimensions that
                 * were present in the base class the user wanted to
                 * add ndim levels above.  Make sense?  Look at
                 * alloc.c/vmnewarray for details. */
                code.PUSH (new Immediate (iv));

                /* Push class ref */
                loadClassPointer (i, cr, 0, R_eax);
                code.PUSH (R_eax);

                /* Call the thing that builds the array */
                code.reserveCode (CodeBlock.brACALL, i, null, FA_vmnewarray);
                code.ADD (new Immediate (4 * (3+i.more[0])), R_esp);

                /* Save the reference */
                code.pushES (R_eax);
                break;
                
            case Opcode.ALEN: /* arraylength: _, aref => _, val */
                /* Make sure the array reference is non-null */
                checkObjectRef (0, R_ebx, i);
                /* Throw away the array ref we don't need any more */
                code.tossES (1);

                /* Read the array length from the array structure, and put
                 * it into %eax. */
                code.MOV (new MemoryRef (IO_barray_length, R_ebx), R_eax);
                /* Save the result */
                code.pushES (R_eax);
                break;
                
            case Opcode.ARRAYLOAD: /* Taload: _, aref, idx => _, val */
                code.popES (R_eax); // idx
                code.popES (R_ebx); // array ref
                
                /* Determine the per-element size and the type identifier
                 * from the opcode value.  We cheat and only use a subset of
                 * types when the representation size and sign-extension handling
                 * are the same. */
                switch (opc.code) {
                    case Opcode.FALOAD:
                    case Opcode.AALOAD:
                    case Opcode.IALOAD:
                        iv = 4;
                        tychar = Field.FT_int;
                        break;
                    case Opcode.DALOAD:
                    case Opcode.LALOAD:
                        iv = 8;
                        tychar = Field.FT_long;
                        break;
                    case Opcode.BALOAD:
                        iv = 1;
                        tychar = Field.FT_byte;
                        break;
                    case Opcode.CALOAD:
                        iv = 2;
                        tychar = Field.FT_char;
                        break;
                    case Opcode.SALOAD:
                        iv = 2;
                        tychar = Field.FT_short;
                        break;
                    default:
                        throw new InternalError ("Invalid ARRAYLOAD opcode " + opc);
                }

                /* Given an array structure at %ebx, and an index at %ecx, make
                 * sure the index is legitimate, and compute the address of the
                 * desired element.  The element address is returned in %ebx. */
                emitEltOffsetCode (iv, i);
                        
                pushFromMemory (R_ebx, tychar);
                break;
                
            case Opcode.ARRAYSTORE: /* Tastore: _ aref, idx, val => _ */

                /* Determine the per-element size and the type identifier
                 * from the opcode value.  We cheat and only use a subset of
                 * types when the representation size and sign-extension handling
                 * are the same. */
                switch (opc.code) {
                    case Opcode.FASTOR:
                    case Opcode.AASTOR:
                    case Opcode.IASTOR:
                        iv = 4;
                        tychar = Field.FT_int;
                        break;
                    case Opcode.DASTOR:
                    case Opcode.LASTOR:
                        iv = 8;
                        tychar = Field.FT_long;
                        break;
                    case Opcode.BASTOR:
                        iv = 1;
                        tychar = Field.FT_byte;
                        break;
                    case Opcode.CASTOR:
                        iv = 2;
                        tychar = Field.FT_char;
                        break;
                    case Opcode.SASTOR:
                        iv = 2;
                        tychar = Field.FT_short;
                        break;
                    default:
                        throw new InternalError ("Invalid ARRAYSTORE opcode " + opc);
                }
                /* We pop either 3 words or 4, depending on length of the
                 * value.  Pull off the stack the array reference, and the
                 * array index.  Call the routine that checks bounds and
                 * gets the element offset.  Note: this can throw an
                 * exception. */
                code.peekES (opc.pop - 2, R_eax); // Index value
                code.peekES (opc.pop - 1, R_ebx); // Array reference value

                /* Figure out where the value goes */
                emitEltOffsetCode (iv, i);

                /* Store the value from ES into the desired location */
                popIntoMemory (R_ebx, tychar);

                /* Pop off the reference and index */
                code.tossES (2);
                break;
                
            case Opcode.NOP: /* nop, pop, pop2, breakpoint */
                code.tossES (opc.pop);
                break;
            case Opcode.DUP: /* dup */
                /* w1 -> w1, w1 */
                code.peekES (0, R_eax);
                code.pushES (R_eax);
                break;
            case Opcode.DUPX1: /* dup_x1 */
                /* w2, w1 -> w1, w2, w1 */
                code.popES (R_eax); // w1
                code.popES (R_ecx); // w2
                code.pushES (R_eax);
                code.pushES (R_ecx);
                code.pushES (R_eax);
                break;
            case Opcode.DUPX2: /* dup_x2 */
                /* w3, w2, w1 -> w1, w3, w2, w1 */
                code.popES (R_eax); // w1
                code.popES (R_ecx); // w2
                code.popES (R_edx); // w3
                code.pushES (R_eax);
                code.pushES (R_edx);
                code.pushES (R_ecx);
                code.pushES (R_eax);
                break;
            case Opcode.DUP2: /* dup2 */
                /* w2, w1 -> w2, w1, w2, w1 */
                code.peekES (1, R_eax); // w2
                code.pushES (R_eax);
                code.peekES (1, R_eax); // w1
                code.pushES (R_eax);
                break;
            case Opcode.D2X1: /* dup2_x1 */
                /* w3, w2, w1 -> w2, w1, w3, w2, w1 */
                code.popES (R_eax); // w1
                code.popES (R_ecx); // w2
                code.popES (R_edx); // w3
                code.pushES (R_ecx);
                code.pushES (R_eax);
                code.pushES (R_edx);
                code.pushES (R_ecx);
                code.pushES (R_eax);
                break;
            case Opcode.D2X2: /* dup2_x2 */
                /* w4, w3, w2, w1 -> w2, w1, w4, w3, w2, w1 */
                code.popES (R_eax); // w1
                code.popES (R_ecx); // w2
                code.popES (R_edx); // w3
                code.popES (R_ebx); // w4
                code.pushES (R_ecx);
                code.pushES (R_eax);
                code.pushES (R_ebx);
                code.pushES (R_edx);
                code.pushES (R_ecx);
                code.pushES (R_eax);
                break;
            case Opcode.SWAP: /* swap */
                /* w2, w1 -> w1, w2 */
                code.popES (R_eax); // w1
                code.popES (R_ecx); // w2
                code.pushES (R_eax);
                code.pushES (R_ecx);
                break;
            case Opcode.UNOP: /* Tneg, i2T */
            case Opcode.FTOI: /* [fd]2[il] */
                EmitUnOp (i);
                break;
            case Opcode.DIVOP:
            case Opcode.BINOP:
            case Opcode.FREM:
            case Opcode.SHIFT:
                /* Do this elsewhere, for cleanliness; it's opcode-specific */
                EmitBinOp (i);
                break;
            case Opcode.CMP: /* Tcmp */
                if (Opcode.LCMP == opc.code) {
                    code.LpopES (R_ebx, R_ecx);  // val2
                    code.LpopES (R_edx, R_eax);  // val1
                    /* Cheating again. */
                    code.PUSH (R_ebx); // val2
                    code.PUSH (R_ecx);
                    code.PUSH (R_edx); // val1
                    code.PUSH (R_eax);
                    code.reserveCode (CodeBlock.brACALL, i, null, FA_longcmp);
                    code.ADD (IMM_16, R_esp);
                    code.pushES (R_eax);
                } else {
                    if ((Opcode.FCMPL == opc.code) || (Opcode.FCMPG == opc.code)) {
                        code.FpopES (); // ST(1)
                        code.FpopES (); // ST(0)
                    } else {
                        code.DpopES ();
                        code.DpopES ();
                    }
                    code.FUCOMPP ();
                    code.FNSTSW ();
                    code.SHR (IMM_8, R_eax);
                    // mov $1, %ebx
                    code.XOR (R_ebx, R_ebx);
                    code.INC (R_bl);
                    /* The flags in %al will be:
                     * 00 : st(0) > source
                     * 01 : st(0) < source
                     * 40 : st(0) == source
                     * 45 : st(0) ? source
                     * Although bits 10111010 are unspecified.  So, we mask them
                     * out.  This allows us to use a slightly different sequence
                     * than the archmanual suggests in sec 7.5.6.1, so we can
                     * test for unordered part-way through (simplifying the
                     * result assignment).
                     */
                    code.AND (new Immediate (0x45), R_al);
                    code.Jccn (Intel86.CND_z, IMM_0);
                    boffs = code.nextByteOffs ();

                    /* If we're doing fcmpg, we want a result of 1 for unordered.
                     * Test for that now. */
                    if ((Opcode.FCMPG == opc.code) ||
                        (Opcode.DCMPG == opc.code)) {
                        code.TEST (new Immediate (0x04), R_al);
                        code.Jccn (Intel86.CND_nz, IMM_0);
                        boffs2 = code.nextByteOffs ();
                    } else {
                        boffs2 = -1;
                    }
                    code.DEC (R_bl);
                    /* Poss: G: eq or lt ; L: eq or lt or uo.  Get exactly eq. */
                    code.CMP (new Immediate (0x40), R_al);
                    code.Jccn (Intel86.CND_e, IMM_0);
                    boffs3 = code.nextByteOffs ();
                    /* Poss: G: lt ; L: lt or uo.  Go with -1.  Dec
                     * the 32bit version so we get 0xffffffff instead of 0xff. */
                    code.DEC (R_ebx);
                    code.PatchNearJump (boffs, (code.nextByteOffs () - boffs));
                    if (0 <= boffs2) {
                        code.PatchNearJump (boffs2, (code.nextByteOffs () - boffs2));
                    }
                    code.PatchNearJump (boffs3, (code.nextByteOffs () - boffs3));
                    code.pushES (R_ebx);
                }
                break;
            case Opcode.IFZRO:
            case Opcode.IFCMP:
                EmitIfCmp (i, m);
                break;
            case Opcode.TBLSW: /* tableswitch */
                /* Compute the number of entries in the table. */
                iv = 1 + i.more [2] - i.more [1];
                /* Allocate a block of memory to hold the target locations. */
                adr = allocUncolMemory (iv*4);
                /* Add a backpatch to initialize the table; this doesn't
                 * actually modify the code, but does make sure things are
                 * set up once the resolution has completed. */
                code.reserveCode (CodeBlock.brINITSwitchTable, i, null, adr);
                /* Pop the key from the stack */
                code.popES (R_ebx);
                /* Subtract the bottom range value */
                code.SUB (new Immediate (i.more[1]), R_ebx);
                /* If key was below bottom range value, jump to default */
                code.Jccn (Intel86.CND_l, IMM_0);
                boffs = code.nextByteOffs ();
                /* If key is above top range value minus the bottom range value,
                 * jump to default */
                code.CMP (new Immediate (i.more [2] - i.more[1]), R_ebx);
                code.Jccn (Intel86.CND_g, IMM_0);
                boffs2 = code.nextByteOffs ();
                /* OK, read the target from the table and jump there. */
                code.JMP (new MemoryRef (new Immediate ((int)adr), null, 4, R_ebx, 4));
                /* DEFAULT: Here's where we go if the key was out of range */
                code.PatchNearJump (boffs, (code.nextByteOffs() - boffs));
                code.PatchNearJump (boffs2, (code.nextByteOffs() - boffs2));

                /* Set the default target to the location of the code for the
                 * given instruction. */
                code.reserveCode (CodeBlock.brLOADCodeAbs, i, R_eax, i.more [0]);
                code.JMP (R_eax);
                break;
            case Opcode.LKPSW: /* lookupswitch */
                /* Allocate a block of memory to hold the target locations. */
                adr = allocUncolMemory (2 * 4 * i.more [1]);
                /* Add a backpatch to initialize the table; this doesn't
                 * actually modify the code, but does make sure things are
                 * set up once the resolution has completed. */
                code.reserveCode (CodeBlock.brINITSwitchTable, i, null, adr);
                /* Get the key value */
                code.popES (R_eax);
                /* Get the table size */
                code.MOV (new Immediate (i.more [1]), R_ecx);
                /* Set the condition codes */
                code.OR (R_ecx, R_ecx);
                /* Jump to bottom of loop */
                code.JMPn (IMM_0);
                boffs = code.nextByteOffs ();
                boffs3 = code.nextByteOffs (); // top:
                /* Read the table value, and compare against the key */
                code.CMP (new MemoryRef (new Immediate ((int) adr - 8), null, 8, R_ecx, 4), R_eax);
                /* If key matchs, jump to success area */
                code.Jccn (Intel86.CND_e, IMM_0);
                boffs2 = code.nextByteOffs ();

                /* No match; point to next table element, decrement count
                 * of elements remaining, and loop back if any left */
                code.DEC (R_ecx);

                /* Here's where we jump to on entry. */
                code.PatchNearJump (boffs, (code.nextByteOffs() - boffs));

                /* If more left, jump to top of loop. Have to do this with
                 * a patch, even though we know where the top is, because
                 * the offset depends on where we are _after_ the
                 * instruction is generated. */
                code.Jccn (Intel86.CND_g, IMM_0);
                code.PatchNearJump (code.nextByteOffs(), (boffs3 - code.nextByteOffs ()));

                /* No more left: load up default and go there */
                code.reserveCode (CodeBlock.brLOADCodeAbs, i, R_eax, i.more [0]);
                code.JMP (R_eax);

                /* Found a match: load up value and go there */
                code.PatchNearJump (boffs2, (code.nextByteOffs() - boffs2));
                code.JMP (new MemoryRef (new Immediate ((int) adr - 8 + 4), null, 8, R_ecx, 4));
                break;
            case Opcode.GOTO: /* goto, goto_w */
                checkBackJump (i, i.pc, i.val);
                code.reserveCode (CodeBlock.brJUMP, i, null, m.instrs [m.pcmap [i.val]].label);
                break;
            case Opcode.JSR: /* jsr, jsr_w */
                /* Push the return address onto the evaluation stack.  I.e.,
                 * figure the address of the instruction following this
                 * sequence, and use that.  */

                /* Load the absolute address into %eax */
                bpi = code.reserveCode (CodeBlock.brLOADCodeRel, i, R_eax, 0);
                /* Push it onto the eval stack.  Length of this sequence
                 * depends on how big the eval stack is right now. */
                code.pushES (R_eax);
                /* Jump to the subroutine */
                checkBackJump (i, i.pc, i.val);
                code.reserveCode (CodeBlock.brJUMP, i, null, m.instrs [m.pcmap [i.val]].label);

                /* Now that we know how long the previous sequence is,
                 * update the offset added for coderel to be the number of
                 * bytes past entry, so we end up jumping back to here. */
                bpi.setLongVal ((long) code.nextByteOffs());

                break;
            case Opcode.RET: /* ret */
                /* ret: pull return address out of a local variable and jump
                 * to it. */
                code.JMP (LVOffs (i.val));
                break;
            case Opcode.IVIRT: /* invokevirtual */
                /* Retrieve the number of argwords used in this instruction */
                aw = i.argwords();

                /* Verify that the instance object is not null */
                checkObjectRef (aw, R_ebx, i);

                /* %ebx is now a pointer to an instance structure.  First field
                 * of the instance structure is a pointer to the C class of
                 * the object.  Immediately following the C class structure is
                 * the array of mt_generic structures which define the instance
                 * method table.  That's 140 bytes past the start of the C class. */
                code.MOV (MR_ebx, R_esi);

                /* Now: what we're interested in is the n'th element in the
                 * array of mt_generic structures pointed to by esi.
                 * Unfortunately, we don't know what n is yet.  Load that
                 * into %o1 at link time. */
                mr = (MethodRef) i.con.value;
                code.reserveCode (CodeBlock.brFIELDLOAD, i, R_eax, mr);

                /* Now access the f field of the n'th mt_generic in the
                 * array that starts at %esi+140.  mt_generic structs are
                 * 36 bytes wide, and the f field is 4 bytes into a struct,
                 * so we use a displacement of 140+4, multiply the index
                 * by 9, and use a scale factor of 8. */
//!! REQUIRE: 40 == sizeof (struct mt_generic)
//!! REQUIRE: 140 == offsetof (struct cl_generic, M)
//!! REQUIRE: 4 == offsetof (struct mt_generic, f)
                code.MOV (R_eax, R_ebx);// save copy
                code.SHL (new Immediate (3), R_eax); // multiply by 8
                code.ADD (R_ebx, R_eax); // add one: multiply by 9
                code.ADD (R_ebx, R_eax); // add two: multiply by 10
                code.MOV (new MemoryRef (new Immediate (140 + 4), R_esi, 4, R_eax, 4), R_eax);

                /* Load up the outgoing argument registers, including the
                 * instance reference.  We have to know the signature of
                 * the called method by this point.  Fortunately, we
                 * can get that from the stack state.  The instance object
                 * needs to be included as an arg.  DO NOT TRASH %eax. */
                ab = setCallArgs ("a" + Instr.argstring (mr.signature));

                /* Register-indirect call */
                code.CALL (R_eax);
                code.ADD (new Immediate (ab), R_esp);

                /* Store whatever we got back. */
                EmitRetvalStore (mr);
                break;
            case Opcode.INONV: /* invokenonvirtual == invokespecial */
                mr = (MethodRef) i.con.value;
                /* Retrieve the number of argwords used in this instruction */
                aw = i.argwords();
                /* Verify that the instance object is not null */
                checkObjectRef (aw, R_eax, i);
                /* Load up the outgoing argument registers, including
                 * the object reference. */
                ab = setCallArgs ("a" + Instr.argstring (mr.signature));

                /* Reserve space for the call instruction: the method may
                 * not yet be resolved or jit'd yet.  However, we really
                 * have to have a reference to it. */
                mr = (MethodRef) i.con.value;
                if (null == mr) {
                    throw new InternalError ("INONV of non-existent methodref");
                }
                code.reserveCode (CodeBlock.brCALL, i, null, mr);
                code.ADD (new Immediate (ab), R_esp);
                /* invokenonvirtual _does_ have a return value when its
                 * invoking a private routine. */
                EmitRetvalStore (mr);
                break;
            case Opcode.ISTAT: /* invokestatic */
                mr = (MethodRef) i.con.value;
                aw = i.argwords ();
                ab = setCallArgs (Instr.argstring (mr.signature));
                /* Reserve space for the call instruction: note that method
                 * may not yet be resolved. */
                if (null == mr) {
                    throw new InternalError ("ISTAT of non-existent methodref");
                }
                code.reserveCode (CodeBlock.brCALL, i, null, mr);
                code.ADD (new Immediate (ab), R_esp);
                EmitRetvalStore (mr);
                break;
            case Opcode.IINTR: /* invokeinterface */
                fr = (FieldRef) i.con.value;
                aw = i.argwords ();
                /* Verify that the instance object is not null.  Note that for
                 * invokeinterface, aw includes the instance reference. */
                checkObjectRef (aw-1, R_eax, i);

                /* Call findinterface to determine where we're supposed to
                 * jump. */
                iv = Names.hashinterface (fr.name, fr.signature);
                code.PUSH (new Immediate (iv));
                code.PUSH (R_eax);
                code.reserveCode (CodeBlock.brACALL, i, null, FA_findinterface);
                code.ADD (IMM_8, R_esp);
                
                /* Load up the outgoing argument registers, including
                 * the object reference. */
                ab = setCallArgs ("a" + Instr.argstring (fr.signature));

                /* findinterface returns a pointer to an mt_generic structure.
                 * From that, read the function pointer we're going to jump
                 * to. */
                code.CALL (new MemoryRef (IO_mtgeneric_f, R_eax));
                code.ADD (new Immediate (ab), R_esp);
                EmitRetvalStore (fr);
                break;
                
            case Opcode.RETV: /* Treturn */
                /* Load the word from the top of the execution stack and
                 * put it into the outgoing parameter register. */
                if (Opcode.DRETURN == opc.code) {
                    code.DpopES ();
                } else if (Opcode.FRETURN == opc.code) {
                    code.FpopES ();
                } else if (Opcode.LRETURN == opc.code) {
                    code.LpopES (R_edx, R_eax);
                } else {
                    code.popES (R_eax);
                }
                code.reserveCode (CodeBlock.brJUMP, i, null, -1);
                break;
            case Opcode.RETRN: /* return */
                /* Jump to the epilog code.  We don't necessarily know where
                 * that is yet, so use "label" -1 to denote it. */
                code.reserveCode (CodeBlock.brJUMP, i, null, -1);
                break;
            case Opcode.THROW: /* athrow */
                /* Pop the target object off the stack, */
                code.popES (R_eax);

                /* Let's simplify life and just call athrow, even if we have
                 * a local handler set we can jump to.  athrow will check
                 * for a null throwable, and replace it with NPE. */
                code.PUSH (R_eax);
                code.reserveCode (CodeBlock.brACALL, i, null, FA_athrow);
                /* Under no circumstances should we reach here. */
                code.UNIMP (167);
                break;
            case Opcode.MENTR: /* monitorenter */
            case Opcode.MEXIT: /* monitorexit */
                if (0 >= m.handlers.length) {
                    throw new InternalError ("monitorenter/exit encountered with no handlers available");
                }
                /* monitor{enter,exit} (topofstack, tdata, pc+1, &pc); */
                code.LEA (excOheadAddr (ARLV_pc), R_eax);
                code.PUSH (R_eax);
                code.PUSH (new Immediate (1+i.pc));
                code.PUSH (excOheadAddr (ARLV_tdata));
                code.popES (R_eax);
                code.PUSH (R_eax);
                code.reserveCode (CodeBlock.brACALL, i, null,
                                  getFuncAddr ((Opcode.MENTR == opc.code)
                                                  ? FID_monitorenter
                                                  : FID_monitorexit));
                code.ADD (IMM_16, R_esp);
                break;
            case Opcode.WIDE: /* wide */
                throw new InternalError ("JIT: Opcode WIDE encountered, should have been handled already");
            default:
                throw new InternalError ("Opcode " + opc + " not supported in JIT");
        }
        return;
    }

    /** Emit the function epilog---return value must be loaded already.
      * We expect an treturn to have been compiled into a load of the return
      * value and a jump to the epilog.
      * @param m the method we're generating code for
      */
    private void
    Epilogue (Method m)
    {
        /* Mark the location of the epilog, so jumps to it know where
         * to go. */
        code.setEpilogOffs ();
        /* If we have handler support, restore the tdata jump buffer.
         * DO NOT SCREW WITH ANYWHERE RETURN VALUES MAY HAVE BEEN PUT. */
        if (0 < m.handlers.length) {
            // tdata->jmpbuf = oldbuf;
            code.MOV (excOheadAddr (ARLV_oldbuf), R_ecx);
            code.MOV (excOheadAddr (ARLV_tdata), R_ebx);
            code.MOV (R_ecx, new MemoryRef (IO_mythread_jmpbuf, R_ebx));
        }

        /* Pop callee-saved registers */
        code.POP (R_ebx);
        code.POP (R_edi);
        code.POP (R_esi);
         
        /* Restore %ebp/%esp, and return. */
        code.LEAVE ();
        code.RET ();
    }

    private void
    EmitExceptHandle (Method m)
    {
        int boffs_setjmp;       // Local backpatch info for setjmp conditional
        int boffs_findhandler;  // Local backpatch info for findhandler conditional
        
        /* Allocate memory in uncollected memory (because the address
         * will not exist outside a code constant) to hold the exception
         * table.  The values in the table will be filled in during
         * code resolution. */
        code.handlerTableAddress = allocUncolMemory (m.handlers.length * (4 + 2 + 2 + 4));

        // tdata = mythread ();
        if (4 != excOheadSize [ARLV_tdata]) {
            throw new InternalError ("incorrect size for tdata var");
        }
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_mythread);
        /* No parameters, no popping */
        code.MOV (R_eax, excOheadAddr (ARLV_tdata));
        code.MOV (R_eax, R_esi);

        // oldbuf = tdata->jmpbuf
        if (4 != excOheadSize [ARLV_oldbuf]) {
            throw new InternalError ("incorrect size for oldbuf var");
        }
        code.MOV (new MemoryRef (IO_mythread_jmpbuf, R_esi), R_eax);
        code.MOV (R_eax, excOheadAddr (ARLV_oldbuf));

        // if (setjmp (newbuf)) {
        if (useBinarySetjmp) {
            /* setjmp takes two args */
            code.PUSH (immZero8b);
        }
        code.LEA (excOheadAddr (ARLV_newbuf), R_eax);
        code.PUSH (R_eax);
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_setjmp);
        if (useBinarySetjmp) {
            code.ADD (IMM_8, R_esp);
        } else {
            code.ADD (IMM_4, R_esp);
        }
        code.TEST (R_eax, R_eax);
        code.Jccn (Intel86.CND_z, IMM_0);
        boffs_setjmp = code.nextByteOffs ();

        //    sthread_got_exception ();
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_sthread_got_exc);
        /* No parameters, no popping */

        // CATCH: here's where locally-generated exceptions would jump to,
        //  if we still caught local exceptions locally. 

        //    tgt = findhandler (htable, hlen, tdata->exception, pc);
        code.PUSH (excOheadAddr (ARLV_pc));
        code.MOV (excOheadAddr (ARLV_tdata), R_ebx);
        code.MOV (new MemoryRef (IO_mythread_exception, R_ebx), R_edi);
        code.PUSH (R_edi);
        code.PUSH (new Immediate (m.handlers.length));
        code.PUSH (new Immediate ((int)code.handlerTableAddress));
        
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_findhandler);
        code.ADD (IMM_16, R_esp);

        //    if (-1 == tgt) {
        code.CMP (new Immediate (-1), R_eax);
        code.Jccn (Intel86.CND_ne, IMM_0);
        boffs_findhandler = code.nextByteOffs ();
        //       longjmp (oldbuf, 1)
        code.PUSH (IMM_1);
        code.PUSH (excOheadAddr (ARLV_oldbuf));
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_longjmp);
        code.UNIMP (0);
        //    }
        code.PatchNearJump (boffs_findhandler, (code.nextByteOffs() - boffs_findhandler));

        /* JVM says exceptions start with a clean stack.  Inform the low
         * level assembler, so we can push the right exception object
         * onto the JVM stack. */
        code.setEStackTop (0);

        // tdata->jmpbuf = newbuf
        code.MOV (excOheadAddr (ARLV_tdata), R_esi);
        code.LEA (excOheadAddr (ARLV_newbuf), R_ebx);
        code.MOV (R_ebx, new MemoryRef (IO_mythread_jmpbuf, R_esi));

        //    push exception object (saved in %edi from call to findhandler)
        code.pushES (R_edi);
        //    goto tgt;
        code.JMP (R_eax);
        // }
        code.PatchNearJump (boffs_setjmp, (code.nextByteOffs() - boffs_setjmp));
        // tdata->jmpbuf = newbuf;
        /* tdata still in %esi from entry */
        code.LEA (excOheadAddr (ARLV_newbuf), R_eax);
        code.MOV (R_eax, new MemoryRef (IO_mythread_jmpbuf, R_esi));

        return;
    }

    private void
    EmitSyncWrapper (Method m)
    {
        int aw;                 // Number of argument words in call to m
        int boffs_setjmp;       // Local backpatch info for setjmp conditional
        int boffs_mhtest;       // Local backpatch info for monitorheld conditional
        int boffs_call;         // Local backpatch info for call to wrapped fn
        char rtype;             // Type of return value
        int i;                  // General index

        /* Start with a function prolog.  We'll need the standard exception-type
         * overhead variables.  We'll also have to extend the stack size by
         * enough to hold extra arguments that didn't fit in the caller's
         * registers, for when we call the function we're wrapping. */
        aw = Instr.argwords (m.fl.signature);
        if (0 == (m.fl.access & ClassData.ACC_STATIC)) {
            /* Add one for the instance reference */
            aw++;
        }
        overheadSize = excOheadTotal;

        /* Allocate the AR.  Do one that doesn't have all the JVM local vars
         * and eval stack. */
        Prologue (m, 0);

        // If this is an instance method, we have to save the object reference
        // so we can unlock it in the case of an exception exit.
        if (0 == (m.fl.access & ClassData.ACC_STATIC)) {
            code.MOV (new MemoryRef (IMM_8, R_ebp), R_eax);
            code.MOV (R_eax, excOheadAddr (ARLV_insref));
        }

        // monitorheld = 0
        code.MOV (IMM_0, excOheadAddr (ARLV_monitorheld));
        
        // tdata = mythread ();
        if (4 != excOheadSize [ARLV_tdata]) {
            throw new InternalError ("incorrect size for tdata var");
        }
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_mythread);
        /* No parameters, no popping */
        code.MOV (R_eax, excOheadAddr (ARLV_tdata));

        // oldbuf = tdata->jmpbuf
        if (4 != excOheadSize [ARLV_oldbuf]) {
            throw new InternalError ("incorrect size for oldbuf var");
        }
        code.MOV (new MemoryRef (IO_mythread_jmpbuf, R_eax), R_ecx);
        code.MOV (R_ecx, excOheadAddr (ARLV_oldbuf));

        // if (setjmp (newbuf)) {
        if (useBinarySetjmp) {
            /* setjmp takes two args */
            code.PUSH (immZero8b);
        }
        code.LEA (excOheadAddr (ARLV_newbuf), R_eax);
        code.PUSH (R_eax);
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_setjmp);
        if (useBinarySetjmp) {
            code.ADD (IMM_8, R_esp);
        } else {
            code.ADD (IMM_4, R_esp);
        }
        code.TEST (R_eax, R_eax);
        code.Jccn (Intel86.CND_z, IMM_0);
        boffs_setjmp = code.nextByteOffs ();

        //    sthread_got_exception ();
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_sthread_got_exc);
        /* No parameters, no popping */

        //    if (monitorheld) {
        code.MOV (excOheadAddr (ARLV_monitorheld), R_eax);
        code.TEST (R_eax, R_eax);
        code.Jccn (Intel86.CND_z, IMM_0);
        boffs_mhtest = code.nextByteOffs ();

        if (0 != (m.fl.access & ClassData.ACC_STATIC)) {
            // exitclass (&clptr, tdata, 0, &monitor_held);
            code.LEA (excOheadAddr (ARLV_monitorheld), R_eax);
            code.PUSH (R_eax);
            code.PUSH (IMM_0);
            code.PUSH (excOheadAddr (ARLV_tdata));
            code.reserveCode (CodeBlock.brLOADNatCl, (Instr) null, R_eax, m.cl.myRef);
            code.PUSH (R_eax);
            code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_exitclass);
            code.ADD (IMM_16, R_esp);
        } else {
            // monitorexit (instanceref, tdata, 0, &monitor_held);
            code.LEA (excOheadAddr (ARLV_monitorheld), R_eax);
            code.PUSH (R_eax);
            code.PUSH (IMM_0);
            code.PUSH (excOheadAddr (ARLV_tdata));
            code.PUSH (excOheadAddr (ARLV_insref));
            code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_monitorexit);
            code.ADD (IMM_16, R_esp);
        }
        //    }
        code.PatchNearJump (boffs_mhtest, (code.nextByteOffs() - boffs_mhtest));
        //    tdata->jmpbuf = oldbuf;
        code.MOV (excOheadAddr (ARLV_tdata), R_ebx);
        code.MOV (excOheadAddr (ARLV_oldbuf), R_eax);
        code.MOV (R_eax, new MemoryRef (IO_mythread_jmpbuf, R_ebx));
        //    athrow (tdata->exception);
        code.PUSH (new MemoryRef (IO_mythread_exception, R_ebx));
        code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_athrow);
        code.UNIMP (0);
        // }

        code.PatchNearJump (boffs_setjmp, (code.nextByteOffs() - boffs_setjmp));
        // tdata->jmpbuf = newbuf;
        code.MOV (excOheadAddr (ARLV_tdata), R_ebx);
        code.LEA (excOheadAddr (ARLV_newbuf), R_eax);
        code.MOV (R_eax, new MemoryRef (IO_mythread_jmpbuf, R_ebx));

        if (0 != (m.fl.access & ClassData.ACC_STATIC)) {
            // enterclass (&clptr, tdata, 1, &monitor_held);
            code.LEA (excOheadAddr (ARLV_monitorheld), R_eax);
            code.PUSH (R_eax);
            code.PUSH (IMM_1);
            code.PUSH (R_ebx);
            code.reserveCode (CodeBlock.brLOADNatCl, (Instr) null, R_eax, m.cl.myRef);
            code.PUSH (R_eax);
            code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_enterclass);
            code.ADD (IMM_16, R_esp);
        } else {
            // monitorexit (instanceref, tdata, 1, &monitor_held);
            code.LEA (excOheadAddr (ARLV_monitorheld), R_eax);
            code.PUSH (R_eax);
            code.PUSH (IMM_1);
            code.PUSH (R_ebx);
            code.PUSH (excOheadAddr (ARLV_insref));
            code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_monitorenter);
            code.ADD (IMM_16, R_esp);
        }
        // callfn ()
        /* Need to push args from our frame onto the stack.  We could be
         * tricky and use MOVSW, but let's not; the overhead of setting
         * it up could be horrible. */
        for (i = 1; i <= aw; i++) {
            code.PUSH (new MemoryRef (new Immediate (4*(aw - i) + 8), R_ebp));
        }

        /* Reserve space for a call instruction, which we'll generate once
         * we know where the wrapper ends and the real code begins. */
        code.syncwrap_bpi = code.reserveCode (CodeBlock.brACALL, (Instr) null, null, 0L);
        code.ADD (new Immediate (4*aw), R_esp);

        // Save return value over monitor release call
        rtype = m.fl.signature.charAt (m.fl.signature.indexOf (')') + 1);
        switch (rtype) {
            case Field.FT_long:
                code.PUSH (R_edx);
                /*FALLTHRU*/
            case Field.FT_byte:
            case Field.FT_char:
            case Field.FT_int:
            case Field.FT_object:
            case Field.FT_short:
            case Field.FT_boolean:
            case Field.FT_array:
                code.PUSH (R_eax);
                break;
            case Field.FT_float:
            case Field.FT_double:
                code.SUB (IMM_8, R_esp);
                code.FSTP (new MemoryRef (R_esp).setRefSize (8));
                break;
            case Field.FT_void:
                break;
        }

        if (0 != (m.fl.access & ClassData.ACC_STATIC)) {
            // exitclass (&clptr, tdata, 0, &monitor_held);
            code.LEA (excOheadAddr (ARLV_monitorheld), R_eax);
            code.PUSH (R_eax);
            code.PUSH (IMM_0);
            code.PUSH (excOheadAddr (ARLV_tdata));
            code.reserveCode (CodeBlock.brLOADNatCl, (Instr) null, R_eax, m.cl.myRef);
            code.PUSH (R_eax);
            code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_exitclass);
            code.ADD (IMM_16, R_esp);
        } else {
            // monitorexit (instanceref, tdata, 0, &monitor_held);
            code.LEA (excOheadAddr (ARLV_monitorheld), R_eax);
            code.PUSH (R_eax);
            code.PUSH (IMM_0);
            code.PUSH (excOheadAddr (ARLV_tdata));
            code.PUSH (excOheadAddr (ARLV_insref));
            code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_monitorexit);
            code.ADD (IMM_16, R_esp);
        }
        // tdata->jmpbuf = oldbuf;
        code.MOV (excOheadAddr (ARLV_tdata), R_ebx);
        code.MOV (excOheadAddr (ARLV_oldbuf), R_eax);
        code.MOV (R_eax, new MemoryRef (IO_mythread_jmpbuf, R_ebx));
        // Load return value
        switch (rtype) {
            case Field.FT_long:
            case Field.FT_byte:
            case Field.FT_char:
            case Field.FT_int:
            case Field.FT_object:
            case Field.FT_short:
            case Field.FT_boolean:
            case Field.FT_array:
                code.POP (R_eax);
                if (Field.FT_long == rtype) {
                    code.POP (R_edx);
                }
                 break;
             case Field.FT_float:
             case Field.FT_double:
                 code.FLD (new MemoryRef (R_esp).setRefSize (8));
                 code.ADD (IMM_8, R_esp);
                 break;
             case Field.FT_void:
                 break;
        }
        // return
        /* Pop callee-saved registers */
        code.POP (R_ebx);
        code.POP (R_edi);
        code.POP (R_esi);
         
        /* Restore %ebp/%esp, and return. */
        code.LEAVE ();
        code.RET ();
        
        /* We want to backpatch the call to start here.  However, we're
         * still in append mode for code generation, so save the offset
         * we're going to use for the call, and backapatch it when we've
         * fixed the code buffer. */
        code.syncwrap_bpi.setLongVal (code.nextByteOffs ());
// System.err.println ("Syncwrap backpatch for " + m + " is " + code.syncwrap_bpi);

        return;
    }


    protected void
    genCallResolve (Method m)
    {
        byte data [];
        int boffs;

        int resolveOffs = code.nextByteOffs ();
        // eax = &code
        code.MOV (new Immediate ((int) CodeGen.getNativeObjectAddr (code), 4, false), R_eax);
        // cl = code.isResolved
        code.MOV (new MemoryRef (IO_mcode_isresolved, R_eax, 1, null, 1), R_cl);
        code.OR (R_cl, R_cl);
        code.Jccn (Intel86.CND_nz, IMM_0);
        boffs = code.nextByteOffs ();
        // if (! code.isResolved) resolveCode (&code)
        code.PUSH (R_eax);
        BackpatchInfo rAbpi = code.reserveCode (CodeBlock.brACALL, (Instr) null, null, FA_CodeBlock_resolveCode);
        code.ADD (IMM_4, R_esp);
        code.PatchNearJump (boffs, code.nextByteOffs () - boffs);
        // eax = &code
        code.MOV (new Immediate ((int) CodeGen.getNativeObjectAddr (code), 4, false), R_eax);
        // eax = code->mtentry
        code.MOV (new MemoryRef (IO_mcode_mtentry, R_eax, 1, null, 4), R_eax);
        // jmp (code.mtentry)
        code.JMP (R_eax);

        /* Install it once so we have a final buffer (address) for the code */
        code.installCode ();

        /* Backpatch the resolver call, and set up the stub.  Re-install the
         * code so the backpatch takes. */
        code.doBackPatch (rAbpi);
        code.setStubEntry (code.getMethodEntry () + resolveOffs);
        code.installCode ();

        return;
    }
        

    /** Compile just-in-time (sorta) Intel86 code for this method.
      * @param c The class to which the method belongs
      * @param m The method we're generating code for
      * @returns the native function address (should be the MethodCode instance)
      */
    protected MethodCode
    generateCode (Class c,      // Class owning m
                  Method m)     // Method we need code for
    {
        ClassData mcd = m.cl;
        Field mf = m.fl;
        long bTime;
        int boffs;
        
//        System.err.println ("Intel86JIT.generateCode: called on " + m.cl.name + "." + m.fl.name);

        /* Abstract methods don't do anything.  Shouldn't even be here. */
        if (0 != (mf.access & ClassData.ACC_ABSTRACT)) {
            throw new InternalError ("Attempt to generate code for abstract method " + c + "." + m);
        }

        /* Create a new instance of the Intel86 subclass of MethodCode,
         * and assign it to this method.  Store it locally, so we
         * can generate code easily.  Tell the code block what class loader
         * should be used to resolve references. */
        code = (Intel86) m.setMethodCode (new Intel86 (m));
        code.setCodeClassLoader (c.getClassLoader ());

        /* Native methods are a pain.  If they're unsynchronized, just try to
         * figure out their real address (maybe by looking up through dlopen).
         * If you can, set that, resolve it, and return.  If they're synchronized,
         * generate code to do the sync wrapping and call the real method. */
        if (ClassData.ACC_NATIVE == (mf.access & ClassData.ACC_NATIVE)) {

//            System.out.println ("Native handling for " + c + "." + m);
            long nmentry = CodeGen.getNativeSymbolAddress (mf.cname);
            if (0 != (mf.access & ClassData.ACC_SYNCHRONIZED)) {
                EmitSyncWrapper (m);
                if (0 != nmentry) {
                    code.syncwrap_bpi.setLongVal (nmentry);
                    System.out.println ("Sync'd, entry is " + nmentry);
                    code.installCode ();
                    code.resolveCode ();
                }
            } else {
                if (0 != nmentry) {
                    /* If this is not a synchronized method, set the method address
                     * to the real function, mark it resolved (so we don't try to
                     * go through the stub function), and return without actually
                     * generating any new code. */
                    code.setMethodEntry (nmentry);
                    code.setAllNativeCode (true);
                    code.resolveCode ();
                }
            }
            if (! code.getIsResolved ()) {
                /* We don't have the address of the native method yet.  Add
                 * a backpatch that will look up the address during resolution,
                 * then add the standard stub for invoking the resolver. */
                code.reserveCode (CodeBlock.brLOADDynNative, (Instr) null, null, m);
                genCallResolve (m);
//                System.out.println ("Reserving dynnative backpatch; entrypoint " + Long.toHexString (code.getMethodEntry ()));
            }
            return code;
        }

//        System.err.println ("Into code generator for class " + c + " and method " + m);
//        System.err.println ("The method calls itself " + mf.name + "; which in C will be " + mf.cname);
//        System.err.println ("The signature is " + mf.signature);
//        System.err.println ("Max stack is " + m.max_stack + " and max locals is " + m.max_locals);

        bTime = System.currentTimeMillis ();

        /* If this is a synchronized method, we really start with a wrapper
         * function which locks the class or instance, then calls the
         * real method, unlocking on exit or exception. */
        if (0 != (mf.access & ClassData.ACC_SYNCHRONIZED)) {
            EmitSyncWrapper (m);
            /* The real code follows here */
        }


        /* Add in the function prolog, computing required stack data
         * sizes. */
        Prologue (m, -1);

        /* If this is a static function in a class that has an initializer,
         * and this isn't the initializer, call the initializer if necessary. */
        if ((0 != (mf.access & ClassData.ACC_STATIC)) &&
            (! mf.name.equals ("<clinit>")) &&
            (null != mcd.getmethod("<clinit>",false))) {
            emitClassInit ((Instr) null, (Object) mcd.myRef);
        }

        /* Now the exception handler prolog */
        if (0 < m.handlers.length) {
            EmitExceptHandle (m);
        }

        /* And the body */
        for (int i = 0; i < m.instrs.length; i++) {
            try {
                EmitCode (m, i);
            } catch (Exception e) {
                throw new InternalError ("JIT: Caught exception translating " + m + "\n" + m.instrs [i] + ": " + e);
            }
        }

        /* Close everything up */
        Epilogue (m);
        
        /* Now generate the code that calls the resolver on this code */
        genCallResolve (m);

        /* Call installCode once so we assign and initialize the actual
         * address.  The code isn't actually usable until it's been
         * linked. */
        code.installCode ();

        if (code.shouldTimeCodegen) {
            code.compileTime = (int) (System.currentTimeMillis () - bTime);
        }

//        code.dumpHex();

//        System.err.println ("Intel86JIT.generateCode: " + m.cl.name + "." + m.fl.name +
//                               " returned at " + Long.toHexString (code.getMethodEntry()));

        /* Return the MethodCode instance. */
        return code;
    }

};
// Local Variables:
// c-basic-offset: 4
// End:
