/*  ca_mcgill_sable_soot_jimple_JasminClass$2.c -- from Java class ca.mcgill.sable.soot.jimple.JasminClass$2  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$2.h"
#include "ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.h"
#include "ca_mcgill_sable_soot_jimple_JimpleValueSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_jimple_ArrayRef.h"
#include "ca_mcgill_sable_soot_jimple_FieldRef.h"
#include "ca_mcgill_sable_soot_jimple_InstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$1.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$10.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$11.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$12.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$13.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$14.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$15.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$16.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$17.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$18.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$19.h"
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
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_StaticFieldRef.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Integer.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_eamqt.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_JimpleValueSwitch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
    &cl_ca_mcgill_sable_soot_jimple_FieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_JasminClass.C,
    &cl_ca_mcgill_sable_soot_jimp_damqt.C,
    &cl_ca_mcgill_sable_soot_jimp_1Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_2Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_3Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_4Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_5Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_6Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_7Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_8Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_9Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_aGvs0.C,
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
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_eamqt[];
extern const void *st_ca_mcgill_sable_soot_jimp_eamqt[];
extern Class xt_caseArrayRef_A_ehO4h[];
extern Class xt_defaultCase_V_kh9bx[];
extern Class xt_caseInstanceFieldRef_I_oCc5s[];
extern Class xt_caseLocal_L_MfyGe[];
extern Class xt_caseStaticFieldRef_S_4NVcs[];
extern Class xt_init_VJ_8nNy6[];

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
    -1316997612, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseCmplExpr_C_8boNy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1439590372, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNullConstant_N_KwFab,
    0, 0,
    -1202230754, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseCaughtExceptionRef_C_U2Mk5,
    0, 0, 0, 0, 0, 0,
    -1266794974, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseAddExpr_A_cSQ4I,
    0, 0,
    -461684700, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNewInvokeExpr_N_KiKcU,
    1499589668, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNewMultiArrayExpr_N_MfoWo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1538883638, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseFloatConstant_F_WjGVo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    2057865284, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseThisRef_T_GGxpE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -912465838, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseSpecialInvokeExpr_S_MCTms,
    -534189998, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNewArrayExpr_N_AwDra,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    866670696, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseIntConstant_I_kPuSC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43639680, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseInstanceOfExpr_I_Oq66G,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -429173614, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseDivExpr_D_8sqLC,
    -1333705582, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseInterfaceInvokeExpr_I_CdBuv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1395467930, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseShrExpr_S_s4rfC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1927806304, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseRemExpr_R_8DjlZ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379914996, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNegExpr_N_qmhwv,
    0, 0, 0, 0, 0, 0,
    1721791224, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseUshrExpr_U_eMAMb,
    0, 0, 0, 0, 0, 0,
    1534754556, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseGeExpr_G_UDMfz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    2055567114, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseInstanceFieldRef_I_oCc5s,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.defaultCase_O_MFilX,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    595722552, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseStringConstant_S_SKNmn,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    737875270, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseShlExpr_S_ebfKT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -786814130, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseXorExpr_X_IONye,
    -1470009522, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseVirtualInvokeExpr_V_I2vDQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    725652322, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseGtExpr_G_SbSuG,
    0, 0,
    193601892, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseLengthExpr_L_igsJV,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236616554, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseLeExpr_L_cEVo9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1236620922, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseAndExpr_A_sws7K,
    0, 0,
    -1170252408, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseEqExpr_E_kLQbC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1217912210, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseParameterRef_P_y92mo,
    0, 0, 0, 0, 0, 0,
    -1141632106, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNeExpr_N_6dW7E,
    0, 0,
    922746776, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseDoubleConstant_D_8HXuJ,
    0, 0,
    -623265894, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseCmpgExpr_C_oudKj,
    0, 0, 0, 0, 0, 0,
    188167582, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseOrExpr_O_aRD76,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1963691436, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseStaticFieldRef_S_4NVcs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    4703162, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseArrayRef_A_ehO4h,
    0, 0,
    2114928572, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseSubExpr_S_isYgI,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646875196, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseMulExpr_M_2E4mi,
    -624829500, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseStaticInvokeExpr_S_6qm45,
    0, 0, 0, 0,
    -1950658616, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseLocal_L_MfyGe,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -548116528, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseCmpExpr_C_2YlIu,
    -572485680, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseLtExpr_L_ac1Eg,
    0, 0, 0, 0,
    -729816108, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNewExpr_N_EBXpi,
    0, 0,
    380801494, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseCastExpr_C_C5W1J,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -22452244, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseNextNextStmtRef_N_EdTIz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1798226954, &cl_ca_mcgill_sable_soot_jimp_eamqt.M.caseLongConstant_L_KLRTM,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(41) nmchars = {&acl_char, 0, 41, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','2'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 41 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
'v','a','l','$','r','v','a','l','u','e'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';'};
static const Char nmiv_2[] = {
't','h','i','s','$','0'};
static const Char sgiv_2[] = {
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
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','a','s','m','i','n','C',
'l','a','s','s',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_eamqt, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_eamqt, valrvalue_WMptO), 0,(const Char *)&nmiv_1,10,(const Char *)&sgiv_1,35,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_eamqt, this0_oYxUV), 0,(const Char *)&nmiv_2,6,(const Char *)&sgiv_2,41,1,0x12,1}, 
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
} inr_ca_mcgill_sable_soot_jimp_eamqt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_eamqt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_eamqt cl_ca_mcgill_sable_soot_jimp_eamqt = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_eamqt),
    63,
    0,
    3,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    49, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_eamqt,
    st_ca_mcgill_sable_soot_jimp_eamqt,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_eamqt,
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
	{TMIT_native_code, caseArrayRef_A_ehO4h,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,41,1,0x8001,0,xt_caseArrayRef_A_ehO4h},
	{TMIT_native_code, caseDoubleConstant_D_8HXuJ,(const Char *)&nmim_13,18,
	(const Char *)&sgim_13,47,0,0x8001,1,0},
	{TMIT_native_code, caseFloatConstant_F_WjGVo,(const Char *)&nmim_14,17,
	(const Char *)&sgim_14,46,0,0x8001,2,0},
	{TMIT_native_code, caseIntConstant_I_kPuSC,(const Char *)&nmim_15,15,
	(const Char *)&sgim_15,44,0,0x8001,3,0},
	{TMIT_native_code, caseLongConstant_L_KLRTM,(const Char *)&nmim_16,16,
	(const Char *)&sgim_16,45,0,0x8001,4,0},
	{TMIT_native_code, caseNullConstant_N_KwFab,(const Char *)&nmim_17,16,
	(const Char *)&sgim_17,45,0,0x8001,5,0},
	{TMIT_native_code, caseStringConstant_S_SKNmn,(const Char *)&nmim_18,18,
	(const Char *)&sgim_18,47,0,0x8001,6,0},
	{TMIT_native_code, caseAddExpr_A_cSQ4I,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,40,0,0x8001,7,0},
	{TMIT_native_code, caseAndExpr_A_sws7K,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,40,0,0x8001,8,0},
	{TMIT_native_code, caseCmpExpr_C_2YlIu,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,0,0x8001,9,0},
	{TMIT_native_code, caseCmpgExpr_C_oudKj,(const Char *)&nmim_22,12,
	(const Char *)&sgim_22,41,0,0x8001,10,0},
	{TMIT_native_code, caseCmplExpr_C_8boNy,(const Char *)&nmim_23,12,
	(const Char *)&sgim_23,41,0,0x8001,11,0},
	{TMIT_native_code, caseDivExpr_D_8sqLC,(const Char *)&nmim_24,11,
	(const Char *)&sgim_24,40,0,0x8001,12,0},
	{TMIT_native_code, caseEqExpr_E_kLQbC,(const Char *)&nmim_25,10,
	(const Char *)&sgim_25,39,0,0x8001,13,0},
	{TMIT_native_code, caseGeExpr_G_UDMfz,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,39,0,0x8001,14,0},
	{TMIT_native_code, caseGtExpr_G_SbSuG,(const Char *)&nmim_27,10,
	(const Char *)&sgim_27,39,0,0x8001,15,0},
	{TMIT_native_code, caseLeExpr_L_cEVo9,(const Char *)&nmim_28,10,
	(const Char *)&sgim_28,39,0,0x8001,16,0},
	{TMIT_native_code, caseLtExpr_L_ac1Eg,(const Char *)&nmim_29,10,
	(const Char *)&sgim_29,39,0,0x8001,17,0},
	{TMIT_native_code, caseMulExpr_M_2E4mi,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,40,0,0x8001,18,0},
	{TMIT_native_code, caseNeExpr_N_6dW7E,(const Char *)&nmim_31,10,
	(const Char *)&sgim_31,39,0,0x8001,19,0},
	{TMIT_native_code, caseOrExpr_O_aRD76,(const Char *)&nmim_32,10,
	(const Char *)&sgim_32,39,0,0x8001,20,0},
	{TMIT_native_code, caseRemExpr_R_8DjlZ,(const Char *)&nmim_33,11,
	(const Char *)&sgim_33,40,0,0x8001,21,0},
	{TMIT_native_code, caseShlExpr_S_ebfKT,(const Char *)&nmim_34,11,
	(const Char *)&sgim_34,40,0,0x8001,22,0},
	{TMIT_native_code, caseShrExpr_S_s4rfC,(const Char *)&nmim_35,11,
	(const Char *)&sgim_35,40,0,0x8001,23,0},
	{TMIT_native_code, caseSubExpr_S_isYgI,(const Char *)&nmim_36,11,
	(const Char *)&sgim_36,40,0,0x8001,24,0},
	{TMIT_native_code, caseUshrExpr_U_eMAMb,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,41,0,0x8001,25,0},
	{TMIT_native_code, caseXorExpr_X_IONye,(const Char *)&nmim_38,11,
	(const Char *)&sgim_38,40,0,0x8001,26,0},
	{TMIT_native_code, caseInterfaceInvokeExpr_I_CdBuv,(const Char *)&nmim_39,23,
	(const Char *)&sgim_39,52,0,0x8001,27,0},
	{TMIT_native_code, caseSpecialInvokeExpr_S_MCTms,(const Char *)&nmim_40,21,
	(const Char *)&sgim_40,50,0,0x8001,28,0},
	{TMIT_native_code, caseStaticInvokeExpr_S_6qm45,(const Char *)&nmim_41,20,
	(const Char *)&sgim_41,49,0,0x8001,29,0},
	{TMIT_native_code, caseVirtualInvokeExpr_V_I2vDQ,(const Char *)&nmim_42,21,
	(const Char *)&sgim_42,50,0,0x8001,30,0},
	{TMIT_native_code, caseNewInvokeExpr_N_KiKcU,(const Char *)&nmim_43,17,
	(const Char *)&sgim_43,46,0,0x8001,31,0},
	{TMIT_native_code, caseCastExpr_C_C5W1J,(const Char *)&nmim_44,12,
	(const Char *)&sgim_44,41,0,0x8001,32,0},
	{TMIT_native_code, caseInstanceOfExpr_I_Oq66G,(const Char *)&nmim_45,18,
	(const Char *)&sgim_45,47,0,0x8001,33,0},
	{TMIT_native_code, caseNewArrayExpr_N_AwDra,(const Char *)&nmim_46,16,
	(const Char *)&sgim_46,45,0,0x8001,34,0},
	{TMIT_native_code, caseNewMultiArrayExpr_N_MfoWo,(const Char *)&nmim_47,21,
	(const Char *)&sgim_47,50,0,0x8001,35,0},
	{TMIT_native_code, caseNewExpr_N_EBXpi,(const Char *)&nmim_48,11,
	(const Char *)&sgim_48,40,0,0x8001,36,0},
	{TMIT_native_code, caseLengthExpr_L_igsJV,(const Char *)&nmim_49,14,
	(const Char *)&sgim_49,43,0,0x8001,37,0},
	{TMIT_native_code, caseNegExpr_N_qmhwv,(const Char *)&nmim_50,11,
	(const Char *)&sgim_50,40,0,0x8001,38,0},
	{TMIT_native_code, caseInstanceFieldRef_I_oCc5s,(const Char *)&nmim_51,20,
	(const Char *)&sgim_51,49,1,0x8001,2,xt_caseInstanceFieldRef_I_oCc5s},
	{TMIT_native_code, caseLocal_L_MfyGe,(const Char *)&nmim_52,9,
	(const Char *)&sgim_52,38,1,0x8001,3,xt_caseLocal_L_MfyGe},
	{TMIT_native_code, caseParameterRef_P_y92mo,(const Char *)&nmim_53,16,
	(const Char *)&sgim_53,45,0,0x8001,41,0},
	{TMIT_native_code, caseNextNextStmtRef_N_EdTIz,(const Char *)&nmim_54,19,
	(const Char *)&sgim_54,48,0,0x8001,42,0},
	{TMIT_native_code, caseCaughtExceptionRef_C_U2Mk5,(const Char *)&nmim_55,22,
	(const Char *)&sgim_55,51,0,0x8001,43,0},
	{TMIT_native_code, caseThisRef_T_GGxpE,(const Char *)&nmim_56,11,
	(const Char *)&sgim_56,40,0,0x8001,44,0},
	{TMIT_native_code, caseStaticFieldRef_S_4NVcs,(const Char *)&nmim_57,18,
	(const Char *)&sgim_57,47,1,0x8001,4,xt_caseStaticFieldRef_S_4NVcs},
	{TMIT_native_code, defaultCase_O_MFilX,(const Char *)&nmim_58,11,
	(const Char *)&sgim_58,21,0,0x8001,46,0},
	{TMIT_native_code, getResult__e0Q2C,(const Char *)&nmim_59,9,
	(const Char *)&sgim_59,20,0,0x1,47,0},
	{TMIT_native_code, setResult_O_UwApK,(const Char *)&nmim_60,9,
	(const Char *)&sgim_60,21,0,0x1,48,0},
	{TMIT_native_code, defaultCase_V_kh9bx,(const Char *)&nmim_61,11,
	(const Char *)&sgim_61,38,1,0x1,1,xt_defaultCase_V_kh9bx},
	{TMIT_native_code, init_VJ_8nNy6,(const Char *)&nmim_62,6,
	(const Char *)&sgim_62,79,1,0x0,5,xt_init_VJ_8nNy6},
    } /* end of methodsigs */
};


