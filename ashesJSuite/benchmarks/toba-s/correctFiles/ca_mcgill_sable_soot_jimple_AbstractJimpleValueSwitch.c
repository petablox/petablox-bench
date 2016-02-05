/*  ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.h"
#include "ca_mcgill_sable_soot_jimple_JimpleValueSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_JimpleValueSwitch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch[];
extern Class xt_caseArrayRef_A_uJRzj[];
extern Class xt_caseDoubleConstant_D_8HXuJ[];
extern Class xt_caseFloatConstant_F_WjGVo[];
extern Class xt_caseIntConstant_I_kPuSC[];
extern Class xt_caseLongConstant_L_KLRTM[];
extern Class xt_caseNullConstant_N_KwFab[];
extern Class xt_caseStringConstant_S_SKNmn[];
extern Class xt_caseAddExpr_A_cSQ4I[];
extern Class xt_caseAndExpr_A_sws7K[];
extern Class xt_caseCmpExpr_C_2YlIu[];
extern Class xt_caseCmpgExpr_C_oudKj[];
extern Class xt_caseCmplExpr_C_8boNy[];
extern Class xt_caseDivExpr_D_8sqLC[];
extern Class xt_caseEqExpr_E_kLQbC[];
extern Class xt_caseGeExpr_G_UDMfz[];
extern Class xt_caseGtExpr_G_SbSuG[];
extern Class xt_caseLeExpr_L_cEVo9[];
extern Class xt_caseLtExpr_L_ac1Eg[];
extern Class xt_caseMulExpr_M_2E4mi[];
extern Class xt_caseNeExpr_N_6dW7E[];
extern Class xt_caseOrExpr_O_aRD76[];
extern Class xt_caseRemExpr_R_8DjlZ[];
extern Class xt_caseShlExpr_S_ebfKT[];
extern Class xt_caseShrExpr_S_s4rfC[];
extern Class xt_caseSubExpr_S_isYgI[];
extern Class xt_caseUshrExpr_U_eMAMb[];
extern Class xt_caseXorExpr_X_IONye[];
extern Class xt_caseInterfaceInvokeExpr_I_CdBuv[];
extern Class xt_caseSpecialInvokeExpr_S_MCTms[];
extern Class xt_caseStaticInvokeExpr_S_6qm45[];
extern Class xt_caseVirtualInvokeExpr_V_I2vDQ[];
extern Class xt_caseNewInvokeExpr_N_KiKcU[];
extern Class xt_caseCastExpr_C_C5W1J[];
extern Class xt_caseInstanceOfExpr_I_Oq66G[];
extern Class xt_caseNewArrayExpr_N_AwDra[];
extern Class xt_caseNewMultiArrayExpr_N_MfoWo[];
extern Class xt_caseNewExpr_N_EBXpi[];
extern Class xt_caseLengthExpr_L_igsJV[];
extern Class xt_caseNegExpr_N_qmhwv[];
extern Class xt_caseInstanceFieldRef_I_y12t0[];
extern Class xt_caseLocal_L_orPjP[];
extern Class xt_caseParameterRef_P_y92mo[];
extern Class xt_caseNextNextStmtRef_N_EdTIz[];
extern Class xt_caseCaughtExceptionRef_C_U2Mk5[];
extern Class xt_caseThisRef_T_GGxpE[];
extern Class xt_caseStaticFieldRef_S_8XEWR[];
extern Class xt_defaultCase_O_MFilX[];
extern Class xt_getResult__e0Q2C[];
extern Class xt_setResult_O_UwApK[];
extern Class xt_init__neDCM[];

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
/*  14e.  c2aafd4e  (14e)  equals  */
/*  14f.  d11a2b4e  (14e)  caseXorExpr  */
/*  150.  a8616f4e  (14e)  caseVirtualInvokeExpr  */
/*  161.  8942e761  (161)  hashCode  */
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
    -1316997612, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseCmplExpr_C_8boNy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1439590372, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNullConstant_N_KwFab,
    0, 0,
    -1202230754, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseCaughtExceptionRef_C_U2Mk5,
    0, 0, 0, 0, 0, 0,
    -1266794974, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseAddExpr_A_cSQ4I,
    0, 0,
    -461684700, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNewInvokeExpr_N_KiKcU,
    1499589668, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNewMultiArrayExpr_N_MfoWo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1538883638, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseFloatConstant_F_WjGVo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    2057865284, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseThisRef_T_GGxpE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -912465838, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseSpecialInvokeExpr_S_MCTms,
    -534189998, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNewArrayExpr_N_AwDra,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    866670696, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseIntConstant_I_kPuSC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43639680, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseInstanceOfExpr_I_Oq66G,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -429173614, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseDivExpr_D_8sqLC,
    -1333705582, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseInterfaceInvokeExpr_I_CdBuv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1395467930, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseShrExpr_S_s4rfC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1927806304, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseRemExpr_R_8DjlZ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379914996, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNegExpr_N_qmhwv,
    0, 0, 0, 0, 0, 0,
    1721791224, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseUshrExpr_U_eMAMb,
    0, 0, 0, 0, 0, 0,
    1534754556, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseGeExpr_G_UDMfz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    2055567114, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseInstanceFieldRef_I_y12t0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.defaultCase_O_MFilX,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    595722552, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseStringConstant_S_SKNmn,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    737875270, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseShlExpr_S_ebfKT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.equals_O_Ba6e0,
    -786814130, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseXorExpr_X_IONye,
    -1470009522, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseVirtualInvokeExpr_V_I2vDQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.hashCode__8wJNW,
    725652322, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseGtExpr_G_SbSuG,
    0, 0,
    193601892, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseLengthExpr_L_igsJV,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236616554, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseLeExpr_L_cEVo9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1236620922, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseAndExpr_A_sws7K,
    0, 0,
    -1170252408, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseEqExpr_E_kLQbC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1217912210, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseParameterRef_P_y92mo,
    0, 0, 0, 0, 0, 0,
    -1141632106, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNeExpr_N_6dW7E,
    0, 0,
    922746776, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseDoubleConstant_D_8HXuJ,
    0, 0,
    -623265894, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseCmpgExpr_C_oudKj,
    0, 0, 0, 0, 0, 0,
    188167582, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseOrExpr_O_aRD76,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1963691436, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseStaticFieldRef_S_8XEWR,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    4703162, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseArrayRef_A_uJRzj,
    0, 0,
    2114928572, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseSubExpr_S_isYgI,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646875196, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseMulExpr_M_2E4mi,
    -624829500, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseStaticInvokeExpr_S_6qm45,
    0, 0, 0, 0,
    -1950658616, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseLocal_L_orPjP,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -548116528, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseCmpExpr_C_2YlIu,
    -572485680, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseLtExpr_L_ac1Eg,
    0, 0, 0, 0,
    -729816108, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNewExpr_N_EBXpi,
    0, 0,
    380801494, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseCastExpr_C_C5W1J,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -22452244, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseNextNextStmtRef_N_EdTIz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1798226954, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.M.caseLongConstant_L_KLRTM,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(53) nmchars = {&acl_char, 0, 53, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'J','i','m','p','l','e','V','a','l','u','e','S','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 53 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch cl_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch),
    61,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch,
    st_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__neDCM,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,49,xt_init__neDCM},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
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
	{TMIT_native_code, caseArrayRef_A_uJRzj,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,41,1,0x8001,0,xt_caseArrayRef_A_uJRzj},
	{TMIT_native_code, caseDoubleConstant_D_8HXuJ,(const Char *)&nmim_13,18,
	(const Char *)&sgim_13,47,1,0x8001,1,xt_caseDoubleConstant_D_8HXuJ},
	{TMIT_native_code, caseFloatConstant_F_WjGVo,(const Char *)&nmim_14,17,
	(const Char *)&sgim_14,46,1,0x8001,2,xt_caseFloatConstant_F_WjGVo},
	{TMIT_native_code, caseIntConstant_I_kPuSC,(const Char *)&nmim_15,15,
	(const Char *)&sgim_15,44,1,0x8001,3,xt_caseIntConstant_I_kPuSC},
	{TMIT_native_code, caseLongConstant_L_KLRTM,(const Char *)&nmim_16,16,
	(const Char *)&sgim_16,45,1,0x8001,4,xt_caseLongConstant_L_KLRTM},
	{TMIT_native_code, caseNullConstant_N_KwFab,(const Char *)&nmim_17,16,
	(const Char *)&sgim_17,45,1,0x8001,5,xt_caseNullConstant_N_KwFab},
	{TMIT_native_code, caseStringConstant_S_SKNmn,(const Char *)&nmim_18,18,
	(const Char *)&sgim_18,47,1,0x8001,6,xt_caseStringConstant_S_SKNmn},
	{TMIT_native_code, caseAddExpr_A_cSQ4I,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,40,1,0x8001,7,xt_caseAddExpr_A_cSQ4I},
	{TMIT_native_code, caseAndExpr_A_sws7K,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,40,1,0x8001,8,xt_caseAndExpr_A_sws7K},
	{TMIT_native_code, caseCmpExpr_C_2YlIu,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,1,0x8001,9,xt_caseCmpExpr_C_2YlIu},
	{TMIT_native_code, caseCmpgExpr_C_oudKj,(const Char *)&nmim_22,12,
	(const Char *)&sgim_22,41,1,0x8001,10,xt_caseCmpgExpr_C_oudKj},
	{TMIT_native_code, caseCmplExpr_C_8boNy,(const Char *)&nmim_23,12,
	(const Char *)&sgim_23,41,1,0x8001,11,xt_caseCmplExpr_C_8boNy},
	{TMIT_native_code, caseDivExpr_D_8sqLC,(const Char *)&nmim_24,11,
	(const Char *)&sgim_24,40,1,0x8001,12,xt_caseDivExpr_D_8sqLC},
	{TMIT_native_code, caseEqExpr_E_kLQbC,(const Char *)&nmim_25,10,
	(const Char *)&sgim_25,39,1,0x8001,13,xt_caseEqExpr_E_kLQbC},
	{TMIT_native_code, caseGeExpr_G_UDMfz,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,39,1,0x8001,14,xt_caseGeExpr_G_UDMfz},
	{TMIT_native_code, caseGtExpr_G_SbSuG,(const Char *)&nmim_27,10,
	(const Char *)&sgim_27,39,1,0x8001,15,xt_caseGtExpr_G_SbSuG},
	{TMIT_native_code, caseLeExpr_L_cEVo9,(const Char *)&nmim_28,10,
	(const Char *)&sgim_28,39,1,0x8001,16,xt_caseLeExpr_L_cEVo9},
	{TMIT_native_code, caseLtExpr_L_ac1Eg,(const Char *)&nmim_29,10,
	(const Char *)&sgim_29,39,1,0x8001,17,xt_caseLtExpr_L_ac1Eg},
	{TMIT_native_code, caseMulExpr_M_2E4mi,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,40,1,0x8001,18,xt_caseMulExpr_M_2E4mi},
	{TMIT_native_code, caseNeExpr_N_6dW7E,(const Char *)&nmim_31,10,
	(const Char *)&sgim_31,39,1,0x8001,19,xt_caseNeExpr_N_6dW7E},
	{TMIT_native_code, caseOrExpr_O_aRD76,(const Char *)&nmim_32,10,
	(const Char *)&sgim_32,39,1,0x8001,20,xt_caseOrExpr_O_aRD76},
	{TMIT_native_code, caseRemExpr_R_8DjlZ,(const Char *)&nmim_33,11,
	(const Char *)&sgim_33,40,1,0x8001,21,xt_caseRemExpr_R_8DjlZ},
	{TMIT_native_code, caseShlExpr_S_ebfKT,(const Char *)&nmim_34,11,
	(const Char *)&sgim_34,40,1,0x8001,22,xt_caseShlExpr_S_ebfKT},
	{TMIT_native_code, caseShrExpr_S_s4rfC,(const Char *)&nmim_35,11,
	(const Char *)&sgim_35,40,1,0x8001,23,xt_caseShrExpr_S_s4rfC},
	{TMIT_native_code, caseSubExpr_S_isYgI,(const Char *)&nmim_36,11,
	(const Char *)&sgim_36,40,1,0x8001,24,xt_caseSubExpr_S_isYgI},
	{TMIT_native_code, caseUshrExpr_U_eMAMb,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,41,1,0x8001,25,xt_caseUshrExpr_U_eMAMb},
	{TMIT_native_code, caseXorExpr_X_IONye,(const Char *)&nmim_38,11,
	(const Char *)&sgim_38,40,1,0x8001,26,xt_caseXorExpr_X_IONye},
	{TMIT_native_code, caseInterfaceInvokeExpr_I_CdBuv,(const Char *)&nmim_39,23,
	(const Char *)&sgim_39,52,1,0x8001,27,xt_caseInterfaceInvokeExpr_I_CdBuv},
	{TMIT_native_code, caseSpecialInvokeExpr_S_MCTms,(const Char *)&nmim_40,21,
	(const Char *)&sgim_40,50,1,0x8001,28,xt_caseSpecialInvokeExpr_S_MCTms},
	{TMIT_native_code, caseStaticInvokeExpr_S_6qm45,(const Char *)&nmim_41,20,
	(const Char *)&sgim_41,49,1,0x8001,29,xt_caseStaticInvokeExpr_S_6qm45},
	{TMIT_native_code, caseVirtualInvokeExpr_V_I2vDQ,(const Char *)&nmim_42,21,
	(const Char *)&sgim_42,50,1,0x8001,30,xt_caseVirtualInvokeExpr_V_I2vDQ},
	{TMIT_native_code, caseNewInvokeExpr_N_KiKcU,(const Char *)&nmim_43,17,
	(const Char *)&sgim_43,46,1,0x8001,31,xt_caseNewInvokeExpr_N_KiKcU},
	{TMIT_native_code, caseCastExpr_C_C5W1J,(const Char *)&nmim_44,12,
	(const Char *)&sgim_44,41,1,0x8001,32,xt_caseCastExpr_C_C5W1J},
	{TMIT_native_code, caseInstanceOfExpr_I_Oq66G,(const Char *)&nmim_45,18,
	(const Char *)&sgim_45,47,1,0x8001,33,xt_caseInstanceOfExpr_I_Oq66G},
	{TMIT_native_code, caseNewArrayExpr_N_AwDra,(const Char *)&nmim_46,16,
	(const Char *)&sgim_46,45,1,0x8001,34,xt_caseNewArrayExpr_N_AwDra},
	{TMIT_native_code, caseNewMultiArrayExpr_N_MfoWo,(const Char *)&nmim_47,21,
	(const Char *)&sgim_47,50,1,0x8001,35,xt_caseNewMultiArrayExpr_N_MfoWo},
	{TMIT_native_code, caseNewExpr_N_EBXpi,(const Char *)&nmim_48,11,
	(const Char *)&sgim_48,40,1,0x8001,36,xt_caseNewExpr_N_EBXpi},
	{TMIT_native_code, caseLengthExpr_L_igsJV,(const Char *)&nmim_49,14,
	(const Char *)&sgim_49,43,1,0x8001,37,xt_caseLengthExpr_L_igsJV},
	{TMIT_native_code, caseNegExpr_N_qmhwv,(const Char *)&nmim_50,11,
	(const Char *)&sgim_50,40,1,0x8001,38,xt_caseNegExpr_N_qmhwv},
	{TMIT_native_code, caseInstanceFieldRef_I_y12t0,(const Char *)&nmim_51,20,
	(const Char *)&sgim_51,49,1,0x8001,39,xt_caseInstanceFieldRef_I_y12t0},
	{TMIT_native_code, caseLocal_L_orPjP,(const Char *)&nmim_52,9,
	(const Char *)&sgim_52,38,1,0x8001,40,xt_caseLocal_L_orPjP},
	{TMIT_native_code, caseParameterRef_P_y92mo,(const Char *)&nmim_53,16,
	(const Char *)&sgim_53,45,1,0x8001,41,xt_caseParameterRef_P_y92mo},
	{TMIT_native_code, caseNextNextStmtRef_N_EdTIz,(const Char *)&nmim_54,19,
	(const Char *)&sgim_54,48,1,0x8001,42,xt_caseNextNextStmtRef_N_EdTIz},
	{TMIT_native_code, caseCaughtExceptionRef_C_U2Mk5,(const Char *)&nmim_55,22,
	(const Char *)&sgim_55,51,1,0x8001,43,xt_caseCaughtExceptionRef_C_U2Mk5},
	{TMIT_native_code, caseThisRef_T_GGxpE,(const Char *)&nmim_56,11,
	(const Char *)&sgim_56,40,1,0x8001,44,xt_caseThisRef_T_GGxpE},
	{TMIT_native_code, caseStaticFieldRef_S_8XEWR,(const Char *)&nmim_57,18,
	(const Char *)&sgim_57,47,1,0x8001,45,xt_caseStaticFieldRef_S_8XEWR},
	{TMIT_native_code, defaultCase_O_MFilX,(const Char *)&nmim_58,11,
	(const Char *)&sgim_58,21,1,0x8001,46,xt_defaultCase_O_MFilX},
	{TMIT_native_code, getResult__e0Q2C,(const Char *)&nmim_59,9,
	(const Char *)&sgim_59,20,1,0x1,47,xt_getResult__e0Q2C},
	{TMIT_native_code, setResult_O_UwApK,(const Char *)&nmim_60,9,
	(const Char *)&sgim_60,21,1,0x1,48,xt_setResult_O_UwApK},
    } /* end of methodsigs */
};


