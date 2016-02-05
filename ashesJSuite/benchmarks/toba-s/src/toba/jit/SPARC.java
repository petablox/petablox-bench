/**
  * Implementation of CodeBlock for SPARC systems
  * @version $Id: SPARC.java,v 1.6 1998/04/18 23:30:29 pab Exp $
  * @author Peter A. Bigot
  */

/* This is part of the Just-In-Time compiler for the Toba system. */
package toba.jit;

import toba.classfile.*;
import toba.runtime.*;

class SPARC extends CodeBlock {
    private void
    BasicInit ()
    {
        setBVlength (32);
        setLittleEndian (false);
        setCheckWordAlign (true);
        setJumpFromNextInstr (false);
    }

    /** Constructors: pass up to parent */
    public
    SPARC (Method m,
           int imax) {
        super (m, imax);
        BasicInit ();
    }
    public
    SPARC (Method m) {
        super (m);
        BasicInit ();
    }

    /** Convert from symbolic register name to 5-bit string encoding
      * @param s String representation of SPARC register name
      * @returns bit string representing input register number
      */
    private static String
    BS (String s)
    {
        /* The stack pointer is the 6th output register */
        if (s.equals ("%sp")) {
            s = "%o6";
        }
        /* The frame pointer is the 6th input register */
        if (s.equals ("%fp")) {
            s = "%i6";
        }
        /* Symbolic register names are in format '%' '[golir]' <digit>+ */
        if (! s.startsWith ("%")) {
            if (5 != s.length()) {
                throw new InternalError ("illegal string representation of register: " + s);
            }
            return s;
        }

        int rn;                 // Absolute number of register in file
        switch (s.charAt (1)) {
            case 'i':           // Input registers start at absolute 24
                rn = 24;
                break;
            case 'l':           // Local registers start at absolute 16
                rn = 16;
                break;
            case 'o':           // Output registers start at absolute 8
                rn = 8;
                break;
            case 'r':           // Unspecified, FP, and global registers
            case 'f':           // all start at 0.
            case 'g':
                rn = 0;
                break;
            default:            // Unrecognized register class
                throw new InternalError ("invalid register class");
        }
        /* Add in the register file offset from the given string */
        try {
            rn += Integer.valueOf (s.substring(2)).intValue();
        } catch (Exception e) {
            /* Invalid register offset */
            throw new InternalError ("at register decoding" + e);
        }
        /* Return the value, encoded in a bit string of 5 bits */
        return BS (rn, 5);
    }

    /** Activation record layout for JIT-compiled SPARC code
      *
      * %fp->|                               |
      *      |-------------------------------|-\
      *      |  struct mythread * tdata      | |
      *      |-------------------------------| > Local data structures required
      *      |  void * oldbuf                | | for handling of exceptions.
      *      |-------------------------------| | Block is absent from frames
      *      |  volatile int pcormheld       | | that don't need it.  Size
      *      |-------------------------------| | OHDATA is kept in JITCodeGen
      *      |  jmpbuf newbuf (non-const len)| | instance.
      *      |-------------------------------|-/
      *      |  2 words for FPU/ALU xfers    |
      *      |-------------------------------| %fp[-(8+OHDATA)]
      *      |  Java local variables         |
      *      |-------------------------------|
      * %l7->|  Java evaluation stack        |  (grows downward; %l7 points to top)
      *      |-------------------------------|
      *      |  outgoing parameters past 6   |
      *      |-------------------------------|-\
      *      |  6 words for callee to dump   | |
      *      |  register arguments           | |
      *      |-------------------------------|  > minimum stack frame
      *      |  One word struct-ret address  | |
      *      |-------------------------------| |
      *      |  16 words to save IN and      | |
      * %sp->|  LOCAL register on overflow   | |
      *      |-------------------------------|-/
      */

