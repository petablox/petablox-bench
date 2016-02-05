/*  ca_mcgill_sable_soot_jimple_TypeResolver$ConstraintCollector.c -- from Java class ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$ConstraintCollector.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.h"
#include "ca_mcgill_sable_soot_jimple_StmtSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_BaseType.h"
#include "ca_mcgill_sable_soot_DoubleType.h"
#include "ca_mcgill_sable_soot_FloatType.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_LongType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_StmtAddressType.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_jimple_AddExpr.h"
#include "ca_mcgill_sable_soot_jimple_AndExpr.h"
#include "ca_mcgill_sable_soot_jimple_ArrayRef.h"
#include "ca_mcgill_sable_soot_jimple_BinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_CastExpr.h"
#include "ca_mcgill_sable_soot_jimple_CaughtExceptionRef.h"
#include "ca_mcgill_sable_soot_jimple_CmpExpr.h"
#include "ca_mcgill_sable_soot_jimple_CmpgExpr.h"
#include "ca_mcgill_sable_soot_jimple_CmplExpr.h"
#include "ca_mcgill_sable_soot_jimple_ConditionExpr.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_DivExpr.h"
#include "ca_mcgill_sable_soot_jimple_DoubleConstant.h"
#include "ca_mcgill_sable_soot_jimple_EnterMonitorStmt.h"
#include "ca_mcgill_sable_soot_jimple_EqExpr.h"
#include "ca_mcgill_sable_soot_jimple_ExitMonitorStmt.h"
#include "ca_mcgill_sable_soot_jimple_FieldRef.h"
#include "ca_mcgill_sable_soot_jimple_FloatConstant.h"
#include "ca_mcgill_sable_soot_jimple_GeExpr.h"
#include "ca_mcgill_sable_soot_jimple_GtExpr.h"
#include "ca_mcgill_sable_soot_jimple_IfStmt.h"
#include "ca_mcgill_sable_soot_jimple_InstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_InstanceOfExpr.h"
#include "ca_mcgill_sable_soot_jimple_IntConstant.h"
#include "ca_mcgill_sable_soot_jimple_InterfaceInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeStmt.h"
#include "ca_mcgill_sable_soot_jimple_LeExpr.h"
#include "ca_mcgill_sable_soot_jimple_LengthExpr.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_LongConstant.h"
#include "ca_mcgill_sable_soot_jimple_LookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_LtExpr.h"
#include "ca_mcgill_sable_soot_jimple_MulExpr.h"
#include "ca_mcgill_sable_soot_jimple_NeExpr.h"
#include "ca_mcgill_sable_soot_jimple_NegExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NextNextStmtRef.h"
#include "ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_NullConstant.h"
#include "ca_mcgill_sable_soot_jimple_OrExpr.h"
#include "ca_mcgill_sable_soot_jimple_RemExpr.h"
#include "ca_mcgill_sable_soot_jimple_RetStmt.h"
#include "ca_mcgill_sable_soot_jimple_ReturnStmt.h"
#include "ca_mcgill_sable_soot_jimple_ShlExpr.h"
#include "ca_mcgill_sable_soot_jimple_ShrExpr.h"
#include "ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_StaticFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_StaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_StringConstant.h"
#include "ca_mcgill_sable_soot_jimple_SubExpr.h"
#include "ca_mcgill_sable_soot_jimple_TableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_ThrowStmt.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$1$RecursiveFunction.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$SCC.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeException.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeVariable.h"
#include "ca_mcgill_sable_soot_jimple_UnopExpr.h"
#include "ca_mcgill_sable_soot_jimple_UshrExpr.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_VirtualInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_XorExpr.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_KfqdG.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_BaseType.C,
    &cl_ca_mcgill_sable_soot_DoubleType.C,
    &cl_ca_mcgill_sable_soot_FloatType.C,
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_LongType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_StmtAddressType.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
    &cl_ca_mcgill_sable_soot_jimple_BinopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_CaughtExceptionRef.C,
    &cl_ca_mcgill_sable_soot_jimple_CmpExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_CmpgExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_CmplExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_ConditionExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_EnterMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_EqExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_ExitMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_FieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_GeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_GtExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceOfExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_InterfaceInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_LeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_LengthExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_LongConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_LtExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NegExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.C,
    &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NullConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_RetStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_ReturnStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_StaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_StringConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_ThrowStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_TypeResolver.C,
    &cl_ca_mcgill_sable_soot_jimp_h9ITA.C,
    &cl_ca_mcgill_sable_soot_jimp_Hv6gk.C,
    &cl_ca_mcgill_sable_soot_jimp_VCk9q.C,
    &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
    &cl_ca_mcgill_sable_soot_jimple_UnopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_VirtualInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_KfqdG[];
extern const void *st_ca_mcgill_sable_soot_jimp_KfqdG[];
extern Class xt_handleInvokeExpr_I_4dxv2[];
extern Class xt_caseBreakpointStmt_B_WWU8L[];
extern Class xt_caseInvokeStmt_I_eZCL2[];
extern Class xt_caseAssignStmt_A_y6ZLI[];
extern Class xt_caseIdentityStmt_I_6t1J8[];
extern Class xt_caseEnterMonitorStmt_E_UYc5J[];
extern Class xt_caseExitMonitorStmt_E_WDosp[];
extern Class xt_caseGotoStmt_G_W8gF2[];
extern Class xt_caseIfStmt_I_OcVwh[];
extern Class xt_caseLookupSwitchStmt_L_SL4Xa[];
extern Class xt_caseNopStmt_N_MhO5x[];
extern Class xt_caseRetStmt_R_QFAVi[];
extern Class xt_caseReturnStmt_R_qdJ4l[];
extern Class xt_caseReturnVoidStmt_R_AQ0ZB[];
extern Class xt_caseTableSwitchStmt_T_4IBwH[];
extern Class xt_caseThrowStmt_T_aXBxp[];
extern Class xt_defaultCase_S_bfuJh[];
extern Class xt_init_T_SIRdI[];

#define HASHMASK 0x1ff
/*  60.  b4381c60  (60)  caseIfStmt  */
/*  6a.  4ef12e6a  (6a)  caseThrowStmt  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  72.  53c49c72  (72)  caseLookupSwitchStmt  */
/*  84.  7a613884  (84)  caseAssignStmt  */
/*  a4.  12bcbaa4  (a4)  caseGotoStmt  */
/*  d4.  fc3eaad4  (d4)  caseRetStmt  */
/*  d6.  658220d6  (d6)  caseReturnStmt  */
/*  ea.  bade4aea  (ea)  caseIdentityStmt  */
/*  fa.  901d1cfa  (fa)  caseTableSwitchStmt  */
/*  128.  ced4a328  (128)  defaultCase  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  15a.  df0a495a  (15a)  caseEnterMonitorStmt  */
/*  161.  8942e761  (161)  hashCode  */
/*  166.  f9337566  (166)  caseInvokeStmt  */
/*  176.  af0e4576  (176)  caseReturnVoidStmt  */
/*  1a8.  dcb333a8  (1a8)  caseBreakpointStmt  */
/*  1a9.  3f5379a8  (1a8)  caseNopStmt  */
/*  1d2.  4c0d6fd2  (1d2)  clone  */
/*  1e6.  499847e6  (1e6)  caseExitMonitorStmt  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1271391136, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseIfStmt_I_OcVwh,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1324428906, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseThrowStmt_T_aXBxp,
    0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.toString__4d9OF,
    0, 0, 0, 0,
    1405394034, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseLookupSwitchStmt_L_SL4Xa,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2053191812, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseAssignStmt_A_y6ZLI,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314358436, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseGotoStmt_G_W8gF2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -63001900, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseRetStmt_R_QFAVi,
    0, 0,
    1703026902, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseReturnStmt_R_qdJ4l,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1159836950, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseIdentityStmt_I_6t1J8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1877140230, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseTableSwitchStmt_T_4IBwH,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.defaultCase_O_gehkN,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -552973990, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseEnterMonitorStmt_E_UYc5J,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0,
    -114068122, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseInvokeStmt_I_eZCL2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1358019210, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseReturnVoidStmt_R_AQ0ZB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -592235608, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseBreakpointStmt_B_WWU8L,
    1062435240, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseNopStmt_N_MhO5x,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1234716646, &cl_ca_mcgill_sable_soot_jimp_KfqdG.M.caseExitMonitorStmt_E_WDosp,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
};

static const CARRAY(60) nmchars = {&acl_char, 0, 60, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r','$','C','o','n','s','t','r','a','i','n','t','C','o','l',
'l','e','c','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 60 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
't','h','i','s','$','0'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s',
'o','l','v','e','r',';'};
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
'c','a','s','e','B','r','e','a','k','p','o','i','n','t','S','t','m','t'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','B','r','e','a','k','p',
'o','i','n','t','S','t','m','t',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','I','n','v','o','k','e','S','t','m','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'S','t','m','t',';',')','V'};
static const Char nmim_14[] = {
'c','a','s','e','A','s','s','i','g','n','S','t','m','t'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','s','s','i','g','n',
'S','t','m','t',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','I','d','e','n','t','i','t','y','S','t','m','t'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','d','e','n','t','i',
't','y','S','t','m','t',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','E','n','t','e','r','M','o','n','i','t','o','r','S','t',
'm','t'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','n','t','e','r','M',
'o','n','i','t','o','r','S','t','m','t',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','E','x','i','t','M','o','n','i','t','o','r','S','t','m',
't'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','x','i','t','M','o',
'n','i','t','o','r','S','t','m','t',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','G','o','t','o','S','t','m','t'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','o','t','o','S','t',
'm','t',';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','I','f','S','t','m','t'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','f','S','t','m','t',
';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','L','o','o','k','u','p','S','w','i','t','c','h','S','t',
'm','t'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','o','k','u','p',
'S','w','i','t','c','h','S','t','m','t',';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','N','o','p','S','t','m','t'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S','t','m',
't',';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','R','e','t','S','t','m','t'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S','t','m',
't',';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','R','e','t','u','r','n','S','t','m','t'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'S','t','m','t',';',')','V'};
static const Char nmim_24[] = {
'c','a','s','e','R','e','t','u','r','n','V','o','i','d','S','t','m','t'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'V','o','i','d','S','t','m','t',';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','T','a','b','l','e','S','w','i','t','c','h','S','t','m',
't'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','a','b','l','e','S',
'w','i','t','c','h','S','t','m','t',';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','T','h','r','o','w','S','t','m','t'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','r','o','w','S',
't','m','t',';',')','V'};
static const Char nmim_27[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_27[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_28[] = {
's','e','t','R','e','s','u','l','t'};
static const Char sgim_28[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_29[] = {
'g','e','t','R','e','s','u','l','t'};
static const Char sgim_29[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_30[] = {
'h','a','n','d','l','e','I','n','v','o','k','e','E','x','p','r'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'E','x','p','r',';',')','V'};
static const Char nmim_31[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'V'};
static const Char nmim_32[] = {
'<','i','n','i','t','>'};
static const Char sgim_32[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_KfqdG, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_KfqdG, this0_oYxUV), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,42,1,0x12,0}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_undefined}
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
} inr_ca_mcgill_sable_soot_jimp_KfqdG = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_KfqdG.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_KfqdG cl_ca_mcgill_sable_soot_jimp_KfqdG = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_KfqdG),
    33,
    0,
    2,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    80, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_KfqdG,
    st_ca_mcgill_sable_soot_jimp_KfqdG,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_KfqdG,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__xmxzo,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,18,0},
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
	{TMIT_native_code, caseBreakpointStmt_B_WWU8L,(const Char *)&nmim_12,18,
	(const Char *)&sgim_12,47,1,0x8001,1,xt_caseBreakpointStmt_B_WWU8L},
	{TMIT_native_code, caseInvokeStmt_I_eZCL2,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,43,1,0x8001,2,xt_caseInvokeStmt_I_eZCL2},
	{TMIT_native_code, caseAssignStmt_A_y6ZLI,(const Char *)&nmim_14,14,
	(const Char *)&sgim_14,43,1,0x8001,3,xt_caseAssignStmt_A_y6ZLI},
	{TMIT_native_code, caseIdentityStmt_I_6t1J8,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,1,0x8001,4,xt_caseIdentityStmt_I_6t1J8},
	{TMIT_native_code, caseEnterMonitorStmt_E_UYc5J,(const Char *)&nmim_16,20,
	(const Char *)&sgim_16,49,1,0x8001,5,xt_caseEnterMonitorStmt_E_UYc5J},
	{TMIT_native_code, caseExitMonitorStmt_E_WDosp,(const Char *)&nmim_17,19,
	(const Char *)&sgim_17,48,1,0x8001,6,xt_caseExitMonitorStmt_E_WDosp},
	{TMIT_native_code, caseGotoStmt_G_W8gF2,(const Char *)&nmim_18,12,
	(const Char *)&sgim_18,41,1,0x8001,7,xt_caseGotoStmt_G_W8gF2},
	{TMIT_native_code, caseIfStmt_I_OcVwh,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x8001,8,xt_caseIfStmt_I_OcVwh},
	{TMIT_native_code, caseLookupSwitchStmt_L_SL4Xa,(const Char *)&nmim_20,20,
	(const Char *)&sgim_20,49,1,0x8001,9,xt_caseLookupSwitchStmt_L_SL4Xa},
	{TMIT_native_code, caseNopStmt_N_MhO5x,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,1,0x8001,10,xt_caseNopStmt_N_MhO5x},
	{TMIT_native_code, caseRetStmt_R_QFAVi,(const Char *)&nmim_22,11,
	(const Char *)&sgim_22,40,1,0x8001,11,xt_caseRetStmt_R_QFAVi},
	{TMIT_native_code, caseReturnStmt_R_qdJ4l,(const Char *)&nmim_23,14,
	(const Char *)&sgim_23,43,1,0x8001,12,xt_caseReturnStmt_R_qdJ4l},
	{TMIT_native_code, caseReturnVoidStmt_R_AQ0ZB,(const Char *)&nmim_24,18,
	(const Char *)&sgim_24,47,1,0x8001,13,xt_caseReturnVoidStmt_R_AQ0ZB},
	{TMIT_native_code, caseTableSwitchStmt_T_4IBwH,(const Char *)&nmim_25,19,
	(const Char *)&sgim_25,48,1,0x8001,14,xt_caseTableSwitchStmt_T_4IBwH},
	{TMIT_native_code, caseThrowStmt_T_aXBxp,(const Char *)&nmim_26,13,
	(const Char *)&sgim_26,42,1,0x8001,15,xt_caseThrowStmt_T_aXBxp},
	{TMIT_native_code, defaultCase_O_gehkN,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,21,0,0x8001,15,0},
	{TMIT_native_code, setResult_O_If72c,(const Char *)&nmim_28,9,
	(const Char *)&sgim_28,21,0,0x1,16,0},
	{TMIT_native_code, getResult__IigFK,(const Char *)&nmim_29,9,
	(const Char *)&sgim_29,20,0,0x1,17,0},
	{TMIT_native_code, handleInvokeExpr_I_4dxv2,(const Char *)&nmim_30,16,
	(const Char *)&sgim_30,43,1,0x2,0,xt_handleInvokeExpr_I_4dxv2},
	{TMIT_native_code, defaultCase_S_bfuJh,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,37,1,0x1,16,xt_defaultCase_S_bfuJh},
	{TMIT_native_code, init_T_SIRdI,(const Char *)&nmim_32,6,
	(const Char *)&sgim_32,45,1,0x0,17,xt_init_T_SIRdI},
    } /* end of methodsigs */
};