/*M caseArrayRef_A_ehO4h: ca.mcgill.sable.soot.jimple.JasminClass$2.caseArrayRef(Lca/mcgill/sable/soot/jimple/ArrayRef;)V */

Class xt_caseArrayRef_A_ehO4h[] = { 0 };

Void caseArrayRef_A_ehO4h(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
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
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a2)->valrvalue_WMptO;
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
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_famqt.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_J_742Wq(a3,a4);
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

/*M defaultCase_V_kh9bx: ca.mcgill.sable.soot.jimple.JasminClass$2.defaultCase(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_defaultCase_V_kh9bx[] = { 0 };

Void defaultCase_V_kh9bx(Object p0, Object p1)
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
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_eamqt[1];
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

/*M caseInstanceFieldRef_I_oCc5s: ca.mcgill.sable.soot.jimple.JasminClass$2.caseInstanceFieldRef(Lca/mcgill/sable/soot/jimple/InstanceFieldRef;)V */

Class xt_caseInstanceFieldRef_I_oCc5s[] = { 0 };

Void caseInstanceFieldRef_I_oCc5s(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a2)->valrvalue_WMptO;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_eamqt[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a3)->this0_oYxUV;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_eamqt[3];
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_eamqt[4];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a3)->this0_oYxUV;
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
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a4)->this0_oYxUV;
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
	i4 = -i4;
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

