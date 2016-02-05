/*  ca_mcgill_sable_soot_coffi_CFG.c -- from Java class ca.mcgill.sable.soot.coffi.CFG  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_CFG.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_BaseType.h"
#include "ca_mcgill_sable_soot_BooleanType.h"
#include "ca_mcgill_sable_soot_ByteType.h"
#include "ca_mcgill_sable_soot_CharType.h"
#include "ca_mcgill_sable_soot_DoubleType.h"
#include "ca_mcgill_sable_soot_FloatType.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_LongType.h"
#include "ca_mcgill_sable_soot_Modifier.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_ShortType.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootClassManager.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_StmtAddressType.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_UnknownType.h"
#include "ca_mcgill_sable_soot_VoidType.h"
#include "ca_mcgill_sable_soot_coffi_BBQ.h"
#include "ca_mcgill_sable_soot_coffi_BasicBlock.h"
#include "ca_mcgill_sable_soot_coffi_ByteCode.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_String_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_Code_attribute.h"
#include "ca_mcgill_sable_soot_coffi_Double2ndHalfType.h"
#include "ca_mcgill_sable_soot_coffi_FutureStmt.h"
#include "ca_mcgill_sable_soot_coffi_Instruction.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Anewarray.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Athrow.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Bipush.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Checkcast.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Getfield.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Getstatic.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Goto.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Iinc.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Instanceof.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokeinterface.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokenonvirtual.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokestatic.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Invokevirtual.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Jsr.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ldc1.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_New.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Newarray.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Putfield.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Putstatic.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ret.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Ret_w.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Sipush.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_byte.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_byteindex.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_bytevar.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_int.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_intbranch.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_intindex.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_intvar.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_longbranch.h"
#include "ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.h"
#include "ca_mcgill_sable_soot_coffi_Long2ndHalfType.h"
#include "ca_mcgill_sable_soot_coffi_OutFlow.h"
#include "ca_mcgill_sable_soot_coffi_TypeArray.h"
#include "ca_mcgill_sable_soot_coffi_TypeStack.h"
#include "ca_mcgill_sable_soot_coffi_Util.h"
#include "ca_mcgill_sable_soot_coffi_cp_info.h"
#include "ca_mcgill_sable_soot_coffi_exception_table_entry.h"
#include "ca_mcgill_sable_soot_coffi_method_info.h"
#include "ca_mcgill_sable_soot_jimple_DoubleConstant.h"
#include "ca_mcgill_sable_soot_jimple_FloatConstant.h"
#include "ca_mcgill_sable_soot_jimple_GotoStmt.h"
#include "ca_mcgill_sable_soot_jimple_IfStmt.h"
#include "ca_mcgill_sable_soot_jimple_IntConstant.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_LongConstant.h"
#include "ca_mcgill_sable_soot_jimple_LookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_NullConstant.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StringConstant.h"
#include "ca_mcgill_sable_soot_jimple_TableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Arrays.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_HashSet.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "ca_mcgill_sable_util_Map.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "ca_mcgill_sable_util_Set.h"
#include "ca_mcgill_sable_util_VectorList.h"
#include "ca_mcgill_sable_util_VectorSet.h"
#include "java_io_PrintStream.h"
#include "java_lang_CloneNotSupportedException.h"
#include "java_lang_Integer.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_util_Enumeration.h"
#include "java_util_Hashtable.h"
#include "java_util_NoSuchElementException.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_CFG.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_BaseType.C,
    &cl_ca_mcgill_sable_soot_BooleanType.C,
    &cl_ca_mcgill_sable_soot_ByteType.C,
    &cl_ca_mcgill_sable_soot_CharType.C,
    &cl_ca_mcgill_sable_soot_DoubleType.C,
    &cl_ca_mcgill_sable_soot_FloatType.C,
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_LongType.C,
    &cl_ca_mcgill_sable_soot_Modifier.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_ShortType.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootClassManager.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_StmtAddressType.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_UnknownType.C,
    &cl_ca_mcgill_sable_soot_VoidType.C,
    &cl_ca_mcgill_sable_soot_coffi_BBQ.C,
    &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
    &cl_ca_mcgill_sable_soot_coffi_ByteCode.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C,
    &cl_ca_mcgill_sable_soot_coffi_FutureStmt.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Anewarray.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Athrow.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Bipush.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Checkcast.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Getfield.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Getstatic.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Iinc.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Instanceof.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokeinterface.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokenonvirtual.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokestatic.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokevirtual.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc1.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_New.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Newarray.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Putfield.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Putstatic.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret_w.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Sipush.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_byte.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_byteindex.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_int.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_intindex.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_intvar.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
    &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_Long2ndHalfType.C,
    &cl_ca_mcgill_sable_soot_coffi_OutFlow.C,
    &cl_ca_mcgill_sable_soot_coffi_TypeArray.C,
    &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
    &cl_ca_mcgill_sable_soot_coffi_Util.C,
    &cl_ca_mcgill_sable_soot_coffi_cp_info.C,
    &cl_ca_mcgill_sable_soot_coffi_exception_table_entry.C,
    &cl_ca_mcgill_sable_soot_coffi_method_info.C,
    &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_ca_mcgill_sable_soot_jimple_LongConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_NullConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StringConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Arrays.C,
    &cl_ca_mcgill_sable_util_Collection.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_HashSet.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_ListIterator.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
    &cl_ca_mcgill_sable_util_Set.C,
    &cl_ca_mcgill_sable_util_VectorList.C,
    &cl_ca_mcgill_sable_util_VectorSet.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_CloneNotSupportedException.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_util_Enumeration.C,
    &cl_java_util_Hashtable.C,
    &cl_java_util_NoSuchElementException.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_CFG[];
extern const void *st_ca_mcgill_sable_soot_coffi_CFG[];
extern Class xt_init_m_MVZMH[];
extern Class xt_prepareForGC__BFsJX[];
extern Class xt_getEndOfBBList__lL32W[];
extern Class xt_adjustExceptionTable__HDUiT[];
extern Class xt_fixupTargets__j1uhZ[];
extern Class xt_buildJsrRetPairs__8IcwU[];
extern Class xt_setHighestBlock_B_qJe4u[];
extern Class xt_cloneJsrTargetBB_BB_6ysqz[];
extern Class xt_arrangeclonedBBinorder__PwVaq[];
extern Class xt_JsrEliminate__gr1LP[];
extern Class xt_fixupJsrRets__mr8Ef[];
extern Class xt_buildCFG__7GQva[];
extern Class xt_buildBasicBlock_I_enO8A[];
extern Class xt_reconstructInstructions__7XqXF[];
extern Class xt_jimplify_aciJ_ihFxE[];
extern Class xt_jimplify_aci_uwz3t[];
extern Class xt_byteCodeTypeOf_T_zDmer[];
extern Class xt_processFlow_ITac_vAhjP[];
extern Class xt_jimpleTypeOfFieldInF_Saci_kvfG3[];
extern Class xt_jimpleReturnTypeOfMe_Saci_SpI2q[];
extern Class xt_jimpleReturnTypeOfIn_Saci_lqfJr[];
extern Class xt_processCPEntry_aciTS_pHN5J[];
extern Class xt_smartPush_TT_lNg1R[];
extern Class xt_popSafeRefType_T_a5bMG[];
extern Class xt_popSafeArrayType_T_kHw6i[];
extern Class xt_popSafe_TT_cbkNO[];
extern Class xt_confirmType_TT_9cgdS[];
extern Class xt_getClassName_aci_3AogT[];
extern Class xt_confirmRefType_T_p6REE[];
extern Class xt_processTargetFixup_B_rOtP0[];
extern Class xt_jimpleTargetFixup__hdQS1[];
extern Class xt_generateJimpleFor_aciTTSL_ZMVwo[];
extern Class xt_generateJimple_ITTacLB_AiQxa[];
extern Class xt_jimpleTypeOfAtype_i_UfOGi[];
extern Class xt_typeSize_T_uXH7G[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_CFG.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_CFG.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_CFG.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_CFG.M.toString__4d9OF, 0, 0,
};

static const CARRAY(30) nmchars = {&acl_char, 0, 30, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','F','G'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 30 };
static const Char nmiv_0[] = {
'm','e','t','h','o','d'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d','_','i',
'n','f','o',';'};
static const Char nmiv_1[] = {
'c','f','g'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l','o',
'c','k',';'};
static const Char nmiv_2[] = {
'h'};
static const Char sgiv_2[] = {
'L','j','a','v','a','/','u','t','i','l','/','H','a','s','h','t','a','b',
'l','e',';'};
static const Char nmiv_3[] = {
'b','b','c','o','u','n','t'};
static const Char sgiv_3[] = {
'I'};
static const Char nmiv_4[] = {
's','t','m','t','L','i','s','t'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L','i','s',
't',';'};
static const Char nmiv_5[] = {
'l','i','s','t','B','o','d','y'};
static const Char sgiv_5[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e','B',
'o','d','y',';'};
static const Char nmiv_6[] = {
'i','n','s','t','r','u','c','t','i','o','n','T','o','F','i','r','s','t',
'S','t','m','t'};
static const Char sgiv_6[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_7[] = {
'i','n','s','t','r','u','c','t','i','o','n','T','o','L','a','s','t','S',
't','m','t'};
static const Char sgiv_7[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_8[] = {
'j','m','e','t','h','o','d'};
static const Char sgiv_8[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmiv_9[] = {
'c','m'};
static const Char sgiv_9[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a','g',
'e','r',';'};
static const Char nmiv_10[] = {
'i','n','s','t','r','u','c','t','i','o','n','T','o','N','e','x','t'};
static const Char sgiv_10[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_11[] = {
'f','i','r','s','t','I','n','s','t','r','u','c','t','i','o','n'};
static const Char sgiv_11[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c','t',
'i','o','n',';'};
static const Char nmiv_12[] = {
'w','i','d','e'};
static const Char sgiv_12[] = {
'S'};
static const Char nmiv_13[] = {
'J','s','r','T','o','N','e','x','t'};
static const Char sgiv_13[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_14[] = {
'R','e','t','T','o','J','s','r'};
static const Char sgiv_14[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_15[] = {
'R','e','t','T','o','J','s','r','B','B'};
static const Char sgiv_15[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_16[] = {
'R','e','t','T','o','O','r','i','g','J','s','r'};
static const Char sgiv_16[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_17[] = {
'R','e','t','T','o','O','r','i','g','J','s','r','B','B'};
static const Char sgiv_17[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_18[] = {
'R','e','t','T','o','O','r','i','g','R','e','t','B','B'};
static const Char sgiv_18[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_19[] = {
'R','e','t','T','o','R','e','t','B','B'};
static const Char sgiv_19[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_20[] = {
'R','e','t','T','o','J','s','r','S','u','c','c'};
static const Char sgiv_20[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_21[] = {
'R','e','t','T','o','O','r','i','g','J','s','r','S','u','c','c'};
static const Char sgiv_21[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_22[] = {
'e','n','d','o','f','B','B','L','i','s','t'};
static const Char sgiv_22[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l','o',
'c','k',';'};
static const Char nmiv_23[] = {
'h','i','g','h','e','s','t','B','l','o','c','k'};
static const Char sgiv_23[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l','o',
'c','k',';'};
static const Char nmiv_24[] = {
'c','l','o','n','e','d','s','t','m','t','s','H','T'};
static const Char sgiv_24[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_25[] = {
'c','l','o','n','e','d','H','T'};
static const Char sgiv_25[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_26[] = {
'o','r','i','g','h','i','g','h','e','s','t','B','l','o','c','k'};
static const Char sgiv_26[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l','o',
'c','k',';'};
static const Char nmiv_27[] = {
'r','e','p','l','a','c','e','d','i','n','s','t','r','u','c','t','i','o',
'n','H','T'};
static const Char sgiv_27[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmsm_0[] = {
'b','u','i','l','d','B','a','s','i','c','B','l','o','c','k'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','I','n',
's','t','r','u','c','t','i','o','n',';'};
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
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d','_',
'i','n','f','o',';',')','V'};
static const Char nmim_13[] = {
'p','r','e','p','a','r','e','F','o','r','G','C'};
static const Char sgim_13[] = {
'(',')','V'};
static const Char nmim_14[] = {
'g','e','t','E','n','d','O','f','B','B','L','i','s','t'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B',
'l','o','c','k',';'};
static const Char nmim_15[] = {
'a','d','j','u','s','t','E','x','c','e','p','t','i','o','n','T','a','b',
'l','e'};
static const Char sgim_15[] = {
'(',')','V'};
static const Char nmim_16[] = {
'f','i','x','u','p','T','a','r','g','e','t','s'};
static const Char sgim_16[] = {
'(',')','V'};
static const Char nmim_17[] = {
'b','u','i','l','d','J','s','r','R','e','t','P','a','i','r','s'};
static const Char sgim_17[] = {
'(',')','V'};
static const Char nmim_18[] = {
's','e','t','H','i','g','h','e','s','t','B','l','o','c','k'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l',
'o','c','k',';',')','V'};
static const Char nmim_19[] = {
'c','l','o','n','e','J','s','r','T','a','r','g','e','t','B','B'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l',
'o','c','k',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','s','o','o','t','/','c','o','f','f','i','/','B','a','s','i',
'c','B','l','o','c','k',';',')','L','c','a','/','m','c','g','i','l','l',
'/','s','a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/',
'B','a','s','i','c','B','l','o','c','k',';'};
static const Char nmim_20[] = {
'a','r','r','a','n','g','e','c','l','o','n','e','d','B','B','i','n','o',
'r','d','e','r'};
static const Char sgim_20[] = {
'(',')','V'};
static const Char nmim_21[] = {
'J','s','r','E','l','i','m','i','n','a','t','e'};
static const Char sgim_21[] = {
'(',')','V'};
static const Char nmim_22[] = {
'f','i','x','u','p','J','s','r','R','e','t','s'};
static const Char sgim_22[] = {
'(',')','V'};
static const Char nmim_23[] = {
'b','u','i','l','d','C','F','G'};
static const Char sgim_23[] = {
'(',')','V'};
static const Char nmim_24[] = {
'r','e','c','o','n','s','t','r','u','c','t','I','n','s','t','r','u','c',
't','i','o','n','s'};
static const Char sgim_24[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u',
'c','t','i','o','n',';'};
static const Char nmim_25[] = {
'j','i','m','p','l','i','f','y'};
static const Char sgim_25[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p',
'l','e','B','o','d','y',';',')','Z'};
static const Char nmim_26[] = {
'j','i','m','p','l','i','f','y'};
static const Char sgim_26[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','V'};
static const Char nmim_27[] = {
'b','y','t','e','C','o','d','e','T','y','p','e','O','f'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p',
'e',';'};
static const Char nmim_28[] = {
'p','r','o','c','e','s','s','F','l','o','w'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p',
'e','S','t','a','c','k',';','[','L','c','a','/','m','c','g','i','l','l',
'/','s','a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/',
'c','p','_','i','n','f','o',';',')','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','c','o','f','f','i',
'/','O','u','t','F','l','o','w',';'};
static const Char nmim_29[] = {
'j','i','m','p','l','e','T','y','p','e','O','f','F','i','e','l','d','I',
'n','F','i','e','l','d','R','e','f'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';','[','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','c','p','_',
'i','n','f','o',';','I',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_30[] = {
'j','i','m','p','l','e','R','e','t','u','r','n','T','y','p','e','O','f',
'M','e','t','h','o','d','R','e','f'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';','[','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','c','p','_',
'i','n','f','o',';','I',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_31[] = {
'j','i','m','p','l','e','R','e','t','u','r','n','T','y','p','e','O','f',
'I','n','t','e','r','f','a','c','e','M','e','t','h','o','d','R','e','f'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';','[','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','c','p','_',
'i','n','f','o',';','I',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_32[] = {
'p','r','o','c','e','s','s','C','P','E','n','t','r','y'};
static const Char sgim_32[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S',
't','a','c','k',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','S','o','o','t','M','e','t','h','o',
'd',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','O','u','t','F','l',
'o','w',';'};
static const Char nmim_33[] = {
's','m','a','r','t','P','u','s','h'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S','t','a',
'c','k',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','c',
'o','f','f','i','/','T','y','p','e','S','t','a','c','k',';'};
static const Char nmim_34[] = {
'p','o','p','S','a','f','e','R','e','f','T','y','p','e'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S','t','a',
'c','k',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e',
'S','t','a','c','k',';'};
static const Char nmim_35[] = {
'p','o','p','S','a','f','e','A','r','r','a','y','T','y','p','e'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S','t','a',
'c','k',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e',
'S','t','a','c','k',';'};
static const Char nmim_36[] = {
'p','o','p','S','a','f','e'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S','t','a',
'c','k',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','c',
'o','f','f','i','/','T','y','p','e','S','t','a','c','k',';'};
static const Char nmim_37[] = {
'c','o','n','f','i','r','m','T','y','p','e'};
static const Char sgim_37[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p','e',
';',')','V'};
static const Char nmim_38[] = {
'g','e','t','C','l','a','s','s','N','a','m','e'};
static const Char sgim_38[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';'};
static const Char nmim_39[] = {
'c','o','n','f','i','r','m','R','e','f','T','y','p','e'};
static const Char sgim_39[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_40[] = {
'p','r','o','c','e','s','s','T','a','r','g','e','t','F','i','x','u','p'};
static const Char sgim_40[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','B','Q',';',')','V'};
static const Char nmim_41[] = {
'j','i','m','p','l','e','T','a','r','g','e','t','F','i','x','u','p'};
static const Char sgim_41[] = {
'(',')','V'};
static const Char nmim_42[] = {
'g','e','n','e','r','a','t','e','J','i','m','p','l','e','F','o','r','C',
'P','E','n','t','r','y'};
static const Char sgim_42[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S',
't','a','c','k',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p',
'e','S','t','a','c','k',';','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','S','o','o','t','M','e','t',
'h','o','d',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','u','t','i','l','/','L','i','s','t',';',')','V'};
static const Char nmim_43[] = {
'g','e','n','e','r','a','t','e','J','i','m','p','l','e'};
static const Char sgim_43[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p',
'e','S','t','a','c','k',';','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','T',
'y','p','e','S','t','a','c','k',';','[','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','c','o','f','f',
'i','/','c','p','_','i','n','f','o',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','u','t','i','l','/','L','i','s','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l',
'o','c','k',';',')','V'};
static const Char nmim_44[] = {
'j','i','m','p','l','e','T','y','p','e','O','f','A','t','y','p','e'};
static const Char sgim_44[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_45[] = {
't','y','p','e','S','i','z','e'};
static const Char sgim_45[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','I'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, method), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,40,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, cfg), 0,(const Char *)&nmiv_1,3,(const Char *)&sgiv_1,39,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, h), 0,(const Char *)&nmiv_2,1,(const Char *)&sgiv_2,21,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, bbcount), 0,(const Char *)&nmiv_3,7,(const Char *)&sgiv_3,1,1,0x2,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, stmtList), 0,(const Char *)&nmiv_4,8,(const Char *)&sgiv_4,38,1,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, listBody), 0,(const Char *)&nmiv_5,8,(const Char *)&sgiv_5,40,1,0x0,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, instructionToFirstStmt), 0,(const Char *)&nmiv_6,22,(const Char *)&sgiv_6,26,1,0x0,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, instructionToLastStmt), 0,(const Char *)&nmiv_7,21,(const Char *)&sgiv_7,26,1,0x0,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, jmethod), 0,(const Char *)&nmiv_8,7,(const Char *)&sgiv_8,33,1,0x0,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, cm), 0,(const Char *)&nmiv_9,2,(const Char *)&sgiv_9,39,1,0x0,9}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, instructionToNext), 0,(const Char *)&nmiv_10,17,(const Char *)&sgiv_10,26,1,0x0,10}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, firstInstruction), 0,(const Char *)&nmiv_11,16,(const Char *)&sgiv_11,40,1,0x0,11}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, wide), 0,(const Char *)&nmiv_12,4,(const Char *)&sgiv_12,1,1,0x2,12}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, JsrToNext), 0,(const Char *)&nmiv_13,9,(const Char *)&sgiv_13,30,1,0x0,13}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToJsr), 0,(const Char *)&nmiv_14,8,(const Char *)&sgiv_14,30,1,0x0,14}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToJsrBB), 0,(const Char *)&nmiv_15,10,(const Char *)&sgiv_15,30,1,0x0,15}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToOrigJsr), 0,(const Char *)&nmiv_16,12,(const Char *)&sgiv_16,30,1,0x0,16}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToOrigJsrBB), 0,(const Char *)&nmiv_17,14,(const Char *)&sgiv_17,30,1,0x0,17}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToOrigRetBB), 0,(const Char *)&nmiv_18,14,(const Char *)&sgiv_18,30,1,0x0,18}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToRetBB), 0,(const Char *)&nmiv_19,10,(const Char *)&sgiv_19,30,1,0x0,19}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToJsrSucc), 0,(const Char *)&nmiv_20,12,(const Char *)&sgiv_20,30,1,0x0,20}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, RetToOrigJsrSucc), 0,(const Char *)&nmiv_21,16,(const Char *)&sgiv_21,30,1,0x0,21}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, endofBBList), 0,(const Char *)&nmiv_22,11,(const Char *)&sgiv_22,39,1,0x0,22}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, highestBlock), 0,(const Char *)&nmiv_23,12,(const Char *)&sgiv_23,39,1,0x0,23}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, clonedstmtsHT), 0,(const Char *)&nmiv_24,13,(const Char *)&sgiv_24,30,1,0x2,24}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, clonedHT), 0,(const Char *)&nmiv_25,8,(const Char *)&sgiv_25,26,1,0x0,25}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, orighighestBlock), 0,(const Char *)&nmiv_26,16,(const Char *)&sgiv_26,39,1,0x0,26}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CFG, replacedinstructionHT), 0,(const Char *)&nmiv_27,21,(const Char *)&sgiv_27,30,1,0x2,27}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())buildBasicBlock_I_enO8A,
	(const Char *)&nmsm_0,15,(const Char *)&sgsm_0,82,
	1,0xa,12,xt_buildBasicBlock_I_enO8A},
};

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_coffi_CFG = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_CFG.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_CFG cl_ca_mcgill_sable_soot_coffi_CFG = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_CFG),
    46,
    1,
    28,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    121, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_CFG,
    st_ca_mcgill_sable_soot_coffi_CFG,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_CFG,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
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
	{TMIT_native_code, init_m_MVZMH,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,43,1,0x1,0,xt_init_m_MVZMH},
	{TMIT_native_code, prepareForGC__BFsJX,(const Char *)&nmim_13,12,
	(const Char *)&sgim_13,3,1,0x2,1,xt_prepareForGC__BFsJX},
	{TMIT_native_code, getEndOfBBList__lL32W,(const Char *)&nmim_14,14,
	(const Char *)&sgim_14,41,1,0x2,2,xt_getEndOfBBList__lL32W},
	{TMIT_native_code, adjustExceptionTable__HDUiT,(const Char *)&nmim_15,20,
	(const Char *)&sgim_15,3,1,0x2,3,xt_adjustExceptionTable__HDUiT},
	{TMIT_native_code, fixupTargets__j1uhZ,(const Char *)&nmim_16,12,
	(const Char *)&sgim_16,3,1,0x2,4,xt_fixupTargets__j1uhZ},
	{TMIT_native_code, buildJsrRetPairs__8IcwU,(const Char *)&nmim_17,16,
	(const Char *)&sgim_17,3,1,0x2,5,xt_buildJsrRetPairs__8IcwU},
	{TMIT_native_code, setHighestBlock_B_qJe4u,(const Char *)&nmim_18,15,
	(const Char *)&sgim_18,42,1,0x2,6,xt_setHighestBlock_B_qJe4u},
	{TMIT_native_code, cloneJsrTargetBB_BB_6ysqz,(const Char *)&nmim_19,16,
	(const Char *)&sgim_19,119,1,0x2,7,xt_cloneJsrTargetBB_BB_6ysqz},
	{TMIT_native_code, arrangeclonedBBinorder__PwVaq,(const Char *)&nmim_20,22,
	(const Char *)&sgim_20,3,1,0x2,8,xt_arrangeclonedBBinorder__PwVaq},
	{TMIT_native_code, JsrEliminate__gr1LP,(const Char *)&nmim_21,12,
	(const Char *)&sgim_21,3,1,0x2,9,xt_JsrEliminate__gr1LP},
	{TMIT_native_code, fixupJsrRets__mr8Ef,(const Char *)&nmim_22,12,
	(const Char *)&sgim_22,3,1,0x2,10,xt_fixupJsrRets__mr8Ef},
	{TMIT_native_code, buildCFG__7GQva,(const Char *)&nmim_23,8,
	(const Char *)&sgim_23,3,1,0x2,11,xt_buildCFG__7GQva},
	{TMIT_native_code, reconstructInstructions__7XqXF,(const Char *)&nmim_24,23,
	(const Char *)&sgim_24,42,1,0x1,13,xt_reconstructInstructions__7XqXF},
	{TMIT_native_code, jimplify_aciJ_ihFxE,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,81,1,0x1,14,xt_jimplify_aciJ_ihFxE},
	{TMIT_native_code, jimplify_aci_uwz3t,(const Char *)&nmim_26,8,
	(const Char *)&sgim_26,41,1,0x0,15,xt_jimplify_aci_uwz3t},
	{TMIT_native_code, byteCodeTypeOf_T_zDmer,(const Char *)&nmim_27,14,
	(const Char *)&sgim_27,56,1,0x2,16,xt_byteCodeTypeOf_T_zDmer},
	{TMIT_native_code, processFlow_ITac_vAhjP,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,153,1,0x0,17,xt_processFlow_ITac_vAhjP},
	{TMIT_native_code, jimpleTypeOfFieldInF_Saci_kvfG3,(const Char *)&nmim_29,27,
	(const Char *)&sgim_29,106,1,0x2,18,xt_jimpleTypeOfFieldInF_Saci_kvfG3},
	{TMIT_native_code, jimpleReturnTypeOfMe_Saci_SpI2q,(const Char *)&nmim_30,27,
	(const Char *)&sgim_30,106,1,0x2,19,xt_jimpleReturnTypeOfMe_Saci_SpI2q},
	{TMIT_native_code, jimpleReturnTypeOfIn_Saci_lqfJr,(const Char *)&nmim_31,36,
	(const Char *)&sgim_31,106,1,0x2,20,xt_jimpleReturnTypeOfIn_Saci_lqfJr},
	{TMIT_native_code, processCPEntry_aciTS_pHN5J,(const Char *)&nmim_32,14,
	(const Char *)&sgim_32,147,1,0x2,21,xt_processCPEntry_aciTS_pHN5J},
	{TMIT_native_code, smartPush_TT_lNg1R,(const Char *)&nmim_33,9,
	(const Char *)&sgim_33,105,1,0x0,22,xt_smartPush_TT_lNg1R},
	{TMIT_native_code, popSafeRefType_T_a5bMG,(const Char *)&nmim_34,14,
	(const Char *)&sgim_34,78,1,0x0,23,xt_popSafeRefType_T_a5bMG},
	{TMIT_native_code, popSafeArrayType_T_kHw6i,(const Char *)&nmim_35,16,
	(const Char *)&sgim_35,78,1,0x0,24,xt_popSafeArrayType_T_kHw6i},
	{TMIT_native_code, popSafe_TT_cbkNO,(const Char *)&nmim_36,7,
	(const Char *)&sgim_36,105,1,0x0,25,xt_popSafe_TT_cbkNO},
	{TMIT_native_code, confirmType_TT_9cgdS,(const Char *)&nmim_37,11,
	(const Char *)&sgim_37,57,1,0x0,26,xt_confirmType_TT_9cgdS},
	{TMIT_native_code, getClassName_aci_3AogT,(const Char *)&nmim_38,12,
	(const Char *)&sgim_38,58,1,0x0,27,xt_getClassName_aci_3AogT},
	{TMIT_native_code, confirmRefType_T_p6REE,(const Char *)&nmim_39,14,
	(const Char *)&sgim_39,30,1,0x0,28,xt_confirmRefType_T_p6REE},
	{TMIT_native_code, processTargetFixup_B_rOtP0,(const Char *)&nmim_40,18,
	(const Char *)&sgim_40,35,1,0x2,29,xt_processTargetFixup_B_rOtP0},
	{TMIT_native_code, jimpleTargetFixup__hdQS1,(const Char *)&nmim_41,17,
	(const Char *)&sgim_41,3,1,0x0,30,xt_jimpleTargetFixup__hdQS1},
	{TMIT_native_code, generateJimpleFor_aciTTSL_ZMVwo,(const Char *)&nmim_42,24,
	(const Char *)&sgim_42,177,1,0x2,31,xt_generateJimpleFor_aciTTSL_ZMVwo},
	{TMIT_native_code, generateJimple_ITTacLB_AiQxa,(const Char *)&nmim_43,14,
	(const Char *)&sgim_43,222,1,0x0,32,xt_generateJimple_ITTacLB_AiQxa},
	{TMIT_native_code, jimpleTypeOfAtype_i_UfOGi,(const Char *)&nmim_44,17,
	(const Char *)&sgim_44,30,1,0x0,33,xt_jimpleTypeOfAtype_i_UfOGi},
	{TMIT_native_code, typeSize_T_uXH7G,(const Char *)&nmim_45,8,
	(const Char *)&sgim_45,30,1,0x0,34,xt_typeSize_T_uXH7G},
    } /* end of methodsigs */
};