/*M handleInvokeExpr_I_4dxv2: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.handleInvokeExpr(Lca/mcgill/sable/soot/jimple/InvokeExpr;)V */

Class xt_handleInvokeExpr_I_4dxv2[] = { 0 };

Void handleInvokeExpr_I_4dxv2(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8;
Int i0, i1, i2, i3, i4, i5;
Int iv4, iv5, iv6;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InterfaceInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L5);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InterfaceInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av3 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1295252652)->f)(a1);
	av4 = a1;
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(32,L1);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av6 = a1;
	a1 = av6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getDeclaringClass__ywcIy.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_S_0ytVQ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,1465840485)->f)(a1);
	iv5 = i1;
	i1 = 0;
	iv6 = i1;
	GOTO(80,L4);

L2:	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(94,L3);
	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av8 = a1;
	a1 = av8;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av3;
	i4 = iv6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getParameterType_i_cz4Pq.f(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L3:	iv6 += 1;
L4:	i1 = iv6;
	i2 = iv5;
	if (i1 < i2)
		GOBACK(146,L2);
	return;

L5:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(154,L10);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av3 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1295252652)->f)(a1);
	av4 = a1;
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(182,L6);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av6 = a1;
	a1 = av6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getDeclaringClass__ywcIy.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_S_0ytVQ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L6:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,1465840485)->f)(a1);
	iv5 = i1;
	i1 = 0;
	iv6 = i1;
	GOTO(230,L9);

