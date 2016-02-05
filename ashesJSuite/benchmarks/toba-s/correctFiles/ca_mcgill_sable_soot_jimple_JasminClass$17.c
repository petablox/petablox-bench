/*  ca_mcgill_sable_soot_jimple_JasminClass$17.c -- from Java class ca.mcgill.sable.soot.jimple.JasminClass$17  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$17.h"
#include "ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.h"
#include "ca_mcgill_sable_soot_jimple_JimpleValueSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_FloatType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_jimple_ArrayRef.h"
#include "ca_mcgill_sable_soot_jimple_BinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_CastExpr.h"
#include "ca_mcgill_sable_soot_jimple_DoubleConstant.h"
#include "ca_mcgill_sable_soot_jimple_FieldRef.h"
#include "ca_mcgill_sable_soot_jimple_FloatConstant.h"
#include "ca_mcgill_sable_soot_jimple_InstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_InstanceOfExpr.h"
#include "ca_mcgill_sable_soot_jimple_IntConstant.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$1.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$10.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$11.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$12.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$13.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$14.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$15.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$16.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$18.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$19.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$2.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$20.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$21.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$22.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$23.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$24.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$25.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$26.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$27.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$28.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$29.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$3.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$30.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$31.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$32.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$33.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$34.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$35.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$36.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$37.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$4.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$5.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$6.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$7.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$8.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$9.h"
#include "ca_mcgill_sable_soot_jimple_LongConstant.h"
#include "ca_mcgill_sable_soot_jimple_NewArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_StaticFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_StringConstant.h"
#include "ca_mcgill_sable_soot_jimple_UnopExpr.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_Byte.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_Short.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_8Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_JimpleValueSwitch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_FloatType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
    &cl_ca_mcgill_sable_soot_jimple_BinopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_FieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceOfExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_JasminClass.C,
    &cl_ca_mcgill_sable_soot_jimp_damqt.C,
    &cl_ca_mcgill_sable_soot_jimp_1Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_2Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_3Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_4Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_5Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_6Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_7Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_9Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_aGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_eamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_GGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_HGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_IGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_JGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_KGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_LGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_MGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_NGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_OGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_PGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_famqt.C,
    &cl_ca_mcgill_sable_soot_jimp_lHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_mHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_nHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_oHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_pHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_qHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_rHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_sHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_gamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_hamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_iamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_jamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_kamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_lamqt.C,
    &cl_ca_mcgill_sable_soot_jimple_LongConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_NewArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_StringConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_UnopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_Byte.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_Short.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_8Gvs0[];
extern const void *st_ca_mcgill_sable_soot_jimp_8Gvs0[];
extern Class xt_caseAddExpr_A_Q4e8F[];
extern Class xt_caseAndExpr_A_2xAv0[];
extern Class xt_caseArrayRef_A_AizP3[];
extern Class xt_caseCastExpr_C_IEDht[];
extern Class xt_caseCmpExpr_C_CYt6L[];
extern Class xt_caseCmpgExpr_C_qRFkn[];
extern Class xt_caseCmplExpr_C_ayQnC[];
extern Class xt_defaultCase_V_UdubV[];
extern Class xt_caseDivExpr_D_Isy9T[];
extern Class xt_caseDoubleConstant_D_OYSyX[];
extern Class xt_caseFloatConstant_F_UMIwn[];
extern Class xt_caseInstanceFieldRef_I_uNaGi[];
extern Class xt_caseInstanceOfExpr_I_uI1aU[];
extern Class xt_caseIntConstant_I_qQY1y[];
extern Class xt_caseInterfaceInvokeExpr_I_mTXsb[];
extern Class xt_caseLengthExpr_L_wHjFf[];
extern Class xt_caseLocal_L_ADdcq[];
extern Class xt_caseLongConstant_L_kCiI7[];
extern Class xt_caseMulExpr_M_GQrpf[];
extern Class xt_caseLtExpr_L_85z8G[];
extern Class xt_caseLeExpr_L_axtTy[];
extern Class xt_caseGtExpr_G_Q4qZ5[];
extern Class xt_caseGeExpr_G_Ok55i[];
extern Class xt_caseNeExpr_N_46uC3[];
extern Class xt_caseEqExpr_E_iEoG1[];
extern Class xt_caseNegExpr_N_0npUL[];
extern Class xt_caseNewArrayExpr_N_an4gv[];
extern Class xt_caseNewMultiArrayExpr_N_kD8MM[];
extern Class xt_caseNewExpr_N_eC5Oy[];
extern Class xt_caseNewInvokeExpr_N_Ezx8c[];
extern Class xt_caseNullConstant_N_kn6Zv[];
extern Class xt_caseOrExpr_O_8KbCv[];
extern Class xt_caseRemExpr_R_MPGoW[];
extern Class xt_caseShlExpr_S_Obn8a[];
extern Class xt_caseShrExpr_S_25zDS[];
extern Class xt_caseSpecialInvokeExpr_S_gOox9[];
extern Class xt_caseStaticInvokeExpr_S_6oKW3[];
extern Class xt_caseStaticFieldRef_S_OeA06[];
extern Class xt_caseStringConstant_S_y2JqB[];
extern Class xt_caseSubExpr_S_WElkF[];
extern Class xt_caseUshrExpr_U_kli2W[];
extern Class xt_caseVirtualInvokeExpr_V_ce0Ox[];
extern Class xt_caseXorExpr_X_iPVWu[];
extern Class xt_init_J_qUJ9u[];

#define HASHMASK 0x1ff
/*  14.  b1803614  (14)  caseCmplExpr  */
/*  1c.  aa31981c  (1c)  caseNullConstant  */
/*  1e.  b8576a1e  (1e)  caseCaughtExceptionRef  */
/*  22.  b47e3e22  (22)  caseAddExpr  */
/*  24.  e47b4024  (24)  caseNewInvokeExpr  */
/*  25.  5961ec24  (24)  caseNewMultiArrayExpr  */
/*  36.  5bb98036  (36)  caseFloatConstant  */
/*  44.  7aa88844  (44)  caseThisRef  */
/*  52.  c99ce052  (52)  caseSpecialInvokeExpr  */
/*  53.  e028e852  (52)  caseNewArrayExpr  */
/*  68.  33a85868  (68)  caseIntConstant  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  80.  fd661c80  (80)  caseInstanceOfExpr  */
/*  92.  e66b5492  (92)  caseDivExpr  */
/*  93.  b0814492  (92)  caseInterfaceInvokeExpr  */
/*  9a.  532d269a  (9a)  caseShrExpr  */
/*  a0.  8d1802a0  (a0)  caseRemExpr  */
/*  f4.  16a50af4  (f4)  caseNegExpr  */
/*  f8.  66a072f8  (f8)  caseUshrExpr  */
/*  fc.  5b7a7efc  (fc)  caseGeExpr  */
/*  10a.  7a85770a  (10a)  caseInstanceFieldRef  */
/*  128.  ced4a328  (128)  defaultCase  */
/*  138.  23820138  (138)  caseStringConstant  */
/*  146.  2bfb1546  (146)  caseShlExpr  */
/*  14e.  d11a2b4e  (14e)  caseXorExpr  */
/*  14f.  a8616f4e  (14e)  caseVirtualInvokeExpr  */
/*  162.  2b409362  (162)  caseGtExpr  */
/*  164.  b8a2164  (164)  caseLengthExpr  */
/*  16a.  e1a7b6a  (16a)  caseLeExpr  */
/*  186.  b64aa986  (186)  caseAndExpr  */
/*  188.  ba3f5d88  (188)  caseEqExpr  */
/*  192.  4897dd92  (192)  caseParameterRef  */
/*  196.  bbf41396  (196)  caseNeExpr  */
/*  198.  36ffff98  (198)  caseDoubleConstant  */
/*  19a.  dad9b79a  (19a)  caseCmpgExpr  */
/*  19e.  b37359e  (19e)  caseOrExpr  */
/*  1ac.  750b8dac  (1ac)  caseStaticFieldRef  */
/*  1ba.  47c3ba  (1ba)  caseArrayRef  */
/*  1bc.  7e0f3fbc  (1bc)  caseSubExpr  */
/*  1c4.  9dd6adc4  (1c4)  caseMulExpr  */
/*  1c5.  dac1dbc4  (1c4)  caseStaticInvokeExpr  */
/*  1c8.  8bbb4fc8  (1c8)  caseLocal  */
/*  1d0.  df5467d0  (1d0)  caseCmpExpr  */
/*  1d1.  dde08fd0  (1d0)  caseLtExpr  */
/*  1d4.  d47fe3d4  (1d4)  caseNewExpr  */
/*  1d6.  16b291d6  (1d6)  caseCastExpr  */
/*  1ec.  fea967ec  (1ec)  caseNextNextStmtRef  */
/*  1f6.  94d13bf6  (1f6)  caseLongConstant  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1316997612, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseCmplExpr_C_ayQnC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1439590372, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNullConstant_N_kn6Zv,
    0, 0,
    -1202230754, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseCaughtExceptionRef_C_U2Mk5,
    0, 0, 0, 0, 0, 0,
    -1266794974, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseAddExpr_A_Q4e8F,
    0, 0,
    -461684700, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNewInvokeExpr_N_Ezx8c,
    1499589668, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNewMultiArrayExpr_N_kD8MM,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1538883638, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseFloatConstant_F_UMIwn,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    2057865284, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseThisRef_T_GGxpE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -912465838, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseSpecialInvokeExpr_S_gOox9,
    -534189998, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNewArrayExpr_N_an4gv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    866670696, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseIntConstant_I_qQY1y,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43639680, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseInstanceOfExpr_I_uI1aU,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -429173614, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseDivExpr_D_Isy9T,
    -1333705582, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseInterfaceInvokeExpr_I_mTXsb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1395467930, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseShrExpr_S_25zDS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1927806304, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseRemExpr_R_MPGoW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379914996, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNegExpr_N_0npUL,
    0, 0, 0, 0, 0, 0,
    1721791224, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseUshrExpr_U_kli2W,
    0, 0, 0, 0, 0, 0,
    1534754556, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseGeExpr_G_Ok55i,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    2055567114, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseInstanceFieldRef_I_uNaGi,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.defaultCase_O_MFilX,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    595722552, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseStringConstant_S_y2JqB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    737875270, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseShlExpr_S_Obn8a,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -786814130, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseXorExpr_X_iPVWu,
    -1470009522, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseVirtualInvokeExpr_V_ce0Ox,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    725652322, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseGtExpr_G_Q4qZ5,
    0, 0,
    193601892, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseLengthExpr_L_wHjFf,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236616554, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseLeExpr_L_axtTy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1236620922, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseAndExpr_A_2xAv0,
    0, 0,
    -1170252408, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseEqExpr_E_iEoG1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1217912210, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseParameterRef_P_y92mo,
    0, 0, 0, 0, 0, 0,
    -1141632106, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNeExpr_N_46uC3,
    0, 0,
    922746776, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseDoubleConstant_D_OYSyX,
    0, 0,
    -623265894, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseCmpgExpr_C_qRFkn,
    0, 0, 0, 0, 0, 0,
    188167582, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseOrExpr_O_8KbCv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1963691436, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseStaticFieldRef_S_OeA06,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    4703162, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseArrayRef_A_AizP3,
    0, 0,
    2114928572, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseSubExpr_S_WElkF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646875196, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseMulExpr_M_GQrpf,
    -624829500, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseStaticInvokeExpr_S_6oKW3,
    0, 0, 0, 0,
    -1950658616, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseLocal_L_ADdcq,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -548116528, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseCmpExpr_C_CYt6L,
    -572485680, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseLtExpr_L_85z8G,
    0, 0, 0, 0,
    -729816108, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNewExpr_N_eC5Oy,
    0, 0,
    380801494, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseCastExpr_C_IEDht,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -22452244, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseNextNextStmtRef_N_EdTIz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1798226954, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.M.caseLongConstant_L_kCiI7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','1','7'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
't','h','i','s','$','0'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','a','s','m','i','n','C',
'l','a','s','s',';'};
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
'c','a','s','e','A','r','r','a','y','R','e','f'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','r','r','a','y','R',
'e','f',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','D','o','u','b','l','e','C','o','n','s','t','a','n','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','D','o','u','b','l','e',
'C','o','n','s','t','a','n','t',';',')','V'};
static const Char nmim_14[] = {
'c','a','s','e','F','l','o','a','t','C','o','n','s','t','a','n','t'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','a','t','C',
'o','n','s','t','a','n','t',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','I','n','t','C','o','n','s','t','a','n','t'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','t','C','o','n',
's','t','a','n','t',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','L','o','n','g','C','o','n','s','t','a','n','t'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','n','g','C','o',
'n','s','t','a','n','t',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','N','u','l','l','C','o','n','s','t','a','n','t'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','u','l','l','C','o',
'n','s','t','a','n','t',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','S','t','r','i','n','g','C','o','n','s','t','a','n','t'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','r','i','n','g',
'C','o','n','s','t','a','n','t',';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','A','d','d','E','x','p','r'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','d','d','E','x','p',
'r',';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','A','n','d','E','x','p','r'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','n','d','E','x','p',
'r',';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','C','m','p','E','x','p','r'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','E','x','p',
'r',';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','C','m','p','g','E','x','p','r'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','g','E','x',
'p','r',';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','C','m','p','l','E','x','p','r'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','l','E','x',
'p','r',';',')','V'};
static const Char nmim_24[] = {
'c','a','s','e','D','i','v','E','x','p','r'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','D','i','v','E','x','p',
'r',';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','E','q','E','x','p','r'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','q','E','x','p','r',
';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','G','e','E','x','p','r'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','e','E','x','p','r',
';',')','V'};
static const Char nmim_27[] = {
'c','a','s','e','G','t','E','x','p','r'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','t','E','x','p','r',
';',')','V'};
static const Char nmim_28[] = {
'c','a','s','e','L','e','E','x','p','r'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','e','E','x','p','r',
';',')','V'};
static const Char nmim_29[] = {
'c','a','s','e','L','t','E','x','p','r'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','t','E','x','p','r',
';',')','V'};
static const Char nmim_30[] = {
'c','a','s','e','M','u','l','E','x','p','r'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','M','u','l','E','x','p',
'r',';',')','V'};
static const Char nmim_31[] = {
'c','a','s','e','N','e','E','x','p','r'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','E','x','p','r',
';',')','V'};
static const Char nmim_32[] = {
'c','a','s','e','O','r','E','x','p','r'};
static const Char sgim_32[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','O','r','E','x','p','r',
';',')','V'};
static const Char nmim_33[] = {
'c','a','s','e','R','e','m','E','x','p','r'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','m','E','x','p',
'r',';',')','V'};
static const Char nmim_34[] = {
'c','a','s','e','S','h','l','E','x','p','r'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','h','l','E','x','p',
'r',';',')','V'};
static const Char nmim_35[] = {
'c','a','s','e','S','h','r','E','x','p','r'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','h','r','E','x','p',
'r',';',')','V'};
static const Char nmim_36[] = {
'c','a','s','e','S','u','b','E','x','p','r'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','u','b','E','x','p',
'r',';',')','V'};
static const Char nmim_37[] = {
'c','a','s','e','U','s','h','r','E','x','p','r'};
static const Char sgim_37[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','s','h','r','E','x',
'p','r',';',')','V'};
static const Char nmim_38[] = {
'c','a','s','e','X','o','r','E','x','p','r'};
static const Char sgim_38[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','X','o','r','E','x','p',
'r',';',')','V'};
static const Char nmim_39[] = {
'c','a','s','e','I','n','t','e','r','f','a','c','e','I','n','v','o','k',
'e','E','x','p','r'};
static const Char sgim_39[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','t','e','r','f',
'a','c','e','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_40[] = {
'c','a','s','e','S','p','e','c','i','a','l','I','n','v','o','k','e','E',
'x','p','r'};
static const Char sgim_40[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','p','e','c','i','a',
'l','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_41[] = {
'c','a','s','e','S','t','a','t','i','c','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_41[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','a','t','i','c',
'I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_42[] = {
'c','a','s','e','V','i','r','t','u','a','l','I','n','v','o','k','e','E',
'x','p','r'};
static const Char sgim_42[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','i','r','t','u','a',
'l','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_43[] = {
'c','a','s','e','N','e','w','I','n','v','o','k','e','E','x','p','r'};
static const Char sgim_43[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','I','n','v',
'o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_44[] = {
'c','a','s','e','C','a','s','t','E','x','p','r'};
static const Char sgim_44[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','a','s','t','E','x',
'p','r',';',')','V'};
static const Char nmim_45[] = {
'c','a','s','e','I','n','s','t','a','n','c','e','O','f','E','x','p','r'};
static const Char sgim_45[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','s','t','a','n',
'c','e','O','f','E','x','p','r',';',')','V'};
static const Char nmim_46[] = {
'c','a','s','e','N','e','w','A','r','r','a','y','E','x','p','r'};
static const Char sgim_46[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','A','r','r',
'a','y','E','x','p','r',';',')','V'};
static const Char nmim_47[] = {
'c','a','s','e','N','e','w','M','u','l','t','i','A','r','r','a','y','E',
'x','p','r'};
static const Char sgim_47[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','M','u','l',
't','i','A','r','r','a','y','E','x','p','r',';',')','V'};
static const Char nmim_48[] = {
'c','a','s','e','N','e','w','E','x','p','r'};
static const Char sgim_48[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','E','x','p',
'r',';',')','V'};
static const Char nmim_49[] = {
'c','a','s','e','L','e','n','g','t','h','E','x','p','r'};
static const Char sgim_49[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','e','n','g','t','h',
'E','x','p','r',';',')','V'};
static const Char nmim_50[] = {
'c','a','s','e','N','e','g','E','x','p','r'};
static const Char sgim_50[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','g','E','x','p',
'r',';',')','V'};
static const Char nmim_51[] = {
'c','a','s','e','I','n','s','t','a','n','c','e','F','i','e','l','d','R',
'e','f'};
static const Char sgim_51[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','s','t','a','n',
'c','e','F','i','e','l','d','R','e','f',';',')','V'};
static const Char nmim_52[] = {
'c','a','s','e','L','o','c','a','l'};
static const Char sgim_52[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','V'};
static const Char nmim_53[] = {
'c','a','s','e','P','a','r','a','m','e','t','e','r','R','e','f'};
static const Char sgim_53[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','P','a','r','a','m','e',
't','e','r','R','e','f',';',')','V'};
static const Char nmim_54[] = {
'c','a','s','e','N','e','x','t','N','e','x','t','S','t','m','t','R','e',
'f'};
static const Char sgim_54[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','x','t','N','e',
'x','t','S','t','m','t','R','e','f',';',')','V'};
static const Char nmim_55[] = {
'c','a','s','e','C','a','u','g','h','t','E','x','c','e','p','t','i','o',
'n','R','e','f'};
static const Char sgim_55[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','a','u','g','h','t',
'E','x','c','e','p','t','i','o','n','R','e','f',';',')','V'};
static const Char nmim_56[] = {
'c','a','s','e','T','h','i','s','R','e','f'};
static const Char sgim_56[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','i','s','R','e',
'f',';',')','V'};
static const Char nmim_57[] = {
'c','a','s','e','S','t','a','t','i','c','F','i','e','l','d','R','e','f'};
static const Char sgim_57[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','a','t','i','c',
'F','i','e','l','d','R','e','f',';',')','V'};
static const Char nmim_58[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_58[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_59[] = {
'g','e','t','R','e','s','u','l','t'};
static const Char sgim_59[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_60[] = {
's','e','t','R','e','s','u','l','t'};
static const Char sgim_60[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_61[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_61[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_62[] = {
'<','i','n','i','t','>'};
static const Char sgim_62[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','a','s','m','i','n',
'C','l','a','s','s',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_8Gvs0, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_8Gvs0, this0_oYxUV), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,41,1,0x12,0}, 
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
} inr_ca_mcgill_sable_soot_jimp_8Gvs0 = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_8Gvs0.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_8Gvs0 cl_ca_mcgill_sable_soot_jimp_8Gvs0 = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_8Gvs0),
    63,
    0,
    2,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    70, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_8Gvs0,
    st_ca_mcgill_sable_soot_jimp_8Gvs0,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_8Gvs0,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__neDCM,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,49,0},
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
	{TMIT_native_code, caseArrayRef_A_AizP3,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,41,1,0x8001,2,xt_caseArrayRef_A_AizP3},
	{TMIT_native_code, caseDoubleConstant_D_OYSyX,(const Char *)&nmim_13,18,
	(const Char *)&sgim_13,47,1,0x8001,9,xt_caseDoubleConstant_D_OYSyX},
	{TMIT_native_code, caseFloatConstant_F_UMIwn,(const Char *)&nmim_14,17,
	(const Char *)&sgim_14,46,1,0x8001,10,xt_caseFloatConstant_F_UMIwn},
	{TMIT_native_code, caseIntConstant_I_qQY1y,(const Char *)&nmim_15,15,
	(const Char *)&sgim_15,44,1,0x8001,13,xt_caseIntConstant_I_qQY1y},
	{TMIT_native_code, caseLongConstant_L_kCiI7,(const Char *)&nmim_16,16,
	(const Char *)&sgim_16,45,1,0x8001,17,xt_caseLongConstant_L_kCiI7},
	{TMIT_native_code, caseNullConstant_N_kn6Zv,(const Char *)&nmim_17,16,
	(const Char *)&sgim_17,45,1,0x8001,30,xt_caseNullConstant_N_kn6Zv},
	{TMIT_native_code, caseStringConstant_S_y2JqB,(const Char *)&nmim_18,18,
	(const Char *)&sgim_18,47,1,0x8001,38,xt_caseStringConstant_S_y2JqB},
	{TMIT_native_code, caseAddExpr_A_Q4e8F,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,40,1,0x8001,0,xt_caseAddExpr_A_Q4e8F},
	{TMIT_native_code, caseAndExpr_A_2xAv0,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,40,1,0x8001,1,xt_caseAndExpr_A_2xAv0},
	{TMIT_native_code, caseCmpExpr_C_CYt6L,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,1,0x8001,4,xt_caseCmpExpr_C_CYt6L},
	{TMIT_native_code, caseCmpgExpr_C_qRFkn,(const Char *)&nmim_22,12,
	(const Char *)&sgim_22,41,1,0x8001,5,xt_caseCmpgExpr_C_qRFkn},
	{TMIT_native_code, caseCmplExpr_C_ayQnC,(const Char *)&nmim_23,12,
	(const Char *)&sgim_23,41,1,0x8001,6,xt_caseCmplExpr_C_ayQnC},
	{TMIT_native_code, caseDivExpr_D_Isy9T,(const Char *)&nmim_24,11,
	(const Char *)&sgim_24,40,1,0x8001,8,xt_caseDivExpr_D_Isy9T},
	{TMIT_native_code, caseEqExpr_E_iEoG1,(const Char *)&nmim_25,10,
	(const Char *)&sgim_25,39,1,0x8001,24,xt_caseEqExpr_E_iEoG1},
	{TMIT_native_code, caseGeExpr_G_Ok55i,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,39,1,0x8001,22,xt_caseGeExpr_G_Ok55i},
	{TMIT_native_code, caseGtExpr_G_Q4qZ5,(const Char *)&nmim_27,10,
	(const Char *)&sgim_27,39,1,0x8001,21,xt_caseGtExpr_G_Q4qZ5},
	{TMIT_native_code, caseLeExpr_L_axtTy,(const Char *)&nmim_28,10,
	(const Char *)&sgim_28,39,1,0x8001,20,xt_caseLeExpr_L_axtTy},
	{TMIT_native_code, caseLtExpr_L_85z8G,(const Char *)&nmim_29,10,
	(const Char *)&sgim_29,39,1,0x8001,19,xt_caseLtExpr_L_85z8G},
	{TMIT_native_code, caseMulExpr_M_GQrpf,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,40,1,0x8001,18,xt_caseMulExpr_M_GQrpf},
	{TMIT_native_code, caseNeExpr_N_46uC3,(const Char *)&nmim_31,10,
	(const Char *)&sgim_31,39,1,0x8001,23,xt_caseNeExpr_N_46uC3},
	{TMIT_native_code, caseOrExpr_O_8KbCv,(const Char *)&nmim_32,10,
	(const Char *)&sgim_32,39,1,0x8001,31,xt_caseOrExpr_O_8KbCv},
	{TMIT_native_code, caseRemExpr_R_MPGoW,(const Char *)&nmim_33,11,
	(const Char *)&sgim_33,40,1,0x8001,32,xt_caseRemExpr_R_MPGoW},
	{TMIT_native_code, caseShlExpr_S_Obn8a,(const Char *)&nmim_34,11,
	(const Char *)&sgim_34,40,1,0x8001,33,xt_caseShlExpr_S_Obn8a},
	{TMIT_native_code, caseShrExpr_S_25zDS,(const Char *)&nmim_35,11,
	(const Char *)&sgim_35,40,1,0x8001,34,xt_caseShrExpr_S_25zDS},
	{TMIT_native_code, caseSubExpr_S_WElkF,(const Char *)&nmim_36,11,
	(const Char *)&sgim_36,40,1,0x8001,39,xt_caseSubExpr_S_WElkF},
	{TMIT_native_code, caseUshrExpr_U_kli2W,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,41,1,0x8001,40,xt_caseUshrExpr_U_kli2W},
	{TMIT_native_code, caseXorExpr_X_iPVWu,(const Char *)&nmim_38,11,
	(const Char *)&sgim_38,40,1,0x8001,42,xt_caseXorExpr_X_iPVWu},
	{TMIT_native_code, caseInterfaceInvokeExpr_I_mTXsb,(const Char *)&nmim_39,23,
	(const Char *)&sgim_39,52,1,0x8001,14,xt_caseInterfaceInvokeExpr_I_mTXsb},
	{TMIT_native_code, caseSpecialInvokeExpr_S_gOox9,(const Char *)&nmim_40,21,
	(const Char *)&sgim_40,50,1,0x8001,35,xt_caseSpecialInvokeExpr_S_gOox9},
	{TMIT_native_code, caseStaticInvokeExpr_S_6oKW3,(const Char *)&nmim_41,20,
	(const Char *)&sgim_41,49,1,0x8001,36,xt_caseStaticInvokeExpr_S_6oKW3},
	{TMIT_native_code, caseVirtualInvokeExpr_V_ce0Ox,(const Char *)&nmim_42,21,
	(const Char *)&sgim_42,50,1,0x8001,41,xt_caseVirtualInvokeExpr_V_ce0Ox},
	{TMIT_native_code, caseNewInvokeExpr_N_Ezx8c,(const Char *)&nmim_43,17,
	(const Char *)&sgim_43,46,1,0x8001,29,xt_caseNewInvokeExpr_N_Ezx8c},
	{TMIT_native_code, caseCastExpr_C_IEDht,(const Char *)&nmim_44,12,
	(const Char *)&sgim_44,41,1,0x8001,3,xt_caseCastExpr_C_IEDht},
	{TMIT_native_code, caseInstanceOfExpr_I_uI1aU,(const Char *)&nmim_45,18,
	(const Char *)&sgim_45,47,1,0x8001,12,xt_caseInstanceOfExpr_I_uI1aU},
	{TMIT_native_code, caseNewArrayExpr_N_an4gv,(const Char *)&nmim_46,16,
	(const Char *)&sgim_46,45,1,0x8001,26,xt_caseNewArrayExpr_N_an4gv},
	{TMIT_native_code, caseNewMultiArrayExpr_N_kD8MM,(const Char *)&nmim_47,21,
	(const Char *)&sgim_47,50,1,0x8001,27,xt_caseNewMultiArrayExpr_N_kD8MM},
	{TMIT_native_code, caseNewExpr_N_eC5Oy,(const Char *)&nmim_48,11,
	(const Char *)&sgim_48,40,1,0x8001,28,xt_caseNewExpr_N_eC5Oy},
	{TMIT_native_code, caseLengthExpr_L_wHjFf,(const Char *)&nmim_49,14,
	(const Char *)&sgim_49,43,1,0x8001,15,xt_caseLengthExpr_L_wHjFf},
	{TMIT_native_code, caseNegExpr_N_0npUL,(const Char *)&nmim_50,11,
	(const Char *)&sgim_50,40,1,0x8001,25,xt_caseNegExpr_N_0npUL},
	{TMIT_native_code, caseInstanceFieldRef_I_uNaGi,(const Char *)&nmim_51,20,
	(const Char *)&sgim_51,49,1,0x8001,11,xt_caseInstanceFieldRef_I_uNaGi},
	{TMIT_native_code, caseLocal_L_ADdcq,(const Char *)&nmim_52,9,
	(const Char *)&sgim_52,38,1,0x8001,16,xt_caseLocal_L_ADdcq},
	{TMIT_native_code, caseParameterRef_P_y92mo,(const Char *)&nmim_53,16,
	(const Char *)&sgim_53,45,0,0x8001,41,0},
	{TMIT_native_code, caseNextNextStmtRef_N_EdTIz,(const Char *)&nmim_54,19,
	(const Char *)&sgim_54,48,0,0x8001,42,0},
	{TMIT_native_code, caseCaughtExceptionRef_C_U2Mk5,(const Char *)&nmim_55,22,
	(const Char *)&sgim_55,51,0,0x8001,43,0},
	{TMIT_native_code, caseThisRef_T_GGxpE,(const Char *)&nmim_56,11,
	(const Char *)&sgim_56,40,0,0x8001,44,0},
	{TMIT_native_code, caseStaticFieldRef_S_OeA06,(const Char *)&nmim_57,18,
	(const Char *)&sgim_57,47,1,0x8001,37,xt_caseStaticFieldRef_S_OeA06},
	{TMIT_native_code, defaultCase_O_MFilX,(const Char *)&nmim_58,11,
	(const Char *)&sgim_58,21,0,0x8001,46,0},
	{TMIT_native_code, getResult__e0Q2C,(const Char *)&nmim_59,9,
	(const Char *)&sgim_59,20,0,0x1,47,0},
	{TMIT_native_code, setResult_O_UwApK,(const Char *)&nmim_60,9,
	(const Char *)&sgim_60,21,0,0x1,48,0},
	{TMIT_native_code, defaultCase_V_UdubV,(const Char *)&nmim_61,11,
	(const Char *)&sgim_61,38,1,0x1,7,xt_defaultCase_V_UdubV},
	{TMIT_native_code, init_J_qUJ9u,(const Char *)&nmim_62,6,
	(const Char *)&sgim_62,44,1,0x0,43,xt_init_J_qUJ9u},
    } /* end of methodsigs */
};


