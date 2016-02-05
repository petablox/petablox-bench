/**
  * Class to represent Intel86 memory reference operands
  * @version $Id: MemoryRef.java,v 1.3 1998/04/18 23:30:29 pab Exp $
  * @author Peter A. Bigot
  */

// We are part of the jit.
package toba.jit;

class MemoryRef {

    /* Intel86 memory references are determined by adding an offset to
     * a base register plus a scale factor times an index register.
     * The scale factor can be 1, 2, 4, or 8.  A lot of permutations
     * are possible for what is or is not present.  We also need to
     * know whether we're referring to a 1-, 2-, 4-, or 8-byte chunk
     * of memory. */

    private Immediate displacement; // Offset from register-named location
    private Register basereg;   // Base register
    private int scalefact;      // Scale factor: 1, 2, 4, 8
    private Register indexreg;  // Index register
    private int refsize;        // Size of what we're referring to

    /* The scale factor is represented in the SIB by a two-bit field.
     * We compute the value of that field when the scale factor is set. */
    private int sfbits;         // Scale bit representation: 0, 1, 2, 3

    /** Create a new MemoryRef structure.
      * @param displ The displacement, null if not present
      * @param base The base register, null if not present
      * @param sfact The scale factor; should use 1 as default
      * @param sind The index register, null if not present
      * @param rsz The reference size; should use 4 as default
      */
    MemoryRef (Immediate displ, // Displacement
               Register base,   // Base register
               int sfact,       // Scale factor
               Register sind,   // Index register
               int rsz)         // Reference size
    {
        /* No checks on displacement; we go with what the user said. */
        displacement = displ;

        /* Base can be null, in case of scaled stuff, but if not, it
         * must be a full-sized register. */
        if ((null != base) &&
            base.is8BitReg ()) {
            throw new InternalError ("MemoryRef: Can't use 8-bit reg " + base + " as base\n");
        }
        basereg = base;

        /* Scale index can be null, but must be full-sized register, and
         * cannot be %esp. */
        if (null != sind) {
            if (sind.is8BitReg ()) {
                throw new InternalError ("MemoryRef: Can't use 8-bit reg " + base + " as scale index\n");
            }
            if (Register.R_esp == sind) {
                throw new InternalError ("MemoryRef: Can't use " + sind + " as scale index.\n");
            }
        }
        indexreg = sind;

        /* Scale factor requirements verified during set; must have set
         * indexreg already. */
        setScaleFactor (sfact);

        /* Reference size requirements verified during set. */
        setRefSize (rsz);
    }

    /** Create a new memory reference that is a register plus a displacement.
      * Scale component is dropped, and reference size is 4-bytes.
      * @param displ Displacement from register contents
      * @param base Base register
      */
    MemoryRef (Immediate displ, // Displacement
               Register base)   // Base register
    {
        this (displ, base, 1, null, 4);
    }

    /** Create a new memory reference that is just a register.  Scale
      * and displacement components are dropped, and reference size is
      * 4-bytes.
      * @param base Base register */
    MemoryRef (Register base)   // Base register
    {
        this (null, base, 1, null, 4);
    }

    /** Get the integer value of the current displacement; zero if there
      * is none.
      * @returns int reference displacement in bytes
      */
    public int
    getDisplacement ()
    {
        if (null == displacement) {
            return 0;
        }
        return displacement.getValue ();
    }

    /** Get the integer representing the two-bit scale field.
      * @returns int scale factor encoding
      */
    public int
    getScaleBits ()
    {
        return sfbits;
    }

    /** Get the index register scale factor.
      * @returns int scale factor value
      */
    public int
    getScaleFactor ()
    {
        return scalefact;
    }
    /** Get the reference base register.
      * @returns Register base register of memory reference
      */
    public Register
    getBaseReg ()
    {
        return basereg;
    }
    /** Get the reference index register.
      * @returns Register index register of memory reference
      */
    public Register
    getIndexReg ()
    {
        return indexreg;
    }
    /** Get the reference size.
      * @returns int Size of memory value we're looking at
      */
    public int
    getRefSize ()
    {
        return refsize;
    }

    /** Exchange the base and index register.  Only valid if scale factor
      * is one.  We use this when doing something with %ebp and %esp and
      * one or the other isn't encodable in the SIB in its chosen role.
      * @returns MemoryRef this instance, modified in place
      */
    public MemoryRef
    swapIndexBaseRegs ()
    {
        Register tmp;

        if (1 != scalefact) {
            throw new InternalError ("MemoryRef: Can't swap base/index with scale factor " + scalefact);
        }
        if (Register.R_esp == basereg) {
            throw new InternalError ("MemoryRef: Swap would illegally set index reg to %esp\n");
        }
        tmp = basereg;
        basereg = indexreg;
        indexreg = tmp;
        return this;
    }

    /** Set the reference scale factor.  This verifies the value.
      * @param sf New scale factor
      * @returns MemoryRef This instance, modified in place
      */
    public MemoryRef
    setScaleFactor (int sf)     // New scale factor
    {
        int sft;                // Potential scale factor

        if ((null == indexreg) &&
            (1 != sf)) {
            throw new InternalError ("Memory ref: can't have non-unit scale without index register\n");
        }

        /* Loop through the alternatives, until we either match the
         * factor associated with a given bit encoding, or run out of
         * bits. */
        sfbits = 0;
        sft = 1;
        while (4 > sfbits) {
            if (sft == sf) {    // Got it
                break;
            }
            /* No match; try the next factor */
            sfbits ++;
            sft <<= 1;
        }
        if (4 <= sfbits) {
            throw new InternalError ("MemoryRef: Illegal scale factor " + sf);
        }
        scalefact = sf;
        return this;
    }
    
    /** Set the size of the object refered to by this instance.
      * @param rsz Reference size in bytes (1, 2, 4, 8 valid)
      * @returns MemoryRef This instance, modified in place.
      */
    public MemoryRef
    setRefSize (int rsz)
    {
        if ((1 != rsz) &&
            (2 != rsz) &&
            (4 != rsz) &&
            (8 != rsz)) {
            throw new InternalError ("MemoryRef: Illegal reference size " + rsz);
        }
        refsize = rsz;
        return this;
    }

    /** Get a string representation of the memory reference.  We use something
      * basically the same as the GNU assembler.
      * @returns String text representation of object
      */
    public String
    toString ()
    {
        StringBuffer sb = new StringBuffer ("");

        if (null != displacement) {
            sb.append (displacement);
        }
        sb.append ("(");
        if (null != basereg) {
            sb.append (basereg);
        }
        sb.append (",");
        if (null != indexreg) {
            sb.append (indexreg);
        }
        sb.append ("," + scalefact + ")");
        sb.append ((1 == refsize) ? "Q" :
                   (2 == refsize) ? "W" :
                   (4 == refsize) ? "L" :
                   "X");
        return sb.toString ();
    }

}
