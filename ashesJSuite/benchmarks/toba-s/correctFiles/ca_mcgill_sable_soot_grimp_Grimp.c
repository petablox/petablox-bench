/*  ca_mcgill_sable_soot_grimp_Grimp.c -- from Java class ca.mcgill.sable.soot.grimp.Grimp  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_jimple_JimpleRepresentation.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_ExprBox.h"
#include "ca_mcgill_sable_soot_grimp_GAddExpr.h"
#include "ca_mcgill_sable_soot_grimp_GAndExpr.h"
#include "ca_mcgill_sable_soot_grimp_GArrayRef.h"
#include "ca_mcgill_sable_soot_grimp_GAssignStmt.h"
#include "ca_mcgill_sable_soot_grimp_GCastExpr.h"
#include "ca_mcgill_sable_soot_grimp_GCmpExpr.h"
#include "ca_mcgill_sable_soot_grimp_GCmpgExpr.h"
#include "ca_mcgill_sable_soot_grimp_GCmplExpr.h"
#include "ca_mcgill_sable_soot_grimp_GDivExpr.h"
#include "ca_mcgill_sable_soot_grimp_GEnterMonitorStmt.h"
#include "ca_mcgill_sable_soot_grimp_GEqExpr.h"
#include "ca_mcgill_sable_soot_grimp_GExitMonitorStmt.h"
#include "ca_mcgill_sable_soot_grimp_GGeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GGtExpr.h"
#include "ca_mcgill_sable_soot_grimp_GIdentityStmt.h"
#include "ca_mcgill_sable_soot_grimp_GIfStmt.h"
#include "ca_mcgill_sable_soot_grimp_GInstanceFieldRef.h"
#include "ca_mcgill_sable_soot_grimp_GInstanceOfExpr.h"
#include "ca_mcgill_sable_soot_grimp_GInterfaceInvokeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GInvokeStmt.h"
#include "ca_mcgill_sable_soot_grimp_GLeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GLengthExpr.h"
#include "ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_grimp_GLtExpr.h"
#include "ca_mcgill_sable_soot_grimp_GMulExpr.h"
#include "ca_mcgill_sable_soot_grimp_GNeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GNegExpr.h"
#include "ca_mcgill_sable_soot_grimp_GNewArrayExpr.h"
#include "ca_mcgill_sable_soot_grimp_GNewInvokeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GNewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_grimp_GOrExpr.h"
#include "ca_mcgill_sable_soot_grimp_GRValueBox.h"
#include "ca_mcgill_sable_soot_grimp_GRemExpr.h"
#include "ca_mcgill_sable_soot_grimp_GRetStmt.h"
#include "ca_mcgill_sable_soot_grimp_GReturnStmt.h"
#include "ca_mcgill_sable_soot_grimp_GShlExpr.h"
#include "ca_mcgill_sable_soot_grimp_GShrExpr.h"
#include "ca_mcgill_sable_soot_grimp_GSpecialInvokeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GSubExpr.h"
#include "ca_mcgill_sable_soot_grimp_GTableSwitchStmt.h"
#include "ca_mcgill_sable_soot_grimp_GThrowStmt.h"
#include "ca_mcgill_sable_soot_grimp_GTrap.h"
#include "ca_mcgill_sable_soot_grimp_GUshrExpr.h"
#include "ca_mcgill_sable_soot_grimp_GVirtualInvokeExpr.h"
#include "ca_mcgill_sable_soot_grimp_GXorExpr.h"
#include "ca_mcgill_sable_soot_grimp_Grimp$1.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody.h"
#include "ca_mcgill_sable_soot_grimp_ObjExprBox.h"
#include "ca_mcgill_sable_soot_jimple_AbstractValueBox.h"
#include "ca_mcgill_sable_soot_jimple_ArrayRef.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_EnterMonitorStmt.h"
#include "ca_mcgill_sable_soot_jimple_ExitMonitorStmt.h"
#include "ca_mcgill_sable_soot_jimple_Expr.h"
#include "ca_mcgill_sable_soot_jimple_FieldRef.h"
#include "ca_mcgill_sable_soot_jimple_GotoStmt.h"
#include "ca_mcgill_sable_soot_jimple_IfStmt.h"
#include "ca_mcgill_sable_soot_jimple_InstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_IntConstant.h"
#include "ca_mcgill_sable_soot_jimple_InvokeStmt.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_LookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_RetStmt.h"
#include "ca_mcgill_sable_soot_jimple_ReturnStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_TableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_ThrowStmt.h"
#include "ca_mcgill_sable_soot_jimple_Trap.h"
#include "ca_mcgill_sable_util_Switchable.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_ExprBox.C,
    &cl_ca_mcgill_sable_soot_grimp_GAddExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GAndExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GArrayRef.C,
    &cl_ca_mcgill_sable_soot_grimp_GAssignStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GCastExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GCmpExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GCmpgExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GCmplExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GDivExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GEnterMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GEqExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GExitMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GGeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GGtExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GIdentityStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GIfStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_grimp_GInstanceOfExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GInterfaceInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GInvokeStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GLeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GLengthExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GLtExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GMulExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GNeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GNegExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GNewMultiArrayExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GOrExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GRValueBox.C,
    &cl_ca_mcgill_sable_soot_grimp_GRemExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GRetStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GReturnStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GShlExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GShrExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GSpecialInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GSubExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GThrowStmt.C,
    &cl_ca_mcgill_sable_soot_grimp_GTrap.C,
    &cl_ca_mcgill_sable_soot_grimp_GUshrExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GVirtualInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_GXorExpr.C,
    &cl_ca_mcgill_sable_soot_grim_8XTtw.C,
    &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C,
    &cl_ca_mcgill_sable_soot_grimp_ObjExprBox.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.C,
    &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_EnterMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_ExitMonitorStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Expr.C,
    &cl_ca_mcgill_sable_soot_jimple_FieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_RetStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_ReturnStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_ThrowStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Trap.C,
    &cl_ca_mcgill_sable_util_Switchable.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_Grimp[];
extern const void *st_ca_mcgill_sable_soot_grimp_Grimp[];
extern Class xt_init__OibyA[];
extern Class xt_v__ES3xL[];
extern Class xt_newBody_S_gyWnS[];
extern Class xt_buildBodyOfFrom_SBi_5OpM6[];
extern Class xt_newXorExpr_VV_zgr82[];
extern Class xt_newUshrExpr_VV_9OIJi[];
extern Class xt_newSubExpr_VV_jXJbu[];
extern Class xt_newShrExpr_VV_1XqBw[];
extern Class xt_newShlExpr_VV_PUZ1c[];
extern Class xt_newRemExpr_VV_FMxFd[];
extern Class xt_newOrExpr_VV_HiAQ6[];
extern Class xt_newNeExpr_VV_5z6ew[];
extern Class xt_newMulExpr_VV_9O7wf[];
extern Class xt_newLeExpr_VV_j2vl4[];
extern Class xt_newGeExpr_VV_j1KYf[];
extern Class xt_newEqExpr_VV_r517A[];
extern Class xt_newDivExpr_VV_Zrtox[];
extern Class xt_newCmplExpr_VV_L3sp3[];
extern Class xt_newCmpgExpr_VV_DWQPo[];
extern Class xt_newCmpExpr_VV_l6dZk[];
extern Class xt_newGtExpr_VV_Z9MZJ[];
extern Class xt_newLtExpr_VV_Zaxmy[];
extern Class xt_newAddExpr_VV_7cnb3[];
extern Class xt_newAndExpr_VV_llrdX[];
extern Class xt_newNegExpr_V_ZofCq[];
extern Class xt_newLengthExpr_V_5i4o8[];
extern Class xt_newCastExpr_VT_2Njag[];
extern Class xt_newInstanceOfExpr_VT_66MFq[];
extern Class xt_newNewExpr_R_bIf9u[];
extern Class xt_newNewArrayExpr_TV_0MVt0[];
extern Class xt_newNewMultiArrayExpr_AL_Z2qaL[];
extern Class xt_newNewInvokeExpr_RSL_Yu41s[];
extern Class xt_newStaticInvokeExpr_SL_ArUCB[];
extern Class xt_newSpecialInvokeExpr_LSL_u2HPi[];
extern Class xt_newVirtualInvokeExpr_LSL_e8vOg[];
extern Class xt_newInterfaceInvokeExp_LSL_uqlZZ[];
extern Class xt_newThrowStmt_V_prxVO[];
extern Class xt_newThrowStmt_T_G2cRj[];
extern Class xt_newExitMonitorStmt_V_rqdUF[];
extern Class xt_newExitMonitorStmt_E_0cI0R[];
extern Class xt_newEnterMonitorStmt_V_3URmS[];
extern Class xt_newEnterMonitorStmt_E_6lwc2[];
extern Class xt_newBreakpointStmt__tgs1V[];
extern Class xt_newBreakpointStmt_B_R9gTQ[];
extern Class xt_newGotoStmt_U_0a8LF[];
extern Class xt_newGotoStmt_G_pSxTw[];
extern Class xt_newNopStmt__9gNRE[];
extern Class xt_newNopStmt_N_TtrCt[];
extern Class xt_newReturnVoidStmt__3srtg[];
extern Class xt_newReturnVoidStmt_R_6f0ds[];
extern Class xt_newReturnStmt_V_jK1rm[];
extern Class xt_newReturnStmt_R_qKlYr[];
extern Class xt_newRetStmt_V_b31KM[];
extern Class xt_newRetStmt_R_LEVEG[];
extern Class xt_newIfStmt_VU_UI21B[];
extern Class xt_newIfStmt_I_1xHmT[];
extern Class xt_newIdentityStmt_VV_TAhJK[];
extern Class xt_newIdentityStmt_I_08QnB[];
extern Class xt_newAssignStmt_VV_hoesU[];
extern Class xt_newAssignStmt_A_p4JOC[];
extern Class xt_newInvokeStmt_V_1vObO[];
extern Class xt_newInvokeStmt_I_aYjvp[];
extern Class xt_newTableSwitchStmt_ViiLU_OfV1K[];
extern Class xt_newTableSwitchStmt_T_mjcQq[];
extern Class xt_newLookupSwitchStmt_VLLU_wHqHw[];
extern Class xt_newLookupSwitchStmt_L_AXEdZ[];
extern Class xt_newLocal_ST_6C2Ph[];
extern Class xt_newTrap_SUUU_C5qOh[];
extern Class xt_newTrap_T_RNCPO[];
extern Class xt_newStaticFieldRef_S_tYU30[];
extern Class xt_newThisRef_S_BFvtM[];
extern Class xt_newParameterRef_Si_ndYr0[];
extern Class xt_newInstanceFieldRef_VS_3Eufq[];
extern Class xt_newCaughtExceptionRef_J_7doAb[];
extern Class xt_newArrayRef_VV_dZEir[];
extern Class xt_newVariableBox_V_eHj84[];
extern Class xt_newLocalBox_V_Hn4sx[];
extern Class xt_newRValueBox_V_Ne1K9[];
extern Class xt_newImmediateBox_V_rxkSX[];
extern Class xt_newExprBox_V_B8P02[];
extern Class xt_newArgBox_V_gOZZr[];
extern Class xt_newObjExprBox_V_uxjD5[];
extern Class xt_newIdentityRefBox_V_54hez[];
extern Class xt_newConditionExprBox_V_0Cume[];
extern Class xt_newInvokeExprBox_V_PzEuX[];
extern Class xt_newStmtBox_U_0mQ3j[];
extern Class xt_newExpr_V_B7nJe[];
extern Class xt_clinit__f5eGJ[];

#define HASHMASK 0x3ff
/*  9.  9bd04009  (9)  newLookupSwitchStmt  */
/*  16.  8712d416  (16)  newExitMonitorStmt  */
/*  20.  6314b020  (20)  newRValueBox  */
/*  46.  10237046  (46)  newArrayRef  */
/*  48.  5b287c48  (48)  buildBodyOfFrom  */
/*  4e.  d1ff3c4e  (4e)  newIdentityStmt  */
/*  4f.  6f62044f  (4f)  newBody  */
/*  58.  2d7d5c58  (58)  newImmediateBox  */
/*  5b.  26439c5b  (5b)  newVariableBox  */
/*  60.  d7aae460  (60)  newIdentityRefBox  */
/*  70.  bc3a1470  (70)  newStaticFieldRef  */
/*  74.  f0666874  (74)  newGeExpr  */
/*  9f.  6409449f  (9f)  newNewArrayExpr  */
/*  a0.  66ecdc9f  (9f)  newTableSwitchStmt  */
/*  a2.  c81ab4a2  (a2)  newNeExpr  */
/*  a7.  168160a7  (a7)  newTrap  */
/*  b1.  f40cd4b1  (b1)  newInterfaceInvokeExpr  */
/*  b4.  56b604b4  (b4)  newCmpExpr  */
/*  b8.  25d4e8b8  (b8)  newBreakpointStmt  */
/*  e0.  ac69dce0  (e0)  newUshrExpr  */
/*  e6.  c8ae50e6  (e6)  newEnterMonitorStmt  */
/*  110.  9ee6bd10  (110)  newCaughtExceptionRef  */
/*  112.  21e7512  (112)  newReturnVoidStmt  */
/*  11a.  5417a11a  (11a)  newInvokeStmt  */
/*  121.  29a99121  (121)  newSpecialInvokeExpr  */
/*  134.  684f0934  (134)  newCmplExpr  */
/*  135.  31787d34  (134)  newInvokeExprBox  */
/*  144.  32d87d44  (144)  newNegExpr  */
/*  14a.  2b08714a  (14a)  newDivExpr  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  155.  3b537155  (155)  newLocal  */
/*  18e.  d43b298e  (18e)  newGtExpr  */
/*  19e.  df7bd9e  (19e)  newCmpgExpr  */
/*  1a2.  4f81a1a2  (1a2)  newInstanceFieldRef  */
/*  1ab.  c34881ab  (1ab)  newConditionExprBox  */
/*  1cc.  a826edcc  (1cc)  newNopStmt  */
/*  1f8.  94ebb9f8  (1f8)  newEqExpr  */
/*  212.  1ef69a12  (212)  newOrExpr  */
/*  22a.  60f12e2a  (22a)  newShrExpr  */
/*  26f.  489f8e6f  (26f)  toString  */
/*  287.  a3e50287  (287)  newGotoStmt  */
/*  2a2.  788b0ea2  (2a2)  newThrowStmt  */
/*  2ad.  930886ad  (2ad)  newInstanceOfExpr  */
/*  2af.  49812af  (2af)  newCastExpr  */
/*  2b8.  84647eb8  (2b8)  newSubExpr  */
/*  2be.  b2b6ebe  (2be)  newAndExpr  */
/*  2c2.  4707cec2  (2c2)  newAddExpr  */
/*  2ca.  3ba5d2ca  (2ca)  newReturnStmt  */
/*  2de.  1cc29ede  (2de)  newLeExpr  */
/*  2ee.  461baaee  (2ee)  newXorExpr  */
/*  304.  fd2b6304  (304)  newNewMultiArrayExpr  */
/*  305.  fb9fb04  (304)  newRetStmt  */
/*  32c.  21a94b2c  (32c)  newLocalBox  */
/*  32e.  1837db2e  (32e)  newShlExpr  */
/*  32f.  49917f2f  (32f)  newIfStmt  */
/*  330.  ae13ab30  (330)  newMulExpr  */
/*  338.  2f467f38  (338)  newLengthExpr  */
/*  339.  deb29339  (339)  newStaticInvokeExpr  */
/*  361.  8942e761  (361)  hashCode  */
/*  37d.  baac237d  (37d)  newVirtualInvokeExpr  */
/*  38b.  e50c7b8b  (38b)  newStmtBox  */
/*  3a7.  d90f23a7  (3a7)  newArgBox  */
/*  3ce.  5b938bce  (3ce)  newThisRef  */
/*  3d2.  4c0d6fd2  (3d2)  clone  */
/*  3e4.  9b037e4  (3e4)  newAssignStmt  */
/*  3e8.  6542afe8  (3e8)  newParameterRef  */
/*  3f4.  75d7e7f4  (3f4)  newRemExpr  */
/*  3f8.  975ff8  (3f8)  newLtExpr  */
static const struct ihash htable[1024] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1680850935, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newLookupSwitchStmt_VLLU_wHqHw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2028809194, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newExitMonitorStmt_V_rqdUF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1662300192, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newRValueBox_V_Ne1K9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    270757958, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newArrayRef_VV_dZEir,
    0, 0,
    1529379912, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.buildBodyOfFrom_SBi_5OpM6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -771802034, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newIdentityStmt_VV_TAhJK,
    1868694607, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newBody_S_gyWnS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    763190360, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newImmediateBox_V_rxkSX,
    0, 0, 0, 0,
    641965147, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newVariableBox_V_eHj84,
    0, 0, 0, 0, 0, 0, 0, 0,
    -676666272, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newIdentityRefBox_V_54hez,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1137044368, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newStaticFieldRef_S_tYU30,
    0, 0, 0, 0, 0, 0,
    -261724044, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newGeExpr_VV_j1KYf,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1678328991, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newNewArrayExpr_TV_0MVt0,
    1726799007, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newTableSwitchStmt_ViiLU_OfV1K,
    0, 0,
    -937773918, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newNeExpr_VV_5z6ew,
    0, 0, 0, 0, 0, 0, 0, 0,
    377577639, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newTrap_SUUU_C5qOh,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -200485711, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newInterfaceInvokeExp_LSL_uqlZZ,
    0, 0, 0, 0,
    1454769332, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newCmpExpr_VV_l6dZk,
    0, 0, 0, 0, 0, 0,
    634710200, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newBreakpointStmt__tgs1V,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1402348320, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newUshrExpr_VV_9OIJi,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -928100122, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newEnterMonitorStmt_V_3URmS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1629045488, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newCaughtExceptionRef_J_7doAb,
    0, 0,
    35550482, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newReturnVoidStmt__3srtg,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1410834714, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newInvokeStmt_V_1vObO,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    698978593, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newSpecialInvokeExpr_LSL_u2HPi,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1750010164, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newCmplExpr_VV_L3sp3,
    829979956, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newInvokeExprBox_V_PzEuX,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    853048644, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newNegExpr_V_ZofCq,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    721973578, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newDivExpr_VV_Zrtox,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    995324245, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newLocal_ST_6C2Ph,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -734320242, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newGtExpr_VV_Z9MZJ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    234339742, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newCmpgExpr_VV_DWQPo,
    0, 0, 0, 0, 0, 0,
    1333895586, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newInstanceFieldRef_VS_3Eufq,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1018658389, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newConditionExprBox_V_0Cume,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1473843764, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newNopStmt__9gNRE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1796490760, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newEqExpr_VV_r517A,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    519477778, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newOrExpr_VV_HiAQ6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1626418730, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newShrExpr_VV_1XqBw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1545272697, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newGotoStmt_U_0a8LF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    2022379170, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newThrowStmt_V_prxVO,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1828157779, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newInstanceOfExpr_VT_66MFq,
    0, 0,
    77075119, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newCastExpr_VT_2Njag,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2073788744, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newSubExpr_VV_jXJbu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187395774, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newAndExpr_VV_llrdX,
    0, 0, 0, 0, 0, 0,
    1191694018, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newAddExpr_VV_7cnb3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1000723146, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newReturnStmt_V_jK1rm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    482516702, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newLeExpr_VV_j2vl4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    1176218350, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newXorExpr_VV_zgr82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -47488252, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newNewMultiArrayExpr_AL_Z2qaL,
    263846660, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newRetStmt_V_b31KM,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    564742956, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newLocalBox_V_Hn4sx,
    0, 0,
    406313774, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newShlExpr_VV_PUZ1c,
    1234272047, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newIfStmt_VU_UI21B,
    -1374442704, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newMulExpr_VV_9O7wf,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    793149240, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newLengthExpr_V_5i4o8,
    -558722247, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newStaticInvokeExpr_SL_ArUCB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1163123843, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newVirtualInvokeExpr_LSL_e8vOg,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -452166773, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newStmtBox_U_0mQ3j,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -653319257, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newArgBox_V_gOZZr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1536396238, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newThisRef_S_BFvtM,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    162543588, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newAssignStmt_VV_hoesU,
    0, 0, 0, 0, 0, 0,
    1698869224, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newParameterRef_Si_ndYr0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1977083892, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newRemExpr_VV_FMxFd,
    0, 0, 0, 0, 0, 0,
    9920504, &cl_ca_mcgill_sable_soot_grimp_Grimp.M.newLtExpr_VV_Zaxmy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(32) nmchars = {&acl_char, 0, 32, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 32 };