static union fconst fc1 = { 0x3f333333 };

/*M init_m_MVZMH: ca.mcgill.sable.soot.coffi.CFG.<init>(Lca/mcgill/sable/soot/coffi/method_info;)V */

Class xt_init_m_MVZMH[] = { 0 };

Void init_m_MVZMH(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8;
Int i0, i1, i2, i3, i4, i5;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsr = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrBB = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsr = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrBB = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigRetBB = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToRetBB = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrSucc = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrSucc = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	i4 = 6;
	f5 = fc1.v;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a3,i4,f5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructions;
	av6 = a1;
	a1 = av1;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList = a2;
	GOTO(162,L3);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av6;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(182,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av6;
	a3 = av6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
L2:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av6 = a1;
L3:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if (a1 != 0)
		GOBACK(212,L1);
	a1 = av0;
	a2 = new(&cl_java_util_Hashtable.C);
	a3 = a2;
	i4 = 100;
	f5 = 25.0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_if_IINeH(a3,i4,f5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructions;
	if (a1 == 0)
		GOTO(234,L6);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructions;
	a1 = buildBasicBlock_I_enO8A(a1);
	av2 = a1;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_BasicBlock.C);
	a3 = a2;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a4)->instructions;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_I_hx5M0(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->instructions;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cfg;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	GOTO(282,L5);

L4:	a1 = av2;
	a1 = buildBasicBlock_I_enO8A(a1);
	av3 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_BasicBlock.C);
	a2 = a1;
	a3 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_I_hx5M0(a2,a3);
	av4 = a1;
	a1 = av5;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next = a2;
	a1 = av4;
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av2;
	a3 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av3;
	av2 = a1;
L5:	a1 = av2;
	if (a1 != 0)
		GOBACK(325,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	buildCFG__7GQva(a1);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = getEndOfBBList__lL32W(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->endofBBList = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	buildJsrRetPairs__8IcwU(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	fixupJsrRets__mr8Ef(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	JsrEliminate__gr1LP(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	fixupTargets__j1uhZ(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	adjustExceptionTable__HDUiT(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	prepareForGC__BFsJX(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->beginCode = i2;
L6:	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->cfg = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	if (a1 == 0)
		GOTO(381,L7);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->cfg;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->firstInstruction = a2;
	GOTO(395,L8);

L7:	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->firstInstruction = a2;
L8:	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToNext = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av7 = a1;
	GOTO(420,L14);

L9:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av8 = a1;
	GOTO(430,L13);

L10:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if (a1 == 0)
		GOTO(438,L11);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToNext;
	a2 = av8;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	GOTO(458,L12);

L11:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	if (a1 == 0)
		GOTO(466,L12);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToNext;
	a2 = av8;
	a3 = av7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->next;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L12:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av8 = a1;
L13:	a1 = av8;
	if (a1 != 0)
		GOBACK(498,L10);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av7 = a1;
L14:	a1 = av7;
	if (a1 != 0)
		GOBACK(510,L9);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M prepareForGC__BFsJX: ca.mcgill.sable.soot.coffi.CFG.prepareForGC()V */

Class xt_prepareForGC__BFsJX[] = { 0 };

Void prepareForGC__BFsJX(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsr = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrBB = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrSucc = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToRetBB = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrSucc = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsr = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrBB = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigRetBB = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->endofBBList = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->highestBlock = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getEndOfBBList__lL32W: ca.mcgill.sable.soot.coffi.CFG.getEndOfBBList()Lca/mcgill/sable/soot/coffi/BasicBlock; */

Class xt_getEndOfBBList__lL32W[] = { 0 };

Object getEndOfBBList__lL32W(Object p0)
{
Object a0, a1;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av2 = a1;
	GOTO(10,L2);

L1:	a1 = av1;
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av1 = a1;
L2:	a1 = av1;
	if (a1 != 0)
		GOBACK(21,L1);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M adjustExceptionTable__HDUiT: ca.mcgill.sable.soot.coffi.CFG.adjustExceptionTable()V */

Class xt_adjustExceptionTable__HDUiT[] = { 0 };

Void adjustExceptionTable__HDUiT(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av3, av4, av5;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
	GOTO(10,L5);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst;
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(34,L2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->replacedinstructionHT;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst = a2;
L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst;
	av4 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(80,L3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->replacedinstructionHT;
	a3 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst = a2;
L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst;
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(127,L4);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->replacedinstructionHT;
	a3 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst = a2;
L4:	iv2 += 1;
L5:	i1 = iv2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(159,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M fixupTargets__j1uhZ: ca.mcgill.sable.soot.coffi.CFG.fixupTargets()V */

Class xt_fixupTargets__j1uhZ[] = { 0 };

Void fixupTargets__j1uhZ(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4, i5;
Int iv5;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av1 = a1;
	a1 = 0;
	av2 = a1;
	GOTO(7,L18);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av2 = a1;
	GOTO(15,L17);

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->branches;
	if (i1 == 0)
		GOTO(22,L16);
	a1 = 0;
	av3 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(31,L3);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target;
	av3 = a1;
	GOTO(42,L4);

L3:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(49,L4);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_longbranch*)a1)->target;
	av3 = a1;
L4:	a1 = av3;
	if (a1 == 0)
		GOTO(61,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(75,L6);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(82,L5);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->replacedinstructionHT;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target = a2;
	GOTO(103,L6);

L5:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(110,L6);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->replacedinstructionHT;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_longbranch*)a1)->target = a2;
L6:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(135,L11);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a2)->default_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(159,L7);
	a1 = av4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->replacedinstructionHT;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a3)->default_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a1)->default_inst = a2;
L7:	i1 = 0;
	iv5 = i1;
	GOTO(185,L10);

L8:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a2)->match_insts;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(206,L9);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a1)->match_insts;
	i2 = iv5;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->replacedinstructionHT;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a4)->match_insts;
	i5 = iv5;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct aarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	a4 = ((struct aarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L9:	iv5 += 1;
L10:	i1 = iv5;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a2)->npairs;
	if (i1 < i2)
		GOBACK(245,L8);
L11:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(252,L16);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->default_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(276,L12);
	a1 = av4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->replacedinstructionHT;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->default_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_inst = a2;
L12:	i1 = 0;
	iv5 = i1;
	GOTO(302,L15);

L13:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->jump_insts;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(323,L14);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts;
	i2 = iv5;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->replacedinstructionHT;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a4)->jump_insts;
	i5 = iv5;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct aarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	a4 = ((struct aarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L14:	iv5 += 1;
L15:	i1 = iv5;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	i3 = 1;
	i2 = i2 + i3;
	if (i1 < i2)
		GOBACK(370,L13);
L16:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av2 = a1;
L17:	a1 = av2;
	if (a1 != 0)
		GOBACK(379,L2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av1 = a1;
L18:	a1 = av1;
	if (a1 != 0)
		GOBACK(388,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M buildJsrRetPairs__8IcwU: ca.mcgill.sable.soot.coffi.CFG.buildJsrRetPairs()V */

Class xt_buildJsrRetPairs__8IcwU[] = { 0 };

Void buildJsrRetPairs__8IcwU(Object p0)
{
static struct handler htable[] = {
    &cl_java_lang_CloneNotSupportedException.C, 239, 1303, 33,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
volatile Object av0, av1, av2, av4, av5, av7, av8, av9, av10, av11, av12, av14, av15, av16, av17,
    av18;
Int i0, i1, i2, i3, i4, i5;
volatile Int iv3, iv6, iv11, iv12, iv13, iv18;
PROLOGUE;

	av0 = p0;

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 1, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av1 = a1;
	a1 = 0;
	av2 = a1;
	GOTO(7,L39);

L1:  case 1:
	pc = 10;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av2 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(19,L38);
	i1 = 1;
	iv3 = i1;
	a1 = new(&cl_ca_mcgill_sable_util_VectorSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__JHCxF(a2);
	av4 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	av5 = a1;
	i1 = 0;
	iv6 = i1;
	GOTO(42,L3);

L2:  case 2:
	a1 = av4;
	a2 = av5;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		elementAt_i_kG7lR.f(a2,i3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv6 += 1;
L3:  case 3:
	i1 = iv6;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_util_Vector*)a2)->class->M.
		size__IEjK1.f(a2);
	if (i1 < i2)
		GOBACK(73,L2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av7 = a1;
	GOTO(85,L37);

L4:  case 4:
	pc = 88;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av9 = a1;
	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(112,L34);
	i1 = 0;
	iv3 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsr;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 != 0)
		GOTO(129,L5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsr;
	a2 = av9;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrBB;
	a2 = av9;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrSucc;
	a2 = av9;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->succ;
	i4 = 0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Vector*)a3)->class->M.
		elementAt_i_kG7lR.f(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToRetBB;
	a2 = av9;
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrSucc;
	a2 = av9;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->succ;
	i4 = 0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Vector*)a3)->class->M.
		elementAt_i_kG7lR.f(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsr;
	a2 = av9;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrBB;
	a2 = av9;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigRetBB;
	a2 = av9;
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	GOTO(236,L37);

L5:  case 5:
	pc = 239;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->succ;
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		elementAt_i_kG7lR.f(a2,i3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	setHighestBlock_B_qJe4u(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = getEndOfBBList__lL32W(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->endofBBList = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->highestBlock;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->endofBBList;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->endofBBList;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->highestBlock;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next = a2;
	a1 = av0;
	a2 = av8;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->succ;
	i4 = 0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Vector*)a3)->class->M.
		elementAt_i_kG7lR.f(a3,i4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = cloneJsrTargetBB_BB_6ysqz(a1,a2,a3);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	arrangeclonedBBinorder__PwVaq(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av11 = a1;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table_length;
	iv12 = i1;
	i1 = 0;
	iv13 = i1;
	GOTO(329,L17);

L6:  case 6:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst;
	av14 = a1;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst;
	av15 = a1;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst;
	av16 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 != 0)
		GOTO(383,L7);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 != 0)
		GOTO(398,L7);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(413,L16);
L7:  case 7:
	i1 = iv12;
	i2 = 1;
	i1 = i1 + i2;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_coffi_exception_table_entry.C,i1);
	av17 = a1;
	i1 = 0;
	iv18 = i1;
	GOTO(428,L9);

L8:  case 8:
	a1 = av17;
	i2 = iv18;
	a3 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->exception_table;
	i4 = iv18;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv18 += 1;
L9:  case 9:
	i1 = iv18;
	i2 = iv12;
	if (i1 < i2)
		GOBACK(451,L8);
	a1 = av17;
	i2 = iv12;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_exception_table_entry.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__gt4uZ(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av11;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table = a2;
	a1 = av11;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table_length = i2;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av11;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table;
	i3 = iv13;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->catch_type;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->catch_type = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(518,L10);
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->clonedstmtsHT;
	a3 = av14;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst = a2;
	GOTO(544,L11);

L10:  case 10:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst = a2;
L11:  case 11:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(572,L12);
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->clonedstmtsHT;
	a3 = av15;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst = a2;
	GOTO(598,L13);

L12:  case 12:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst = a2;
L13:  case 13:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(626,L14);
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->clonedstmtsHT;
	a3 = av16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst = a2;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->h;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->clonedstmtsHT;
	a4 = av16;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Hashtable*)a2)->class->M.
		get_O_doAa7.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->b = a2;
	GOTO(685,L15);

L14:  case 14:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst = a2;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->h;
	a3 = av16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Hashtable*)a2)->class->M.
		get_O_doAa7.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->b = a2;
L15:  case 15:
	iv12 += 1;
L16:  case 16:
	iv13 += 1;
L17:  case 17:
	i1 = iv13;
	a2 = av11;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(737,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		entries__U0AZU.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av14 = a1;
	GOTO(754,L32);

L18:  case 18:
	a1 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av15 = a1;
	a1 = 0;
	av16 = a1;
	a1 = av15;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(785,L19);
	a1 = av15;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target;
	av16 = a1;
	GOTO(798,L20);

L19:  case 19:
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(805,L20);
	a1 = av15;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_longbranch*)a1)->target;
	av16 = a1;
L20:  case 20:
	a1 = av16;
	if (a1 == 0)
		GOTO(820,L22);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av17 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if (a1 == 0)
		GOTO(846,L22);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av18 = a1;
	a1 = av15;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(868,L21);
	a1 = av17;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target = a2;
	GOTO(881,L22);

L21:  case 21:
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(888,L22);
	a1 = av17;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_longbranch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_longbranch*)a1)->target = a2;
L22:  case 22:
	a1 = av15;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(906,L27);
	a1 = av15;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av17 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av17;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a2)->default_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(931,L23);
	a1 = av17;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->clonedstmtsHT;
	a3 = av17;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a3)->default_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a1)->default_inst = a2;
L23:  case 23:
	i1 = 0;
	iv18 = i1;
	GOTO(957,L26);

L24:  case 24:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av17;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a2)->match_insts;
	i3 = iv18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(978,L25);
	a1 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a1)->match_insts;
	i2 = iv18;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->clonedstmtsHT;
	a4 = av17;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a4)->match_insts;
	i5 = iv18;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct aarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	a4 = ((struct aarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L25:  case 25:
	iv18 += 1;
L26:  case 26:
	i1 = iv18;
	a2 = av17;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a2)->npairs;
	if (i1 < i2)
		GOBACK(1017,L24);
L27:  case 27:
	a1 = av15;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1025,L32);
	a1 = av15;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av17 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av17;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->default_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(1050,L28);
	a1 = av17;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->clonedstmtsHT;
	a3 = av17;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->default_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->default_inst = a2;
