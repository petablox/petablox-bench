/**
  * Implementation of CodeBlock for Intel Architecture systems
  * @version $Id: Intel86.java,v 1.10 1999/04/06 03:30:36 pab Exp $
  * @author Peter A. Bigot
  *
  * DO NOT MODIFY THIS FILE.  It is generated from $RCSFile$ automatically
  * by a macro preprocessor.
  */


/* This is part of the Just-In-Time compiler for the Toba system. */
package toba.jit;

/* We need the basic Toba runtime data structures, and the classfile
 * structures. */
import java.io.*;
import toba.classfile.*;
import toba.runtime.*;

class
Intel86
extends CodeBlock
{

    private void
    BasicInit ()
    {
        setBVlength (8);
        setLittleEndian (true);
        setCheckWordAlign (false);
        setJumpFromNextInstr (true);
    }

    public 
    Intel86 (Method m,
             int imax)
    {
        super (m, imax);
        BasicInit ();
    }
    public
    Intel86 (Method m)
    {
        super (m);
        BasicInit ();
    }

    /** Activation record layout for JIT-compiled Intel86 code
      *
      *       |                               |
      *       |-------------------------------|
      *       | incoming call parameter ...   |
      *       |-------------------------------|
      *       | incoming call parameter 1     |
      *       |-------------------------------|
      *       | incoming call parameter 0     |
      *       |-------------------------------| <- %ebp+8
      *       | return address                |
      *       |-------------------------------| <- %ebp+4 ; incoming %esp
      *       | saved %ebp                    |
      * %ebp->|-------------------------------|
      *       | callee saved regs (si,di,bx)  |
      *       |-------------------------------|\ <- %ebp-overheadOffs
      *       |  sync method instance object  | |
      *       |-------------------------------| |
      *       |  struct mythread * tdata      | |
      *       |-------------------------------| > Local data structures required
      *       |  void * oldbuf                | | for handling of exceptions.
      *       |-------------------------------| | Block is absent from frames
      *       |  volatile int pcormheld       | | that don't need it.  Size
      *       |-------------------------------| | overheadSize is kept in the 
      *       |  jmpbuf newbuf (non-const len)| | JITCodeGen instance.
      *       |-------------------------------|-/ <- %ebp-overheadOffs-overheadSize
      *       | JVM evaluation stack top      | (conceptually at LV(-1))
      *       |-------------------------------|
      *       | JVM local variables           |
      *       |-------------------------------|
      *       | JVM evaluation stack          |
      *       |-------------------------------| <- %ebp - LVBase = initial %esp
      * %esp->| X86 eval stack                |
      *       |-------------------------------|
      *
      * Don't mix the JVM and X86 stacks; there are cases where we need
      * to pretend to drop things off the JVMstack in case a called
      * function throws an exception, but we still need them for a little
      * while if it doesn't.
      *
      * The integer eStackBase in this module is set to the (positive)
      * distance from %ebp of the JVM estack; the value eStackCurTop
      * is set at the start of code generation for an JVM instruction,
      * and indicates the offset from %ebp to the top of the evaluation
      * at the start of the instruction.  It is modified herein by the
      * push/popES routines.  This eliminates the need for runtime maintenance
      * of the evaluation stack pointer.
      */
    static final int AR_RIP_SIZE = 4;
    static final int AR_EBP_SIZE = 4;
    static final int AR_ESI_SIZE = 4;
    static final int AR_EDI_SIZE = 4;
    static final int AR_EBX_SIZE = 4;

    /* Pseudo-enumeration to describe the type of an operand: constant,
     * register, memory reference, or missing */
    private static final int OT_imm = 1;
    private static final int OT_reg = 2;
    private static final int OT_mem = 3;
    private static final int OT_fpstack = 4;
    private static final int OT_absent = 5;
    
    private static void
    emitByteArray (byte rv[])
    {
        int i;
        
        for (i = 0; i < rv.length; i++) {
            int bv = 0xFF & rv [i];
            if (0x10 > bv) {
                System.out.print ("0" + Integer.toHexString (0xFF & rv [i]) + " ");
            } else {
                System.out.print (Integer.toHexString (0xFF & rv [i]) + " ");
            }
            if (15 == (i % 16)) {
                System.out.println ();
            }
        }
        if (0 != (i % 16)) {
            System.out.println ();
        }
        return;
    }

    protected static int CND_o   = 0x00;
    protected static int CND_no  = 0x01;
    protected static int CND_b   = 0x02;
    protected static int CND_nae = CND_b;
    protected static int CND_nb  = 0x03;
    protected static int CND_ae  = CND_nb;
    protected static int CND_e   = 0x04;
    protected static int CND_z   = CND_e;
    protected static int CND_ne  = 0x05;
    protected static int CND_nz  = CND_ne;
    protected static int CND_be  = 0x06;
    protected static int CND_na  = CND_be;
    protected static int CND_nbe = 0x07;
    protected static int CND_a   = CND_nbe;
    protected static int CND_s   = 0x08;
    protected static int CND_ns  = 0x09;
    protected static int CND_p   = 0x0a;
    protected static int CND_pe  = CND_p;
    protected static int CND_np  = 0x0b;
    protected static int CND_po  = CND_np;
    protected static int CND_l   = 0x0c;
    protected static int CND_nge = CND_l;
    protected static int CND_nl  = 0x0d;
    protected static int CND_ge  = CND_nl;
    protected static int CND_le  = 0x0e;
    protected static int CND_ng  = CND_le;
    protected static int CND_nle = 0x0f;
    protected static int CND_g   = CND_nle;

    /* Set this once: it's the positive offset, in bytes, from %ebp, to
     * the top of the JVM evaluation stack. */
    private int eStackBase;
    protected int
    setEStackBase (int esb)
    {
        int ov = eStackBase;
        eStackBase = esb;
        return ov;
    }            

    /* Relative offset (add to %ebp) of the current top-of-stack */
    private int eStackOffs;

    /** Set the current top-of-stack to be so-many words down the JVM
      * evaluation stack. */
    protected void
    setEStackTop (int nw)
    {
        int ov = eStackOffs;
        eStackOffs = - (eStackBase + 4 * nw);
        return;
    }

    public int
    getEStackDepth ()
    {
        return (eStackOffs + eStackBase) / -4;
    }

    /** Create a memory-style operand string refering to offs bytes from
      * %ebp. */
    private MemoryRef
    relBPop (int offs)
    {
        return new MemoryRef (new Immediate (offs), Register.R_ebp);
    }

    /* We're going to push something.  Return the offset from %ebp where the
     * value should go, and update the stack pointer */
    protected int
    pushEStackOffs ()
    {
        eStackOffs -= 4;
        return eStackOffs;
    }
    protected int
    popEStackOffs ()
    {
        eStackOffs += 4;
        return eStackOffs - 4;
    }
    protected int
    tossEStackOffs (int nw)
    {
        eStackOffs += 4 * nw;
        return eStackOffs;
    }
    protected int
    peekEStackOffs (int nw)
    {
        return eStackOffs + 4 * nw;
    }
    
    /** Look at a string and determine what kind of operand it represents.
      * @param s String representation of operand
      * @returns int OT_type for type of operand
      */
    private static int
    OpType (Object s)           // String operand
    {
        char c;
        
        /* Missing operands tagged as "absent" */
        if (null == s) {
            return OT_absent;
        }
        if (s instanceof Register) {
            Register r = (Register) s;
            return (r.isFPReg ()) ? OT_fpstack : OT_reg;
        }
        if (s instanceof MemoryRef) {
            return OT_mem;
        }
        if (s instanceof Immediate) {
            return OT_imm;
        }
        /* Anything else is bogus. */
        throw new InternalError ("x86: Invalid operand: " + s);
    }

    /** Return true iff the integer value fits in an 8-bit byte.
      * @param v value of integer
      * @returns boolean true if in range for 8bit entity
      */
    private static boolean
    fitsin8bit (int v)
    {
        return ((-128 <= v) && (v <= 127));
    }

    /** Build a mod/rm sequence: this is the mod/rm byte, the sib (if present),
      * and the displacement.
      * @param src Source operand
      * @param dst Dest operand
      * @returns byte[] Array of bytes encoding instruction */
    private byte []
    makeModRM (Object src,         // Source register, immediate, memory, null
               Object dst)         // Destination register, memory
    {
        int sot;                // Optype of src
        int dot;                // Optype of dst
        byte rv [];             // Instruction byte sequence
        int rvs;                // Number of bytes in rv so far
        int mod;                // "mod" field of ModR/M byte
        int reg;                // "reg" field of ModR/M byte
        int rm;                 // "r/m" field of ModR/M byte
        int sibv;               // value of sibv; -1 if not present
        boolean emitdisp;       // If true, emit a displacement
        int dispv;              // value of displacement
        boolean smdisp;         // If true, emit 8bit displacement

        // ModR/M + SIB + 32-bit displ
        rv = new byte [1 + 1 + 4];
        rvs = 0;

        /* Initialize src/dst type information */
        sot = OpType (src);
        dot = OpType (dst);
        
        /* Operations with memory source and register dest need to
         * swap source and dest, and set the direction bit, because
         * memory operands can only be placed in the r/m field
         * of the Mod-R/M byte, which with direction=0 specifies the
         * destination operand. */
        if ((OT_mem == sot) && (OT_reg == dot)) {
            int xot = sot;
            sot = dot;
            dot = xot;
            Object tmp = src;
            src = dst;
            dst = tmp;
        }

        /* If the destination type is memory (only one that can be memory),
         * parse it.  Set the smdisp flag to indicate whether the displacement
         * value fits in an 8-bit immediate.  Compute the SIB byte value,
         * if appropriate. */
        sibv = -1;
        emitdisp = false;
        dispv = 0;
        smdisp = true;

        mod = 0x03;             // assume OT_reg for dst
        reg = 0x00;             // reg component is 0 unless specified
        rm = 0x00;              // r/m is 0 unless specified
        if (OT_mem == dot) {
            int sibd;           // Encoded memory component structure
            int sf;             // Scale factor encoding bits in SIB
            int i;              // General index
            String illegal;     // If set, indicates why operation is illegal
            MemoryRef mdst;     // MemoryRef reference to destination operand

            /* Assume no problems with component interactions */
            illegal = null;

            /* Simplify life by referring to this through its natural class. */
            mdst = (MemoryRef) dst;
            
            /* Extract disp.  Emit if it's nonzero; emit small if possible */
            dispv = mdst.getDisplacement ();
            emitdisp = (0 != dispv);
            smdisp = fitsin8bit (dispv);

            /* Assume this is a pure base-only . */
            mod = 0x00;
            if (emitdisp) {
                /* Not base-only; use 8 or 32bit displacement version */
                mod = (smdisp ? 0x01 : 0x02);
            }
            /* Compute the integer value of the scale bits in the SIB */
            sf = mdst.getScaleBits ();

            /* Encode the operand components into a 4-bit integer, so we can
             * pick what type of operand this is and compute the necessary
             * SIB and other fields. */
            sibd = ((((1 != mdst.getScaleFactor())    ? 1 : 0) << 3) |
                    (((null != mdst.getIndexReg()) ? 1 : 0) << 2) |
                    (((null != mdst.getBaseReg())  ? 1 : 0) << 1) |
                    (((0 != dispv)             ? 1 : 0) << 0));


            /* What to do to encode the operand is highly nontrivial.  Rather
             * than try to optimize common cases, or combine common settings,
             * we just deal with each separately.  The modrm file contains
             * the analysis on which the switches are based. */
            switch (sibd) {
/*
# Id: modrm,v 1.2 1997/08/16 18:00:14 pab Exp 
# ModR/M and SIB definition for memory operands

scale: 0 iff (1 == scale)
index: 0 iff (undefined index)
base: 0 iff (undefined base)
disp: 0 iff (0 == disp)

scale	index	base	disp	MOD	RM	sib?
0	0	0	0
  set emitdisp to true/8bit and use
				00	101	-
*/
                case 0x00:
                    emitdisp = true;
                    smdisp = true;
                    mod = 0x00;
                    rm = 0x05;
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
0	0	0	1	00	101	-
*/
                case 0x01:
                    mod = 0x00;
                    rm = 0x05;
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
0	0	1	0	
  if base is %esp		00	100	(00)(100)(brn)
  if base is %ebp, set emitdisp to true/8bit and use
				01	brn	-
  else				00	brn	-
*/
                case 0x02:
                    if (Register.R_esp == mdst.getBaseReg ()) {
                        mod = 0x00;
                        rm = 0x04;
                        sibv = 0x24;
                        break;
                    }
                    if (Register.R_ebp == mdst.getBaseReg ()) {
                        emitdisp = true;
                        smdisp = true;
                        mod = 0x01;
                        rm = mdst.getBaseReg ().getRegBitName();
                        break;
                    }
                    mod = 0x00;
                    rm = mdst.getBaseReg ().getRegBitName ();
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
0	0	1	1
  if base is %esp		dm	100	(00)(100)(brn)
  else				dm	brn	-
*/
                case 0x03:
                    if (Register.R_esp == mdst.getBaseReg ()) {
                        rm = 0x04;
                        sibv = 0x24;
                    }
                    rm = mdst.getBaseReg ().getRegBitName ();
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
0	1	0	0
  if index is %esp,		illegal (index %esp)
  if index is %ebp, set emitdisp to true/8bit and use
                                01      irn     -
  else                          00      irn     -
*/
                case 0x04:
                    /* Illegal %esp index caught by verify */
                    if (Register.R_ebp == mdst.getIndexReg ()) {
                        emitdisp = true;
                        smdisp = true;
                        mod = 0x01;
                        rm = mdst.getIndexReg ().getRegBitName ();
                        break;
                    }
                    mod = 0x00;
                    rm = mdst.getIndexReg ().getRegBitName ();
                    break;
/*                    
scale	index	base	disp	MOD	RM	sib?
0	1	0	1
  if index is %esp              illegal (index %esp)
  else				dm	irn	-
*/
                case 0x05:
                    /* Illegal %esp index caught by verify */
                    rm = mdst.getIndexReg ().getRegBitName ();
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
0	1	1	0
  if index is %esp,		illegal (index %esp)
  if index and base are both %ebp, set emitdisp true/8bit, and use
				01	100	(00)(irn)(brn)
  if base is %ebp, swap index and base, fallthru
  use always:			00	100	(00)(irn)(brn)
*/
                case 0x06:
                    /* Illegal %esp index, %ebp base, caught by verify */
                    if ((Register.R_ebp == mdst.getIndexReg ()) &&
                        (Register.R_ebp == mdst.getBaseReg ())) {
                        emitdisp = true;
                        smdisp = true;
                        mod = 0x01;
                        rm = 0x04;
                        sibv = 0x2D;
                        break;
                    }
                    mod = 0x00;
                    rm = 0x04;
                    sibv = (((mdst.getIndexReg().getRegBitName()) << 3) |
                            (mdst.getBaseReg().getRegBitName()));
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
0	1	1	1	dm	100	(00)(irn)(brn)
*/
                case 0x07:
                    rm = 0x04;
                    sibv = (((mdst.getIndexReg().getRegBitName()) << 3) |
                            (mdst.getBaseReg().getRegBitName()));
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
1	0	0	0	illegal
1	0	0	1	illegal
1	0	1	0	illegal
1	0	1	1	illegal
*/
                case 0x08:
                case 0x09:
                case 0x0A:
                case 0x0B:
                    illegal = "scale without index";
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
1	1	0	0
  if index is %esp		illegal
  else set emitdisp to true/32bit, and use
			 	00	100	(sf)(irn)(101)
*/
                case 0x0C:
                    /* Illegal %esp index caught by verify */
                    emitdisp = true;
                    smdisp = false; // special case 00/100 is a 32bit disp
                    mod = 0x00;
                    rm = 0x04;
                    sibv = (sf << 6) | (mdst.getIndexReg ().getRegBitName() << 3) | 0x05;
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
1	1	0	1
  index is %esp                 illegal (index %esp)
  else set emitdisp to true/32bit, and use
	                        00      100     (sf)(irn)(101)
*/
                case 0x0D:
                    mod = 0x00;
                    rm = 0x04;
                    smdisp = false; // special case 00/100 is a 32bit disp
                    sibv = (sf << 6) | (mdst.getIndexReg ().getRegBitName() << 3) | 0x05;
                    break;
/*                    
scale	index	base	disp	MOD	RM	sib?
1	1	1	0
  if index is %esp		illegal (index %esp)
  if base is %ebp, set emitdisp to true/8bit and use
				01	100	(sf)(irn)(brn)
  else:				00	100	(sf)(irn)(brn)
*/
                case 0x0E:
                    /* Illegal %esp index caught by verify */
                    if (Register.R_ebp == mdst.getBaseReg ()) {
                        emitdisp = true;
                        smdisp = true;
                        mod = 0x01;
                        rm = 0x04;
                        sibv = ((sf << 6) |
                                ((mdst.getIndexReg().getRegBitName()) << 3) |
                                (mdst.getBaseReg().getRegBitName()));
                        break;
                    }
                    mod = 0x00;
                    rm = 0x04;
                    sibv = ((sf << 6) |
                            ((mdst.getIndexReg().getRegBitName()) << 3) |
                            (mdst.getBaseReg().getRegBitName()));
                    break;
/*
scale	index	base	disp	MOD	RM	sib?
1	1	1	1
  if index is %esp		illegal
  else				dm	100	(sf)(irn)(brn)
*/
                case 0x0F:
                    /* Illegal %esp index caught by verify */
                    rm = 0x04;
                    sibv = ((sf << 6) |
                            ((mdst.getIndexReg().getRegBitName()) << 3) |
                            (mdst.getBaseReg().getRegBitName()));
                    break;
                default:
                    throw new InternalError ("Illegal sibd value");
            }

            /* Report any errors we discovered */
            if (null != illegal) {
                throw new InternalError ("x86: Illegal mem operand: " + illegal);
            }
        }

        /* Set up or override the fields based on the types of the
         * source and dest.  This does basic sanity checking given what
         * it knows; the caller must have already verified that the sot/dot
         * do not specify an operand set that is inappropriate for the
         * operation. */
        switch ((sot << 4) + dot) {
            case ((OT_reg << 4) + OT_reg):
                /* Can't mix 8 and 32bit registers */
                if (((Register)src).is8BitReg() != ((Register)dst).is8BitReg ()) {
                    throw new InternalError ("x86: Mixing 8bit (" + src
                                             + ") and 32bit (" + dst
                                             + ") registers");
                }
                reg = ((Register)src).getRegBitName ();
                rm = ((Register)dst).getRegBitName ();
                break;
            case ((OT_reg << 4) + OT_mem):
                reg = ((Register)src).getRegBitName ();
                break;
            case ((OT_absent << 4) + OT_reg):
            case ((OT_imm << 4) + OT_reg):
            case ((OT_absent << 4) + OT_fpstack):
                rm = ((Register)dst).getRegBitName ();
                break;
            case ((OT_imm << 4) + OT_mem):
            case ((OT_absent << 4) + OT_mem):
                // Everything's already set up.
                break;
            default:
                throw new InternalError ("Invalid src,dst types (" + sot + ", " + dot + ")");
        }

        rvs = 0;

        /* Build the ModR/M byte. */
        rv [rvs++] = (byte) ((mod << 6) | (reg << 3) | rm);

        /* Add the SIB byte, if present */
        if (0 <= sibv) {
            rv [rvs++] = (byte) sibv;
        }

        /* Add displacement, of appropriate length, if present. */
        if (emitdisp) {
            if (smdisp) {
                rv [rvs++] = (byte) dispv;
            } else {
                /* Store little-endian */
                rv [rvs++] = (byte) ((dispv >>  0) & 0xFF);
                rv [rvs++] = (byte) ((dispv >>  8) & 0xFF);
                rv [rvs++] = (byte) ((dispv >> 16) & 0xFF);
                rv [rvs++] = (byte) ((dispv >> 24) & 0xFF);
            }
        }

        /* Return an array that's exactly the right size, since the
         * caller can't infer the length. */
        byte nrv[] = new byte [rvs];
        while (0 <= --rvs) {
            nrv [rvs] = rv [rvs];
        }

        return nrv;
    }


    /** Build a mod/rm sequence for a unary operation, where the reg
      * field encodes a 3-bit opcode modifier.
      * @param auxop 3-bit opcode modifier
      * @param dst Dest operand
      * @returns byte[] Array of bytes encoding instruction */
    private byte []
    makeModRM (int auxop,       // Opcode modifier
               Object op)       // Singleton operand
    {
        byte rv [];

        rv = makeModRM (null, op);
        /* Replace the reg field with the opcode modifier.  There better
         * not be anything there already. */
        if (0 != (rv [0] & 0x38)) {
            throw new InternalError ("Intel86: Unexpected extopcode ModRM value " + Integer.toHexString (rv [0]));
        }
        if ((auxop & 0x07) != auxop) {
            throw new InternalError ("Intel86: Opcode modifier too big: " + Integer.toHexString (auxop));
        }
        rv [0] |= (auxop << 3);
        return rv;
    }

    /** Combine an opcode, modrm, and immediate sequence into an Intel86
      * instruction, and store it into the code block.
      * @param opcode array of opcode
      * @param modrm array of modrm, sib, and displacement
      * @param immed immediate operand
      * @returns byte[] instruction bytes. */
    private byte []
    encode (byte opcode[],      // Opcode
            byte modrm[],       // Mod/RM and displacement
            byte immed[])       // Immediate operand
    {
        byte rv [];             // Resulting instruction array
        int rvs;                // Length of instruction so far
        int i;                  // Index over instruction component arrays

        /* Figure out how long this thing should be. */
        rvs = 0;
        if (null != opcode) {
            rvs += opcode.length;
        }
        if (null != modrm) {
            rvs += modrm.length;
        }
        if (null != immed) {
            rvs += immed.length;
        }
        /* Allocate the array, and copy each component into it
         * in turn. */
        rv = new byte [rvs];
        rvs = 0;
        if (null != opcode) {
            i = 0;
            while (i < opcode.length) {
                rv [rvs++] = opcode [i++];
            }
        }
        if (null != modrm) {
            i = 0;
            while (i < modrm.length) {
                rv [rvs++] = modrm [i++];
            }
        }
        if (null != immed) {
            i = 0;
            while (i < immed.length) {
                rv [rvs++] = immed [i++];
            }
        }
        /* Add the instruction to the end of the code block. */
        return addByteArray (rv);
    }

    /** Return a single-element byte array with parameter as element.
      * @param b0 value to store in array
      * @returns byte[] array of b0
      */
    private byte []
    makeByteArray (int b0)
    {
        byte rv [] = new byte [1];
        rv [0] = (byte) b0;
        return rv;
    }

    /** Return a two-element byte array with parameters as elements.
      * @param b0 value to store in array
      * @param b1 value to store in array
      * @returns byte[] array of b0 and b1
      */
    private byte []
    makeByteArray (int b0,
                   int b1)
    {
        byte rv [] = new byte [2];
        rv [0] = (byte) b0;
        rv [1] = (byte) b1;
        return rv;
    }

    /** Convert an Immediate operand into a byte array of its value, stored
      * little-endian, and to the size required.
      * @param im immedate operand
      * @returns byte[] array of encoded immediate
      */
    private byte []
    makeByteArray (Immediate im)
    {
        byte rv [];
        int rvs;
        int immv;

        rvs = 0;
        immv = im.getValue ();

        switch (im.getImmSize ()) {
            case 1:
                rv = new byte [1];
                rv [rvs++] = (byte) immv;
                break;
            case 2:
                /* Store little-endian */
                rv = new byte [2];
                rv [rvs++] = (byte) immv;
                rv [rvs++] = (byte) ((immv >> 8) & 0xFF);
                break;
            case 4:
                /* Store little-endian */
                rv = new byte [4];
                rv [rvs++] = (byte) ((immv >>  0) & 0xFF);
                rv [rvs++] = (byte) ((immv >>  8) & 0xFF);
                rv [rvs++] = (byte) ((immv >> 16) & 0xFF);
                rv [rvs++] = (byte) ((immv >> 24) & 0xFF);
                break;
            default:
                throw new InternalError ("Intel86/makeByteArray: Invalid immediate rep size: " + im);
        }
        return rv;
    }

    /** Add a one-byte instruction to the code block.
      * @param b0 byte value of instruction
      * @returns byte[] encoded instruction bytes
      */
    private byte []
    encode (int b0)
    {
        byte rv [] = new byte [1];
        rv [0] = (byte) b0;
        return addByteArray (rv);
    }

    /** Add a two-byte instruction to the code block.
      * @param b0 byte value of instruction
      * @param b1 byte value of instruction
      * @returns byte[] encoded instruction bytes
      */
    private byte []
    encode (int b0,
            int b1)
    {
        byte rv [] = new byte [2];
        rv [0] = (byte) b0;
        rv [1] = (byte) b1;
        return addByteArray (rv);
    }

    /** Verify that an operand exists, and return its type.
      * @param op Arbitrary operand: Immediate, Register, MemoryRef, ....
      * @returns int operand type code
      */
    private int
    checkOperand (Object op)
    {
        int ot;

        ot = OpType (op);
        if (OT_absent == ot) {
            throw new InternalError ("x86: missing required operand");
        }
        return ot;
    }


    /** The S flag is set when the instruction has a 8-bit immediate whose
      * value is to be sign-extended into a 32-bit operand.  It lives in
      * bit 1 of the opcode byte. */
    private static final int SFlag = 0x02;
    /** Determine for a given object (which better be an Immediate), whether
      * the S flag should be set.
      * @param ob operand to use for check
      * @returns int value to be ORd onto opcode to set S flag
      */
    private int
    valSFlag (Object ob)
    {
        Immediate iOp;

        iOp = (Immediate) ob;
        if ((! iOp.getSignExtendFlagVal ()) &&
            (1 == iOp.getImmSize ())) {
            /* What I mean by this is, it turns out that a non-zero
             * S-flag usually is the indication that there is an 8-bit
             * immediate, so if we set it to 0, the processor will look
             * for a 32-bit immediate.  This is borne out by the fact
             * that gcc/gdb won't recognize instructions with the S-flag
             * set and the W-flag clear. */
            throw new InternalError ("Intel86: Checking for S-flag on unsigned 8-bit immediate: this is wrong.");
        }
        return ((Immediate)ob).getSignExtend () ? SFlag : 0;
    }

    /** The W flag is set when the instruction is to use the 8-bit
      * registers, or a one-byte memory reference, rather than larger
      * ones.  It lives in bit 0 of the opcode byte. */
    private static final int WFlag = 0x01;
    /** Determine for a given object (which better be a register or
      * memory reference) whether the S flag should be set.
      * @param ob operand to use for check
      * @returns int value to be ORd onto opcode to set W flag
      */
    private int
    valWFlag (Object ob)
    {
        int ot = OpType (ob);
        int fv = WFlag;
        
        if (OT_mem == ot) {
            if (1 == ((MemoryRef)ob).getRefSize ()) {
                fv = 0;
            }
        } else if (OT_reg == ot) {
            if (((Register)ob).is8BitReg ()) {
                fv = 0;
            }
        } else {
            throw new InternalError ("Intel86: Unexpected operand for wflag set: " + ob);
        }
        return fv;
    }
    /** Binary version of valWFlag, when there are two operands and we
      * don't know which of them has the necessary size info.  We have
      * to have either a register or a memory ref or both, and we can't
      * have two memory refs.
      * @param ob1 operand to use for check
      * @param ob2 operand to use for check
      * @returns int value to be ORd onto opcode to set W flag
      */
    private int
    valWFlag (Object ob1,
              Object ob2)
    {
        if (OT_reg == OpType (ob1)) {
            return ((Register)ob1).is8BitReg () ? 0x00 : WFlag;
        }
        return valWFlag (ob2);
    }

    /** The D flag is set when the source and destination operands are
      * reversed, as with memory-to-register operations.  It lives in
      * bit 1 of the opcode byte. */
    private static final int DFlag = 0x02;
    /** Determine, for a specific pair of source and destination operands,
      * whether we swapped them in the modr/m byte.
      * @param src source operand
      * @param dst destination operand
      * @returns int value to be ORd onto opcode to set D flag
      */
    private int
    valDFlag (Object src,
              Object dst)
    {
        return ((OT_mem == OpType (src)) &&
                (OT_reg == OpType (dst))) ? DFlag : 0;
    }

    /** The F flag is set for FPU-to-memory transfers when the value
      * to be transferred is larger than 4 bytes (specifically, when
      * it is eight bytes).  It lives in bit 3 of the opcode byte. */
    private static final int FFlag = 0x04;
    /** Determine for a given object (which better be a memory reference)
      * whether the F flag should be set.
      * @param ob operand to use for check
      * @returns int value to be ORd onto opcode to set F flag
      */
    private int
    valFFlag (Object ob)
    {
        return (4 < ((MemoryRef) ob).getRefSize ()) ? FFlag : 0x00;
    }

    /** Assemble a CALL instruction */
    public byte []
    CALL (Object dst)
    {
        int dot = checkOperand (dst);
        if (OT_imm == dot) {
            return encode (makeByteArray (0xe8), null, makeByteArray (((Immediate)dst).setImmSize (4)));
        }
        if ((OT_reg != dot) &&
            (OT_mem != dot)) {
            throw new InternalError ("Intel86: Improper operand to CALL: " + dst);
        }
        return encode (makeByteArray (0xFF),
                       makeModRM (0x02, dst),
                       null);
    }

    /** Assemble a near conditional jump instruction */
    public byte []
    Jccn (int cond,
          Object dst)
    {
        Immediate iOp;
        try {
            iOp = (Immediate) dst;
        } catch (ClassCastException e) {
            throw new InternalError ("Intel86: Require immediate for JMPn parameter\n");
        }
        if (1 != iOp.getImmSize ()) {
            throw new InternalError ("Intel86: Immediate value out-of-range for near jump: " + iOp);
        }
        return encode (0x70 | cond, iOp.getValue ());
    }

    /** Assemble a far-but-same-segment conditional jump instruction */
    public byte []
    Jcc (int cond,
         Object dst)
    {
        Immediate iOp;
        try {
            iOp = (Immediate) dst;
        } catch (ClassCastException e) {
            throw new InternalError ("Intel86: Require immediate for JMP parameter\n");
        }
        return encode (makeByteArray (0x0F, 0x80 | cond),
                       null,
                       makeByteArray (iOp.setImmSize (4)));
    }

    /** Assemble a far-but-same-segment unconditional jump instruction */
    public byte []
    JMP (Object dst)
    {
        int dot = checkOperand (dst);
        if (OT_imm == dot) {
            return encode (makeByteArray (0xe9),
                           null,
                           makeByteArray (((Immediate)dst).setImmSize (4)));
        }
        if ((OT_reg != dot) && (OT_mem != dot)) {
            throw new InternalError ("Intel86: Bad type arg for register/memory-indirect jump: " + dst);
        }
        if ((OT_reg == dot) && ((Register)dst).is8BitReg ()) {
            throw new InternalError ("Intel86: Require 32bit reg for indirect JMP: " + dst);
        }
        return encode (makeByteArray (0xff),
                       makeModRM (0x04, dst),
                       null);
    }

    /** Assemble a near unconditional jump instruction */
    public byte []
    JMPn (Object dst)
    {
        Immediate iOp;
        try {
            iOp = (Immediate) dst;
        } catch (ClassCastException e) {
            throw new InternalError ("Intel86: Require immediate for JMPn parameter\n");
        }
        if (1 != iOp.getImmSize ()) {
            throw new InternalError ("Intel86: Immediate value out-of-range for near jump: " + iOp);
        }
        return encode (0xeb, iOp.getValue ());
    }
    
    /** Assemble an LEA instruction */
    public byte []
    LEA (Object src,
         Object dst)
    {
        if (! ((OT_mem == OpType (src)) &&
               (OT_reg == OpType (dst)))) {
            throw new InternalError ("x86: invalid operands to LEA");
        }
        return encode (makeByteArray (0x8d),
                       makeModRM (src, dst),
                       null);
    }

    /** Assemble a MOV instruction */
    public byte []
    MOV (Object src,
         Object dst)
    {
        int sot = checkOperand (src);
        int dot = checkOperand (dst);
        if (OT_imm == sot) {
            Immediate iOp = (Immediate) src;
            
            if (OT_reg == dot) {
                Register rOp = (Register) dst;
                
                if (2 == iOp.getImmSize ()) {
                    throw new InternalError ("Intel86: Interface doesn't permit 16-bit immediate MOVs.");
                }
                iOp = iOp.setImmSize (rOp.is8BitReg () ? 1 : 4);
                return encode (makeByteArray (0xb0
                                              | (valWFlag (dst) << 3)
                                              | rOp.getRegBitName ()),
                               null,
                               makeByteArray (iOp));
            }
            int wFlag = valWFlag (dst);
            return encode (makeByteArray (0xc6 | wFlag),
                           makeModRM (0x00, dst),
                           makeByteArray (iOp.setImmSize ((0 == wFlag) ? 1 : 4)));
        }

        return encode (makeByteArray (0x88
                                      | valDFlag (src, dst)
                                      | valWFlag (src, dst)),
                       makeModRM (src, dst),
                       null);
    }

    /** Assemble a NEG instruction */
    public byte []
    NEG (Object dst)
    {
        int dot = checkOperand (dst);
        if (OT_imm == dot) {
            throw new InternalError ("Intel86: Invalid operand to NEG: " + dst);
        }
        return encode (makeByteArray (0xf6 | valWFlag (dst)),
                       makeModRM (0x03, dst),
                       null);
    }

    /** Assemble a POP instruction */
    public byte []
    POP (Object dst)
    {
        if (OT_reg != OpType (dst)) {
            throw new InternalError ("x86: POP requires register operand: " + dst);
        }
        // We'll use the alternate encoding
        return encode (0x58 | ((Register)dst).getRegBitName ());
    }

    /** Assemble a PUSH instruction */
    public byte []
    PUSH (Object dst)
    {
        // We'll use the alternate encoding for registers
        switch (OpType (dst)) {
            case OT_imm:
                return encode (makeByteArray (0x68 | valSFlag (dst)),
                               null,
                               makeByteArray ((Immediate) dst));
            case OT_reg:
                return encode (0x50 | ((Register)dst).getRegBitName ());
            case OT_mem:
                return encode (makeByteArray (0xff),
                               makeModRM (0x06, dst),
                               null);
            default:
                throw new InternalError ("x86: invalid operand " + dst + " for PUSH");
        }
    }

    /** A one-byte instruction that does nothing. */
    public byte []
    NOP ()
    {
        return encode (0x90);
    }

    /** A one-byte instruction we can use as a warning track to note when
      * code that should not be reached was, in fact, reached.  We use the
      * Intel HLT instruction. */
    public byte []
    UNIMP (int x)               // Parameter which might be encoded in the instruction
    {
        return encode (0xf4);
    }

    /** Assemble a TEST instruction */
    public byte []
    TEST (Object src,
         Object dst)
    {
        int sot = checkOperand (src);
        int dot = checkOperand (dst);
        if (OT_imm == sot) {
            Immediate imOp = (Immediate) src;
            
            if (OT_reg == dot) {
                Register rOp = (Register) dst;
                
                if (rOp.isAReg ()) {
                    boolean byteOp;

                    byteOp = rOp.is8BitReg ();
                    return encode (
                        makeByteArray (0xa8 | (byteOp ? 0x00 : WFlag)),
                        null,
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));
                }
            }
            int wFlag;
            wFlag = valWFlag (dst);
            return encode (
                makeByteArray (0xf6 | wFlag),
                makeModRM (0, dst),
                makeByteArray (imOp.setImmSize ((0 == wFlag) ? 1 : 4)));
        }
        return encode (makeByteArray (0x84 | valWFlag (src, dst)),
                       makeModRM (src, dst),
                       null);
    }

    /** Backpatch a near jump.
      * @param boffs offset in code block of instruction following jump
      * @param dist how far the jump is (displacement to store)
      */
    protected void
    PatchNearJump (int boffs,
                   int dist)
    {
        if ((-128 > dist) || (127 < dist)) {
            throw new InternalError ("x86: Patch of " + dist + " invalid for near jump");
        }
        /* Near unconditional jumps are EB disp8, and near conditional jumps
         * are 7t disp8.  boffs is the offset of the instruction following
         * the jump. */
        storeByte ((byte) dist, boffs - 1);
        return;
    }

    /** Backpatch a far-but-same-segment jump.
      * @param boffs offset in code block of instruction following jump
      * @param dist how far the jump is (displacement to store)
      */
    protected void
    PatchLongJump (int boffs,
                   int dist)
    {
        /* Long unconditional jumps are E9 disp32, and long conditional jumps
         * are 0F 8t disp32.  boffs is the offset of the instruction following
         * the jump.. */
        storeWord (dist, boffs - 4);
        return;
    }

    /** NB: Double-word values must be ordered the same in both the
      * stack and the local variables: i.e., if the high word is in
      * local i and the low in local i+1, then the high word
      * must be pushed onto the stack first, followed by the low
      * word.  Otherwise word swapping occurs during parameter passing.
      * We maintain Intel ordering, and push MSW first, LSW second, so
      * LSW is below MSW in memory. */

    /** pull the top word off the evaluation stack into a register
      * @param reg where value goes
      * @returns last code generated
      */
    public byte []
    popES (Object reg)
    {
        return MOV (relBPop (popEStackOffs()), reg);
    }
    /** pull the top double-word off the evaluation stack into a register
      * @param reg where value goes
      * @returns last code generated
      */
    public byte []
    LpopES (Object msreg,
            Object lsreg)
    {
        MOV (relBPop (popEStackOffs()), lsreg);
        return MOV (relBPop (popEStackOffs()), msreg);
    }
    /** pull the top word off the evaluation stack into a floating point register
      * @returns last code generated
      */
    public byte []
    FpopES ()
    {
        return FLD (relBPop (popEStackOffs ()).setRefSize (4));
    }
    /** pull the top double-word float off the evaluation stack into a register
      * @returns last code generated
      */
    public byte []
    DpopES ()
    {
        byte instr [];
        instr = FLD (relBPop (popEStackOffs ()).setRefSize (8));
        popEStackOffs ();
        return instr;
    }

    /** throw away the top n words of the evaluation stack
      * @param nw number of words to ditch
      * @returns code generated
      */
    public byte []
    tossES (int na)
    {
        tossEStackOffs (na);
        return new byte [0];
    }

    /** push the value from the given register onto the evaluation stack
      * @param reg where value comes from
      * @returns code generated
      */
    public byte []
    pushES (Object reg)
    {
        return MOV (reg, relBPop (pushEStackOffs ()));
    }
    /** push the double-word value starting at the given register on to the eval stack
      * @param reg high-word register of value
      * @returns last instruction generated
      */
    public byte []
    LpushES (Object msreg,
             Object lsreg)
    {
        MOV (msreg, relBPop (pushEStackOffs ()));
        return MOV (lsreg, relBPop (pushEStackOffs ()));
    }

    /** push the value from the given FP register onto the evaluation stack
      * @returns code generated
      */
    public byte []
    FpushES ()
    {
        return FSTP (relBPop (pushEStackOffs ()).setRefSize (4));
    }
    /** push the double-word float starting at the given register on to the eval stack
      * @returns last instruction generated
      */
    public byte []
    DpushES ()
    {
        pushEStackOffs ();
        return FSTP (relBPop (pushEStackOffs ()).setRefSize (8));
    }

    /** put the value n words down from top of stack into register, without
      * changing the stack pointer.
      * @param n how far down to look
      * @param reg where value should go
      * @returns code generated
      */
    public byte []
    peekES (int n, Object reg)
    {
        return MOV (relBPop (peekEStackOffs (n)), reg);
    }

    /** replace the value n words down from top of stack with register, without
      * changing the stack pointer.
      * @param n how far down to look
      * @param reg where new value comes from go
      * @returns code generated
      */
    public byte []
    pokeES (int n, Object reg)
    {
        return MOV (reg, relBPop (peekEStackOffs (n)));
    }

    protected byte[]
    LOAD_REG (int val,
              Object reg)
    {
        return MOV (new Immediate (val, 4, false), reg);
    }

    protected byte []
    RELATIVE_CALL (int offs)
    {
        return CALL (new Immediate (offs, 4, false));
    }
    protected byte []
    RELATIVE_JUMP (int offs)
    {
        return JMP (new Immediate (offs, 4, false));
    }

    public static void
    TestIntel86 (String args [])
    {
        int i;
        int ia[];
        Intel86 i86;
        BufferedReader stdin;
        String txt;
        byte rv[];
        int aoutbase;

        i = 0;
        i86 = new Intel86 (null);

        /* Generate index for outputs based on starting at aoutbase. */
        aoutbase = 52;
        
        /* Read lines from stdin, interpreting them as assembly instructions
         * and generating their code. */
        stdin = new BufferedReader (new InputStreamReader (System.in));
        while (true) {
            int si;
            int ei;
            String operation;
            String src;
            String dst;
            
            try {
                txt = stdin.readLine ();
            } catch (IOException e) {
                break;
            }
            if (null == txt) {
                break;
            }
            si = txt.indexOf ('#');
            if (0 <= si) {
                txt = txt.substring (0, si);
            }
            si = 0;
            while ((txt.length() > si) &&
                   (' ' == txt.charAt (si))) {
                ++si;
            }
            if (txt.length() == si) {
                continue;
            }
            ei = si;
            while ((txt.length() > ei) &&
                   (' ' != txt.charAt (ei))) {
                ei++;
            }
            operation = txt.substring (si, ei);
            src = dst = null;
            si = ei;
            while ((txt.length() > si) &&
                   (' ' == txt.charAt (si))) {
                ++si;
            }
            ei = si;
            while ((txt.length() > ei) &&
                   (' ' != txt.charAt (ei))) {
                ++ei;
            }
            if (si < ei) {
                src = txt.substring (si, ei);
            }
            si = ei;
            while ((txt.length() > si) &&
                   (' ' == txt.charAt (si))) {
                ++si;
            }
            ei = si;
            while ((txt.length() > ei) &&
                   (' ' != txt.charAt (ei))) {
                ++ei;
            }
            if (si < ei) {
                dst = txt.substring (si, ei);
            }
            if (null == src) {
                src = "<missing>";
            }
            if (null == dst) {
                dst = "<missing>";
            }
            rv = new byte [0];
            if (operation.equals ("mov")) {
                rv = i86.MOV (src, dst);
            } else if (operation.equals ("lea")) {
                rv = i86.LEA (src, dst);
            } else if (operation.equals ("add")) {
                rv = i86.ADD (src, dst);
            } else if (operation.equals ("push")) {
                rv = i86.PUSH (src);
            } else if (operation.equals ("pop")) {
                rv = i86.POP (src);
            }
            System.out.print ("# " + operation + " " + src + " " + dst + " ; [0" +
                               Integer.toOctalString (aoutbase + i86.nextByteOffs() - rv.length) + "] ");

            emitByteArray (rv);
        }
    }