static const Char nmcv_0[] = {
'g','r','i','m','p','R','e','p','r','e','s','e','n','t','a','t','i','o',
'n'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','g','r','i','m','p','/','G','r','i','m','p',';'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','g','r','i','m','p','/','G','r','i','m','p',';'};
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
'n','e','w','N','e','w','I','n','v','o','k','e','E','x','p','r'};
static const Char sgim_41[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','R','e','f','T','y','p','e',';','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','S',
'o','o','t','M','e','t','h','o','d',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','u','t','i','l','/','L','i','s','t',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','N','e','w','I','n',
'v','o','k','e','E','x','p','r',';'};
static const Char nmim_42[] = {
'n','e','w','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p',
'r'};
static const Char sgim_42[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i',
'l','/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l',
'/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e',
'/','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_43[] = {
'n','e','w','S','p','e','c','i','a','l','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_43[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'S','p','e','c','i','a','l','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_44[] = {
'n','e','w','V','i','r','t','u','a','l','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_44[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'V','i','r','t','u','a','l','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_45[] = {
'n','e','w','I','n','t','e','r','f','a','c','e','I','n','v','o','k','e',
'E','x','p','r'};
static const Char sgim_45[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'I','n','t','e','r','f','a','c','e','I','n','v','o','k','e','E','x','p',
'r',';'};
static const Char nmim_46[] = {
'n','e','w','T','h','r','o','w','S','t','m','t'};
static const Char sgim_46[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','r','o','w','S',
't','m','t',';'};
static const Char nmim_47[] = {
'n','e','w','T','h','r','o','w','S','t','m','t'};
static const Char sgim_47[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','r','o','w','S',
't','m','t',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','T','h',
'r','o','w','S','t','m','t',';'};
static const Char nmim_48[] = {
'n','e','w','E','x','i','t','M','o','n','i','t','o','r','S','t','m','t'};
static const Char sgim_48[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','x','i','t','M','o',
'n','i','t','o','r','S','t','m','t',';'};
static const Char nmim_49[] = {
'n','e','w','E','x','i','t','M','o','n','i','t','o','r','S','t','m','t'};
static const Char sgim_49[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','x','i','t','M','o',
'n','i','t','o','r','S','t','m','t',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','E','x','i','t','M','o','n','i','t','o','r','S','t','m',
't',';'};
static const Char nmim_50[] = {
'n','e','w','E','n','t','e','r','M','o','n','i','t','o','r','S','t','m',
't'};
static const Char sgim_50[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','n','t','e','r','M',
'o','n','i','t','o','r','S','t','m','t',';'};
static const Char nmim_51[] = {
'n','e','w','E','n','t','e','r','M','o','n','i','t','o','r','S','t','m',
't'};
static const Char sgim_51[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','n','t','e','r','M',
'o','n','i','t','o','r','S','t','m','t',';',')','L','c','a','/','m','c',
'g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i',
'm','p','l','e','/','E','n','t','e','r','M','o','n','i','t','o','r','S',
't','m','t',';'};
static const Char nmim_52[] = {
'n','e','w','B','r','e','a','k','p','o','i','n','t','S','t','m','t'};
static const Char sgim_52[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','B','r','e','a','k',
'p','o','i','n','t','S','t','m','t',';'};
static const Char nmim_53[] = {
'n','e','w','B','r','e','a','k','p','o','i','n','t','S','t','m','t'};
static const Char sgim_53[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','B','r','e','a','k','p',
'o','i','n','t','S','t','m','t',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','B','r','e','a','k','p','o','i','n','t','S','t','m','t',';'};
static const Char nmim_54[] = {
'n','e','w','G','o','t','o','S','t','m','t'};
static const Char sgim_54[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','G','o','t','o','S','t','m',
't',';'};
static const Char nmim_55[] = {
'n','e','w','G','o','t','o','S','t','m','t'};
static const Char sgim_55[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','o','t','o','S','t',
'm','t',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','G','o','t',
'o','S','t','m','t',';'};
static const Char nmim_56[] = {
'n','e','w','N','o','p','S','t','m','t'};
static const Char sgim_56[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S','t',
'm','t',';'};
static const Char nmim_57[] = {
'n','e','w','N','o','p','S','t','m','t'};
static const Char sgim_57[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S','t','m',
't',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S',
't','m','t',';'};
static const Char nmim_58[] = {
'n','e','w','R','e','t','u','r','n','V','o','i','d','S','t','m','t'};
static const Char sgim_58[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r',
'n','V','o','i','d','S','t','m','t',';'};
static const Char nmim_59[] = {
'n','e','w','R','e','t','u','r','n','V','o','i','d','S','t','m','t'};
static const Char sgim_59[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'V','o','i','d','S','t','m','t',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','R','e','t','u','r','n','V','o','i','d','S','t','m','t',';'};
static const Char nmim_60[] = {
'n','e','w','R','e','t','u','r','n','S','t','m','t'};
static const Char sgim_60[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'S','t','m','t',';'};
static const Char nmim_61[] = {
'n','e','w','R','e','t','u','r','n','S','t','m','t'};
static const Char sgim_61[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'S','t','m','t',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','R',
'e','t','u','r','n','S','t','m','t',';'};
static const Char nmim_62[] = {
'n','e','w','R','e','t','S','t','m','t'};
static const Char sgim_62[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S','t','m',
't',';'};
static const Char nmim_63[] = {
'n','e','w','R','e','t','S','t','m','t'};
static const Char sgim_63[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S','t','m',
't',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S',
't','m','t',';'};
static const Char nmim_64[] = {
'n','e','w','I','f','S','t','m','t'};
static const Char sgim_64[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','I','f','S','t','m','t',';'};
static const Char nmim_65[] = {
'n','e','w','I','f','S','t','m','t'};
static const Char sgim_65[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','f','S','t','m','t',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','I','f','S','t','m',
't',';'};
static const Char nmim_66[] = {
'n','e','w','I','d','e','n','t','i','t','y','S','t','m','t'};
static const Char sgim_66[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','I','d','e','n','t','i','t',
'y','S','t','m','t',';'};
static const Char nmim_67[] = {
'n','e','w','I','d','e','n','t','i','t','y','S','t','m','t'};
static const Char sgim_67[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','d','e','n','t','i',
't','y','S','t','m','t',';',')','L','c','a','/','m','c','g','i','l','l',
'/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e',
'/','I','d','e','n','t','i','t','y','S','t','m','t',';'};
static const Char nmim_68[] = {
'n','e','w','A','s','s','i','g','n','S','t','m','t'};
static const Char sgim_68[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','s','s','i','g','n','S',
't','m','t',';'};
static const Char nmim_69[] = {
'n','e','w','A','s','s','i','g','n','S','t','m','t'};
static const Char sgim_69[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','s','s','i','g','n',
'S','t','m','t',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','A',
's','s','i','g','n','S','t','m','t',';'};
static const Char nmim_70[] = {
'n','e','w','I','n','v','o','k','e','S','t','m','t'};
static const Char sgim_70[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'S','t','m','t',';'};
static const Char nmim_71[] = {
'n','e','w','I','n','v','o','k','e','S','t','m','t'};
static const Char sgim_71[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'S','t','m','t',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','I',
'n','v','o','k','e','S','t','m','t',';'};
static const Char nmim_72[] = {
'n','e','w','T','a','b','l','e','S','w','i','t','c','h','S','t','m','t'};
static const Char sgim_72[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'I','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','U','n','i','t',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','T','a','b','l','e','S','w','i','t','c','h','S','t','m','t',
';'};
static const Char nmim_73[] = {
'n','e','w','T','a','b','l','e','S','w','i','t','c','h','S','t','m','t'};
static const Char sgim_73[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','a','b','l','e','S',
'w','i','t','c','h','S','t','m','t',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','T','a','b','l','e','S','w','i','t','c','h','S','t','m',
't',';'};
static const Char nmim_74[] = {
'n','e','w','L','o','o','k','u','p','S','w','i','t','c','h','S','t','m',
't'};
static const Char sgim_74[] = {
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
static const Char nmim_75[] = {
'n','e','w','L','o','o','k','u','p','S','w','i','t','c','h','S','t','m',
't'};
static const Char sgim_75[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','o','k','u','p',
'S','w','i','t','c','h','S','t','m','t',';',')','L','c','a','/','m','c',
'g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i',
'm','p','l','e','/','L','o','o','k','u','p','S','w','i','t','c','h','S',
't','m','t',';'};
static const Char nmim_76[] = {
'n','e','w','L','o','c','a','l'};
static const Char sgim_76[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','L','o','c','a','l',';'};
static const Char nmim_77[] = {
'n','e','w','T','r','a','p'};
static const Char sgim_77[] = {
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
static const Char nmim_78[] = {
'n','e','w','T','r','a','p'};
static const Char sgim_78[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','r','a','p',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','r','a','p',';'};
static const Char nmim_79[] = {
'n','e','w','S','t','a','t','i','c','F','i','e','l','d','R','e','f'};
static const Char sgim_79[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','S','t','a','t','i','c','F','i','e',
'l','d','R','e','f',';'};
static const Char nmim_80[] = {
'n','e','w','T','h','i','s','R','e','f'};
static const Char sgim_80[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','T','h','i','s','R','e','f',';'};
static const Char nmim_81[] = {
'n','e','w','P','a','r','a','m','e','t','e','r','R','e','f'};
static const Char sgim_81[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','I',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','P','a','r','a','m','e','t',
'e','r','R','e','f',';'};
static const Char nmim_82[] = {
'n','e','w','I','n','s','t','a','n','c','e','F','i','e','l','d','R','e',
'f'};
static const Char sgim_82[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','I','n','s','t','a','n','c','e','F','i',
'e','l','d','R','e','f',';'};
static const Char nmim_83[] = {
'n','e','w','C','a','u','g','h','t','E','x','c','e','p','t','i','o','n',
'R','e','f'};
static const Char sgim_83[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','C',
'a','u','g','h','t','E','x','c','e','p','t','i','o','n','R','e','f',';'};
static const Char nmim_84[] = {
'n','e','w','A','r','r','a','y','R','e','f'};
static const Char sgim_84[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','r','r','a','y','R','e',
'f',';'};
static const Char nmim_85[] = {
'n','e','w','V','a','r','i','a','b','l','e','B','o','x'};
static const Char sgim_85[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_86[] = {
'n','e','w','L','o','c','a','l','B','o','x'};
static const Char sgim_86[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_87[] = {
'n','e','w','R','V','a','l','u','e','B','o','x'};
static const Char sgim_87[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_88[] = {
'n','e','w','I','m','m','e','d','i','a','t','e','B','o','x'};
static const Char sgim_88[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_89[] = {
'n','e','w','E','x','p','r','B','o','x'};
static const Char sgim_89[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_90[] = {
'n','e','w','A','r','g','B','o','x'};
static const Char sgim_90[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_91[] = {
'n','e','w','O','b','j','E','x','p','r','B','o','x'};
static const Char sgim_91[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_92[] = {
'n','e','w','I','d','e','n','t','i','t','y','R','e','f','B','o','x'};
static const Char sgim_92[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_93[] = {
'n','e','w','C','o','n','d','i','t','i','o','n','E','x','p','r','B','o',
'x'};
static const Char sgim_93[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_94[] = {
'n','e','w','I','n','v','o','k','e','E','x','p','r','B','o','x'};
static const Char sgim_94[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_95[] = {
'n','e','w','S','t','m','t','B','o','x'};
static const Char sgim_95[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',
';'};
static const Char nmim_96[] = {
'n','e','w','E','x','p','r'};
static const Char sgim_96[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_grimp_Grimp.V.grimpRepresentation,(const Char *)&nmcv_0,19,(const Char *)&sgcv_0,34,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v__ES3xL,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,36,
	1,0x9,1,xt_v__ES3xL},
    {TMIT_native_code, (Void(*)())clinit__f5eGJ,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,87,xt_clinit__f5eGJ},
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
} inr_ca_mcgill_sable_soot_grimp_Grimp = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_Grimp.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_Grimp cl_ca_mcgill_sable_soot_grimp_Grimp = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_Grimp),
    97,
    2,
    0,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    71, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_Grimp,
    st_ca_mcgill_sable_soot_grimp_Grimp,
    clinit__f5eGJ,
    init__OibyA,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_Grimp,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__OibyA,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x4,0,xt_init__OibyA},
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
	{TMIT_native_code, newBody_S_gyWnS,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,62,1,0x8001,2,xt_newBody_S_gyWnS},
	{TMIT_native_code, buildBodyOfFrom_SBi_5OpM6,(const Char *)&nmim_13,15,
	(const Char *)&sgim_13,90,1,0x8001,3,xt_buildBodyOfFrom_SBi_5OpM6},
	{TMIT_native_code, newXorExpr_VV_zgr82,(const Char *)&nmim_14,10,
	(const Char *)&sgim_14,109,1,0x8001,4,xt_newXorExpr_VV_zgr82},
	{TMIT_native_code, newUshrExpr_VV_9OIJi,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,110,1,0x8001,5,xt_newUshrExpr_VV_9OIJi},
	{TMIT_native_code, newSubExpr_VV_jXJbu,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,109,1,0x8001,6,xt_newSubExpr_VV_jXJbu},
	{TMIT_native_code, newShrExpr_VV_1XqBw,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,109,1,0x8001,7,xt_newShrExpr_VV_1XqBw},
	{TMIT_native_code, newShlExpr_VV_PUZ1c,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,109,1,0x8001,8,xt_newShlExpr_VV_PUZ1c},
	{TMIT_native_code, newRemExpr_VV_FMxFd,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,109,1,0x8001,9,xt_newRemExpr_VV_FMxFd},
	{TMIT_native_code, newOrExpr_VV_HiAQ6,(const Char *)&nmim_20,9,
	(const Char *)&sgim_20,108,1,0x8001,10,xt_newOrExpr_VV_HiAQ6},
	{TMIT_native_code, newNeExpr_VV_5z6ew,(const Char *)&nmim_21,9,
	(const Char *)&sgim_21,108,1,0x8001,11,xt_newNeExpr_VV_5z6ew},
	{TMIT_native_code, newMulExpr_VV_9O7wf,(const Char *)&nmim_22,10,
	(const Char *)&sgim_22,109,1,0x8001,12,xt_newMulExpr_VV_9O7wf},
	{TMIT_native_code, newLeExpr_VV_j2vl4,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,108,1,0x8001,13,xt_newLeExpr_VV_j2vl4},
	{TMIT_native_code, newGeExpr_VV_j1KYf,(const Char *)&nmim_24,9,
	(const Char *)&sgim_24,108,1,0x8001,14,xt_newGeExpr_VV_j1KYf},
	{TMIT_native_code, newEqExpr_VV_r517A,(const Char *)&nmim_25,9,
	(const Char *)&sgim_25,108,1,0x8001,15,xt_newEqExpr_VV_r517A},
	{TMIT_native_code, newDivExpr_VV_Zrtox,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,109,1,0x8001,16,xt_newDivExpr_VV_Zrtox},
	{TMIT_native_code, newCmplExpr_VV_L3sp3,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,110,1,0x8001,17,xt_newCmplExpr_VV_L3sp3},
	{TMIT_native_code, newCmpgExpr_VV_DWQPo,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,110,1,0x8001,18,xt_newCmpgExpr_VV_DWQPo},
	{TMIT_native_code, newCmpExpr_VV_l6dZk,(const Char *)&nmim_29,10,
	(const Char *)&sgim_29,109,1,0x8001,19,xt_newCmpExpr_VV_l6dZk},
	{TMIT_native_code, newGtExpr_VV_Z9MZJ,(const Char *)&nmim_30,9,
	(const Char *)&sgim_30,108,1,0x8001,20,xt_newGtExpr_VV_Z9MZJ},
	{TMIT_native_code, newLtExpr_VV_Zaxmy,(const Char *)&nmim_31,9,
	(const Char *)&sgim_31,108,1,0x8001,21,xt_newLtExpr_VV_Zaxmy},
	{TMIT_native_code, newAddExpr_VV_7cnb3,(const Char *)&nmim_32,10,
	(const Char *)&sgim_32,109,1,0x8001,22,xt_newAddExpr_VV_7cnb3},
	{TMIT_native_code, newAndExpr_VV_llrdX,(const Char *)&nmim_33,10,
	(const Char *)&sgim_33,109,1,0x8001,23,xt_newAndExpr_VV_llrdX},
	{TMIT_native_code, newNegExpr_V_ZofCq,(const Char *)&nmim_34,10,
	(const Char *)&sgim_34,74,1,0x8001,24,xt_newNegExpr_V_ZofCq},
	{TMIT_native_code, newLengthExpr_V_5i4o8,(const Char *)&nmim_35,13,
	(const Char *)&sgim_35,77,1,0x8001,25,xt_newLengthExpr_V_5i4o8},
	{TMIT_native_code, newCastExpr_VT_2Njag,(const Char *)&nmim_36,11,
	(const Char *)&sgim_36,102,1,0x8001,26,xt_newCastExpr_VT_2Njag},
	{TMIT_native_code, newInstanceOfExpr_VT_66MFq,(const Char *)&nmim_37,17,
	(const Char *)&sgim_37,108,1,0x8001,27,xt_newInstanceOfExpr_VT_66MFq},
	{TMIT_native_code, newNewExpr_R_bIf9u,(const Char *)&nmim_38,10,
	(const Char *)&sgim_38,69,1,0x0,28,xt_newNewExpr_R_bIf9u},
	{TMIT_native_code, newNewArrayExpr_TV_0MVt0,(const Char *)&nmim_39,15,
	(const Char *)&sgim_39,106,1,0x8001,29,xt_newNewArrayExpr_TV_0MVt0},
	{TMIT_native_code, newNewMultiArrayExpr_AL_Z2qaL,(const Char *)&nmim_40,20,
	(const Char *)&sgim_40,108,1,0x8001,30,xt_newNewMultiArrayExpr_AL_Z2qaL},
	{TMIT_native_code, newNewInvokeExpr_RSL_Yu41s,(const Char *)&nmim_41,16,
	(const Char *)&sgim_41,135,1,0x1,31,xt_newNewInvokeExpr_RSL_Yu41s},
	{TMIT_native_code, newStaticInvokeExpr_SL_ArUCB,(const Char *)&nmim_42,19,
	(const Char *)&sgim_42,108,1,0x8001,32,xt_newStaticInvokeExpr_SL_ArUCB},
	{TMIT_native_code, newSpecialInvokeExpr_LSL_u2HPi,(const Char *)&nmim_43,20,
	(const Char *)&sgim_43,144,1,0x8001,33,xt_newSpecialInvokeExpr_LSL_u2HPi},
	{TMIT_native_code, newVirtualInvokeExpr_LSL_e8vOg,(const Char *)&nmim_44,20,
	(const Char *)&sgim_44,144,1,0x8001,34,xt_newVirtualInvokeExpr_LSL_e8vOg},
	{TMIT_native_code, newInterfaceInvokeExp_LSL_uqlZZ,(const Char *)&nmim_45,22,
	(const Char *)&sgim_45,146,1,0x8001,35,xt_newInterfaceInvokeExp_LSL_uqlZZ},
	{TMIT_native_code, newThrowStmt_V_prxVO,(const Char *)&nmim_46,12,
	(const Char *)&sgim_46,76,1,0x8001,36,xt_newThrowStmt_V_prxVO},
	{TMIT_native_code, newThrowStmt_T_G2cRj,(const Char *)&nmim_47,12,
	(const Char *)&sgim_47,80,1,0x1,37,xt_newThrowStmt_T_G2cRj},
	{TMIT_native_code, newExitMonitorStmt_V_rqdUF,(const Char *)&nmim_48,18,
	(const Char *)&sgim_48,82,1,0x8001,38,xt_newExitMonitorStmt_V_rqdUF},
	{TMIT_native_code, newExitMonitorStmt_E_0cI0R,(const Char *)&nmim_49,18,
	(const Char *)&sgim_49,92,1,0x1,39,xt_newExitMonitorStmt_E_0cI0R},
	{TMIT_native_code, newEnterMonitorStmt_V_3URmS,(const Char *)&nmim_50,19,
	(const Char *)&sgim_50,83,1,0x8001,40,xt_newEnterMonitorStmt_V_3URmS},
	{TMIT_native_code, newEnterMonitorStmt_E_6lwc2,(const Char *)&nmim_51,19,
	(const Char *)&sgim_51,94,1,0x1,41,xt_newEnterMonitorStmt_E_6lwc2},
	{TMIT_native_code, newBreakpointStmt__tgs1V,(const Char *)&nmim_52,17,
	(const Char *)&sgim_52,46,1,0x8001,42,xt_newBreakpointStmt__tgs1V},
	{TMIT_native_code, newBreakpointStmt_B_R9gTQ,(const Char *)&nmim_53,17,
	(const Char *)&sgim_53,90,1,0x1,43,xt_newBreakpointStmt_B_R9gTQ},
	{TMIT_native_code, newGotoStmt_U_0a8LF,(const Char *)&nmim_54,11,
	(const Char *)&sgim_54,74,1,0x8001,44,xt_newGotoStmt_U_0a8LF},
	{TMIT_native_code, newGotoStmt_G_pSxTw,(const Char *)&nmim_55,11,
	(const Char *)&sgim_55,78,1,0x1,45,xt_newGotoStmt_G_pSxTw},
	{TMIT_native_code, newNopStmt__9gNRE,(const Char *)&nmim_56,10,
	(const Char *)&sgim_56,39,1,0x8001,46,xt_newNopStmt__9gNRE},
	{TMIT_native_code, newNopStmt_N_TtrCt,(const Char *)&nmim_57,10,
	(const Char *)&sgim_57,76,1,0x1,47,xt_newNopStmt_N_TtrCt},
	{TMIT_native_code, newReturnVoidStmt__3srtg,(const Char *)&nmim_58,17,
	(const Char *)&sgim_58,46,1,0x8001,48,xt_newReturnVoidStmt__3srtg},
	{TMIT_native_code, newReturnVoidStmt_R_6f0ds,(const Char *)&nmim_59,17,
	(const Char *)&sgim_59,90,1,0x1,49,xt_newReturnVoidStmt_R_6f0ds},
	{TMIT_native_code, newReturnStmt_V_jK1rm,(const Char *)&nmim_60,13,
	(const Char *)&sgim_60,77,1,0x8001,50,xt_newReturnStmt_V_jK1rm},
	{TMIT_native_code, newReturnStmt_R_qKlYr,(const Char *)&nmim_61,13,
	(const Char *)&sgim_61,82,1,0x1,51,xt_newReturnStmt_R_qKlYr},
	{TMIT_native_code, newRetStmt_V_b31KM,(const Char *)&nmim_62,10,
	(const Char *)&sgim_62,74,1,0x8001,52,xt_newRetStmt_V_b31KM},
	{TMIT_native_code, newRetStmt_R_LEVEG,(const Char *)&nmim_63,10,
	(const Char *)&sgim_63,76,1,0x1,53,xt_newRetStmt_R_LEVEG},
	{TMIT_native_code, newIfStmt_VU_UI21B,(const Char *)&nmim_64,9,
	(const Char *)&sgim_64,107,1,0x8001,54,xt_newIfStmt_VU_UI21B},
	{TMIT_native_code, newIfStmt_I_1xHmT,(const Char *)&nmim_65,9,
	(const Char *)&sgim_65,74,1,0x1,55,xt_newIfStmt_I_1xHmT},
	{TMIT_native_code, newIdentityStmt_VV_TAhJK,(const Char *)&nmim_66,15,
	(const Char *)&sgim_66,114,1,0x8001,56,xt_newIdentityStmt_VV_TAhJK},
	{TMIT_native_code, newIdentityStmt_I_08QnB,(const Char *)&nmim_67,15,
	(const Char *)&sgim_67,86,1,0x1,57,xt_newIdentityStmt_I_08QnB},
	{TMIT_native_code, newAssignStmt_VV_hoesU,(const Char *)&nmim_68,13,
	(const Char *)&sgim_68,112,1,0x8001,58,xt_newAssignStmt_VV_hoesU},
	{TMIT_native_code, newAssignStmt_A_p4JOC,(const Char *)&nmim_69,13,
	(const Char *)&sgim_69,82,1,0x1,59,xt_newAssignStmt_A_p4JOC},
	{TMIT_native_code, newInvokeStmt_V_1vObO,(const Char *)&nmim_70,13,
	(const Char *)&sgim_70,77,1,0x8001,60,xt_newInvokeStmt_V_1vObO},
	{TMIT_native_code, newInvokeStmt_I_aYjvp,(const Char *)&nmim_71,13,
	(const Char *)&sgim_71,82,1,0x1,61,xt_newInvokeStmt_I_aYjvp},
	{TMIT_native_code, newTableSwitchStmt_ViiLU_OfV1K,(const Char *)&nmim_72,18,
	(const Char *)&sgim_72,145,1,0x8001,62,xt_newTableSwitchStmt_ViiLU_OfV1K},
	{TMIT_native_code, newTableSwitchStmt_T_mjcQq,(const Char *)&nmim_73,18,
	(const Char *)&sgim_73,92,1,0x1,63,xt_newTableSwitchStmt_T_mjcQq},
	{TMIT_native_code, newLookupSwitchStmt_VLLU_wHqHw,(const Char *)&nmim_74,19,
	(const Char *)&sgim_74,171,1,0x8001,64,xt_newLookupSwitchStmt_VLLU_wHqHw},
	{TMIT_native_code, newLookupSwitchStmt_L_AXEdZ,(const Char *)&nmim_75,19,
	(const Char *)&sgim_75,94,1,0x1,65,xt_newLookupSwitchStmt_L_AXEdZ},
	{TMIT_native_code, newLocal_ST_6C2Ph,(const Char *)&nmim_76,8,
	(const Char *)&sgim_76,82,1,0x8001,66,xt_newLocal_ST_6C2Ph},
	{TMIT_native_code, newTrap_SUUU_C5qOh,(const Char *)&nmim_77,7,
	(const Char *)&sgim_77,170,1,0x8001,67,xt_newTrap_SUUU_C5qOh},
	{TMIT_native_code, newTrap_T_RNCPO,(const Char *)&nmim_78,7,
	(const Char *)&sgim_78,70,1,0x1,68,xt_newTrap_T_RNCPO},
	{TMIT_native_code, newStaticFieldRef_S_tYU30,(const Char *)&nmim_79,17,
	(const Char *)&sgim_79,78,1,0x8001,69,xt_newStaticFieldRef_S_tYU30},
	{TMIT_native_code, newThisRef_S_BFvtM,(const Char *)&nmim_80,10,
	(const Char *)&sgim_80,71,1,0x8001,70,xt_newThisRef_S_BFvtM},
	{TMIT_native_code, newParameterRef_Si_ndYr0,(const Char *)&nmim_81,15,
	(const Char *)&sgim_81,78,1,0x8001,71,xt_newParameterRef_Si_ndYr0},
	{TMIT_native_code, newInstanceFieldRef_VS_3Eufq,(const Char *)&nmim_82,19,
	(const Char *)&sgim_82,115,1,0x8001,72,xt_newInstanceFieldRef_VS_3Eufq},
	{TMIT_native_code, newCaughtExceptionRef_J_7doAb,(const Char *)&nmim_83,21,
	(const Char *)&sgim_83,90,1,0x8001,73,xt_newCaughtExceptionRef_J_7doAb},
	{TMIT_native_code, newArrayRef_VV_dZEir,(const Char *)&nmim_84,11,
	(const Char *)&sgim_84,110,1,0x8001,74,xt_newArrayRef_VV_dZEir},
	{TMIT_native_code, newVariableBox_V_eHj84,(const Char *)&nmim_85,14,
	(const Char *)&sgim_85,75,1,0x8001,75,xt_newVariableBox_V_eHj84},
	{TMIT_native_code, newLocalBox_V_Hn4sx,(const Char *)&nmim_86,11,
	(const Char *)&sgim_86,75,1,0x8001,76,xt_newLocalBox_V_Hn4sx},
	{TMIT_native_code, newRValueBox_V_Ne1K9,(const Char *)&nmim_87,12,
	(const Char *)&sgim_87,75,1,0x8001,77,xt_newRValueBox_V_Ne1K9},
	{TMIT_native_code, newImmediateBox_V_rxkSX,(const Char *)&nmim_88,15,
	(const Char *)&sgim_88,75,1,0x8001,78,xt_newImmediateBox_V_rxkSX},
	{TMIT_native_code, newExprBox_V_B8P02,(const Char *)&nmim_89,10,
	(const Char *)&sgim_89,75,1,0x1,79,xt_newExprBox_V_B8P02},
	{TMIT_native_code, newArgBox_V_gOZZr,(const Char *)&nmim_90,9,
	(const Char *)&sgim_90,75,1,0x8001,80,xt_newArgBox_V_gOZZr},
	{TMIT_native_code, newObjExprBox_V_uxjD5,(const Char *)&nmim_91,13,
	(const Char *)&sgim_91,75,1,0x1,81,xt_newObjExprBox_V_uxjD5},
	{TMIT_native_code, newIdentityRefBox_V_54hez,(const Char *)&nmim_92,17,
	(const Char *)&sgim_92,75,1,0x8001,82,xt_newIdentityRefBox_V_54hez},
	{TMIT_native_code, newConditionExprBox_V_0Cume,(const Char *)&nmim_93,19,
	(const Char *)&sgim_93,75,1,0x8001,83,xt_newConditionExprBox_V_0Cume},
	{TMIT_native_code, newInvokeExprBox_V_PzEuX,(const Char *)&nmim_94,16,
	(const Char *)&sgim_94,75,1,0x8001,84,xt_newInvokeExprBox_V_PzEuX},
	{TMIT_native_code, newStmtBox_U_0mQ3j,(const Char *)&nmim_95,10,
	(const Char *)&sgim_95,73,1,0x8001,85,xt_newStmtBox_U_0mQ3j},
	{TMIT_native_code, newExpr_V_B7nJe,(const Char *)&nmim_96,7,
	(const Char *)&sgim_96,72,1,0x1,86,xt_newExpr_V_B7nJe},
    } /* end of methodsigs */
};


/*M init__OibyA: ca.mcgill.sable.soot.grimp.Grimp.<init>()V */

Class xt_init__OibyA[] = { 0 };

Void init__OibyA(Object p0)
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

/*M v__ES3xL: ca.mcgill.sable.soot.grimp.Grimp.v()Lca/mcgill/sable/soot/grimp/Grimp; */

Class xt_v__ES3xL[] = { 0 };

Object v__ES3xL(void)
{
Object a0, a1;
PROLOGUE;


	if (cl_ca_mcgill_sable_soot_grimp_Grimp.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_grimp_Grimp.C);

L0:	a1 = cl_ca_mcgill_sable_soot_grimp_Grimp.V.grimpRepresentation;
	return a1;

	/*NOTREACHED*/
}

/*M newBody_S_gyWnS: ca.mcgill.sable.soot.grimp.Grimp.newBody(Lca/mcgill/sable/soot/SootMethod;)Lca/mcgill/sable/soot/Body; */

Class xt_newBody_S_gyWnS[] = { 0 };

Object newBody_S_gyWnS(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GrimpBody.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_P3u3o(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M buildBodyOfFrom_SBi_5OpM6: ca.mcgill.sable.soot.grimp.Grimp.buildBodyOfFrom(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/soot/Body;I)Lca/mcgill/sable/soot/Body; */

Class xt_buildBodyOfFrom_SBi_5OpM6[] = { 0 };

Object buildBodyOfFrom_SBi_5OpM6(Object p0, Object p1, Object p2, Int p3)
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

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GrimpBody.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	i5 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SBi_b8v3X(a2,a3,a4,i5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newXorExpr_VV_zgr82: ca.mcgill.sable.soot.grimp.Grimp.newXorExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/XorExpr; */

Class xt_newXorExpr_VV_zgr82[] = { 0 };

Object newXorExpr_VV_zgr82(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GXorExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_iKN18(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newUshrExpr_VV_9OIJi: ca.mcgill.sable.soot.grimp.Grimp.newUshrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/UshrExpr; */

Class xt_newUshrExpr_VV_9OIJi[] = { 0 };

Object newUshrExpr_VV_9OIJi(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GUshrExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_rjIe7(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newSubExpr_VV_jXJbu: ca.mcgill.sable.soot.grimp.Grimp.newSubExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/SubExpr; */

Class xt_newSubExpr_VV_jXJbu[] = { 0 };

Object newSubExpr_VV_jXJbu(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GSubExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_5xE7z(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newShrExpr_VV_1XqBw: ca.mcgill.sable.soot.grimp.Grimp.newShrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ShrExpr; */

Class xt_newShrExpr_VV_1XqBw[] = { 0 };

Object newShrExpr_VV_1XqBw(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GShrExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_IOS4U(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newShlExpr_VV_PUZ1c: ca.mcgill.sable.soot.grimp.Grimp.newShlExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ShlExpr; */

Class xt_newShlExpr_VV_PUZ1c[] = { 0 };

Object newShlExpr_VV_PUZ1c(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GShlExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_k5mCn(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newRemExpr_VV_FMxFd: ca.mcgill.sable.soot.grimp.Grimp.newRemExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/RemExpr; */

Class xt_newRemExpr_VV_FMxFd[] = { 0 };

Object newRemExpr_VV_FMxFd(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GRemExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_Lv1qm(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newOrExpr_VV_HiAQ6: ca.mcgill.sable.soot.grimp.Grimp.newOrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/OrExpr; */

Class xt_newOrExpr_VV_HiAQ6[] = { 0 };

Object newOrExpr_VV_HiAQ6(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GOrExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_abSMQ(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNeExpr_VV_5z6ew: ca.mcgill.sable.soot.grimp.Grimp.newNeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NeExpr; */

Class xt_newNeExpr_VV_5z6ew[] = { 0 };

Object newNeExpr_VV_5z6ew(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GNeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_aRF2C(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newMulExpr_VV_9O7wf: ca.mcgill.sable.soot.grimp.Grimp.newMulExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/MulExpr; */

Class xt_newMulExpr_VV_9O7wf[] = { 0 };

Object newMulExpr_VV_9O7wf(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GMulExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_tlJfj(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLeExpr_VV_j2vl4: ca.mcgill.sable.soot.grimp.Grimp.newLeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LeExpr; */

Class xt_newLeExpr_VV_j2vl4[] = { 0 };

Object newLeExpr_VV_j2vl4(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GLeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_uEOEv(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newGeExpr_VV_j1KYf: ca.mcgill.sable.soot.grimp.Grimp.newGeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/GeExpr; */

Class xt_newGeExpr_VV_j1KYf[] = { 0 };

Object newGeExpr_VV_j1KYf(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GGeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_HQiHI(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newEqExpr_VV_r517A: ca.mcgill.sable.soot.grimp.Grimp.newEqExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/EqExpr; */

Class xt_newEqExpr_VV_r517A[] = { 0 };

Object newEqExpr_VV_r517A(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GEqExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_FI0Uh(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newDivExpr_VV_Zrtox: ca.mcgill.sable.soot.grimp.Grimp.newDivExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/DivExpr; */

Class xt_newDivExpr_VV_Zrtox[] = { 0 };

Object newDivExpr_VV_Zrtox(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GDivExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_ihEjm(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCmplExpr_VV_L3sp3: ca.mcgill.sable.soot.grimp.Grimp.newCmplExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmplExpr; */

Class xt_newCmplExpr_VV_L3sp3[] = { 0 };

Object newCmplExpr_VV_L3sp3(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GCmplExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_3qH9N(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCmpgExpr_VV_DWQPo: ca.mcgill.sable.soot.grimp.Grimp.newCmpgExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmpgExpr; */

Class xt_newCmpgExpr_VV_DWQPo[] = { 0 };

Object newCmpgExpr_VV_DWQPo(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GCmpgExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_Ax0Ff(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCmpExpr_VV_l6dZk: ca.mcgill.sable.soot.grimp.Grimp.newCmpExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmpExpr; */

Class xt_newCmpExpr_VV_l6dZk[] = { 0 };

Object newCmpExpr_VV_l6dZk(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GCmpExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_XjzHp(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newGtExpr_VV_Z9MZJ: ca.mcgill.sable.soot.grimp.Grimp.newGtExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/GtExpr; */

Class xt_newGtExpr_VV_Z9MZJ[] = { 0 };

Object newGtExpr_VV_Z9MZJ(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GGtExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_2i8wE(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLtExpr_VV_Zaxmy: ca.mcgill.sable.soot.grimp.Grimp.newLtExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LtExpr; */

Class xt_newLtExpr_VV_Zaxmy[] = { 0 };

Object newLtExpr_VV_Zaxmy(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GLtExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_P5Etr(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newAddExpr_VV_7cnb3: ca.mcgill.sable.soot.grimp.Grimp.newAddExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AddExpr; */

Class xt_newAddExpr_VV_7cnb3[] = { 0 };

Object newAddExpr_VV_7cnb3(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GAddExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_aBLxm(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newAndExpr_VV_llrdX: ca.mcgill.sable.soot.grimp.Grimp.newAndExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AndExpr; */

Class xt_newAndExpr_VV_llrdX[] = { 0 };

Object newAndExpr_VV_llrdX(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GAndExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_KcNsW(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNegExpr_V_ZofCq: ca.mcgill.sable.soot.grimp.Grimp.newNegExpr(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NegExpr; */

Class xt_newNegExpr_V_ZofCq[] = { 0 };

Object newNegExpr_V_ZofCq(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GNegExpr.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_tzjfx(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLengthExpr_V_5i4o8: ca.mcgill.sable.soot.grimp.Grimp.newLengthExpr(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LengthExpr; */

Class xt_newLengthExpr_V_5i4o8[] = { 0 };

Object newLengthExpr_V_5i4o8(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GLengthExpr.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_Jf6bK(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCastExpr_VT_2Njag: ca.mcgill.sable.soot.grimp.Grimp.newCastExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/CastExpr; */

Class xt_newCastExpr_VT_2Njag[] = { 0 };

Object newCastExpr_VT_2Njag(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GCastExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VT_BIAfE(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInstanceOfExpr_VT_66MFq: ca.mcgill.sable.soot.grimp.Grimp.newInstanceOfExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/InstanceOfExpr; */

Class xt_newInstanceOfExpr_VT_66MFq[] = { 0 };

Object newInstanceOfExpr_VT_66MFq(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GInstanceOfExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VT_eKkyk(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNewExpr_R_bIf9u: ca.mcgill.sable.soot.grimp.Grimp.newNewExpr(Lca/mcgill/sable/soot/RefType;)Lca/mcgill/sable/soot/jimple/NewExpr; */

Class xt_newNewExpr_R_bIf9u[] = { 0 };

Object newNewExpr_R_bIf9u(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNewExpr_R_zYk3f.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNewArrayExpr_TV_0MVt0: ca.mcgill.sable.soot.grimp.Grimp.newNewArrayExpr(Lca/mcgill/sable/soot/Type;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NewArrayExpr; */

Class xt_newNewArrayExpr_TV_0MVt0[] = { 0 };

Object newNewArrayExpr_TV_0MVt0(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_TV_rOFjT(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNewMultiArrayExpr_AL_Z2qaL: ca.mcgill.sable.soot.grimp.Grimp.newNewMultiArrayExpr(Lca/mcgill/sable/soot/ArrayType;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr; */

Class xt_newNewMultiArrayExpr_AL_Z2qaL[] = { 0 };

Object newNewMultiArrayExpr_AL_Z2qaL(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GNewMultiArrayExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_AL_VtIBw(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNewInvokeExpr_RSL_Yu41s: ca.mcgill.sable.soot.grimp.Grimp.newNewInvokeExpr(Lca/mcgill/sable/soot/RefType;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/NewInvokeExpr; */

Class xt_newNewInvokeExpr_RSL_Yu41s[] = { 0 };

Object newNewInvokeExpr_RSL_Yu41s(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_RSL_gzcZR(a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newStaticInvokeExpr_SL_ArUCB: ca.mcgill.sable.soot.grimp.Grimp.newStaticInvokeExpr(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/StaticInvokeExpr; */

Class xt_newStaticInvokeExpr_SL_ArUCB[] = { 0 };

Object newStaticInvokeExpr_SL_ArUCB(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GStaticInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SL_A4Iwc(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newSpecialInvokeExpr_LSL_u2HPi: ca.mcgill.sable.soot.grimp.Grimp.newSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr; */

Class xt_newSpecialInvokeExpr_LSL_u2HPi[] = { 0 };

Object newSpecialInvokeExpr_LSL_u2HPi(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GSpecialInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_LSL_DUAvw(a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newVirtualInvokeExpr_LSL_e8vOg: ca.mcgill.sable.soot.grimp.Grimp.newVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr; */

Class xt_newVirtualInvokeExpr_LSL_e8vOg[] = { 0 };

Object newVirtualInvokeExpr_LSL_e8vOg(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GVirtualInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VSL_jaDTA(a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInterfaceInvokeExp_LSL_uqlZZ: ca.mcgill.sable.soot.grimp.Grimp.newInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr; */

Class xt_newInterfaceInvokeExp_LSL_uqlZZ[] = { 0 };

Object newInterfaceInvokeExp_LSL_uqlZZ(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GInterfaceInvokeExpr.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VSL_XpUtS(a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newThrowStmt_V_prxVO: ca.mcgill.sable.soot.grimp.Grimp.newThrowStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ThrowStmt; */

Class xt_newThrowStmt_V_prxVO[] = { 0 };

Object newThrowStmt_V_prxVO(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GThrowStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_uTalB(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newThrowStmt_T_G2cRj: ca.mcgill.sable.soot.grimp.Grimp.newThrowStmt(Lca/mcgill/sable/soot/jimple/ThrowStmt;)Lca/mcgill/sable/soot/jimple/ThrowStmt; */

Class xt_newThrowStmt_T_G2cRj[] = { 0 };

Object newThrowStmt_T_G2cRj(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GThrowStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1043173984)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_uTalB(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newExitMonitorStmt_V_rqdUF: ca.mcgill.sable.soot.grimp.Grimp.newExitMonitorStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ExitMonitorStmt; */

Class xt_newExitMonitorStmt_V_rqdUF[] = { 0 };

Object newExitMonitorStmt_V_rqdUF(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GExitMonitorStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_gRuLQ(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newExitMonitorStmt_E_0cI0R: ca.mcgill.sable.soot.grimp.Grimp.newExitMonitorStmt(Lca/mcgill/sable/soot/jimple/ExitMonitorStmt;)Lca/mcgill/sable/soot/jimple/ExitMonitorStmt; */

Class xt_newExitMonitorStmt_E_0cI0R[] = { 0 };

Object newExitMonitorStmt_E_0cI0R(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GExitMonitorStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1043173984)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_gRuLQ(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newEnterMonitorStmt_V_3URmS: ca.mcgill.sable.soot.grimp.Grimp.newEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/EnterMonitorStmt; */

Class xt_newEnterMonitorStmt_V_3URmS[] = { 0 };

Object newEnterMonitorStmt_V_3URmS(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GEnterMonitorStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_2YoPn(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newEnterMonitorStmt_E_6lwc2: ca.mcgill.sable.soot.grimp.Grimp.newEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/EnterMonitorStmt;)Lca/mcgill/sable/soot/jimple/EnterMonitorStmt; */

Class xt_newEnterMonitorStmt_E_6lwc2[] = { 0 };

Object newEnterMonitorStmt_E_6lwc2(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GEnterMonitorStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1043173984)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_2YoPn(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newBreakpointStmt__tgs1V: ca.mcgill.sable.soot.grimp.Grimp.newBreakpointStmt()Lca/mcgill/sable/soot/jimple/BreakpointStmt; */

Class xt_newBreakpointStmt__tgs1V[] = { 0 };

Object newBreakpointStmt__tgs1V(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newBreakpointStmt__BYvBn.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newBreakpointStmt_B_R9gTQ: ca.mcgill.sable.soot.grimp.Grimp.newBreakpointStmt(Lca/mcgill/sable/soot/jimple/BreakpointStmt;)Lca/mcgill/sable/soot/jimple/BreakpointStmt; */

Class xt_newBreakpointStmt_B_R9gTQ[] = { 0 };

Object newBreakpointStmt_B_R9gTQ(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newBreakpointStmt__BYvBn.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newGotoStmt_U_0a8LF: ca.mcgill.sable.soot.grimp.Grimp.newGotoStmt(Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/GotoStmt; */

Class xt_newGotoStmt_U_0a8LF[] = { 0 };

Object newGotoStmt_U_0a8LF(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGotoStmt_U_qRelW.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newGotoStmt_G_pSxTw: ca.mcgill.sable.soot.grimp.Grimp.newGotoStmt(Lca/mcgill/sable/soot/jimple/GotoStmt;)Lca/mcgill/sable/soot/jimple/GotoStmt; */

Class xt_newGotoStmt_G_pSxTw[] = { 0 };

Object newGotoStmt_G_pSxTw(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1167855719)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newGotoStmt_U_qRelW.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNopStmt__9gNRE: ca.mcgill.sable.soot.grimp.Grimp.newNopStmt()Lca/mcgill/sable/soot/jimple/NopStmt; */

Class xt_newNopStmt__9gNRE[] = { 0 };

Object newNopStmt__9gNRE(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNopStmt__PVmrT.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newNopStmt_N_TtrCt: ca.mcgill.sable.soot.grimp.Grimp.newNopStmt(Lca/mcgill/sable/soot/jimple/NopStmt;)Lca/mcgill/sable/soot/jimple/NopStmt; */

Class xt_newNopStmt_N_TtrCt[] = { 0 };

Object newNopStmt_N_TtrCt(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newNopStmt__PVmrT.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newReturnVoidStmt__3srtg: ca.mcgill.sable.soot.grimp.Grimp.newReturnVoidStmt()Lca/mcgill/sable/soot/jimple/ReturnVoidStmt; */

Class xt_newReturnVoidStmt__3srtg[] = { 0 };

Object newReturnVoidStmt__3srtg(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newReturnVoidStmt__bav3J.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newReturnVoidStmt_R_6f0ds: ca.mcgill.sable.soot.grimp.Grimp.newReturnVoidStmt(Lca/mcgill/sable/soot/jimple/ReturnVoidStmt;)Lca/mcgill/sable/soot/jimple/ReturnVoidStmt; */

Class xt_newReturnVoidStmt_R_6f0ds[] = { 0 };

Object newReturnVoidStmt_R_6f0ds(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newReturnVoidStmt__bav3J.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newReturnStmt_V_jK1rm: ca.mcgill.sable.soot.grimp.Grimp.newReturnStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ReturnStmt; */

Class xt_newReturnStmt_V_jK1rm[] = { 0 };

Object newReturnStmt_V_jK1rm(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GReturnStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_MCDsN(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newReturnStmt_R_qKlYr: ca.mcgill.sable.soot.grimp.Grimp.newReturnStmt(Lca/mcgill/sable/soot/jimple/ReturnStmt;)Lca/mcgill/sable/soot/jimple/ReturnStmt; */

Class xt_newReturnStmt_R_qKlYr[] = { 0 };

Object newReturnStmt_R_qKlYr(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GReturnStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-13531602)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_MCDsN(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newRetStmt_V_b31KM: ca.mcgill.sable.soot.grimp.Grimp.newRetStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/RetStmt; */

Class xt_newRetStmt_V_b31KM[] = { 0 };

Object newRetStmt_V_b31KM(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GRetStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_1jO23(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newRetStmt_R_LEVEG: ca.mcgill.sable.soot.grimp.Grimp.newRetStmt(Lca/mcgill/sable/soot/jimple/RetStmt;)Lca/mcgill/sable/soot/jimple/RetStmt; */

Class xt_newRetStmt_R_LEVEG[] = { 0 };

Object newRetStmt_R_LEVEG(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GRetStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-367608741)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_1jO23(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIfStmt_VU_UI21B: ca.mcgill.sable.soot.grimp.Grimp.newIfStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/IfStmt; */

Class xt_newIfStmt_VU_UI21B[] = { 0 };

Object newIfStmt_VU_UI21B(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GIfStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VU_WP7zy(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIfStmt_I_1xHmT: ca.mcgill.sable.soot.grimp.Grimp.newIfStmt(Lca/mcgill/sable/soot/jimple/IfStmt;)Lca/mcgill/sable/soot/jimple/IfStmt; */

Class xt_newIfStmt_I_1xHmT[] = { 0 };

Object newIfStmt_I_1xHmT(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GIfStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,560742528)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1164416791)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VU_WP7zy(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIdentityStmt_VV_TAhJK: ca.mcgill.sable.soot.grimp.Grimp.newIdentityStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/IdentityStmt; */

Class xt_newIdentityStmt_VV_TAhJK[] = { 0 };

Object newIdentityStmt_VV_TAhJK(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GIdentityStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_2eRFh(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIdentityStmt_I_08QnB: ca.mcgill.sable.soot.grimp.Grimp.newIdentityStmt(Lca/mcgill/sable/soot/jimple/IdentityStmt;)Lca/mcgill/sable/soot/jimple/IdentityStmt; */

Class xt_newIdentityStmt_I_08QnB[] = { 0 };

Object newIdentityStmt_I_08QnB(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GIdentityStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-2065038185)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1235668254)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_2eRFh(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newAssignStmt_VV_hoesU: ca.mcgill.sable.soot.grimp.Grimp.newAssignStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AssignStmt; */

Class xt_newAssignStmt_VV_hoesU[] = { 0 };

Object newAssignStmt_VV_hoesU(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GAssignStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_HWVgp(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newAssignStmt_A_p4JOC: ca.mcgill.sable.soot.grimp.Grimp.newAssignStmt(Lca/mcgill/sable/soot/jimple/AssignStmt;)Lca/mcgill/sable/soot/jimple/AssignStmt; */

Class xt_newAssignStmt_A_p4JOC[] = { 0 };

Object newAssignStmt_A_p4JOC(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GAssignStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-2065038185)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1235668254)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_HWVgp(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInvokeStmt_V_1vObO: ca.mcgill.sable.soot.grimp.Grimp.newInvokeStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/InvokeStmt; */

Class xt_newInvokeStmt_V_1vObO[] = { 0 };

Object newInvokeStmt_V_1vObO(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GInvokeStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_MGzt9(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInvokeStmt_I_aYjvp: ca.mcgill.sable.soot.grimp.Grimp.newInvokeStmt(Lca/mcgill/sable/soot/jimple/InvokeStmt;)Lca/mcgill/sable/soot/jimple/InvokeStmt; */

Class xt_newInvokeStmt_I_aYjvp[] = { 0 };

Object newInvokeStmt_I_aYjvp(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GInvokeStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-406008228)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_MGzt9(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newTableSwitchStmt_ViiLU_OfV1K: ca.mcgill.sable.soot.grimp.Grimp.newTableSwitchStmt(Lca/mcgill/sable/soot/jimple/Value;IILca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/TableSwitchStmt; */

Class xt_newTableSwitchStmt_ViiLU_OfV1K[] = { 0 };

Object newTableSwitchStmt_ViiLU_OfV1K(Object p0, Object p1, Int p2, Int p3, Object p4, Object p5)
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

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.C);
	a2 = a1;
	a3 = av1;
	i4 = iv2;
	i5 = iv3;
	a6 = av4;
	a7 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ViiLU_ByONZ(a2,a3,i4,i5,a6,a7);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newTableSwitchStmt_T_mjcQq: ca.mcgill.sable.soot.grimp.Grimp.newTableSwitchStmt(Lca/mcgill/sable/soot/jimple/TableSwitchStmt;)Lca/mcgill/sable/soot/jimple/TableSwitchStmt; */

Class xt_newTableSwitchStmt_T_mjcQq[] = { 0 };

Object newTableSwitchStmt_T_mjcQq(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5, i6, i7;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1619313330)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = (*(Int(*)())findinterface(a4,-619146984)->f)(a4);
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = (*(Int(*)())findinterface(a5,278321262)->f)(a5);
	a6 = av1;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = (*(Object(*)())findinterface(a6,88489391)->f)(a6);
	a7 = av1;
	if (!a7) { 
		SetNPESource(); goto NULLX;
	}
	a7 = (*(Object(*)())findinterface(a7,-803057444)->f)(a7);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ViiLU_ByONZ(a2,a3,i4,i5,a6,a7);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLookupSwitchStmt_VLLU_wHqHw: ca.mcgill.sable.soot.grimp.Grimp.newLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/util/List;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/LookupSwitchStmt; */

Class xt_newLookupSwitchStmt_VLLU_wHqHw[] = { 0 };

Object newLookupSwitchStmt_VLLU_wHqHw(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	a6 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VLLU_PjP4n(a2,a3,a4,a5,a6);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLookupSwitchStmt_L_AXEdZ: ca.mcgill.sable.soot.grimp.Grimp.newLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/LookupSwitchStmt;)Lca/mcgill/sable/soot/jimple/LookupSwitchStmt; */

Class xt_newLookupSwitchStmt_L_AXEdZ[] = { 0 };

Object newLookupSwitchStmt_L_AXEdZ(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1619313330)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-272945785)->f)(a4);
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,88489391)->f)(a5);
	a6 = av1;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = (*(Object(*)())findinterface(a6,-803057444)->f)(a6);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VLLU_PjP4n(a2,a3,a4,a5,a6);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLocal_ST_6C2Ph: ca.mcgill.sable.soot.grimp.Grimp.newLocal(Ljava/lang/String;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_newLocal_ST_6C2Ph[] = { 0 };

Object newLocal_ST_6C2Ph(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = v__WbL8F();
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLocal_ST_UrNI5.f(a1,a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newTrap_SUUU_C5qOh: ca.mcgill.sable.soot.grimp.Grimp.newTrap(Lca/mcgill/sable/soot/SootClass;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/Trap; */

Class xt_newTrap_SUUU_C5qOh[] = { 0 };

Object newTrap_SUUU_C5qOh(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GTrap.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	a5 = av3;
	a6 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SUUU_ShucJ(a2,a3,a4,a5,a6);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newTrap_T_RNCPO: ca.mcgill.sable.soot.grimp.Grimp.newTrap(Lca/mcgill/sable/soot/jimple/Trap;)Lca/mcgill/sable/soot/jimple/Trap; */

Class xt_newTrap_T_RNCPO[] = { 0 };

Object newTrap_T_RNCPO(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GTrap.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1567733942)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1240191443)->f)(a4);
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,-738151089)->f)(a5);
	a6 = av1;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = (*(Object(*)())findinterface(a6,-351888170)->f)(a6);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SUUU_ShucJ(a2,a3,a4,a5,a6);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newStaticFieldRef_S_tYU30: ca.mcgill.sable.soot.grimp.Grimp.newStaticFieldRef(Lca/mcgill/sable/soot/SootField;)Lca/mcgill/sable/soot/jimple/StaticFieldRef; */

Class xt_newStaticFieldRef_S_tYU30[] = { 0 };

Object newStaticFieldRef_S_tYU30(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newStaticFieldRef_S_NA8MK.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newThisRef_S_BFvtM: ca.mcgill.sable.soot.grimp.Grimp.newThisRef(Lca/mcgill/sable/soot/SootClass;)Lca/mcgill/sable/soot/jimple/ThisRef; */

Class xt_newThisRef_S_BFvtM[] = { 0 };

Object newThisRef_S_BFvtM(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newThisRef_S_7k96k.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newParameterRef_Si_ndYr0: ca.mcgill.sable.soot.grimp.Grimp.newParameterRef(Lca/mcgill/sable/soot/SootMethod;I)Lca/mcgill/sable/soot/jimple/ParameterRef; */

Class xt_newParameterRef_Si_ndYr0[] = { 0 };

Object newParameterRef_Si_ndYr0(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = v__WbL8F();
	a2 = av1;
	i3 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newParameterRef_Si_1GJaU.f(a1,a2,i3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInstanceFieldRef_VS_3Eufq: ca.mcgill.sable.soot.grimp.Grimp.newInstanceFieldRef(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/SootField;)Lca/mcgill/sable/soot/jimple/InstanceFieldRef; */

Class xt_newInstanceFieldRef_VS_3Eufq[] = { 0 };

Object newInstanceFieldRef_VS_3Eufq(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VS_ABInR(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newCaughtExceptionRef_J_7doAb: ca.mcgill.sable.soot.grimp.Grimp.newCaughtExceptionRef(Lca/mcgill/sable/soot/jimple/JimpleBody;)Lca/mcgill/sable/soot/jimple/CaughtExceptionRef; */

Class xt_newCaughtExceptionRef_J_7doAb[] = { 0 };

Object newCaughtExceptionRef_J_7doAb(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newCaughtExceptionRef_J_NQePj.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newArrayRef_VV_dZEir: ca.mcgill.sable.soot.grimp.Grimp.newArrayRef(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ArrayRef; */

Class xt_newArrayRef_VV_dZEir[] = { 0 };

Object newArrayRef_VV_dZEir(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GArrayRef.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_ukdRA(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newVariableBox_V_eHj84: ca.mcgill.sable.soot.grimp.Grimp.newVariableBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newVariableBox_V_eHj84[] = { 0 };

Object newVariableBox_V_eHj84(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newVariableBox_V_sAbI7.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newLocalBox_V_Hn4sx: ca.mcgill.sable.soot.grimp.Grimp.newLocalBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newLocalBox_V_Hn4sx[] = { 0 };

Object newLocalBox_V_Hn4sx(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLocalBox_V_BsxZy.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newRValueBox_V_Ne1K9: ca.mcgill.sable.soot.grimp.Grimp.newRValueBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newRValueBox_V_Ne1K9[] = { 0 };

Object newRValueBox_V_Ne1K9(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GRValueBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_4PDss(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newImmediateBox_V_rxkSX: ca.mcgill.sable.soot.grimp.Grimp.newImmediateBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newImmediateBox_V_rxkSX[] = { 0 };

Object newImmediateBox_V_rxkSX(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newImmediateBox_V_7jLB8.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newExprBox_V_B8P02: ca.mcgill.sable.soot.grimp.Grimp.newExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newExprBox_V_B8P02[] = { 0 };

Object newExprBox_V_B8P02(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_ExprBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_zi7aZ(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newArgBox_V_gOZZr: ca.mcgill.sable.soot.grimp.Grimp.newArgBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newArgBox_V_gOZZr[] = { 0 };

Object newArgBox_V_gOZZr(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_ExprBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_zi7aZ(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newObjExprBox_V_uxjD5: ca.mcgill.sable.soot.grimp.Grimp.newObjExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newObjExprBox_V_uxjD5[] = { 0 };

Object newObjExprBox_V_uxjD5(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_ObjExprBox.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_E0y7o(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newIdentityRefBox_V_54hez: ca.mcgill.sable.soot.grimp.Grimp.newIdentityRefBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newIdentityRefBox_V_54hez[] = { 0 };

Object newIdentityRefBox_V_54hez(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newIdentityRefBox_V_FOSWQ.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newConditionExprBox_V_0Cume: ca.mcgill.sable.soot.grimp.Grimp.newConditionExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newConditionExprBox_V_0Cume[] = { 0 };

Object newConditionExprBox_V_0Cume(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newConditionExprBox_V_KdLXR.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInvokeExprBox_V_PzEuX: ca.mcgill.sable.soot.grimp.Grimp.newInvokeExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newInvokeExprBox_V_PzEuX[] = { 0 };

Object newInvokeExprBox_V_PzEuX(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newInvokeExprBox_V_TXEdu.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newStmtBox_U_0mQ3j: ca.mcgill.sable.soot.grimp.Grimp.newStmtBox(Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_newStmtBox_U_0mQ3j[] = { 0 };

Object newStmtBox_U_0mQ3j(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = v__WbL8F();
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newStmtBox_U_e3goW.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newExpr_V_B7nJe: ca.mcgill.sable.soot.grimp.Grimp.newExpr(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/Value; */

Class xt_newExpr_V_B7nJe[] = { 0 };

Object newExpr_V_B7nJe(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Expr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_grimp_ExprBox.C);
	a2 = a1;
	i3 = 0;
	a3 = v_i_P1Dgu(i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_V_zi7aZ(a2,a3);
	av2 = a1;
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Expr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_grim_8XTtw.C);
	a3 = a2;
	a4 = av2;
	a5 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_EG_2XNTm(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1229806575)->f)(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		getValue__qJWMb.f(a1);
	return a1;

L1:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(46,L2);
	a1 = av0;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	a3 = av0;
	a4 = av1;
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1421462317)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a1)->class->M.
		newArrayRef_VV_dZEir.f(a1,a2,a3);
	return a1;

L2:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(80,L3);
	a1 = av0;
	a2 = av0;
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1295252652)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExpr_V_B7nJe.f(a2,a3);
	a3 = av1;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-2023966063)->f)(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a1)->class->M.
		newInstanceFieldRef_VS_3Eufq.f(a1,a2,a3);
	return a1;

L3:	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__f5eGJ: ca.mcgill.sable.soot.grimp.Grimp.<clinit>()V */

Class xt_clinit__f5eGJ[] = { 0 };

Void clinit__f5eGJ(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_grimp_Grimp.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__OibyA(a2);
	cl_ca_mcgill_sable_soot_grimp_Grimp.V.grimpRepresentation = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_Grimp[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p'};

const void *st_ca_mcgill_sable_soot_grimp_Grimp[] = {
    ch_ca_mcgill_sable_soot_grimp_Grimp+32,	/* 0. ca.mcgill.sable.soot.grimp.Grimp */
    0};