L7:	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(244,L8);
	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av8 = a1;
	a1 = av8;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av3;
	i4 = iv6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getParameterType_i_cz4Pq.f(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L8:	iv6 += 1;
L9:	i1 = iv6;
	i2 = iv5;
	if (i1 < i2)
		GOBACK(296,L7);
	return;

L10:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_VirtualInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(304,L15);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_VirtualInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av3 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1295252652)->f)(a1);
	av4 = a1;
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(332,L11);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av6 = a1;
	a1 = av6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getDeclaringClass__ywcIy.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_S_0ytVQ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L11:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,1465840485)->f)(a1);
	iv5 = i1;
	i1 = 0;
	iv6 = i1;
	GOTO(380,L14);

L12:	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(394,L13);
	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av8 = a1;
	a1 = av8;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av3;
	i4 = iv6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getParameterType_i_cz4Pq.f(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L13:	iv6 += 1;
L14:	i1 = iv6;
	i2 = iv5;
	if (i1 < i2)
		GOBACK(446,L12);
	return;

L15:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(454,L19);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av3 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,1465840485)->f)(a1);
	iv4 = i1;
	i1 = 0;
	iv5 = i1;
	GOTO(480,L18);

L16:	a1 = av2;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(494,L17);
	a1 = av2;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1091742784)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av7 = a1;
	a1 = av7;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av3;
	i4 = iv5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getParameterType_i_cz4Pq.f(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L17:	iv5 += 1;
L18:	i1 = iv5;
	i2 = iv4;
	if (i1 < i2)
		GOBACK(546,L16);
	return;

L19:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[1];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_Object*)a4)->class->M.
		getClass__zh19H.f(a4);
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

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseBreakpointStmt_B_WWU8L: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseBreakpointStmt(Lca/mcgill/sable/soot/jimple/BreakpointStmt;)V */