L28:  case 28:
	i1 = 0;
	iv18 = i1;
	GOTO(1076,L31);

L29:  case 29:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av17;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->jump_insts;
	i3 = iv18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 == 0)
		GOTO(1097,L30);
	a1 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->jump_insts;
	i2 = iv18;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->clonedstmtsHT;
	a4 = av17;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a4)->jump_insts;
	i5 = iv18;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct aarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	a4 = ((struct aarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L30:  case 30:
	iv18 += 1;
L31:  case 31:
	i1 = iv18;
	a2 = av17;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a2)->high;
	a3 = av17;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a3)->low;
	i2 = i2 - i3;
	i3 = 1;
	i2 = i2 + i3;
	if (i1 < i2)
		GOBACK(1144,L29);
L32:  case 32:
	a1 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1154,L18);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsr;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->RetToJsr;
	a4 = av9;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrBB;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->RetToJsrBB;
	a4 = av9;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigRetBB;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsr;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrBB;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToRetBB;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrSucc;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->highestBlock;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrSucc;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->succ;
	i4 = 0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Vector*)a3)->class->M.
		elementAt_i_kG7lR.f(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	pc = 1303;
	GOTO(1303,L37);

L33:  case 33:
	pc = 1306;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	GOTO(1315,L37);

L34:  case 34:
	pc = 1318;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	av10 = a1;
	i1 = 0;
	iv11 = i1;
	GOTO(1328,L36);

L35:  case 35:
	a1 = av10;
	i2 = iv11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av12 = a1;
	a1 = av4;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv11 += 1;
L36:  case 36:
	i1 = iv11;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_util_Vector*)a2)->class->M.
		size__IEjK1.f(a2);
	if (i1 < i2)
		GOBACK(1363,L35);
L37:  case 37:
	pc = 1366;
	i1 = iv3;
	if (i1 == 0)
		GOTO(1367,L38);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1377,L4);
L38:  case 38:
	pc = 1380;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av1 = a1;
L39:  case 39:
	pc = 1385;
	a1 = av1;
	if (a1 != 0)
		GOBACK(1386,L1);
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setHighestBlock_B_qJe4u: ca.mcgill.sable.soot.coffi.CFG.setHighestBlock(Lca/mcgill/sable/soot/coffi/BasicBlock;)V */

Class xt_setHighestBlock_B_qJe4u[] = { &cl_java_lang_CloneNotSupportedException.C, 0 };

Void setHighestBlock_B_qJe4u(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3, av4, av5, av6;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		clone__C5Kdq.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av2;
	a3 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av3;
	av4 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av5 = a1;
	GOTO(66,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		clone__C5Kdq.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av6;
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av3;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av6;
	av2 = a1;
	a1 = av5;
	av3 = a1;
L2:	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	if (a1 != a2)
		GOBACK(129,L1);
	a1 = av4;
	a1 = buildBasicBlock_I_enO8A(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_BasicBlock.C);
	a3 = a2;
	a4 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_I_hx5M0(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->highestBlock = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av4;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->highestBlock;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	a2 = av1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->highestBlock;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->orighighestBlock = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M cloneJsrTargetBB_BB_6ysqz: ca.mcgill.sable.soot.coffi.CFG.cloneJsrTargetBB(Lca/mcgill/sable/soot/coffi/BasicBlock;Lca/mcgill/sable/soot/coffi/BasicBlock;)Lca/mcgill/sable/soot/coffi/BasicBlock; */

Class xt_cloneJsrTargetBB_BB_6ysqz[] = { &cl_java_lang_CloneNotSupportedException.C, 0 };

Object cloneJsrTargetBB_BB_6ysqz(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av10, av11;
Int i0, i1, i2, i3;
Int iv9;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = 0;
	av3 = a1;
	a1 = av1;
	a2 = av2;
	if (a1 != a2)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->highestBlock;
	return a1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (a1 != 0)
		GOTO(25,L7);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		clone__C5Kdq.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av4;
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av5;
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av7 = a1;
	GOTO(78,L3);

L2:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av8 = a1;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		clone__C5Kdq.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedstmtsHT;
	a2 = av8;
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av5;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av8;
	av4 = a1;
	a1 = av7;
	av5 = a1;
L3:	a1 = av4;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	if (a1 != a2)
		GOBACK(146,L2);
	a1 = av6;
	a1 = buildBasicBlock_I_enO8A(a1);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_BasicBlock.C);
	a2 = a1;
	a3 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_I_hx5M0(a2,a3);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av6;
	a3 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	a2 = av1;
	a3 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	av8 = a1;
	i1 = 0;
	iv9 = i1;
	GOTO(197,L6);

L4:	a1 = av8;
	i2 = iv9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av1;
	a2 = av10;
	if (a1 == a2)
		GOTO(215,L5);
	a1 = av0;
	a2 = av10;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = cloneJsrTargetBB_BB_6ysqz(a1,a2,a3);
	av11 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L5:	iv9 += 1;
L6:	i1 = iv9;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_util_Vector*)a2)->class->M.
		size__IEjK1.f(a2);
	if (i1 < i2)
		GOBACK(255,L4);
	GOTO(258,L8);

L7:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
L8:	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M arrangeclonedBBinorder__PwVaq: ca.mcgill.sable.soot.coffi.CFG.arrangeclonedBBinorder()V */

Class xt_arrangeclonedBBinorder__PwVaq[] = { 0 };

Void arrangeclonedBBinorder__PwVaq(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4, av5, av6;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->orighighestBlock;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->highestBlock;
	av4 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->orighighestBlock;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	GOTO(45,L2);

L1:	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	a1 = av4;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next = a2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av4 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
L2:	a1 = av3;
	if (a1 != 0)
		GOBACK(87,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1173667951)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av5 = a1;
	GOTO(106,L4);

L3:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		contains_O_gG3gh.f(a1,a2);
	if (i1 != 0)
		GOTO(135,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->clonedHT;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av4;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next = a2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av4 = a1;
L4:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(173,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M JsrEliminate__gr1LP: ca.mcgill.sable.soot.coffi.CFG.JsrEliminate()V */

Class xt_JsrEliminate__gr1LP[] = { 0 };

Void JsrEliminate__gr1LP(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5, av7, av8, av9, av10;
Int i0, i1, i2, i3;
Int iv6;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av1 = a1;
	a1 = 0;
	av2 = a1;
	GOTO(7,L28);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av2 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(19,L27);
	a1 = 0;
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrBB;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = 0;
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->JsrToNext;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->tail;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		removeAllElements__eQdEb.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	i2 = 1;
	i1 = i1 - i2;
	iv6 = i1;
	GOTO(95,L4);

L2:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(121,L3);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		removeElement_O_KsT2e.f(a1,a2);
L3:	iv6 += -1;
L4:	i1 = iv6;
	i2 = -1;
	if (i1 > i2)
		GOBACK(141,L2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrSucc;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av8 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	if (a1 != a2)
		GOTO(180,L8);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av3 = a1;
	a1 = av1;
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lG5sy(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		branchpoints_I_dvskP.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target = a2;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled;
	if (i1 == 0)
		GOTO(231,L5);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled = i2;
L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		entries__U0AZU.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av9 = a1;
	GOTO(256,L7);

L6:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av3;
	if (a1 != a2)
		GOTO(292,L7);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
L7:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(316,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av3;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av1;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail = a2;
	GOTO(370,L14);

L8:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av3 = a1;
	GOTO(378,L10);

L9:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av8 = a1;
L10:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	if (a1 != a2)
		GOBACK(397,L9);
	a1 = av8;
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lG5sy(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		branchpoints_I_dvskP.f(a1,a2);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target = a2;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled;
	if (i1 == 0)
		GOTO(446,L11);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled = i2;
L11:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		entries__U0AZU.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av9 = a1;
	GOTO(472,L13);

L12:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av3;
	if (a1 != a2)
		GOTO(508,L13);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
L13:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(533,L12);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av3;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail = a2;
L14:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av8 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	if (a1 != a2)
		GOTO(616,L18);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av3 = a1;
	a1 = av4;
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lG5sy(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head = a2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		branchpoints_I_dvskP.f(a1,a2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target = a2;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled;
	if (i1 == 0)
		GOTO(677,L15);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled = i2;
L15:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		entries__U0AZU.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av9 = a1;
	GOTO(703,L17);

L16:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av3;
	if (a1 != a2)
		GOTO(739,L17);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
L17:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(764,L16);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av3;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	a3 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av4;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail = a2;
	GOTO(824,L24);

L18:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av3 = a1;
	GOTO(833,L20);

L19:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av8 = a1;
L20:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->tail;
	if (a1 != a2)
		GOBACK(853,L19);
	a1 = av8;
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lG5sy(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		branchpoints_I_dvskP.f(a1,a2);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Goto.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction_intbranch*)a1)->target = a2;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled;
	if (i1 == 0)
		GOTO(908,L21);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled = i2;
L21:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		entries__U0AZU.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av9 = a1;
	GOTO(934,L23);

L22:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av3;
	if (a1 != a2)
		GOTO(970,L23);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
L23:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(995,L22);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av3;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av4;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail = a2;
L24:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		entries__U0AZU.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av9 = a1;
	GOTO(1084,L26);

L25:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av3;
	if (a1 != a2)
		GOTO(1120,L26);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->JsrToNext;
	a2 = av10;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
L26:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1145,L25);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->replacedinstructionHT;
	a2 = av8;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av7;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
L27:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av1 = a1;
L28:	a1 = av1;
	if (a1 != 0)
		GOBACK(1209,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M fixupJsrRets__mr8Ef: ca.mcgill.sable.soot.coffi.CFG.fixupJsrRets()V */

Class xt_fixupJsrRets__mr8Ef[] = { 0 };

Void fixupJsrRets__mr8Ef(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av11, av13;
Int i0, i1, i2, i3;
Int iv12;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av1 = a1;
	a1 = 0;
	av2 = a1;
	GOTO(7,L7);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av2 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(19,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsr;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrBB;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	av4 = a1;
	a1 = 0;
	av5 = a1;
	a1 = av4;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToJsrSucc;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av6;
	a2 = av7;
	if (a1 == a2)
		GOTO(83,L2);
	a1 = av6;
	av5 = a1;
L2:	a1 = av5;
	if (a1 == 0)
		GOTO(92,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigRetBB;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->RetToOrigJsrBB;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = 0;
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->JsrToNext;
	a3 = av9;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->tail;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = 0;
	av11 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->JsrToNext;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->tail;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		removeElement_O_KsT2e.f(a1,a2);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		removeElement_O_KsT2e.f(a1,a2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		removeElement_O_KsT2e.f(a1,a2);
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		removeElement_O_KsT2e.f(a1,a2);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	i2 = 1;
	i1 = i1 - i2;
	iv12 = i1;
	GOTO(252,L5);

L3:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av13 = a1;
	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(278,L4);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		removeElement_O_KsT2e.f(a1,a2);
L4:	iv12 += -1;
L5:	i1 = iv12;
	i2 = -1;
	if (i1 > i2)
		GOBACK(298,L3);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		removeAllElements__eQdEb.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L6:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av1 = a1;
L7:	a1 = av1;
	if (a1 != 0)
		GOBACK(332,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M buildCFG__7GQva: ca.mcgill.sable.soot.coffi.CFG.buildCFG()V */

Class xt_buildCFG__7GQva[] = { 0 };

Void buildCFG__7GQva(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3, av4, av5, av8, av9, av10, av11, av12;
Int i0, i1, i2, i3, i4;
Int iv6, iv7, iv9;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av1 = a1;
	GOTO(14,L30);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->branches;
	if (i1 == 0)
		GOTO(26,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(33,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1179988603)->f)(a1);
	av9 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av10 = a1;
	GOTO(59,L3);

L2:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	a1 = av11;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Jsr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(79,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructionList;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,859221097)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,426597750)->f)(a1,i2);
	av12 = a1;
	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(110,L3);
	a1 = av10;
	a2 = av12;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L3:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(135,L2);
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	a1 = anewarray(&cl_ca_mcgill_sable_soot_coffi_Instruction.C,i1);
	av4 = a1;
	i1 = 0;
	iv7 = i1;
	GOTO(153,L5);

L4:	a1 = av4;
	i2 = iv7;
	a3 = av10;
	i4 = iv7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1247717038)->f)(a3,i4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv7 += 1;
L5:	i1 = iv7;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(181,L4);
	GOTO(184,L19);

L6:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Athrow.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(191,L15);
	i1 = 1;
	iv9 = i1;
	i1 = 0;
	iv7 = i1;
	GOTO(200,L10);

L7:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table;
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->start_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (i1 < i2)
		GOTO(221,L9);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst;
	if (a1 == 0)
		GOTO(235,L8);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table;
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->end_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (i1 >= i2)
		GOTO(256,L9);
L8:	iv9 += 1;
L9:	iv7 += 1;
L10:	i1 = iv7;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(272,L7);
	i1 = iv9;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_coffi_Instruction.C,i1);
	av4 = a1;
	a1 = av4;
	i2 = 0;
	a3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	i1 = 1;
	iv9 = i1;
	i1 = 0;
	iv7 = i1;
	GOTO(293,L14);

L11:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table;
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->start_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (i1 < i2)
		GOTO(314,L13);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst;
	if (a1 == 0)
		GOTO(328,L12);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table;
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->end_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (i1 >= i2)
		GOTO(349,L13);
L12:	a1 = av4;
	i2 = iv9;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->exception_table;
	i4 = iv7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a3)->handler_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L13:	iv7 += 1;
L14:	i1 = iv7;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(378,L11);
	GOTO(381,L19);

L15:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if (a1 != 0)
		GOTO(388,L17);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	if (a1 != 0)
		GOTO(395,L16);
	a1 = 0;
	GOTO(399,L18);

L16:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	GOTO(409,L18);

L17:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
L18:	av5 = a1;
	a1 = av3;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		branchpoints_I_dvskP.f(a1,a2);
	av4 = a1;
L19:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->calls;
	if (i1 == 0)
		GOTO(430,L20);
	i1 = 1;
	iv6 = i1;
	GOTO(436,L21);

L20:	i1 = 0;
	iv6 = i1;
L21:	a1 = av4;
	if (a1 == 0)
		GOTO(444,L22);
	i1 = iv6;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i1 = i1 + i2;
	iv6 = i1;
L22:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->succ;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_util_Vector*)a2)->class->M.
		size__IEjK1.f(a2);
	i3 = iv6;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		ensureCapacity_i_Jdi61.f(a1,i2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->calls;
	if (i1 == 0)
		GOTO(476,L23);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	if (a1 == 0)
		GOTO(483,L23);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L23:	a1 = av4;
	if (a1 == 0)
		GOTO(510,L29);
	i1 = 0;
	iv9 = i1;
	GOTO(516,L27);

L24:	a1 = av4;
	i2 = iv9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (a1 == 0)
		GOTO(524,L26);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av4;
	i3 = iv9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(544,L25);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_O_n6qWU.f(a1,a2);
	GOTO(562,L26);

L25:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L26:	iv9 += 1;
L27:	i1 = iv9;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(589,L24);
	GOTO(592,L29);

L28:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	if (a1 == 0)
		GOTO(599,L29);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->pred;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L29:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av1 = a1;
L30:	a1 = av1;
	if (a1 != 0)
		GOBACK(630,L1);
	i1 = 0;
	iv7 = i1;
	GOTO(636,L34);

L31:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->h;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table;
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->handler_inst;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(662,L32);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	GOTO(673,L33);

L32:	a1 = av2;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->beginException = i2;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->b = a2;
L33:	iv7 += 1;
L34:	i1 = iv7;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(703,L31);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M buildBasicBlock_I_enO8A: ca.mcgill.sable.soot.coffi.CFG.buildBasicBlock(Lca/mcgill/sable/soot/coffi/Instruction;)Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_buildBasicBlock_I_enO8A[] = { 0 };

Object buildBasicBlock_I_enO8A(Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	av2 = a1;
	GOTO(2,L4);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->branches;
	if (i1 != 0)
		GOTO(9,L2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if (a1 == 0)
		GOTO(16,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled;
	if (i1 == 0)
		GOTO(26,L3);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av1 = a1;
	a1 = av2;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av1;
	return a1;

L3:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av2 = a1;
L4:	a1 = av2;
	if (a1 != 0)
		GOBACK(47,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M reconstructInstructions__7XqXF: ca.mcgill.sable.soot.coffi.CFG.reconstructInstructions()Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_reconstructInstructions__7XqXF[] = { 0 };

Object reconstructInstructions__7XqXF(Object p0)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;

L0:	a1 = 0;
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av1 = a1;
	GOTO(7,L4);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	if (a1 == 0)
		GOTO(14,L3);
	a1 = av2;
	if (a1 == 0)
		GOTO(18,L2);
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->tail;
	av2 = a1;
L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av1 = a1;
L4:	a1 = av1;
	if (a1 != 0)
		GOBACK(40,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimplify_aciJ_ihFxE: ca.mcgill.sable.soot.coffi.CFG.jimplify([Lca/mcgill/sable/soot/coffi/cp_info;ILca/mcgill/sable/soot/jimple/JimpleBody;)Z */

Class xt_jimplify_aciJ_ihFxE[] = { 0 };

Boolean jimplify_aciJ_ihFxE(Object p0, Object p1, Int p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av3, av4, av5, av6, av7, av8, av12, av14, av15, av16;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv2, iv9, iv10, iv11, iv13;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a2);
	setClassNameToAbbreviat_M_X0CH4(a1);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getStmtList__BJdpo.f(a1);
	av4 = a1;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody = a2;
	a1 = av0;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToFirstStmt = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToLastStmt = a2;
	a1 = av0;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->class->M.
		getMethod__6GJJv.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->jmethod = a2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->jmethod;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getDeclaringClass__ywcIy.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getManager__ukjHg.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	setActiveClassManager_S_VrxOE(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	setClassManager_S_Mo5jD(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	setClassManager_S_ZzziC(a1);
	a1 = new(&cl_ca_mcgill_sable_util_VectorSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__JHCxF(a2);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->jmethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getParameterTypes__F9alY.f(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av7 = a1;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->class->M.
		findLocalVariableTable__CQucG.f(a1);
	av8 = a1;
	i1 = 0;
	iv9 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->jmethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getDeclaringClass__ywcIy.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	a1 = v_S_k6iq0(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->jmethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getModifiers__KRAh8.f(a1);
	i1 = isStatic_i_fzZ1T(i1);
	iv10 = i1;
	i1 = 0;
	iv11 = i1;
	i1 = iv10;
	if (i1 != 0)
		GOTO(160,L1);
	a1 = v__WbL8F();
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[4];
	a3 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLocal_ST_UrNI5.f(a1,a2,a3);
	av12 = a1;
	a1 = av3;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		addLocal_L_AwPJJ.f(a1,a2);
	iv11 += 1;
	a1 = av4;
	a2 = v__WbL8F();
	a3 = av12;
	a4 = v__WbL8F();
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a5)->jmethod;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a5)->class->M.
		getDeclaringClass__ywcIy.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a4)->class->M.
		newThisRef_S_7k96k.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a2)->class->M.
		newIdentityStmt_VV_veFeD.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
L1:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av12 = a1;
	i1 = 0;
	iv13 = i1;
	GOTO(224,L9);

L2:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_Type.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av15 = a1;
	i1 = iv9;
	if (i1 != 0)
		GOTO(241,L3);
	a1 = av8;
	if (a1 != 0)
		GOTO(246,L4);
L3:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	i2 = iv13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_i_ZQIqx.f(a1,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av14 = a1;
	GOTO(268,L5);

L4:	a1 = av8;
	a2 = av1;
	i3 = iv11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a1)->class->M.
		getLocalVariableName_aci_Ifqmv.f(a1,a2,i3);
	av14 = a1;
L5:	a1 = v__WbL8F();
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[6];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv11;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	a3 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLocal_ST_UrNI5.f(a1,a2,a3);
	av16 = a1;
	a1 = av5;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av3;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		addLocal_L_AwPJJ.f(a1,a2);
	a1 = av4;
	a2 = v__WbL8F();
	a3 = av16;
	a4 = v__WbL8F();
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a5)->jmethod;
	i6 = iv13;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a4)->class->M.
		newParameterRef_Si_1GJaU.f(a4,a5,i6);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a2)->class->M.
		newIdentityStmt_VV_veFeD.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	a1 = av15;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(359,L6);
	a1 = av15;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(370,L7);
L6:	iv11 += 2;
	GOTO(376,L8);

L7:	iv11 += 1;
L8:	iv13 += 1;
L9:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(392,L2);
	resetEasyNames__Gg79C();
	a1 = av0;
	a2 = av1;
	i3 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		jimplify_aci_uwz3t.f(a1,a2,i3);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimplify_aci_uwz3t: ca.mcgill.sable.soot.coffi.CFG.jimplify([Lca/mcgill/sable/soot/coffi/cp_info;I)V */

Class xt_jimplify_aci_uwz3t[] = { 0 };

Void jimplify_aci_uwz3t(Object p0, Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1, av3, av4, av5, av6, av7, av8, av9, av10, av11, av12, av13, av14, av15,
    av16, av17, av18, av19, av20, av21, av22, av23, av24, av25, av27, av29, av30, av32, av33;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Int iv2, iv10, iv13, iv14, iv20, iv22, iv26, iv28, iv31;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a2);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av4 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_VectorSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__JHCxF(a2);
	av5 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a2);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av9 = a1;
	GOTO(41,L8);

L1:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av10 = a1;
	GOTO(51,L7);

L2:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	if (a1 == 0)
		GOTO(59,L3);
	a1 = new(&cl_ca_mcgill_sable_util_VectorSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__JHCxF(a2);
	av11 = a1;
	a1 = av11;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av3;
	a2 = av10;
	a3 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	GOTO(95,L6);

L3:	a1 = new(&cl_ca_mcgill_sable_util_VectorSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__JHCxF(a2);
	av11 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	av12 = a1;
	i1 = 0;
	iv13 = i1;
	GOTO(117,L5);

L4:	a1 = av11;
	a2 = av12;
	i3 = iv13;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		elementAt_i_kG7lR.f(a2,i3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->head;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv13 += 1;
L5:	i1 = iv13;
	a2 = av12;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_util_Vector*)a2)->class->M.
		size__IEjK1.f(a2);
	if (i1 < i2)
		GOBACK(151,L4);
	a1 = av3;
	a2 = av10;
	a3 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L6:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av10 = a1;
L7:	a1 = av10;
	if (a1 != 0)
		GOBACK(174,L2);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av9 = a1;
L8:	a1 = av9;
	if (a1 != 0)
		GOBACK(186,L1);
	i1 = 0;
	iv10 = i1;
	GOTO(192,L15);

L9:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst;
	av11 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst;
	av12 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst;
	av13 = a1;
	a1 = av5;
	a2 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->catch_type;
	iv14 = i1;
	i1 = iv14;
	if (i1 == 0)
		GOTO(259,L10);
	a1 = av1;
	i2 = iv14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av16 = a1;
	a1 = av1;
	a2 = av16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av17 = a1;
	a1 = av17;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av17 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av15 = a1;
	GOTO(308,L11);

L10:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av15 = a1;
L11:	a1 = av6;
	a2 = av13;
	a3 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av11;
	a2 = av12;
	if (a1 != a2)
		GOTO(338,L12);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[8];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L12:	a1 = av11;
	av16 = a1;
L13:	a1 = av3;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Set.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av17 = a1;
	a1 = av17;
	a2 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToNext;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av16 = a1;
	a1 = av16;
	a2 = av12;
	if (a1 != a2)
		GOBACK(398,L13);
	GOTO(401,L14);

L14:	iv10 += 1;
L15:	i1 = iv10;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(414,L9);
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av11 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av12 = a1;
	a1 = av11;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->firstInstruction;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av12;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->firstInstruction;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addLast_O_IGCXT.f(a1,a2);
	GOTO(456,L19);

L16:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeLast__LabF5.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av13 = a1;
	a1 = av3;
	a2 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Set.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av14 = a1;
	GOTO(487,L18);

L17:	a1 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av15 = a1;
	a1 = av11;
	a2 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 != 0)
		GOTO(511,L18);
	a1 = av11;
	a2 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av12;
	a2 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addLast_O_IGCXT.f(a1,a2);
L18:	a1 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(538,L17);
L19:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		isEmpty__pVAEs.f(a1);
	if (i1 == 0)
		GOBACK(546,L16);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av13 = a1;
	GOTO(555,L24);

L20:	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av14 = a1;
	GOTO(565,L23);

L21:	a1 = av11;
	a2 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 != 0)
		GOTO(577,L22);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[9];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L22:	a1 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av14 = a1;
L23:	a1 = av14;
	if (a1 != 0)
		GOBACK(599,L21);
	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av13 = a1;
L24:	a1 = av13;
	if (a1 != 0)
		GOBACK(611,L20);
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a2);
	av7 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a2);
	av8 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av14 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_VectorList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nuIaa(a2);
	av15 = a1;
	a1 = v__i0xez();
	av16 = a1;
	a1 = av7;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->firstInstruction;
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av14;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->firstInstruction;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av15;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->firstInstruction;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(693,L35);

L25:	a1 = av15;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1247717038)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av17 = a1;
	a1 = av15;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1378307708)->f)(a1,i2);
	a1 = av0;
	a2 = av17;
	a3 = av7;
	a4 = av17;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	a4 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		processFlow_ITac_vAhjP.f(a1,a2,a3,a4);
	av18 = a1;
	a1 = av8;
	a2 = av17;
	a3 = av18;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_OutFlow*)a3)->typeStack;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av3;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Set.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2095947698)->f)(a1);
	av19 = a1;
	i1 = 0;
	iv20 = i1;
	GOTO(775,L34);

L26:	a1 = av19;
	i2 = iv20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av14;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 != 0)
		GOTO(797,L29);
	a1 = av5;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 == 0)
		GOTO(809,L27);
	a1 = v__i0xez();
	a2 = av6;
	a3 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av22 = a1;
	a1 = av7;
	a2 = av21;
	a3 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	GOTO(850,L28);

L27:	a1 = av7;
	a2 = av21;
	a3 = av18;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_OutFlow*)a3)->typeStack;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L28:	a1 = av14;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av15;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(888,L33);