/* ------------------------------------------------------ */
/* From this point on, code is from the giIntel86 script. */
/* Do not modify the following code.                      */
/* ------------------------------------------------------ */
    public byte []   // DO NOT EDIT
    IDIV (Object src) {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        if ((OT_mem != sot) && (OT_reg != sot)) {   // DO NOT EDIT
            throw new InternalError ("Intel86: Invalid IDIV source operand: " + src);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xf6 | valWFlag (src)),   // DO NOT EDIT
                       makeModRM (0x07, src),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    IMUL (Object src) {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        if ((OT_mem != sot) && (OT_reg != sot)) {   // DO NOT EDIT
            throw new InternalError ("Intel86: Invalid IMUL source operand: " + src);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xf6 | valWFlag (src)),   // DO NOT EDIT
                       makeModRM (0x05, src),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    CBW ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0x98);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    PrefixOPSIZE ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0x66);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    CWD ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0x99);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    LEAVE ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0xc9);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    RET ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0xc3);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FCHS ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0xd9, 0xe0);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FTST ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0xd9, 0xe4);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FRNDINT ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0xd9, 0xfc);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FNSTSW ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0xdf, 0xe0);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FUCOMPP ()   // DO NOT EDIT
    {   // DO NOT EDIT
        return encode (0xda, 0xe9);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FSTP (Object op) {   // DO NOT EDIT
        MemoryRef mop;   // DO NOT EDIT
           // DO NOT EDIT
        try {   // DO NOT EDIT
            mop = (MemoryRef) op;   // DO NOT EDIT
        } catch (ClassCastException e) {   // DO NOT EDIT
            throw new InternalError ("Intel86: FSTP must take MemoryRef operand: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xd9 | valFFlag (op)),   // DO NOT EDIT
                       makeModRM (3, op),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FLD (Object op) {   // DO NOT EDIT
        MemoryRef mop;   // DO NOT EDIT
           // DO NOT EDIT
        try {   // DO NOT EDIT
            mop = (MemoryRef) op;   // DO NOT EDIT
        } catch (ClassCastException e) {   // DO NOT EDIT
            throw new InternalError ("Intel86: FLD must take MemoryRef operand: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xd9 | valFFlag (op)),   // DO NOT EDIT
                       makeModRM (0, op),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FLDCW (Object op) {   // DO NOT EDIT
        MemoryRef mop;   // DO NOT EDIT
           // DO NOT EDIT
        try {   // DO NOT EDIT
            mop = (MemoryRef) op;   // DO NOT EDIT
        } catch (ClassCastException e) {   // DO NOT EDIT
            throw new InternalError ("Intel86: FLDCW must take MemoryRef operand: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xd9 | valFFlag (op)),   // DO NOT EDIT
                       makeModRM (5, op),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FNSTCW (Object op) {   // DO NOT EDIT
        MemoryRef mop;   // DO NOT EDIT
           // DO NOT EDIT
        try {   // DO NOT EDIT
            mop = (MemoryRef) op;   // DO NOT EDIT
        } catch (ClassCastException e) {   // DO NOT EDIT
            throw new InternalError ("Intel86: FNSTCW must take MemoryRef operand: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xd9 | valFFlag (op)),   // DO NOT EDIT
                       makeModRM (7, op),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FILD (Object op) {   // DO NOT EDIT
        MemoryRef mop;   // DO NOT EDIT
           // DO NOT EDIT
        try {   // DO NOT EDIT
            mop = (MemoryRef) op;   // DO NOT EDIT
        } catch (ClassCastException e) {   // DO NOT EDIT
            throw new InternalError ("Intel86: FILD must take MemoryRef operand: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
        switch (((MemoryRef)op).getRefSize ()) {   // DO NOT EDIT
            case 2:   // DO NOT EDIT
                return encode (makeByteArray (0xdf),   // DO NOT EDIT
                               makeModRM (0, op),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            case 4:   // DO NOT EDIT
                return encode (makeByteArray (0xdb),   // DO NOT EDIT
                               makeModRM (0, op),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            case 8:   // DO NOT EDIT
                return encode (makeByteArray (0xdf),   // DO NOT EDIT
                               makeModRM (5, op),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            default:   // DO NOT EDIT
                throw new InternalError ("Intel86: Unsupported FILD size: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FISTP (Object op) {   // DO NOT EDIT
        MemoryRef mop;   // DO NOT EDIT
           // DO NOT EDIT
        try {   // DO NOT EDIT
            mop = (MemoryRef) op;   // DO NOT EDIT
        } catch (ClassCastException e) {   // DO NOT EDIT
            throw new InternalError ("Intel86: FISTP must take MemoryRef operand: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
        switch (((MemoryRef)op).getRefSize ()) {   // DO NOT EDIT
            case 2:   // DO NOT EDIT
                return encode (makeByteArray (0xdf),   // DO NOT EDIT
                               makeModRM (3, op),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            case 4:   // DO NOT EDIT
                return encode (makeByteArray (0xdb),   // DO NOT EDIT
                               makeModRM (3, op),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            case 8:   // DO NOT EDIT
                return encode (makeByteArray (0xdf),   // DO NOT EDIT
                               makeModRM (7, op),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            default:   // DO NOT EDIT
                throw new InternalError ("Intel86: Unsupported FISTP size: " + op);   // DO NOT EDIT
        }   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FADDP (Object src) {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        if (OT_fpstack != sot) {   // DO NOT EDIT
            throw new InternalError ("Intel86: Invalid type " + sot + " for FADDP source: " + src);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (0xde, 0xc0 | ((Register)src).getRegBitName ());   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FDIVRP (Object src) {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        if (OT_fpstack != sot) {   // DO NOT EDIT
            throw new InternalError ("Intel86: Invalid type " + sot + " for FDIVRP source: " + src);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (0xde, 0xf0 | ((Register)src).getRegBitName ());   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FMULP (Object src) {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        if (OT_fpstack != sot) {   // DO NOT EDIT
            throw new InternalError ("Intel86: Invalid type " + sot + " for FMULP source: " + src);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (0xde, 0xc8 | ((Register)src).getRegBitName ());   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    FSUBRP (Object src) {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        if (OT_fpstack != sot) {   // DO NOT EDIT
            throw new InternalError ("Intel86: Invalid type " + sot + " for FSUBRP source: " + src);   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (0xde, 0xe0 | ((Register)src).getRegBitName ());   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    INC (Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_reg == dot) {   // DO NOT EDIT
            Register rOp = (Register) dst;   // DO NOT EDIT
            if (! rOp.is8BitReg ()) {   // DO NOT EDIT
                return encode (0x40 | rOp.getRegBitName ());   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xfe | valWFlag (dst)),   // DO NOT EDIT
                       makeModRM (0, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    DEC (Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_reg == dot) {   // DO NOT EDIT
            Register rOp = (Register) dst;   // DO NOT EDIT
            if (! rOp.is8BitReg ()) {   // DO NOT EDIT
                return encode (0x48 | rOp.getRegBitName ());   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0xfe | valWFlag (dst)),   // DO NOT EDIT
                       makeModRM (1, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    ADD (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x04 | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (0, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x00   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    OR (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x0c | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (1, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x08   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    ADC (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x14 | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (2, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x10   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    SBB (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x1c | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (3, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x18   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    AND (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x24 | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (4, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x20   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    SUB (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x2c | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (5, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x28   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    XOR (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x34 | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (6, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x30   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    CMP (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate imOp = (Immediate) src;   // DO NOT EDIT
               // DO NOT EDIT
            if (OT_reg == dot) {   // DO NOT EDIT
                Register rOp = (Register) dst;   // DO NOT EDIT
                   // DO NOT EDIT
                if (rOp.isAReg ()) {   // DO NOT EDIT
                    boolean byteOp;   // DO NOT EDIT
   // DO NOT EDIT
                    byteOp = rOp.is8BitReg ();   // DO NOT EDIT
                    return encode (   // DO NOT EDIT
                        makeByteArray (0x3c | (byteOp ? 0x00 : WFlag)),   // DO NOT EDIT
                        null,   // DO NOT EDIT
                        makeByteArray (imOp.setImmSize (byteOp ? 1 : 4)));   // DO NOT EDIT
                }   // DO NOT EDIT
            }   // DO NOT EDIT
            int wFlag;   // DO NOT EDIT
            wFlag = valWFlag (dst);   // DO NOT EDIT
            return encode (   // DO NOT EDIT
                makeByteArray (0x80   // DO NOT EDIT
                               | valSFlag (imOp)   // DO NOT EDIT
                               | wFlag),   // DO NOT EDIT
                makeModRM (7, dst),   // DO NOT EDIT
                makeByteArray (imOp));   // DO NOT EDIT
        }   // DO NOT EDIT
        return encode (makeByteArray (0x38   // DO NOT EDIT
                                      | valDFlag (src, dst)   // DO NOT EDIT
                                      | valWFlag (src, dst)),   // DO NOT EDIT
                       makeModRM (src, dst),   // DO NOT EDIT
                       null);   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    SAR (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
   // DO NOT EDIT
        if (OT_reg == sot) {   // DO NOT EDIT
            if (Register.R_cl == src) {   // DO NOT EDIT
                return encode (makeByteArray (0xd2 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x07, dst),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            } else {   // DO NOT EDIT
                throw new InternalError ("Intel86: Shift by register only allows %cl");   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate iOp = (Immediate) src;   // DO NOT EDIT
            if (1 == iOp.getValue()) {   // DO NOT EDIT
                return encode (makeByteArray (0xd0 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x07, dst),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            } else {   // DO NOT EDIT
                return encode (makeByteArray (0xc0 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x07, dst),   // DO NOT EDIT
                               makeByteArray (iOp.setImmSize (1)));   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        throw new InternalError ("Intel86: Shift source illegal");   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    SHL (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
   // DO NOT EDIT
        if (OT_reg == sot) {   // DO NOT EDIT
            if (Register.R_cl == src) {   // DO NOT EDIT
                return encode (makeByteArray (0xd2 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x04, dst),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            } else {   // DO NOT EDIT
                throw new InternalError ("Intel86: Shift by register only allows %cl");   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate iOp = (Immediate) src;   // DO NOT EDIT
            if (1 == iOp.getValue()) {   // DO NOT EDIT
                return encode (makeByteArray (0xd0 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x04, dst),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            } else {   // DO NOT EDIT
                return encode (makeByteArray (0xc0 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x04, dst),   // DO NOT EDIT
                               makeByteArray (iOp.setImmSize (1)));   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        throw new InternalError ("Intel86: Shift source illegal");   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT
    public byte []   // DO NOT EDIT
    SHR (Object src,   // DO NOT EDIT
         Object dst)   // DO NOT EDIT
    {   // DO NOT EDIT
        int sot = checkOperand (src);   // DO NOT EDIT
        int dot = checkOperand (dst);   // DO NOT EDIT
   // DO NOT EDIT
        if (OT_reg == sot) {   // DO NOT EDIT
            if (Register.R_cl == src) {   // DO NOT EDIT
                return encode (makeByteArray (0xd2 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x05, dst),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            } else {   // DO NOT EDIT
                throw new InternalError ("Intel86: Shift by register only allows %cl");   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        if (OT_imm == sot) {   // DO NOT EDIT
            Immediate iOp = (Immediate) src;   // DO NOT EDIT
            if (1 == iOp.getValue()) {   // DO NOT EDIT
                return encode (makeByteArray (0xd0 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x05, dst),   // DO NOT EDIT
                               null);   // DO NOT EDIT
            } else {   // DO NOT EDIT
                return encode (makeByteArray (0xc0 | valWFlag (dst)),   // DO NOT EDIT
                               makeModRM (0x05, dst),   // DO NOT EDIT
                               makeByteArray (iOp.setImmSize (1)));   // DO NOT EDIT
            }   // DO NOT EDIT
        }   // DO NOT EDIT
        throw new InternalError ("Intel86: Shift source illegal");   // DO NOT EDIT
    }   // DO NOT EDIT
   // DO NOT EDIT

}