Class xt_caseBreakpointStmt_B_WWU8L[] = { 0 };

Void caseBreakpointStmt_B_WWU8L(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M caseInvokeStmt_I_eZCL2: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseInvokeStmt(Lca/mcgill/sable/soot/jimple/InvokeStmt;)V */

Class xt_caseInvokeStmt_I_eZCL2[] = { 0 };

Void caseInvokeStmt_I_eZCL2(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-406008228)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	handleInvokeExpr_I_4dxv2(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseAssignStmt_A_y6ZLI: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseAssignStmt(Lca/mcgill/sable/soot/jimple/AssignStmt;)V */

Class xt_caseAssignStmt_A_y6ZLI[] = { 0 };

Void caseAssignStmt_A_y6ZLI(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9;
Int i0, i1, i2, i3, i4, i5;
Int iv7;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1235668254)->f)(a1);
	av3 = a1;
	a1 = 0;
	av4 = a1;
	a1 = 0;
	av5 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(24,L1);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1295252652)->f)(a1);
	av7 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1421462317)->f)(a1);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av7;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av9 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrIsArrayOf__SinWm.f(a1);
	av4 = a1;
	a1 = av8;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(77,L5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(155,L5);

L1:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(162,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av4 = a1;
	GOTO(178,L5);

L2:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(185,L3);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av7 = a1;
	a1 = av7;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-2023966063)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getDeclaringClass__Ddy5k.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_S_0ytVQ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-2023966063)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->class->M.
		getType__NbCeK.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av4 = a1;
	GOTO(254,L5);