L29:	a1 = av7;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av23 = a1;
	a1 = av5;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 == 0)
		GOTO(914,L30);
	a1 = v__i0xez();
	a2 = av6;
	a3 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av24 = a1;
	a1 = av24;
	av22 = a1;
	GOTO(947,L31);

L30:	a1 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_OutFlow*)a1)->typeStack;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		merge_T_jdprn.f(a1,a2);
	av22 = a1;
L31:	a1 = av22;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		equals_O_mlSGv.f(a1,a2);
	if (i1 != 0)
		GOTO(969,L32);
	a1 = av15;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L32:	a1 = av7;
	a2 = av21;
	a3 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L33:	iv20 += 1;
L34:	i1 = iv20;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(1002,L26);
L35:	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-98305106)->f)(a1);
	if (i1 == 0)
		GOBACK(1012,L25);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->firstInstruction;
	av17 = a1;
	GOTO(1021,L37);

L36:	a1 = av7;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToNext;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av17 = a1;
L37:	a1 = av17;
	if (a1 != 0)
		GOBACK(1055,L36);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av18 = a1;
	GOTO(1064,L44);

L38:	a1 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->head;
	av19 = a1;
	a1 = av18;
	a2 = new(&cl_ca_mcgill_sable_util_VectorList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__nuIaa(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->statements = a2;
	a1 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->statements;
	av20 = a1;
	GOTO(1093,L43);

L39:	a1 = new(&cl_ca_mcgill_sable_util_VectorList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nuIaa(a2);
	av21 = a1;
	a1 = av0;
	a2 = av19;
	a3 = av7;
	a4 = av19;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	a4 = av8;
	a5 = av19;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1515828273)->f)(a4,a5);
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	a5 = av1;
	a6 = av21;
	a7 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		generateJimple_ITTacLB_AiQxa.f(a1,a2,a3,a4,a5,a6,a7);
	a1 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-98305106)->f)(a1);
	if (i1 != 0)
		GOTO(1147,L42);
	i1 = 0;
	iv22 = i1;
	GOTO(1153,L41);

L40:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList;
	a2 = av21;
	i3 = iv22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1247717038)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	a1 = av20;
	a2 = av21;
	i3 = iv22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1247717038)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv22 += 1;
L41:	i1 = iv22;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	if (i1 < i2)
		GOBACK(1202,L40);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToFirstStmt;
	a2 = av19;
	a3 = av21;
	i4 = 0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1247717038)->f)(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToLastStmt;
	a2 = av19;
	a3 = av21;
	a4 = av21;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = (*(Int(*)())findinterface(a4,-1646441547)->f)(a4);
	i5 = 1;
	i4 = i4 - i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1247717038)->f)(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L42:	a1 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av19 = a1;
L43:	a1 = av19;
	if (a1 != 0)
		GOBACK(1262,L39);
	a1 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av18 = a1;
L44:	a1 = av18;
	if (a1 != 0)
		GOBACK(1274,L38);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		jimpleTargetFixup__hdQS1.f(a1);
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a2);
	av19 = a1;
	i1 = 0;
	iv20 = i1;
	GOTO(1293,L53);

L45:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst;
	av21 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst;
	av22 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst;
	av23 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToFirstStmt;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(1346,L46);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToLastStmt;
	a2 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 != 0)
		GOTO(1360,L47);
L46:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[10];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L47:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToFirstStmt;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av24 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->instructionToLastStmt;
	a3 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		indexOf_O_eZvQQ.f(a1,a2);
	iv26 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList;
	i2 = iv26;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		get_i_qTcJE.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av25 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToFirstStmt;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 != 0)
		GOTO(1436,L48);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[11];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L48:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->catch_type;
	iv28 = i1;
	i1 = iv28;
	if (i1 == 0)
		GOTO(1464,L49);
	a1 = av1;
	i2 = iv28;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av29 = a1;
	a1 = av1;
	a2 = av29;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av30 = a1;
	a1 = av30;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av30 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av30;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
	GOTO(1513,L50);

L49:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
L50:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->instructionToFirstStmt;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av30 = a1;
	a1 = av19;
	a2 = av30;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(1552,L51);
	a1 = av19;
	a2 = av30;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av29 = a1;
	GOTO(1569,L52);

L51:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList;
	a2 = av30;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		indexOf_O_eZvQQ.f(a1,a2);
	iv31 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[12];
	a3 = v__SUHmS();
	a1 = getLocalCreatingIfNec_JST_eJj43(a1,a2,a3);
	av32 = a1;
	a1 = v__WbL8F();
	a2 = av32;
	a3 = v__WbL8F();
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a4)->listBody;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a3)->class->M.
		newCaughtExceptionRef_J_NQePj.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIdentityStmt_VV_veFeD.f(a1,a2,a3);
	av29 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList;
	i2 = iv31;
	a3 = av29;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_iO_Tst7p.f(a1,i2,a3);
	a1 = av19;
	a2 = av30;
	a3 = av29;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L52:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList;
	a2 = av25;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		indexOf_O_eZvQQ.f(a1,a2);
	iv31 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->stmtList;
	i2 = iv31;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		get_i_qTcJE.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av32 = a1;
	a1 = v__WbL8F();
	a2 = av27;
	a3 = av24;
	a4 = av32;
	a5 = av29;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newTrap_SUUU_iT5VH.f(a1,a2,a3,a4,a5);
	av33 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av33;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		addTrap_T_eHc7x.f(a1,a2);
	iv20 += 1;
