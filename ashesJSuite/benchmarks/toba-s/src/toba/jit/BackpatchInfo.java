/**
  * Abstract class to encode backpatch requirements during code generation/linking
  * @version $Id: BackpatchInfo.java,v 1.7 1998/05/12 15:27:08 pab Exp $
  * @author Peter A. Bigot
  *
  * This class is used by the Toba just-in-time compiler to do
  * architecture-independent encoding of backpatch requirements: cases
  * where, during code generation, we know what instructions need to be
  * emitted, but we don't know what the operands will be until constant
  * resolution and linking has started.  This operates in concert with
  * architecture-specific backpatch classes.
  */

/* This is part of the Just-In-Time component of the Toba system */
package toba.jit;

import toba.classfile.*;

class BackpatchInfo {
    int brtype;                 // Generator-specific tag indicating jump type
    Instr ins;                  // Instruction that evoked the jump code
    int loffs;                  // Offset in code block of jump instruction
    Object treg;                // Target register for operation, if appropriate
    int inseqlen = 0;           // Length of instruction sequence for this backpatch
    boolean isDone = false;     // Has this been applied?

    /* Some backpatches require a value from some sort of reference type.
     * That's stored here, and may be a subclass of FieldRef or
     * of ClassRef, depending on the backpatch type. */
    Object or;                  // Reference parameter to backpatch

    /* Other backpatches require an integral value, which is sometimes
     * an int and sometimes a long.  For simplicity of interface, we
     * use long for all such classes. */
    long lv;                    // Long value for integer backpatches

    /* Chain the list of backpatches together */
    BackpatchInfo next;         // Next backpatch info in chain.

    /** Set the successor of this patch to the parameter
      * @param ob backpatch instance to be our successor
      * @returns this instance.
      */
    public BackpatchInfo
    setNext (BackpatchInfo ob)  // New successor
    {
        this.next = ob;
        return this;
    }

    /** Return the successor to this backpatch instance
      * @returns next backpatch
      */
    public BackpatchInfo
    getNext () {
        return this.next;
    }

    /** Overwrite the previous LongVal component of this BPI with a new
      * value.
      * @param v new value
      * @returns long previous value
      */
    public long
    setLongVal (long v) {
        long ov = lv;
        lv = v;
        return ov;
    }

    public void
    setInsSeqLen (int v) {
        inseqlen = v;
        return;
    }

    /** Create a new backpatch instance with reference parameter
      * @param brtype type tage denoting backpatch class
      * @param ins the Instr object that caused this to be generated
      * @param treg the target register for backpatches, where appropriate
      * @param loffs the offset in codeWords where the backpatch should occur
      * @param or the reference we don't yet have resolved
      * @returns a new backpatch instance encoding this request
      */
    BackpatchInfo (int brtype,
                   Instr ins,
                   Object treg,
                   int loffs,
                   Object or)
    {
        super();

        /* Store the core information */
        this.brtype = brtype;
        this.ins = ins;
        this.loffs = loffs;
        this.treg = treg;

        /* Store the reference, which better not be null */
        if (null == or) {
            throw new InternalError ("can't backpatch to null reference");
        }
        this.or = or;

        this.next = null;
    }

    /** Create a new backpatch instance with integral parameter
      * @param brtype type tage denoting backpatch class
      * @param ins the Instr object that caused this to be generated
      * @param treg the target register for backpatches, where appropriate
      * @param loffs the offset in codeWords where the backpatch should occur
      * @param lv the value (like a relative offset) to be applied during link
      * @returns a new backpatch instance encoding this request
      */
    BackpatchInfo (int brtype,
                   Instr ins,
                   Object treg,
                   int loffs,
                   long lv)
    {
        super();
        /* Store the core information */
        this.brtype = brtype;
        this.ins = ins;
        this.loffs = loffs;
        this.treg = treg;

        /* Store the integral parameter */
        this.lv = lv;

        this.or = null;
        this.next = null;
    }

    /** Convert a BackpatchInfo structure to a string
      * @returns string representation of instance
      */
    public final synchronized String
    toString () {
        StringBuffer sb = new StringBuffer ("Type ");

        sb.append (brtype).append (" at offset ").append(loffs).append(", instruction:\n");
        sb.append (ins);
        sb.append ("\n is to ");
        if (null == or) {
            sb.append ("local label ").append (lv).append (".");
        } else {
            String name;
            name = "INVALID REF TYPE";
            if (or instanceof FieldRef) {
                name = "field " + ((FieldRef)or).name;
            } else if (or instanceof ClassRef) {
                name = "class " + ((ClassRef)or).name;
            }
            sb.append (name).append (".");
        }
        return sb.toString();
    }
                       
}
