/*  ca_mcgill_sable_soot_coffi_ByteCode.c -- from Java class ca.mcgill.sable.soot.coffi.ByteCode  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_ByteCode.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_Instruction.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aaload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aastore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aconst_null.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aload_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aload_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aload_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Aload_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Anewarray.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Areturn.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Arraylength.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Astore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Astore_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Astore_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Astore_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Astore_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Athrow.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Baload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Bastore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Bipush.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Breakpoint.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Caload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Castore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Checkcast.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_D2f.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_D2i.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_D2l.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dadd.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Daload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dastore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dcmpg.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dcmpl.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dconst_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dconst_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ddiv.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dload_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dload_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dload_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dload_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dmul.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dneg.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Drem.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dreturn.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dstore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dstore_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dstore_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dstore_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dstore_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dsub.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dup.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dup2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dup2_x1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dup2_x2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dup_x1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Dup_x2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_F2d.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_F2i.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_F2l.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fadd.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Faload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fastore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fcmpg.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fcmpl.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fconst_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fconst_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fconst_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fdiv.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fload_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fload_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fload_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fload_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fmul.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fneg.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Frem.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Freturn.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fstore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fstore_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fstore_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fstore_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fstore_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Fsub.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Getfield.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Getstatic.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Goto.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Goto_w.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_I2d.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_I2f.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_I2l.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iadd.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iaload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iand.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iastore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iconst_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iconst_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iconst_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iconst_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iconst_4.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iconst_5.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iconst_m1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Idiv.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_acmpeq.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_acmpne.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_icmpeq.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_icmpge.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_icmpgt.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_icmple.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_icmplt.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_If_icmpne.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ifeq.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ifge.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ifgt.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ifle.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iflt.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ifne.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ifnonnull.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ifnull.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iinc.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iload_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iload_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iload_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iload_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Imul.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ineg.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Instanceof.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Int2byte.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Int2char.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Int2short.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokeinterface.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokenonvirtual.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokestatic.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokevirtual.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ior.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Irem.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ireturn.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ishl.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ishr.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Istore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Istore_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Istore_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Istore_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Istore_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Isub.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iushr.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ixor.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Jsr.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Jsr_w.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_L2d.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_L2f.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_L2i.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ladd.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Laload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Land.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lastore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lcmp.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lconst_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lconst_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ldc1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ldc2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ldc2w.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ldiv.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lload_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lload_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lload_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lload_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lmul.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lneg.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lor.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lrem.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lreturn.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lshl.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lshr.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lstore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lstore_0.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lstore_1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lstore_2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lstore_3.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lsub.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lushr.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lxor.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Monitorenter.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Monitorexit.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_New.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Newarray.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Nop.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Pop.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Pop2.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Putfield.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Putstatic.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ret.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ret_w.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Return.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Saload.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Sastore.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Sipush.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Swap.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Unknown.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_bytevar.h"
#include "java_io_PrintStream.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_ByteCode.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aaload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aastore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aconst_null.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Anewarray.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Areturn.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Arraylength.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Astore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Athrow.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Baload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Bastore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Bipush.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Breakpoint.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Caload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Castore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Checkcast.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_D2f.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_D2i.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_D2l.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dadd.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Daload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dastore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dcmpg.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dcmpl.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dconst_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dconst_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ddiv.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dmul.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dneg.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Drem.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dreturn.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dsub.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dup.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dup2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dup2_x1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dup2_x2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dup_x1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Dup_x2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_F2d.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_F2i.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_F2l.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fadd.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Faload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fastore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fcmpg.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fcmpl.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fconst_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fconst_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fconst_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fdiv.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fmul.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fneg.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Frem.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Freturn.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Fsub.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Getfield.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Getstatic.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Goto_w.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_I2d.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_I2f.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_I2l.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iadd.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iaload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iand.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iastore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_4.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_5.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_m1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Idiv.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_acmpeq.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_acmpne.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpeq.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpge.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpgt.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmple.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmplt.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpne.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ifeq.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ifge.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ifgt.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ifle.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iflt.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ifne.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ifnonnull.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ifnull.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iinc.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Imul.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ineg.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Instanceof.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Int2byte.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Int2char.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Int2short.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokeinterface.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokenonvirtual.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokestatic.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokevirtual.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ior.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Irem.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ireturn.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ishl.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ishr.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Istore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Isub.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iushr.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ixor.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr_w.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_L2d.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_L2f.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_L2i.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ladd.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Laload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Land.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lastore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lcmp.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lconst_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lconst_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc2w.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ldiv.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lmul.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lneg.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lor.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lrem.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lreturn.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lshl.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lshr.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_0.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_3.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lsub.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lushr.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lxor.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Monitorenter.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Monitorexit.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_New.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Newarray.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Nop.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Pop.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Pop2.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Putfield.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Putstatic.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret_w.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Return.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Saload.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Sastore.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Sipush.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Swap.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Unknown.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_ByteCode[];
extern const void *st_ca_mcgill_sable_soot_coffi_ByteCode[];
extern Class xt_init__oFJVb[];
extern Class xt_disassemble_bytecode_abi_PT1zT[];
extern Class xt_build_I_RPB63[];
extern Class xt_showCode_Iac_5QnNU[];
extern Class xt_showCode_Iiac_66L0C[];
extern Class xt_locateInst_i_e7Dnc[];
extern Class xt_locateInstr_iii_6t6A2[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_ByteCode.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_ByteCode.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_ByteCode.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_ByteCode.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(35) nmchars = {&acl_char, 0, 35, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','B','y','t','e','C','o','d','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 35 };
static const Char nmcv_0[] = {
'N','O','P'};
static const Char sgcv_0[] = {
'I'};
static const Char nmcv_1[] = {
'A','C','O','N','S','T','_','N','U','L','L'};
static const Char sgcv_1[] = {
'I'};
static const Char nmcv_2[] = {
'I','C','O','N','S','T','_','M','1'};
static const Char sgcv_2[] = {
'I'};
static const Char nmcv_3[] = {
'I','C','O','N','S','T','_','0'};
static const Char sgcv_3[] = {
'I'};
static const Char nmcv_4[] = {
'I','C','O','N','S','T','_','1'};
static const Char sgcv_4[] = {
'I'};
static const Char nmcv_5[] = {
'I','C','O','N','S','T','_','2'};
static const Char sgcv_5[] = {
'I'};
static const Char nmcv_6[] = {
'I','C','O','N','S','T','_','3'};
static const Char sgcv_6[] = {
'I'};
static const Char nmcv_7[] = {
'I','C','O','N','S','T','_','4'};
static const Char sgcv_7[] = {
'I'};
static const Char nmcv_8[] = {
'I','C','O','N','S','T','_','5'};
static const Char sgcv_8[] = {
'I'};
static const Char nmcv_9[] = {
'L','C','O','N','S','T','_','0'};
static const Char sgcv_9[] = {
'I'};
static const Char nmcv_10[] = {
'L','C','O','N','S','T','_','1'};
static const Char sgcv_10[] = {
'I'};
static const Char nmcv_11[] = {
'F','C','O','N','S','T','_','0'};
static const Char sgcv_11[] = {
'I'};
static const Char nmcv_12[] = {
'F','C','O','N','S','T','_','1'};
static const Char sgcv_12[] = {
'I'};
static const Char nmcv_13[] = {
'F','C','O','N','S','T','_','2'};
static const Char sgcv_13[] = {
'I'};
static const Char nmcv_14[] = {
'D','C','O','N','S','T','_','0'};
static const Char sgcv_14[] = {
'I'};
static const Char nmcv_15[] = {
'D','C','O','N','S','T','_','1'};
static const Char sgcv_15[] = {
'I'};
static const Char nmcv_16[] = {
'B','I','P','U','S','H'};
static const Char sgcv_16[] = {
'I'};
static const Char nmcv_17[] = {
'S','I','P','U','S','H'};
static const Char sgcv_17[] = {
'I'};
static const Char nmcv_18[] = {
'L','D','C','1'};
static const Char sgcv_18[] = {
'I'};
static const Char nmcv_19[] = {
'L','D','C','2'};
static const Char sgcv_19[] = {
'I'};
static const Char nmcv_20[] = {
'L','D','C','2','W'};
static const Char sgcv_20[] = {
'I'};
static const Char nmcv_21[] = {
'I','L','O','A','D'};
static const Char sgcv_21[] = {
'I'};
static const Char nmcv_22[] = {
'L','L','O','A','D'};
static const Char sgcv_22[] = {
'I'};
static const Char nmcv_23[] = {
'F','L','O','A','D'};
static const Char sgcv_23[] = {
'I'};
static const Char nmcv_24[] = {
'D','L','O','A','D'};
static const Char sgcv_24[] = {
'I'};
static const Char nmcv_25[] = {
'A','L','O','A','D'};
static const Char sgcv_25[] = {
'I'};
static const Char nmcv_26[] = {
'I','L','O','A','D','_','0'};
static const Char sgcv_26[] = {
'I'};
static const Char nmcv_27[] = {
'I','L','O','A','D','_','1'};
static const Char sgcv_27[] = {
'I'};
static const Char nmcv_28[] = {
'I','L','O','A','D','_','2'};
static const Char sgcv_28[] = {
'I'};
static const Char nmcv_29[] = {
'I','L','O','A','D','_','3'};
static const Char sgcv_29[] = {
'I'};
static const Char nmcv_30[] = {
'L','L','O','A','D','_','0'};
static const Char sgcv_30[] = {
'I'};
static const Char nmcv_31[] = {
'L','L','O','A','D','_','1'};
static const Char sgcv_31[] = {
'I'};
static const Char nmcv_32[] = {
'L','L','O','A','D','_','2'};
static const Char sgcv_32[] = {
'I'};
static const Char nmcv_33[] = {
'L','L','O','A','D','_','3'};
static const Char sgcv_33[] = {
'I'};
static const Char nmcv_34[] = {
'F','L','O','A','D','_','0'};
static const Char sgcv_34[] = {
'I'};
static const Char nmcv_35[] = {
'F','L','O','A','D','_','1'};
static const Char sgcv_35[] = {
'I'};
static const Char nmcv_36[] = {
'F','L','O','A','D','_','2'};
static const Char sgcv_36[] = {
'I'};
static const Char nmcv_37[] = {
'F','L','O','A','D','_','3'};
static const Char sgcv_37[] = {
'I'};
static const Char nmcv_38[] = {
'D','L','O','A','D','_','0'};
static const Char sgcv_38[] = {
'I'};
static const Char nmcv_39[] = {
'D','L','O','A','D','_','1'};
static const Char sgcv_39[] = {
'I'};
static const Char nmcv_40[] = {
'D','L','O','A','D','_','2'};
static const Char sgcv_40[] = {
'I'};
static const Char nmcv_41[] = {
'D','L','O','A','D','_','3'};
static const Char sgcv_41[] = {
'I'};
static const Char nmcv_42[] = {
'A','L','O','A','D','_','0'};
static const Char sgcv_42[] = {
'I'};
static const Char nmcv_43[] = {
'A','L','O','A','D','_','1'};
static const Char sgcv_43[] = {
'I'};
static const Char nmcv_44[] = {
'A','L','O','A','D','_','2'};
static const Char sgcv_44[] = {
'I'};
static const Char nmcv_45[] = {
'A','L','O','A','D','_','3'};
static const Char sgcv_45[] = {
'I'};
static const Char nmcv_46[] = {
'I','A','L','O','A','D'};
static const Char sgcv_46[] = {
'I'};
static const Char nmcv_47[] = {
'L','A','L','O','A','D'};
static const Char sgcv_47[] = {
'I'};
static const Char nmcv_48[] = {
'F','A','L','O','A','D'};
static const Char sgcv_48[] = {
'I'};
static const Char nmcv_49[] = {
'D','A','L','O','A','D'};
static const Char sgcv_49[] = {
'I'};
static const Char nmcv_50[] = {
'A','A','L','O','A','D'};
static const Char sgcv_50[] = {
'I'};
static const Char nmcv_51[] = {
'B','A','L','O','A','D'};
static const Char sgcv_51[] = {
'I'};
static const Char nmcv_52[] = {
'C','A','L','O','A','D'};
static const Char sgcv_52[] = {
'I'};
static const Char nmcv_53[] = {
'S','A','L','O','A','D'};
static const Char sgcv_53[] = {
'I'};
static const Char nmcv_54[] = {
'I','S','T','O','R','E'};
static const Char sgcv_54[] = {
'I'};
static const Char nmcv_55[] = {
'L','S','T','O','R','E'};
static const Char sgcv_55[] = {
'I'};
static const Char nmcv_56[] = {
'F','S','T','O','R','E'};
static const Char sgcv_56[] = {
'I'};
static const Char nmcv_57[] = {
'D','S','T','O','R','E'};
static const Char sgcv_57[] = {
'I'};
static const Char nmcv_58[] = {
'A','S','T','O','R','E'};
static const Char sgcv_58[] = {
'I'};
static const Char nmcv_59[] = {
'I','S','T','O','R','E','_','0'};
static const Char sgcv_59[] = {
'I'};
static const Char nmcv_60[] = {
'I','S','T','O','R','E','_','1'};
static const Char sgcv_60[] = {
'I'};
static const Char nmcv_61[] = {
'I','S','T','O','R','E','_','2'};
static const Char sgcv_61[] = {
'I'};
static const Char nmcv_62[] = {
'I','S','T','O','R','E','_','3'};
static const Char sgcv_62[] = {
'I'};
static const Char nmcv_63[] = {
'L','S','T','O','R','E','_','0'};
static const Char sgcv_63[] = {
'I'};
static const Char nmcv_64[] = {
'L','S','T','O','R','E','_','1'};
static const Char sgcv_64[] = {
'I'};
static const Char nmcv_65[] = {
'L','S','T','O','R','E','_','2'};
static const Char sgcv_65[] = {
'I'};
static const Char nmcv_66[] = {
'L','S','T','O','R','E','_','3'};
static const Char sgcv_66[] = {
'I'};
static const Char nmcv_67[] = {
'F','S','T','O','R','E','_','0'};
static const Char sgcv_67[] = {
'I'};
static const Char nmcv_68[] = {
'F','S','T','O','R','E','_','1'};
static const Char sgcv_68[] = {
'I'};
static const Char nmcv_69[] = {
'F','S','T','O','R','E','_','2'};
static const Char sgcv_69[] = {
'I'};
static const Char nmcv_70[] = {
'F','S','T','O','R','E','_','3'};
static const Char sgcv_70[] = {
'I'};
static const Char nmcv_71[] = {
'D','S','T','O','R','E','_','0'};
static const Char sgcv_71[] = {
'I'};
static const Char nmcv_72[] = {
'D','S','T','O','R','E','_','1'};
static const Char sgcv_72[] = {
'I'};
static const Char nmcv_73[] = {
'D','S','T','O','R','E','_','2'};
static const Char sgcv_73[] = {
'I'};
static const Char nmcv_74[] = {
'D','S','T','O','R','E','_','3'};
static const Char sgcv_74[] = {
'I'};
static const Char nmcv_75[] = {
'A','S','T','O','R','E','_','0'};
static const Char sgcv_75[] = {
'I'};
static const Char nmcv_76[] = {
'A','S','T','O','R','E','_','1'};
static const Char sgcv_76[] = {
'I'};
static const Char nmcv_77[] = {
'A','S','T','O','R','E','_','2'};
static const Char sgcv_77[] = {
'I'};
static const Char nmcv_78[] = {
'A','S','T','O','R','E','_','3'};
static const Char sgcv_78[] = {
'I'};
static const Char nmcv_79[] = {
'I','A','S','T','O','R','E'};
static const Char sgcv_79[] = {
'I'};
static const Char nmcv_80[] = {
'L','A','S','T','O','R','E'};
static const Char sgcv_80[] = {
'I'};
static const Char nmcv_81[] = {
'F','A','S','T','O','R','E'};
static const Char sgcv_81[] = {
'I'};
static const Char nmcv_82[] = {
'D','A','S','T','O','R','E'};
static const Char sgcv_82[] = {
'I'};
static const Char nmcv_83[] = {
'A','A','S','T','O','R','E'};
static const Char sgcv_83[] = {
'I'};
static const Char nmcv_84[] = {
'B','A','S','T','O','R','E'};
static const Char sgcv_84[] = {
'I'};
static const Char nmcv_85[] = {
'C','A','S','T','O','R','E'};
static const Char sgcv_85[] = {
'I'};
static const Char nmcv_86[] = {
'S','A','S','T','O','R','E'};
static const Char sgcv_86[] = {
'I'};
static const Char nmcv_87[] = {
'P','O','P'};
static const Char sgcv_87[] = {
'I'};
static const Char nmcv_88[] = {
'P','O','P','2'};
static const Char sgcv_88[] = {
'I'};
static const Char nmcv_89[] = {
'D','U','P'};
static const Char sgcv_89[] = {
'I'};
static const Char nmcv_90[] = {
'D','U','P','_','X','1'};
static const Char sgcv_90[] = {
'I'};
static const Char nmcv_91[] = {
'D','U','P','_','X','2'};
static const Char sgcv_91[] = {
'I'};
static const Char nmcv_92[] = {
'D','U','P','2'};
static const Char sgcv_92[] = {
'I'};
static const Char nmcv_93[] = {
'D','U','P','2','_','X','1'};
static const Char sgcv_93[] = {
'I'};
static const Char nmcv_94[] = {
'D','U','P','2','_','X','2'};
static const Char sgcv_94[] = {
'I'};
static const Char nmcv_95[] = {
'S','W','A','P'};
static const Char sgcv_95[] = {
'I'};
static const Char nmcv_96[] = {
'I','A','D','D'};
static const Char sgcv_96[] = {
'I'};
static const Char nmcv_97[] = {
'L','A','D','D'};
static const Char sgcv_97[] = {
'I'};
static const Char nmcv_98[] = {
'F','A','D','D'};
static const Char sgcv_98[] = {
'I'};
static const Char nmcv_99[] = {
'D','A','D','D'};
static const Char sgcv_99[] = {
'I'};
static const Char nmcv_100[] = {
'I','S','U','B'};
static const Char sgcv_100[] = {
'I'};
static const Char nmcv_101[] = {
'L','S','U','B'};
static const Char sgcv_101[] = {
'I'};
static const Char nmcv_102[] = {
'F','S','U','B'};
static const Char sgcv_102[] = {
'I'};
static const Char nmcv_103[] = {
'D','S','U','B'};
static const Char sgcv_103[] = {
'I'};
static const Char nmcv_104[] = {
'I','M','U','L'};
static const Char sgcv_104[] = {
'I'};
static const Char nmcv_105[] = {
'L','M','U','L'};
static const Char sgcv_105[] = {
'I'};
static const Char nmcv_106[] = {
'F','M','U','L'};
static const Char sgcv_106[] = {
'I'};
static const Char nmcv_107[] = {
'D','M','U','L'};
static const Char sgcv_107[] = {
'I'};
static const Char nmcv_108[] = {
'I','D','I','V'};
static const Char sgcv_108[] = {
'I'};
static const Char nmcv_109[] = {
'L','D','I','V'};
static const Char sgcv_109[] = {
'I'};
static const Char nmcv_110[] = {
'F','D','I','V'};
static const Char sgcv_110[] = {
'I'};
static const Char nmcv_111[] = {
'D','D','I','V'};
static const Char sgcv_111[] = {
'I'};
static const Char nmcv_112[] = {
'I','R','E','M'};
static const Char sgcv_112[] = {
'I'};
static const Char nmcv_113[] = {
'L','R','E','M'};
static const Char sgcv_113[] = {
'I'};
static const Char nmcv_114[] = {
'F','R','E','M'};
static const Char sgcv_114[] = {
'I'};
static const Char nmcv_115[] = {
'D','R','E','M'};
static const Char sgcv_115[] = {
'I'};
static const Char nmcv_116[] = {
'I','N','E','G'};
static const Char sgcv_116[] = {
'I'};
static const Char nmcv_117[] = {
'L','N','E','G'};
static const Char sgcv_117[] = {
'I'};
static const Char nmcv_118[] = {
'F','N','E','G'};
static const Char sgcv_118[] = {
'I'};
static const Char nmcv_119[] = {
'D','N','E','G'};
static const Char sgcv_119[] = {
'I'};
static const Char nmcv_120[] = {
'I','S','H','L'};
static const Char sgcv_120[] = {
'I'};
static const Char nmcv_121[] = {
'L','S','H','L'};
static const Char sgcv_121[] = {
'I'};
static const Char nmcv_122[] = {
'I','S','H','R'};
static const Char sgcv_122[] = {
'I'};
static const Char nmcv_123[] = {
'L','S','H','R'};
static const Char sgcv_123[] = {
'I'};
static const Char nmcv_124[] = {
'I','U','S','H','R'};
static const Char sgcv_124[] = {
'I'};
static const Char nmcv_125[] = {
'L','U','S','H','R'};
static const Char sgcv_125[] = {
'I'};
static const Char nmcv_126[] = {
'I','A','N','D'};
static const Char sgcv_126[] = {
'I'};
static const Char nmcv_127[] = {
'L','A','N','D'};
static const Char sgcv_127[] = {
'I'};
static const Char nmcv_128[] = {
'I','O','R'};
static const Char sgcv_128[] = {
'I'};
static const Char nmcv_129[] = {
'L','O','R'};
static const Char sgcv_129[] = {
'I'};
static const Char nmcv_130[] = {
'I','X','O','R'};
static const Char sgcv_130[] = {
'I'};
static const Char nmcv_131[] = {
'L','X','O','R'};
static const Char sgcv_131[] = {
'I'};
static const Char nmcv_132[] = {
'I','I','N','C'};
static const Char sgcv_132[] = {
'I'};
static const Char nmcv_133[] = {
'I','2','L'};
static const Char sgcv_133[] = {
'I'};
static const Char nmcv_134[] = {
'I','2','F'};
static const Char sgcv_134[] = {
'I'};
static const Char nmcv_135[] = {
'I','2','D'};
static const Char sgcv_135[] = {
'I'};
static const Char nmcv_136[] = {
'L','2','I'};
static const Char sgcv_136[] = {
'I'};
static const Char nmcv_137[] = {
'L','2','F'};
static const Char sgcv_137[] = {
'I'};
static const Char nmcv_138[] = {
'L','2','D'};
static const Char sgcv_138[] = {
'I'};
static const Char nmcv_139[] = {
'F','2','I'};
static const Char sgcv_139[] = {
'I'};
static const Char nmcv_140[] = {
'F','2','L'};
static const Char sgcv_140[] = {
'I'};
static const Char nmcv_141[] = {
'F','2','D'};
static const Char sgcv_141[] = {
'I'};
static const Char nmcv_142[] = {
'D','2','I'};
static const Char sgcv_142[] = {
'I'};
static const Char nmcv_143[] = {
'D','2','L'};
static const Char sgcv_143[] = {
'I'};
static const Char nmcv_144[] = {
'D','2','F'};
static const Char sgcv_144[] = {
'I'};
static const Char nmcv_145[] = {
'I','N','T','2','B','Y','T','E'};
static const Char sgcv_145[] = {
'I'};
static const Char nmcv_146[] = {
'I','N','T','2','C','H','A','R'};
static const Char sgcv_146[] = {
'I'};
static const Char nmcv_147[] = {
'I','N','T','2','S','H','O','R','T'};
static const Char sgcv_147[] = {
'I'};
static const Char nmcv_148[] = {
'L','C','M','P'};
static const Char sgcv_148[] = {
'I'};
static const Char nmcv_149[] = {
'F','C','M','P','L'};
static const Char sgcv_149[] = {
'I'};
static const Char nmcv_150[] = {
'F','C','M','P','G'};
static const Char sgcv_150[] = {
'I'};
static const Char nmcv_151[] = {
'D','C','M','P','L'};
static const Char sgcv_151[] = {
'I'};
static const Char nmcv_152[] = {
'D','C','M','P','G'};
static const Char sgcv_152[] = {
'I'};
static const Char nmcv_153[] = {
'I','F','E','Q'};
static const Char sgcv_153[] = {
'I'};
static const Char nmcv_154[] = {
'I','F','N','E'};
static const Char sgcv_154[] = {
'I'};
static const Char nmcv_155[] = {
'I','F','L','T'};
static const Char sgcv_155[] = {
'I'};
static const Char nmcv_156[] = {
'I','F','G','E'};
static const Char sgcv_156[] = {
'I'};
static const Char nmcv_157[] = {
'I','F','G','T'};
static const Char sgcv_157[] = {
'I'};
static const Char nmcv_158[] = {
'I','F','L','E'};
static const Char sgcv_158[] = {
'I'};
static const Char nmcv_159[] = {
'I','F','_','I','C','M','P','E','Q'};
static const Char sgcv_159[] = {
'I'};
static const Char nmcv_160[] = {
'I','F','_','I','C','M','P','N','E'};
static const Char sgcv_160[] = {
'I'};
static const Char nmcv_161[] = {
'I','F','_','I','C','M','P','L','T'};
static const Char sgcv_161[] = {
'I'};
static const Char nmcv_162[] = {
'I','F','_','I','C','M','P','G','E'};
static const Char sgcv_162[] = {
'I'};
static const Char nmcv_163[] = {
'I','F','_','I','C','M','P','G','T'};
static const Char sgcv_163[] = {
'I'};
static const Char nmcv_164[] = {
'I','F','_','I','C','M','P','L','E'};
static const Char sgcv_164[] = {
'I'};
static const Char nmcv_165[] = {
'I','F','_','A','C','M','P','E','Q'};
static const Char sgcv_165[] = {
'I'};
static const Char nmcv_166[] = {
'I','F','_','A','C','M','P','N','E'};
static const Char sgcv_166[] = {
'I'};
static const Char nmcv_167[] = {
'G','O','T','O'};
static const Char sgcv_167[] = {
'I'};
static const Char nmcv_168[] = {
'J','S','R'};
static const Char sgcv_168[] = {
'I'};
static const Char nmcv_169[] = {
'R','E','T'};
static const Char sgcv_169[] = {
'I'};
static const Char nmcv_170[] = {
'T','A','B','L','E','S','W','I','T','C','H'};
static const Char sgcv_170[] = {
'I'};
static const Char nmcv_171[] = {
'L','O','O','K','U','P','S','W','I','T','C','H'};
static const Char sgcv_171[] = {
'I'};
static const Char nmcv_172[] = {
'I','R','E','T','U','R','N'};
static const Char sgcv_172[] = {
'I'};
static const Char nmcv_173[] = {
'L','R','E','T','U','R','N'};
static const Char sgcv_173[] = {
'I'};
static const Char nmcv_174[] = {
'F','R','E','T','U','R','N'};
static const Char sgcv_174[] = {
'I'};
static const Char nmcv_175[] = {
'D','R','E','T','U','R','N'};
static const Char sgcv_175[] = {
'I'};
static const Char nmcv_176[] = {
'A','R','E','T','U','R','N'};
static const Char sgcv_176[] = {
'I'};
static const Char nmcv_177[] = {
'R','E','T','U','R','N'};
static const Char sgcv_177[] = {
'I'};
static const Char nmcv_178[] = {
'G','E','T','S','T','A','T','I','C'};
static const Char sgcv_178[] = {
'I'};
static const Char nmcv_179[] = {
'P','U','T','S','T','A','T','I','C'};
static const Char sgcv_179[] = {
'I'};
static const Char nmcv_180[] = {
'G','E','T','F','I','E','L','D'};
static const Char sgcv_180[] = {
'I'};
static const Char nmcv_181[] = {
'P','U','T','F','I','E','L','D'};
static const Char sgcv_181[] = {
'I'};
static const Char nmcv_182[] = {
'I','N','V','O','K','E','V','I','R','T','U','A','L'};
static const Char sgcv_182[] = {
'I'};
static const Char nmcv_183[] = {
'I','N','V','O','K','E','N','O','N','V','I','R','T','U','A','L'};
static const Char sgcv_183[] = {
'I'};
static const Char nmcv_184[] = {
'I','N','V','O','K','E','S','T','A','T','I','C'};
static const Char sgcv_184[] = {
'I'};
static const Char nmcv_185[] = {
'I','N','V','O','K','E','I','N','T','E','R','F','A','C','E'};
static const Char sgcv_185[] = {
'I'};
static const Char nmcv_186[] = {
'N','E','W'};
static const Char sgcv_186[] = {
'I'};
static const Char nmcv_187[] = {
'N','E','W','A','R','R','A','Y'};
static const Char sgcv_187[] = {
'I'};
static const Char nmcv_188[] = {
'A','N','E','W','A','R','R','A','Y'};
static const Char sgcv_188[] = {
'I'};
static const Char nmcv_189[] = {
'A','R','R','A','Y','L','E','N','G','T','H'};
static const Char sgcv_189[] = {
'I'};
static const Char nmcv_190[] = {
'A','T','H','R','O','W'};
static const Char sgcv_190[] = {
'I'};
static const Char nmcv_191[] = {
'C','H','E','C','K','C','A','S','T'};
static const Char sgcv_191[] = {
'I'};
static const Char nmcv_192[] = {
'I','N','S','T','A','N','C','E','O','F'};
static const Char sgcv_192[] = {
'I'};
static const Char nmcv_193[] = {
'M','O','N','I','T','O','R','E','N','T','E','R'};
static const Char sgcv_193[] = {
'I'};
static const Char nmcv_194[] = {
'M','O','N','I','T','O','R','E','X','I','T'};
static const Char sgcv_194[] = {
'I'};
static const Char nmcv_195[] = {
'W','I','D','E'};
static const Char sgcv_195[] = {
'I'};
static const Char nmcv_196[] = {
'M','U','L','T','I','A','N','E','W','A','R','R','A','Y'};
static const Char sgcv_196[] = {
'I'};
static const Char nmcv_197[] = {
'I','F','N','U','L','L'};
static const Char sgcv_197[] = {
'I'};
static const Char nmcv_198[] = {
'I','F','N','O','N','N','U','L','L'};
static const Char sgcv_198[] = {
'I'};
static const Char nmcv_199[] = {
'G','O','T','O','_','W'};
static const Char sgcv_199[] = {
'I'};
static const Char nmcv_200[] = {
'J','S','R','_','W'};
static const Char sgcv_200[] = {
'I'};
static const Char nmcv_201[] = {
'B','R','E','A','K','P','O','I','N','T'};
static const Char sgcv_201[] = {
'I'};
static const Char nmcv_202[] = {
'R','E','T','_','W'};
static const Char sgcv_202[] = {
'I'};
static const Char nmiv_0[] = {
'i','c','o','u','n','t'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'i','n','s','t','r','u','c','t','i','o','n','s'};
static const Char sgiv_1[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';'};
static const Char nmsm_0[] = {
's','h','o','w','C','o','d','e'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';','[','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','c','p',
'_','i','n','f','o',';',')','V'};
static const Char nmsm_1[] = {
's','h','o','w','C','o','d','e'};
static const Char sgsm_1[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';','I','[','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','c',
'p','_','i','n','f','o',';',')','V'};
static const Char nmim_0[] = {
'<','i','n','i','t','>'};
static const Char sgim_0[] = {
'(',')','V'};
static const Char nmim_1[] = {
'c','l','o','n','e'};
static const Char sgim_1[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_2[] = {
'e','q','u','a','l','s'};
static const Char sgim_2[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_3[] = {
'f','i','n','a','l','i','z','e'};
static const Char sgim_3[] = {
'(',')','V'};
static const Char nmim_4[] = {
'g','e','t','C','l','a','s','s'};
static const Char sgim_4[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','C','l','a','s','s',
';'};
static const Char nmim_5[] = {
'h','a','s','h','C','o','d','e'};
static const Char sgim_5[] = {
'(',')','I'};
static const Char nmim_6[] = {
'n','o','t','i','f','y'};
static const Char sgim_6[] = {
'(',')','V'};
static const Char nmim_7[] = {
'n','o','t','i','f','y','A','l','l'};
static const Char sgim_7[] = {
'(',')','V'};
static const Char nmim_8[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_8[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_9[] = {
'w','a','i','t'};
static const Char sgim_9[] = {
'(',')','V'};
static const Char nmim_10[] = {
'w','a','i','t'};
static const Char sgim_10[] = {
'(','J',')','V'};
static const Char nmim_11[] = {
'w','a','i','t'};
static const Char sgim_11[] = {
'(','J','I',')','V'};
static const Char nmim_12[] = {
'd','i','s','a','s','s','e','m','b','l','e','_','b','y','t','e','c','o',
'd','e'};
static const Char sgim_12[] = {
'(','[','B','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','I','n','s',
't','r','u','c','t','i','o','n',';'};
static const Char nmim_13[] = {
'b','u','i','l','d'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','V'};
static const Char nmim_14[] = {
'l','o','c','a','t','e','I','n','s','t'};
static const Char sgim_14[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r',
'u','c','t','i','o','n',';'};
static const Char nmim_15[] = {
'l','o','c','a','t','e','I','n','s','t','r'};
static const Char sgim_15[] = {
'(','I','I','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','I','n','s',
't','r','u','c','t','i','o','n',';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.NOP,(const Char *)&nmcv_0,3,(const Char *)&sgcv_0,1,1,0x19,0}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ACONST_NULL,(const Char *)&nmcv_1,11,(const Char *)&sgcv_1,1,1,0x19,1}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_M1,(const Char *)&nmcv_2,9,(const Char *)&sgcv_2,1,1,0x19,2}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_0,(const Char *)&nmcv_3,8,(const Char *)&sgcv_3,1,1,0x19,3}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_1,(const Char *)&nmcv_4,8,(const Char *)&sgcv_4,1,1,0x19,4}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_2,(const Char *)&nmcv_5,8,(const Char *)&sgcv_5,1,1,0x19,5}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_3,(const Char *)&nmcv_6,8,(const Char *)&sgcv_6,1,1,0x19,6}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_4,(const Char *)&nmcv_7,8,(const Char *)&sgcv_7,1,1,0x19,7}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_5,(const Char *)&nmcv_8,8,(const Char *)&sgcv_8,1,1,0x19,8}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LCONST_0,(const Char *)&nmcv_9,8,(const Char *)&sgcv_9,1,1,0x19,9}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LCONST_1,(const Char *)&nmcv_10,8,(const Char *)&sgcv_10,1,1,0x19,10}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCONST_0,(const Char *)&nmcv_11,8,(const Char *)&sgcv_11,1,1,0x19,11}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCONST_1,(const Char *)&nmcv_12,8,(const Char *)&sgcv_12,1,1,0x19,12}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCONST_2,(const Char *)&nmcv_13,8,(const Char *)&sgcv_13,1,1,0x19,13}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCONST_0,(const Char *)&nmcv_14,8,(const Char *)&sgcv_14,1,1,0x19,14}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCONST_1,(const Char *)&nmcv_15,8,(const Char *)&sgcv_15,1,1,0x19,15}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BIPUSH,(const Char *)&nmcv_16,6,(const Char *)&sgcv_16,1,1,0x19,16}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SIPUSH,(const Char *)&nmcv_17,6,(const Char *)&sgcv_17,1,1,0x19,17}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDC1,(const Char *)&nmcv_18,4,(const Char *)&sgcv_18,1,1,0x19,18}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDC2,(const Char *)&nmcv_19,4,(const Char *)&sgcv_19,1,1,0x19,19}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDC2W,(const Char *)&nmcv_20,5,(const Char *)&sgcv_20,1,1,0x19,20}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD,(const Char *)&nmcv_21,5,(const Char *)&sgcv_21,1,1,0x19,21}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD,(const Char *)&nmcv_22,5,(const Char *)&sgcv_22,1,1,0x19,22}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD,(const Char *)&nmcv_23,5,(const Char *)&sgcv_23,1,1,0x19,23}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD,(const Char *)&nmcv_24,5,(const Char *)&sgcv_24,1,1,0x19,24}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD,(const Char *)&nmcv_25,5,(const Char *)&sgcv_25,1,1,0x19,25}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_0,(const Char *)&nmcv_26,7,(const Char *)&sgcv_26,1,1,0x19,26}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_1,(const Char *)&nmcv_27,7,(const Char *)&sgcv_27,1,1,0x19,27}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_2,(const Char *)&nmcv_28,7,(const Char *)&sgcv_28,1,1,0x19,28}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_3,(const Char *)&nmcv_29,7,(const Char *)&sgcv_29,1,1,0x19,29}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_0,(const Char *)&nmcv_30,7,(const Char *)&sgcv_30,1,1,0x19,30}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_1,(const Char *)&nmcv_31,7,(const Char *)&sgcv_31,1,1,0x19,31}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_2,(const Char *)&nmcv_32,7,(const Char *)&sgcv_32,1,1,0x19,32}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_3,(const Char *)&nmcv_33,7,(const Char *)&sgcv_33,1,1,0x19,33}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_0,(const Char *)&nmcv_34,7,(const Char *)&sgcv_34,1,1,0x19,34}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_1,(const Char *)&nmcv_35,7,(const Char *)&sgcv_35,1,1,0x19,35}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_2,(const Char *)&nmcv_36,7,(const Char *)&sgcv_36,1,1,0x19,36}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_3,(const Char *)&nmcv_37,7,(const Char *)&sgcv_37,1,1,0x19,37}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_0,(const Char *)&nmcv_38,7,(const Char *)&sgcv_38,1,1,0x19,38}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_1,(const Char *)&nmcv_39,7,(const Char *)&sgcv_39,1,1,0x19,39}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_2,(const Char *)&nmcv_40,7,(const Char *)&sgcv_40,1,1,0x19,40}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_3,(const Char *)&nmcv_41,7,(const Char *)&sgcv_41,1,1,0x19,41}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_0,(const Char *)&nmcv_42,7,(const Char *)&sgcv_42,1,1,0x19,42}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_1,(const Char *)&nmcv_43,7,(const Char *)&sgcv_43,1,1,0x19,43}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_2,(const Char *)&nmcv_44,7,(const Char *)&sgcv_44,1,1,0x19,44}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_3,(const Char *)&nmcv_45,7,(const Char *)&sgcv_45,1,1,0x19,45}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IALOAD,(const Char *)&nmcv_46,6,(const Char *)&sgcv_46,1,1,0x19,46}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LALOAD,(const Char *)&nmcv_47,6,(const Char *)&sgcv_47,1,1,0x19,47}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FALOAD,(const Char *)&nmcv_48,6,(const Char *)&sgcv_48,1,1,0x19,48}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DALOAD,(const Char *)&nmcv_49,6,(const Char *)&sgcv_49,1,1,0x19,49}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.AALOAD,(const Char *)&nmcv_50,6,(const Char *)&sgcv_50,1,1,0x19,50}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BALOAD,(const Char *)&nmcv_51,6,(const Char *)&sgcv_51,1,1,0x19,51}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.CALOAD,(const Char *)&nmcv_52,6,(const Char *)&sgcv_52,1,1,0x19,52}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SALOAD,(const Char *)&nmcv_53,6,(const Char *)&sgcv_53,1,1,0x19,53}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE,(const Char *)&nmcv_54,6,(const Char *)&sgcv_54,1,1,0x19,54}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE,(const Char *)&nmcv_55,6,(const Char *)&sgcv_55,1,1,0x19,55}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE,(const Char *)&nmcv_56,6,(const Char *)&sgcv_56,1,1,0x19,56}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE,(const Char *)&nmcv_57,6,(const Char *)&sgcv_57,1,1,0x19,57}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE,(const Char *)&nmcv_58,6,(const Char *)&sgcv_58,1,1,0x19,58}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_0,(const Char *)&nmcv_59,8,(const Char *)&sgcv_59,1,1,0x19,59}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_1,(const Char *)&nmcv_60,8,(const Char *)&sgcv_60,1,1,0x19,60}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_2,(const Char *)&nmcv_61,8,(const Char *)&sgcv_61,1,1,0x19,61}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_3,(const Char *)&nmcv_62,8,(const Char *)&sgcv_62,1,1,0x19,62}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_0,(const Char *)&nmcv_63,8,(const Char *)&sgcv_63,1,1,0x19,63}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_1,(const Char *)&nmcv_64,8,(const Char *)&sgcv_64,1,1,0x19,64}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_2,(const Char *)&nmcv_65,8,(const Char *)&sgcv_65,1,1,0x19,65}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_3,(const Char *)&nmcv_66,8,(const Char *)&sgcv_66,1,1,0x19,66}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_0,(const Char *)&nmcv_67,8,(const Char *)&sgcv_67,1,1,0x19,67}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_1,(const Char *)&nmcv_68,8,(const Char *)&sgcv_68,1,1,0x19,68}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_2,(const Char *)&nmcv_69,8,(const Char *)&sgcv_69,1,1,0x19,69}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_3,(const Char *)&nmcv_70,8,(const Char *)&sgcv_70,1,1,0x19,70}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_0,(const Char *)&nmcv_71,8,(const Char *)&sgcv_71,1,1,0x19,71}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_1,(const Char *)&nmcv_72,8,(const Char *)&sgcv_72,1,1,0x19,72}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_2,(const Char *)&nmcv_73,8,(const Char *)&sgcv_73,1,1,0x19,73}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_3,(const Char *)&nmcv_74,8,(const Char *)&sgcv_74,1,1,0x19,74}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_0,(const Char *)&nmcv_75,8,(const Char *)&sgcv_75,1,1,0x19,75}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_1,(const Char *)&nmcv_76,8,(const Char *)&sgcv_76,1,1,0x19,76}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_2,(const Char *)&nmcv_77,8,(const Char *)&sgcv_77,1,1,0x19,77}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_3,(const Char *)&nmcv_78,8,(const Char *)&sgcv_78,1,1,0x19,78}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IASTORE,(const Char *)&nmcv_79,7,(const Char *)&sgcv_79,1,1,0x19,79}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LASTORE,(const Char *)&nmcv_80,7,(const Char *)&sgcv_80,1,1,0x19,80}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FASTORE,(const Char *)&nmcv_81,7,(const Char *)&sgcv_81,1,1,0x19,81}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DASTORE,(const Char *)&nmcv_82,7,(const Char *)&sgcv_82,1,1,0x19,82}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.AASTORE,(const Char *)&nmcv_83,7,(const Char *)&sgcv_83,1,1,0x19,83}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BASTORE,(const Char *)&nmcv_84,7,(const Char *)&sgcv_84,1,1,0x19,84}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.CASTORE,(const Char *)&nmcv_85,7,(const Char *)&sgcv_85,1,1,0x19,85}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SASTORE,(const Char *)&nmcv_86,7,(const Char *)&sgcv_86,1,1,0x19,86}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.POP,(const Char *)&nmcv_87,3,(const Char *)&sgcv_87,1,1,0x19,87}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.POP2,(const Char *)&nmcv_88,4,(const Char *)&sgcv_88,1,1,0x19,88}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP,(const Char *)&nmcv_89,3,(const Char *)&sgcv_89,1,1,0x19,89}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP_X1,(const Char *)&nmcv_90,6,(const Char *)&sgcv_90,1,1,0x19,90}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP_X2,(const Char *)&nmcv_91,6,(const Char *)&sgcv_91,1,1,0x19,91}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP2,(const Char *)&nmcv_92,4,(const Char *)&sgcv_92,1,1,0x19,92}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP2_X1,(const Char *)&nmcv_93,7,(const Char *)&sgcv_93,1,1,0x19,93}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP2_X2,(const Char *)&nmcv_94,7,(const Char *)&sgcv_94,1,1,0x19,94}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SWAP,(const Char *)&nmcv_95,4,(const Char *)&sgcv_95,1,1,0x19,95}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IADD,(const Char *)&nmcv_96,4,(const Char *)&sgcv_96,1,1,0x19,96}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LADD,(const Char *)&nmcv_97,4,(const Char *)&sgcv_97,1,1,0x19,97}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FADD,(const Char *)&nmcv_98,4,(const Char *)&sgcv_98,1,1,0x19,98}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DADD,(const Char *)&nmcv_99,4,(const Char *)&sgcv_99,1,1,0x19,99}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISUB,(const Char *)&nmcv_100,4,(const Char *)&sgcv_100,1,1,0x19,100}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSUB,(const Char *)&nmcv_101,4,(const Char *)&sgcv_101,1,1,0x19,101}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSUB,(const Char *)&nmcv_102,4,(const Char *)&sgcv_102,1,1,0x19,102}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSUB,(const Char *)&nmcv_103,4,(const Char *)&sgcv_103,1,1,0x19,103}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IMUL,(const Char *)&nmcv_104,4,(const Char *)&sgcv_104,1,1,0x19,104}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LMUL,(const Char *)&nmcv_105,4,(const Char *)&sgcv_105,1,1,0x19,105}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FMUL,(const Char *)&nmcv_106,4,(const Char *)&sgcv_106,1,1,0x19,106}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DMUL,(const Char *)&nmcv_107,4,(const Char *)&sgcv_107,1,1,0x19,107}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IDIV,(const Char *)&nmcv_108,4,(const Char *)&sgcv_108,1,1,0x19,108}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDIV,(const Char *)&nmcv_109,4,(const Char *)&sgcv_109,1,1,0x19,109}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FDIV,(const Char *)&nmcv_110,4,(const Char *)&sgcv_110,1,1,0x19,110}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DDIV,(const Char *)&nmcv_111,4,(const Char *)&sgcv_111,1,1,0x19,111}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IREM,(const Char *)&nmcv_112,4,(const Char *)&sgcv_112,1,1,0x19,112}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LREM,(const Char *)&nmcv_113,4,(const Char *)&sgcv_113,1,1,0x19,113}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FREM,(const Char *)&nmcv_114,4,(const Char *)&sgcv_114,1,1,0x19,114}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DREM,(const Char *)&nmcv_115,4,(const Char *)&sgcv_115,1,1,0x19,115}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INEG,(const Char *)&nmcv_116,4,(const Char *)&sgcv_116,1,1,0x19,116}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LNEG,(const Char *)&nmcv_117,4,(const Char *)&sgcv_117,1,1,0x19,117}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FNEG,(const Char *)&nmcv_118,4,(const Char *)&sgcv_118,1,1,0x19,118}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DNEG,(const Char *)&nmcv_119,4,(const Char *)&sgcv_119,1,1,0x19,119}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISHL,(const Char *)&nmcv_120,4,(const Char *)&sgcv_120,1,1,0x19,120}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSHL,(const Char *)&nmcv_121,4,(const Char *)&sgcv_121,1,1,0x19,121}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISHR,(const Char *)&nmcv_122,4,(const Char *)&sgcv_122,1,1,0x19,122}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSHR,(const Char *)&nmcv_123,4,(const Char *)&sgcv_123,1,1,0x19,123}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IUSHR,(const Char *)&nmcv_124,5,(const Char *)&sgcv_124,1,1,0x19,124}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LUSHR,(const Char *)&nmcv_125,5,(const Char *)&sgcv_125,1,1,0x19,125}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IAND,(const Char *)&nmcv_126,4,(const Char *)&sgcv_126,1,1,0x19,126}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LAND,(const Char *)&nmcv_127,4,(const Char *)&sgcv_127,1,1,0x19,127}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IOR,(const Char *)&nmcv_128,3,(const Char *)&sgcv_128,1,1,0x19,128}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LOR,(const Char *)&nmcv_129,3,(const Char *)&sgcv_129,1,1,0x19,129}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IXOR,(const Char *)&nmcv_130,4,(const Char *)&sgcv_130,1,1,0x19,130}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LXOR,(const Char *)&nmcv_131,4,(const Char *)&sgcv_131,1,1,0x19,131}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IINC,(const Char *)&nmcv_132,4,(const Char *)&sgcv_132,1,1,0x19,132}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.I2L,(const Char *)&nmcv_133,3,(const Char *)&sgcv_133,1,1,0x19,133}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.I2F,(const Char *)&nmcv_134,3,(const Char *)&sgcv_134,1,1,0x19,134}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.I2D,(const Char *)&nmcv_135,3,(const Char *)&sgcv_135,1,1,0x19,135}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.L2I,(const Char *)&nmcv_136,3,(const Char *)&sgcv_136,1,1,0x19,136}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.L2F,(const Char *)&nmcv_137,3,(const Char *)&sgcv_137,1,1,0x19,137}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.L2D,(const Char *)&nmcv_138,3,(const Char *)&sgcv_138,1,1,0x19,138}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.F2I,(const Char *)&nmcv_139,3,(const Char *)&sgcv_139,1,1,0x19,139}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.F2L,(const Char *)&nmcv_140,3,(const Char *)&sgcv_140,1,1,0x19,140}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.F2D,(const Char *)&nmcv_141,3,(const Char *)&sgcv_141,1,1,0x19,141}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.D2I,(const Char *)&nmcv_142,3,(const Char *)&sgcv_142,1,1,0x19,142}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.D2L,(const Char *)&nmcv_143,3,(const Char *)&sgcv_143,1,1,0x19,143}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.D2F,(const Char *)&nmcv_144,3,(const Char *)&sgcv_144,1,1,0x19,144}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INT2BYTE,(const Char *)&nmcv_145,8,(const Char *)&sgcv_145,1,1,0x19,145}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INT2CHAR,(const Char *)&nmcv_146,8,(const Char *)&sgcv_146,1,1,0x19,146}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INT2SHORT,(const Char *)&nmcv_147,9,(const Char *)&sgcv_147,1,1,0x19,147}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LCMP,(const Char *)&nmcv_148,4,(const Char *)&sgcv_148,1,1,0x19,148}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCMPL,(const Char *)&nmcv_149,5,(const Char *)&sgcv_149,1,1,0x19,149}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCMPG,(const Char *)&nmcv_150,5,(const Char *)&sgcv_150,1,1,0x19,150}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCMPL,(const Char *)&nmcv_151,5,(const Char *)&sgcv_151,1,1,0x19,151}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCMPG,(const Char *)&nmcv_152,5,(const Char *)&sgcv_152,1,1,0x19,152}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFEQ,(const Char *)&nmcv_153,4,(const Char *)&sgcv_153,1,1,0x19,153}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFNE,(const Char *)&nmcv_154,4,(const Char *)&sgcv_154,1,1,0x19,154}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFLT,(const Char *)&nmcv_155,4,(const Char *)&sgcv_155,1,1,0x19,155}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFGE,(const Char *)&nmcv_156,4,(const Char *)&sgcv_156,1,1,0x19,156}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFGT,(const Char *)&nmcv_157,4,(const Char *)&sgcv_157,1,1,0x19,157}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFLE,(const Char *)&nmcv_158,4,(const Char *)&sgcv_158,1,1,0x19,158}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPEQ,(const Char *)&nmcv_159,9,(const Char *)&sgcv_159,1,1,0x19,159}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPNE,(const Char *)&nmcv_160,9,(const Char *)&sgcv_160,1,1,0x19,160}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPLT,(const Char *)&nmcv_161,9,(const Char *)&sgcv_161,1,1,0x19,161}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPGE,(const Char *)&nmcv_162,9,(const Char *)&sgcv_162,1,1,0x19,162}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPGT,(const Char *)&nmcv_163,9,(const Char *)&sgcv_163,1,1,0x19,163}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPLE,(const Char *)&nmcv_164,9,(const Char *)&sgcv_164,1,1,0x19,164}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ACMPEQ,(const Char *)&nmcv_165,9,(const Char *)&sgcv_165,1,1,0x19,165}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ACMPNE,(const Char *)&nmcv_166,9,(const Char *)&sgcv_166,1,1,0x19,166}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GOTO_ps6l0,(const Char *)&nmcv_167,4,(const Char *)&sgcv_167,1,1,0x19,167}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.JSR,(const Char *)&nmcv_168,3,(const Char *)&sgcv_168,1,1,0x19,168}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.RET,(const Char *)&nmcv_169,3,(const Char *)&sgcv_169,1,1,0x19,169}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.TABLESWITCH,(const Char *)&nmcv_170,11,(const Char *)&sgcv_170,1,1,0x19,170}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LOOKUPSWITCH,(const Char *)&nmcv_171,12,(const Char *)&sgcv_171,1,1,0x19,171}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IRETURN,(const Char *)&nmcv_172,7,(const Char *)&sgcv_172,1,1,0x19,172}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LRETURN,(const Char *)&nmcv_173,7,(const Char *)&sgcv_173,1,1,0x19,173}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FRETURN,(const Char *)&nmcv_174,7,(const Char *)&sgcv_174,1,1,0x19,174}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DRETURN,(const Char *)&nmcv_175,7,(const Char *)&sgcv_175,1,1,0x19,175}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ARETURN,(const Char *)&nmcv_176,7,(const Char *)&sgcv_176,1,1,0x19,176}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.RETURN,(const Char *)&nmcv_177,6,(const Char *)&sgcv_177,1,1,0x19,177}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GETSTATIC,(const Char *)&nmcv_178,9,(const Char *)&sgcv_178,1,1,0x19,178}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.PUTSTATIC,(const Char *)&nmcv_179,9,(const Char *)&sgcv_179,1,1,0x19,179}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GETFIELD,(const Char *)&nmcv_180,8,(const Char *)&sgcv_180,1,1,0x19,180}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.PUTFIELD,(const Char *)&nmcv_181,8,(const Char *)&sgcv_181,1,1,0x19,181}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKEVIRTUAL,(const Char *)&nmcv_182,13,(const Char *)&sgcv_182,1,1,0x19,182}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKENONVIRTUAL,(const Char *)&nmcv_183,16,(const Char *)&sgcv_183,1,1,0x19,183}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKESTATIC,(const Char *)&nmcv_184,12,(const Char *)&sgcv_184,1,1,0x19,184}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKEINTERFACE,(const Char *)&nmcv_185,15,(const Char *)&sgcv_185,1,1,0x19,185}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.NEW,(const Char *)&nmcv_186,3,(const Char *)&sgcv_186,1,1,0x19,186}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.NEWARRAY,(const Char *)&nmcv_187,8,(const Char *)&sgcv_187,1,1,0x19,187}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ANEWARRAY,(const Char *)&nmcv_188,9,(const Char *)&sgcv_188,1,1,0x19,188}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ARRAYLENGTH,(const Char *)&nmcv_189,11,(const Char *)&sgcv_189,1,1,0x19,189}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ATHROW,(const Char *)&nmcv_190,6,(const Char *)&sgcv_190,1,1,0x19,190}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.CHECKCAST,(const Char *)&nmcv_191,9,(const Char *)&sgcv_191,1,1,0x19,191}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INSTANCEOF,(const Char *)&nmcv_192,10,(const Char *)&sgcv_192,1,1,0x19,192}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.MONITORENTER,(const Char *)&nmcv_193,12,(const Char *)&sgcv_193,1,1,0x19,193}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.MONITOREXIT,(const Char *)&nmcv_194,11,(const Char *)&sgcv_194,1,1,0x19,194}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.WIDE,(const Char *)&nmcv_195,4,(const Char *)&sgcv_195,1,1,0x19,195}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.MULTIANEWARRAY,(const Char *)&nmcv_196,14,(const Char *)&sgcv_196,1,1,0x19,196}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFNULL,(const Char *)&nmcv_197,6,(const Char *)&sgcv_197,1,1,0x19,197}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFNONNULL,(const Char *)&nmcv_198,9,(const Char *)&sgcv_198,1,1,0x19,198}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GOTO_W,(const Char *)&nmcv_199,6,(const Char *)&sgcv_199,1,1,0x19,199}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.JSR_W,(const Char *)&nmcv_200,5,(const Char *)&sgcv_200,1,1,0x19,200}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BREAKPOINT,(const Char *)&nmcv_201,10,(const Char *)&sgcv_201,1,1,0x19,201}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ByteCode.V.RET_W,(const Char *)&nmcv_202,5,(const Char *)&sgcv_202,1,1,0x19,202}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ByteCode, icount), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,1,1,0x2,203}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ByteCode, instructions), 0,(const Char *)&nmiv_1,12,(const Char *)&sgiv_1,41,1,0x2,204}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())showCode_Iac_5QnNU,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,80,
	1,0x9,3,xt_showCode_Iac_5QnNU},
    {TMIT_native_code, (Void(*)())showCode_Iiac_66L0C,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,81,
	1,0x9,4,xt_showCode_Iiac_66L0C},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.NOP = 0;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ACONST_NULL = 1;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_M1 = 2;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_0 = 3;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_1 = 4;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_2 = 5;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_3 = 6;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_4 = 7;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ICONST_5 = 8;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LCONST_0 = 9;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LCONST_1 = 10;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCONST_0 = 11;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCONST_1 = 12;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCONST_2 = 13;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCONST_0 = 14;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCONST_1 = 15;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BIPUSH = 16;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SIPUSH = 17;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDC1 = 18;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDC2 = 19;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDC2W = 20;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD = 21;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD = 22;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD = 23;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD = 24;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD = 25;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_0 = 26;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_1 = 27;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_2 = 28;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ILOAD_3 = 29;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_0 = 30;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_1 = 31;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_2 = 32;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LLOAD_3 = 33;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_0 = 34;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_1 = 35;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_2 = 36;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FLOAD_3 = 37;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_0 = 38;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_1 = 39;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_2 = 40;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DLOAD_3 = 41;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_0 = 42;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_1 = 43;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_2 = 44;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ALOAD_3 = 45;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IALOAD = 46;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LALOAD = 47;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FALOAD = 48;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DALOAD = 49;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.AALOAD = 50;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BALOAD = 51;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.CALOAD = 52;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SALOAD = 53;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE = 54;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE = 55;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE = 56;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE = 57;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE = 58;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_0 = 59;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_1 = 60;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_2 = 61;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISTORE_3 = 62;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_0 = 63;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_1 = 64;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_2 = 65;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSTORE_3 = 66;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_0 = 67;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_1 = 68;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_2 = 69;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSTORE_3 = 70;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_0 = 71;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_1 = 72;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_2 = 73;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSTORE_3 = 74;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_0 = 75;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_1 = 76;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_2 = 77;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ASTORE_3 = 78;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IASTORE = 79;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LASTORE = 80;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FASTORE = 81;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DASTORE = 82;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.AASTORE = 83;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BASTORE = 84;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.CASTORE = 85;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SASTORE = 86;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.POP = 87;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.POP2 = 88;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP = 89;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP_X1 = 90;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP_X2 = 91;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP2 = 92;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP2_X1 = 93;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DUP2_X2 = 94;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.SWAP = 95;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IADD = 96;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LADD = 97;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FADD = 98;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DADD = 99;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISUB = 100;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSUB = 101;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FSUB = 102;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DSUB = 103;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IMUL = 104;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LMUL = 105;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FMUL = 106;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DMUL = 107;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IDIV = 108;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LDIV = 109;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FDIV = 110;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DDIV = 111;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IREM = 112;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LREM = 113;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FREM = 114;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DREM = 115;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INEG = 116;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LNEG = 117;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FNEG = 118;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DNEG = 119;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISHL = 120;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSHL = 121;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ISHR = 122;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LSHR = 123;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IUSHR = 124;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LUSHR = 125;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IAND = 126;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LAND = 127;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IOR = 128;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LOR = 129;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IXOR = 130;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LXOR = 131;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IINC = 132;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.I2L = 133;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.I2F = 134;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.I2D = 135;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.L2I = 136;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.L2F = 137;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.L2D = 138;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.F2I = 139;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.F2L = 140;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.F2D = 141;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.D2I = 142;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.D2L = 143;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.D2F = 144;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INT2BYTE = 145;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INT2CHAR = 146;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INT2SHORT = 147;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LCMP = 148;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCMPL = 149;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FCMPG = 150;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCMPL = 151;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DCMPG = 152;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFEQ = 153;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFNE = 154;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFLT = 155;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFGE = 156;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFGT = 157;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFLE = 158;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPEQ = 159;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPNE = 160;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPLT = 161;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPGE = 162;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPGT = 163;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ICMPLE = 164;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ACMPEQ = 165;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IF_ACMPNE = 166;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GOTO_ps6l0 = 167;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.JSR = 168;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.RET = 169;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.TABLESWITCH = 170;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LOOKUPSWITCH = 171;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IRETURN = 172;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.LRETURN = 173;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.FRETURN = 174;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.DRETURN = 175;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ARETURN = 176;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.RETURN = 177;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GETSTATIC = 178;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.PUTSTATIC = 179;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GETFIELD = 180;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.PUTFIELD = 181;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKEVIRTUAL = 182;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKENONVIRTUAL = 183;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKESTATIC = 184;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INVOKEINTERFACE = 185;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.NEW = 187;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.NEWARRAY = 188;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ANEWARRAY = 189;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ARRAYLENGTH = 190;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.ATHROW = 191;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.CHECKCAST = 192;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.INSTANCEOF = 193;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.MONITORENTER = 194;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.MONITOREXIT = 195;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.WIDE = 196;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.MULTIANEWARRAY = 197;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFNULL = 198;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.IFNONNULL = 199;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.GOTO_W = 200;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.JSR_W = 201;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.BREAKPOINT = 202;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ByteCode.V.RET_W = 209;
   }
}

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_coffi_ByteCode = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_ByteCode.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_ByteCode cl_ca_mcgill_sable_soot_coffi_ByteCode = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_ByteCode),
    16,
    2,
    2,
    203,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    210, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_ByteCode,
    st_ca_mcgill_sable_soot_coffi_ByteCode,
    0,
    init__oFJVb,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_ByteCode,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__oFJVb,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,0,xt_init__oFJVb},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8wJNW,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x8101,6,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, disassemble_bytecode_abi_PT1zT,(const Char *)&nmim_12,20,
	(const Char *)&sgim_12,45,1,0x1,1,xt_disassemble_bytecode_abi_PT1zT},
	{TMIT_native_code, build_I_RPB63,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,43,1,0x1,2,xt_build_I_RPB63},
	{TMIT_native_code, locateInst_i_e7Dnc,(const Char *)&nmim_14,10,
	(const Char *)&sgim_14,43,1,0x1,5,xt_locateInst_i_e7Dnc},
	{TMIT_native_code, locateInstr_iii_6t6A2,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,45,1,0x2,6,xt_locateInstr_iii_6t6A2},
    } /* end of methodsigs */
};


