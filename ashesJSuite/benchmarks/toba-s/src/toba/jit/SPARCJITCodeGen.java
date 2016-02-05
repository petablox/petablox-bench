/** use just-in-time compilation to generate code for methods
  * @version $Id: SPARCJITCodeGen.java,v 1.7 1999/04/06 03:30:37 pab Exp $
  */

/* This is part of the Just-In-Time compiler for the Toba system. */
package toba.jit;

/* We need the basic Toba runtime data structures, and the classfile
 * structures. */
import toba.runtime.*;
import toba.classfile.*;

class JITCodeGen extends CodeGen {

    /** Initialize the CodeGen class so its generator points to us.
      * This must be done before anybody touches code generation, because
      * the system class loader is going to look at CodeGen.generator,
      * and if it's null will die a quick and painful death. */
    public static void 
    Initialize ()
    {
        JITCodeGen jcg;

        System.err.println ("SPARC JIT code generation has not been updated for a very long time.");
        System.err.println ("Go through SPARCJITCodeGen.java and update all the REQUIRE statements.");
        System.exit (1);

        /* Verify our requirements */
        CodeGen.verifyRequirements ();
        
        /* Set the global code generator to use one of us. */
        CodeGen.setGenerator (jcg = new JITCodeGen ());
//        jcg.InitInstrumentation ();
    }
    /* Chances are, we'll have done this explicitly (since CodeGen.generator
     * can be examined without being an active use of JITCodeGen), but
     * just in case.... */
    static {
        Initialize();
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
        for (i = 0; i < instrcounts.length; i++) {
            if (0 != instrcounts [i]) {
                Opcode opc = Opcode.lookupOpcode (i);
                System.out.println (opc.name + ": " + instrcounts [i]);
            }
        }
    }

    /** Allocate a block of sz bytes in uncollectable memory.
      * @param sz number of bytes we need
      * @returns address of allocated block
      * Toba Hash: _i_qYFS3
      */
    private static native long
    allocUncolMemory (int sz);

    /* Function ID values to name functions.  Must match the defs in
     * runtime/jit_JITCodeGen.c. */
    static final int FID_new = 1;
    static final int FID_anewarray = 2;
    static final int FID_initclass = 3;
    static final int FID_vmnewarray = 4;
    static final int FID_getarraylen = 5;
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

    /** Return some arbitrary function's address
      * @param fid an index naming the function we want
      * @returns address as long
      * Toba hash code:  _i_m3SYh
      */
    static native long
    getFuncAddr (int fid);

    static final int OID_mythread_jmpbuf = 1;
    static final int OID_mythread_exception = 2;
    static final int OID_class_flags = 3;
    static final int OID_class_nsupers = 4;
    static final int OID_class_supers = 5;
    static final int OID_mtgeneric_f = 6;
    /** Return the offset within a structure of a given field
      * @param oid an index naming the structure offset we want
      * @returns offset as int
      * Toba hash code: _i_N1XnB
      */
    static native int
    getFieldOffset (int oid);

    /** Return a pointer to the cl_Foo structure for the primitive type
      * Foo.
      * @param tid Opcode.T_Foo code for type foo
      * @param getArray Return pointer to acl_Foo.C instead of cl_Foo
      * @returns address as long
      * Toba hash code: _ii_QHITB
      */
    static native long
    getNPprimclass (int tid, int getArray);

    SPARC code;                 // Where the code is built up
    int frame_size;             // Size of activation record

    /* To handle exceptions, we need the following local variables:
     *  + struct mythread * tdata;
     *  + void * oldbuf;
     *  + volatile int pc;  // or monitorheld, for syncwrappers
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

    static {
        int offs;
        int i;
        
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
         * at %fp[excOheadOffs[ARLV]]. */
        for (i = 0; i < excOheadOffs.length; i++) {
            excOheadOffs [i] = - (excOheadTotal - excOheadOffs [i]);
        }
    }

    /* This is the overhead size for this code's AR: either 0 or
     * excOheadTotal */
    int overheadSize;

    /** Convert from local variable number to an offset in bytes from the
      * frame pointer.
      * @param lvi The local variable offset; zero starts 4bytes+FPXFSIZ below %fp
      * @returns offset of local variable address */
    private int
    LVOffs (int lvi)
    {
        return - (SPARC.ALUFPUXFERSIZE + overheadSize + 4 * (1 + lvi));
    }

    /** Allocate activation record and preserve parameters.
      * Copies parameters using SPARC calling convention into the local
      * variable stack as well as (for safety, though we don't use it)
      * the standard register dump area.
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

        /* Allocate an activation record.  We start with the minimum frame
         * for a SPARC AR. */
        frame_size = SPARC.MINFRAME;

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
            if (0 < m.handlers.length) {
                overheadSize = excOheadTotal;
            }
            frame_size += overheadSize;

            /* Now add space for the evaluation stack; locals first, followed
             * by evaluation elements */
            frame_size += 4 * (m.max_locals + m.max_stack);

            /* Determine the maximum number of argument words in any callee
             * of this procedure. */
            maxcaw = 0;
            for (i = 0; i < m.instrs.length; i++) {
                if ((aw = m.instrs [i].argwords()) > maxcaw) {
                    maxcaw = aw;
                }
            }
            /* Subtract off 6 for what we can fit in registers.  If no call needs
             * more than 6 registers, set this to zero. */
            maxcaw -= 6;
            if (0 > maxcaw) {
                maxcaw = 0;
            }
            /* Extend frame to handle overflow arguments, right above the
             * register dump area. */
            frame_size += 4 * maxcaw;
//            System.out.println ("Frame size " + frame_size + " covering " + m.max_locals +
//                                " locals, " + m.max_stack + " stack, " + maxcaw + " overflow args");

        }

        /* Round frame size to be double-word aligned. */
        if (4 == (frame_size % 8)) {
            frame_size += 4;
        }
        /* Sanity checks: frame size must be double-word aligned, and
         * must fit in a signed 13-bit immediate (for the version of
         * SAVE we're using) */
        if (0 != (frame_size % 8)) {
            throw new InternalError ("frame size not multiple of 8");
        }
        if (4096 <= frame_size) {
            throw new InternalError ("can't handle frame sizes exceeding 2^12-1");
        }
        
        /* Create a new AR of the right size. */
        code.SAVE ("%sp", -frame_size, "%sp");

        /* Stuff the name of this function in the standard location. */
        i = (int)getStringAddress (m.cl.name + "." + m.fl.name);
        code.SETHI (i, "%o0");
        code.SetLo (i, "%o0");
        code.ST ("%o0", "%fp", excOheadOffs [ARLV_methname]);
//        code.PUSH (excOheadAddr (ARLV_methname));
//        code.reserveCode (CodeBlock.brACALL, m.instrs[0], null, getFuncAddr (FID_puts));
//        code.ADD (new Immediate (2), R_esp);


        /* If we're creating a standard frame for executing Java code, then
         * store the arguments into the local variable arena.  If not,
         * whoever's creating us should take responsibility for preserving
         * arguments. */
        if (0 > ndata) {

            /* Figure out how many arguments we need to save.  Add one
             * for the object reference of instance methods. */
            aw = Instr.argwords (m.fl.signature);
            if (0 == (m.fl.access & ClassData.ACC_STATIC)) {
                aw++;
            }

            for (i = 0; i < aw; i++) {
                if (6 > i) {
                    /* Already in %ii. */
                    code.ST ("%i" + i, "%fp", LVOffs (i));
                } else {
                    /* In caller's activation record.  Copy from there into
                     * local variables. */
                    code.LD ("%fp", SPARC.ARGPUSH + (i-6) * 4, "%o7");
                    code.ST ("%o7", "%fp", LVOffs (i));
                }
            }

            /* Initialize the register we use for the evaluation stack pointer.
             * Not useful for non-standard frames. */
            code.ADD ("%fp", LVOffs (m.max_locals), "%l7");
        }

        return;
    }

    /** Generate code to initialize a class if necessary, leaving the class
      * reference in %o0.
      * @param i the instruction that induced the initialization requirement
      * @param or the reference to the object (FieldRef or ClassRef) that may need to be initialized
      */
    private void
    emitClassInit (Instr i,
                   Object or)
    {
        int boffs;
        
        /* Load the address of the native struct class object that is the
         * basis of the object referred to by fr.  Put it into %o0 so
         * it's ready to be used as a parameter to the initializer. */
        code.reserveCode (CodeBlock.brLOADNatCl, i, "%o0", or);

        /* The first word of the class object is the flag indicating
         * whether it needs to be initialized.  If that's zero, the class
         * has been initialized, and we skip over the call to the
         * initializer.*/
        code.LD ("%o0", 0, "%o7");
        code.CMP ("%o7", 0);
        boffs = code.nextByteOffs ();
        code.BE (0);
        code.NOP ();
        code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_initclass));
        code.NOP ();
        code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
    }

    /** Pop arguments off evaluation stack and put into outgoing SPARC registers.
      * @param na number of argument words to pop
      * @param abase start as if from the abase'th output argument
      */
    private void
    setCallArgs (int na,
                 int abase)
    {
        /* Don't do anything if there are no words to pop */
        if (0 >= na) {
            return;
        }
        /* Copy the values off the evaluation stack into the proper location */
        for (int a = 1; a <= na; a++) {
            int ai;

            /* Get which argument this is in the actual call. */
            ai = abase + (a - 1);
            if (6 > ai) {
                /* First six values go into ALU output registers 0 through 5 */
                code.peekES (na-a, "%o"+ai);
            } else {
                /* Remainder go into the outoing parameter dump area in this
                 * function's AR */
                code.peekES (na-a, "%o7");
                code.ST ("%o7", "%sp", 4*(ai-6) + SPARC.ARGPUSH);
            }
        }
        /* Update the evaluation stack pointer to pop the arguments all
         * at once. */
        code.tossES (na);
        return;
    }

    /** Pull elements off stack and prepare to use them as the first args to
      * a function call. 
      * @param na number of elements to use as arguments
      */
    private void
    setCallArgs (int na)
    {
        setCallArgs (na, 0);
    }

    /** If the source is past the destination, this is a backedge, and we
      * insert a call to some routine that needs to be called regularly.
      * E.g., a thread yield function on a non-preemptive thread system. */
    private void
    checkBackJump (Instr ci,    // Current instruction
                   int src,     // Where we are now (label, addr, ??)
                   int dst)     // Where we're jumping to (label, addr, ??)
    {
        if (src > dst) {
            /* If this is a jump backwards, get the address of the function
             * we call on back edges, and call it if it exists. */
            long bjfn = getFuncAddr (FID_backjumpfn);
            if (0 != bjfn) {
                code.reserveCode (CodeBlock.brACALL, ci, null, bjfn);
            }
        }
        return;
    }

    /** Pull object off stack and make sure it's not a null pointer.
      * After this, the object reference is in treg.
      * @param i how far back down stack to look, zero is top elt
      * @param treg what register to put object reference into
      * @param npeCode indicate what NullPointerException argument to throw
      */
    private void
    checkObjectRef (int i,
                    String treg,
                    Instr ins)
    {
        /* Load the value from the execution stack */
        code.peekES (i, treg);
        /* Compare it to zero */
        code.CMP (treg, 0);
        /* If nonzero, jump over the next two instructions */
        int boffs = code.nextByteOffs ();
        code.BNE (0);
        code.NOP ();            // fill delay slot
        /* Call throwNullPointerException (0) */
        code.MOV (0, "%o0");
        code.reserveCode (CodeBlock.brACALL, ins, "noreg", getFuncAddr (FID_throwNPE));
        code.NOP ();            // fill delay slot
        
        // Here's where we continue
        code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
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
            code.popES ("%l0");
            code.CMP ("%l0", 0);
        } else {
            // Better be IFCMP
            code.popES ("%l1");
            code.popES ("%l0");
            code.CMP ("%l0", "%l1");
        }
        /* Because we're jumping to a JVM offset, which may be in code
         * we haven't built yet, we need to generate a brJUMP-style
         * backpatch.  That's not supported for conditional jumps, so
         * for test X, we do "if !X goto afterjump; jump T; afterjump..." */
        boffs = code.nextByteOffs ();
        switch (i.opcode.code) {
            case Opcode.IF_ICMPEQ:
            case Opcode.IF_ACMPEQ:
            case Opcode.IFNULL:
            case Opcode.IFEQ:
                // Equality test: skip jump if not equal
                code.BNE (0);
                code.NOP ();
                break;
            case Opcode.IF_ICMPNE:
            case Opcode.IF_ACMPNE:
            case Opcode.IFNE:
            case Opcode.IFNONNULL:
                // Inquality test: skip jump if equal
                code.BE (0);
                code.NOP ();
                break;
            case Opcode.IF_ICMPLT:
            case Opcode.IFLT:
                code.BGE (0);
                code.NOP ();
                break;
            case Opcode.IF_ICMPGT:
            case Opcode.IFGT:
                code.BLE (0);
                code.NOP ();
                break;
            case Opcode.IF_ICMPLE:
            case Opcode.IFLE:
                code.BG (0);
                code.NOP ();
                break;
            case Opcode.IF_ICMPGE:
            case Opcode.IFGE:
                code.BL (0);
                code.NOP ();
                break;
        }