L3:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(261,L4);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a2)->class->M.
		getField__KS13V.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->class->M.
		getType__NbCeK.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av4 = a1;
	GOTO(287,L5);

L4:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_Object*)a4)->class->M.
		getClass__zh19H.f(a4);
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

L5:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(321,L6);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1295252652)->f)(a1);
	av7 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1421462317)->f)(a1);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av7;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av9 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrIsArrayOf__SinWm.f(a1);
	av5 = a1;
	a1 = av8;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(374,L89);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(452,L89);

L6:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(459,L7);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(474,L89);

L7:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(481,L8);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(496,L89);

L8:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(503,L9);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(518,L89);

L9:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LongConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(525,L10);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(540,L89);

L10:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NullConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(547,L11);
	a1 = 0;
	av5 = a1;
	GOTO(553,L89);

L11:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StringConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(560,L12);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[3];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(577,L89);

L12:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_BinopExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(584,L66);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_BinopExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(603,L23);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av7 = a1;
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(629,L13);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(636,L13);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(643,L13);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(650,L13);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(657,L14);
L13:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	a1 = av7;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	GOTO(677,L35);

L14:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(684,L15);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(691,L15);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(698,L15);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(705,L15);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(712,L15);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(719,L16);
L15:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	a1 = av7;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av7;
	av5 = a1;
	GOTO(753,L35);

L16:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CmpExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(760,L17);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeInt__kNaLB.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(788,L35);

L17:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CmpgExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(795,L18);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CmplExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(802,L19);
L18:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeInt__kNaLB.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(825,L35);

L19:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_EqExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(832,L20);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(839,L21);
L20:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	GOTO(862,L35);

L21:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(869,L22);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(876,L22);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(883,L22);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(890,L35);
L22:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(918,L35);