/*M caseLocal_L_MfyGe: ca.mcgill.sable.soot.jimple.JasminClass$2.caseLocal(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_caseLocal_L_MfyGe[] = { 0 };

Void caseLocal_L_MfyGe(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->localToSlot;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_java_lang_Integer.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Integer*)a1)->class->M.
		intValue__e94pd.f(a1);
	iv2 = i1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_gamqt.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a4)->valrvalue_WMptO;
	i5 = iv2;
	a6 = av0;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a6)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_ViJ_rZTLV(a3,a4,i5,a6);
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

/*M caseStaticFieldRef_S_4NVcs: ca.mcgill.sable.soot.jimple.JasminClass$2.caseStaticFieldRef(Lca/mcgill/sable/soot/jimple/StaticFieldRef;)V */

Class xt_caseStaticFieldRef_S_4NVcs[] = { 0 };

Void caseStaticFieldRef_S_4NVcs(Object p0, Object p1)
{
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a1)->class->M.
		getField__KS13V.f(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a2)->valrvalue_WMptO;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_eamqt[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a3)->this0_oYxUV;
	a4 = av2;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_eamqt[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_eamqt[4];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a3)->this0_oYxUV;
	a4 = av2;
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
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a3)->this0_oYxUV;
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
	i3 = -i3;
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