/*M caseAddExpr_A_Q4e8F: ca.mcgill.sable.soot.jimple.JasminClass$17.caseAddExpr(Lca/mcgill/sable/soot/jimple/AddExpr;)V */

Class xt_caseAddExpr_A_Q4e8F[] = { 0 };

Void caseAddExpr_A_Q4e8F(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_9Gvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_lhzzR(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseAndExpr_A_2xAv0: ca.mcgill.sable.soot.jimple.JasminClass$17.caseAndExpr(Lca/mcgill/sable/soot/jimple/AndExpr;)V */

Class xt_caseAndExpr_A_2xAv0[] = { 0 };

Void caseAndExpr_A_2xAv0(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_aGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_gEoZe(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseArrayRef_A_AizP3: ca.mcgill.sable.soot.jimple.JasminClass$17.caseArrayRef(Lca/mcgill/sable/soot/jimple/ArrayRef;)V */

Class xt_caseArrayRef_A_AizP3[] = { 0 };

Void caseArrayRef_A_AizP3(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1421462317)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_GGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_kDP91(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCastExpr_C_IEDht: ca.mcgill.sable.soot.jimple.JasminClass$17.caseCastExpr(Lca/mcgill/sable/soot/jimple/CastExpr;)V */

Class xt_caseCastExpr_C_IEDht[] = { 0 };

Void caseCastExpr_C_IEDht(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5, i6, i7;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1756617703)->f)(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1043173984)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(36,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_Type*)a4)->class->M.
		toString__J7Vel.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
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
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(78,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_T_ypb3b.f(a3,a4);
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
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L2:	a1 = av3;
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_HGvs0.C);
	a3 = a2;
	a4 = av3;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a5)->this0_oYxUV;
	a6 = av2;
	a7 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_TJTC_KcKKI(a3,a4,a5,a6,a7);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpExpr_C_CYt6L: ca.mcgill.sable.soot.jimple.JasminClass$17.caseCmpExpr(Lca/mcgill/sable/soot/jimple/CmpExpr;)V */

Class xt_caseCmpExpr_C_CYt6L[] = { 0 };

Void caseCmpExpr_C_CYt6L(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[2];
	i3 = -3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpgExpr_C_qRFkn: ca.mcgill.sable.soot.jimple.JasminClass$17.caseCmpgExpr(Lca/mcgill/sable/soot/jimple/CmpgExpr;)V */

Class xt_caseCmpgExpr_C_qRFkn[] = { 0 };

Void caseCmpgExpr_C_qRFkn(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(43,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[3];
	i3 = -1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[4];
	i3 = -3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmplExpr_C_ayQnC: ca.mcgill.sable.soot.jimple.JasminClass$17.caseCmplExpr(Lca/mcgill/sable/soot/jimple/CmplExpr;)V */

Class xt_caseCmplExpr_C_ayQnC[] = { 0 };

Void caseCmplExpr_C_ayQnC(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = v__m4rGl();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(43,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[5];
	i3 = -1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[6];
	i3 = -3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_V_UdubV: ca.mcgill.sable.soot.jimple.JasminClass$17.defaultCase(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_defaultCase_V_UdubV[] = { 0 };

Void defaultCase_V_UdubV(Object p0, Object p1)
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
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[7];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av1;
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

/*M caseDivExpr_D_Isy9T: ca.mcgill.sable.soot.jimple.JasminClass$17.caseDivExpr(Lca/mcgill/sable/soot/jimple/DivExpr;)V */

Class xt_caseDivExpr_D_Isy9T[] = { 0 };

Void caseDivExpr_D_Isy9T(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_IGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_anuZL(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseDoubleConstant_D_OYSyX: ca.mcgill.sable.soot.jimple.JasminClass$17.caseDoubleConstant(Lca/mcgill/sable/soot/jimple/DoubleConstant;)V */

Class xt_caseDoubleConstant_D_OYSyX[] = { 0 };

Void caseDoubleConstant_D_OYSyX(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Double d0, d1, d2, d3, d4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	d2 = ((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a1)->value;
	d4 = 0;
	i1 = (d2 > d4) ? 1 : ((d2 == d4) ? 0 : -1);
	if (i1 != 0)
		GOTO(6,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[8];
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	d2 = ((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a1)->value;
	d4 = 1;
	i1 = (d2 > d4) ? 1 : ((d2 == d4) ? 0 : -1);
	if (i1 != 0)
		GOTO(26,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[9];
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a1)->class->M.
		toString__8zN4v.f(a1);
	av2 = a1;
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(51,L3);
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[11];
	av2 = a1;
L3:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[12];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(63,L4);
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[13];
	av2 = a1;
L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[14];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av2;
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
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseFloatConstant_F_UMIwn: ca.mcgill.sable.soot.jimple.JasminClass$17.caseFloatConstant(Lca/mcgill/sable/soot/jimple/FloatConstant;)V */

Class xt_caseFloatConstant_F_UMIwn[] = { 0 };

Void caseFloatConstant_F_UMIwn(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Float f0, f1, f2, f3, f4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	f1 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a1)->value;
	f2 = 0;
	i1 = (f1 > f2) ? 1 : ((f1 == f2) ? 0 : -1);
	if (i1 != 0)
		GOTO(6,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[15];
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	f1 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a1)->value;
	f2 = 1;
	i1 = (f1 > f2) ? 1 : ((f1 == f2) ? 0 : -1);
	if (i1 != 0)
		GOTO(26,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[16];
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	f1 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a1)->value;
	f2 = 2;
	i1 = (f1 > f2) ? 1 : ((f1 == f2) ? 0 : -1);
	if (i1 != 0)
		GOTO(46,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[17];
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a1)->class->M.
		toString__Boynj.f(a1);
	av2 = a1;
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[18];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(71,L4);
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[19];
	av2 = a1;
L4:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[20];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(83,L5);
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[21];
	av2 = a1;
L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[22];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av2;
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
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInstanceFieldRef_I_uNaGi: ca.mcgill.sable.soot.jimple.JasminClass$17.caseInstanceFieldRef(Lca/mcgill/sable/soot/jimple/InstanceFieldRef;)V */

Class xt_caseInstanceFieldRef_I_uNaGi[] = { 0 };

Void caseInstanceFieldRef_I_uNaGi(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[23];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-2023966063)->f)(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootField*)a4)->class->M.
		getDeclaringClass__Ddy5k.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-2023966063)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getName__LfNQ7.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-2023966063)->f)(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootField*)a4)->class->M.
		getType__NbCeK.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_T_ypb3b.f(a3,a4);
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
	i3 = -1;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,-2023966063)->f)(a5);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootField*)a5)->class->M.
		getType__NbCeK.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a4)->class->M.
		sizeOfType_T_TP32k.f(a4,a5);
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInstanceOfExpr_I_uI1aU: ca.mcgill.sable.soot.jimple.JasminClass$17.caseInstanceOfExpr(Lca/mcgill/sable/soot/jimple/InstanceOfExpr;)V */

Class xt_caseInstanceOfExpr_I_uI1aU[] = { 0 };

Void caseInstanceOfExpr_I_uI1aU(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-703223410)->f)(a1);
	av2 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(24,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[26];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_Type*)a4)->class->M.
		toString__J7Vel.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
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
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(66,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[26];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_T_ypb3b.f(a3,a4);
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
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIntConstant_I_qQY1y: ca.mcgill.sable.soot.jimple.JasminClass$17.caseIntConstant(Lca/mcgill/sable/soot/jimple/IntConstant;)V */

Class xt_caseIntConstant_I_qQY1y[] = { 0 };

Void caseIntConstant_I_qQY1y(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	i2 = -1;
	if (i1 != i2)
		GOTO(5,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[27];
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	if (i1 < 0)
		GOTO(23,L2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	i2 = 5;
	if (i1 > i2)
		GOTO(31,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[28];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a3)->value;
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
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	i2 = -128;
	if (i1 < i2)
		GOTO(69,L3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	i2 = 127;
	if (i1 > i2)
		GOTO(78,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[29];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a3)->value;
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
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	i2 = -32768;
	if (i1 < i2)
		GOTO(115,L4);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	i2 = 32767;
	if (i1 > i2)
		GOTO(125,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[30];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a3)->value;
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
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[22];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a3)->class->M.
		toString__QiXHm.f(a3);
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
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInterfaceInvokeExpr_I_mTXsb: ca.mcgill.sable.soot.jimple.JasminClass$17.caseInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr;)V */

Class xt_caseInterfaceInvokeExpr_I_mTXsb[] = { 0 };

Void caseInterfaceInvokeExpr_I_mTXsb(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	i1 = 0;
	iv3 = i1;
	GOTO(22,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1091742784)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getParameterCount__2n0Xi.f(a2);
	if (i1 < i2)
		GOBACK(47,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[31];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getDeclaringClass__ywcIy.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_S_S5n3R.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		argCountOf_S_N3DNf.f(a3,a4);
	i4 = 1;
	i3 = i3 + i4;
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
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		argCountOf_S_N3DNf.f(a3,a4);
	i4 = 1;
	i3 = i3 + i4;
	i3 = -i3;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a5)->class->M.
		getReturnType__sYISd.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a4)->class->M.
		sizeOfType_T_TP32k.f(a4,a5);
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLengthExpr_L_wHjFf: ca.mcgill.sable.soot.jimple.JasminClass$17.caseLengthExpr(Lca/mcgill/sable/soot/jimple/LengthExpr;)V */

Class xt_caseLengthExpr_L_wHjFf[] = { 0 };

Void caseLengthExpr_L_wHjFf(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[32];
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLocal_L_ADdcq: ca.mcgill.sable.soot.jimple.JasminClass$17.caseLocal(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_caseLocal_L_ADdcq[] = { 0 };

Void caseLocal_L_ADdcq(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitLocal_L_NRyc8.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLongConstant_L_kCiI7: ca.mcgill.sable.soot.jimple.JasminClass$17.caseLongConstant(Lca/mcgill/sable/soot/jimple/LongConstant;)V */

Class xt_caseLongConstant_L_kCiI7[] = { 0 };

Void caseLongConstant_L_kCiI7(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Long l0, l1, l2, l3, l4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_jimple_LongConstant*)a1)->value;
	l4 = 0;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 != 0)
		GOTO(6,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[33];
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_jimple_LongConstant*)a1)->value;
	l4 = 1;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 != 0)
		GOTO(26,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[34];
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[14];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_LongConstant*)a3)->class->M.
		toString__ZEwWG.f(a3);
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
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseMulExpr_M_GQrpf: ca.mcgill.sable.soot.jimple.JasminClass$17.caseMulExpr(Lca/mcgill/sable/soot/jimple/MulExpr;)V */

Class xt_caseMulExpr_M_GQrpf[] = { 0 };

Void caseMulExpr_M_GQrpf(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_JGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_5Kjp9(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLtExpr_L_85z8G: ca.mcgill.sable.soot.jimple.JasminClass$17.caseLtExpr(Lca/mcgill/sable/soot/jimple/LtExpr;)V */

Class xt_caseLtExpr_L_85z8G[] = { 0 };

Void caseLtExpr_L_85z8G(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_KGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_079Pw(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLeExpr_L_axtTy: ca.mcgill.sable.soot.jimple.JasminClass$17.caseLeExpr(Lca/mcgill/sable/soot/jimple/LeExpr;)V */

Class xt_caseLeExpr_L_axtTy[] = { 0 };

Void caseLeExpr_L_axtTy(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_LGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_VtYeU(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGtExpr_G_Q4qZ5: ca.mcgill.sable.soot.jimple.JasminClass$17.caseGtExpr(Lca/mcgill/sable/soot/jimple/GtExpr;)V */

Class xt_caseGtExpr_G_Q4qZ5[] = { 0 };

Void caseGtExpr_G_Q4qZ5(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_MGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_QQNEh(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGeExpr_G_Ok55i: ca.mcgill.sable.soot.jimple.JasminClass$17.caseGeExpr(Lca/mcgill/sable/soot/jimple/GeExpr;)V */

Class xt_caseGeExpr_G_Ok55i[] = { 0 };

Void caseGeExpr_G_Ok55i(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_NGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_LdD4F(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNeExpr_N_46uC3: ca.mcgill.sable.soot.jimple.JasminClass$17.caseNeExpr(Lca/mcgill/sable/soot/jimple/NeExpr;)V */

Class xt_caseNeExpr_N_46uC3[] = { 0 };

Void caseNeExpr_N_46uC3(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_OGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_GAsu2(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseEqExpr_E_iEoG1: ca.mcgill.sable.soot.jimple.JasminClass$17.caseEqExpr(Lca/mcgill/sable/soot/jimple/EqExpr;)V */

Class xt_caseEqExpr_E_iEoG1[] = { 0 };

Void caseEqExpr_E_iEoG1(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1897633053)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_PGvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_BXhUp(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNegExpr_N_0npUL: ca.mcgill.sable.soot.jimple.JasminClass$17.caseNegExpr(Lca/mcgill/sable/soot/jimple/NegExpr;)V */

Class xt_caseNegExpr_N_0npUL[] = { 0 };

Void caseNegExpr_N_0npUL(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1043173984)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_lHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_FWI4c(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewArrayExpr_N_an4gv: ca.mcgill.sable.soot.jimple.JasminClass$17.caseNewArrayExpr(Lca/mcgill/sable/soot/jimple/NewArrayExpr;)V */

Class xt_caseNewArrayExpr_N_an4gv[] = { 0 };

Void caseNewArrayExpr_N_an4gv(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-303484964)->f)(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1692016385)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(24,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[35];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1692016385)->f)(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_Type*)a4)->class->M.
		toString__J7Vel.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
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
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1692016385)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(76,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[35];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1692016385)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_T_ypb3b.f(a3,a4);
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
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[36];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1692016385)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_Type*)a3)->class->M.
		toString__J7Vel.f(a3);
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
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewMultiArrayExpr_N_kD8MM: ca.mcgill.sable.soot.jimple.JasminClass$17.caseNewMultiArrayExpr(Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr;)V */

Class xt_caseNewMultiArrayExpr_N_kD8MM[] = { 0 };

Void caseNewMultiArrayExpr_N_kD8MM(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1064319757)->f)(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(9,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av2;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1247717038)->f)(a2,i3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Value.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	if (i1 < i2)
		GOBACK(39,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[37];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-2008166658)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_T_ypb3b.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = (*(Int(*)())findinterface(a3,-1646441547)->f)(a3);
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
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = (*(Int(*)())findinterface(a3,-1646441547)->f)(a3);
	i3 = -i3;
	i4 = 1;
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewExpr_N_eC5Oy: ca.mcgill.sable.soot.jimple.JasminClass$17.caseNewExpr(Lca/mcgill/sable/soot/jimple/NewExpr;)V */

Class xt_caseNewExpr_N_eC5Oy[] = { 0 };

Void caseNewExpr_N_eC5Oy(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[38];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1015674292)->f)(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_RefType*)a4)->class->M.
		toString__qqwSR.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
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
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewInvokeExpr_N_Ezx8c: ca.mcgill.sable.soot.jimple.JasminClass$17.caseNewInvokeExpr(Lca/mcgill/sable/soot/jimple/NewInvokeExpr;)V */

Class xt_caseNewInvokeExpr_N_Ezx8c[] = { 0 };

Void caseNewInvokeExpr_N_Ezx8c(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[38];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1015674292)->f)(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_RefType*)a4)->class->M.
		toString__qqwSR.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
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
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[39];
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(58,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1091742784)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getParameterCount__2n0Xi.f(a2);
	if (i1 < i2)
		GOBACK(83,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[40];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getDeclaringClass__ywcIy.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_S_S5n3R.f(a3,a4);
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
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		argCountOf_S_N3DNf.f(a3,a4);
	i4 = 1;
	i3 = i3 + i4;
	i3 = -i3;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a5)->class->M.
		getReturnType__sYISd.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a4)->class->M.
		sizeOfType_T_TP32k.f(a4,a5);
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNullConstant_N_kn6Zv: ca.mcgill.sable.soot.jimple.JasminClass$17.caseNullConstant(Lca/mcgill/sable/soot/jimple/NullConstant;)V */

Class xt_caseNullConstant_N_kn6Zv[] = { 0 };

Void caseNullConstant_N_kn6Zv(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[41];
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseOrExpr_O_8KbCv: ca.mcgill.sable.soot.jimple.JasminClass$17.caseOrExpr(Lca/mcgill/sable/soot/jimple/OrExpr;)V */

Class xt_caseOrExpr_O_8KbCv[] = { 0 };

Void caseOrExpr_O_8KbCv(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_mHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_Ajyuz(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRemExpr_R_MPGoW: ca.mcgill.sable.soot.jimple.JasminClass$17.caseRemExpr(Lca/mcgill/sable/soot/jimple/RemExpr;)V */

Class xt_caseRemExpr_R_MPGoW[] = { 0 };

Void caseRemExpr_R_MPGoW(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_nHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_vGnUW(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShlExpr_S_Obn8a: ca.mcgill.sable.soot.jimple.JasminClass$17.caseShlExpr(Lca/mcgill/sable/soot/jimple/ShlExpr;)V */

Class xt_caseShlExpr_S_Obn8a[] = { 0 };

Void caseShlExpr_S_Obn8a(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_oHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_q3dkk(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShrExpr_S_25zDS: ca.mcgill.sable.soot.jimple.JasminClass$17.caseShrExpr(Lca/mcgill/sable/soot/jimple/ShrExpr;)V */

Class xt_caseShrExpr_S_25zDS[] = { 0 };

Void caseShrExpr_S_25zDS(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_pHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_heN41(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSpecialInvokeExpr_S_gOox9: ca.mcgill.sable.soot.jimple.JasminClass$17.caseSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr;)V */

Class xt_caseSpecialInvokeExpr_S_gOox9[] = { 0 };

Void caseSpecialInvokeExpr_S_gOox9(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	i1 = 0;
	iv3 = i1;
	GOTO(22,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1091742784)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getParameterCount__2n0Xi.f(a2);
	if (i1 < i2)
		GOBACK(47,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[40];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getDeclaringClass__ywcIy.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_S_S5n3R.f(a3,a4);
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
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		argCountOf_S_N3DNf.f(a3,a4);
	i4 = 1;
	i3 = i3 + i4;
	i3 = -i3;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a5)->class->M.
		getReturnType__sYISd.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a4)->class->M.
		sizeOfType_T_TP32k.f(a4,a5);
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStaticInvokeExpr_S_6oKW3: ca.mcgill.sable.soot.jimple.JasminClass$17.caseStaticInvokeExpr(Lca/mcgill/sable/soot/jimple/StaticInvokeExpr;)V */

Class xt_caseStaticInvokeExpr_S_6oKW3[] = { 0 };

Void caseStaticInvokeExpr_S_6oKW3(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(9,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1091742784)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getParameterCount__2n0Xi.f(a2);
	if (i1 < i2)
		GOBACK(34,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[42];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getDeclaringClass__ywcIy.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_S_S5n3R.f(a3,a4);
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
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		argCountOf_S_N3DNf.f(a3,a4);
	i3 = -i3;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a5)->class->M.
		getReturnType__sYISd.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a4)->class->M.
		sizeOfType_T_TP32k.f(a4,a5);
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStaticFieldRef_S_OeA06: ca.mcgill.sable.soot.jimple.JasminClass$17.caseStaticFieldRef(Lca/mcgill/sable/soot/jimple/StaticFieldRef;)V */

Class xt_caseStaticFieldRef_S_OeA06[] = { 0 };

Void caseStaticFieldRef_S_OeA06(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[43];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a4)->class->M.
		getField__KS13V.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootField*)a4)->class->M.
		getDeclaringClass__Ddy5k.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a3)->class->M.
		getField__KS13V.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getName__LfNQ7.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a4)->class->M.
		getField__KS13V.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootField*)a4)->class->M.
		getType__NbCeK.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_T_ypb3b.f(a3,a4);
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
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a4)->class->M.
		getField__KS13V.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootField*)a4)->class->M.
		getType__NbCeK.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		sizeOfType_T_TP32k.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStringConstant_S_y2JqB: ca.mcgill.sable.soot.jimple.JasminClass$17.caseStringConstant(Lca/mcgill/sable/soot/jimple/StringConstant;)V */

Class xt_caseStringConstant_S_y2JqB[] = { 0 };

Void caseStringConstant_S_y2JqB(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_StringConstant*)a3)->value;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	av2 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(23,L6);

L1:	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		charAt_i_PP8AN.f(a1,i2);
	i2 = 34;
	if (i1 != i2)
		GOTO(34,L2);
	a1 = av3;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[44];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(44,L5);

L2:	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		charAt_i_PP8AN.f(a1,i2);
	i2 = 39;
	if (i1 != i2)
		GOTO(55,L3);
	a1 = av3;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[45];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(65,L5);

L3:	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		charAt_i_PP8AN.f(a1,i2);
	i2 = 92;
	if (i1 != i2)
		GOTO(76,L4);
	a1 = av3;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[46];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(86,L5);

L4:	a1 = av3;
	a2 = av2;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		charAt_i_PP8AN.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_c_PKutk.f(a1,i2);
L5:	iv4 += 1;
L6:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		length__RGJv1.f(a2);
	if (i1 < i2)
		GOBACK(109,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[22];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = 34;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_c_PKutk.f(a2,i3);
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = 34;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_c_PKutk.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSubExpr_S_WElkF: ca.mcgill.sable.soot.jimple.JasminClass$17.caseSubExpr(Lca/mcgill/sable/soot/jimple/SubExpr;)V */

Class xt_caseSubExpr_S_WElkF[] = { 0 };

Void caseSubExpr_S_WElkF(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_qHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_cBCuo(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseUshrExpr_U_kli2W: ca.mcgill.sable.soot.jimple.JasminClass$17.caseUshrExpr(Lca/mcgill/sable/soot/jimple/UshrExpr;)V */

Class xt_caseUshrExpr_U_kli2W[] = { 0 };

Void caseUshrExpr_U_kli2W(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_rHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_7YrUL(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseVirtualInvokeExpr_V_ce0Ox: ca.mcgill.sable.soot.jimple.JasminClass$17.caseVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr;)V */

Class xt_caseVirtualInvokeExpr_V_ce0Ox[] = { 0 };

Void caseVirtualInvokeExpr_V_ce0Ox(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,54970279)->f)(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	i1 = 0;
	iv3 = i1;
	GOTO(22,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1091742784)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getParameterCount__2n0Xi.f(a2);
	if (i1 < i2)
		GOBACK(47,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[47];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getDeclaringClass__ywcIy.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		slashify_S_WZOtj.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_8Gvs0[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_S_S5n3R.f(a3,a4);
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
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a3)->this0_oYxUV;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		argCountOf_S_N3DNf.f(a3,a4);
	i4 = 1;
	i3 = i3 + i4;
	i3 = -i3;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	a5 = av2;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a5)->class->M.
		getReturnType__sYISd.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a4)->class->M.
		sizeOfType_T_TP32k.f(a4,a5);
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseXorExpr_X_iPVWu: ca.mcgill.sable.soot.jimple.JasminClass$17.caseXorExpr(Lca/mcgill/sable/soot/jimple/XorExpr;)V */

Class xt_caseXorExpr_X_iPVWu[] = { 0 };

Void caseXorExpr_X_iPVWu(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1897633053)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1696921970)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_sHvs0.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_2lhk9(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Type*)a1)->class->M.
		apply_S_1raGs.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_J_qUJ9u: ca.mcgill.sable.soot.jimple.JasminClass$17.<init>(Lca/mcgill/sable/soot/jimple/JasminClass;)V */

Class xt_init_J_qUJ9u[] = { 0 };

Void init_J_qUJ9u(Object p0, Object p1)
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
	init__neDCM(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_8Gvs0*)a1)->this0_oYxUV = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_8Gvs0[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','1','7','c','h','e','c','k','c','a','s','t',' ','l','c',
'm','p','f','c','m','p','g','d','c','m','p','g','f','c','m','p','l','d',
'c','m','p','l','C','a','n',39,'t',' ','l','o','a','d',' ','v','a','l',
'u','e',':',' ','d','c','o','n','s','t','_','0','d','c','o','n','s','t',
'_','1','I','n','f','i','n','i','t','y','+','D','o','u','b','l','e','I',
'n','f','i','n','i','t','y','-','I','n','f','i','n','i','t','y','-','D',
'o','u','b','l','e','I','n','f','i','n','i','t','y','l','d','c','2','_',
'w',' ','f','c','o','n','s','t','_','0','f','c','o','n','s','t','_','1',
'f','c','o','n','s','t','_','2','I','n','f','i','n','i','t','y','F','+',
'F','l','o','a','t','I','n','f','i','n','i','t','y','-','I','n','f','i',
'n','i','t','y','F','-','F','l','o','a','t','I','n','f','i','n','i','t',
'y','l','d','c',' ','g','e','t','f','i','e','l','d',' ','/',' ','i','n',
's','t','a','n','c','e','o','f',' ','i','c','o','n','s','t','_','m','1',
'i','c','o','n','s','t','_','b','i','p','u','s','h',' ','s','i','p','u',
's','h',' ','i','n','v','o','k','e','i','n','t','e','r','f','a','c','e',
' ','a','r','r','a','y','l','e','n','g','t','h','l','c','o','n','s','t',
'_','0','l','c','o','n','s','t','_','1','a','n','e','w','a','r','r','a',
'y',' ','n','e','w','a','r','r','a','y',' ','m','u','l','t','i','a','n',
'e','w','a','r','r','a','y',' ','n','e','w',' ','d','u','p','i','n','v',
'o','k','e','s','p','e','c','i','a','l',' ','a','c','o','n','s','t','_',
'n','u','l','l','i','n','v','o','k','e','s','t','a','t','i','c',' ','g',
'e','t','s','t','a','t','i','c',' ',92,'"',92,39,92,92,'i','n','v',
'o','k','e','v','i','r','t','u','a','l',' '};

const void *st_ca_mcgill_sable_soot_jimp_8Gvs0[] = {
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+42,	/* 0. ca.mcgill.sable.soot.jimple.JasminClass$ */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+52,	/* 1. checkcast  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+56,	/* 2. lcmp */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+61,	/* 3. fcmpg */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+66,	/* 4. dcmpg */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+71,	/* 5. fcmpl */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+76,	/* 6. dcmpl */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+94,	/* 7. Can't load value:  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+102,	/* 8. dconst_0 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+110,	/* 9. dconst_1 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+118,	/* 10. Infinity */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+133,	/* 11. +DoubleInfinity */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+142,	/* 12. -Infinity */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+157,	/* 13. -DoubleInfinity */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+164,	/* 14. ldc2_w  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+172,	/* 15. fconst_0 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+180,	/* 16. fconst_1 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+188,	/* 17. fconst_2 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+197,	/* 18. InfinityF */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+211,	/* 19. +FloatInfinity */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+221,	/* 20. -InfinityF */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+235,	/* 21. -FloatInfinity */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+239,	/* 22. ldc  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+248,	/* 23. getfield  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+249,	/* 24. % */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+250,	/* 25.   */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+261,	/* 26. instanceof  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+270,	/* 27. iconst_m1 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+277,	/* 28. iconst_ */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+284,	/* 29. bipush  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+291,	/* 30. sipush  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+307,	/* 31. invokeinterface  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+318,	/* 32. arraylength */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+326,	/* 33. lconst_0 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+334,	/* 34. lconst_1 */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+344,	/* 35. anewarray  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+353,	/* 36. newarray  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+368,	/* 37. multianewarray  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+372,	/* 38. new  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+375,	/* 39. dup */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+389,	/* 40. invokespecial  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+400,	/* 41. aconst_null */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+413,	/* 42. invokestatic  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+423,	/* 43. getstatic  */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+425,	/* 44. \" */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+427,	/* 45. \' */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+429,	/* 46. \\ */
    ch_ca_mcgill_sable_soot_jimp_8Gvs0+443,	/* 47. invokevirtual  */
    0};