L23:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(931,L25);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(938,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(945,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(952,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(959,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(966,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(973,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(980,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(987,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(994,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1001,L24);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1008,L35);
L24:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(1038,L35);

L25:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1051,L27);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1058,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1065,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1072,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1079,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1086,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1093,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1100,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1107,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1114,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1121,L26);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1128,L35);
L26:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(1158,L35);

L27:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1171,L29);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1178,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1185,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1192,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1199,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1206,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1213,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1220,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1227,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1234,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1241,L28);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1248,L35);
L28:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(1278,L35);

L29:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LongConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1291,L31);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1298,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1305,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1312,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1319,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1326,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1333,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1340,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1347,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1354,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1361,L30);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1368,L35);
L30:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(1398,L35);

L31:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NullConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1411,L33);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1418,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1425,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1432,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1439,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1446,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1453,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1460,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1467,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1474,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1481,L32);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1488,L35);
L32:	a1 = 0;
	av5 = a1;
	GOTO(1494,L35);

L33:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StringConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1507,L35);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1514,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1521,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1528,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1535,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1542,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1549,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1556,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1563,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1570,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1577,L34);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1584,L35);
L34:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[3];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[3];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
L35:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1628,L48);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av7 = a1;
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1654,L36);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1661,L36);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1668,L36);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1675,L36);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1682,L37);
L36:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	a1 = av7;
	av5 = a1;
	GOTO(1699,L89);

L37:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1706,L38);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1713,L38);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1720,L39);
L38:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	a1 = av7;
	av5 = a1;
	GOTO(1747,L89);

L39:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1754,L40);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1761,L40);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1768,L41);
L40:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(1796,L89);

L41:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CmpExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1803,L42);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeInt__kNaLB.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(1843,L89);

L42:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CmpgExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1850,L43);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CmplExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1857,L44);
L43:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeInt__kNaLB.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(1892,L89);

L44:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_EqExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1899,L45);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1906,L46);
L45:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(1941,L89);

L46:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1948,L47);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1955,L47);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(1962,L47);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(1969,L89);
L47:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2009,L89);

L48:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2022,L51);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2029,L49);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2036,L49);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2043,L49);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2050,L49);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2057,L49);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2064,L49);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2071,L49);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2078,L50);
L49:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2093,L89);

L50:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2108,L89);

L51:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2121,L54);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2128,L52);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2135,L52);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2142,L52);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2149,L52);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2156,L52);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2163,L52);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2170,L52);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2177,L53);
L52:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2192,L89);

L53:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2207,L89);

L54:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2220,L57);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2227,L55);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2234,L55);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2241,L55);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2248,L55);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2255,L55);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2262,L55);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2269,L55);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2276,L56);
L55:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2291,L89);

L56:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShlExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2298,L89);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_UshrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2305,L89);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ShrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2312,L89);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2327,L89);

L57:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LongConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2340,L60);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2347,L58);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2354,L58);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2361,L58);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2368,L58);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2375,L58);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2382,L58);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2389,L58);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2396,L59);
L58:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2411,L89);

L59:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2426,L89);

L60:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NullConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2439,L63);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2446,L61);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2453,L61);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2460,L61);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2467,L61);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2474,L61);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2481,L61);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2488,L61);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2495,L62);
L61:	a1 = 0;
	av5 = a1;
	GOTO(2501,L89);

L62:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2516,L89);

L63:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StringConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2529,L89);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AddExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2536,L64);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SubExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2543,L64);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_MulExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2550,L64);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DivExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2557,L64);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RemExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2564,L64);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AndExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2571,L64);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_OrExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(2578,L64);
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_XorExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2585,L65);
L64:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[3];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2602,L89);

L65:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2617,L89);

L66:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2624,L67);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1756617703)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2649,L89);

L67:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceOfExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2656,L68);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceOfExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av7 = a1;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeInt__kNaLB.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2721,L89);

L68:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2728,L69);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	handleInvokeExpr_I_4dxv2(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,54970279)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getReturnType__sYISd.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2762,L89);

L69:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewArrayExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2769,L72);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewArrayExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1692016385)->f)(a1);
	av7 = a1;
	a1 = av7;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2792,L70);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av7;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->baseType;
	a3 = av7;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a3)->numDimensions;
	i4 = 1;
	i3 = i3 + i4;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2825,L71);

L70:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av7;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_BaseType.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	i3 = 1;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
L71:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-303484964)->f)(a1);
	av8 = a1;
	a1 = av8;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2860,L89);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av9 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(2902,L89);