L53:	i1 = iv20;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(1702,L45);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M byteCodeTypeOf_T_zDmer: ca.mcgill.sable.soot.coffi.CFG.byteCodeTypeOf(Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/Type; */

Class xt_byteCodeTypeOf_T_zDmer[] = { 0 };

Object byteCodeTypeOf_T_zDmer(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = v__QUgPF();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(7,L1);
	a1 = av1;
	a2 = v__eNy0s();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(17,L1);
	a1 = av1;
	a2 = v__AsEYN();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(27,L1);
	a1 = av1;
	a2 = v__AA1Up();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(37,L2);
L1:	a1 = v__GKSua();
	return a1;

L2:	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M processFlow_ITac_vAhjP: ca.mcgill.sable.soot.coffi.CFG.processFlow(Lca/mcgill/sable/soot/coffi/Instruction;Lca/mcgill/sable/soot/coffi/TypeStack;[Lca/mcgill/sable/soot/coffi/cp_info;)Lca/mcgill/sable/soot/coffi/OutFlow; */

Class xt_processFlow_ITac_vAhjP[] = { 0 };

Object processFlow_ITac_vAhjP(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av5, av6, av7, av8;
Int i0, i1, i2, i3, i4, i5;
Int iv4, iv5, iv6, iv8, iv9;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->code;
	i2 = 255;
	i1 = i1 & i2;
	iv4 = i1;
	i1 = iv4;
	switch (i1) {
		case 0: 	GOTO(12,L138);
		case 1: 	GOTO(12,L5);
		case 2: 	GOTO(12,L6);
		case 3: 	GOTO(12,L6);
		case 4: 	GOTO(12,L6);
		case 5: 	GOTO(12,L6);
		case 6: 	GOTO(12,L6);
		case 7: 	GOTO(12,L6);
		case 8: 	GOTO(12,L6);
		case 9: 	GOTO(12,L7);
		case 10: 	GOTO(12,L7);
		case 11: 	GOTO(12,L8);
		case 12: 	GOTO(12,L8);
		case 13: 	GOTO(12,L8);
		case 14: 	GOTO(12,L9);
		case 15: 	GOTO(12,L9);
		case 16: 	GOTO(12,L1);
		case 17: 	GOTO(12,L2);
		case 18: 	GOTO(12,L3);
		case 19: 	GOTO(12,L4);
		case 20: 	GOTO(12,L4);
		case 21: 	GOTO(12,L10);
		case 22: 	GOTO(12,L14);
		case 23: 	GOTO(12,L11);
		case 24: 	GOTO(12,L13);
		case 25: 	GOTO(12,L12);
		case 26: 	GOTO(12,L15);
		case 27: 	GOTO(12,L15);
		case 28: 	GOTO(12,L15);
		case 29: 	GOTO(12,L15);
		case 30: 	GOTO(12,L18);
		case 31: 	GOTO(12,L18);
		case 32: 	GOTO(12,L18);
		case 33: 	GOTO(12,L18);
		case 34: 	GOTO(12,L16);
		case 35: 	GOTO(12,L16);
		case 36: 	GOTO(12,L16);
		case 37: 	GOTO(12,L16);
		case 38: 	GOTO(12,L19);
		case 39: 	GOTO(12,L19);
		case 40: 	GOTO(12,L19);
		case 41: 	GOTO(12,L19);
		case 42: 	GOTO(12,L17);
		case 43: 	GOTO(12,L17);
		case 44: 	GOTO(12,L17);
		case 45: 	GOTO(12,L17);
		case 46: 	GOTO(12,L38);
		case 47: 	GOTO(12,L43);
		case 48: 	GOTO(12,L39);
		case 49: 	GOTO(12,L44);
		case 50: 	GOTO(12,L40);
		case 51: 	GOTO(12,L38);
		case 52: 	GOTO(12,L38);
		case 53: 	GOTO(12,L38);
		case 54: 	GOTO(12,L20);
		case 55: 	GOTO(12,L23);
		case 56: 	GOTO(12,L21);
		case 57: 	GOTO(12,L24);
		case 58: 	GOTO(12,L22);
		case 59: 	GOTO(12,L25);
		case 60: 	GOTO(12,L25);
		case 61: 	GOTO(12,L25);
		case 62: 	GOTO(12,L25);
		case 63: 	GOTO(12,L29);
		case 64: 	GOTO(12,L29);
		case 65: 	GOTO(12,L29);
		case 66: 	GOTO(12,L29);
		case 67: 	GOTO(12,L26);
		case 68: 	GOTO(12,L26);
		case 69: 	GOTO(12,L26);
		case 70: 	GOTO(12,L26);
		case 71: 	GOTO(12,L30);
		case 72: 	GOTO(12,L30);
		case 73: 	GOTO(12,L30);
		case 74: 	GOTO(12,L30);
		case 75: 	GOTO(12,L27);
		case 76: 	GOTO(12,L27);
		case 77: 	GOTO(12,L27);
		case 78: 	GOTO(12,L27);
		case 79: 	GOTO(12,L45);
		case 80: 	GOTO(12,L48);
		case 81: 	GOTO(12,L47);
		case 82: 	GOTO(12,L49);
		case 83: 	GOTO(12,L46);
		case 84: 	GOTO(12,L45);
		case 85: 	GOTO(12,L45);
		case 86: 	GOTO(12,L45);
		case 87: 	GOTO(12,L50);
		case 88: 	GOTO(12,L51);
		case 89: 	GOTO(12,L52);
		case 90: 	GOTO(12,L54);
		case 91: 	GOTO(12,L55);
		case 92: 	GOTO(12,L53);
		case 93: 	GOTO(12,L56);
		case 94: 	GOTO(12,L57);
		case 95: 	GOTO(12,L58);
		case 96: 	GOTO(12,L59);
		case 97: 	GOTO(12,L61);
		case 98: 	GOTO(12,L62);
		case 99: 	GOTO(12,L63);
		case 100: 	GOTO(12,L59);
		case 101: 	GOTO(12,L61);
		case 102: 	GOTO(12,L62);
		case 103: 	GOTO(12,L63);
		case 104: 	GOTO(12,L59);
		case 105: 	GOTO(12,L61);
		case 106: 	GOTO(12,L62);
		case 107: 	GOTO(12,L63);
		case 108: 	GOTO(12,L59);
		case 109: 	GOTO(12,L61);
		case 110: 	GOTO(12,L62);
		case 111: 	GOTO(12,L63);
		case 112: 	GOTO(12,L59);
		case 113: 	GOTO(12,L61);
		case 114: 	GOTO(12,L62);
		case 115: 	GOTO(12,L63);
		case 116: 	GOTO(12,L138);
		case 117: 	GOTO(12,L138);
		case 118: 	GOTO(12,L138);
		case 119: 	GOTO(12,L138);
		case 120: 	GOTO(12,L59);
		case 121: 	GOTO(12,L60);
		case 122: 	GOTO(12,L59);
		case 123: 	GOTO(12,L60);
		case 124: 	GOTO(12,L59);
		case 125: 	GOTO(12,L60);
		case 126: 	GOTO(12,L59);
		case 127: 	GOTO(12,L61);
		case 128: 	GOTO(12,L59);
		case 129: 	GOTO(12,L61);
		case 130: 	GOTO(12,L59);
		case 131: 	GOTO(12,L61);
		case 132: 	GOTO(12,L138);
		case 133: 	GOTO(12,L64);
		case 134: 	GOTO(12,L65);
		case 135: 	GOTO(12,L66);
		case 136: 	GOTO(12,L67);
		case 137: 	GOTO(12,L68);
		case 138: 	GOTO(12,L69);
		case 139: 	GOTO(12,L70);
		case 140: 	GOTO(12,L71);
		case 141: 	GOTO(12,L72);
		case 142: 	GOTO(12,L73);
		case 143: 	GOTO(12,L74);
		case 144: 	GOTO(12,L75);
		case 145: 	GOTO(12,L138);
		case 146: 	GOTO(12,L138);
		case 147: 	GOTO(12,L138);
		case 148: 	GOTO(12,L79);
		case 149: 	GOTO(12,L80);
		case 150: 	GOTO(12,L80);
		case 151: 	GOTO(12,L81);
		case 152: 	GOTO(12,L81);
		case 153: 	GOTO(12,L76);
		case 154: 	GOTO(12,L76);
		case 155: 	GOTO(12,L76);
		case 156: 	GOTO(12,L76);
		case 157: 	GOTO(12,L76);
		case 158: 	GOTO(12,L76);
		case 159: 	GOTO(12,L78);
		case 160: 	GOTO(12,L78);
		case 161: 	GOTO(12,L78);
		case 162: 	GOTO(12,L78);
		case 163: 	GOTO(12,L78);
		case 164: 	GOTO(12,L78);
		case 165: 	GOTO(12,L82);
		case 166: 	GOTO(12,L82);
		case 167: 	GOTO(12,L138);
		case 168: 	GOTO(12,L83);
		case 169: 	GOTO(12,L138);
		case 170: 	GOTO(12,L89);
		case 171: 	GOTO(12,L90);
		case 172: 	GOTO(12,L84);
		case 173: 	GOTO(12,L88);
		case 174: 	GOTO(12,L85);
		case 175: 	GOTO(12,L87);
		case 176: 	GOTO(12,L86);
		case 177: 	GOTO(12,L138);
		case 178: 	GOTO(12,L103);
		case 179: 	GOTO(12,L99);
		case 180: 	GOTO(12,L96);
		case 181: 	GOTO(12,L91);
		case 182: 	GOTO(12,L106);
		case 183: 	GOTO(12,L112);
		case 184: 	GOTO(12,L118);
		case 185: 	GOTO(12,L124);
		case 186: 	GOTO(12,L137);
		case 187: 	GOTO(12,L130);
		case 188: 	GOTO(12,L32);
		case 189: 	GOTO(12,L33);
		case 190: 	GOTO(12,L37);
		case 191: 	GOTO(12,L138);
		case 192: 	GOTO(12,L131);
		case 193: 	GOTO(12,L134);
		case 194: 	GOTO(12,L135);
		case 195: 	GOTO(12,L136);
		case 196: 	GOTO(12,L31);
		case 197: 	GOTO(12,L34);
		case 198: 	GOTO(12,L77);
		case 199: 	GOTO(12,L77);
		case 200: 	GOTO(12,L138);
		case 201: 	GOTO(12,L83);
		case 202: 	GOTO(12,L138);
		case 203: 	GOTO(12,L137);
		case 204: 	GOTO(12,L137);
		case 205: 	GOTO(12,L137);
		case 206: 	GOTO(12,L137);
		case 207: 	GOTO(12,L137);
		case 208: 	GOTO(12,L137);
		case 209: 	GOTO(12,L138);
		default:	GOTO(12,L137);
	}

L1:	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(876,L138);

L2:	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(887,L138);

L3:	a1 = av0;
	a2 = av3;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc1.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_byteindex*)a3)->arg_b;
	a4 = av2;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a5)->jmethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = processCPEntry_aciTS_pHN5J(a1,a2,i3,a4,a5);
	return a1;

L4:	a1 = av0;
	a2 = av3;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intindex.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a3)->arg_i;
	a4 = av2;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a5)->jmethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = processCPEntry_aciTS_pHN5J(a1,a2,i3,a4,a5);
	return a1;

L5:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[13];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(936,L138);

L6:	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(947,L138);

L7:	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(966,L138);

L8:	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(977,L138);

L9:	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(996,L138);

L10:	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1007,L138);

L11:	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1018,L138);

L12:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[13];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1031,L138);

L13:	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1050,L138);

L14:	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1069,L138);

L15:	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1080,L138);

L16:	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1091,L138);

L17:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[13];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1104,L138);

L18:	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1123,L138);

L19:	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1142,L138);

L20:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1154,L138);

L21:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1166,L138);

L22:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(1174,L138);

L23:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1195,L138);

L24:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1216,L138);

L25:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1228,L138);

L26:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1240,L138);

L27:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_StmtAddressType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1250,L28);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1260,L28);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1270,L28);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[14];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		top__nW0zk.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_O_wO0jp.f(a3,a4);
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

L28:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(1305,L138);

L29:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1326,L138);

L30:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(1347,L138);

L31:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[15];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L32:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Newarray.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Newarray*)a2)->atype;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		jimpleTypeOfAtype_i_UfOGi.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_BaseType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av2;
	a2 = av5;
	i3 = 1;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1396,L138);

L33:	a1 = av3;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Anewarray.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av3;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av6 = a1;
	a1 = av6;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av6 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = av6;
	a2 = v_S_k6iq0(a2);
	i3 = 1;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1462,L138);

L34:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray*)a1)->dims;
	iv5 = i1;
	a1 = av3;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av3;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av7;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	i1 = 0;
	iv9 = i1;
	GOTO(1520,L36);

L35:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	iv9 += 1;
L36:	i1 = iv9;
	i2 = iv5;
	if (i1 < i2)
		GOBACK(1539,L35);
	a1 = av2;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1549,L138);

L37:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1566,L138);

L38:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1592,L138);

L39:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1618,L138);

L40:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1637,L42);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->numDimensions;
	i2 = 1;
	if (i1 != i2)
		GOTO(1661,L41);
	a1 = av2;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->baseType;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1674,L138);

L41:	a1 = av2;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->baseType;
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a3)->numDimensions;
	i4 = 1;
	i3 = i3 - i4;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1697,L138);

L42:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[13];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1716,L138);

L43:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1750,L138);

L44:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1784,L138);

L45:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(1811,L138);

L46:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(1835,L138);

L47:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(1862,L138);

L48:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(1898,L138);

L49:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(1934,L138);

L50:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(1942,L138);

L51:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(1955,L138);

L52:	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		top__nW0zk.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(1967,L138);

L53:	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av5 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av6 = a1;
	a1 = av2;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2004,L138);

L54:	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av5 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av6 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2054,L138);

L55:	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av5 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av6 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 2;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av7 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2124,L138);

L56:	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av5 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av6 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 2;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av7 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2199,L138);

L57:	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av5 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av6 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 2;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av7 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		topIndex__5ZMC1.f(a2);
	i3 = 3;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	av8 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2294,L138);

L58:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	av5 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	av6 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2333,L138);

L59:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2362,L138);

L60:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2408,L138);

L61:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2463,L138);

L62:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2492,L138);

L63:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2547,L138);

L64:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2575,L138);

L65:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2595,L138);

L66:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2623,L138);

L67:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2652,L138);

L68:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2681,L138);

L69:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2718,L138);

L70:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2738,L138);

L71:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2766,L138);

L72:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2794,L138);

L73:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2823,L138);

L74:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2860,L138);

L75:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2889,L138);

L76:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(2901,L138);

L77:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(2910,L138);

L78:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(2931,L138);

L79:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(2978,L138);

L80:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3007,L138);

L81:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3054,L138);

L82:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(3069,L138);

L83:	a1 = av2;
	a2 = v__u8Teb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3080,L138);

L84:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3092,L138);

L85:	a1 = av0;
	a2 = av2;
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3104,L138);

L86:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(3113,L138);

L87:	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3134,L138);

L88:	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3155,L138);

L89:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3167,L138);

L90:	a1 = av0;
	a2 = av2;
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3179,L138);

L91:	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av1;
	if ((a5 != 0) && !(c0 = *(Class*)a5, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Putfield.C,
			(c1->flags & 1) ? instanceof(a5,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a5);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleTypeOfFieldInF_Saci_kvfG3(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av5 = a1;
	a1 = av5;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3212,L92);
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3233,L95);

L92:	a1 = av5;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3244,L93);
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3265,L95);

L93:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3273,L94);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(3282,L95);

L94:	a1 = av0;
	a2 = av2;
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
L95:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(3299,L138);

L96:	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av1;
	if ((a5 != 0) && !(c0 = *(Class*)a5, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Getfield.C,
			(c1->flags & 1) ? instanceof(a5,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a5);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleTypeOfFieldInF_Saci_kvfG3(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av5 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av5;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3338,L97);
	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3357,L138);

L97:	a1 = av5;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3368,L98);
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3387,L138);

L98:	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3397,L138);

L99:	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av1;
	if ((a5 != 0) && !(c0 = *(Class*)a5, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Putstatic.C,
			(c1->flags & 1) ? instanceof(a5,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a5);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleTypeOfFieldInF_Saci_kvfG3(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av5 = a1;
	a1 = av5;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3430,L100);
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3451,L138);

L100:	a1 = av5;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3462,L101);
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3483,L138);

L101:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3491,L102);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(3500,L138);

L102:	a1 = av0;
	a2 = av2;
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3511,L138);

L103:	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av1;
	if ((a5 != 0) && !(c0 = *(Class*)a5, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Getstatic.C,
			(c1->flags & 1) ? instanceof(a5,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a5);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleTypeOfFieldInF_Saci_kvfG3(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av5 = a1;
	a1 = av5;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3544,L104);
	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3563,L138);

L104:	a1 = av5;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3574,L105);
	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3593,L138);

L105:	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(3603,L138);

L106:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokevirtual.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av3;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv6 = i1;
	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av5;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleReturnTypeOfMe_Saci_SpI2q(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av7 = a1;
	i1 = iv6;
	i2 = 1;
	i1 = i1 - i2;
	iv8 = i1;
	GOTO(3649,L111);

L107:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3662,L108);
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3683,L110);

L108:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3696,L109);
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3717,L110);

L109:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		top__nW0zk.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
L110:	iv8 += -1;
L111:	i1 = iv8;
	if (i1 >= 0)
		GOBACK(3735,L107);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av7;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(3752,L138);
	a1 = av0;
	a2 = av2;
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		smartPush_TT_lNg1R.f(a1,a2,a3);
	av2 = a1;
	GOTO(3763,L138);

L112:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokenonvirtual.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av3;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv6 = i1;
	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av5;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleReturnTypeOfMe_Saci_SpI2q(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av7 = a1;
	i1 = iv6;
	i2 = 1;
	i1 = i1 - i2;
	iv8 = i1;
	GOTO(3809,L117);

L113:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3822,L114);
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3843,L116);

L114:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3856,L115);
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(3877,L116);

L115:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		top__nW0zk.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
L116:	iv8 += -1;
L117:	i1 = iv8;
	if (i1 >= 0)
		GOBACK(3895,L113);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av7;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(3912,L138);
	a1 = av0;
	a2 = av2;
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		smartPush_TT_lNg1R.f(a1,a2,a3);
	av2 = a1;
	GOTO(3923,L138);

L118:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokestatic.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av3;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv6 = i1;
	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av5;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleReturnTypeOfMe_Saci_SpI2q(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av7 = a1;
	i1 = iv6;
	i2 = 1;
	i1 = i1 - i2;
	iv8 = i1;
	GOTO(3969,L123);

L119:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(3982,L120);
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(4003,L122);

L120:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(4016,L121);
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(4037,L122);

L121:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		top__nW0zk.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
L122:	iv8 += -1;
L123:	i1 = iv8;
	if (i1 >= 0)
		GOBACK(4055,L119);
	a1 = av7;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(4066,L138);
	a1 = av0;
	a2 = av2;
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		smartPush_TT_lNg1R.f(a1,a2,a3);
	av2 = a1;
	GOTO(4077,L138);

L124:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokeinterface.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av3;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv6 = i1;
	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->cm;
	a4 = av3;
	a5 = av5;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a5)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = jimpleReturnTypeOfIn_Saci_lqfJr(a2,a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = byteCodeTypeOf_T_zDmer(a1,a2);
	av7 = a1;
	i1 = iv6;
	i2 = 1;
	i1 = i1 - i2;
	iv8 = i1;
	GOTO(4123,L129);

L125:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(4136,L126);
	a1 = av0;
	a2 = av2;
	a3 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(4157,L128);

L126:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		top__nW0zk.f(a1);
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(4170,L127);
	a1 = av0;
	a2 = av2;
	a3 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
	GOTO(4191,L128);

L127:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		top__nW0zk.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafe_TT_cbkNO.f(a1,a2,a3);
	av2 = a1;
L128:	iv8 += -1;
L129:	i1 = iv8;
	if (i1 >= 0)
		GOBACK(4209,L125);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av7;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(4226,L138);
	a1 = av0;
	a2 = av2;
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		smartPush_TT_lNg1R.f(a1,a2,a3);
	av2 = a1;
	GOTO(4237,L138);

L130:	a1 = av0;
	a2 = av3;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_New.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a3)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		getClassName_aci_3AogT.f(a1,a2,i3);
	a1 = v_S_k6iq0(a1);
	av5 = a1;
	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(4264,L138);

L131:	a1 = av0;
	a2 = av3;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Checkcast.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a3)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		getClassName_aci_3AogT.f(a1,a2,i3);
	av5 = a1;
	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(4288,L132);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av0;
	a3 = av3;
	a4 = av1;
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Checkcast.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a4)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->class->M.
		getClassName_aci_3AogT.f(a2,a3,i4);
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av6 = a1;
	GOTO(4312,L133);

L132:	a1 = av5;
	a1 = v_S_k6iq0(a1);
	av6 = a1;
L133:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(4335,L138);

L134:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	GOTO(4352,L138);

L135:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(4361,L138);

L136:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		popSafeRefType_T_a5bMG.f(a1,a2);
	av2 = a1;
	GOTO(4370,L138);

L137:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[17];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	i4 = iv4;
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

