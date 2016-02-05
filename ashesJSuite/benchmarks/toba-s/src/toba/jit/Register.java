/**
  * Class to represent Intel86 register operands
  * @version $Id: Register.java,v 1.3 1998/04/18 23:30:29 pab Exp $
  * @author Peter A. Bigot
  */

// We are part of the jit.
package toba.jit;

class Register {
    /* String names for registers; their position in this array denotes
     * the number used to encode that register in instructions.  Registers
     * in slots 8 and above are byte-sized. */
    private static final String RegNames [] = {
        "%eax", "%ecx", "%edx", "%ebx",
        "%esp", "%ebp", "%esi", "%edi",
        "%al", "%cl", "%dl", "%bl",
        "%ah", "%ch", "%dh", "%bh"
    };

    /* Integer names for registers.  Please please be sure they're in
     * sync with the RegNames array.  They should never be changed,
     * anyway.  A decent macro processor would avoid this whole problem. */
    private static final int RV_eax = 0;
    private static final int RV_ecx = 1;
    private static final int RV_edx = 2;
    private static final int RV_ebx = 3;
    private static final int RV_esp = 4;
    private static final int RV_ebp = 5;
    private static final int RV_esi = 6;
    private static final int RV_edi = 7;
    private static final int RV_al = 8 + 0;
    private static final int RV_cl = 8 + 1;
    private static final int RV_dl = 8 + 2;
    private static final int RV_bl = 8 + 3;
    private static final int RV_ah = 8 + 4;
    private static final int RV_ch = 8 + 5;
    private static final int RV_dh = 8 + 6;
    private static final int RV_bh = 8 + 7;

    /* Create the canonical instances of each register type.  There
     * really ought not be any Register instances created elsewhere;
     * we've done them all here, and that allows us to use pointer
     * equality checking. */
    protected static final Register R_eax = new Register (RV_eax, false);
    protected static final Register R_ecx = new Register (RV_ecx, false);
    protected static final Register R_edx = new Register (RV_edx, false);
    protected static final Register R_ebx = new Register (RV_ebx, false);
    protected static final Register R_esp = new Register (RV_esp, false);
    protected static final Register R_ebp = new Register (RV_ebp, false);
    protected static final Register R_esi = new Register (RV_esi, false);
    protected static final Register R_edi = new Register (RV_edi, false);
    protected static final Register R_al = new Register (RV_al, false);
    protected static final Register R_bl = new Register (RV_bl, false);
    protected static final Register R_cl = new Register (RV_cl, false);
    protected static final Register R_dl = new Register (RV_dl, false);
    protected static final Register R_ah = new Register (RV_ah, false);
    protected static final Register R_bh = new Register (RV_bh, false);
    protected static final Register R_ch = new Register (RV_ch, false);
    protected static final Register R_dh = new Register (RV_dh, false);
    
    /* Canonical floating-point stack references */
    protected static final Register R_ST0 = new Register (0, true);
    protected static final Register R_ST1 = new Register (1, true);
    protected static final Register R_ST2 = new Register (2, true);
    protected static final Register R_ST3 = new Register (3, true);
    protected static final Register R_ST4 = new Register (4, true);
    protected static final Register R_ST5 = new Register (5, true);
    protected static final Register R_ST6 = new Register (6, true);
    protected static final Register R_ST7 = new Register (7, true);

    /* Registers are stored by number, with a flag that's set if the
     * number refers to the FPU stack. */
    private int regid;
    private boolean isfpreg;

    /** Create a new register that may be an FP register.  This constructor
      * should not be needed by anybody else. */
    private
    Register (int rv,           // Number denoting register
              boolean ifpr)     // Whether this is an FPU register
    {
        regid = rv;
        isfpreg = ifpr;
    }

    /** Return true iff this register is either %eax or %al.
      */
    public boolean
    isAReg ()
    {
        return ((R_eax == this) || (R_al == this));
    }

    /** Return true iff this is an 8-bit register.
      */
    public boolean
    is8BitReg ()
    {
        return (8 <= regid);
    }

    /** Return the integral value that's embedded in instructions to name
      * this register.  These values range from 0 through 7; 8bit registers
      * are marked through a separate flag in the instruction.
      */
    public int
    getRegBitName ()
    {
        return (8 <= regid) ? (regid - 8) : regid;
    }

    /** Return true iff this is an FPU register/stack slot */
    public boolean
    isFPReg ()
    {
        return isfpreg;
    }

    /** Convert the register to a string-represented name. */
    public String
    toString ()
    {
        if (isfpreg) {
            return "ST(" + regid + ")";
        }
        return RegNames [regid];
    }
    
}