/*M init__oFJVb: ca.mcgill.sable.soot.coffi.ByteCode.<init>()V */

Class xt_init__oFJVb[] = { 0 };

Void init__oFJVb(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M disassemble_bytecode_abi_PT1zT: ca.mcgill.sable.soot.coffi.ByteCode.disassemble_bytecode([BI)Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_disassemble_bytecode_abi_PT1zT[] = { 0 };

Object disassemble_bytecode_abi_PT1zT(Object p0, Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av5;
Int i0, i1, i2, i3, i4, i5;
Int iv2, iv3, iv4, iv6, iv7;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	i1 = iv3;
	i2 = 255;
	i1 = i1 & i2;
	iv6 = i1;
	i1 = iv6;
	switch (i1) {
		case 0: 	GOTO(16,L105);
		case 1: 	GOTO(16,L6);
		case 2: 	GOTO(16,L7);
		case 3: 	GOTO(16,L8);
		case 4: 	GOTO(16,L9);
		case 5: 	GOTO(16,L10);
		case 6: 	GOTO(16,L11);
		case 7: 	GOTO(16,L12);
		case 8: 	GOTO(16,L13);
		case 9: 	GOTO(16,L14);
		case 10: 	GOTO(16,L15);
		case 11: 	GOTO(16,L16);
		case 12: 	GOTO(16,L17);
		case 13: 	GOTO(16,L18);
		case 14: 	GOTO(16,L19);
		case 15: 	GOTO(16,L20);
		case 16: 	GOTO(16,L1);
		case 17: 	GOTO(16,L2);
		case 18: 	GOTO(16,L3);
		case 19: 	GOTO(16,L4);
		case 20: 	GOTO(16,L5);
		case 21: 	GOTO(16,L21);
		case 22: 	GOTO(16,L26);
		case 23: 	GOTO(16,L31);
		case 24: 	GOTO(16,L36);
		case 25: 	GOTO(16,L41);
		case 26: 	GOTO(16,L22);
		case 27: 	GOTO(16,L23);
		case 28: 	GOTO(16,L24);
		case 29: 	GOTO(16,L25);
		case 30: 	GOTO(16,L27);
		case 31: 	GOTO(16,L28);
		case 32: 	GOTO(16,L29);
		case 33: 	GOTO(16,L30);
		case 34: 	GOTO(16,L32);
		case 35: 	GOTO(16,L33);
		case 36: 	GOTO(16,L34);
		case 37: 	GOTO(16,L35);
		case 38: 	GOTO(16,L37);
		case 39: 	GOTO(16,L38);
		case 40: 	GOTO(16,L39);
		case 41: 	GOTO(16,L40);
		case 42: 	GOTO(16,L42);
		case 43: 	GOTO(16,L43);
		case 44: 	GOTO(16,L44);
		case 45: 	GOTO(16,L45);
		case 46: 	GOTO(16,L89);
		case 47: 	GOTO(16,L90);
		case 48: 	GOTO(16,L91);
		case 49: 	GOTO(16,L92);
		case 50: 	GOTO(16,L93);
		case 51: 	GOTO(16,L94);
		case 52: 	GOTO(16,L95);
		case 53: 	GOTO(16,L96);
		case 54: 	GOTO(16,L46);
		case 55: 	GOTO(16,L51);
		case 56: 	GOTO(16,L56);
		case 57: 	GOTO(16,L61);
		case 58: 	GOTO(16,L66);
		case 59: 	GOTO(16,L47);
		case 60: 	GOTO(16,L48);
		case 61: 	GOTO(16,L49);
		case 62: 	GOTO(16,L50);
		case 63: 	GOTO(16,L52);
		case 64: 	GOTO(16,L53);
		case 65: 	GOTO(16,L54);
		case 66: 	GOTO(16,L55);
		case 67: 	GOTO(16,L57);
		case 68: 	GOTO(16,L58);
		case 69: 	GOTO(16,L59);
		case 70: 	GOTO(16,L60);
		case 71: 	GOTO(16,L62);
		case 72: 	GOTO(16,L63);
		case 73: 	GOTO(16,L64);
		case 74: 	GOTO(16,L65);
		case 75: 	GOTO(16,L67);
		case 76: 	GOTO(16,L68);
		case 77: 	GOTO(16,L69);
		case 78: 	GOTO(16,L70);
		case 79: 	GOTO(16,L97);
		case 80: 	GOTO(16,L98);
		case 81: 	GOTO(16,L99);
		case 82: 	GOTO(16,L100);
		case 83: 	GOTO(16,L101);
		case 84: 	GOTO(16,L102);
		case 85: 	GOTO(16,L103);
		case 86: 	GOTO(16,L104);
		case 87: 	GOTO(16,L106);
		case 88: 	GOTO(16,L107);
		case 89: 	GOTO(16,L108);
		case 90: 	GOTO(16,L110);
		case 91: 	GOTO(16,L111);
		case 92: 	GOTO(16,L109);
		case 93: 	GOTO(16,L112);
		case 94: 	GOTO(16,L113);
		case 95: 	GOTO(16,L114);
		case 96: 	GOTO(16,L115);
		case 97: 	GOTO(16,L116);
		case 98: 	GOTO(16,L117);
		case 99: 	GOTO(16,L118);
		case 100: 	GOTO(16,L119);
		case 101: 	GOTO(16,L120);
		case 102: 	GOTO(16,L121);
		case 103: 	GOTO(16,L122);
		case 104: 	GOTO(16,L123);
		case 105: 	GOTO(16,L124);
		case 106: 	GOTO(16,L125);
		case 107: 	GOTO(16,L126);
		case 108: 	GOTO(16,L127);
		case 109: 	GOTO(16,L128);
		case 110: 	GOTO(16,L129);
		case 111: 	GOTO(16,L130);
		case 112: 	GOTO(16,L131);
		case 113: 	GOTO(16,L132);
		case 114: 	GOTO(16,L133);
		case 115: 	GOTO(16,L134);
		case 116: 	GOTO(16,L135);
		case 117: 	GOTO(16,L136);
		case 118: 	GOTO(16,L137);
		case 119: 	GOTO(16,L138);
		case 120: 	GOTO(16,L139);
		case 121: 	GOTO(16,L142);
		case 122: 	GOTO(16,L140);
		case 123: 	GOTO(16,L143);
		case 124: 	GOTO(16,L141);
		case 125: 	GOTO(16,L144);
		case 126: 	GOTO(16,L145);
		case 127: 	GOTO(16,L146);
		case 128: 	GOTO(16,L147);
		case 129: 	GOTO(16,L148);
		case 130: 	GOTO(16,L149);
		case 131: 	GOTO(16,L150);
		case 132: 	GOTO(16,L71);
		case 133: 	GOTO(16,L151);
		case 134: 	GOTO(16,L152);
		case 135: 	GOTO(16,L153);
		case 136: 	GOTO(16,L154);
		case 137: 	GOTO(16,L155);
		case 138: 	GOTO(16,L156);
		case 139: 	GOTO(16,L157);
		case 140: 	GOTO(16,L158);
		case 141: 	GOTO(16,L159);
		case 142: 	GOTO(16,L160);
		case 143: 	GOTO(16,L161);
		case 144: 	GOTO(16,L162);
		case 145: 	GOTO(16,L163);
		case 146: 	GOTO(16,L164);
		case 147: 	GOTO(16,L165);
		case 148: 	GOTO(16,L180);
		case 149: 	GOTO(16,L181);
		case 150: 	GOTO(16,L182);
		case 151: 	GOTO(16,L183);
		case 152: 	GOTO(16,L184);
		case 153: 	GOTO(16,L166);
		case 154: 	GOTO(16,L170);
		case 155: 	GOTO(16,L168);
		case 156: 	GOTO(16,L173);
		case 157: 	GOTO(16,L172);
		case 158: 	GOTO(16,L169);
		case 159: 	GOTO(16,L174);
		case 160: 	GOTO(16,L177);
		case 161: 	GOTO(16,L175);
		case 162: 	GOTO(16,L179);
		case 163: 	GOTO(16,L178);
		case 164: 	GOTO(16,L176);
		case 165: 	GOTO(16,L185);
		case 166: 	GOTO(16,L186);
		case 167: 	GOTO(16,L187);
		case 168: 	GOTO(16,L189);
		case 169: 	GOTO(16,L191);
		case 170: 	GOTO(16,L200);
		case 171: 	GOTO(16,L201);
		case 172: 	GOTO(16,L194);
		case 173: 	GOTO(16,L195);
		case 174: 	GOTO(16,L196);
		case 175: 	GOTO(16,L197);
		case 176: 	GOTO(16,L198);
		case 177: 	GOTO(16,L193);
		case 178: 	GOTO(16,L205);
		case 179: 	GOTO(16,L204);
		case 180: 	GOTO(16,L203);
		case 181: 	GOTO(16,L202);
		case 182: 	GOTO(16,L206);
		case 183: 	GOTO(16,L207);
		case 184: 	GOTO(16,L208);
		case 185: 	GOTO(16,L209);
		case 186: 	GOTO(16,L216);
		case 187: 	GOTO(16,L211);
		case 188: 	GOTO(16,L85);
		case 189: 	GOTO(16,L86);
		case 190: 	GOTO(16,L88);
		case 191: 	GOTO(16,L210);
		case 192: 	GOTO(16,L212);
		case 193: 	GOTO(16,L213);
		case 194: 	GOTO(16,L214);
		case 195: 	GOTO(16,L215);
		case 196: 	GOTO(16,L72);
		case 197: 	GOTO(16,L87);
		case 198: 	GOTO(16,L167);
		case 199: 	GOTO(16,L171);
		case 200: 	GOTO(16,L188);
		case 201: 	GOTO(16,L190);
		case 202: 	GOTO(16,L199);
		case 203: 	GOTO(16,L216);
		case 204: 	GOTO(16,L216);
		case 205: 	GOTO(16,L216);
		case 206: 	GOTO(16,L216);
		case 207: 	GOTO(16,L216);
		case 208: 	GOTO(16,L216);
		case 209: 	GOTO(16,L192);
		default:	GOTO(16,L216);
	}

L1:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Bipush.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__5nlhh(a2);
	av5 = a1;
	GOTO(881,L217);

L2:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Sipush.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__YHVVy(a2);
	av5 = a1;
	GOTO(893,L217);

L3:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__aHcxX(a2);
	av5 = a1;
	GOTO(905,L217);

L4:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nn2lv(a2);
	av5 = a1;
	GOTO(917,L217);

L5:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc2w.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__wqqev(a2);
	av5 = a1;
	GOTO(929,L217);

L6:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aconst_null.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__q3st6(a2);
	av5 = a1;
	GOTO(941,L217);

L7:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_m1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__to5f0(a2);
	av5 = a1;
	GOTO(953,L217);

L8:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fVXC5(a2);
	av5 = a1;
	GOTO(965,L217);

L9:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__sBNqD(a2);
	av5 = a1;
	GOTO(977,L217);

L10:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__FhDeb(a2);
	av5 = a1;
	GOTO(989,L217);

L11:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__W9IHp(a2);
	av5 = a1;
	GOTO(1001,L217);

L12:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_4.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__9QxvX(a2);
	av5 = a1;
	GOTO(1013,L217);

L13:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iconst_5.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mwnjv(a2);
	av5 = a1;
	GOTO(1025,L217);

L14:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lconst_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__U3XUi(a2);
	av5 = a1;
	GOTO(1037,L217);

L15:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lconst_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__bW1ox(a2);
	av5 = a1;
	GOTO(1049,L217);

L16:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fconst_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__wAJFb(a2);
	av5 = a1;
	GOTO(1061,L217);

L17:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fconst_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__NsO8q(a2);
	av5 = a1;
	GOTO(1073,L217);

L18:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fconst_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__09EWX(a2);
	av5 = a1;
	GOTO(1085,L217);

L19:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dconst_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__6ePmW(a2);
	av5 = a1;
	GOTO(1097,L217);

L20:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dconst_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__jUEau(a2);
	av5 = a1;
	GOTO(1109,L217);

L21:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fCI5x(a2);
	av5 = a1;
	GOTO(1121,L217);

L22:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ie5pB(a2);
	av5 = a1;
	GOTO(1133,L217);

L23:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__VUUc9(a2);
	av5 = a1;
	GOTO(1145,L217);

L24:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__cNZFn(a2);
	av5 = a1;
	GOTO(1157,L217);

L25:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iload_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ptPtV(a2);
	av5 = a1;
	GOTO(1169,L217);

L26:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__kjXVQ(a2);
	av5 = a1;
	GOTO(1181,L217);

L27:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__HurqE(a2);
	av5 = a1;
	GOTO(1193,L217);

L28:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Uahec(a2);
	av5 = a1;
	GOTO(1205,L217);

L29:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__b3mHq(a2);
	av5 = a1;
	GOTO(1217,L217);

L30:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lload_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__oJbvY(a2);
	av5 = a1;
	GOTO(1229,L217);

L31:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__aVtfd(a2);
	av5 = a1;
	GOTO(1241,L217);

L32:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__JYIny(a2);
	av5 = a1;
	GOTO(1253,L217);

L33:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__0RNQM(a2);
	av5 = a1;
	GOTO(1265,L217);

L34:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__dxDEk(a2);
	av5 = a1;
	GOTO(1277,L217);

L35:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fload_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__qdtsS(a2);
	av5 = a1;
	GOTO(1289,L217);

L36:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__M7k10(a2);
	av5 = a1;
	GOTO(1301,L217);

L37:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__tFoHx(a2);
	av5 = a1;
	GOTO(1313,L217);

L38:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Glev5(a2);
	av5 = a1;
	GOTO(1325,L217);

L39:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__T14jD(a2);
	av5 = a1;
	GOTO(1337,L217);

L40:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dload_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__6IT6b(a2);
	av5 = a1;
	GOTO(1349,L217);

L41:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Hq5bG(a2);
	av5 = a1;
	GOTO(1361,L217);

L42:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__up2Gu(a2);
	av5 = a1;
	GOTO(1373,L217);

L43:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__H5St2(a2);
	av5 = a1;
	GOTO(1385,L217);

L44:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ULHhA(a2);
	av5 = a1;
	GOTO(1397,L217);

L45:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aload_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__bEMKO(a2);
	av5 = a1;
	GOTO(1409,L217);

L46:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Istore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__GOydb(a2);
	av5 = a1;
	GOTO(1421,L217);

L47:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__3OMwF(a2);
	av5 = a1;
	GOTO(1433,L217);

L48:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__guCkd(a2);
	av5 = a1;
	GOTO(1445,L217);

L49:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__tas8L(a2);
	av5 = a1;
	GOTO(1457,L217);

L50:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Istore_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__GQhWi(a2);
	av5 = a1;
	GOTO(1469,L217);

L51:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__X61sS(a2);
	av5 = a1;
	GOTO(1481,L217);

L52:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__IWLOS(a2);
	av5 = a1;
	GOTO(1493,L217);

L53:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__VCBCq(a2);
	av5 = a1;
	GOTO(1505,L217);

L54:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__cvG5F(a2);
	av5 = a1;
	GOTO(1517,L217);

L55:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__pbwTc(a2);
	av5 = a1;
	GOTO(1529,L217);

L56:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__pw6Zt(a2);
	av5 = a1;
	GOTO(1541,L217);

L57:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ktyzL(a2);
	av5 = a1;
	GOTO(1553,L217);

L58:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__x9onj(a2);
	av5 = a1;
	GOTO(1565,L217);

L59:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__O1tQx(a2);
	av5 = a1;
	GOTO(1577,L217);

L60:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__1IiE5(a2);
	av5 = a1;
	GOTO(1589,L217);

L61:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__TENuG(a2);
	av5 = a1;
	GOTO(1601,L217);

L62:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__U6Egw(a2);
	av5 = a1;
	GOTO(1613,L217);

L63:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__7Nt44(a2);
	av5 = a1;
	GOTO(1625,L217);

L64:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ktjSB(a2);
	av5 = a1;
	GOTO(1637,L217);

L65:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dstore_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__x99G9(a2);
	av5 = a1;
	GOTO(1649,L217);

L66:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Astore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__CmlgZ(a2);
	av5 = a1;
	GOTO(1661,L217);

L67:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_0.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__bMpjC(a2);
	av5 = a1;
	GOTO(1673,L217);

L68:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__osf7a(a2);
	av5 = a1;
	GOTO(1685,L217);

L69:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__FkkAo(a2);
	av5 = a1;
	GOTO(1697,L217);

L70:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Astore_3.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__S0aoW(a2);
	av5 = a1;
	GOTO(1709,L217);

L71:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iinc.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__dFdMc(a2);
	av5 = a1;
	GOTO(1721,L217);

L72:	a1 = av1;
	i2 = iv2;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i2 = 255;
	i1 = i1 & i2;
	iv7 = i1;
	i1 = iv7;
	switch (i1) {
		case 21: 	GOTO(1737,L73);
		case 22: 	GOTO(1737,L76);
		case 23: 	GOTO(1737,L74);
		case 25: 	GOTO(1737,L75);
		case 54: 	GOTO(1737,L77);
		case 55: 	GOTO(1737,L80);
		case 56: 	GOTO(1737,L78);
		case 58: 	GOTO(1737,L79);
		case 132: 	GOTO(1737,L82);
		case 169: 	GOTO(1737,L81);
		default:	GOTO(1737,L83);
	}

L73:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fCI5x(a2);
	av5 = a1;
	GOTO(1837,L84);

L74:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__aVtfd(a2);
	av5 = a1;
	GOTO(1849,L84);

L75:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Hq5bG(a2);
	av5 = a1;
	GOTO(1861,L84);

L76:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__kjXVQ(a2);
	av5 = a1;
	GOTO(1873,L84);

L77:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Istore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__GOydb(a2);
	av5 = a1;
	GOTO(1885,L84);

L78:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fstore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__pw6Zt(a2);
	av5 = a1;
	GOTO(1897,L84);

L79:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Astore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__CmlgZ(a2);
	av5 = a1;
	GOTO(1909,L84);

L80:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lstore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__X61sS(a2);
	av5 = a1;
	GOTO(1921,L84);

L81:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fhwbe(a2);
	av5 = a1;
	GOTO(1933,L84);

L82:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iinc.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__dFdMc(a2);
	av5 = a1;
	GOTO(1945,L84);

L83:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_ByteCode[1];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	i4 = iv7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_i_ZQIqx.f(a3,i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L84:	a1 = av5;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a1)->isWide = i2;
	i1 = 1;
	iv4 = i1;
	GOTO(1985,L217);

L85:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Newarray.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__jwnfD(a2);
	av5 = a1;
	GOTO(1997,L217);

L86:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Anewarray.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ySwD3(a2);
	av5 = a1;
	GOTO(2009,L217);

L87:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__1vDIt(a2);
	av5 = a1;
	GOTO(2021,L217);

L88:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Arraylength.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XufqR(a2);
	av5 = a1;
	GOTO(2033,L217);

L89:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iaload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__GBqcs(a2);
	av5 = a1;
	GOTO(2045,L217);

L90:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Laload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XTSq9(a2);
	av5 = a1;
	GOTO(2057,L217);

L91:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Faload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__pjYXK(a2);
	av5 = a1;
	GOTO(2069,L217);

L92:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Daload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__TrFtX(a2);
	av5 = a1;
	GOTO(2081,L217);

L93:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aaload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__C9dfg(a2);
	av5 = a1;
	GOTO(2093,L217);

L94:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Baload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nAmZ9(a2);
	av5 = a1;
	GOTO(2105,L217);

L95:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Caload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__81wJ3(a2);
	av5 = a1;
	GOTO(2117,L217);

L96:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Saload.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__gVWDr(a2);
	av5 = a1;
	GOTO(2129,L217);

L97:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iastore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fVETo(a2);
	av5 = a1;
	GOTO(2141,L217);

L98:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lastore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__eb1Vr(a2);
	av5 = a1;
	GOTO(2153,L217);

L99:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fastore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__gFiSl(a2);
	av5 = a1;
	GOTO(2165,L217);

L100:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dastore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__0mYbl(a2);
	av5 = a1;
	GOTO(2177,L217);

L101:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Aastore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__16Cai(a2);
	av5 = a1;
	GOTO(2189,L217);

L102:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Bastore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__GQoQD(a2);
	av5 = a1;
	GOTO(2201,L217);

L103:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Castore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__lBbwZ(a2);
	av5 = a1;
	GOTO(2213,L217);

L104:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Sastore.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__NfhYc(a2);
	av5 = a1;
	GOTO(2225,L217);

L105:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Nop.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fcv0z(a2);
	av5 = a1;
	GOTO(2237,L217);

L106:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Pop.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Hbm2N(a2);
	av5 = a1;
	GOTO(2249,L217);

L107:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Pop2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__NVyRr(a2);
	av5 = a1;
	GOTO(2261,L217);

L108:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dup.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__r2Drd(a2);
	av5 = a1;
	GOTO(2273,L217);

L109:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dup2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__rJgJ0(a2);
	av5 = a1;
	GOTO(2285,L217);

L110:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dup_x1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ZxNkg(a2);
	av5 = a1;
	GOTO(2297,L217);

L111:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dup_x2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__gqSNu(a2);
	av5 = a1;
	GOTO(2309,L217);

L112:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dup2_x1.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__HxGJ0(a2);
	av5 = a1;
	GOTO(2321,L217);

L113:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dup2_x2.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Udwxy(a2);
	av5 = a1;
	GOTO(2333,L217);

L114:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Swap.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ftrCv(a2);
	av5 = a1;
	GOTO(2345,L217);

L115:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iadd.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__WWQ1z(a2);
	av5 = a1;
	GOTO(2357,L217);

L116:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ladd.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__D280w(a2);
	av5 = a1;
	GOTO(2369,L217);

L117:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fadd.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__j3PIi(a2);
	av5 = a1;
	GOTO(2381,L217);

L118:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dadd.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__bkYJk(a2);
	av5 = a1;
	GOTO(2393,L217);

L119:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Isub.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__bnCVP(a2);
	av5 = a1;
	GOTO(2405,L217);

L120:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lsub.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__SsTTM(a2);
	av5 = a1;
	GOTO(2417,L217);

L121:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fsub.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ytACz(a2);
	av5 = a1;
	GOTO(2429,L217);

L122:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dsub.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__qKJDB(a2);
	av5 = a1;
	GOTO(2441,L217);

L123:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Imul.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fbCc3(a2);
	av5 = a1;
	GOTO(2453,L217);

L124:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lmul.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__S4Evj(a2);
	av5 = a1;
	GOTO(2465,L217);

L125:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fmul.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__y5le6(a2);
	av5 = a1;
	GOTO(2477,L217);

L126:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dmul.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uyJUO(a2);
	av5 = a1;
	GOTO(2489,L217);

L127:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Idiv.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__C4vfu(a2);
	av5 = a1;
	GOTO(2501,L217);

L128:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ldiv.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fYwyK(a2);
	av5 = a1;
	GOTO(2513,L217);

L129:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fdiv.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ZatWd(a2);
	av5 = a1;
	GOTO(2525,L217);

L130:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ddiv.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__RrCXf(a2);
	av5 = a1;
	GOTO(2537,L217);

L131:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Irem.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__X6U36(a2);
	av5 = a1;
	GOTO(2549,L217);

L132:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lrem.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ecb23(a2);
	av5 = a1;
	GOTO(2561,L217);

L133:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Frem.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__kdSKP(a2);
	av5 = a1;
	GOTO(2573,L217);

L134:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Drem.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__gGgry(a2);
	av5 = a1;
	GOTO(2585,L217);

L135:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ineg.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__N2cbn(a2);
	av5 = a1;
	GOTO(2597,L217);

L136:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lneg.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__qWduD(a2);
	av5 = a1;
	GOTO(2609,L217);

L137:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fneg.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__6XUcq(a2);
	av5 = a1;
	GOTO(2621,L217);

L138:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dneg.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__2qjT8(a2);
	av5 = a1;
	GOTO(2633,L217);

L139:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ishl.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__6xkzw(a2);
	av5 = a1;
	GOTO(2645,L217);

L140:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ishr.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__u0PIa(a2);
	av5 = a1;
	GOTO(2657,L217);

L141:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iushr.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__pO6sX(a2);
	av5 = a1;
	GOTO(2669,L217);

L142:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lshl.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__JqmSM(a2);
	av5 = a1;
	GOTO(2681,L217);

L143:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lshr.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__7UQ1r(a2);
	av5 = a1;
	GOTO(2693,L217);

L144:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lushr.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uvlih(a2);
	av5 = a1;
	GOTO(2705,L217);

L145:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iand.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__KL7Nd(a2);
	av5 = a1;
	GOTO(2717,L217);

L146:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Land.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nF96u(a2);
	av5 = a1;
	GOTO(2729,L217);

L147:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ior.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__at1Ss(a2);
	av5 = a1;
	GOTO(2741,L217);

L148:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lor.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__hLyf7(a2);
	av5 = a1;
	GOTO(2753,L217);

L149:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ixor.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ajUV9(a2);
	av5 = a1;
	GOTO(2765,L217);

L150:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lxor.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__NcWeq(a2);
	av5 = a1;
	GOTO(2777,L217);

L151:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_I2l.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__hRBVx(a2);
	av5 = a1;
	GOTO(2789,L217);

L152:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_I2f.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XzmrA(a2);
	av5 = a1;
	GOTO(2801,L217);

L153:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_I2d.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__t1saO(a2);
	av5 = a1;
	GOTO(2813,L217);

L154:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_L2i.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__L6ETy(a2);
	av5 = a1;
	GOTO(2825,L217);

L155:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_L2f.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4STOe(a2);
	av5 = a1;
	GOTO(2837,L217);

L156:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_L2d.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__AjZxs(a2);
	av5 = a1;
	GOTO(2849,L217);

L157:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_F2i.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__tkktz(a2);
	av5 = a1;
	GOTO(2861,L217);

L158:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_F2l.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__az4yT(a2);
	av5 = a1;
	GOTO(2873,L217);

L159:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_F2d.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mJUM9(a2);
	av5 = a1;
	GOTO(2885,L217);

L160:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_D2i.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__5xI62(a2);
	av5 = a1;
	GOTO(2897,L217);

L161:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_D2l.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__MLsbm(a2);
	av5 = a1;
	GOTO(2909,L217);

L162:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_D2f.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__oiY1I(a2);
	av5 = a1;
	GOTO(2921,L217);

L163:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Int2byte.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xYr7y(a2);
	av5 = a1;
	GOTO(2933,L217);

L164:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Int2char.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__jGDYX(a2);
	av5 = a1;
	GOTO(2945,L217);

L165:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Int2short.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__dkDlD(a2);
	av5 = a1;
	GOTO(2957,L217);

L166:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ifeq.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__pRkqm(a2);
	av5 = a1;
	GOTO(2969,L217);

L167:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ifnull.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__YRcK2(a2);
	av5 = a1;
	GOTO(2981,L217);

L168:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Iflt.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__d7MiN(a2);
	av5 = a1;
	GOTO(2993,L217);

L169:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ifle.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__KV2Va(a2);
	av5 = a1;
	GOTO(3005,L217);

L170:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ifne.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__wJl0E(a2);
	av5 = a1;
	GOTO(3017,L217);

L171:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ifnonnull.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__PII6V(a2);
	av5 = a1;
	GOTO(3029,L217);

L172:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ifgt.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__OH8Vs(a2);
	av5 = a1;
	GOTO(3041,L217);

L173:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ifge.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__pIEcx(a2);
	av5 = a1;
	GOTO(3053,L217);

L174:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpeq.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__F5iVe(a2);
	av5 = a1;
	GOTO(3065,L217);

L175:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmplt.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xxYsm(a2);
	av5 = a1;
	GOTO(3077,L217);

L176:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmple.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4mf5K(a2);
	av5 = a1;
	GOTO(3089,L217);

L177:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpne.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Q9yad(a2);
	av5 = a1;
	GOTO(3101,L217);

L178:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpgt.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__88l52(a2);
	av5 = a1;
	GOTO(3113,L217);

L179:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_icmpge.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__FWBHp(a2);
	av5 = a1;
	GOTO(3125,L217);

L180:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lcmp.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__GBIyV(a2);
	av5 = a1;
	GOTO(3137,L217);

L181:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fcmpl.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__M6mxe(a2);
	av5 = a1;
	GOTO(3149,L217);

L182:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Fcmpg.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__FvWQO(a2);
	av5 = a1;
	GOTO(3161,L217);

L183:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dcmpl.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ojcj1(a2);
	av5 = a1;
	GOTO(3173,L217);

L184:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dcmpg.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__hIMCB(a2);
	av5 = a1;
	GOTO(3185,L217);

L185:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_acmpeq.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__BD4Y2(a2);
	av5 = a1;
	GOTO(3197,L217);

L186:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_If_acmpne.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__MHkd1(a2);
	av5 = a1;
	GOTO(3209,L217);

L187:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__lG5sy(a2);
	av5 = a1;
	GOTO(3221,L217);

L188:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Goto_w.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__R895F(a2);
	av5 = a1;
	GOTO(3233,L217);

L189:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nnjoP(a2);
	av5 = a1;
	GOTO(3245,L217);

L190:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr_w.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xs4xv(a2);
	av5 = a1;
	GOTO(3257,L217);

L191:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fhwbe(a2);
	av5 = a1;
	GOTO(3269,L217);

L192:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ret_w.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__LV5Wb(a2);
	av5 = a1;
	GOTO(3281,L217);

L193:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Return.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__aCnYJ(a2);
	av5 = a1;
	GOTO(3293,L217);

L194:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Ireturn.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__NaHB9(a2);
	av5 = a1;
	GOTO(3305,L217);

L195:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lreturn.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mq3Dc(a2);
	av5 = a1;
	GOTO(3317,L217);

L196:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Freturn.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__OUkA6(a2);
	av5 = a1;
	GOTO(3329,L217);

L197:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Dreturn.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__yB0U5(a2);
	av5 = a1;
	GOTO(3341,L217);

L198:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Areturn.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__zlES2(a2);
	av5 = a1;
	GOTO(3353,L217);

L199:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Breakpoint.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__VnwnL(a2);
	av5 = a1;
	GOTO(3365,L217);

L200:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__QHszp(a2);
	av5 = a1;
	GOTO(3377,L217);

L201:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__0SQTD(a2);
	av5 = a1;
	GOTO(3389,L217);

L202:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Putfield.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__7lePc(a2);
	av5 = a1;
	GOTO(3401,L217);

L203:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Getfield.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ySGaY(a2);
	av5 = a1;
	GOTO(3413,L217);

L204:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Putstatic.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__BqpMT(a2);
	av5 = a1;
	GOTO(3425,L217);

L205:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Getstatic.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__s0HZ6(a2);
	av5 = a1;
	GOTO(3437,L217);

L206:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Invokevirtual.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__97a13(a2);
	av5 = a1;
	GOTO(3449,L217);

L207:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Invokenonvirtual.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__0ynyY(a2);
	av5 = a1;
	GOTO(3461,L217);

L208:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Invokestatic.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__CloWe(a2);
	av5 = a1;
	GOTO(3473,L217);

L209:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Invokeinterface.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__3v1Fs(a2);
	av5 = a1;
	GOTO(3485,L217);

L210:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Athrow.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__jouRo(a2);
	av5 = a1;
	GOTO(3497,L217);

L211:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_New.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__6JNRM(a2);
	av5 = a1;
	GOTO(3509,L217);

L212:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Checkcast.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__TGq1J(a2);
	av5 = a1;
	GOTO(3521,L217);

L213:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Instanceof.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__AJCXu(a2);
	av5 = a1;
	GOTO(3533,L217);

L214:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Monitorenter.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__EaB4F(a2);
	av5 = a1;
	GOTO(3545,L217);

L215:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Monitorexit.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__idU2B(a2);
	av5 = a1;
	GOTO(3557,L217);

L216:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Unknown.C);
	a2 = a1;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_b_azRH3(a2,i3);
	av5 = a1;
L217:	a1 = av5;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label = i2;
	i1 = iv4;
	if (i1 == 0)
		GOTO(3578,L218);
	a1 = av5;
	a2 = av1;
	i3 = iv2;
	i4 = 2;
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		parse_abi_5QrDe.f(a1,a2,i3);
	GOTO(3591,L219);

L218:	a1 = av5;
	a2 = av1;
	i3 = iv2;
	i4 = 1;
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		parse_abi_5QrDe.f(a1,a2,i3);
L219:	a1 = av5;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M build_I_RPB63: ca.mcgill.sable.soot.coffi.ByteCode.build(Lca/mcgill/sable/soot/coffi/Instruction;)V */

Class xt_build_I_RPB63[] = { 0 };

Void build_I_RPB63(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	av2 = a1;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->icount = i2;
	GOTO(7,L2);

L1:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a2)->icount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->icount = i2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av2 = a1;
L2:	a1 = av2;
	if (a1 != 0)
		GOBACK(26,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->icount;
	if (i1 <= 0)
		GOTO(33,L7);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a2)->icount;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_Instruction.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->instructions = a2;
	i1 = 0;
	iv3 = i1;
	a1 = av1;
	av2 = a1;
	GOTO(51,L4);

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->instructions;
	i2 = iv3;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv3 += 1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av2 = a1;
L4:	a1 = av2;
	if (a1 != 0)
		GOBACK(70,L3);
	a1 = av1;
	av2 = a1;
	GOTO(75,L6);

L5:	a1 = av2;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		offsetToPointer_B_Myq1j.f(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av2 = a1;
L6:	a1 = av2;
	if (a1 != 0)
		GOBACK(89,L5);
L7:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M showCode_Iac_5QnNU: ca.mcgill.sable.soot.coffi.ByteCode.showCode(Lca/mcgill/sable/soot/coffi/Instruction;[Lca/mcgill/sable/soot/coffi/cp_info;)V */

Class xt_showCode_Iac_5QnNU[] = { 0 };

Void showCode_Iac_5QnNU(Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p1;
	av1 = p2;

L0:	a1 = av0;
	i2 = 0;
	a3 = av1;
	showCode_Iiac_66L0C(a1,i2,a3);
	return;

	/*NOTREACHED*/
}

/*M showCode_Iiac_66L0C: ca.mcgill.sable.soot.coffi.ByteCode.showCode(Lca/mcgill/sable/soot/coffi/Instruction;I[Lca/mcgill/sable/soot/coffi/cp_info;)V */

Class xt_showCode_Iiac_66L0C[] = { 0 };

Void showCode_Iiac_66L0C(Object p1, Int p2, Object p3)
{
Object a0, a1, a2, a3, a4;
Object av0, av2, av4, av5;
Int i0, i1, i2, i3, i4;
Int iv1, iv3;
PROLOGUE;

	av0 = p1;
	iv1 = p2;
	av2 = p3;

L0:	a1 = av0;
	av4 = a1;
	i1 = iv1;
	iv3 = i1;
	GOTO(5,L6);

L1:	i1 = iv3;
	i2 = 999;
	if (i1 <= i2)
		GOTO(12,L2);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ByteCode[2];
	av5 = a1;
	GOTO(19,L5);

L2:	i1 = iv3;
	i2 = 99;
	if (i1 <= i2)
		GOTO(25,L3);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ByteCode[3];
	av5 = a1;
	GOTO(32,L5);

L3:	i1 = iv3;
	i2 = 9;
	if (i1 <= i2)
		GOTO(38,L4);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ByteCode[4];
	av5 = a1;
	GOTO(45,L5);

L4:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ByteCode[5];
	av5 = a1;
L5:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av5;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ByteCode[6];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = av4;
	a3 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->class->M.
		toString_ac_9JP2g.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = av4;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		nextOffset_i_BhJRD.f(a1,i2);
	iv3 = i1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av4 = a1;
L6:	a1 = av4;
	if (a1 != 0)
		GOBACK(110,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M locateInst_i_e7Dnc: ca.mcgill.sable.soot.coffi.ByteCode.locateInst(I)Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_locateInst_i_e7Dnc[] = { 0 };

Object locateInst_i_e7Dnc(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	i2 = iv1;
	i3 = 0;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a4)->icount;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = locateInstr_iii_6t6A2(a1,i2,i3,i4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M locateInstr_iii_6t6A2: ca.mcgill.sable.soot.coffi.ByteCode.locateInstr(III)Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_locateInstr_iii_6t6A2[] = { 0 };

Object locateInstr_iii_6t6A2(Object p0, Int p1, Int p2, Int p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
Int i0, i1, i2, i3, i4, i5;
Int iv1, iv2, iv3, iv4;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	iv2 = p2;
	iv3 = p3;

L0:	i1 = iv3;
	i2 = iv2;
	i1 = i1 - i2;
	i2 = 2;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 / i2;
	i2 = iv2;
	i1 = i1 + i2;
	iv4 = i1;
	i1 = iv2;
	i2 = iv3;
	if (i1 <= i2)
		GOTO(11,L1);
	a1 = 0;
	return a1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->instructions;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	i2 = iv1;
	if (i1 != i2)
		GOTO(27,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->instructions;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	return a1;

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->instructions;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	i2 = iv1;
	if (i1 <= i2)
		GOTO(49,L3);
	a1 = av0;
	i2 = iv1;
	i3 = iv2;
	i4 = iv4;
	i5 = 1;
	i4 = i4 - i5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = locateInstr_iii_6t6A2(a1,i2,i3,i4);
	return a1;

L3:	a1 = av0;
	i2 = iv1;
	i3 = iv4;
	i4 = 1;
	i3 = i3 + i4;
	i4 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = locateInstr_iii_6t6A2(a1,i2,i3,i4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_ByteCode[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','B','y','t','e','C','o','d','e','i',
'n','v','a','l','i','d',' ','w','i','d','e',' ','i','n','s','t','r','u',
'c','t','i','o','n',':',' ',' ',' ',' ',' ',' ',' ',':',' '};

const void *st_ca_mcgill_sable_soot_coffi_ByteCode[] = {
    ch_ca_mcgill_sable_soot_coffi_ByteCode+35,	/* 0. ca.mcgill.sable.soot.coffi.ByteCode */
    ch_ca_mcgill_sable_soot_coffi_ByteCode+61,	/* 1. invalid wide instruction:  */
    ch_ca_mcgill_sable_soot_coffi_ByteCode+61,	/* 2.  */
    ch_ca_mcgill_sable_soot_coffi_ByteCode+62,	/* 3.   */
    ch_ca_mcgill_sable_soot_coffi_ByteCode+64,	/* 4.    */
    ch_ca_mcgill_sable_soot_coffi_ByteCode+67,	/* 5.     */
    ch_ca_mcgill_sable_soot_coffi_ByteCode+69,	/* 6. :  */
    0};