//        System.out.println ("Jump to pc " + i.val + " is label " + m.instrs[m.pcmap [i.val]].label);
        checkBackJump (i, i.pc, i.val);
        code.reserveCode (CodeBlock.brJUMP, i, "noreg", m.instrs[m.pcmap [i.val]].label);
        code.NOP ();    // fill delay slot
        /* Continues here if OK */
        code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
    }

    /** Emit code for a unary operation
      * @param i instruction for codegen
      */
    private void
    EmitUnOp (Instr i)
    {
        String opdtype;         // Type of operands of instruction
        boolean donestore;

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
                /* stack: op1 -> %l0 */
                code.popES ("%l0");
                break;
            case Opcode.FNEG:
            case Opcode.F2D:
            case Opcode.F2I:
            case Opcode.F2L:
                /* stack: op1  -> %f2 */
                code.FpopES ("%f2");
                break;
            case Opcode.LNEG:
            case Opcode.L2I:
            case Opcode.L2F:
            case Opcode.L2D:
                /* stack: op1.w1 op1.w2  -> %l2 */
                code.LpopES ("%l2");
                break;
            case Opcode.DNEG:
            case Opcode.D2F:
            case Opcode.D2I:
            case Opcode.D2L:
                /* stack: op1.w1 op1.w2  -> %f2 */
                code.DpopES ("%f2");
                break;;
            default:
                throw new InternalError ("Bad opcode in binop." + i);
        }
        /* Emit the code to operate on the results */
        donestore = false;
        switch (i.opcode.code) {
            /* int operands: %l0  -> %l0 */
            case Opcode.INEG:
                code.SUB ("%g0", "%l0", "%l0");
                break;
            case Opcode.I2L:
                code.MOV ("%l0", "%l1");
                code.SRA ("%l0", 31, "%l0");
                break;
            case Opcode.I2F:
            case Opcode.I2D:
                code.ST ("%l0", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LDF ("%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE), "%f2");
                if (Opcode.I2F == i.opcode.code) {
                    code.FiTOs ("%f2", "%f0");
                } else {
                    code.FiTOd ("%f2", "%f0");
                }
                break;
            case Opcode.INT2BYTE:
                code.ST ("%l0", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LDSB ("%fp", 3 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%l0");
                break;
            case Opcode.INT2CHAR:
                code.ST ("%l0", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LDUH ("%fp", 2 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%l0");
                break;
            case Opcode.INT2SHORT:
                code.ST ("%l0", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LDSH ("%fp", 2 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%l0");
                break;
                
            /* long operands: %l2 -> %l0 */
            case Opcode.LNEG:
                code.SUBcc ("%g0", "%l3", "%l1");
                code.SUBX ("%g0", "%l2", "%l0");
                break;
            case Opcode.L2I:
                code.MOV ("%l3", "%l0");
                break;
            case Opcode.L2F:
            case Opcode.L2D:
                code.MOV ("%l2", "%o0");
                code.MOV ("%l3", "%o1");
                code.reserveCode (CodeBlock.brACALL, i, "noreg",
                                  getFuncAddr ((Opcode.L2F == i.opcode.code) ? FID_long2f : FID_long2d));
                code.NOP ();
                break;

            /* Float operands: %f2 -> %f0 */
            case Opcode.FNEG:
                code.FNEGs ("%f2", "%f0");
                break;
            case Opcode.F2I:
                code.FsTOi ("%f2", "%f0");
                code.FpushES ("%f0");
                donestore = true;
                break;
            case Opcode.F2L:
                code.FsTOd ("%f2", "%f0");
                code.STDF ("%f0", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LD ("%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o0");
                code.LD ("%fp", 4 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o1");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_dtol));
                code.NOP ();
                code.LpushES ("%o0");
                donestore = true;
                break;
            case Opcode.F2D:
                code.FsTOd ("%f2", "%f0");
                break;
                
            /* Double operands: %f2 -> %f0 */
            case Opcode.DNEG:
                code.FNEGs ("%f2", "%f0");
                code.FMOVs ("%f3", "%f1");
                break;
            case Opcode.D2I:
                code.FdTOi ("%f2", "%f0");
                code.FpushES ("%f0");
                donestore = true;
                break;
            case Opcode.D2F:
                code.FdTOs ("%f2", "%f0");
                break;
            case Opcode.D2L:
                code.STDF ("%f2", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LD ("%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o0");
                code.LD ("%fp", 4 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o1");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_dtol));
                code.NOP ();
                code.LpushES ("%o0");
                donestore = true;
                break;
                
            default:
                throw new InternalError ("Unop code " + i.opcode + " not supported in JIT");
        }
        /* Store the result back on the execution stack, unless we did it
         * already (e.g., for float-to-int conversions) */
        if (! donestore) {
            if (opdtype.equals ("i")) {
                /* stack: %l0 -> val */
                code.pushES ("%l0");
            } else if (opdtype.equals ("f")) {
                /* stack: %f0 -> val */
                code.FpushES ("%f0");
            } else if (opdtype.equals ("xl")) {
                /* stack: %l0 -> val.w1 val.w2 */
                code.LpushES ("%l0");
            } else if (opdtype.equals ("xd")) {
                /* stack: %f0 -> val.w1 val.w2 */
                code.DpushES ("%f0");
            } else {
                throw new InternalError ("Bad type in binop.");
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
            /* stack: op1 op2  -> %l0 %l1 */
            code.popES ("%l1");
            code.popES ("%l0");
        } else if (opdtype.equals ("f")) {
            /* stack: op1 op2  -> %f2 %f3 */
            code.FpopES ("%f3");
            code.FpopES ("%f2");
        } else if (opdtype.equals ("xl")) {
            if ((Opcode.LSHL == i.opcode.code) ||
                (Opcode.LSHR == i.opcode.code) ||
                (Opcode.LUSHR == i.opcode.code)) {
                /* stack: op1.w1 op1.w2 op2 -> %o0 %o2 */
                /* We're going to call a function to do these, so pop
                 * right into the outgoing args. */
                code.popES ("%o2");
                code.LpopES ("%o0");
            } else {
                /* stack: op1.w1 op1.w2 op2.w1 op2.w2  -> %l2 %l4 */
                code.LpopES ("%l4");
                code.LpopES ("%l2");
            }
        } else if (opdtype.equals ("xd")) {
            /* stack: op1.w1 op1.w2 op2.w1 op2.w2  -> %f2 %f4 */
            code.DpopES ("%f4");
            code.DpopES ("%f2");
        } else {
            throw new InternalError ("Bad type in binop.");
        }
        /* Emit the code to operate on the results */
        switch (i.opcode.code) {
            /* int operands: %l0 op %l1 -> %l0 */
            case Opcode.IADD:
                code.ADD ("%l0", "%l1", "%l0");
                break;
            case Opcode.ISUB:
                code.SUB ("%l0", "%l1", "%l0");
                break;
            case Opcode.IMUL:
                code.SMUL ("%l0", "%l1", "%l0");
                break;
            case Opcode.IREM:
            case Opcode.IDIV:
                /* We'll have to cheat until we get a v8 sparchitecture manual */
                code.MOV ("%l0", "%o0");
                code.MOV ("%l1", "%o1");
                code.reserveCode (CodeBlock.brACALL, i, "noreg",
                                  getFuncAddr ((Opcode.IREM == i.opcode.code) ? FID_intrem : FID_intdiv));
                code.NOP ();
                code.MOV ("%o0", "%l0");
                break;
            case Opcode.IAND:
                code.AND ("%l0", "%l1", "%l0");
                break;
            case Opcode.IOR:
                code.OR ("%l0", "%l1", "%l0");
                break;
            case Opcode.IXOR:
                code.XOR ("%l0", "%l1", "%l0");
                break;
            case Opcode.ISHL:
                code.SLL ("%l0", "%l1", "%l0");
                break;
            case Opcode.ISHR:
                code.SRA ("%l0", "%l1", "%l0");
                break;
            case Opcode.IUSHR:
                code.SRL ("%l0", "%l1", "%l0");
                break;
                
                /* long operands: %l2 op %l4 -> %l0 */
            case Opcode.LADD:
                code.ADDcc ("%l3", "%l5", "%l1");
                code.ADDX ("%l2", "%l4", "%l0");
                break;
            case Opcode.LSUB:
                code.SUBcc ("%l3", "%l5", "%l1");
                code.SUBX ("%l2", "%l4", "%l0");
                break;
            case Opcode.LMUL:
                /* This is the sequence that gcc -mv8 -O3 uses. */
                code.UMUL ("%l3", "%l5", "%l1");
                code.RDY ("%l0");
                code.SMUL ("%l3", "%l4", "%o7");
                code.ADD ("%l0", "%o7", "%l0");
                code.SMUL ("%l5", "%l2", "%l2");
                code.ADD ("%l0", "%l2", "%l0");
                break;
            case Opcode.LREM:
            case Opcode.LDIV:
                /* Everybody else does this with a function call; let's
                 * do it that way too. */
                code.MOV ("%l2", "%o0");
                code.MOV ("%l3", "%o1");
                code.MOV ("%l4", "%o2");
                code.MOV ("%l5", "%o3");
                code.reserveCode (CodeBlock.brACALL, i, "noreg",
                                  getFuncAddr ((Opcode.LREM == i.opcode.code) ? FID_longrem : FID_longdiv));
                code.NOP ();
                code.MOV ("%o0", "%l0");
                code.MOV ("%o1", "%l1");
                break;
            case Opcode.LAND:
                code.AND ("%l2", "%l4", "%l0");
                code.AND ("%l3", "%l5", "%l1");
                break;
            case Opcode.LOR:
                code.OR ("%l2", "%l4", "%l0");
                code.OR ("%l3", "%l5", "%l1");
                break;
            case Opcode.LXOR:
                code.XOR ("%l2", "%l4", "%l0");
                code.XOR ("%l3", "%l5", "%l1");
                break;
            case Opcode.LSHL:
            case Opcode.LSHR:
            case Opcode.LUSHR:
                /* Already have op1 and op2 into %o0, %o1, %o2, so put in
                 * the operator type, and call the function. */
                code.MOV (i.opcode.code, "%o3");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_longshift));
                code.NOP ();
                /* Move result back into local registers */
                code.MOV ("%o0", "%l0");
                code.MOV ("%o1", "%l1");
                break;

                /* Float operands: %f2 op %f3 -> %f0 */
            case Opcode.FADD:
                code.FADDs ("%f2", "%f3", "%f0");
                break;
            case Opcode.FSUB:
                code.FSUBs ("%f2", "%f3", "%f0");
                break;
            case Opcode.FMUL:
                code.FMULs ("%f2", "%f3", "%f0");
                break;
            case Opcode.FDIV:
                /*!! UNFINISHED -- check for divbyzero !!*/
                code.FDIVs ("%f2", "%f3", "%f0");
                break;
            case Opcode.FREM:
                /*!! UNFINISHED -- is this correct? !!*/
                /* Convert from single to double precision, and call
                 * the remdr function in toba */
                code.FsTOd ("%f2", "%f0");
                code.FsTOd ("%f3", "%f2");
                code.STDF ("%f0", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LD ("%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o0");
                code.LD ("%fp", 4 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o1");
                code.STDF ("%f2", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LD ("%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o2");
                code.LD ("%fp", 4 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o3");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_remdr));
                code.NOP ();
                code.FdTOs ("%f0", "%f0");
                break;

                /* Double operands: %f2 %f4 -> %f0 */
            case Opcode.DADD:
                code.FADDd ("%f2", "%f4", "%f0");
                break;
            case Opcode.DSUB:
                code.FSUBd ("%f2", "%f4", "%f0");
                break;
            case Opcode.DMUL:
                code.FMULd ("%f2", "%f4", "%f0");
                break;
            case Opcode.DDIV:
                /*!! UNFINISHED -- check for divbyzero !!*/
                code.FDIVd ("%f2", "%f4", "%f0");
                break;
            case Opcode.DREM:
                /* Call the remdr function in toba */
                code.STDF ("%f2", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LD ("%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o0");
                code.LD ("%fp", 4 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o1");
                code.STDF ("%f4", "%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE));
                code.LD ("%fp", - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o2");
                code.LD ("%fp", 4 - (overheadSize + SPARC.ALUFPUXFERSIZE), "%o3");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_remdr));
                code.NOP ();
                break;


            default:
                throw new InternalError ("Binop code " + i.opcode + " not supported in JIT");
        }
        /* Store the result back on the execution stack */
        if (opdtype.equals ("i")) {
            /* stack: %l0 -> val */
            code.pushES ("%l0");
        } else if (opdtype.equals ("f")) {
            /* stack: %f0 -> val */
            code.FpushES ("%f0");
        } else if (opdtype.equals ("xl")) {
            /* stack: %l0 -> val.w1 val.w2 */
            code.LpushES ("%l0");
        } else if (opdtype.equals ("xd")) {
            /* stack: %f0 -> val.w1 val.w2 */
            code.DpushES ("%f0");
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
                code.pushES ("%o0");
                break;
            case Field.FT_float:
                code.FpushES ("%f0");
                break;
            case Field.FT_long:
                code.LpushES ("%o0");
                break;
            case Field.FT_double:
                code.DpushES ("%f0");
                break;
            case Field.FT_void:
                break;
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
                      String reg) // Name of target register
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
            code.SETHI (cp, reg);
            code.SetLo (cp, reg);
        }
        return;
    }

    /** Take a value of a particular type out of memory and push it onto
      * the evaluation stack.
      * @param areg Register containing memory address of value
      * @param tychar Encoded type of object at address
      */
    private void
    pushFromMemory (String areg,
                    char tychar)
    {
        /* Load the whosit at areg onto the evaluation stack.  If the value
         * is less than one int, extend to an int, with or without sign, as
         * appropriate. */

        switch (tychar) {
            default:
                throw new InternalError ("invalid pushFromMemory type " + tychar);
            case Field.FT_void:
                throw new InternalError ("invalid pushFromMemory void data.");
            case Field.FT_boolean:
                code.LDUB (areg, 0, "%o7");
                break;
            case Field.FT_byte:
                code.LDSB (areg, 0, "%o7");
                break;
            case Field.FT_char:
                code.LDUH (areg, 0, "%o7");
                break;
            case Field.FT_short:
                code.LDSH (areg, 0, "%o7");
                break;
            case Field.FT_float:
            case Field.FT_int:
            case Field.FT_object:
                code.LD (areg, 0, "%o7");
                break;
            case Field.FT_double:
            case Field.FT_long:
                code.LD (areg, 0, "%o7"); // high word
                code.pushES ("%o7");
                code.LD (areg, 4, "%o7"); // low word
                break;
        }
        code.pushES ("%o7");
        return;
    }

    /** Take a value of a particular type off the stack and store it into
      * memory.
      * @param areg Register containing memory address of value
      * @param tychar Encoded type of object to be stored at address
      */
    private void
    popIntoMemory (String areg,
                   char tychar)
    {
        /* Load the whosit at areg onto the evaluation stack.  If the value
         * is less than one int, extend to an int, with or without sign, as
         * appropriate. */

        code.popES ("%o7");
        switch (tychar) {
            default:
                throw new InternalError ("invalid popIntoMemory type " + tychar);
            case Field.FT_void:
                throw new InternalError ("invalid popIntoMemory void data.");
            case Field.FT_boolean:
            case Field.FT_byte:
                code.STB ("%o7", areg, 0);
                break;
            case Field.FT_char:
            case Field.FT_short:
                code.STH ("%o7", areg, 0);
                break;
            case Field.FT_float:
            case Field.FT_int:
            case Field.FT_object:
                code.ST ("%o7", areg, 0);
                break;
            case Field.FT_double:
            case Field.FT_long:
                code.ST ("%o7", areg, 4); // low word
                code.popES ("%o7");
                code.ST ("%o7", areg, 0); // high word
                break;
        }
        return;
    }
    
    private void
    EmitCkInstance (Instr i,
                    ClassRef cr)
    {
        /* If the target type is Object, the cast always succeeds, whether
         * the object is of non-array or array class. */
        if (cr.name.equals ("java.lang.Object")) {
            code.MOV (1, "%o0");
            return;
        }

        /* Get a pointer to the C class of the object into %o1. */
        code.LD ("%o0", 0, "%o1");
        
        if (Field.FT_array != cr.name.charAt(0)) {
            /* Non array objects: if going to an interface, %o1 must implement
             * it; if going to a class, %o1 must be a subclass of it.  We don't
             * know yet whether this is a class or an interface, so have to
             * make the decision at runtime. */
            code.reserveCode (CodeBlock.brLOADNatCl, i, "%o2", cr);
            code.LD ("%o2", getFieldOffset (OID_class_flags), "%o7");
            code.ANDcc ("%o7", ClassRT.IS_INTERFACE, "%o7");
            int bo_isiface = code.nextByteOffs ();
            code.BNE (0);
            code.NOP ();        // fill delay slot
            /* Is not an interface: we're OK iff o2 is a super class of o1. */
            code.LD ("%o1", getFieldOffset (OID_class_nsupers), "%o3");
            code.LD ("%o2", getFieldOffset (OID_class_nsupers), "%o4");
            code.SUBcc ("%o3", "%o4", "%o3");
            int bo_fail1 = code.nextByteOffs ();
            code.BL (0);
            code.NOP ();        // fill delay slot
            /* OK, o1->nsupers >= o2->nsupers.  See if the superclass up
             * that high is right.
             * o1->supers[o1->nsupers-o2->nsupers] == o2 */
            code.LD ("%o1", getFieldOffset (OID_class_supers), "%o4");
            code.SLL ("%o3", 2, "%o3"); // mul by 4 to handle pointer elements
            code.LD ("%o4", "%o3", "%o3");
            code.CMP ("%o3", "%o2");
            /* If not equal, jump to the failure point */
            int bo_fail2 = code.nextByteOffs ();
            code.BNE (0);
            code.NOP ();        // fill delay slot
            /* Are equal: cast is OK. */
            code.MOV (1, "%o0");
            int bo_exit1 = code.nextByteOffs ();
            code.BA (0);
            code.NOP ();        // fill delay slot

            /* OK, here on out it's an interface.  Just call instanceof. */
            code.PatchDisp22 (bo_isiface, (code.nextByteOffs() - bo_isiface) >>> 2);

            /* We already have %o0 as the object ref, %o2 as the target
             * class pointer.  Rearrange to meet the parameter requirements
             * of instanceof(Object,Class,ArrayDim). */
            code.MOV ("%o2", "%o1");
            code.MOV ("%g0", "%o2");
            code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_instanceof));
            code.NOP ();        // fill delay slot
            int bo_exit2 = code.nextByteOffs ();
            code.BA (0);
            code.NOP ();        // fill delay slot
            
            /* Fail: backpatch all fails, and clear the return value */
            code.PatchDisp22 (bo_fail1, (code.nextByteOffs() - bo_fail1) >>> 2);
            code.PatchDisp22 (bo_fail2, (code.nextByteOffs() - bo_fail2) >>> 2);
            code.MOV ("%g0", "%o0");

            /* Exit: backpatch all exits */
            code.PatchDisp22 (bo_exit1, (code.nextByteOffs() - bo_exit1) >>> 2);
            code.PatchDisp22 (bo_exit2, (code.nextByteOffs() - bo_exit2) >>> 2);
            
            return;
        }

        if ((Field.FT_array != cr.name.charAt(1)) &&
            (Field.FT_object != cr.name.charAt(1))) {
            /* Array of primitive object: class has to be array of that
             * primitive object.  Load the pointer to the appropriate class,
             * hiding inside the acl_Foo object. */
            loadClassPointer (i, cr, 1, "%o2");
            /* Presume this will work, to simplify control flow */
            code.MOV (1, "%o0");
            /* See if classes match */
            code.CMP ("%o1", "%o2");
            int bo_exit = code.nextByteOffs ();
            code.BE (0);
            code.NOP ();
            /* Nope, set to fail. */
            code.MOV ("%g0", "%o0");
            /* Here's where we go out. */
            code.PatchDisp22 (bo_exit, (code.nextByteOffs() - bo_exit) >>> 2);
            
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

        /* Already have object reference in %o0.  Put class pointer into
         * %o2, presuming this loadClassPointer function will go down to
         * the base object.  Put array rank into %o2.  Call instanceof. */
        loadClassPointer (i, cr, 0, "%o1");
        code.MOV (n, "%o2");
        code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_instanceof));
        code.NOP ();        // fill delay slot
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
        code.instrToByteOffs [idx] = code.nextByteOffs ();

        /* If we're doing exception handling, we need to update the pc
         * variable so we can tell where the exception was raised. */
        if (0 < m.handlers.length) {
            code.SETHI (i.pc, "%o7");
            code.SetLo (i.pc, "%o7");
            code.ST ("%o7", "%fp", excOheadOffs [ARLV_pc]);
        }

        /* If instrumentation is enabled, increment the counter for this
         * instruction. */
        if (null != instrcounts) {
            code.SETHI ((int) (icaddr + 4 * i.opcode.code), "%o7");
            code.SetLo ((int) (icaddr + 4 * i.opcode.code), "%o7");
            code.LD ("%o7", 0, "%l0");
            code.ADD ("%l0", 1, "%l0");
            code.ST ("%l0", "%o7", 0);
        }

        /* We can often deal with a bunch of instructions at once, so
         * we switch on the opcode kind, rather than the exact opcode. */
        opc = i.opcode;
        switch (opc.kind) {
            case Opcode.CONST: /* Tconst_#, aconst_null, bipush, sipush */
                opdtype = opc.push;
                if ('x' == opdtype.charAt (0)) {
                    /* Two-word constant.  Either a long or a double. */
                    if ('d' == opdtype.charAt (1)) {
                        lv = Double.doubleToLongBits ((double)(opc.var + i.val));
                    } else {
                        lv = (long) (opc.var + i.val);
                    }
                    code.SETHI ((int) (lv >>> 32), "%o7");
                    code.SetLo ((int) (lv >>> 32), "%o7");
                    code.pushES ("%o7");
                    code.SETHI ((int) (lv & 0xFFFFFFFF), "%o7");
                    code.SetLo ((int) (lv & 0xFFFFFFFF), "%o7");
                    code.pushES ("%o7");
                } else {
                    /* One-word constant.  Either floating point or integral */
                    if ('f' == opdtype.charAt (0)) {
                        iv = Float.floatToIntBits ((float)(opc.var + i.val));
                    } else {
                        iv = (int) (opc.var + i.val);
                    }
                    code.SETHI (iv, "%o7");
                    code.SetLo (iv, "%o7");
                    code.pushES ("%o7");
                }
                break;
            case Opcode.LDC: /* ldc, ldc_w, ldc2_w */
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
                        code.SETHI (iv, "%o7");
                        code.SetLo (iv, "%o7");
                        code.pushES ("%o7");
                        break;
                    case Constant.STRING:
                        /* Strings (i.e., references to java.lang.string)
                         * don't need to be stored in a data area, but we
                         * do need to convert from the reference to an
                         * integral value. */
                        iv = (int) code.getNativeObjectAddr ((Object)cn.value);
                        code.SETHI (iv, "%o7");
                        code.SetLo (iv, "%o7");
                        code.pushES ("%o7");
                        break;
                    case Constant.LONG:
                    case Constant.DOUBLE:
                        /* Long values can be loaded directly. */
                        if (Constant.DOUBLE == cn.tag) {
                            lv = Double.doubleToLongBits (((Double)cn.value).doubleValue());
                        } else {
                            lv = ((Long)cn.value).longValue();
                        }
                        code.SETHI ((int) (lv >>> 32), "%o7");
                        code.SetLo ((int) (lv >>> 32), "%o7");
                        code.pushES ("%o7");
                        code.SETHI ((int) (lv & 0xFFFFFFFF), "%o7");
                        code.SetLo ((int) (lv & 0xFFFFFFFF), "%o7");
                        code.pushES ("%o7");
                        break;
                }
                break;
            case Opcode.LOAD: /* [ilfda]load{,_[0123]} */
                /* It appears that Toba will guarantee that the val field
                 * of the Opcode will be zero if this is a ?LOAD_x variant,
                 * so we can get the local variable number by adding the
                 * val and var fields. */
                lvi = opc.var + i.val;
                /* Pull the value out of the local variable area and push
                 * it onto the eval stack.  If it's a double-word type with
                 * the high word in lvi, do the high word first, then
                 * the low word. */
                if ('x' == opc.push.charAt (0)) {
                    code.LD ("%fp", LVOffs (lvi), "%o7");
                    code.pushES ("%o7");
                    lvi++;
                }
                code.LD ("%fp", LVOffs (lvi), "%o7");
                code.pushES ("%o7");
                break;
            case Opcode.STORE: /* [ilfda]store{,_[0123]} */
                lvi = opc.var + i.val;
                /* Pop the value off the stack and stuff it into the local
                 * variable area */
                code.popES ("%o7");
                /* If this is a double word type, it lives at the local vars
                 * lvi and lvi+1.  However, the high word is at lvi, and the
                 * low at lvi+1, so we've got to store into lvi+1 first. */
                if (2 == opc.pop) {
                    code.ST ("%o7", "%fp", LVOffs (lvi+1));
                    code.popES ("%o7");
                }
                code.ST ("%o7", "%fp", LVOffs (lvi));
                break;
            case Opcode.IINC:
                code.LD ("%fp", LVOffs (i.val), "%o7");
                code.ADD ("%o7", i.more[0], "%o7");
                code.ST ("%o7", "%fp", LVOffs (i.val));
                break;
            case Opcode.GETS: /* getstatic */
                vr = (VariableRef) i.con.value;

                /*!! UNFINISHED -- check access, existence !!*/
                /* Emit code to call the class initializer if necessary */
                emitClassInit (i, (Object) vr);

                /* Reserve space for code that will load the address of the
                 * variable into %l6.  Address may not known until link time. */
                code.reserveCode (CodeBlock.brLOAD, i, "%l6", vr);

                /* Load the whosis from the %l6 area */
                pushFromMemory ("%l6", vr.signature.charAt (0));
                break;
            case Opcode.PUTS: /* putstatic */
                vr = (VariableRef) i.con.value;

                /*!! UNFINISHED -- check access, existence, type !!*/
                /* Emit code to call the class initializer if necessary */
                emitClassInit (i, (Object) vr);

                /* Reserve space for code that will load the address of the
                 * variable into %l6.  Address may not known until link time. */
                code.reserveCode (CodeBlock.brLOAD, i, "%l6", vr);

                /* Store the whosis into the %l6 area */
                popIntoMemory ("%l6", vr.signature.charAt (0));
                break;
            case Opcode.GETF: /* getfield */
                vr = (VariableRef) i.con.value;

                /* Verify that the instance object is not null. */
                checkObjectRef (0, "%l1", i);
                /* Make like we popped it instead of just peeked */
                code.tossES (1);

                /* %l1 is now a pointer to an instance structure.  First field
                 * of the instance structure is a pointer to the C class of
                 * the object.  128 bytes into that is the pointer to the
                 * array of instance variable specs (struct vt_generics). */
//!! REQUIRE: 124 == offsetof (struct class, ivars)
//!! REQUIRE: 0 == offsetof (struct vt_generic, offset)
                code.LD ("%l1", 0, "%o0");
                code.LD ("%o0", 124, "%o0");

                /* Now: what we're interested in is the n'th element in the
                 * array of vt_generic structures which follows the class structure
                 * that's pointed to by %esi.  Unfortunately, we don't know
                 * what n is yet.  Load that into %o1 at link time. */
                code.reserveCode (CodeBlock.brFIELDLOAD, i, "%o1", vr);

                /* Now access the offset field of the n'th vt_generic in the
                 * array that starts at %o0; the offset field is the first
                 * field in the structure.  We add that to the address of
                 * the instance variable to get the address of the field. */
//!! REQUIRE: 24 == sizeof (struct vt_generic)
                code.SLL ("%o1", 3, "%o1");// *8
                code.ADD ("%o1", "%o1", "%o2"); // *2*8
                code.ADD ("%o2", "%o1", "%o1"); // *3*8 = 24
                code.LD ("%o0", "%o1", "%o2");
                code.ADD ("%o2", "%l1", "%l1");

                /* Push from memory */
                pushFromMemory ("%l1", vr.signature.charAt (0));
                
                break;
            case Opcode.PUTF: /* putfield */
                vr = (VariableRef) i.con.value;

                /* Verify that the instance object is not null.  The object
                 * is n words down the stack, where n is the size of the value
                 * to store. */
                if ((Field.FT_long == vr.signature.charAt(0)) ||
                    (Field.FT_double == vr.signature.charAt(0))) {
                    checkObjectRef (2, "%l1", i);
                    aw = 3;
                } else {
                    checkObjectRef (1, "%l1", i);
                    aw = 2;
                }

                /* %l1 is now a pointer to an instance structure.  First field
                 * of the instance structure is a pointer to the C class of
                 * the object.  128 bytes into that is the pointer to the
                 * array of instance variable specs (struct vt_generics). */
//!! REQUIRE: 124 == offsetof (struct class, ivars)
//!! REQUIRE: 0 == offsetof (struct vt_generic, offset)
                code.LD ("%l1", 0, "%o0");
                code.LD ("%o0", 124, "%o0");

                /* Now: what we're interested in is the n'th element in the
                 * array of vt_generic structures which follows the class structure
                 * that's pointed to by %esi.  Unfortunately, we don't know
                 * what n is yet.  Load that into %o1 at link time. */
                code.reserveCode (CodeBlock.brFIELDLOAD, i, "%o1", vr);

                /* Now access the offset field of the n'th vt_generic in the
                 * array that starts at %o0; the offset field is the first
                 * field in the structure.  We add that to the address of
                 * the instance variable to get the address of the field. */
//!! REQUIRE: 24 == sizeof (struct vt_generic)
                code.SLL ("%o1", 3, "%o1");// *8
                code.ADD ("%o1", "%o1", "%o2"); // *2*8
                code.ADD ("%o2", "%o1", "%o1"); // *3*8 = 24
                code.LD ("%o0", "%o1", "%o2");
                code.ADD ("%o2", "%l1", "%l1");

                /* Pop result into memory */
                popIntoMemory ("%l1", vr.signature.charAt (0));
                
                /* Throw away the object ref we don't need any more */
                code.tossES (1);

                break;
            case Opcode.NEW: /* new */
                /* Backpatch load struct class reference into %o0 */
                cr = (ClassRef) i.con.value;
                code.reserveCode (CodeBlock.brLOADNatCl, i, "%o0", cr);
                /* Now, with C class structure, call the routine that allocates
                 * an instance method */
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_new));
                code.NOP ();    // fill delay slot
                /* Push the instance reference onto the stack */
                code.pushES ("%o0");
                break;
            case Opcode.ACAST: /* checkcast */
                /* Look at the top element, without popping it. */
                code.peekES (0, "%o0");
                /* If it's null, we're OK. */
                code.TST ("%o0");
                boffs = code.nextByteOffs ();
                code.BE (0);
                code.NOP ();    // fill delay slot
                /* Otherwise, see if it can be cast to the required type */
                EmitCkInstance (i, (ClassRef)i.con.value);
                /* If %o0 is zero, throw a ClassCastException. */
                code.TST ("%o0");
                boffs2 = code.nextByteOffs ();
                code.BNE (0);
                code.NOP ();    // fill delay slot
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_throwCCE));
                code.NOP ();    // fill delay slot
                code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                code.PatchDisp22 (boffs2, (code.nextByteOffs() - boffs2) >>> 2);
                break;
            case Opcode.INSTC: /* instanceof */
                /* Pop the object off the stack; instanceof consumes the ref */
                code.popES ("%o0");
                /* If it's null, we're going to push 0. */
                code.TST ("%o0");
                boffs = code.nextByteOffs ();
                code.BE (0);
                code.NOP ();    // fill delay slot
                /* Otherwise, see if it can be cast to the required type */
                EmitCkInstance (i, (ClassRef)i.con.value);
                /* Here %o0 is 0 or 1 relative to whether the cast is legal. */
                code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                /* Push the result. */
                code.pushES ("%o0");
                break;
            case Opcode.NEWA: /* newarray */
                /* Allocate a new array.  Element type is the val parameter;
                 * we need the core class for that type. */
                iv = (int) getNPprimclass (i.val, 0);
                code.SETHI (iv, "%o0");
                code.SetLo (iv, "%o0");
                /* Pop array size */
                code.popES ("%o1");
                /* Verify it's non-negative */
                code.CMP ("%o1", "%g0");
                boffs = code.nextByteOffs ();
                code.BGE (0);
                code.NOP ();
                /* Call throwNegativeArraySizeException (size) */
                code.MOV ("%o1", "%o0");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_throwNASE));
                code.NOP ();            // fill delay slot
                
                /* Call the anewarray function */
                code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_anewarray));
                code.NOP ();
                /* Store the reference onto the stack */
                code.pushES ("%o0");
                break;
            case Opcode.ANEWA: /* anewarray */
                cr = (ClassRef) i.con.value;
                iv = 0;
                while ('[' == cr.name.charAt(iv)) {
                    ++iv;
                }
                if (0 == iv) {
                    /* Not a multidimensional array: get the reference and go. */
                    code.reserveCode (CodeBlock.brLOADNatCl, i, "%o0", cr);
                    code.popES ("%o1");
                    /* Verify it's non-negative */
                    code.CMP ("%o1", "%g0");
                    boffs = code.nextByteOffs ();
                    code.BGE (3);
                    code.NOP ();
                    /* Call throwNegativeArraySizeException(size) */
                    code.MOV ("%o1", "%o0");
                    code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_throwNASE));
                    code.NOP ();            // fill delay slot
                    code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                    code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_anewarray));
                    code.NOP ();
                } else {
                    int cp;
                    
                    loadClassPointer (i, cr, 0, "%o0");
                    /* Number of dimensions of array is second arg */
                    code.MOV (iv, "%o1");
                    /* Number of dimensions we're going to allocate is third */
                    code.MOV (1, "%o2");
                    /* Count for top axis is fourth */
                    code.popES ("%o3");
                    /* Verify it's non-negative */
                    code.CMP ("%o3", "%g0");
                    boffs = code.nextByteOffs ();
                    code.BGE (3);
                    code.NOP ();
                    /* Call throwNullPointerException (0) */
                    code.MOV ("%o3", "%o0");
                    code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_throwNASE));
                    code.NOP ();            // fill delay slot
                    code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                    code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_vmnewarray));
                    code.NOP ();
                }
                /* Store value onto stack */
                code.pushES ("%o0");
                break;
            case Opcode.MNEWA: /* multianewarray */
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

                /* This is ugly: we have to call a varargs function.  So
                 * push the first, fixed args onto the stack, load them
                 * with our nice setCallArgs function, then load the rest
                 * using the extended setCallArgs function which starts
                 * part-way through the argument list. */

                /* Get a classref for this thing */
                loadClassPointer (i, cr, 0, "%o7");
                code.pushES ("%o7");
                /* Number of dimensions to create above element class */
                code.MOV (iv, "%o7");
                code.pushES ("%o7");
                /* Number of dimension specs that follow */
                code.MOV (i.more[0], "%o7");
                code.pushES ("%o7");
                /* Load up the fixed args */
                setCallArgs (3, 0);
                /* Load up the dimension values */
                setCallArgs (i.more[0], 3);
                /* Call the thing that builds the array */
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_vmnewarray));
                code.NOP ();
                /* Save the reference */
                code.pushES ("%o0");
                break;
                
            case Opcode.ALEN: /* arraylength */
                /* Make sure the array reference is non-null */
                checkObjectRef (0, "%o7", i);
                /* Call a function to extract the length out of the C
                 * array structure */
                code.popES ("%o0");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_getarraylen));
                code.NOP ();    // fill delay slot
                /* Save the result */
                code.pushES ("%o0");
                break;
                
            case Opcode.ARRAYLOAD: /* Taload */
                /* Pop off the index and the reference object into registers
                 * preparatory to calling geteltoffs. */
                code.popES ("%o2"); // index
                code.popES ("%o0"); // array ref
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
                        
                code.MOV (iv, "%o1"); // element size
                /* Now call the routine that checks bounds and gets the element
                 * offset. */
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_geteltoffs));
                code.NOP ();    // fill delay slot
                /* Address of element is returned in %o0.  Load onto the
                 * stack from there. */
                pushFromMemory ("%o0", tychar);
                break;
                
            case Opcode.ARRAYSTORE: /* Tastore */

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
                 * array index. */
                code.peekES (opc.pop-1, "%o0");
                code.MOV (iv, "%o1"); // element size
                code.peekES (opc.pop-2, "%o2");
                /* Now call the routine that checks bounds and gets the element
                 * offset.  This little puppy can throw an exception, so we
                 * need to clean off the evaluation stack before we call it,
                 * or it may not get cleaned. */
                if (4 < iv) {
                    code.LpopES ("%l0");
                } else {
                    code.popES ("%l0");
                }
                /* Get rid of the array and index values */
                code.tossES (2);
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_geteltoffs));
                code.NOP ();    // fill delay slot
                /* For simplicity, push the values back onto the stack for
                 * the store. */
                if (4 < iv) {
                    code.LpushES ("%l0");
                } else {
                    code.pushES ("%l0");
                }
                /* Store the value, which is still on top-of-stack, into memory. */
                popIntoMemory ("%o0", tychar);
                break;
                
            case Opcode.NOP: /* nop, pop, pop2, breakpoint */
                code.tossES (opc.pop);
                break;
            case Opcode.DUP: /* dup */
                /* w1 -> w1, w1 */
                code.peekES (0, "%o7");
                code.pushES ("%o7");
                break;
            case Opcode.DUPX1: /* dup_x1 */
                /* w2, w1 -> w1, w2, w1 */
                code.popES ("%l0"); // w1
                code.popES ("%l1"); // w2
                code.pushES ("%l0");
                code.pushES ("%l1");
                code.pushES ("%l0");
                break;
            case Opcode.DUPX2: /* dup_x2 */
                /* w3, w2, w1 -> w1, w3, w2, w1 */
                code.popES ("%l0"); // w1
                code.popES ("%l1"); // w2
                code.popES ("%l2"); // w3
                code.pushES ("%l0");
                code.pushES ("%l2");
                code.pushES ("%l1");
                code.pushES ("%l0");
                break;
            case Opcode.DUP2: /* dup2 */
                /* w2, w1 -> w2, w1, w2, w1 */
                code.peekES (1, "%o7"); // w2
                code.pushES ("%o7");
                code.peekES (1, "%o7"); // w1
                code.pushES ("%o7");
                break;
            case Opcode.D2X1: /* dup2_x1 */
                /* w3, w2, w1 -> w2, w1, w3, w2, w1 */
                code.popES ("%l0"); // w1
                code.popES ("%l1"); // w2
                code.popES ("%l2"); // w3
                code.pushES ("%l1");
                code.pushES ("%l0");
                code.pushES ("%l2");
                code.pushES ("%l1");
                code.pushES ("%l0");
                break;
            case Opcode.D2X2: /* dup2_x2 */
                /* w4, w3, w2, w1 -> w2, w1, w4, w3, w2, w1 */
                code.popES ("%l0"); // w1
                code.popES ("%l1"); // w2
                code.popES ("%l2"); // w3
                code.popES ("%l3"); // w4
                code.pushES ("%l1");
                code.pushES ("%l0");
                code.pushES ("%l3");
                code.pushES ("%l2");
                code.pushES ("%l1");
                code.pushES ("%l0");
                break;
            case Opcode.SWAP: /* swap */
                /* w2, w1 -> w1, w2 */
                code.popES ("%l0"); // w1
                code.popES ("%l1"); // w2
                code.pushES ("%l0");
                code.pushES ("%l1");
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
                    code.LpopES ("%o2");
                    code.LpopES ("%o0");
                    /* Cheating again. */
                    code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_longcmp));
                    code.NOP ();    // fill delay slot
                    code.pushES ("%o0");
                } else {
                    if ((Opcode.FCMPL == opc.code) || (Opcode.FCMPG == opc.code)) {
                        code.FpopES ("%f1");
                        code.FpopES ("%f0");
                        code.FCMPs ("%f0", "%f1");
                    } else {
                        code.DpopES ("%f2");
                        code.DpopES ("%f0");
                        code.FCMPd ("%f0", "%f2");
                    }
                    code.MOV (1, "%o7");
                    boffs = code.nextByteOffs ();
                    if ((Opcode.FCMPG == opc.code) ||
                        (Opcode.DCMPG == opc.code)) {
                        code.FBUG (6);
                    } else {
                        code.FBG (6);
                    }
                    code.NOP ();
                    code.SUB ("%o7", 1, "%o7");
                    boffs2 = code.nextByteOffs ();
                    code.FBE (3);
                    code.NOP ();
                    code.SUB ("%o7", 1, "%o7");
                    code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                    code.PatchDisp22 (boffs2, (code.nextByteOffs() - boffs2) >>> 2);
                    code.pushES ("%o7");
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
                code.reserveCode (CodeBlock.brINITSwitchTable, i, "noreg", adr);
                /* Pop the key from the stack */
                code.popES ("%o7");
                /* Subtract the bottom range value */
                code.SETHI (i.more [1], "%l0");
                code.SetLo (i.more [1], "%l0");
                code.SUBcc ("%o7", "%l0", "%o7");
                /* If key was below bottom range value, jump to default */
                boffs = code.nextByteOffs ();
                code.BL (0);
                code.NOP ();    // fill delay slot
                /* If key is above top range value minus bottom value range,
                 * jump to default */
                code.SETHI (i.more [2] - i.more[1], "%l0");
                code.SetLo (i.more [2] - i.more[1], "%l0");
                code.CMP ("%o7", "%l0");
                boffs2 = code.nextByteOffs ();
                code.BG (0);
                code.NOP ();    // fill delay slot
                /* OK, load the target from the table and jump there. */
                code.SETHI ((int) adr, "%l0");
                code.SetLo ((int) adr, "%l0");
                code.SLL ("%o7", 2, "%o7"); // 4*key
                code.ADD ("%l0", "%o7", "%l0"); // addr+4*key
                code.LD ("%l0", 0, "%o7");  // *(int *)(addr + 4*key)
                code.JMPL ("%o7", "%g0", "%g0");
                code.NOP ();    // fill delay slot
                /* DEFAULT: Here's where we go if the key was out of range */
                code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                code.PatchDisp22 (boffs2, (code.nextByteOffs() - boffs2) >>> 2);
                code.reserveCode (CodeBlock.brLOADCodeAbs, i, "%o7", i.more [0]);
                code.JMPL ("%o7", "%g0", "%g0");
                code.NOP ();    // fill delay slot
                break;
            case Opcode.LKPSW: /* lookupswitch */
                /* Allocate a block of memory to hold the target locations. */
                adr = allocUncolMemory (2 * 4 * i.more [1]);
                /* Add a backpatch to initialize the table; this doesn't
                 * actually modify the code, but does make sure things are
                 * set up once the resolution has completed. */
                code.reserveCode (CodeBlock.brINITSwitchTable, i, "noreg", adr);
                /* Get the table address */
                code.SETHI ((int) adr, "%l0");
                code.SetLo ((int) adr, "%l0");
                /* Get the key value */
                code.popES ("%l1");
                /* Get the table size */
                code.SETHI (i.more [1], "%l2");
                code.SetLo (i.more [1], "%l2");
                /* Set the condition codes
                code.TST ("%l2");
                /* Jump to bottom of loop */
                boffs = code.nextByteOffs ();
                code.BA (0);
                code.NOP ();    // fill delay slot
                boffs3 = code.nextByteOffs (); // top:
                /* Read the table value, and compare against the key */
                code.LD ("%l0", 0, "%o7");
                code.CMP ("%o7", "%l1");
                /* If key matchs, jump to success area */
                boffs2 = code.nextByteOffs ();
                code.BE (0);
                code.NOP ();    // fill delay slot
                /* No match; point to next table element, decrement count
                 * of elements remaining, and loop back if any left */
                code.ADD ("%l0", 8, "%l0");
                code.SUBcc ("%l2", 1, "%l2");
                code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                code.BGE ((boffs3 - code.nextByteOffs ()) >>> 2); // top
                code.NOP ();    // fill delay slot
                /* No more left: load up default and go there */
                code.reserveCode (CodeBlock.brLOADCodeAbs, i, "%l0", i.more [0]);
                code.JMPL ("%l0", "%g0", "%g0");
                code.NOP ();    // fill delay slot
                /* Found a match: load up value and go there */
                code.PatchDisp22 (boffs2, (code.nextByteOffs() - boffs2) >>> 2);
                code.LD ("%l0", 4, "%l0");
                code.JMPL ("%l0", "%g0", "%g0");
                code.NOP ();    // fill delay slot
                break;
            case Opcode.GOTO: /* goto, goto_w */
                checkBackJump (i, i.pc, i.val);
                code.reserveCode (CodeBlock.brJUMP, i, "noreg", m.instrs [m.pcmap [i.val]].label);
                code.NOP ();    // fill delay slot
                break;
            case Opcode.JSR: /* jsr, jsr_w */
                /* Push the return address onto the evaluation stack.  I.e.,
                 * figure the address of the instruction following this
                 * sequence, and use that.  */
                bpi = code.reserveCode (CodeBlock.brLOADCodeRel, i, "%o7", 0);
                code.pushES ("%o7");
                checkBackJump (i, i.pc, i.val);
                code.reserveCode (CodeBlock.brJUMP, i, "noreg", m.instrs [m.pcmap [i.val]].label);
                code.NOP ();    // fill delay slot
                /* Now that we know where the previous sequence ends,
                 * update the offset added for coderel to be the number of
                 * bytes past entry, so we end up jumping back to here. */
                bpi.setLongVal ((long) code.nextByteOffs());

                break;
            case Opcode.RET: /* ret */
                /* ret: pull return address out of a local variable and jump
                 * to it. */
                code.LD ("%fp", LVOffs (i.val), "%o7");
                code.JMPL ("%o7", "%g0", "%g0");
                code.NOP ();
                break;
            case Opcode.IVIRT: /* invokevirtual */
                /* Retrieve the number of argwords used in this instruction */
                aw = i.argwords();

                /* Verify that the instance object is not null */
                checkObjectRef (aw, "%l2", i);

                /* %l2 is now a pointer to an instance structure.  First field
                 * of the instance structure is a pointer to the C class of
                 * the object.  Immediately following the C class structure is
                 * the array of mt_generic structures which define the instance
                 * method table.  That's 140 bytes past the start of the C class. */
                code.LD ("%l2", 0, "%o0");

                /* Now: what we're interested in is the n'th element in the
                 * array of mt_generic structures pointed to by esi.
                 * Unfortunately, we don't know what n is yet.  Load that
                 * into %o1 at link time. */
                mr = (MethodRef) i.con.value;
                code.reserveCode (CodeBlock.brFIELDLOAD, i, "%o1", mr);

                /* Now access the f field of the n'th mt_generic in the
                 * array that starts at %o0+140.  mt_generic structs are
                 * 24bytes wide, and the f field is 4 bytes into a struct,
                 * so we use a displacement of 140+4, multiply the index
                 * by 3, and use a scale factor of 8. */
//!! REQUIRE: 24 == sizeof (struct mt_generic)
//!! REQUIRE: 136 == offsetof (struct cl_generic, M)
//!! REQUIRE: 4 == offsetof (struct mt_generic, f)
                code.SLL ("%o1", 3, "%o1");
                code.ADD ("%o1", "%o1", "%o2");
                code.ADD ("%o1", "%o2", "%o1");
                code.ADD ("%o1", "%o0", "%o0");
                code.LD ("%o0", 136 + 4, "%l0");

                /* Load up the outgoing argument registers, including the
                 * instance reference. */
                setCallArgs (aw+1);

                /* Register-indirect call */
                code.JMPL ("%l0", "%g0", "%o7");
                code.NOP ();    // fill delay slot
                EmitRetvalStore (mr);
                break;
            case Opcode.INONV: /* invokenonvirtual == invokespecial */
                /* Retrieve the number of argwords used in this instruction */
                aw = i.argwords();
                /* Verify that the instance object is not null */
                checkObjectRef (aw, "%o7", i);
                /* Load up the outgoing argument registers, including
                * the object reference. */
                setCallArgs (aw+1);
                /* Reserve space for the call instruction: note that method
                 * may not yet be resolved. */
                mr = (MethodRef)i.con.value;
                if (null == mr) {
                    throw new InternalError ("INONV of non-existent methodref");
                }
                code.reserveCode (CodeBlock.brCALL, i, "noreg", mr);
                /* Fill in the delay slot */
                code.NOP ();
                EmitRetvalStore (mr);
                break;
            case Opcode.ISTAT: /* invokestatic */
                aw = i.argwords ();
                setCallArgs (aw);
                /* Reserve space for the call instruction: note that method
                 * may not yet be resolved. */
                if (null == i.con.value) {
                    throw new InternalError ("ISTAT of non-existent methodref");
                }
                mr = (MethodRef) i.con.value;
                code.reserveCode (CodeBlock.brCALL, i, "noreg", mr);
                /* Fill in the delay slot */
                code.NOP ();
                EmitRetvalStore (mr);
                break;
            case Opcode.IINTR: /* invokeinterface */
                fr = (FieldRef) i.con.value;
                aw = i.argwords ();
                /* Verify that the instance object is not null.  Note that for
                * invokeinterface, aw includes the instance reference. */
                checkObjectRef (aw-1, "%o0", i);
                /* Call findinterface to determine where we're supposed to
                 * jump. */
                iv = Names.hashinterface (fr.name, fr.signature);
                code.SETHI (iv, "%o1");
                code.SetLo (iv, "%o1");
                code.ADD ("%l7", 4*aw, "%l7");
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_findinterface));
                code.NOP ();
                /* findinterface returns a pointer to an mt_generic structure.
                 * From that, read the function pointer we're going to jump
                 * to. */
                code.LD ("%o0", getFieldOffset (OID_mtgeneric_f), "%l0");
                /* Load up the outgoing argument registers, including
                 * the object reference. */
                code.SUB ("%l7", 4*aw, "%l7");
                setCallArgs (aw);
                code.JMPL ("%l0", "%g0", "%o7");
                code.NOP ();

                EmitRetvalStore (fr);
                break;
                
            case Opcode.RETV: /* Treturn */
                /* Force a call to the backedge function here, before we
                 * pull the return values off the stack. */
                checkBackJump (i, 1, 0);
                /* Load the word from the top of the execution stack and
                 * put it into the outgoing parameter register. */
                if (Opcode.DRETURN == opc.code) {
                    code.DpopES ("%f0");
                } else if (Opcode.FRETURN == opc.code) {
                    code.FpopES ("%f0");
                } else if (Opcode.LRETURN == opc.code) {
                    code.LpopES ("%i0");
                } else {
                    code.popES ("%i0");
                }
                code.reserveCode (CodeBlock.brJUMP, i, "noreg", -1);
                code.NOP ();    // fill delay slot
                break;
            case Opcode.RETRN: /* return */
                /* Force a call to the backedge function here, before we
                 * pull any return values off the stack. */
                checkBackJump (i, 1, 0);
                /* Jump to the epilog code.  We don't necessarily know where
                 * that is yet, so use "label" -1 to denote it. */
                code.reserveCode (CodeBlock.brJUMP, i, "noreg", -1);
                code.NOP ();    // fill delay slot
                break;
            case Opcode.THROW: /* athrow */
                /* Pop the target object off the stack. */
                code.popES ("%o0");
                /* If the target object is NULL, throw an NPE instead. */
                code.TST ("%o0");
                boffs = code.nextByteOffs ();
                code.BNE (0);
                code.NOP ();
                /* OK, let's just call the standard throwNPE, since we
                 * need to build a new object and all.  We should correctly
                 * end up at the internal or parent handler because of
                 * the tdata->jmpbuf setting. */
                code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_throwNPE));
                code.NOP ();    // fill delay slot
                /* Continue here */
                code.PatchDisp22 (boffs, (code.nextByteOffs() - boffs) >>> 2);
                if (0 < m.handlers.length) {
                    /* We have a local handler set.  Store the exception object
                     * into the tdata->exception buffer, then jump to the address
                     * where we're ready to check it. */
                    code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o7");
                    code.ST ("%o0", "%o7", getFieldOffset (OID_mythread_exception));
                    code.BA ((code.localHandlerTarget - code.nextByteOffs ()) >>> 2);
                    code.NOP (); // fill delay slot
                } else {
                    /* No local handler.  Call the athrow function. */
                    code.reserveCode (CodeBlock.brACALL, i, "noreg", getFuncAddr (FID_athrow));
                    code.NOP ();    // fill delay slot
                }
                /* Under no circumstances should we reach here. */
                code.UNIMP (167);
                break;
            case Opcode.MENTR: /* monitorenter */
            case Opcode.MEXIT: /* monitorexit */
                if (0 >= m.handlers.length) {
                    throw new InternalError ("monitorenter/exit encountered with no handlers available");
                }
                /* monitor{enter,exit} (topofstack, tdata, pc+1, &pc); */
                code.popES ("%o0");
                code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o1");
                code.SETHI (1+i.pc, "%o2");
                code.SetLo (1+i.pc, "%o2");
                code.ADD ("%fp", excOheadOffs [ARLV_pc], "%o3");
                code.reserveCode (CodeBlock.brACALL, i, "noreg",
                                  getFuncAddr ((Opcode.MENTR == opc.code)
                                                  ? FID_monitorenter
                                                  : FID_monitorexit));
                code.NOP ();    // fill delay slot
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
        /* If we have handler support, restore the tdata jump buffer */
        if (0 < m.handlers.length) {
            // tdata->jmpbuf = oldbuf;
            code.LD ("%fp", excOheadOffs [ARLV_oldbuf], "%o7");
            code.LD ("%fp", excOheadOffs [ARLV_tdata], "%l0");
            code.ST ("%o7", "%l0", getFieldOffset (OID_mythread_jmpbuf));
        }
         
        /* Emit a ret/restore pair. */
        code.RET ();
        code.RESTORE ();
    }

    private void
    EmitExceptHandle (Method m)
    {
        int boffs_setjmp;       // Local backpatch info for setjmp conditional
        int boffs_findhandler;  // Local backpatch info for findhandler conditional
        
        /* Allocate memory in uncollected memory (because the address
         * will only exist in broken 19+13 form) to hold the exception
         * table.  The values in the table will be filled in during
         * code resolution. */
        code.handlerTableAddress = allocUncolMemory (m.handlers.length * (4 + 2 + 2 + 4));

        // tdata = mythread ();
        if (4 != excOheadSize [ARLV_tdata]) {
            throw new InternalError ("incorrect size for tdata var");
        }
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_mythread));
        code.NOP ();
        code.ST ("%o0", "%fp", excOheadOffs [ARLV_tdata]);

        // oldbuf = tdata->jmpbuf
        if (4 != excOheadSize [ARLV_oldbuf]) {
            throw new InternalError ("incorrect size for oldbuf var");
        }
        code.LD ("%o0", getFieldOffset (OID_mythread_jmpbuf), "%o7");
        code.ST ("%o7", "%fp", excOheadOffs [ARLV_oldbuf]);

        // if (setjmp (newbuf)) {
        code.ADD ("%fp", excOheadOffs [ARLV_newbuf], "%o0");
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_setjmp));
        code.NOP ();
        code.TST ("%o0");
        boffs_setjmp = code.nextByteOffs ();
        code.BE (0);
        code.NOP ();

        //    sthread_got_exception ();
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_sthread_got_exc));
        code.NOP ();
        // CATCH: here's where locally-generated exceptions jump to
        code.localHandlerTarget = code.nextByteOffs ();
        //    tgt = findhandler (htable, hlen, tdata->exception, pc);
        code.SETHI ((int) code.handlerTableAddress, "%o0");
        code.SetLo ((int) code.handlerTableAddress, "%o0");
        code.MOV (m.handlers.length, "%o1");
        code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o7");
        code.LD ("%o7", getFieldOffset (OID_mythread_exception), "%o2");
        code.MOV ("%o2", "%l0");
        code.LD ("%fp", excOheadOffs [ARLV_pc], "%o3");
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_findhandler));
        code.NOP ();
        //    if (-1 == tgt) {
        code.CMP ("%o0", -1);
        boffs_findhandler = code.nextByteOffs ();
        code.BNE (0);
        code.NOP ();
        //       longjmp (oldbuf, 1)
        code.LD ("%fp", excOheadOffs [ARLV_oldbuf], "%o0");
        code.MOV (1, "%o1");
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_longjmp));
        code.NOP ();
        //    }
        code.PatchDisp22 (boffs_findhandler, (code.nextByteOffs() - boffs_findhandler) >>> 2);
        //    DO NOT reset eval stack
        /* DO NOT Initialize the register we use for the evaluation stack pointer. */
        code.ADD ("%fp", LVOffs (m.max_locals), "%l7");
        // tdata->jmpbuf = newbuf
        code.ADD ("%fp", excOheadOffs [ARLV_newbuf], "%o7");
        code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o0");
        code.ST ("%o7", "%o0", getFieldOffset (OID_mythread_jmpbuf));

        //    push exception object (saved in %l0 from call to findhandler)
        code.pushES ("%l0");
        //    goto tgt;
        code.JMPL ("%o0", "%g0", "%g0");
        code.NOP ();
        // }
        code.PatchDisp22 (boffs_setjmp, (code.nextByteOffs() - boffs_setjmp) >>> 2);
        // tdata->jmpbuf = newbuf;
        code.ADD ("%fp", excOheadOffs [ARLV_newbuf], "%o7");
        code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o0");
        code.ST ("%o7", "%o0", getFieldOffset (OID_mythread_jmpbuf));

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
        /* Allocate the AR.  Six arg words get in free; don't muck with aw,
         * because we'll need it later. No registers are saved by this
         * prologue. */
        Prologue (m, (6 <= aw) ? (aw - 6) : 0);

        // If this is an instance method, we have to save the object reference
        // so we can unlock it in the case of an exception exit.
        if (0 == (m.fl.access & ClassData.ACC_STATIC)) {
            code.ST ("%i0", "%fp", excOheadOffs [ARLV_insref]);
        }

        // monitorheld = 0
        code.ST ("%g0", "%fp", excOheadOffs [ARLV_monitorheld]);
        
        // tdata = mythread ();
        if (4 != excOheadSize [ARLV_tdata]) {
            throw new InternalError ("incorrect size for tdata var");
        }
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_mythread));
        code.NOP ();
        code.ST ("%o0", "%fp", excOheadOffs [ARLV_tdata]);

        // oldbuf = tdata->jmpbuf
        if (4 != excOheadSize [ARLV_oldbuf]) {
            throw new InternalError ("incorrect size for oldbuf var");
        }
        code.LD ("%o0", getFieldOffset (OID_mythread_jmpbuf), "%o7");
        code.ST ("%o7", "%fp", excOheadOffs [ARLV_oldbuf]);

        // if (setjmp (newbuf)) {
        code.ADD ("%fp", excOheadOffs [ARLV_newbuf], "%o0");
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_setjmp));
        code.NOP ();
        code.TST ("%o0");
        boffs_setjmp = code.nextByteOffs ();
        code.BE (0);
        code.NOP ();

        //    sthread_got_exception ();
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_sthread_got_exc));
        code.NOP ();

        //    if (monitorheld) {
        code.LD ("%fp", excOheadOffs [ARLV_monitorheld], "%o7");
        code.TST ("%o7");
        boffs_mhtest = code.nextByteOffs ();
        code.BE (0);
        code.NOP ();            // fill delay slot

        if (0 != (m.fl.access & ClassData.ACC_STATIC)) {
            // exitclass (&clptr, tdata, 0, &monitor_held);
            code.reserveCode (CodeBlock.brLOADNatCl, (Instr) null, "%o0", m.cl.myRef);
            code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o1");
            code.MOV ("%g0", "%o2");
            code.ADD ("%fp", excOheadOffs [ARLV_monitorheld], "%o3");
            code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_exitclass));
            code.NOP ();
        } else {
            // monitorexit (instanceref, tdata, 0, &monitor_held);
            code.LD ("%fp", excOheadOffs [ARLV_insref], "%o0");
            code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o1");
            code.MOV ("%g0", "%o2");
            code.ADD ("%fp", excOheadOffs [ARLV_monitorheld], "%o3");
            code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_monitorexit));
            code.NOP ();
        }
        //    }
        code.PatchDisp22 (boffs_mhtest, (code.nextByteOffs() - boffs_mhtest) >>> 2);
        //    tdata->jmpbuf = oldbuf;
        code.LD ("%fp", excOheadOffs [ARLV_oldbuf], "%o7");
        code.LD ("%fp", excOheadOffs [ARLV_tdata], "%l0");
        code.ST ("%o7", "%l0", getFieldOffset (OID_mythread_jmpbuf));
        //    athrow (tdata->exception);
        code.LD ("%l0", getFieldOffset (OID_mythread_exception), "%o0");
        code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_athrow));
        code.NOP ();    // fill delay slot
        // }

        code.PatchDisp22 (boffs_setjmp, (code.nextByteOffs() - boffs_setjmp) >>> 2);
        // tdata->jmpbuf = newbuf;
        code.ADD ("%fp", excOheadOffs [ARLV_newbuf], "%o7");
        code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o0");
        code.ST ("%o7", "%o0", getFieldOffset (OID_mythread_jmpbuf));

        if (0 != (m.fl.access & ClassData.ACC_STATIC)) {
            // enterclass (&clptr, tdata, 1, &monitor_held);
            code.reserveCode (CodeBlock.brLOADNatCl, (Instr) null, "%o0", m.cl.myRef);
            code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o1");
            code.MOV (1, "%o2");
            code.ADD ("%fp", excOheadOffs [ARLV_monitorheld], "%o3");
            code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_enterclass));
            code.NOP ();
        } else {
            // monitorexit (instanceref, tdata, 1, &monitor_held);
            code.MOV ("%i0", "%o0");
            code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o1");
            code.MOV (1, "%o2");
            code.ADD ("%fp", excOheadOffs [ARLV_monitorheld], "%o3");
            code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_monitorenter));
            code.NOP ();
        }
        // callfn ()
        for (i = 0; i < aw; i++) {
            if (6 > aw) {
                code.MOV ("%i" + i, "%o" + i);
            } else {
                code.LD ("%fp", SPARC.ARGPUSH + (i-6)*4, "%o7");
                code.ST ("%o7", "%sp", SPARC.ARGPUSH + (i-6)*4);
            }
        }
        /* Reserve space for a call instruction, which we'll generate once
         * we know where the wrapper ends and the real code begins. */
        code.syncwrap_calloffs = code.nextByteOffs ();
        code.CALL (0);
        code.NOP ();            // fill delay slot

        // Save return value over monitor release call
        rtype = m.fl.signature.charAt (m.fl.signature.indexOf (')') + 1);
        switch (rtype) {
            case Field.FT_long:
                code.ST ("%o1", "%fp", 4 - (SPARC.ALUFPUXFERSIZE + overheadSize));
                /*FALLTHRU*/
            case Field.FT_byte:
            case Field.FT_char:
            case Field.FT_int:
            case Field.FT_object:
            case Field.FT_short:
            case Field.FT_boolean:
            case Field.FT_array:
                code.ST ("%o0", "%fp", (SPARC.ALUFPUXFERSIZE + overheadSize));
                break;
            case Field.FT_float:
                code.STF ("%f0", "%fp", (SPARC.ALUFPUXFERSIZE + overheadSize));
                code.FpushES ("%f0");
                break;
            case Field.FT_double:
                code.STDF ("%f0", "%fp", (SPARC.ALUFPUXFERSIZE + overheadSize));
                break;
            case Field.FT_void:
                break;
        }

        if (0 != (m.fl.access & ClassData.ACC_STATIC)) {
            // exitclass (&clptr, tdata, 0, &monitor_held);
            code.reserveCode (CodeBlock.brLOADNatCl, (Instr) null, "%o0", m.cl.myRef);
            code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o1");
            code.MOV ("%g0", "%o2");
            code.ADD ("%fp", excOheadOffs [ARLV_monitorheld], "%o3");
            code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_exitclass));
            code.NOP ();
        } else {
            // monitorexit (instanceref, tdata, 0, &monitor_held);
            code.LD ("%fp", excOheadOffs [ARLV_insref], "%o0");
            code.LD ("%fp", excOheadOffs [ARLV_tdata], "%o1");
            code.MOV ("%g0", "%o2");
            code.ADD ("%fp", excOheadOffs [ARLV_monitorheld], "%o3");
            code.reserveCode (CodeBlock.brACALL, (Instr) null, "noreg", getFuncAddr (FID_monitorexit));
            code.NOP ();
        }
        // tdata->jmpbuf = oldbuf;
        code.LD ("%fp", excOheadOffs [ARLV_oldbuf], "%o7");
        code.LD ("%fp", excOheadOffs [ARLV_tdata], "%l0");
        code.ST ("%o7", "%l0", getFieldOffset (OID_mythread_jmpbuf));
        // Load return value
        switch (rtype) {
            case Field.FT_long:
                code.LD ("%fp", 4 - (SPARC.ALUFPUXFERSIZE + overheadSize), "%i1");
                /*FALLTHRU*/
            case Field.FT_byte:
            case Field.FT_char:
            case Field.FT_int:
            case Field.FT_object:
            case Field.FT_short:
            case Field.FT_boolean:
            case Field.FT_array:
                code.LD ("%fp", (SPARC.ALUFPUXFERSIZE + overheadSize), "%i0");
                 break;
             case Field.FT_float:
                 code.LDF ("%fp", (SPARC.ALUFPUXFERSIZE + overheadSize), "%f0");
                 code.FpushES ("%f0");
                 break;
             case Field.FT_double:
                 code.LDDF ("%fp", (SPARC.ALUFPUXFERSIZE + overheadSize), "%f0");
                 break;
             case Field.FT_void:
                 break;
        }
        // return
        code.RET ();
        code.RESTORE ();
        
        /* We want to backpatch the call to start here.  However, we're
         * still in append mode for code generation, so save the offset
         * we're going to use for the call, and backapatch it when we've
         * fixed the code buffer. */
        code.syncwrap_calltarg = code.nextByteOffs ();

        return;
    }


    /** Compile just-in-time (sorta) SPARC code for this method.
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
        
        /* Abstract methods don't do anything.  Shouldn't even be here. */
        if (0 != (mf.access & ClassData.ACC_ABSTRACT)) {
            throw new InternalError ("Attempt to generate code for abstract method " + c + "." + m);
        }

        /* Create a new instance of the SPARC subclass of MethodCode,
         * and assign it to this method.  Store it locally, so we
         * can generate code easily. */
        code = (SPARC) m.setMethodCode (new SPARC (m));

        /* Native methods, if unsynchronized, should simply stuff the
         * entry point into the code structure and return.  So far, I
         * don't know how to get that entry point. */
        if (ClassData.ACC_NATIVE == (mf.access & (ClassData.ACC_NATIVE | ClassData.ACC_SYNCHRONIZED))) {
            throw new InternalError ("JIT compilation of unsynchronized native method unsupported");
        }

//        System.err.println ("Into code generator for class " + c + " and method " + m);
//        System.err.println ("The method calls itself " + mf.name + "; which in C will be " + mf.cname);
//        System.err.println ("The signature is " + mf.signature);
//        System.err.println ("Max stack is " + m.max_stack + " and max locals is " + m.max_locals);

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
            EmitCode (m, i);
        }

        /* Close everything up */
        Epilogue (m);
        
        /* Call installCode once so we assign and initialize the actual
         * address.  The code isn't actually usable until it's been
         * linked. */
        code.installCode ();

//        code.dumpHex();

        /* Return the MethodCode instance. */
        return code;
    }

};
// Local Variables:
// c-basic-offset: 4
// End:
