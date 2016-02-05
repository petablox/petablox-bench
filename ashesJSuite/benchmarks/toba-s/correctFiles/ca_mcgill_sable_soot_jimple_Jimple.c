/*  ca_mcgill_sable_soot_jimple_Jimple.c -- from Java class ca.mcgill.sable.soot.jimple.Jimple  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_BodyRepresentation.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_ConditionExprBox.h"
#include "ca_mcgill_sable_soot_jimple_IdentityRefBox.h"
#include "ca_mcgill_sable_soot_jimple_ImmediateBox.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExprBox.h"
#include "ca_mcgill_sable_soot_jimple_JAddExpr.h"
#include "ca_mcgill_sable_soot_jimple_JAndExpr.h"
#include "ca_mcgill_sable_soot_jimple_JArrayRef.h"
#include "ca_mcgill_sable_soot_jimple_JAssignStmt.h"
#include "ca_mcgill_sable_soot_jimple_JBreakpointStmt.h"
#include "ca_mcgill_sable_soot_jimple_JCastExpr.h"
#include "ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.h"
#include "ca_mcgill_sable_soot_jimple_JCmpExpr.h"
#include "ca_mcgill_sable_soot_jimple_JCmpgExpr.h"
#include "ca_mcgill_sable_soot_jimple_JCmplExpr.h"
#include "ca_mcgill_sable_soot_jimple_JDivExpr.h"
#include "ca_mcgill_sable_soot_jimple_JEnterMonitorStmt.h"
#include "ca_mcgill_sable_soot_jimple_JEqExpr.h"
#include "ca_mcgill_sable_soot_jimple_JExitMonitorStmt.h"
#include "ca_mcgill_sable_soot_jimple_JGeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JGotoStmt.h"
#include "ca_mcgill_sable_soot_jimple_JGtExpr.h"
#include "ca_mcgill_sable_soot_jimple_JIdentityStmt.h"
#include "ca_mcgill_sable_soot_jimple_JIfStmt.h"
#include "ca_mcgill_sable_soot_jimple_JInstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_JInstanceOfExpr.h"
#include "ca_mcgill_sable_soot_jimple_JInterfaceInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JInvokeStmt.h"
#include "ca_mcgill_sable_soot_jimple_JLeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JLengthExpr.h"
#include "ca_mcgill_sable_soot_jimple_JLookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_JLtExpr.h"
#include "ca_mcgill_sable_soot_jimple_JMulExpr.h"
#include "ca_mcgill_sable_soot_jimple_JNeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JNegExpr.h"
#include "ca_mcgill_sable_soot_jimple_JNewArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_JNewExpr.h"
#include "ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_JNopStmt.h"
#include "ca_mcgill_sable_soot_jimple_JOrExpr.h"
#include "ca_mcgill_sable_soot_jimple_JRemExpr.h"
#include "ca_mcgill_sable_soot_jimple_JRetStmt.h"
#include "ca_mcgill_sable_soot_jimple_JReturnStmt.h"
#include "ca_mcgill_sable_soot_jimple_JReturnVoidStmt.h"
#include "ca_mcgill_sable_soot_jimple_JShlExpr.h"
#include "ca_mcgill_sable_soot_jimple_JShrExpr.h"
#include "ca_mcgill_sable_soot_jimple_JSpecialInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JSubExpr.h"
#include "ca_mcgill_sable_soot_jimple_JTableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_JThrowStmt.h"
#include "ca_mcgill_sable_soot_jimple_JTrap.h"
#include "ca_mcgill_sable_soot_jimple_JUshrExpr.h"
#include "ca_mcgill_sable_soot_jimple_JVirtualInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JXorExpr.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_LocalBox.h"
#include "ca_mcgill_sable_soot_jimple_ParameterRef.h"
#include "ca_mcgill_sable_soot_jimple_RValueBox.h"
#include "ca_mcgill_sable_soot_jimple_StaticFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtBox.h"
#include "ca_mcgill_sable_soot_jimple_ThisRef.h"
#include "ca_mcgill_sable_soot_jimple_VariableBox.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_BodyRepresentation.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_ConditionExprBox.C,
    &cl_ca_mcgill_sable_soot_jimple_IdentityRefBox.C,
    &cl_ca_mcgill_sable_soot_jimple_ImmediateBox.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExprBox.C,
    &cl_ca_mcgill_sable_soot_jimple_JAddExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JAndExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JArrayRef.C,
    &cl_ca_mcgill_sable_soot_jimple_JAssignStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JBreakpointStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JCastExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.C,
    &cl_ca_mcgill_sable_soot_jimple_JCmpExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JCmpgExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JCmplExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JDivExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JEnterMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JEqExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JExitMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JGeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JGotoStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JGtExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JIdentityStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JIfStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_JInstanceOfExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JInterfaceInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JInvokeStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JLeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JLengthExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JLookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JLtExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JMulExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JNeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JNegExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JNewArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JNewExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JNopStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JOrExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JRemExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JRetStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JReturnStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JReturnVoidStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JShlExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JShrExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JSpecialInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JSubExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JThrowStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JTrap.C,
    &cl_ca_mcgill_sable_soot_jimple_JUshrExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JVirtualInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JXorExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_LocalBox.C,
    &cl_ca_mcgill_sable_soot_jimple_ParameterRef.C,
    &cl_ca_mcgill_sable_soot_jimple_RValueBox.C,
    &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
    &cl_ca_mcgill_sable_soot_jimple_ThisRef.C,
    &cl_ca_mcgill_sable_soot_jimple_VariableBox.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_Jimple[];
extern const void *st_ca_mcgill_sable_soot_jimple_Jimple[];
extern Class xt_init__MTb7e[];
extern Class xt_v__WbL8F[];
extern Class xt_newBody_S_inFod[];
extern Class xt_buildBodyOfFrom_SBi_LbOSp[];
extern Class xt_newXorExpr_VV_FdTYB[];
extern Class xt_newUshrExpr_VV_nbYv9[];
extern Class xt_newSubExpr_VV_t6rHK[];
extern Class xt_newShrExpr_VV_7USr6[];
extern Class xt_newShlExpr_VV_Z3Hxs[];
extern Class xt_newRemExpr_VV_PVebu[];
extern Class xt_newOrExpr_VV_Do5lF[];
extern Class xt_newNeExpr_VV_1FBI4[];
extern Class xt_newMulExpr_VV_jXO1w[];
extern Class xt_newLeExpr_VV_f80QC[];
extern Class xt_newGeExpr_VV_f7ftO[];
extern Class xt_newEqExpr_VV_rnLgP[];
extern Class xt_newDivExpr_VV_5pVe7[];
extern Class xt_newCmplExpr_VV_ZqHbU[];
extern Class xt_newCmpgExpr_VV_VvlhW[];
extern Class xt_newCmpExpr_VV_r3FPU[];
extern Class xt_newGtExpr_VV_Vfhui[];
extern Class xt_newLtExpr_VV_Vg2R6[];
extern Class xt_newAddExpr_VV_d9P1D[];
extern Class xt_newAndExpr_VV_vu8Jd[];
extern Class xt_newNegExpr_V_vFo9X[];
extern Class xt_newLengthExpr_V_TbHgT[];
extern Class xt_newCastExpr_VT_AM1Sk[];
extern Class xt_newInstanceOfExpr_VT_4PuH5[];
extern Class xt_newNewExpr_R_zYk3f[];
extern Class xt_newNewArrayExpr_TV_y7F0E[];
extern Class xt_newNewMultiArrayExpr_AL_tuLqx[];
extern Class xt_newStaticInvokeExpr_SL_uU9rl[];
extern Class xt_newSpecialInvokeExpr_LSL_4bbUn[];
extern Class xt_newVirtualInvokeExpr_LSL_OgZSl[];
extern Class xt_newInterfaceInvokeExp_LSL_83yBW[];
extern Class xt_newThrowStmt_V_f0VDI[];
extern Class xt_newExitMonitorStmt_V_FDF1h[];
extern Class xt_newEnterMonitorStmt_V_5LDIC[];
extern Class xt_newBreakpointStmt__BYvBn[];
extern Class xt_newGotoStmt_U_qRelW[];
extern Class xt_newNopStmt__PVmrT[];
extern Class xt_newReturnVoidStmt__bav3J[];
extern Class xt_newReturnStmt_V_7EEj7[];
extern Class xt_newRetStmt_V_Hjahj[];
extern Class xt_newIfStmt_VU_G1XNZ[];
extern Class xt_newIdentityStmt_VV_veFeD[];
extern Class xt_newAssignStmt_VV_VK6ax[];
extern Class xt_newInvokeStmt_V_Por4z[];
extern Class xt_newTableSwitchStmt_ViiLU_urD3h[];
extern Class xt_newLookupSwitchStmt_VLLU_8Z2Wo[];
extern Class xt_newLocal_ST_UrNI5[];
extern Class xt_newTrap_SUUU_iT5VH[];
extern Class xt_newStaticFieldRef_S_NA8MK[];
extern Class xt_newThisRef_S_7k96k[];
extern Class xt_newParameterRef_Si_1GJaU[];
extern Class xt_newInstanceFieldRef_VS_lXqxs[];
extern Class xt_newCaughtExceptionRef_J_NQePj[];
extern Class xt_newArrayRef_VV_vy9KY[];
extern Class xt_newVariableBox_V_sAbI7[];
extern Class xt_newLocalBox_V_BsxZy[];
extern Class xt_newRValueBox_V_fJ2TY[];
extern Class xt_newImmediateBox_V_7jLB8[];
extern Class xt_newArgBox_V_G9BVX[];
extern Class xt_newIdentityRefBox_V_FOSWQ[];
extern Class xt_newConditionExprBox_V_KdLXR[];
extern Class xt_newInvokeExprBox_V_TXEdu[];
extern Class xt_newStmtBox_U_e3goW[];
extern Class xt_clinit__FcYlj[];

#define HASHMASK 0x1
/*  0.  5b287c48  (0)  buildBodyOfFrom  */
/*  1.  489f8e6f  (1)  toString  */
static const struct ihash htable[3] = {
    1529379912, &cl_ca_mcgill_sable_soot_jimple_Jimple.M.buildBodyOfFrom_SBi_LbOSp,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_Jimple.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(34) nmchars = {&acl_char, 0, 34, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','i','m','p','l','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 34 };
static const Char nmcv_0[] = {
'j','i','m','p','l','e','R','e','p','r','e','s','e','n','t','a','t','i',
'o','n'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',';'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l',
'e',';'};
static const Char nmsm_1[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_1[] = {
'(',')','V'};
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
'n','e','w','B','o','d','y'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','B','o','d','y',';'};
static const Char nmim_13[] = {
'b','u','i','l','d','B','o','d','y','O','f','F','r','o','m'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','B','o','d','y',';','I',')','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','B','o','d','y',';'};
static const Char nmim_14[] = {
'n','e','w','X','o','r','E','x','p','r'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','X','o','r','E','x','p','r',
';'};
static const Char nmim_15[] = {
'n','e','w','U','s','h','r','E','x','p','r'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','s','h','r','E','x','p',
'r',';'};
static const Char nmim_16[] = {
'n','e','w','S','u','b','E','x','p','r'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','u','b','E','x','p','r',
';'};
static const Char nmim_17[] = {
'n','e','w','S','h','r','E','x','p','r'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','h','r','E','x','p','r',
';'};
static const Char nmim_18[] = {
'n','e','w','S','h','l','E','x','p','r'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','h','l','E','x','p','r',
';'};
static const Char nmim_19[] = {
'n','e','w','R','e','m','E','x','p','r'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','R','e','m','E','x','p','r',
';'};
static const Char nmim_20[] = {
'n','e','w','O','r','E','x','p','r'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','O','r','E','x','p','r',';'};
static const Char nmim_21[] = {
'n','e','w','N','e','E','x','p','r'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','N','e','E','x','p','r',';'};
static const Char nmim_22[] = {
'n','e','w','M','u','l','E','x','p','r'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','M','u','l','E','x','p','r',
';'};
static const Char nmim_23[] = {
'n','e','w','L','e','E','x','p','r'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','e','E','x','p','r',';'};
static const Char nmim_24[] = {
'n','e','w','G','e','E','x','p','r'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','G','e','E','x','p','r',';'};
static const Char nmim_25[] = {
'n','e','w','E','q','E','x','p','r'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','E','q','E','x','p','r',';'};
static const Char nmim_26[] = {
'n','e','w','D','i','v','E','x','p','r'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','D','i','v','E','x','p','r',
';'};
static const Char nmim_27[] = {
'n','e','w','C','m','p','l','E','x','p','r'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','m','p','l','E','x','p',
'r',';'};
static const Char nmim_28[] = {
'n','e','w','C','m','p','g','E','x','p','r'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','m','p','g','E','x','p',
'r',';'};
static const Char nmim_29[] = {
'n','e','w','C','m','p','E','x','p','r'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','m','p','E','x','p','r',
';'};
static const Char nmim_30[] = {
'n','e','w','G','t','E','x','p','r'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','G','t','E','x','p','r',';'};
static const Char nmim_31[] = {
'n','e','w','L','t','E','x','p','r'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','t','E','x','p','r',';'};
static const Char nmim_32[] = {
'n','e','w','A','d','d','E','x','p','r'};
static const Char sgim_32[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','d','d','E','x','p','r',
';'};
static const Char nmim_33[] = {
'n','e','w','A','n','d','E','x','p','r'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','n','d','E','x','p','r',
';'};
static const Char nmim_34[] = {
'n','e','w','N','e','g','E','x','p','r'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','g','E','x','p',
'r',';'};
static const Char nmim_35[] = {
'n','e','w','L','e','n','g','t','h','E','x','p','r'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','e','n','g','t','h',
'E','x','p','r',';'};
static const Char nmim_36[] = {
'n','e','w','C','a','s','t','E','x','p','r'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','C','a','s','t','E','x','p','r',';'};
static const Char nmim_37[] = {
'n','e','w','I','n','s','t','a','n','c','e','O','f','E','x','p','r'};
static const Char sgim_37[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','I','n','s','t','a','n','c','e','O','f','E','x','p','r',';'};
static const Char nmim_38[] = {
'n','e','w','N','e','w','E','x','p','r'};
static const Char sgim_38[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','R','e','f','T','y','p','e',';',')','L','c','a','/',
'm','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/',
'j','i','m','p','l','e','/','N','e','w','E','x','p','r',';'};
static const Char nmim_39[] = {
'n','e','w','N','e','w','A','r','r','a','y','E','x','p','r'};
static const Char sgim_39[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','V','a','l','u','e',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','N','e','w','A','r','r','a','y','E','x','p','r',';'};
static const Char nmim_40[] = {
'n','e','w','N','e','w','M','u','l','t','i','A','r','r','a','y','E','x',
'p','r'};
static const Char sgim_40[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'N','e','w','M','u','l','t','i','A','r','r','a','y','E','x','p','r',';'};
static const Char nmim_41[] = {
'n','e','w','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p',
'r'};
static const Char sgim_41[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i',
'l','/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l',
'/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e',
'/','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_42[] = {
'n','e','w','S','p','e','c','i','a','l','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_42[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'S','p','e','c','i','a','l','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_43[] = {
'n','e','w','V','i','r','t','u','a','l','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_43[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'V','i','r','t','u','a','l','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_44[] = {
'n','e','w','I','n','t','e','r','f','a','c','e','I','n','v','o','k','e',
'E','x','p','r'};
static const Char sgim_44[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'I','n','t','e','r','f','a','c','e','I','n','v','o','k','e','E','x','p',
'r',';'};
static const Char nmim_45[] = {
'n','e','w','T','h','r','o','w','S','t','m','t'};
static const Char sgim_45[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','r','o','w','S',
't','m','t',';'};
static const Char nmim_46[] = {
'n','e','w','E','x','i','t','M','o','n','i','t','o','r','S','t','m','t'};
static const Char sgim_46[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','x','i','t','M','o',
'n','i','t','o','r','S','t','m','t',';'};
static const Char nmim_47[] = {
'n','e','w','E','n','t','e','r','M','o','n','i','t','o','r','S','t','m',
't'};
static const Char sgim_47[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','n','t','e','r','M',
'o','n','i','t','o','r','S','t','m','t',';'};
static const Char nmim_48[] = {
'n','e','w','B','r','e','a','k','p','o','i','n','t','S','t','m','t'};
static const Char sgim_48[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','B','r','e','a','k',
'p','o','i','n','t','S','t','m','t',';'};
static const Char nmim_49[] = {
'n','e','w','G','o','t','o','S','t','m','t'};
static const Char sgim_49[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','G','o','t','o','S','t','m',
't',';'};
static const Char nmim_50[] = {
'n','e','w','N','o','p','S','t','m','t'};
static const Char sgim_50[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S','t',
'm','t',';'};
static const Char nmim_51[] = {
'n','e','w','R','e','t','u','r','n','V','o','i','d','S','t','m','t'};
static const Char sgim_51[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r',
'n','V','o','i','d','S','t','m','t',';'};
static const Char nmim_52[] = {
'n','e','w','R','e','t','u','r','n','S','t','m','t'};
static const Char sgim_52[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'S','t','m','t',';'};
static const Char nmim_53[] = {
'n','e','w','R','e','t','S','t','m','t'};
static const Char sgim_53[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S','t','m',
't',';'};
static const Char nmim_54[] = {
'n','e','w','I','f','S','t','m','t'};
static const Char sgim_54[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','I','f','S','t','m','t',';'};
static const Char nmim_55[] = {
'n','e','w','I','d','e','n','t','i','t','y','S','t','m','t'};
static const Char sgim_55[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','I','d','e','n','t','i','t',
'y','S','t','m','t',';'};
static const Char nmim_56[] = {
'n','e','w','A','s','s','i','g','n','S','t','m','t'};
static const Char sgim_56[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','s','s','i','g','n','S',
't','m','t',';'};
static const Char nmim_57[] = {
'n','e','w','I','n','v','o','k','e','S','t','m','t'};
static const Char sgim_57[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'S','t','m','t',';'};
static const Char nmim_58[] = {
'n','e','w','T','a','b','l','e','S','w','i','t','c','h','S','t','m','t'};
static const Char sgim_58[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'I','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','U','n','i','t',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','T','a','b','l','e','S','w','i','t','c','h','S','t','m','t',
';'};
static const Char nmim_59[] = {
'n','e','w','L','o','o','k','u','p','S','w','i','t','c','h','S','t','m',
't'};
static const Char sgim_59[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','u','t','i','l','/','L','i','s','t',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','L','o','o','k','u','p','S','w',
'i','t','c','h','S','t','m','t',';'};
static const Char nmim_60[] = {
'n','e','w','L','o','c','a','l'};
static const Char sgim_60[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','L','o','c','a','l',';'};
static const Char nmim_61[] = {
'n','e','w','T','r','a','p'};
static const Char sgim_61[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','U','n','i','t',';','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j',
'i','m','p','l','e','/','U','n','i','t',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','U','n','i','t',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','T','r','a','p',';'};
static const Char nmim_62[] = {
'n','e','w','S','t','a','t','i','c','F','i','e','l','d','R','e','f'};
static const Char sgim_62[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','S','t','a','t','i','c','F','i','e',
'l','d','R','e','f',';'};
static const Char nmim_63[] = {
'n','e','w','T','h','i','s','R','e','f'};
static const Char sgim_63[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','T','h','i','s','R','e','f',';'};
static const Char nmim_64[] = {
'n','e','w','P','a','r','a','m','e','t','e','r','R','e','f'};
static const Char sgim_64[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','I',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','P','a','r','a','m','e','t',
'e','r','R','e','f',';'};
static const Char nmim_65[] = {
'n','e','w','I','n','s','t','a','n','c','e','F','i','e','l','d','R','e',
'f'};
static const Char sgim_65[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','I','n','s','t','a','n','c','e','F','i',
'e','l','d','R','e','f',';'};
static const Char nmim_66[] = {
'n','e','w','C','a','u','g','h','t','E','x','c','e','p','t','i','o','n',
'R','e','f'};
static const Char sgim_66[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','C',
'a','u','g','h','t','E','x','c','e','p','t','i','o','n','R','e','f',';'};
static const Char nmim_67[] = {
'n','e','w','A','r','r','a','y','R','e','f'};
static const Char sgim_67[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','r','r','a','y','R','e',
'f',';'};
static const Char nmim_68[] = {
'n','e','w','V','a','r','i','a','b','l','e','B','o','x'};
static const Char sgim_68[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_69[] = {
'n','e','w','L','o','c','a','l','B','o','x'};
static const Char sgim_69[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_70[] = {
'n','e','w','R','V','a','l','u','e','B','o','x'};
static const Char sgim_70[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_71[] = {
'n','e','w','I','m','m','e','d','i','a','t','e','B','o','x'};
static const Char sgim_71[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_72[] = {
'n','e','w','A','r','g','B','o','x'};
static const Char sgim_72[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_73[] = {
'n','e','w','I','d','e','n','t','i','t','y','R','e','f','B','o','x'};
static const Char sgim_73[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_74[] = {
'n','e','w','C','o','n','d','i','t','i','o','n','E','x','p','r','B','o',
'x'};
static const Char sgim_74[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_75[] = {
'n','e','w','I','n','v','o','k','e','E','x','p','r','B','o','x'};
static const Char sgim_75[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_76[] = {
'n','e','w','S','t','m','t','B','o','x'};
static const Char sgim_76[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',
';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_Jimple.V.jimpleRepresentation,(const Char *)&nmcv_0,20,(const Char *)&sgcv_0,36,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v__WbL8F,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,38,
	1,0x9,1,xt_v__WbL8F},
    {TMIT_native_code, (Void(*)())clinit__FcYlj,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,67,xt_clinit__FcYlj},
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
} inr_ca_mcgill_sable_soot_jimple_Jimple = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_Jimple.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_Jimple cl_ca_mcgill_sable_soot_jimple_Jimple = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_Jimple),
    77,
    2,
    0,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    64, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_Jimple,
    st_ca_mcgill_sable_soot_jimple_Jimple,
    clinit__FcYlj,
    init__MTb7e,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_Jimple,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__MTb7e,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x4,0,xt_init__MTb7e},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x1,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8wJNW,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x101,6,0},
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
	{TMIT_native_code, newBody_S_inFod,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,62,1,0x1,2,xt_newBody_S_inFod},
	{TMIT_native_code, buildBodyOfFrom_SBi_LbOSp,(const Char *)&nmim_13,15,
	(const Char *)&sgim_13,90,1,0x8001,3,xt_buildBodyOfFrom_SBi_LbOSp},
	{TMIT_native_code, newXorExpr_VV_FdTYB,(const Char *)&nmim_14,10,
	(const Char *)&sgim_14,109,1,0x1,4,xt_newXorExpr_VV_FdTYB},
	{TMIT_native_code, newUshrExpr_VV_nbYv9,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,110,1,0x1,5,xt_newUshrExpr_VV_nbYv9},
	{TMIT_native_code, newSubExpr_VV_t6rHK,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,109,1,0x1,6,xt_newSubExpr_VV_t6rHK},
	{TMIT_native_code, newShrExpr_VV_7USr6,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,109,1,0x1,7,xt_newShrExpr_VV_7USr6},
	{TMIT_native_code, newShlExpr_VV_Z3Hxs,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,109,1,0x1,8,xt_newShlExpr_VV_Z3Hxs},
	{TMIT_native_code, newRemExpr_VV_PVebu,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,109,1,0x1,9,xt_newRemExpr_VV_PVebu},
	{TMIT_native_code, newOrExpr_VV_Do5lF,(const Char *)&nmim_20,9,
	(const Char *)&sgim_20,108,1,0x1,10,xt_newOrExpr_VV_Do5lF},
	{TMIT_native_code, newNeExpr_VV_1FBI4,(const Char *)&nmim_21,9,
	(const Char *)&sgim_21,108,1,0x1,11,xt_newNeExpr_VV_1FBI4},
	{TMIT_native_code, newMulExpr_VV_jXO1w,(const Char *)&nmim_22,10,
	(const Char *)&sgim_22,109,1,0x1,12,xt_newMulExpr_VV_jXO1w},
	{TMIT_native_code, newLeExpr_VV_f80QC,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,108,1,0x1,13,xt_newLeExpr_VV_f80QC},
	{TMIT_native_code, newGeExpr_VV_f7ftO,(const Char *)&nmim_24,9,
	(const Char *)&sgim_24,108,1,0x1,14,xt_newGeExpr_VV_f7ftO},
	{TMIT_native_code, newEqExpr_VV_rnLgP,(const Char *)&nmim_25,9,
	(const Char *)&sgim_25,108,1,0x1,15,xt_newEqExpr_VV_rnLgP},
	{TMIT_native_code, newDivExpr_VV_5pVe7,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,109,1,0x1,16,xt_newDivExpr_VV_5pVe7},
	{TMIT_native_code, newCmplExpr_VV_ZqHbU,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,110,1,0x1,17,xt_newCmplExpr_VV_ZqHbU},
	{TMIT_native_code, newCmpgExpr_VV_VvlhW,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,110,1,0x1,18,xt_newCmpgExpr_VV_VvlhW},
	{TMIT_native_code, newCmpExpr_VV_r3FPU,(const Char *)&nmim_29,10,
	(const Char *)&sgim_29,109,1,0x1,19,xt_newCmpExpr_VV_r3FPU},
	{TMIT_native_code, newGtExpr_VV_Vfhui,(const Char *)&nmim_30,9,
	(const Char *)&sgim_30,108,1,0x1,20,xt_newGtExpr_VV_Vfhui},
	{TMIT_native_code, newLtExpr_VV_Vg2R6,(const Char *)&nmim_31,9,
	(const Char *)&sgim_31,108,1,0x1,21,xt_newLtExpr_VV_Vg2R6},
	{TMIT_native_code, newAddExpr_VV_d9P1D,(const Char *)&nmim_32,10,
	(const Char *)&sgim_32,109,1,0x1,22,xt_newAddExpr_VV_d9P1D},
	{TMIT_native_code, newAndExpr_VV_vu8Jd,(const Char *)&nmim_33,10,
	(const Char *)&sgim_33,109,1,0x1,23,xt_newAndExpr_VV_vu8Jd},
	{TMIT_native_code, newNegExpr_V_vFo9X,(const Char *)&nmim_34,10,
	(const Char *)&sgim_34,74,1,0x1,24,xt_newNegExpr_V_vFo9X},
	{TMIT_native_code, newLengthExpr_V_TbHgT,(const Char *)&nmim_35,13,
	(const Char *)&sgim_35,77,1,0x1,25,xt_newLengthExpr_V_TbHgT},
	{TMIT_native_code, newCastExpr_VT_AM1Sk,(const Char *)&nmim_36,11,
	(const Char *)&sgim_36,102,1,0x1,26,xt_newCastExpr_VT_AM1Sk},
	{TMIT_native_code, newInstanceOfExpr_VT_4PuH5,(const Char *)&nmim_37,17,
	(const Char *)&sgim_37,108,1,0x1,27,xt_newInstanceOfExpr_VT_4PuH5},
	{TMIT_native_code, newNewExpr_R_zYk3f,(const Char *)&nmim_38,10,
	(const Char *)&sgim_38,69,1,0x1,28,xt_newNewExpr_R_zYk3f},
	{TMIT_native_code, newNewArrayExpr_TV_y7F0E,(const Char *)&nmim_39,15,
	(const Char *)&sgim_39,106,1,0x1,29,xt_newNewArrayExpr_TV_y7F0E},
	{TMIT_native_code, newNewMultiArrayExpr_AL_tuLqx,(const Char *)&nmim_40,20,
	(const Char *)&sgim_40,108,1,0x1,30,xt_newNewMultiArrayExpr_AL_tuLqx},
	{TMIT_native_code, newStaticInvokeExpr_SL_uU9rl,(const Char *)&nmim_41,19,
	(const Char *)&sgim_41,108,1,0x1,31,xt_newStaticInvokeExpr_SL_uU9rl},
	{TMIT_native_code, newSpecialInvokeExpr_LSL_4bbUn,(const Char *)&nmim_42,20,
	(const Char *)&sgim_42,144,1,0x1,32,xt_newSpecialInvokeExpr_LSL_4bbUn},
	{TMIT_native_code, newVirtualInvokeExpr_LSL_OgZSl,(const Char *)&nmim_43,20,
	(const Char *)&sgim_43,144,1,0x1,33,xt_newVirtualInvokeExpr_LSL_OgZSl},
	{TMIT_native_code, newInterfaceInvokeExp_LSL_83yBW,(const Char *)&nmim_44,22,
	(const Char *)&sgim_44,146,1,0x1,34,xt_newInterfaceInvokeExp_LSL_83yBW},
	{TMIT_native_code, newThrowStmt_V_f0VDI,(const Char *)&nmim_45,12,
	(const Char *)&sgim_45,76,1,0x1,35,xt_newThrowStmt_V_f0VDI},
	{TMIT_native_code, newExitMonitorStmt_V_FDF1h,(const Char *)&nmim_46,18,
	(const Char *)&sgim_46,82,1,0x1,36,xt_newExitMonitorStmt_V_FDF1h},
	{TMIT_native_code, newEnterMonitorStmt_V_5LDIC,(const Char *)&nmim_47,19,
	(const Char *)&sgim_47,83,1,0x1,37,xt_newEnterMonitorStmt_V_5LDIC},
	{TMIT_native_code, newBreakpointStmt__BYvBn,(const Char *)&nmim_48,17,
	(const Char *)&sgim_48,46,1,0x1,38,xt_newBreakpointStmt__BYvBn},
	{TMIT_native_code, newGotoStmt_U_qRelW,(const Char *)&nmim_49,11,
	(const Char *)&sgim_49,74,1,0x1,39,xt_newGotoStmt_U_qRelW},
	{TMIT_native_code, newNopStmt__PVmrT,(const Char *)&nmim_50,10,
	(const Char *)&sgim_50,39,1,0x1,40,xt_newNopStmt__PVmrT},
	{TMIT_native_code, newReturnVoidStmt__bav3J,(const Char *)&nmim_51,17,
	(const Char *)&sgim_51,46,1,0x1,41,xt_newReturnVoidStmt__bav3J},
	{TMIT_native_code, newReturnStmt_V_7EEj7,(const Char *)&nmim_52,13,
	(const Char *)&sgim_52,77,1,0x1,42,xt_newReturnStmt_V_7EEj7},
	{TMIT_native_code, newRetStmt_V_Hjahj,(const Char *)&nmim_53,10,
	(const Char *)&sgim_53,74,1,0x1,43,xt_newRetStmt_V_Hjahj},
	{TMIT_native_code, newIfStmt_VU_G1XNZ,(const Char *)&nmim_54,9,
	(const Char *)&sgim_54,107,1,0x1,44,xt_newIfStmt_VU_G1XNZ},
	{TMIT_native_code, newIdentityStmt_VV_veFeD,(const Char *)&nmim_55,15,
	(const Char *)&sgim_55,114,1,0x1,45,xt_newIdentityStmt_VV_veFeD},
	{TMIT_native_code, newAssignStmt_VV_VK6ax,(const Char *)&nmim_56,13,
	(const Char *)&sgim_56,112,1,0x1,46,xt_newAssignStmt_VV_VK6ax},
	{TMIT_native_code, newInvokeStmt_V_Por4z,(const Char *)&nmim_57,13,
	(const Char *)&sgim_57,77,1,0x1,47,xt_newInvokeStmt_V_Por4z},
	{TMIT_native_code, newTableSwitchStmt_ViiLU_urD3h,(const Char *)&nmim_58,18,
	(const Char *)&sgim_58,145,1,0x1,48,xt_newTableSwitchStmt_ViiLU_urD3h},
	{TMIT_native_code, newLookupSwitchStmt_VLLU_8Z2Wo,(const Char *)&nmim_59,19,
	(const Char *)&sgim_59,171,1,0x1,49,xt_newLookupSwitchStmt_VLLU_8Z2Wo},
	{TMIT_native_code, newLocal_ST_UrNI5,(const Char *)&nmim_60,8,
	(const Char *)&sgim_60,82,1,0x1,50,xt_newLocal_ST_UrNI5},
	{TMIT_native_code, newTrap_SUUU_iT5VH,(const Char *)&nmim_61,7,
	(const Char *)&sgim_61,170,1,0x1,51,xt_newTrap_SUUU_iT5VH},
	{TMIT_native_code, newStaticFieldRef_S_NA8MK,(const Char *)&nmim_62,17,
	(const Char *)&sgim_62,78,1,0x1,52,xt_newStaticFieldRef_S_NA8MK},
	{TMIT_native_code, newThisRef_S_7k96k,(const Char *)&nmim_63,10,
	(const Char *)&sgim_63,71,1,0x1,53,xt_newThisRef_S_7k96k},
	{TMIT_native_code, newParameterRef_Si_1GJaU,(const Char *)&nmim_64,15,
	(const Char *)&sgim_64,78,1,0x1,54,xt_newParameterRef_Si_1GJaU},
	{TMIT_native_code, newInstanceFieldRef_VS_lXqxs,(const Char *)&nmim_65,19,
	(const Char *)&sgim_65,115,1,0x1,55,xt_newInstanceFieldRef_VS_lXqxs},
	{TMIT_native_code, newCaughtExceptionRef_J_NQePj,(const Char *)&nmim_66,21,
	(const Char *)&sgim_66,90,1,0x1,56,xt_newCaughtExceptionRef_J_NQePj},
	{TMIT_native_code, newArrayRef_VV_vy9KY,(const Char *)&nmim_67,11,
	(const Char *)&sgim_67,110,1,0x1,57,xt_newArrayRef_VV_vy9KY},
	{TMIT_native_code, newVariableBox_V_sAbI7,(const Char *)&nmim_68,14,
	(const Char *)&sgim_68,75,1,0x1,58,xt_newVariableBox_V_sAbI7},
	{TMIT_native_code, newLocalBox_V_BsxZy,(const Char *)&nmim_69,11,
	(const Char *)&sgim_69,75,1,0x1,59,xt_newLocalBox_V_BsxZy},
	{TMIT_native_code, newRValueBox_V_fJ2TY,(const Char *)&nmim_70,12,
	(const Char *)&sgim_70,75,1,0x1,60,xt_newRValueBox_V_fJ2TY},
	{TMIT_native_code, newImmediateBox_V_7jLB8,(const Char *)&nmim_71,15,
	(const Char *)&sgim_71,75,1,0x1,61,xt_newImmediateBox_V_7jLB8},
	{TMIT_native_code, newArgBox_V_G9BVX,(const Char *)&nmim_72,9,
	(const Char *)&sgim_72,75,1,0x1,62,xt_newArgBox_V_G9BVX},
	{TMIT_native_code, newIdentityRefBox_V_FOSWQ,(const Char *)&nmim_73,17,
	(const Char *)&sgim_73,75,1,0x1,63,xt_newIdentityRefBox_V_FOSWQ},
	{TMIT_native_code, newConditionExprBox_V_KdLXR,(const Char *)&nmim_74,19,
	(const Char *)&sgim_74,75,1,0x1,64,xt_newConditionExprBox_V_KdLXR},
	{TMIT_native_code, newInvokeExprBox_V_TXEdu,(const Char *)&nmim_75,16,
	(const Char *)&sgim_75,75,1,0x1,65,xt_newInvokeExprBox_V_TXEdu},
	{TMIT_native_code, newStmtBox_U_e3goW,(const Char *)&nmim_76,10,
	(const Char *)&sgim_76,73,1,0x1,66,xt_newStmtBox_U_e3goW},
    } /* end of methodsigs */
};


/*M init__MTb7e: ca.mcgill.sable.soot.jimple.Jimple.<init>()V */

Class xt_init__MTb7e[] = { 0 };

Void init__MTb7e(Object p0)
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

/*M v__WbL8F: ca.mcgill.sable.soot.jimple.Jimple.v()Lca/mcgill/sable/soot/jimple/Jimple; */

Class xt_v__WbL8F[] = { 0 };

Object v__WbL8F(void)
{
Object a0, a1;
PROLOGUE;


	if (cl_ca_mcgill_sable_soot_jimple_Jimple.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_Jimple.C);

L0:	a1 = cl_ca_mcgill_sable_soot_jimple_Jimple.V.jimpleRepresentation;
	return a1;

	/*NOTREACHED*/
}

/*M newBody_S_inFod: ca.mcgill.sable.soot.jimple.Jimple.newBody(Lca/mcgill/sable/soot/SootMethod;)Lca/mcgill/sable/soot/Body; */

Class xt_newBody_S_inFod[] = { 0 };

Object newBody_S_inFod(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JimpleBody.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_77afC(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M buildBodyOfFrom_SBi_LbOSp: ca.mcgill.sable.soot.jimple.Jimple.buildBodyOfFrom(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/soot/Body;I)Lca/mcgill/sable/soot/Body; */

Class xt_buildBodyOfFrom_SBi_LbOSp[] = { 0 };

Object buildBodyOfFrom_SBi_LbOSp(Object p0, Object p1, Object p2, Int p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JimpleBody.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	i5 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SBi_zoaC2(a2,a3,a4,i5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newXorExpr_VV_FdTYB: ca.mcgill.sable.soot.jimple.Jimple.newXorExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/XorExpr; */

Class xt_newXorExpr_VV_FdTYB[] = { 0 };

Object newXorExpr_VV_FdTYB(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JXorExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_xYsin(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newUshrExpr_VV_nbYv9: ca.mcgill.sable.soot.jimple.Jimple.newUshrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/UshrExpr; */

Class xt_newUshrExpr_VV_nbYv9[] = { 0 };

Object newUshrExpr_VV_nbYv9(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JUshrExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_iy1sw(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newSubExpr_VV_t6rHK: ca.mcgill.sable.soot.jimple.Jimple.newSubExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/SubExpr; */

Class xt_newSubExpr_VV_t6rHK[] = { 0 };

Object newSubExpr_VV_t6rHK(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JSubExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_kLjoO(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newShrExpr_VV_7USr6: ca.mcgill.sable.soot.jimple.Jimple.newShrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ShrExpr; */

Class xt_newShrExpr_VV_7USr6[] = { 0 };

Object newShrExpr_VV_7USr6(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JShrExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_X2yl9(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newShlExpr_VV_Z3Hxs: ca.mcgill.sable.soot.jimple.Jimple.newShlExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ShlExpr; */

Class xt_newShlExpr_VV_Z3Hxs[] = { 0 };

Object newShlExpr_VV_Z3Hxs(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JShlExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_zj1TC(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newRemExpr_VV_PVebu: ca.mcgill.sable.soot.jimple.Jimple.newRemExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/RemExpr; */

Class xt_newRemExpr_VV_PVebu[] = { 0 };

Object newRemExpr_VV_PVebu(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JRemExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_0KGGB(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newOrExpr_VV_Do5lF: ca.mcgill.sable.soot.jimple.Jimple.newOrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/OrExpr; */

Class xt_newOrExpr_VV_Do5lF[] = { 0 };

Object newOrExpr_VV_Do5lF(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JOrExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_FmPbT(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNeExpr_VV_1FBI4: ca.mcgill.sable.soot.jimple.Jimple.newNeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NeExpr; */

Class xt_newNeExpr_VV_1FBI4[] = { 0 };

Object newNeExpr_VV_1FBI4(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JNeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_JeS6l(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newMulExpr_VV_jXO1w: ca.mcgill.sable.soot.jimple.Jimple.newMulExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/MulExpr; */

Class xt_newMulExpr_VV_jXO1w[] = { 0 };

Object newMulExpr_VV_jXO1w(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JMulExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_Izowy(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLeExpr_VV_f80QC: ca.mcgill.sable.soot.jimple.Jimple.newLeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LeExpr; */

Class xt_newLeExpr_VV_f80QC[] = { 0 };

Object newLeExpr_VV_f80QC(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JLeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_ZPL3y(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newGeExpr_VV_f7ftO: ca.mcgill.sable.soot.jimple.Jimple.newGeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/GeExpr; */

Class xt_newGeExpr_VV_f7ftO[] = { 0 };

Object newGeExpr_VV_f7ftO(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JGeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_c2g6L(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newEqExpr_VV_rnLgP: ca.mcgill.sable.soot.jimple.Jimple.newEqExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/EqExpr; */

Class xt_newEqExpr_VV_rnLgP[] = { 0 };

Object newEqExpr_VV_rnLgP(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JEqExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_e6dY0(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newDivExpr_VV_5pVe7: ca.mcgill.sable.soot.jimple.Jimple.newDivExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/DivExpr; */

Class xt_newDivExpr_VV_5pVe7[] = { 0 };

Object newDivExpr_VV_5pVe7(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JDivExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_xvjAB(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCmplExpr_VV_ZqHbU: ca.mcgill.sable.soot.jimple.Jimple.newCmplExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmplExpr; */

Class xt_newCmplExpr_VV_ZqHbU[] = { 0 };

Object newCmplExpr_VV_ZqHbU(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JCmplExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_UE0nc(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCmpgExpr_VV_VvlhW: ca.mcgill.sable.soot.jimple.Jimple.newCmpgExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmpgExpr; */

Class xt_newCmpgExpr_VV_VvlhW[] = { 0 };

Object newCmpgExpr_VV_VvlhW(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JCmpgExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_rMjSE(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCmpExpr_VV_r3FPU: ca.mcgill.sable.soot.jimple.Jimple.newCmpExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmpExpr; */

Class xt_newCmpExpr_VV_r3FPU[] = { 0 };

Object newCmpExpr_VV_r3FPU(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JCmpExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_cyeYE(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newGtExpr_VV_Vfhui: ca.mcgill.sable.soot.jimple.Jimple.newGtExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/GtExpr; */

Class xt_newGtExpr_VV_Vfhui[] = { 0 };

Object newGtExpr_VV_Vfhui(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JGtExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_BFkAn(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLtExpr_VV_Vg2R6: ca.mcgill.sable.soot.jimple.Jimple.newLtExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LtExpr; */

Class xt_newLtExpr_VV_Vg2R6[] = { 0 };

Object newLtExpr_VV_Vg2R6(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JLtExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_otQxa(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newAddExpr_VV_d9P1D: ca.mcgill.sable.soot.jimple.Jimple.newAddExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AddExpr; */

Class xt_newAddExpr_VV_d9P1D[] = { 0 };

Object newAddExpr_VV_d9P1D(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JAddExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_pPqOB(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newAndExpr_VV_vu8Jd: ca.mcgill.sable.soot.jimple.Jimple.newAndExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AndExpr; */

Class xt_newAndExpr_VV_vu8Jd[] = { 0 };

Object newAndExpr_VV_vu8Jd(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JAndExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_ZqsJb(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNegExpr_V_vFo9X: ca.mcgill.sable.soot.jimple.Jimple.newNegExpr(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NegExpr; */

Class xt_newNegExpr_V_vFo9X[] = { 0 };

Object newNegExpr_V_vFo9X(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JNegExpr.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_09S9X(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLengthExpr_V_TbHgT: ca.mcgill.sable.soot.jimple.Jimple.newLengthExpr(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LengthExpr; */

Class xt_newLengthExpr_V_TbHgT[] = { 0 };

Object newLengthExpr_V_TbHgT(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JLengthExpr.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_yvlWT(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCastExpr_VT_AM1Sk: ca.mcgill.sable.soot.jimple.Jimple.newCastExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/CastExpr; */

Class xt_newCastExpr_VT_AM1Sk[] = { 0 };

Object newCastExpr_VT_AM1Sk(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JCastExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VT_YjbyI(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInstanceOfExpr_VT_4PuH5: ca.mcgill.sable.soot.jimple.Jimple.newInstanceOfExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/InstanceOfExpr; */

Class xt_newInstanceOfExpr_VT_4PuH5[] = { 0 };

Object newInstanceOfExpr_VT_4PuH5(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JInstanceOfExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VT_PCcqa(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNewExpr_R_zYk3f: ca.mcgill.sable.soot.jimple.Jimple.newNewExpr(Lca/mcgill/sable/soot/RefType;)Lca/mcgill/sable/soot/jimple/NewExpr; */

Class xt_newNewExpr_R_zYk3f[] = { 0 };

Object newNewExpr_R_zYk3f(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JNewExpr.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_R_4QvnS(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNewArrayExpr_TV_y7F0E: ca.mcgill.sable.soot.jimple.Jimple.newNewArrayExpr(Lca/mcgill/sable/soot/Type;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NewArrayExpr; */

Class xt_newNewArrayExpr_TV_y7F0E[] = { 0 };

Object newNewArrayExpr_TV_y7F0E(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JNewArrayExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_TV_iHj7Y(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNewMultiArrayExpr_AL_tuLqx: ca.mcgill.sable.soot.jimple.Jimple.newNewMultiArrayExpr(Lca/mcgill/sable/soot/ArrayType;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr; */

Class xt_newNewMultiArrayExpr_AL_tuLqx[] = { 0 };

Object newNewMultiArrayExpr_AL_tuLqx(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_AL_kP37g(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newStaticInvokeExpr_SL_uU9rl: ca.mcgill.sable.soot.jimple.Jimple.newStaticInvokeExpr(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/StaticInvokeExpr; */

Class xt_newStaticInvokeExpr_SL_uU9rl[] = { 0 };

Object newStaticInvokeExpr_SL_uU9rl(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JStaticInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SL_1cUTH(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newSpecialInvokeExpr_LSL_4bbUn: ca.mcgill.sable.soot.jimple.Jimple.newSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr; */

Class xt_newSpecialInvokeExpr_LSL_4bbUn[] = { 0 };

Object newSpecialInvokeExpr_LSL_4bbUn(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JSpecialInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_LSL_clSC3(a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newVirtualInvokeExpr_LSL_OgZSl: ca.mcgill.sable.soot.jimple.Jimple.newVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr; */

Class xt_newVirtualInvokeExpr_LSL_OgZSl[] = { 0 };

Object newVirtualInvokeExpr_LSL_OgZSl(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JVirtualInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VSL_SAU08(a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInterfaceInvokeExp_LSL_83yBW: ca.mcgill.sable.soot.jimple.Jimple.newInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr; */

Class xt_newInterfaceInvokeExp_LSL_83yBW[] = { 0 };

Object newInterfaceInvokeExp_LSL_83yBW(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JInterfaceInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VSL_27k8h(a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newThrowStmt_V_f0VDI: ca.mcgill.sable.soot.jimple.Jimple.newThrowStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ThrowStmt; */

Class xt_newThrowStmt_V_f0VDI[] = { 0 };

Object newThrowStmt_V_f0VDI(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JThrowStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_zMeaH(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newExitMonitorStmt_V_FDF1h: ca.mcgill.sable.soot.jimple.Jimple.newExitMonitorStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ExitMonitorStmt; */

Class xt_newExitMonitorStmt_V_FDF1h[] = { 0 };

Object newExitMonitorStmt_V_FDF1h(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JExitMonitorStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_JUdNZ(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newEnterMonitorStmt_V_5LDIC: ca.mcgill.sable.soot.jimple.Jimple.newEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/EnterMonitorStmt; */

Class xt_newEnterMonitorStmt_V_5LDIC[] = { 0 };

Object newEnterMonitorStmt_V_5LDIC(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JEnterMonitorStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_vqcnL(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newBreakpointStmt__BYvBn: ca.mcgill.sable.soot.jimple.Jimple.newBreakpointStmt()Lca/mcgill/sable/soot/jimple/BreakpointStmt; */

Class xt_newBreakpointStmt__BYvBn[] = { 0 };

Object newBreakpointStmt__BYvBn(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JBreakpointStmt.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__k50RJ(a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newGotoStmt_U_qRelW: ca.mcgill.sable.soot.jimple.Jimple.newGotoStmt(Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/GotoStmt; */

Class xt_newGotoStmt_U_qRelW[] = { 0 };

Object newGotoStmt_U_qRelW(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JGotoStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_U_jWd2B(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNopStmt__PVmrT: ca.mcgill.sable.soot.jimple.Jimple.newNopStmt()Lca/mcgill/sable/soot/jimple/NopStmt; */

Class xt_newNopStmt__PVmrT[] = { 0 };

Object newNopStmt__PVmrT(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JNopStmt.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__M21lM(a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newReturnVoidStmt__bav3J: ca.mcgill.sable.soot.jimple.Jimple.newReturnVoidStmt()Lca/mcgill/sable/soot/jimple/ReturnVoidStmt; */

Class xt_newReturnVoidStmt__bav3J[] = { 0 };

Object newReturnVoidStmt__bav3J(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JReturnVoidStmt.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__b3hEN(a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newReturnStmt_V_7EEj7: ca.mcgill.sable.soot.jimple.Jimple.newReturnStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ReturnStmt; */

Class xt_newReturnStmt_V_7EEj7[] = { 0 };

Object newReturnStmt_V_7EEj7(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JReturnStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_BSSdX(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newRetStmt_V_Hjahj: ca.mcgill.sable.soot.jimple.Jimple.newRetStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/RetStmt; */

Class xt_newRetStmt_V_Hjahj[] = { 0 };

Object newRetStmt_V_Hjahj(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JRetStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_ySmXs(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIfStmt_VU_G1XNZ: ca.mcgill.sable.soot.jimple.Jimple.newIfStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/IfStmt; */

Class xt_newIfStmt_VU_G1XNZ[] = { 0 };

Object newIfStmt_VU_G1XNZ(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JIfStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VU_HPV8w(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIdentityStmt_VV_veFeD: ca.mcgill.sable.soot.jimple.Jimple.newIdentityStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/IdentityStmt; */

Class xt_newIdentityStmt_VV_veFeD[] = { 0 };

Object newIdentityStmt_VV_veFeD(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JIdentityStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_BNNZg(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newAssignStmt_VV_VK6ax: ca.mcgill.sable.soot.jimple.Jimple.newAssignStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AssignStmt; */

Class xt_newAssignStmt_VV_VK6ax[] = { 0 };

Object newAssignStmt_VV_VK6ax(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JAssignStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_YOuMg(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInvokeStmt_V_Por4z: ca.mcgill.sable.soot.jimple.Jimple.newInvokeStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/InvokeStmt; */

Class xt_newInvokeStmt_V_Por4z[] = { 0 };

Object newInvokeStmt_V_Por4z(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JInvokeStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_BWOej(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newTableSwitchStmt_ViiLU_urD3h: ca.mcgill.sable.soot.jimple.Jimple.newTableSwitchStmt(Lca/mcgill/sable/soot/jimple/Value;IILca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/TableSwitchStmt; */

Class xt_newTableSwitchStmt_ViiLU_urD3h[] = { 0 };

Object newTableSwitchStmt_ViiLU_urD3h(Object p0, Object p1, Int p2, Int p3, Object p4, Object p5)
{
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1, av4, av5;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Int iv2, iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	iv3 = p3;
	av4 = p4;
	av5 = p5;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.C);
	a2 = a1;
	a3 = av1;
	i4 = iv2;
	i5 = iv3;
	a6 = av4;
	a7 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ViiLU_cSuGo(a2,a3,i4,i5,a6,a7);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLookupSwitchStmt_VLLU_8Z2Wo: ca.mcgill.sable.soot.jimple.Jimple.newLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/util/List;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/LookupSwitchStmt; */

Class xt_newLookupSwitchStmt_VLLU_8Z2Wo[] = { 0 };

Object newLookupSwitchStmt_VLLU_8Z2Wo(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JLookupSwitchStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	a6 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VLLU_o9PfI(a2,a3,a4,a5,a6);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLocal_ST_UrNI5: ca.mcgill.sable.soot.jimple.Jimple.newLocal(Ljava/lang/String;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_newLocal_ST_UrNI5[] = { 0 };

Object newLocal_ST_UrNI5(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_Local.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ST_lD6h0(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newTrap_SUUU_iT5VH: ca.mcgill.sable.soot.jimple.Jimple.newTrap(Lca/mcgill/sable/soot/SootClass;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/Trap; */

Class xt_newTrap_SUUU_iT5VH[] = { 0 };

Object newTrap_SUUU_iT5VH(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JTrap.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	a6 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SUUU_73sF9(a2,a3,a4,a5,a6);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newStaticFieldRef_S_NA8MK: ca.mcgill.sable.soot.jimple.Jimple.newStaticFieldRef(Lca/mcgill/sable/soot/SootField;)Lca/mcgill/sable/soot/jimple/StaticFieldRef; */

Class xt_newStaticFieldRef_S_NA8MK[] = { 0 };

Object newStaticFieldRef_S_NA8MK(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8zx1Z(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newThisRef_S_7k96k: ca.mcgill.sable.soot.jimple.Jimple.newThisRef(Lca/mcgill/sable/soot/SootClass;)Lca/mcgill/sable/soot/jimple/ThisRef; */

Class xt_newThisRef_S_7k96k[] = { 0 };

Object newThisRef_S_7k96k(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ThisRef.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_AhZ70(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newParameterRef_Si_1GJaU: ca.mcgill.sable.soot.jimple.Jimple.newParameterRef(Lca/mcgill/sable/soot/SootMethod;I)Lca/mcgill/sable/soot/jimple/ParameterRef; */

Class xt_newParameterRef_Si_1GJaU[] = { 0 };

Object newParameterRef_Si_1GJaU(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ParameterRef.C);
	a2 = a1;
	a3 = av1;
	i4 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_Si_JrAiy(a2,a3,i4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInstanceFieldRef_VS_lXqxs: ca.mcgill.sable.soot.jimple.Jimple.newInstanceFieldRef(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/SootField;)Lca/mcgill/sable/soot/jimple/InstanceFieldRef; */

Class xt_newInstanceFieldRef_VS_lXqxs[] = { 0 };

Object newInstanceFieldRef_VS_lXqxs(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VS_FxpjE(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCaughtExceptionRef_J_NQePj: ca.mcgill.sable.soot.jimple.Jimple.newCaughtExceptionRef(Lca/mcgill/sable/soot/jimple/JimpleBody;)Lca/mcgill/sable/soot/jimple/CaughtExceptionRef; */

Class xt_newCaughtExceptionRef_J_NQePj[] = { 0 };

Object newCaughtExceptionRef_J_NQePj(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_J_hfjIH(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newArrayRef_VV_vy9KY: ca.mcgill.sable.soot.jimple.Jimple.newArrayRef(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ArrayRef; */

Class xt_newArrayRef_VV_vy9KY[] = { 0 };

Object newArrayRef_VV_vy9KY(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JArrayRef.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_hnhpj(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newVariableBox_V_sAbI7: ca.mcgill.sable.soot.jimple.Jimple.newVariableBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newVariableBox_V_sAbI7[] = { 0 };

Object newVariableBox_V_sAbI7(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_VariableBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_a8vuj(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLocalBox_V_BsxZy: ca.mcgill.sable.soot.jimple.Jimple.newLocalBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newLocalBox_V_BsxZy[] = { 0 };

Object newLocalBox_V_BsxZy(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_LocalBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_VnMT6(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newRValueBox_V_fJ2TY: ca.mcgill.sable.soot.jimple.Jimple.newRValueBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newRValueBox_V_fJ2TY[] = { 0 };

Object newRValueBox_V_fJ2TY(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_RValueBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_TIJH0(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newImmediateBox_V_7jLB8: ca.mcgill.sable.soot.jimple.Jimple.newImmediateBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newImmediateBox_V_7jLB8[] = { 0 };

Object newImmediateBox_V_7jLB8(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ImmediateBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_X7LnF(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newArgBox_V_G9BVX: ca.mcgill.sable.soot.jimple.Jimple.newArgBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newArgBox_V_G9BVX[] = { 0 };

Object newArgBox_V_G9BVX(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ImmediateBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_X7LnF(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIdentityRefBox_V_FOSWQ: ca.mcgill.sable.soot.jimple.Jimple.newIdentityRefBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newIdentityRefBox_V_FOSWQ[] = { 0 };

Object newIdentityRefBox_V_FOSWQ(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_IdentityRefBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_DtoXp(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newConditionExprBox_V_KdLXR: ca.mcgill.sable.soot.jimple.Jimple.newConditionExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newConditionExprBox_V_KdLXR[] = { 0 };

Object newConditionExprBox_V_KdLXR(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ConditionExprBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_aygr0(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInvokeExprBox_V_TXEdu: ca.mcgill.sable.soot.jimple.Jimple.newInvokeExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newInvokeExprBox_V_TXEdu[] = { 0 };

Object newInvokeExprBox_V_TXEdu(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_InvokeExprBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_v5jTm(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newStmtBox_U_e3goW: ca.mcgill.sable.soot.jimple.Jimple.newStmtBox(Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_newStmtBox_U_e3goW[] = { 0 };

Object newStmtBox_U_e3goW(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_StmtBox.C);
	a2 = a1;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_xOXUp(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__FcYlj: ca.mcgill.sable.soot.jimple.Jimple.<clinit>()V */

Class xt_clinit__FcYlj[] = { 0 };

Void clinit__FcYlj(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_Jimple.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__MTb7e(a2);
	cl_ca_mcgill_sable_soot_jimple_Jimple.V.jimpleRepresentation = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_Jimple[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','i','m','p','l','e'};

const void *st_ca_mcgill_sable_soot_jimple_Jimple[] = {
    ch_ca_mcgill_sable_soot_jimple_Jimple+34,	/* 0. ca.mcgill.sable.soot.jimple.Jimple */
    0};