L138:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_OutFlow.C);
	a2 = a1;
	a3 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_T_e0Ju0(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimpleTypeOfFieldInF_Saci_kvfG3: ca.mcgill.sable.soot.coffi.CFG.jimpleTypeOfFieldInFieldRef(Lca/mcgill/sable/soot/SootClassManager;[Lca/mcgill/sable/soot/coffi/cp_info;I)Lca/mcgill/sable/soot/Type; */

Class xt_jimpleTypeOfFieldInF_Saci_kvfG3[] = { 0 };

Object jimpleTypeOfFieldInF_Saci_kvfG3(Object p0, Object p1, Object p2, Int p3)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av4, av5, av6;
Int i0, i1, i2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = av2;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av2;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av2;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimpleReturnTypeOfMe_Saci_SpI2q: ca.mcgill.sable.soot.coffi.CFG.jimpleReturnTypeOfMethodRef(Lca/mcgill/sable/soot/SootClassManager;[Lca/mcgill/sable/soot/coffi/cp_info;I)Lca/mcgill/sable/soot/Type; */

Class xt_jimpleReturnTypeOfMe_Saci_SpI2q[] = { 0 };

Object jimpleReturnTypeOfMe_Saci_SpI2q(Object p0, Object p1, Object p2, Int p3)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av4, av5, av6;
Int i0, i1, i2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = av2;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av2;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av2;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	a1 = jimpleReturnTypeOfMeth_SS_ZCjrL(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimpleReturnTypeOfIn_Saci_lqfJr: ca.mcgill.sable.soot.coffi.CFG.jimpleReturnTypeOfInterfaceMethodRef(Lca/mcgill/sable/soot/SootClassManager;[Lca/mcgill/sable/soot/coffi/cp_info;I)Lca/mcgill/sable/soot/Type; */

Class xt_jimpleReturnTypeOfIn_Saci_lqfJr[] = { 0 };

Object jimpleReturnTypeOfIn_Saci_lqfJr(Object p0, Object p1, Object p2, Int p3)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av4, av5, av6;
Int i0, i1, i2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = av2;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av2;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av2;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	a1 = jimpleReturnTypeOfMeth_SS_ZCjrL(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M processCPEntry_aciTS_pHN5J: ca.mcgill.sable.soot.coffi.CFG.processCPEntry([Lca/mcgill/sable/soot/coffi/cp_info;ILca/mcgill/sable/soot/coffi/TypeStack;Lca/mcgill/sable/soot/SootMethod;)Lca/mcgill/sable/soot/coffi/OutFlow; */

Class xt_processCPEntry_aciTS_pHN5J[] = { 0 };

Object processCPEntry_aciTS_pHN5J(Object p0, Object p1, Int p2, Object p3, Object p4)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av3, av4, av5;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av5 = a1;
	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(10,L1);
	a1 = av3;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	GOTO(21,L7);

L1:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(29,L2);
	a1 = av3;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	GOTO(40,L7);

L2:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(48,L3);
	a1 = av3;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	a1 = av3;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	GOTO(67,L7);

L3:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(75,L4);
	a1 = av3;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	a1 = av3;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	GOTO(94,L7);

L4:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(102,L5);
	a1 = av3;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[18];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	GOTO(115,L7);

L5:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(123,L6);
	a1 = av3;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[18];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av3 = a1;
	GOTO(136,L7);

L6:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[19];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L7:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_OutFlow.C);
	a2 = a1;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_T_e0Ju0(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M smartPush_TT_lNg1R: ca.mcgill.sable.soot.coffi.CFG.smartPush(Lca/mcgill/sable/soot/coffi/TypeStack;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_smartPush_TT_lNg1R[] = { 0 };

Object smartPush_TT_lNg1R(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av2;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(7,L1);
	a1 = av1;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av1 = a1;
	a1 = av1;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av1 = a1;
	GOTO(26,L3);

L1:	a1 = av2;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(36,L2);
	a1 = av1;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av1 = a1;
	a1 = av1;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av1 = a1;
	GOTO(55,L3);

L2:	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av1 = a1;
L3:	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M popSafeRefType_T_a5bMG: ca.mcgill.sable.soot.coffi.CFG.popSafeRefType(Lca/mcgill/sable/soot/coffi/TypeStack;)Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_popSafeRefType_T_a5bMG[] = { 0 };

Object popSafeRefType_T_a5bMG(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M popSafeArrayType_T_kHw6i: ca.mcgill.sable.soot.coffi.CFG.popSafeArrayType(Lca/mcgill/sable/soot/coffi/TypeStack;)Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_popSafeArrayType_T_kHw6i[] = { 0 };

Object popSafeArrayType_T_kHw6i(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M popSafe_TT_cbkNO: ca.mcgill.sable.soot.coffi.CFG.popSafe(Lca/mcgill/sable/soot/coffi/TypeStack;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_popSafe_TT_cbkNO[] = { 0 };

Object popSafe_TT_cbkNO(Object p0, Object p1, Object p2)
{
Object a0, a1;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M confirmType_TT_9cgdS: ca.mcgill.sable.soot.coffi.CFG.confirmType(Lca/mcgill/sable/soot/Type;Lca/mcgill/sable/soot/Type;)V */

Class xt_confirmType_TT_9cgdS[] = { 0 };

Void confirmType_TT_9cgdS(Object p0, Object p1, Object p2)
{
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	return;

	/*NOTREACHED*/
}

/*M getClassName_aci_3AogT: ca.mcgill.sable.soot.coffi.CFG.getClassName([Lca/mcgill/sable/soot/coffi/cp_info;I)Ljava/lang/String; */

Class xt_getClassName_aci_3AogT[] = { 0 };

Object getClassName_aci_3AogT(Object p0, Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av3, av4;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av4 = a1;
	a1 = av4;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M confirmRefType_T_p6REE: ca.mcgill.sable.soot.coffi.CFG.confirmRefType(Lca/mcgill/sable/soot/Type;)V */

Class xt_confirmRefType_T_p6REE[] = { 0 };

Void confirmRefType_T_p6REE(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M processTargetFixup_B_rOtP0: ca.mcgill.sable.soot.coffi.CFG.processTargetFixup(Lca/mcgill/sable/soot/coffi/BBQ;)V */

Class xt_processTargetFixup_B_rOtP0[] = { 0 };

Void processTargetFixup_B_rOtP0(Object p0, Object p1)
{
static struct handler htable[] = {
    &cl_java_util_NoSuchElementException.C, 3, 8, 2,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Class c0, c1;
Object a0, a1, a2, a3;
volatile Object av0, av1, av2, av3, av4, av5, av6, av7;
Int i0, i1, i2, i3;
volatile Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 1, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	GOTO(0,L22);

L1:  case 1:
	pc = 3;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->class->M.
		pull__xaT0h.f(a1);
	av2 = a1;
	pc = 8;
	GOTO(8,L3);

L2:  case 2:
	pc = 11;
	goto RETURN;

L3:  case 3:
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->class->M.
		getTailJStmt__V7wzV.f(a1);
	av4 = a1;
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(24,L6);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	i2 = 1;
	if (i1 != i2)
		GOTO(35,L4);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->succ;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		firstElement__ek7HB.f(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->class->M.
		getHeadJStmt__Rr9hT.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1576761943)->f)(a1,a2);
	GOTO(61,L19);

L4:  case 4:
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		firstElement__ek7HB.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->next;
	if (a1 != a2)
		GOTO(78,L5);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->succ;
	i3 = 1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		elementAt_i_kG7lR.f(a2,i3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->class->M.
		getHeadJStmt__Rr9hT.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1576761943)->f)(a1,a2);
	GOTO(105,L19);

L5:  case 5:
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->succ;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		firstElement__ek7HB.f(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->class->M.
		getHeadJStmt__Rr9hT.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1576761943)->f)(a1,a2);
	GOTO(131,L19);

L6:  case 6:
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(139,L9);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	i2 = 2;
	if (i1 == i2)
		GOTO(150,L7);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[20];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L7:  case 7:
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		firstElement__ek7HB.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->next;
	if (a1 != a2)
		GOTO(175,L8);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->succ;
	i3 = 1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		elementAt_i_kG7lR.f(a2,i3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->class->M.
		getHeadJStmt__Rr9hT.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1576761943)->f)(a1,a2);
	GOTO(202,L19);

L8:  case 8:
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->succ;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_util_Vector*)a2)->class->M.
		firstElement__ek7HB.f(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->class->M.
		getHeadJStmt__Rr9hT.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1576761943)->f)(a1,a2);
	GOTO(228,L19);

L9:  case 9:
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(236,L14);
	i1 = 0;
	iv5 = i1;
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av7 = a1;
	GOTO(258,L13);

L10:  case 10:
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	i1 = iv5;
	if (i1 != 0)
		GOTO(274,L11);
	a1 = av6;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->class->M.
		getHeadJStmt__Rr9hT.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,481678642)->f)(a1,a2);
	GOTO(288,L12);

L11:  case 11:
	a1 = av6;
	i2 = iv5;
	i3 = 1;
	i2 = i2 - i3;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->class->M.
		getHeadJStmt__Rr9hT.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1494493598)->f)(a1,i2,a3);
L12:  case 12:
	iv5 += 1;
L13:  case 13:
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(316,L10);
	GOTO(319,L19);

L14:  case 14:
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(327,L19);
	i1 = 0;
	iv5 = i1;
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av7 = a1;
	GOTO(349,L18);

L15:  case 15:
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	i1 = iv5;
	if (i1 != 0)
		GOTO(365,L16);
	a1 = av6;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a2)->class->M.
		getHeadJStmt__Rr9hT.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,481678642)->f)(a1,a2);
	GOTO(379,L17);

L16:  case 16:
	a1 = av6;
	i2 = iv5;
	i3 = 1;
	i2 = i2 - i3;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a3)->class->M.
		getHeadJStmt__Rr9hT.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1494493598)->f)(a1,i2,a3);
L17:  case 17:
	iv5 += 1;
L18:  case 18:
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(407,L15);
L19:  case 19:
	a1 = av2;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->done = i2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->succ;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av5 = a1;
	GOTO(424,L21);

L20:  case 20:
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->done;
	if (i1 == 0)
		GOTO(442,L21);
	a1 = av1;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->class->M.
		push_B_6KwT3.f(a1,a2);
L21:  case 21:
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(457,L20);
L22:  case 22:
	pc = 460;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->class->M.
		isEmpty__p3Jlh.f(a1);
	if (i1 == 0)
		GOBACK(464,L1);
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimpleTargetFixup__hdQS1: ca.mcgill.sable.soot.coffi.CFG.jimpleTargetFixup()V */

Class xt_jimpleTargetFixup__hdQS1[] = { 0 };

Void jimpleTargetFixup__hdQS1(Object p0)
{
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
Int iv5;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_BBQ.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ANkx1(a2);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av3 = a1;
	a1 = av3;
	if (a1 != 0)
		GOTO(17,L1);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cfg;
	av4 = a1;
	GOTO(27,L3);

L2:	a1 = av4;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->done = i2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->next;
	av4 = a1;
L3:	a1 = av4;
	if (a1 != 0)
		GOBACK(45,L2);
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->cfg;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->class->M.
		push_B_6KwT3.f(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	processTargetFixup_B_rOtP0(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->class->M.
		isEmpty__p3Jlh.f(a1);
	if (i1 == 0)
		GOTO(65,L7);
	i1 = 0;
	iv5 = i1;
	GOTO(71,L6);

L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->b;
	av1 = a1;
	a1 = av1;
	if (a1 == 0)
		GOTO(86,L5);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->done;
	if (i1 == 0)
		GOTO(93,L5);
	a1 = av2;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->class->M.
		push_B_6KwT3.f(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	processTargetFixup_B_rOtP0(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->class->M.
		isEmpty__p3Jlh.f(a1);
	if (i1 != 0)
		GOTO(110,L5);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[21];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	return;

L5:	iv5 += 1;
L6:	i1 = iv5;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(131,L4);
L7:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M generateJimpleFor_aciTTSL_ZMVwo: ca.mcgill.sable.soot.coffi.CFG.generateJimpleForCPEntry([Lca/mcgill/sable/soot/coffi/cp_info;ILca/mcgill/sable/soot/coffi/TypeStack;Lca/mcgill/sable/soot/coffi/TypeStack;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)V */

Class xt_generateJimpleFor_aciTTSL_ZMVwo[] = { 0 };

Void generateJimpleFor_aciTTSL_ZMVwo(Object p0, Object p1, Int p2, Object p3, Object p4, Object p5, Object p6)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av3, av4, av5, av6, av7, av8, av9, av10, av11;
Int i0, i1, i2, i3, i4;
Int iv2;
Long l0, l1, l2, l3, l4;
Float f0, f1, f2, f3, f4;
Double d0, d1, d2, d3, d4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	av3 = p3;
	av4 = p4;
	av5 = p5;
	av6 = p6;

L0:	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av9 = a1;
	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(10,L1);
	a1 = av9;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info*)a1)->bytes;
	i1 = l2;
	a1 = v_i_P1Dgu(i1);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av4;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av7 = a1;
	GOTO(55,L9);

L1:	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(63,L2);
	a1 = av9;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	f1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info*)a1)->class->M.
		convert__USaIF.f(a1);
	a1 = v_f_WO8CF(f1);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av4;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av7 = a1;
	GOTO(107,L9);

L2:	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(115,L3);
	a1 = av9;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info*)a1)->class->M.
		convert__ApeSC.f(a1);
	a1 = v_l_QkWzs(l2);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av4;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av7 = a1;
	GOTO(159,L9);

L3:	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(167,L4);
	a1 = av9;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	d2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info*)a1)->class->M.
		convert__9fuLW.f(a1);
	a1 = v_d_olaKu(d2);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av4;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av7 = a1;
	GOTO(211,L9);

L4:	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(219,L6);
	a1 = av9;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_String_info*)a1)->class->M.
		toString_ac_QFttu.f(a1,a2);
	av11 = a1;
	a1 = av11;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[22];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(244,L5);
	a1 = av11;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[22];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		endsWith_S_0JPFg.f(a1,a2);
	if (i1 == 0)
		GOTO(254,L5);
	a1 = av11;
	i2 = 1;
	a3 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_lang_String*)a3)->class->M.
		length__rpuzQ.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av11 = a1;
L5:	a1 = av11;
	a1 = v_S_g1ApG(a1);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av4;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av7 = a1;
	GOTO(303,L9);

L6:	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(311,L8);
	a1 = av9;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av11 = a1;
	a1 = av11;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[22];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(335,L7);
	a1 = av11;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[22];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		endsWith_S_0JPFg.f(a1,a2);
	if (i1 == 0)
		GOTO(345,L7);
	a1 = av11;
	i2 = 1;
	a3 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_lang_String*)a3)->class->M.
		length__rpuzQ.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av11 = a1;
L7:	a1 = av11;
	a1 = v_S_g1ApG(a1);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av4;
	a4 = av4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av7 = a1;
	GOTO(394,L9);

L8:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[19];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L9:	a1 = av6;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M generateJimple_ITTacLB_AiQxa: ca.mcgill.sable.soot.coffi.CFG.generateJimple(Lca/mcgill/sable/soot/coffi/Instruction;Lca/mcgill/sable/soot/coffi/TypeStack;Lca/mcgill/sable/soot/coffi/TypeStack;[Lca/mcgill/sable/soot/coffi/cp_info;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/coffi/BasicBlock;)V */

Class xt_generateJimple_ITTacLB_AiQxa[] = { 0 };

Void generateJimple_ITTacLB_AiQxa(Object p0, Object p1, Object p2, Object p3, Object p4, Object p5, Object p6)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av11, av12, av13, av14,
    av16, av17, av19, av20, av21, av22, av23, av24, av25, av26, av27, av28, av29, av30;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Int iv15, iv18, iv19, iv20, iv21, iv31, iv32;
Long l0, l1, l2, l3, l4, l5, l6, l7;
Float f0, f1, f2, f3, f4, f5, f6, f7;
Double d0, d1, d2, d3, d4, d5, d6, d7;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;
	av5 = p5;
	av6 = p6;

L0:	a1 = 0;
	av8 = a1;
	a1 = 0;
	av9 = a1;
	a1 = 0;
	av10 = a1;
	a1 = 0;
	av11 = a1;
	a1 = 0;
	av12 = a1;
	a1 = 0;
	av13 = a1;
	a1 = 0;
	av14 = a1;
	a1 = 0;
	av17 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->code;
	i2 = 255;
	i1 = i1 & i2;
	iv18 = i1;
	i1 = iv18;
	switch (i1) {
		case 0: 	GOTO(36,L43);
		case 1: 	GOTO(36,L5);
		case 2: 	GOTO(36,L6);
		case 3: 	GOTO(36,L6);
		case 4: 	GOTO(36,L6);
		case 5: 	GOTO(36,L6);
		case 6: 	GOTO(36,L6);
		case 7: 	GOTO(36,L6);
		case 8: 	GOTO(36,L6);
		case 9: 	GOTO(36,L7);
		case 10: 	GOTO(36,L7);
		case 11: 	GOTO(36,L8);
		case 12: 	GOTO(36,L8);
		case 13: 	GOTO(36,L8);
		case 14: 	GOTO(36,L9);
		case 15: 	GOTO(36,L9);
		case 16: 	GOTO(36,L1);
		case 17: 	GOTO(36,L2);
		case 18: 	GOTO(36,L3);
		case 19: 	GOTO(36,L4);
		case 20: 	GOTO(36,L4);
		case 21: 	GOTO(36,L10);
		case 22: 	GOTO(36,L14);
		case 23: 	GOTO(36,L11);
		case 24: 	GOTO(36,L13);
		case 25: 	GOTO(36,L12);
		case 26: 	GOTO(36,L15);
		case 27: 	GOTO(36,L15);
		case 28: 	GOTO(36,L15);
		case 29: 	GOTO(36,L15);
		case 30: 	GOTO(36,L18);
		case 31: 	GOTO(36,L18);
		case 32: 	GOTO(36,L18);
		case 33: 	GOTO(36,L18);
		case 34: 	GOTO(36,L16);
		case 35: 	GOTO(36,L16);
		case 36: 	GOTO(36,L16);
		case 37: 	GOTO(36,L16);
		case 38: 	GOTO(36,L19);
		case 39: 	GOTO(36,L19);
		case 40: 	GOTO(36,L19);
		case 41: 	GOTO(36,L19);
		case 42: 	GOTO(36,L17);
		case 43: 	GOTO(36,L17);
		case 44: 	GOTO(36,L17);
		case 45: 	GOTO(36,L17);
		case 46: 	GOTO(36,L40);
		case 47: 	GOTO(36,L40);
		case 48: 	GOTO(36,L40);
		case 49: 	GOTO(36,L40);
		case 50: 	GOTO(36,L40);
		case 51: 	GOTO(36,L40);
		case 52: 	GOTO(36,L40);
		case 53: 	GOTO(36,L40);
		case 54: 	GOTO(36,L20);
		case 55: 	GOTO(36,L23);
		case 56: 	GOTO(36,L21);
		case 57: 	GOTO(36,L24);
		case 58: 	GOTO(36,L22);
		case 59: 	GOTO(36,L25);
		case 60: 	GOTO(36,L25);
		case 61: 	GOTO(36,L25);
		case 62: 	GOTO(36,L25);
		case 63: 	GOTO(36,L28);
		case 64: 	GOTO(36,L28);
		case 65: 	GOTO(36,L28);
		case 66: 	GOTO(36,L28);
		case 67: 	GOTO(36,L26);
		case 68: 	GOTO(36,L26);
		case 69: 	GOTO(36,L26);
		case 70: 	GOTO(36,L26);
		case 71: 	GOTO(36,L29);
		case 72: 	GOTO(36,L29);
		case 73: 	GOTO(36,L29);
		case 74: 	GOTO(36,L29);
		case 75: 	GOTO(36,L27);
		case 76: 	GOTO(36,L27);
		case 77: 	GOTO(36,L27);
		case 78: 	GOTO(36,L27);
		case 79: 	GOTO(36,L41);
		case 80: 	GOTO(36,L42);
		case 81: 	GOTO(36,L41);
		case 82: 	GOTO(36,L42);
		case 83: 	GOTO(36,L41);
		case 84: 	GOTO(36,L41);
		case 85: 	GOTO(36,L41);
		case 86: 	GOTO(36,L41);
		case 87: 	GOTO(36,L44);
		case 88: 	GOTO(36,L44);
		case 89: 	GOTO(36,L45);
		case 90: 	GOTO(36,L48);
		case 91: 	GOTO(36,L49);
		case 92: 	GOTO(36,L46);
		case 93: 	GOTO(36,L51);
		case 94: 	GOTO(36,L53);
		case 95: 	GOTO(36,L60);
		case 96: 	GOTO(36,L61);
		case 97: 	GOTO(36,L62);
		case 98: 	GOTO(36,L61);
		case 99: 	GOTO(36,L62);
		case 100: 	GOTO(36,L63);
		case 101: 	GOTO(36,L64);
		case 102: 	GOTO(36,L63);
		case 103: 	GOTO(36,L64);
		case 104: 	GOTO(36,L65);
		case 105: 	GOTO(36,L66);
		case 106: 	GOTO(36,L65);
		case 107: 	GOTO(36,L66);
		case 108: 	GOTO(36,L67);
		case 109: 	GOTO(36,L68);
		case 110: 	GOTO(36,L67);
		case 111: 	GOTO(36,L68);
		case 112: 	GOTO(36,L69);
		case 113: 	GOTO(36,L70);
		case 114: 	GOTO(36,L69);
		case 115: 	GOTO(36,L70);
		case 116: 	GOTO(36,L71);
		case 117: 	GOTO(36,L71);
		case 118: 	GOTO(36,L71);
		case 119: 	GOTO(36,L71);
		case 120: 	GOTO(36,L72);
		case 121: 	GOTO(36,L75);
		case 122: 	GOTO(36,L73);
		case 123: 	GOTO(36,L76);
		case 124: 	GOTO(36,L74);
		case 125: 	GOTO(36,L77);
		case 126: 	GOTO(36,L78);
		case 127: 	GOTO(36,L79);
		case 128: 	GOTO(36,L80);
		case 129: 	GOTO(36,L81);
		case 130: 	GOTO(36,L82);
		case 131: 	GOTO(36,L83);
		case 132: 	GOTO(36,L30);
		case 133: 	GOTO(36,L84);
		case 134: 	GOTO(36,L85);
		case 135: 	GOTO(36,L86);
		case 136: 	GOTO(36,L87);
		case 137: 	GOTO(36,L85);
		case 138: 	GOTO(36,L86);
		case 139: 	GOTO(36,L87);
		case 140: 	GOTO(36,L84);
		case 141: 	GOTO(36,L86);
		case 142: 	GOTO(36,L87);
		case 143: 	GOTO(36,L84);
		case 144: 	GOTO(36,L85);
		case 145: 	GOTO(36,L88);
		case 146: 	GOTO(36,L89);
		case 147: 	GOTO(36,L90);
		case 148: 	GOTO(36,L105);
		case 149: 	GOTO(36,L106);
		case 150: 	GOTO(36,L107);
		case 151: 	GOTO(36,L108);
		case 152: 	GOTO(36,L109);
		case 153: 	GOTO(36,L91);
		case 154: 	GOTO(36,L95);
		case 155: 	GOTO(36,L93);
		case 156: 	GOTO(36,L98);
		case 157: 	GOTO(36,L97);
		case 158: 	GOTO(36,L94);
		case 159: 	GOTO(36,L99);
		case 160: 	GOTO(36,L102);
		case 161: 	GOTO(36,L100);
		case 162: 	GOTO(36,L104);
		case 163: 	GOTO(36,L103);
		case 164: 	GOTO(36,L101);
		case 165: 	GOTO(36,L110);
		case 166: 	GOTO(36,L111);
		case 167: 	GOTO(36,L112);
		case 168: 	GOTO(36,L169);
		case 169: 	GOTO(36,L114);
		case 170: 	GOTO(36,L119);
		case 171: 	GOTO(36,L120);
		case 172: 	GOTO(36,L117);
		case 173: 	GOTO(36,L117);
		case 174: 	GOTO(36,L117);
		case 175: 	GOTO(36,L117);
		case 176: 	GOTO(36,L117);
		case 177: 	GOTO(36,L116);
		case 178: 	GOTO(36,L126);
		case 179: 	GOTO(36,L125);
		case 180: 	GOTO(36,L124);
		case 181: 	GOTO(36,L123);
		case 182: 	GOTO(36,L127);
		case 183: 	GOTO(36,L135);
		case 184: 	GOTO(36,L143);
		case 185: 	GOTO(36,L151);
		case 186: 	GOTO(36,L169);
		case 187: 	GOTO(36,L160);
		case 188: 	GOTO(36,L32);
		case 189: 	GOTO(36,L33);
		case 190: 	GOTO(36,L39);
		case 191: 	GOTO(36,L159);
		case 192: 	GOTO(36,L161);
		case 193: 	GOTO(36,L164);
		case 194: 	GOTO(36,L167);
		case 195: 	GOTO(36,L168);
		case 196: 	GOTO(36,L31);
		case 197: 	GOTO(36,L36);
		case 198: 	GOTO(36,L92);
		case 199: 	GOTO(36,L96);
		case 200: 	GOTO(36,L113);
		case 201: 	GOTO(36,L169);
		case 202: 	GOTO(36,L118);
		case 203: 	GOTO(36,L169);
		case 204: 	GOTO(36,L169);
		case 205: 	GOTO(36,L169);
		case 206: 	GOTO(36,L169);
		case 207: 	GOTO(36,L169);
		case 208: 	GOTO(36,L169);
		case 209: 	GOTO(36,L115);
		default:	GOTO(36,L169);
	}

L1:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Bipush.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_byte*)a1)->arg_b;
	a1 = v_i_P1Dgu(i1);
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(926,L170);