    // Sun does not have an ALU/FPU transfer buffer just below the frame
    // pointer.  GCC has a four-word one.  We can get away with two words.
    static final int WINDOWSIZE = (16*4);
    static final int STRETADDRSIZE = 4;
    static final int ARGPUSHSIZE = (6*4);
    static final int ARGPUSH = (WINDOWSIZE+STRETADDRSIZE);
    static final int ALUFPUXFERSIZE = (2*4);
    static final int MINFRAME = (WINDOWSIZE + STRETADDRSIZE + ARGPUSHSIZE + ALUFPUXFERSIZE);

    /* Type codes in backpatch markers.  Apply with resolveCode as:
     *  int brcode, Instr ins, FieldRef fr
     *  int brcode, Instr ins, long lv
     */
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

    /** Add a format(1) (CALL) SPARC instruction to the code buffer
      * @param op the leading two-bit code indicating instruction value
      * @param disp30 a signed thirty-bit immediate value
      * @returns the encoded instruction
      */
    private int
    Fmt1 (String op,            // op value
          int disp30)           // displacement
    {
        return addWord (BV (op + BS (disp30, 30)));
    }

    /** Add a format(2) immediate-value SPARC instruction to the code buffer
      * @param op The leading two-bit code indicating basic instruction type
      * @param rd name of destination register
      * @param op2 the three bit opcode value
      * @param imm22 the twenty-two bit immediate value
      * @returns the encoded instruction */
    private int
    Fmt2 (String op,            // op value
          String rd,            // destination register
          String op2,           // opcode
          int imm22)            // immediate value
    {
        return addWord (BV (op + BS(rd) + op2 + BS(imm22,22)));
    }

    public int
    PatchDisp22 (int offs,      // Offset, in bytes, of word to overwrite
                 int imm22)     // Immediate value to store there
    {
        int iv;

        iv = getCodeWord (offs);
        iv = ((iv & ~(0x3FF)) | (imm22 & 0x3FF));
        return storeWord (iv, offs);
    }

    /** Add a format(2) immediate-value SPARC instruction to the code buffer
      * @param op The leading two-bit code indicating basic instruction type
      * @param ign value to store in the 5-bit ignored field
      * @param op2 the three bit opcode value
      * @param imm22 the twenty-two bit immediate value
      * @returns the encoded instruction */
    private int
    Fmt2 (String op,            // op value
          int ign,              // ignored value
          String op2,           // opcode
          int imm22)            // immediate value
    {
        return addWord (BV (op + BS(ign,5) + op2 + BS(imm22,22)));
    }

    /** Add a format(3) binary immediate-value SPARC instruction to the code buffer
      * @param op The leading two-bit code indicating basic instruction type
      * @param rd name of destination register
      * @param op3 the six bit opcode value
      * @param rs1 name of first source register
      * @param i one-bit absolute/address-space tag
      * @param simm13 the signed thirteen bit immediate value
      * @returns the encoded instruction */
    private int
    Fmt3 (String op,            // op value
          String rd,            // destination register
          String op3,           // opcode
          String rs1,           // first source register
          int simm13)           // signed immediate
    {
        return addWord (BV (op + BS(rd) + op3 + BS(rs1) + "1" + BS(simm13,13)));
    }
    /** Add a format(3) trinary SPARC instruction to the code buffer
      * @param op The leading two-bit code indicating basic instruction type
      * @param rd name of destination register
      * @param op3 the six bit opcode value
      * @param rs1 name of first source register
      * @param i one-bit absolute/address-space tag
      * @param rs2 name of second source register
      * @returns the encoded instruction */
    private int
    Fmt3 (String op,            // op value
          String rd,            // destination register
          String op3,           // opcode
          String rs1,           // first source register
          String rs2)           // second source register
    {
        return addWord (BV (op + BS(rd) + op3 + BS(rs1) + "000000000" + BS(rs2)));
    }
    
    /** Add a format(3) trinary SPARC floating point instruction to the code buffer
      * @param op The leading two-bit code indicating basic instruction type
      * @param rd name of destination register
      * @param op3 the six bit opcode value
      * @param opf the nine bit fp opcode value
      * @param rs2 name of second source register
      * @returns the encoded instruction */
    private int
    Fmt3FP (String op,            // op value
            String rd,            // destination register
            String op3,           // opcode
            String opf,           // fp opcode
            String rs2)           // second source register
    {
        return addWord (BV (op + BS(rd) + op3 + "00000" + opf + BS(rs2)));
    }

    /** Add a format(3) trinary SPARC floating point instruction to the code buffer
      * @param op The leading two-bit code indicating basic instruction type
      * @param rd name of destination register
      * @param op3 the six bit opcode value
      * @param rs1 name of the first source register
      * @param opf the nine bit fp opcode value
      * @param rs2 name of second source register
      * @returns the encoded instruction */
    private int
    Fmt3FP (String op,          // op value
            String rd,          // destination register
            String op3,         // opcode
            String rs1,         // first source register
            String opf,         // fp opcode
            String rs2)         // second source register
    {
        return addWord (BV (op + BS(rd) + op3 + BS (rs1) + opf + BS(rs2)));
    }
    /** Add a format(3) trinary SPARC floating point instruction to the code buffer
      * @param op The leading two-bit code indicating basic instruction type
      * @param op3 the six bit opcode value
      * @param rs1 name of first source register
      * @param opf the nine bit fp opcode value
      * @param rs2 name of second source register
      * @returns the encoded instruction */
    private int
    Fmt3FPC (String op,         // op value
             String op3,        // opcode
             String rs1,        // first source register
             String opf,        // fp opcode
             String rs2)        // second source register
    {
        return addWord (BV (op + "00000" + op3 + BS(rs1) + opf + BS(rs2)));
    }

    /** save rs1, imm, rd */
    public int
    SAVE (String rs1, int imm, String rd) {
        return Fmt3 ("10", rd, "111100", rs1, imm);
    }

    /** restore rs1, imm, rd */
    public int
    RESTORE (String rs1, int imm, String rd) {
        return Fmt3 ("10", rd, "111101", rs1, imm);
    }
    /** restore %g0, 0, %g0 */
    public int
    RESTORE () {
        return RESTORE ("%g0", 0, "%g0");
    }

    /** st rd, rs1[imm] */
    public int
    ST (String rd, String rs1, int imm) {
        return Fmt3 ("11", rd, "000100", rs1, imm);
    }
    /** stb rd, rs1[imm] */
    public int
    STB (String rd, String rs1, int imm) {
        return Fmt3 ("11", rd, "000101", rs1, imm);
    }
    /** sth rd, rs1[imm] */
    public int
    STH (String rd, String rs1, int imm) {
        return Fmt3 ("11", rd, "000110", rs1, imm);
    }
    /** stf rd, rs1[imm] */
    public int
    STF (String rd, String rs1, int imm) {
        return Fmt3 ("11", rd, "100100", rs1, imm);
    }
    /** stdf rd, rs1[imm] */
    public int
    STDF (String rd, String rs1, int imm) {
        return Fmt3 ("11", rd, "100111", rs1, imm);
    }
        
    /** ld rs1[imm], rd */
    public int
    LD (String rs1, int imm, String rd) {
        return Fmt3 ("11", rd, "000000", rs1, imm);
    }
    /** ld rs1[rs2], rd */
    public int
    LD (String rs1, String rs2, String rd) {
        return Fmt3 ("11", rd, "000000", rs1, rs2);
    }
    /** ldsb rs1[imm], rd */
    public int
    LDSB (String rs1, int imm, String rd) {
        return Fmt3 ("11", rd, "001001", rs1, imm);
    }
    /** ldub rs1[imm], rd */
    public int
    LDUB (String rs1, int imm, String rd) {
        return Fmt3 ("11", rd, "000001", rs1, imm);
    }
    /** ldsh rs1[imm], rd */
    public int
    LDSH (String rs1, int imm, String rd) {
        return Fmt3 ("11", rd, "001010", rs1, imm);
    }
    /** lduh rs1[imm], rd */
    public int
    LDUH (String rs1, int imm, String rd) {
        return Fmt3 ("11", rd, "000010", rs1, imm);
    }
    /** ldf rs1[imm], rd */
    public int
    LDF (String rs1, int imm, String rd) {
        return Fmt3 ("11", rd, "100000", rs1, imm);
    }
    /** lddf rs1[imm], rd */
    public int
    LDDF (String rs1, int imm, String rd) {
        return Fmt3 ("11", rd, "100011", rs1, imm);
    }
        
    /** jmpl rs1+rs2, rd */
    public int
    JMPL (String rs1, String rs2, String rd) {
        return Fmt3 ("10", rd, "111000", rs1, rs2);
    }
    /** jmpl rs1[imm], rd */
    public int
    JMPL (String rs1, int imm, String rd) {
        return Fmt3 ("10", rd, "111000", rs1, imm);
    }
    /** ret == jmpl %r31[8], %r0 */
    public int
    RET () {
        return JMPL ("%r31", 8, "%r0");
    }

    /** or rs1, imm, rd */
    public int
    OR (String rs1,
        int imm,
        String rd) {
        return Fmt3 ("10", rd, "000010", rs1, imm);
    }
    /** or rs1, rs2, rd */
    public int
    OR (String rs1,
        String rs2,
        String rd) {
        return Fmt3 ("10", rd, "000010", rs1, rs2);
    }
    /** mov imm, rd == or %g0, imm, rd */
    public int
    MOV (int imm,
         String rd) {
        // Do a quick catch of out-of-range values
        if ((4095 < imm) || (-4096 > imm)) {
            System.err.println ("Warning: MOV of too-large immediate: " + imm);
        }
        return OR ("%g0", imm, rd);
    }
    /** mov rs, rd == or %g0, rs, rd */
    public int
    MOV (String rs, String rd) {
        return OR ("%g0", rs, rd);
    }
    /** and rs1, rs2, rd */
    public int
    AND (String rs1,
         String rs2,
         String rd) {
        return Fmt3 ("10", rd, "000001", rs1, rs2);
    }
    /** andcc rs1, imm, rd */
    public int
    ANDcc (String rs1,
           int imm,
           String rd) {
        return Fmt3 ("10", rd, "010001", rs1, imm);
    }
    
    /** xor rs1, rs2, rd */
    public int
    XOR (String rs1,
         String rs2,
         String rd) {
        return Fmt3 ("10", rd, "000011", rs1, rs2);
    }

    /** add rs1, imm, rd */
    public int
    ADD (String rs1,
         int imm,
         String rd) {
        return Fmt3 ("10", rd, "000000", rs1, imm);
    }
    /** add rs1, rs2, rd */
    public int
    ADD (String rs1,
         String rs2,
         String rd) {
        return Fmt3 ("10", rd, "000000", rs1, rs2);
    }
    /** addcc rs1, rs2, rd */
    public int
    ADDcc (String rs1,
           String rs2,
           String rd) {
        return Fmt3 ("10", rd, "010000", rs1, rs2);
    }
    /** addx rs1, rs2, rd */
    public int
    ADDX (String rs1,
           String rs2,
           String rd) {
        return Fmt3 ("10", rd, "001000", rs1, rs2);
    }

    /** sub rs1, imm, rd */
    public int
    SUB (String rs1,
         int imm,
         String rd) {
        return Fmt3 ("10", rd, "000100", rs1, imm);
    }
    /** sub rs1, rs2, rd */
    public int
    SUB (String rs1,
         String rs2,
         String rd) {
        return Fmt3 ("10", rd, "000100", rs1, rs2);
    }
    /** subcc rs1, imm, rd */
    public int
    SUBcc (String rs1,
           int imm,
           String rd) {
        return Fmt3 ("10", rd, "010100", rs1, imm);
    }
    /** subcc rs1, rs2, rd */
    public int
    SUBcc (String rs1,
           String rs2,
           String rd) {
        return Fmt3 ("10", rd, "010100", rs1, rs2);
    }
    /** subx rs1, rs2, rd */
    public int
    SUBX (String rs1,
          String rs2,
          String rd) {
        return Fmt3 ("10", rd, "001100", rs1, rs2);
    }
    /** cmp rs1, imm */
    public int
    CMP (String rs1,
         int imm) {
        return SUBcc (rs1, imm, "%g0");
    }
    /** cmp rs1, rs2 */
    public int
    CMP (String rs1,
         String rs2) {
        return SUBcc (rs1, rs2, "%g0");
    }
    /** tst rs1 */
    public int
    TST (String rs1) {
        return CMP (rs1, "%g0");
    }

    /** umul rs1, rs2, rd */
    public int
    UMUL (String rs1,
          String rs2,
          String rd) {
        return Fmt3 ("10", rd, "001010", rs1, rs2);
    }
    /** smul rs1, rs2, rd */
    public int
    SMUL (String rs1,
          String rs2,
          String rd) {
        return Fmt3 ("10", rd, "001011", rs1, rs2);
    }
    /** rd %y, rd */
    public int
    RDY (String rd) {
        return Fmt3 ("10", rd, "101000", "%g0", 0);
    }

    /** sll rs1, imm, rd */
    public int
    SLL (String rs1,
         int imm,
         String rd) {
        return Fmt3 ("10", rd, "100101", rs1, imm);
    }
    /** sll rs1, rs2, rd */
    public int
    SLL (String rs1,
         String rs2,
         String rd) {
        return Fmt3 ("10", rd, "100101", rs1, rs2);
    }
    /** srl rs1, rs2, rd */
    public int
    SRL (String rs1,
         String rs2,
         String rd) {
        return Fmt3 ("10", rd, "100110", rs1, rs2);
    }
    /** sra rs1, imm, rd */
    public int
    SRA (String rs1,
         int imm,
         String rd) {
        return Fmt3 ("10", rd, "100111", rs1, imm);
    }
    /** sra rs1, rs2, rd */
    public int
    SRA (String rs1,
         String rs2,
         String rd) {
        return Fmt3 ("10", rd, "100111", rs1, rs2);
    }

    /** sethi %hi(val), rd */
    public int
    SETHI (int val,
           String rd)
    {
        return Fmt2 ("00", rd, "100", (val >>> 10));
    }
    /** nop == sethi 0, %g0 */
    public int
    NOP ()
    {
        return SETHI (0, "%g0");
    }
    /** or %rd, %lo(val), %rd */
    public int
    SetLo (int val, String rd) {
        return OR (rd, val & 0x03FF, rd);
    }
    

    /** call disp */
    public int
    CALL (long disp) {
        /* Sign-extend the shift; may be a negative displacement */
        return Fmt1 ("01", ((int) disp) >> 2);
    }
    /** unimp ign const22 */
    public int
    UNIMP (int ign,
           int const22) {
        return Fmt2 ("00", ign, "000", const22);
    }
    /** Bcc disp */
    private int
    Bcc (String annul,
         String cond,
         int disp22) {
        return Fmt2 ("00", annul + cond, "010", disp22);
    }
    /** bne label */
    public int
    BNE (int disp) {
        return Bcc ("0", "1001", disp);
    }
    /** be label */
    public int
    BE (int disp) {
        return Bcc ("0", "0001", disp);
    }
    /** ba label */
    public int
    BA (int disp) {
        return Bcc ("0", "1000", disp);
    }
    /** bg label */
    public int
    BG (int disp) {
        return Bcc ("0", "1010", disp);
    }
    /** bl label */
    public int
    BL (int disp) {
        return Bcc ("0", "0011", disp);
    }
    /** bge label */
    public int
    BGE (int disp) {
        return Bcc ("0", "1011", disp);
    }
    /** ble label */
    public int
    BLE (int disp) {
        return Bcc ("0", "0010", disp);
    }

    /** fitos rs2, rd */
    public int
    FiTOs (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "011000100", rs2);
    }
    /** fitod rs2, rd */
    public int
    FiTOd (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "011001000", rs2);
    }
    /** fstoi rs2, rd */
    public int
    FsTOi (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "011010001", rs2);
    }
    /** fstod rs2, rd */
    public int
    FsTOd (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "011001001", rs2);
    }
    /** fdtoi rs2, rd */
    public int
    FdTOi (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "011010010", rs2);
    }
    /** fdtos rs2, rd */
    public int
    FdTOs (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "011000110", rs2);
    }
    /** fmovs rs2, rd */
    public int
    FMOVs (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "000000001", rs2);
    }
    /** fnegs rs2, rd */
    public int
    FNEGs (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "000000101", rs2);
    }
    /** fabs rs2, rd */
    public int
    FABSs (String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", "000001001", rs2);
    }
    /** fadds rs1, rs2, rd */
    public int
    FADDs (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001000001", rs2);
    }
    /** faddd rs1, rs2, rd */
    public int
    FADDd (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001000010", rs2);
    }
    /** fsubs rs1, rs2, rd */
    public int
    FSUBs (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001000101", rs2);
    }
    /** fsubd rs1, rs2, rd */
    public int
    FSUBd (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001000110", rs2);
    }
    /** fmuls rs1, rs2, rd */
    public int
    FMULs (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001001001", rs2);
    }
    /** fmuld rs1, rs2, rd */
    public int
    FMULd (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001001010", rs2);
    }
    /** fdivs rs1, rs2, rd */
    public int
    FDIVs (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001001101", rs2);
    }
    /** fdivd rs1, rs2, rd */
    public int
    FDIVd (String rs1,
           String rs2,
           String rd) {
        return Fmt3FP ("10", rd, "110100", rs1, "001001110", rs2);
    }
    /** fcmps rs1, rs2 */
    public int
    FCMPs (String rs1,
           String rs2) {
        return Fmt3FPC ("10", "110101", rs1, "001010001", rs2);
    }
    /** fcmpd rs1, rs2 */
    public int
    FCMPd (String rs1,
           String rs2) {
        return Fmt3FPC ("10", "110101", rs1, "001010010", rs2);
    }
    private int
    FBcc (String annul,
          String cond,
          int disp22) {
        return Fmt2 ("00", annul + cond, "110", disp22);
    }
    /** fbug label */
    public int
    FBUG (int disp) {
        return FBcc ("0", "0101", disp);
    }
    /** fbg label */
    public int
    FBG (int disp) {
        return FBcc ("0", "0110", disp);
    }
    /** fbe label */
    public int
    FBE (int disp) {
        return FBcc ("0", "1001", disp);
    }

    /** NB: Double-word values must be ordered the same in both the
      * stack and the local variables: i.e., if the high word is in
      * local i and the low in local i+1, then the high word
      * must be pushed onto the stack first, followed by the low
      * word.  Otherwise word swapping occurs during parameter passing.
      * We chose to have the high word in local i and pushed first, with
      * the low word in local i+1 and pushed second, because that puts
      * the high and low words into the right position for double-word
      * SPARC registers. */

    /** pull the top word off the evaluation stack into a register
      * @param reg where value goes
      * @returns last code generated
      */
    public int
    popES (String reg)
    {
        LD ("%l7", 0, reg);
        return ADD ("%l7", 4, "%l7");
    }
    /** pull the top double-word off the evaluation stack into a register
      * @param reg where value goes
      * @returns last code generated
      */
    public int
    LpopES (String reg)
    {
        int rlen = reg.length();
        String lreg = reg.substring(0,rlen-1) + String.valueOf ((char) (1 + reg.charAt(rlen-1)));
        LD ("%l7", 0, lreg);
        LD ("%l7", 4, reg);
        return ADD ("%l7", 8, "%l7");
    }
    /** pull the top word off the evaluation stack into a floating point register
      * @param reg where value goes
      * @returns last code generated
      */
    public int
    FpopES (String reg)
    {
        LDF ("%l7", 0, reg);
        return ADD ("%l7", 4, "%l7");
    }
    /** pull the top double-word float off the evaluation stack into a register
      * @param reg where value goes
      * @returns last code generated
      */
    public int
    DpopES (String reg)
    {
        int rlen = reg.length();
        String lreg = reg.substring(0,rlen-1) + String.valueOf ((char) (1 + reg.charAt(rlen-1)));
        LDF ("%l7", 0, lreg);
        LDF ("%l7", 4, reg);
        return ADD ("%l7", 8, "%l7");
    }

    /** throw away the top n words of the evaluation stack
      * @param nw number of words to ditch
      * @returns code generated
      */
    public int
    tossES (int na)
    {
        return ADD ("%l7", 4 * na, "%l7");
    }

    /** push the value from the given register onto the evaluation stack
      * @param reg where value comes from
      * @returns code generated
      */
    public int
    pushES (String reg)
    {
        SUB ("%l7", 4, "%l7");
        return ST (reg, "%l7", 0);
    }
    /** push the double-word value starting at the given register on to the eval stack
      * @param reg high-word register of value
      * @returns last instruction generated
      */
    public int
    LpushES (String reg)
    {
        int rlen = reg.length();
        String lreg = reg.substring(0,rlen-1) + String.valueOf ((char) (1 + reg.charAt(rlen-1)));
        SUB ("%l7", 8, "%l7");
        ST (reg, "%l7", 4);
        return ST (lreg, "%l7", 0);
    }

    /** push the value from the given FP register onto the evaluation stack
      * @param reg where value comes from
      * @returns code generated
      */
    public int
    FpushES (String reg)
    {
        SUB ("%l7", 4, "%l7");
        return STF (reg, "%l7", 0);
    }
    /** push the double-word float starting at the given register on to the eval stack
      * @param reg high-word register of value
      * @returns last instruction generated
      */
    public int
    DpushES (String reg)
    {
        int rlen = reg.length();
        String lreg = reg.substring(0,rlen-1) + String.valueOf ((char) (1 + reg.charAt(rlen-1)));
        SUB ("%l7", 8, "%l7");
        STF (reg, "%l7", 4);
        return STF (lreg, "%l7", 0);
    }

    /** put the value n words down from top of stack into register, without
      * changing the stack pointer.
      * @param n how far down to look
      * @param reg where value should go
      * @returns code generated
      */
    public int
    peekES (int n, String reg)
    {
        return LD ("%l7", 4 * n, reg);
    }

    /** replace the value n words down from top of stack with register, without
      * changing the stack pointer.
      * @param n how far down to look
      * @param reg where new value comes from go
      * @returns code generated
      */
    public int
    pokeES (int n, String reg)
    {
        return ST (reg, "%l7", 4 * n);
    }

    private byte []
    int2bytearr (int v)
    {
        byte vseq [] = new byte [4];

        vseq [0] = (byte) (0xFF & (v >>> 24));
        vseq [1] = (byte) (0xFF & (v >>> 16));
        vseq [2] = (byte) (0xFF & (v >>>  8));
        vseq [3] = (byte) (0xFF & (v >>>  0));
/*
        {
            StringBuffer sb = new StringBuffer ("");
            int i;
            for (i = 0; i < vseq.length; i++) {
                sb.append ("0x" + Integer.toHexString (vseq [i]) + " ");
            }
            System.out.println ("I2BA (" + v + ") -> " + sb);
        }
        */
        return vseq;

    }
    protected byte[]
    UNIMP (int codeval)
    {
        return int2bytearr (UNIMP (0, codeval));
    }

    protected byte[]
    LOAD_REG (int val,
              Object oreg)
    {
        byte lrseq [] = new byte [8];
        String reg = (String) oreg;

        System.arraycopy (int2bytearr (SETHI (val, reg)), 0, lrseq, 0, 4);
        System.arraycopy (int2bytearr (SetLo (val, reg)), 0, lrseq, 4, 4);
/*
        {
            StringBuffer sb = new StringBuffer ("");
            int i;
            for (i = 0; i < lrseq.length; i++) {
                sb.append ("0x" + Integer.toHexString (lrseq [i]) + " ");
            }
            System.out.println ("LOAD_REG (" + val + ", " + reg + ") -> " + sb);
        }
        */
        return lrseq;
    }

    protected byte []
    RELATIVE_CALL (int offs)
    {
        return int2bytearr (CALL (offs));
    }
    protected byte []
    RELATIVE_JUMP (int offs)
    {
        return int2bytearr (BA (offs >> 2));
    }

}
