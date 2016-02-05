/**
  * Class to represent Intel86 immediate values
  * @version $Id: Immediate.java,v 1.4 1998/12/30 15:56:01 pab Exp $
  * @author Peter A. Bigot
  */

// We are part of the jit.
package toba.jit;

class Immediate
implements Cloneable            // This could be useful....
{

    /* You'd think representing an integer would be easy, but it is
     * crucially important for some instructions that you know whether
     * the value should be stored in one, two, or four bytes, and
     * whether it should be sign-extended if there's an implicit
     * conversion from an 8-bit immediate to a 32-bit operand. */

    private int value;          // Value of the immediate
    private int nbytes;         // Number of bytes we should use to store it
    private boolean signext;    // Should it be sign-extended?
    private Immediate imNB1;
    private Immediate imNB4;

    private static boolean
    valFitsByte (int v,
                 boolean sext)
    {
        return ((sext && (-128 <= v) && (v <= 127)) ||
                ((! sext) && (0 <= v) && (v <= 255)));
    }

    /** Create a new immediate value to be stored in the given number
      * of bytes, and note whether it should be sign-extended.
      * @param v value of immediate
      * @param sz number of bytes to use for store
      * @param sext boolean to store for sign-extension
      */
    Immediate (int v,           // Value
               int sz,          // Representation byte count
               boolean sext)    // Sign extend this?
    {
        value = v;
        nbytes = sz;
        signext = sext;
    }

    /** Create a new immediate with the given value, sign extending if
      * requested.  Size is 8bit if the value fits therein.
      * @param v value of immediate
      * @param sext boolean to store for sign-extension
      */
    Immediate (int v,           // Value
               boolean sext)    // Sign extend this?
    {
        this (v,  valFitsByte (v, sext) ? 1 : 4, sext);
    }

    /** Create a new immediate with the given value, sign extending it.
      * @param v value of immediate
      */
    Immediate (int v)           // Value
    {
        this (v, true);
    }

    /** Get the value of the immediate.
      * @returns int value of immediate
      */
    public int
    getValue ()
    {
        return value;
    }

    /** Set the value of the immediate.  Does not modify size or signext
      * values.
      * @returns Immediate This instance, modified in place
      */
    public Immediate
    setValue (int v)            // New value for immediate
    {
        value = v;
        return this;
    }

    /** Get the number of bytes we should use to store this.
      * @returns int number of bytes used to store immediate in instruction
      */
    public int
    getImmSize ()
    {
        return nbytes;
    }
    
    /** Set the size of the given immediate.  Checks validity based
      * on the representation range.
      * @param sz number of bytes requested for store
      */
    public Immediate
    setImmSize (int sz)
    {
        Immediate imv;
        
        if (nbytes == sz) {
            return this;
        }
        imv = (1 == sz) ? this.imNB1 : ((4 == sz) ? this.imNB4 : null);
        if (null != imv) {
            return imv;
        }
        imv = new Immediate (value, sz, signext);
        if ((1 == imv.nbytes) && ! valFitsByte (imv.value, imv.signext)) {
            throw new InternalError ("Immediate: Value " + value + " cannot be represented in one byte.");
        }
        if (1 == sz) {
            this.imNB1 = imv;
        } else if (4 == sz) {
            this.imNB4 = imv;
        }
        return imv;
    }

    /** Return true iff this value is represented in 1 byte, and we're to
      * sign-extend it.  NB: This returns false even if signext is true,
      * when the representation size is 4-bytes, because the value of
      * this flag tends to indicate presence of an 8-bit immediate.
      */
    public boolean
    getSignExtend ()
    {
        return (1 == nbytes) && signext;
    }

    /** Return the value of this Immediate's signext component.  DO NOT
      * use this for checking whether the S-flag should be on in an
      * instruction; it is insufficient for that. */
    public boolean
    getSignExtendFlagVal ()
    {
        return signext;
    }

    /** Set whether immediate should sign extend.  Does NOT check
      * validity based on value.
      * @param sext boolean to store for sign-extension
      * @returns Immediate this object, modified in place
      */
    public Immediate
    setSignExtend (boolean sext)
    {
        signext = sext;
        return this;
    }

    public Immediate
    setBestImmSize ()
    {
        if (valFitsByte (value, signext)) {
            nbytes = 1;
        } else {
            nbytes = 4;
        }
        return this;
    }

    /** Return a string (GNU as-style) representation of the
      * immediate value.
      * @returns String text representation of immediate
      */
    public String
    toString ()
    {
        String sq;
        switch (nbytes) {
            case 1:
                sq = "Q";
                break;
            case 2:
                sq = "W";
                break;
            case 4:
                sq = "L";
                break;
            default:
                sq = "BOGUS";
                break;
        }
            
        return "$" + Integer.toHexString (value) + sq;
    }

    public Object
    clone ()
    {
        return new Immediate (value, nbytes, signext);
    }
    
}