L72:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2909,L73);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1015674292)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(2934,L89);

L73:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2941,L77);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-2008166658)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	i1 = 0;
	iv7 = i1;
	GOTO(2969,L76);

L74:	a1 = av6;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-239877775)->f)(a1,i2);
	av8 = a1;
	a1 = av8;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(2988,L75);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av8;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av9 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
L75:	iv7 += 1;
L76:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,1535088946)->f)(a2);
	if (i1 < i2)
		GOBACK(3042,L74);
	GOTO(3045,L89);

L77:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LengthExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3052,L79);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LengthExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3071,L78);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrIsArrayOf__SinWm.f(a1);
L78:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3107,L89);

L79:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NegExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3114,L84);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NegExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3133,L80);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
	GOTO(3165,L89);

L80:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3178,L81);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__idXk2();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3193,L89);

L81:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3206,L82);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3221,L89);

L82:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3234,L83);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__GKSua();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3249,L89);

L83:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LongConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3262,L89);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__0Qzrs();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3277,L89);

L84:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3284,L85);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av3;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av5 = a1;
	GOTO(3300,L89);

L85:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3307,L86);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av7 = a1;
	a1 = av7;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-2023966063)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getDeclaringClass__Ddy5k.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_S_0ytVQ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-2023966063)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->class->M.
		getType__NbCeK.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3376,L89);

L86:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3383,L87);
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a2)->class->M.
		getField__KS13V.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->class->M.
		getType__NbCeK.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3409,L89);

L87:	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(3416,L88);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = v__u8Teb();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	GOTO(3431,L89);

L88:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_Object*)a4)->class->M.
		getClass__zh19H.f(a4);
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

L89:	a1 = av5;
	if (a1 == 0)
		GOTO(3463,L90);
	a1 = av5;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L90:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIdentityStmt_I_6t1J8: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseIdentityStmt(Lca/mcgill/sable/soot/jimple/IdentityStmt;)V */

Class xt_caseIdentityStmt_I_6t1J8[] = { 0 };

Void caseIdentityStmt_I_6t1J8(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5, av6, av7;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1235668254)->f)(a1);
	av3 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(18,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av4 = a1;
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CaughtExceptionRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(38,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1832792848)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av5 = a1;
	a1 = av5;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	return;

L1:	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_CaughtExceptionRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,795886649)->f)(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av6 = a1;
	GOTO(84,L3);

L2:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_Type.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddChild_T_dY5SG.f(a1,a2);
L3:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(120,L2);
	a1 = av4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[4];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L4:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseEnterMonitorStmt_E_UYc5J: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/EnterMonitorStmt;)V */

Class xt_caseEnterMonitorStmt_E_UYc5J[] = { 0 };