/*M caseArrayRef_A_uJRzj: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseArrayRef(Lca/mcgill/sable/soot/jimple/ArrayRef;)V */

Class xt_caseArrayRef_A_uJRzj[] = { 0 };

Void caseArrayRef_A_uJRzj(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseDoubleConstant_D_8HXuJ: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseDoubleConstant(Lca/mcgill/sable/soot/jimple/DoubleConstant;)V */

Class xt_caseDoubleConstant_D_8HXuJ[] = { 0 };

Void caseDoubleConstant_D_8HXuJ(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseFloatConstant_F_WjGVo: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseFloatConstant(Lca/mcgill/sable/soot/jimple/FloatConstant;)V */

Class xt_caseFloatConstant_F_WjGVo[] = { 0 };

Void caseFloatConstant_F_WjGVo(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIntConstant_I_kPuSC: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseIntConstant(Lca/mcgill/sable/soot/jimple/IntConstant;)V */

Class xt_caseIntConstant_I_kPuSC[] = { 0 };

Void caseIntConstant_I_kPuSC(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLongConstant_L_KLRTM: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseLongConstant(Lca/mcgill/sable/soot/jimple/LongConstant;)V */

Class xt_caseLongConstant_L_KLRTM[] = { 0 };

Void caseLongConstant_L_KLRTM(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNullConstant_N_KwFab: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNullConstant(Lca/mcgill/sable/soot/jimple/NullConstant;)V */

Class xt_caseNullConstant_N_KwFab[] = { 0 };

Void caseNullConstant_N_KwFab(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStringConstant_S_SKNmn: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseStringConstant(Lca/mcgill/sable/soot/jimple/StringConstant;)V */

Class xt_caseStringConstant_S_SKNmn[] = { 0 };

Void caseStringConstant_S_SKNmn(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseAddExpr_A_cSQ4I: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseAddExpr(Lca/mcgill/sable/soot/jimple/AddExpr;)V */

Class xt_caseAddExpr_A_cSQ4I[] = { 0 };

Void caseAddExpr_A_cSQ4I(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseAndExpr_A_sws7K: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseAndExpr(Lca/mcgill/sable/soot/jimple/AndExpr;)V */

Class xt_caseAndExpr_A_sws7K[] = { 0 };

Void caseAndExpr_A_sws7K(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpExpr_C_2YlIu: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseCmpExpr(Lca/mcgill/sable/soot/jimple/CmpExpr;)V */

Class xt_caseCmpExpr_C_2YlIu[] = { 0 };

Void caseCmpExpr_C_2YlIu(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpgExpr_C_oudKj: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseCmpgExpr(Lca/mcgill/sable/soot/jimple/CmpgExpr;)V */

Class xt_caseCmpgExpr_C_oudKj[] = { 0 };

Void caseCmpgExpr_C_oudKj(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmplExpr_C_8boNy: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseCmplExpr(Lca/mcgill/sable/soot/jimple/CmplExpr;)V */

Class xt_caseCmplExpr_C_8boNy[] = { 0 };

Void caseCmplExpr_C_8boNy(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseDivExpr_D_8sqLC: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseDivExpr(Lca/mcgill/sable/soot/jimple/DivExpr;)V */

Class xt_caseDivExpr_D_8sqLC[] = { 0 };

Void caseDivExpr_D_8sqLC(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseEqExpr_E_kLQbC: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseEqExpr(Lca/mcgill/sable/soot/jimple/EqExpr;)V */

Class xt_caseEqExpr_E_kLQbC[] = { 0 };

Void caseEqExpr_E_kLQbC(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGeExpr_G_UDMfz: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseGeExpr(Lca/mcgill/sable/soot/jimple/GeExpr;)V */

Class xt_caseGeExpr_G_UDMfz[] = { 0 };

Void caseGeExpr_G_UDMfz(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGtExpr_G_SbSuG: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseGtExpr(Lca/mcgill/sable/soot/jimple/GtExpr;)V */

Class xt_caseGtExpr_G_SbSuG[] = { 0 };

Void caseGtExpr_G_SbSuG(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLeExpr_L_cEVo9: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseLeExpr(Lca/mcgill/sable/soot/jimple/LeExpr;)V */

Class xt_caseLeExpr_L_cEVo9[] = { 0 };

Void caseLeExpr_L_cEVo9(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLtExpr_L_ac1Eg: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseLtExpr(Lca/mcgill/sable/soot/jimple/LtExpr;)V */

Class xt_caseLtExpr_L_ac1Eg[] = { 0 };

Void caseLtExpr_L_ac1Eg(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseMulExpr_M_2E4mi: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseMulExpr(Lca/mcgill/sable/soot/jimple/MulExpr;)V */

Class xt_caseMulExpr_M_2E4mi[] = { 0 };

Void caseMulExpr_M_2E4mi(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNeExpr_N_6dW7E: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNeExpr(Lca/mcgill/sable/soot/jimple/NeExpr;)V */

Class xt_caseNeExpr_N_6dW7E[] = { 0 };

Void caseNeExpr_N_6dW7E(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseOrExpr_O_aRD76: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseOrExpr(Lca/mcgill/sable/soot/jimple/OrExpr;)V */

Class xt_caseOrExpr_O_aRD76[] = { 0 };

Void caseOrExpr_O_aRD76(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRemExpr_R_8DjlZ: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseRemExpr(Lca/mcgill/sable/soot/jimple/RemExpr;)V */

Class xt_caseRemExpr_R_8DjlZ[] = { 0 };

Void caseRemExpr_R_8DjlZ(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShlExpr_S_ebfKT: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseShlExpr(Lca/mcgill/sable/soot/jimple/ShlExpr;)V */

Class xt_caseShlExpr_S_ebfKT[] = { 0 };

Void caseShlExpr_S_ebfKT(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShrExpr_S_s4rfC: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseShrExpr(Lca/mcgill/sable/soot/jimple/ShrExpr;)V */

Class xt_caseShrExpr_S_s4rfC[] = { 0 };

Void caseShrExpr_S_s4rfC(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSubExpr_S_isYgI: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseSubExpr(Lca/mcgill/sable/soot/jimple/SubExpr;)V */

Class xt_caseSubExpr_S_isYgI[] = { 0 };

Void caseSubExpr_S_isYgI(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseUshrExpr_U_eMAMb: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseUshrExpr(Lca/mcgill/sable/soot/jimple/UshrExpr;)V */

Class xt_caseUshrExpr_U_eMAMb[] = { 0 };

Void caseUshrExpr_U_eMAMb(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseXorExpr_X_IONye: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseXorExpr(Lca/mcgill/sable/soot/jimple/XorExpr;)V */

Class xt_caseXorExpr_X_IONye[] = { 0 };

Void caseXorExpr_X_IONye(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInterfaceInvokeExpr_I_CdBuv: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr;)V */

Class xt_caseInterfaceInvokeExpr_I_CdBuv[] = { 0 };

Void caseInterfaceInvokeExpr_I_CdBuv(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSpecialInvokeExpr_S_MCTms: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr;)V */

Class xt_caseSpecialInvokeExpr_S_MCTms[] = { 0 };

Void caseSpecialInvokeExpr_S_MCTms(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStaticInvokeExpr_S_6qm45: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseStaticInvokeExpr(Lca/mcgill/sable/soot/jimple/StaticInvokeExpr;)V */

Class xt_caseStaticInvokeExpr_S_6qm45[] = { 0 };

Void caseStaticInvokeExpr_S_6qm45(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseVirtualInvokeExpr_V_I2vDQ: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr;)V */

Class xt_caseVirtualInvokeExpr_V_I2vDQ[] = { 0 };

Void caseVirtualInvokeExpr_V_I2vDQ(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewInvokeExpr_N_KiKcU: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNewInvokeExpr(Lca/mcgill/sable/soot/jimple/NewInvokeExpr;)V */

Class xt_caseNewInvokeExpr_N_KiKcU[] = { 0 };

Void caseNewInvokeExpr_N_KiKcU(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCastExpr_C_C5W1J: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseCastExpr(Lca/mcgill/sable/soot/jimple/CastExpr;)V */

Class xt_caseCastExpr_C_C5W1J[] = { 0 };

Void caseCastExpr_C_C5W1J(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInstanceOfExpr_I_Oq66G: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseInstanceOfExpr(Lca/mcgill/sable/soot/jimple/InstanceOfExpr;)V */

Class xt_caseInstanceOfExpr_I_Oq66G[] = { 0 };

Void caseInstanceOfExpr_I_Oq66G(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewArrayExpr_N_AwDra: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNewArrayExpr(Lca/mcgill/sable/soot/jimple/NewArrayExpr;)V */

Class xt_caseNewArrayExpr_N_AwDra[] = { 0 };

Void caseNewArrayExpr_N_AwDra(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewMultiArrayExpr_N_MfoWo: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNewMultiArrayExpr(Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr;)V */

Class xt_caseNewMultiArrayExpr_N_MfoWo[] = { 0 };

Void caseNewMultiArrayExpr_N_MfoWo(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewExpr_N_EBXpi: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNewExpr(Lca/mcgill/sable/soot/jimple/NewExpr;)V */

Class xt_caseNewExpr_N_EBXpi[] = { 0 };

Void caseNewExpr_N_EBXpi(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLengthExpr_L_igsJV: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseLengthExpr(Lca/mcgill/sable/soot/jimple/LengthExpr;)V */

Class xt_caseLengthExpr_L_igsJV[] = { 0 };

Void caseLengthExpr_L_igsJV(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNegExpr_N_qmhwv: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNegExpr(Lca/mcgill/sable/soot/jimple/NegExpr;)V */

Class xt_caseNegExpr_N_qmhwv[] = { 0 };

Void caseNegExpr_N_qmhwv(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInstanceFieldRef_I_y12t0: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseInstanceFieldRef(Lca/mcgill/sable/soot/jimple/InstanceFieldRef;)V */

Class xt_caseInstanceFieldRef_I_y12t0[] = { 0 };

Void caseInstanceFieldRef_I_y12t0(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLocal_L_orPjP: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseLocal(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_caseLocal_L_orPjP[] = { 0 };

Void caseLocal_L_orPjP(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseParameterRef_P_y92mo: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseParameterRef(Lca/mcgill/sable/soot/jimple/ParameterRef;)V */

Class xt_caseParameterRef_P_y92mo[] = { 0 };

Void caseParameterRef_P_y92mo(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNextNextStmtRef_N_EdTIz: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseNextNextStmtRef(Lca/mcgill/sable/soot/jimple/NextNextStmtRef;)V */

Class xt_caseNextNextStmtRef_N_EdTIz[] = { 0 };

Void caseNextNextStmtRef_N_EdTIz(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCaughtExceptionRef_C_U2Mk5: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseCaughtExceptionRef(Lca/mcgill/sable/soot/jimple/CaughtExceptionRef;)V */

Class xt_caseCaughtExceptionRef_C_U2Mk5[] = { 0 };

Void caseCaughtExceptionRef_C_U2Mk5(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseThisRef_T_GGxpE: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseThisRef(Lca/mcgill/sable/soot/jimple/ThisRef;)V */

Class xt_caseThisRef_T_GGxpE[] = { 0 };

Void caseThisRef_T_GGxpE(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStaticFieldRef_S_8XEWR: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.caseStaticFieldRef(Lca/mcgill/sable/soot/jimple/StaticFieldRef;)V */

Class xt_caseStaticFieldRef_S_8XEWR[] = { 0 };

Void caseStaticFieldRef_S_8XEWR(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->class->M.
		defaultCase_O_MFilX.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_O_MFilX: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_MFilX[] = { 0 };

Void defaultCase_O_MFilX(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M getResult__e0Q2C: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.getResult()Ljava/lang/Object; */

Class xt_getResult__e0Q2C[] = { 0 };

Object getResult__e0Q2C(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->result;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setResult_O_UwApK: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.setResult(Ljava/lang/Object;)V */

Class xt_setResult_O_UwApK[] = { 0 };

Void setResult_O_UwApK(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch*)a1)->result = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__neDCM: ca.mcgill.sable.soot.jimple.AbstractJimpleValueSwitch.<init>()V */

Class xt_init__neDCM[] = { 0 };

Void init__neDCM(Object p0)
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



const Char ch_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'J','i','m','p','l','e','V','a','l','u','e','S','w','i','t','c','h'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractJimpleValueSwitch+53,	/* 0. ca.mcgill.sable.soot.jimple.AbstractJimp */
    0};