L2:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Sipush.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_int*)a1)->arg_i;
	a1 = v_i_P1Dgu(i1);
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(963,L170);

L3:	a1 = av0;
	a2 = av4;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ldc1.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_byteindex*)a3)->arg_b;
	a4 = av2;
	a5 = av3;
	a6 = av0;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a6)->jmethod;
	a7 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	generateJimpleFor_aciTTSL_ZMVwo(a1,a2,i3,a4,a5,a6,a7);
	GOTO(987,L170);

L4:	a1 = av0;
	a2 = av4;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_intindex.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a3)->arg_i;
	a4 = av2;
	a5 = av3;
	a6 = av0;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a6)->jmethod;
	a7 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	generateJimpleFor_aciTTSL_ZMVwo(a1,a2,i3,a4,a5,a6,a7);
	GOTO(1011,L170);

L5:	a1 = v__iH4fa();
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1041,L170);

L6:	i1 = iv18;
	i2 = 3;
	i1 = i1 - i2;
	a1 = v_i_P1Dgu(i1);
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1075,L170);

L7:	i1 = iv18;
	i2 = 9;
	i1 = i1 - i2;
	l2 = i1;
	a1 = v_l_QkWzs(l2);
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1111,L170);

L8:	i1 = iv18;
	i2 = 11;
	i1 = i1 - i2;
	f1 = i1;
	a1 = v_f_WO8CF(f1);
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1147,L170);

L9:	i1 = iv18;
	i2 = 14;
	i1 = i1 - i2;
	d2 = i1;
	a1 = v_d_olaKu(d2);
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1183,L170);

L10:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1224,L170);

L11:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1265,L170);

L12:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1306,L170);

L13:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1347,L170);

L14:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1388,L170);

L15:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 26;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1427,L170);

L16:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 34;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1466,L170);

L17:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 42;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1505,L170);

L18:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 30;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1544,L170);

L19:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 38;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1583,L170);

L20:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1624,L170);

L21:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1665,L170);

L22:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1706,L170);

L23:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1747,L170);

L24:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_bytevar.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1788,L170);

L25:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 59;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1827,L170);

L26:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 67;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1866,L170);

L27:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 75;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1905,L170);

L28:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 63;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1944,L170);

L29:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	i2 = iv18;
	i3 = 71;
	i2 = i2 - i3;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(1983,L170);

L30:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Iinc.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Iinc.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Iinc*)a1)->arg_c;
	iv20 = i1;
	a1 = v__WbL8F();
	a2 = av19;
	i3 = iv20;
	a3 = v_i_P1Dgu(i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAddExpr_VV_d9P1D.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2038,L170);

L31:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[23];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L32:	a1 = av0;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Newarray.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Newarray*)a2)->atype;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		jimpleTypeOfAtype_i_UfOGi.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_BaseType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNewArrayExpr_TV_y7F0E.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2111,L170);

L33:	a1 = av0;
	a2 = av4;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Anewarray.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a3)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		getClassName_aci_3AogT.f(a1,a2,i3);
	av19 = a1;
	a1 = av19;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(2136,L34);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av0;
	a3 = av4;
	a4 = av1;
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Anewarray.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a4)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->class->M.
		getClassName_aci_3AogT.f(a2,a3,i4);
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av20 = a1;
	GOTO(2161,L35);

L34:	a1 = av19;
	a1 = v_S_k6iq0(a1);
	av20 = a1;
L35:	a1 = v__WbL8F();
	a2 = av20;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNewArrayExpr_TV_y7F0E.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2215,L170);

L36:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray*)a1)->dims;
	iv19 = i1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av20 = a1;
	i1 = 0;
	iv21 = i1;
	GOTO(2239,L38);

L37:	a1 = av20;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = iv19;
	i4 = i4 - i5;
	i5 = iv21;
	i4 = i4 + i5;
	i5 = 1;
	i4 = i4 + i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv21 += 1;
L38:	i1 = iv21;
	i2 = iv19;
	if (i1 < i2)
		GOBACK(2277,L37);
	a1 = av4;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Multianewarray.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	av22 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av22;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av23 = a1;
	a1 = v__WbL8F();
	a2 = av23;
	a3 = av20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNewMultiArrayExpr_AL_tuLqx.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2345,L170);

L39:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLengthExpr_V_TbHgT.f(a1,a2);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2390,L170);

L40:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newArrayRef_VV_vy9KY.f(a1,a2,a3);
	av14 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2449,L170);

L41:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newArrayRef_VV_vy9KY.f(a1,a2,a3);
	av14 = a1;
	a1 = v__WbL8F();
	a2 = av14;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2510,L170);

L42:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 2;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newArrayRef_VV_vy9KY.f(a1,a2,a3);
	av14 = a1;
	a1 = v__WbL8F();
	a2 = av14;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2571,L170);

L43:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNopStmt__PVmrT.f(a1);
	av17 = a1;
	GOTO(2582,L170);

L44:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNopStmt__PVmrT.f(a1);
	av17 = a1;
	GOTO(2593,L170);

L45:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2628,L170);

L46:	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		top__nW0zk.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(2640,L47);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(2679,L170);

L47:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av17 = a1;
	GOTO(2773,L170);

L48:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av9 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av17 = a1;
	GOTO(2919,L170);

L49:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 2;
	i3 = i3 - i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		get_i_t06Hz.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(2937,L50);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 2;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av17 = a1;
	GOTO(3073,L170);

L50:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 2;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av9 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av17 = a1;
	GOTO(3269,L170);

L51:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		get_i_t06Hz.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(3287,L52);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av9 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 2;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av10 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 4;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av17 = a1;
	GOTO(3439,L170);

L52:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 2;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av9 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av8 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 4;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av17 = a1;
	GOTO(3681,L170);

L53:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		get_i_t06Hz.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(3699,L54);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av9 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(3752,L55);

L54:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av9 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L55:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 3;
	i3 = i3 - i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		get_i_t06Hz.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(3866,L56);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 3;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av11 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(3919,L57);

L56:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 3;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av11 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 2;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av10 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L57:	a1 = av0;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		get_i_t06Hz.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(4037,L58);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 5;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(4086,L59);

L58:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 5;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 4;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av3;
	a5 = av3;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L59:	a1 = 0;
	av17 = a1;
	GOTO(4182,L170);

L60:	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		top__nW0zk.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		push_T_Vs7az.f(a1,a2);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av19 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av3;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av20 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av3;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av21 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av20;
	a3 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = v__WbL8F();
	a2 = av21;
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = 0;
	av17 = a1;
	GOTO(4312,L170);

L61:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAddExpr_VV_d9P1D.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4371,L170);

L62:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAddExpr_VV_d9P1D.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4432,L170);

L63:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newSubExpr_VV_t6rHK.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4491,L170);

L64:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newSubExpr_VV_t6rHK.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4552,L170);

L65:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newMulExpr_VV_jXO1w.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4611,L170);

L66:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newMulExpr_VV_jXO1w.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4672,L170);

L67:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newDivExpr_VV_5pVe7.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4731,L170);

L68:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newDivExpr_VV_5pVe7.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4792,L170);

L69:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newRemExpr_VV_PVebu.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4851,L170);

L70:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newRemExpr_VV_PVebu.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4912,L170);

L71:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNegExpr_V_vFo9X.f(a1,a2);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(4957,L170);

L72:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newShlExpr_VV_Z3Hxs.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5016,L170);

L73:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newShrExpr_VV_7USr6.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5075,L170);

L74:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newUshrExpr_VV_nbYv9.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5134,L170);

L75:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newShlExpr_VV_Z3Hxs.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5193,L170);

L76:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newShrExpr_VV_7USr6.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5252,L170);

L77:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 2;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newUshrExpr_VV_nbYv9.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5311,L170);

L78:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAndExpr_VV_vu8Jd.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5370,L170);

L79:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAndExpr_VV_vu8Jd.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5431,L170);

L80:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newOrExpr_VV_Do5lF.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5490,L170);

L81:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newOrExpr_VV_Do5lF.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5551,L170);

L82:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newXorExpr_VV_FdTYB.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5610,L170);

L83:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newXorExpr_VV_FdTYB.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5671,L170);

L84:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5719,L170);

L85:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5767,L170);

L86:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5815,L170);

L87:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5863,L170);

L88:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__AsEYN();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5911,L170);

L89:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__eNy0s();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(5959,L170);

L90:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__QUgPF();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(6007,L170);

L91:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	i3 = 0;
	a3 = v_i_P1Dgu(i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newEqExpr_VV_rnLgP.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6051,L170);

L92:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__iH4fa();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newEqExpr_VV_rnLgP.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6094,L170);

L93:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	i3 = 0;
	a3 = v_i_P1Dgu(i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLtExpr_VV_Vg2R6.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6138,L170);

L94:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	i3 = 0;
	a3 = v_i_P1Dgu(i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLeExpr_VV_f80QC.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6182,L170);

L95:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	i3 = 0;
	a3 = v_i_P1Dgu(i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNeExpr_VV_1FBI4.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6226,L170);

L96:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__iH4fa();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNeExpr_VV_1FBI4.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6269,L170);

L97:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	i3 = 0;
	a3 = v_i_P1Dgu(i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGtExpr_VV_Vfhui.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6313,L170);

L98:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	i3 = 0;
	a3 = v_i_P1Dgu(i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGeExpr_VV_f7ftO.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6357,L170);

L99:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newEqExpr_VV_rnLgP.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6411,L170);

L100:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLtExpr_VV_Vg2R6.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6465,L170);

L101:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLeExpr_VV_f80QC.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6519,L170);

L102:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNeExpr_VV_1FBI4.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6573,L170);

L103:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGtExpr_VV_Vfhui.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6627,L170);

L104:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGeExpr_VV_f7ftO.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(6681,L170);

L105:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCmpExpr_VV_r3FPU.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(6742,L170);

L106:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCmplExpr_VV_ZqHbU.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(6801,L170);

L107:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCmpgExpr_VV_VvlhW.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(6860,L170);

L108:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCmplExpr_VV_ZqHbU.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(6921,L170);

L109:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 3;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	i6 = 1;
	i5 = i5 - i6;
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCmpgExpr_VV_VvlhW.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(6982,L170);

L110:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newEqExpr_VV_rnLgP.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(7036,L170);

L111:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	i5 = 1;
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNeExpr_VV_1FBI4.f(a1,a2,a3);
	av13 = a1;
	a1 = v__WbL8F();
	a2 = av13;
	a3 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIfStmt_VU_G1XNZ.f(a1,a2,a3);
	av17 = a1;
	GOTO(7090,L170);

L112:	a1 = v__WbL8F();
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGotoStmt_U_qRelW.f(a1,a2);
	av17 = a1;
	GOTO(7108,L170);

L113:	a1 = v__WbL8F();
	a2 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGotoStmt_U_qRelW.f(a1,a2);
	av17 = a1;
	GOTO(7126,L170);

L114:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_bytevar*)a2)->arg_b;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newRetStmt_V_Hjahj.f(a1,a2);
	av17 = a1;
	GOTO(7155,L170);

L115:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Ret_w.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intvar*)a2)->arg_i;
	a1 = getLocalForIndex_Ji_qYKCv(a1,i2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newRetStmt_V_Hjahj.f(a1,a2);
	av17 = a1;
	GOTO(7184,L170);

L116:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newReturnVoidStmt__bav3J.f(a1);
	av17 = a1;
	GOTO(7195,L170);

L117:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newReturnStmt_V_7EEj7.f(a1,a2);
	av17 = a1;
	GOTO(7218,L170);

L118:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newBreakpointStmt__BYvBn.f(a1);
	av17 = a1;
	GOTO(7229,L170);

L119:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->low;
	iv19 = i1;
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Tableswitch*)a1)->high;
	iv20 = i1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	i3 = iv19;
	i4 = iv20;
	i5 = iv20;
	i6 = iv19;
	i5 = i5 - i6;
	i6 = 1;
	i5 = i5 + i6;
	a5 = anewarray(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C,i5);
	a5 = toList_aO_Ko28N(a5);
	a6 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a7 = a6;
	if (!a7) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a7);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newTableSwitchStmt_ViiLU_urD3h.f(a1,a2,i3,i4,a5,a6);
	av17 = a1;
	GOTO(7294,L170);

L120:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av19 = a1;
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a1)->npairs;
	iv20 = i1;
	i1 = 0;
	iv21 = i1;
	GOTO(7318,L122);

L121:	a1 = av19;
	a2 = new(&cl_java_lang_Integer.C);
	a3 = a2;
	a4 = av1;
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_Lookupswitch*)a4)->match_offsets;
	i5 = iv21;
	i6 = 2;
	i5 = i5 * i6;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv21 += 1;
L122:	i1 = iv21;
	i2 = iv20;
	if (i1 < i2)
		GOBACK(7355,L121);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	i4 = iv20;
	a4 = anewarray(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C,i4);
	a4 = toList_aO_Ko28N(a4);
	a5 = new(&cl_ca_mcgill_sable_soot_coffi_FutureStmt.C);
	a6 = a5;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	init__QkUYO(a6);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLookupSwitchStmt_VLLU_8Z2Wo.f(a1,a2,a3,a4,a5);
	av17 = a1;
	GOTO(7395,L170);

L123:	a1 = av4;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Putfield.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av20 = a1;
	a1 = av4;
	a2 = av20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av21 = a1;
	a1 = av21;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av21 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av22 = a1;
	a1 = av4;
	a2 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av23 = a1;
	a1 = av4;
	a2 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av24 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av24;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av25 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av26 = a1;
	a1 = av26;
	a2 = av23;
	a3 = av25;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getField_ST_HMALo.f(a1,a2,a3);
	av27 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a5 = av0;
	a6 = av2;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a6)->class->M.
		top__nW0zk.f(a6);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a5)->class->M.
		typeSize_T_uXH7G.f(a5,a6);
	i4 = i4 - i5;
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av27;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInstanceFieldRef_VS_lXqxs.f(a1,a2,a3);
	av28 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->listBody;
	a2 = av2;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->class->M.
		topIndex__5ZMC1.f(a3);
	a1 = getLocalForStackOp_JTi_G3Ubm(a1,a2,i3);
	av16 = a1;
	a1 = v__WbL8F();
	a2 = av28;
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(7588,L170);

L124:	a1 = 0;
	av19 = a1;
	a1 = av4;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Getfield.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av20 = a1;
	a1 = av4;
	a2 = av20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av22 = a1;
	a1 = av22;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av22 = a1;
	a1 = av4;
	a2 = av20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av23 = a1;
	a1 = av4;
	a2 = av23;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av24 = a1;
	a1 = av4;
	a2 = av23;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av25 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av26 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av25;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av27 = a1;
	a1 = av26;
	a2 = av24;
	a3 = av27;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getField_ST_HMALo.f(a1,a2,a3);
	av28 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av28;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInstanceFieldRef_VS_lXqxs.f(a1,a2,a3);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(7771,L170);