/*M init_VJ_8nNy6: ca.mcgill.sable.soot.jimple.JasminClass$2.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/JasminClass;)V */

Class xt_init_VJ_8nNy6[] = { 0 };

Void init_VJ_8nNy6(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

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
	((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->valrvalue_WMptO = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_eamqt*)a1)->this0_oYxUV = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_eamqt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','2','C','a','n',39,'t',' ','s','t','o','r','e',' ','i',
'n',' ','v','a','l','u','e',' ','p','u','t','f','i','e','l','d',' ','/',
' ','p','u','t','s','t','a','t','i','c',' '};

const void *st_ca_mcgill_sable_soot_jimp_eamqt[] = {
    ch_ca_mcgill_sable_soot_jimp_eamqt+41,	/* 0. ca.mcgill.sable.soot.jimple.JasminClass$ */
    ch_ca_mcgill_sable_soot_jimp_eamqt+62,	/* 1. Can't store in value  */
    ch_ca_mcgill_sable_soot_jimp_eamqt+71,	/* 2. putfield  */
    ch_ca_mcgill_sable_soot_jimp_eamqt+72,	/* 3. % */
    ch_ca_mcgill_sable_soot_jimp_eamqt+73,	/* 4.   */
    ch_ca_mcgill_sable_soot_jimp_eamqt+83,	/* 5. putstatic  */
    0};