Void caseEnterMonitorStmt_E_UYc5J(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(9,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[5];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseExitMonitorStmt_E_WDosp: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseExitMonitorStmt(Lca/mcgill/sable/soot/jimple/ExitMonitorStmt;)V */

Class xt_caseExitMonitorStmt_E_WDosp[] = { 0 };

Void caseExitMonitorStmt_E_WDosp(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(9,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[5];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGotoStmt_G_W8gF2: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseGotoStmt(Lca/mcgill/sable/soot/jimple/GotoStmt;)V */

Class xt_caseGotoStmt_G_W8gF2[] = { 0 };

Void caseGotoStmt_G_W8gF2(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M caseIfStmt_I_OcVwh: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseIfStmt(Lca/mcgill/sable/soot/jimple/IfStmt;)V */

Class xt_caseIfStmt_I_OcVwh[] = { 0 };

Void caseIfStmt_I_OcVwh(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4, av5, av6;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,560742528)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ConditionExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	av4 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1696921970)->f)(a1);
	av5 = a1;
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(33,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av4;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av6 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_EqExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(54,L1);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(61,L2);
L1:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	GOTO(84,L4);

L2:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(91,L3);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(98,L3);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(105,L3);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(112,L4);
L3:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
L4:	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(145,L8);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av5;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av6 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_EqExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(166,L5);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(173,L6);
L5:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	return;

L6:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(201,L7);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(208,L7);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(215,L7);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LtExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(222,L8);
L7:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
L8:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLookupSwitchStmt_L_SL4Xa: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/LookupSwitchStmt;)V */

Class xt_caseLookupSwitchStmt_L_SL4Xa[] = { 0 };

Void caseLookupSwitchStmt_L_SL4Xa(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1619313330)->f)(a1);
	av2 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(11,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNopStmt_N_MhO5x: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseNopStmt(Lca/mcgill/sable/soot/jimple/NopStmt;)V */

Class xt_caseNopStmt_N_MhO5x[] = { 0 };

Void caseNopStmt_N_MhO5x(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M caseRetStmt_R_QFAVi: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseRetStmt(Lca/mcgill/sable/soot/jimple/RetStmt;)V */

Class xt_caseRetStmt_R_QFAVi[] = { 0 };

Void caseRetStmt_R_QFAVi(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-367608741)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = v__u8Teb();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseReturnStmt_R_qdJ4l: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseReturnStmt(Lca/mcgill/sable/soot/jimple/ReturnStmt;)V */

Class xt_caseReturnStmt_R_qdJ4l[] = { 0 };

Void caseReturnStmt_R_qdJ4l(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-13531602)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(9,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-13531602)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a3)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a3)->currentMethod;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getReturnType__sYISd.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseReturnVoidStmt_R_AQ0ZB: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseReturnVoidStmt(Lca/mcgill/sable/soot/jimple/ReturnVoidStmt;)V */

Class xt_caseReturnVoidStmt_R_AQ0ZB[] = { 0 };

Void caseReturnVoidStmt_R_AQ0ZB(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M caseTableSwitchStmt_T_4IBwH: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseTableSwitchStmt(Lca/mcgill/sable/soot/jimple/TableSwitchStmt;)V */

Class xt_caseTableSwitchStmt_T_4IBwH[] = { 0 };

Void caseTableSwitchStmt_T_4IBwH(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1619313330)->f)(a1);
	av2 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(11,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeLong__hrYrt.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeFloat__j3rmg.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeDouble__ojkpY.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeAddress__lWATX.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrCannotBeRef__ubdjq.f(a1);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseThrowStmt_T_aXBxp: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.caseThrowStmt(Lca/mcgill/sable/soot/jimple/ThrowStmt;)V */

Class xt_caseThrowStmt_T_aXBxp[] = { 0 };

Void caseThrowStmt_T_aXBxp(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(9,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a2)->this0_oYxUV;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[4];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_S_bfuJh: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.defaultCase(Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_defaultCase_S_bfuJh[] = { 0 };

Void defaultCase_S_bfuJh(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_KfqdG[6];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_Object*)a4)->class->M.
		getClass__zh19H.f(a4);
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

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_T_SIRdI: ca.mcgill.sable.soot.jimple.TypeResolver$ConstraintCollector.<init>(Lca/mcgill/sable/soot/jimple/TypeResolver;)V */

Class xt_init_T_SIRdI[] = { 0 };

Void init_T_SIRdI(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__xmxzo(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_KfqdG*)a1)->this0_oYxUV = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_KfqdG[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r','$','C','o','n','s','t','r','a','i','n','t','C','o','l',
'l','e','c','t','o','r','U','n','h','a','n','d','l','e','d',' ','i','n',
'v','o','k','e',' ','e','x','p','r','e','s','s','i','o','n',' ','t','y',
'p','e',':',' ','U','n','h','a','n','d','l','e','d',' ','v','a','r','i',
'a','b','l','e',' ','t','y','p','e',':',' ','j','a','v','a','.','l','a',
'n','g','.','S','t','r','i','n','g','j','a','v','a','.','l','a','n','g',
'.','T','h','r','o','w','a','b','l','e','j','a','v','a','.','l','a','n',
'g','.','O','b','j','e','c','t','U','n','h','a','n','d','l','e','d',' ',
's','t','a','t','e','m','e','n','t',' ','t','y','p','e',':',' '};

const void *st_ca_mcgill_sable_soot_jimp_KfqdG[] = {
    ch_ca_mcgill_sable_soot_jimp_KfqdG+60,	/* 0. ca.mcgill.sable.soot.jimple.TypeResolver */
    ch_ca_mcgill_sable_soot_jimp_KfqdG+94,	/* 1. Unhandled invoke expression type:  */
    ch_ca_mcgill_sable_soot_jimp_KfqdG+119,	/* 2. Unhandled variable type:  */
    ch_ca_mcgill_sable_soot_jimp_KfqdG+135,	/* 3. java.lang.String */
    ch_ca_mcgill_sable_soot_jimp_KfqdG+154,	/* 4. java.lang.Throwable */
    ch_ca_mcgill_sable_soot_jimp_KfqdG+170,	/* 5. java.lang.Object */
    ch_ca_mcgill_sable_soot_jimp_KfqdG+196,	/* 6. Unhandled statement type:  */
    0};