L125:	a1 = 0;
	av19 = a1;
	a1 = av4;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Putstatic.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av20 = a1;
	a1 = av4;
	a2 = av20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av22 = a1;
	a1 = av22;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av22 = a1;
	a1 = av4;
	a2 = av20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av23 = a1;
	a1 = av4;
	a2 = av23;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av24 = a1;
	a1 = av4;
	a2 = av23;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av25 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av25;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av26 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
	a1 = av27;
	a2 = av24;
	a3 = av26;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getField_ST_HMALo.f(a1,a2,a3);
	av28 = a1;
	a1 = v__WbL8F();
	a2 = av28;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newStaticFieldRef_S_NA8MK.f(a1,a2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av19;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(7942,L170);

L126:	a1 = 0;
	av19 = a1;
	a1 = av4;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Getstatic.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av20 = a1;
	a1 = av4;
	a2 = av20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av22 = a1;
	a1 = av22;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av22 = a1;
	a1 = av4;
	a2 = av20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av23 = a1;
	a1 = av4;
	a2 = av23;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av24 = a1;
	a1 = av4;
	a2 = av23;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av25 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av25;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av26 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
	a1 = av27;
	a2 = av24;
	a3 = av26;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getField_ST_HMALo.f(a1,a2,a3);
	av28 = a1;
	a1 = v__WbL8F();
	a2 = av28;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newStaticFieldRef_S_NA8MK.f(a1,a2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(8113,L170);

L127:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokevirtual.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv15 = i1;
	a1 = 0;
	av20 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av22 = a1;
	a1 = av4;
	a2 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av23 = a1;
	a1 = av23;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av23 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av24 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av25 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av26 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av26;
	a1 = jimpleTypesOfFieldOrMe_SS_ge0Lk(a1,a2);
	av30 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av28 = a1;
	i1 = 0;
	iv31 = i1;
	GOTO(8269,L129);

L128:	a1 = av28;
	a2 = av30;
	i3 = iv31;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv31 += 1;
L129:	i1 = iv31;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 < i2)
		GOBACK(8295,L128);
	a1 = av30;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av29 = a1;
	a1 = av27;
	a2 = av25;
	a3 = av28;
	a4 = av29;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethod_SLT_Ra1ti.f(a1,a2,a3,a4);
	av20 = a1;
	i1 = iv15;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimple_Value.C,i1);
	av7 = a1;
	i1 = iv15;
	i2 = 1;
	i1 = i1 - i2;
	iv32 = i1;
	GOTO(8334,L133);

L130:	a1 = av7;
	i2 = iv32;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		top__nW0zk.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(8363,L131);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(8376,L132);

L131:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
L132:	iv32 += -1;
L133:	i1 = iv32;
	if (i1 >= 0)
		GOBACK(8389,L130);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av20;
	a4 = av7;
	a4 = toList_aO_Ko28N(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newVirtualInvokeExpr_LSL_OgZSl.f(a1,a2,a3,a4);
	av16 = a1;
	a1 = av29;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(8427,L134);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(8452,L170);

L134:	a1 = v__WbL8F();
	a2 = av16;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInvokeStmt_V_Por4z.f(a1,a2);
	av17 = a1;
	GOTO(8468,L170);

L135:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokenonvirtual.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv15 = i1;
	a1 = 0;
	av20 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av22 = a1;
	a1 = av4;
	a2 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av23 = a1;
	a1 = av23;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av23 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av24 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av25 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av26 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av26;
	a1 = jimpleTypesOfFieldOrMe_SS_ge0Lk(a1,a2);
	av30 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av28 = a1;
	i1 = 0;
	iv31 = i1;
	GOTO(8624,L137);

L136:	a1 = av28;
	a2 = av30;
	i3 = iv31;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv31 += 1;
L137:	i1 = iv31;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 < i2)
		GOBACK(8650,L136);
	a1 = av30;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av29 = a1;
	a1 = av27;
	a2 = av25;
	a3 = av28;
	a4 = av29;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethod_SLT_Ra1ti.f(a1,a2,a3,a4);
	av20 = a1;
	i1 = iv15;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimple_Value.C,i1);
	av7 = a1;
	i1 = iv15;
	i2 = 1;
	i1 = i1 - i2;
	iv32 = i1;
	GOTO(8689,L141);

L138:	a1 = av7;
	i2 = iv32;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		top__nW0zk.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(8718,L139);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(8731,L140);

L139:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
L140:	iv32 += -1;
L141:	i1 = iv32;
	if (i1 >= 0)
		GOBACK(8744,L138);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av20;
	a4 = av7;
	a4 = toList_aO_Ko28N(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newSpecialInvokeExpr_LSL_4bbUn.f(a1,a2,a3,a4);
	av16 = a1;
	a1 = av29;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(8782,L142);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(8807,L170);

L142:	a1 = v__WbL8F();
	a2 = av16;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInvokeStmt_V_Por4z.f(a1,a2);
	av17 = a1;
	GOTO(8823,L170);

L143:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokestatic.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv15 = i1;
	a1 = 0;
	av20 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av22 = a1;
	a1 = av4;
	a2 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av23 = a1;
	a1 = av23;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av23 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av24 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av25 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av26 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av26;
	a1 = jimpleTypesOfFieldOrMe_SS_ge0Lk(a1,a2);
	av30 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av28 = a1;
	i1 = 0;
	iv31 = i1;
	GOTO(8979,L145);

L144:	a1 = av28;
	a2 = av30;
	i3 = iv31;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv31 += 1;
L145:	i1 = iv31;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 < i2)
		GOBACK(9005,L144);
	a1 = av30;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av29 = a1;
	a1 = av27;
	a2 = av25;
	a3 = av28;
	a4 = av29;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethod_SLT_Ra1ti.f(a1,a2,a3,a4);
	av20 = a1;
	i1 = iv15;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimple_Value.C,i1);
	av7 = a1;
	i1 = iv15;
	i2 = 1;
	i1 = i1 - i2;
	iv32 = i1;
	GOTO(9044,L149);

L146:	a1 = av7;
	i2 = iv32;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		top__nW0zk.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(9073,L147);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(9086,L148);

L147:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
L148:	iv32 += -1;
L149:	i1 = iv32;
	if (i1 >= 0)
		GOBACK(9099,L146);
	a1 = v__WbL8F();
	a2 = av20;
	a3 = av7;
	a3 = toList_aO_Ko28N(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newStaticInvokeExpr_SL_uU9rl.f(a1,a2,a3);
	av16 = a1;
	a1 = av29;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(9125,L150);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(9150,L170);

L150:	a1 = v__WbL8F();
	a2 = av16;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInvokeStmt_V_Por4z.f(a1,a2);
	av17 = a1;
	GOTO(9166,L170);

L151:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Invokeinterface.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	i1 = countParams_aci_Y1c0b(a1,i2);
	iv15 = i1;
	a1 = 0;
	av20 = a1;
	a1 = av4;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a2)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av22 = a1;
	a1 = av4;
	a2 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av23 = a1;
	a1 = av23;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av23 = a1;
	a1 = av4;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av24 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av25 = a1;
	a1 = av4;
	a2 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av26 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av27 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av26;
	a1 = jimpleTypesOfFieldOrMe_SS_ge0Lk(a1,a2);
	av30 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av28 = a1;
	i1 = 0;
	iv31 = i1;
	GOTO(9322,L153);

L152:	a1 = av28;
	a2 = av30;
	i3 = iv31;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv31 += 1;
L153:	i1 = iv31;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 < i2)
		GOBACK(9348,L152);
	a1 = av30;
	a2 = av30;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av29 = a1;
	a1 = av27;
	a2 = av25;
	a3 = av28;
	a4 = av29;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethod_SLT_Ra1ti.f(a1,a2,a3,a4);
	av20 = a1;
	i1 = iv15;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimple_Value.C,i1);
	av7 = a1;
	i1 = iv15;
	i2 = 1;
	i1 = i1 - i2;
	iv32 = i1;
	GOTO(9387,L157);

L154:	a1 = av7;
	i2 = iv32;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a3)->listBody;
	a4 = av2;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->class->M.
		topIndex__5ZMC1.f(a5);
	a3 = getLocalForStackOp_JTi_G3Ubm(a3,a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->class->M.
		top__nW0zk.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		typeSize_T_uXH7G.f(a1,a2);
	i2 = 2;
	if (i1 != i2)
		GOTO(9416,L155);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
	GOTO(9429,L156);

L155:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		pop__RBXWY.f(a1);
	av2 = a1;
L156:	iv32 += -1;
L157:	i1 = iv32;
	if (i1 >= 0)
		GOBACK(9442,L154);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av20;
	a4 = av7;
	a4 = toList_aO_Ko28N(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInterfaceInvokeExp_LSL_83yBW.f(a1,a2,a3,a4);
	av16 = a1;
	a1 = av29;
	a2 = v__wzPnb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(9480,L158);
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(9505,L170);

L158:	a1 = v__WbL8F();
	a2 = av16;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInvokeStmt_V_Por4z.f(a1,a2);
	av17 = a1;
	GOTO(9521,L170);

L159:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newThrowStmt_V_f0VDI.f(a1,a2);
	av17 = a1;
	GOTO(9544,L170);

L160:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av0;
	a3 = av4;
	a4 = av1;
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_New.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a4)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->class->M.
		getClassName_aci_3AogT.f(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av19 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = v__WbL8F();
	a4 = av19;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	a4 = v_S_k6iq0(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a3)->class->M.
		newNewExpr_R_zYk3f.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(9603,L170);

L161:	a1 = av0;
	a2 = av4;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Checkcast.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a3)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		getClassName_aci_3AogT.f(a1,a2,i3);
	av19 = a1;
	a1 = av19;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(9628,L162);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av0;
	a3 = av4;
	a4 = av1;
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Checkcast.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a4)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->class->M.
		getClassName_aci_3AogT.f(a2,a3,i4);
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av20 = a1;
	GOTO(9653,L163);

L162:	a1 = av19;
	a1 = v_S_k6iq0(a1);
	av20 = a1;
L163:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCastExpr_VT_AM1Sk.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(9707,L170);

L164:	a1 = av0;
	a2 = av4;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Instanceof.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a3)->arg_i;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		getClassName_aci_3AogT.f(a1,a2,i3);
	av20 = a1;
	a1 = av20;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(9732,L165);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->cm;
	a2 = av0;
	a3 = av4;
	a4 = av1;
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Instanceof.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction_intindex*)a4)->arg_i;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->class->M.
		getClassName_aci_3AogT.f(a2,a3,i4);
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av19 = a1;
	GOTO(9757,L166);

L165:	a1 = av20;
	a1 = v_S_k6iq0(a1);
	av19 = a1;
L166:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInstanceOfExpr_VT_4PuH5.f(a1,a2,a3);
	av12 = a1;
	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av3;
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newAssignStmt_VV_VK6ax.f(a1,a2,a3);
	av17 = a1;
	GOTO(9811,L170);

L167:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newEnterMonitorStmt_V_5LDIC.f(a1,a2);
	av17 = a1;
	GOTO(9834,L170);

L168:	a1 = v__WbL8F();
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a2)->listBody;
	a3 = av2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->class->M.
		topIndex__5ZMC1.f(a4);
	a2 = getLocalForStackOp_JTi_G3Ubm(a2,a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newExitMonitorStmt_V_FDF1h.f(a1,a2);
	av17 = a1;
	GOTO(9857,L170);

L169:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[24];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	i4 = iv18;
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

L170:	a1 = av17;
	if (a1 == 0)
		GOTO(9887,L171);
	a1 = av5;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L171:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimpleTypeOfAtype_i_UfOGi: ca.mcgill.sable.soot.coffi.CFG.jimpleTypeOfAtype(I)Lca/mcgill/sable/soot/Type; */

Class xt_jimpleTypeOfAtype_i_UfOGi[] = { 0 };

Object jimpleTypeOfAtype_i_UfOGi(Object p0, Int p1)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	i1 = iv1;
	switch (i1) {
		case 4: 	GOTO(1,L1);
		case 5: 	GOTO(1,L2);
		case 6: 	GOTO(1,L3);
		case 7: 	GOTO(1,L4);
		case 8: 	GOTO(1,L5);
		case 9: 	GOTO(1,L6);
		case 10: 	GOTO(1,L7);
		case 11: 	GOTO(1,L8);
		default:	GOTO(1,L9);
	}

L1:	a1 = v__AA1Up();
	return a1;

L2:	a1 = v__eNy0s();
	return a1;

L3:	a1 = v__m4rGl();
	return a1;

L4:	a1 = v__idXk2();
	return a1;

L5:	a1 = v__AsEYN();
	return a1;

L6:	a1 = v__QUgPF();
	return a1;

L7:	a1 = v__GKSua();
	return a1;

L8:	a1 = v__0Qzrs();
	return a1;

L9:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_CFG[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M typeSize_T_uXH7G: ca.mcgill.sable.soot.coffi.CFG.typeSize(Lca/mcgill/sable/soot/Type;)I */

Class xt_typeSize_T_uXH7G[] = { 0 };

Int typeSize_T_uXH7G(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(7,L1);
	a1 = av1;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(17,L1);
	a1 = av1;
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(27,L1);
	a1 = av1;
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(37,L2);
L1:	i1 = 2;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_CFG[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','F','G','C','L','O','N','E',' ',
'U','N','S','U','C','C','E','S','S','F','U','L','W','a','r','n','i','n',
'g',':',' ','t','a','r','g','e','t',' ','o','f',' ','a',' ','b','r','a',
'n','c','h',' ','i','s',' ','n','u','l','l','W','a','r','n','i','n','g',
':',' ','N','o',' ','b','a','s','i','c',' ','b','l','o','c','k',' ','f',
'o','u','n','d',' ','f','o','r',' ','s','t','a','r','t',' ','o','f',' ',
'e','x','c','e','p','t','i','o','n',' ','h','a','n','d','l','e','r',' ',
'c','o','d','e','.','l','0','a','r','g','l','j','a','v','a','.','l','a',
'n','g','.','T','h','r','o','w','a','b','l','e','E','m','p','t','y',' ',
'c','a','t','c','h',' ','r','a','n','g','e',' ','f','o','r',' ','e','x',
'c','e','p','t','i','o','n',' ','h','a','n','d','l','e','r','M','e','t',
'h','o','d',' ','t','o',' ','j','i','m','p','l','i','f','y',' ','c','o',
'n','t','a','i','n','s',' ','u','n','r','e','a','c','h','a','b','l','e',
' ','c','o','d','e','!',' ',' ','(','n','o','t',' ','h','a','n','d','l',
'e','d',' ','f','o','r',' ','n','o','w',')','E','x','c','e','p','t','i',
'o','n',' ','r','a','n','g','e',' ','d','o','e','s',' ','n','o','t',' ',
'c','o','i','n','c','i','d','e',' ','w','i','t','h',' ','j','i','m','p',
'l','e',' ','i','n','s','t','r','u','c','t','i','o','n','s','E','x','c',
'e','p','t','i','o','n',' ','h','a','n','d','l','e','r',' ','d','o','e',
's',' ','n','o','t',' ','c','o','i','n','c','i','d','e',' ','w','i','t',
'h',' ','j','i','m','p','l','e',' ','i','n','s','t','r','u','c','t','i',
'o','n','o','p','0','j','a','v','a','.','l','a','n','g','.','O','b','j',
'e','c','t','A','s','t','o','r','e',' ','f','a','i','l','e','d',',',' ',
'i','n','v','a','l','i','d',' ','s','t','a','c','k',' ','t','y','p','e',
':',' ','W','i','d','e',' ','i','n','s','t','r','u','c','t','i','o','n',
' ','s','h','o','u','l','d',' ','n','o','t',' ','b','e',' ','e','n','c',
'o','u','n','t','e','r','e','d','[','p','r','o','c','e','s','s','F','l',
'o','w',' ','f','a','i','l','e','d',':',' ','U','n','k','n','o','w','n',
' ','b','y','t','e','c','o','d','e',' ','i','n','s','t','r','u','c','t',
'i','o','n',':',' ','j','a','v','a','.','l','a','n','g','.','S','t','r',
'i','n','g','A','t','t','e','m','p','t','i','n','g',' ','t','o',' ','p',
'u','s','h',' ','a',' ','n','o','n','-','c','o','n','s','t','a','n','t',
' ','c','p',' ','e','n','t','r','y','H','o','w',' ','c','a','n',' ','a',
'n',' ','i','f',' ','n','o','t',' ','h','a','v','e',' ','2',' ','s','u',
'c','c','e','s','s','o','r','s','?','E','r','r','o','r',' ','2','n','d',
' ','p','r','o','c','e','s','s','i','n','g',' ','e','x','c','e','p','t',
'i','o','n',' ','b','l','o','c','k','.','"','W','I','D','E',' ','i','n',
's','t','r','u','c','t','i','o','n',' ','s','h','o','u','l','d',' ','n',
'o','t',' ','b','e',' ','e','n','c','o','u','n','t','e','r','e','d',' ',
'a','n','y','m','o','r','e','U','n','r','e','c','o','g','n','i','z','e',
'd',' ','b','y','t','e','c','o','d','e',' ','i','n','s','t','r','u','c',
't','i','o','n',':',' ','U','n','d','e','f','i','n','e','d',' ',39,'a',
't','y','p','e',39,' ','i','n',' ','N','E','W','A','R','R','A','Y',' ',
'b','y','t','e',' ','i','n','s','t','r','u','c','t','i','o','n'};

const void *st_ca_mcgill_sable_soot_coffi_CFG[] = {
    ch_ca_mcgill_sable_soot_coffi_CFG+30,	/* 0. ca.mcgill.sable.soot.coffi.CFG */
    ch_ca_mcgill_sable_soot_coffi_CFG+48,	/* 1. CLONE UNSUCCESSFUL */
    ch_ca_mcgill_sable_soot_coffi_CFG+83,	/* 2. Warning: target of a branch is null */
    ch_ca_mcgill_sable_soot_coffi_CFG+149,	/* 3. Warning: No basic block found for start  */
    ch_ca_mcgill_sable_soot_coffi_CFG+151,	/* 4. l0 */
    ch_ca_mcgill_sable_soot_coffi_CFG+154,	/* 5. arg */
    ch_ca_mcgill_sable_soot_coffi_CFG+155,	/* 6. l */
    ch_ca_mcgill_sable_soot_coffi_CFG+174,	/* 7. java.lang.Throwable */
    ch_ca_mcgill_sable_soot_coffi_CFG+213,	/* 8. Empty catch range for exception handler */
    ch_ca_mcgill_sable_soot_coffi_CFG+281,	/* 9. Method to jimplify contains unreachable  */
    ch_ca_mcgill_sable_soot_coffi_CFG+339,	/* 10. Exception range does not coincide with j */
    ch_ca_mcgill_sable_soot_coffi_CFG+398,	/* 11. Exception handler does not coincide with */
    ch_ca_mcgill_sable_soot_coffi_CFG+401,	/* 12. op0 */
    ch_ca_mcgill_sable_soot_coffi_CFG+417,	/* 13. java.lang.Object */
    ch_ca_mcgill_sable_soot_coffi_CFG+452,	/* 14. Astore failed, invalid stack type:  */
    ch_ca_mcgill_sable_soot_coffi_CFG+494,	/* 15. Wide instruction should not be encounter */
    ch_ca_mcgill_sable_soot_coffi_CFG+495,	/* 16. [ */
    ch_ca_mcgill_sable_soot_coffi_CFG+545,	/* 17. processFlow failed: Unknown bytecode ins */
    ch_ca_mcgill_sable_soot_coffi_CFG+561,	/* 18. java.lang.String */
    ch_ca_mcgill_sable_soot_coffi_CFG+603,	/* 19. Attempting to push a non-constant cp ent */
    ch_ca_mcgill_sable_soot_coffi_CFG+639,	/* 20. How can an if not have 2 successors% */
    ch_ca_mcgill_sable_soot_coffi_CFG+676,	/* 21. Error 2nd processing exception block. */
    ch_ca_mcgill_sable_soot_coffi_CFG+677,	/* 22. " */
    ch_ca_mcgill_sable_soot_coffi_CFG+727,	/* 23. WIDE instruction should not be encounter */
    ch_ca_mcgill_sable_soot_coffi_CFG+762,	/* 24. Unrecognized bytecode instruction:  */
    ch_ca_mcgill_sable_soot_coffi_CFG+808,	/* 25. Undefined 'atype' in NEWARRAY byte instr */
    0};
