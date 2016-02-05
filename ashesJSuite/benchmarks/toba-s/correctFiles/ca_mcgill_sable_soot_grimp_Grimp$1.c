/*  ca_mcgill_sable_soot_grimp_Grimp$1.c -- from Java class ca.mcgill.sable.soot.grimp.Grimp$1  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_Grimp$1.h"
#include "ca_mcgill_sable_soot_jimple_AbstractExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_jimple_AbstractValueBox.h"
#include "ca_mcgill_sable_soot_jimple_BinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_CastExpr.h"
#include "ca_mcgill_sable_soot_jimple_Expr.h"
#include "ca_mcgill_sable_soot_jimple_InstanceOfExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_NewArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_UnopExpr.h"
#include "ca_mcgill_sable_util_ArrayList.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grim_8XTtw.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.C,
    &cl_ca_mcgill_sable_soot_jimple_BinopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Expr.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceOfExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_NewArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_UnopExpr.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
};

extern const Char ch_ca_mcgill_sable_soot_grim_8XTtw[];
extern const void *st_ca_mcgill_sable_soot_grim_8XTtw[];
extern Class xt_caseAddExpr_A_08tcB[];
extern Class xt_caseAndExpr_A_gM4fD[];
extern Class xt_caseCmpExpr_C_QdYPn[];
extern Class xt_caseCmpgExpr_C_W5dW5[];
extern Class xt_caseCmplExpr_C_GMnZk[];
extern Class xt_caseDivExpr_D_WH2Tv[];
extern Class xt_caseEqExpr_E_ys4d3[];
extern Class xt_caseNeExpr_N_kU995[];
extern Class xt_caseGeExpr_G_49LBj[];
extern Class xt_caseGtExpr_G_2HQQq[];
extern Class xt_caseLeExpr_L_m9UKT[];
extern Class xt_caseLtExpr_L_kHZZ0[];
extern Class xt_caseMulExpr_M_QTGtb[];
extern Class xt_caseOrExpr_O_kmCtQ[];
extern Class xt_caseRemExpr_R_05b8z[];
extern Class xt_caseShlExpr_S_2rRRM[];
extern Class xt_caseShrExpr_S_gk3nv[];
extern Class xt_caseUshrExpr_U_QzPDE[];
extern Class xt_caseSubExpr_S_aUP3i[];
extern Class xt_caseXorExpr_X_w4qG7[];
extern Class xt_caseInterfaceInvokeExpr_I_iNVcZ[];
extern Class xt_caseSpecialInvokeExpr_S_SRwRV[];
extern Class xt_caseStaticInvokeExpr_S_gFY2Z[];
extern Class xt_caseVirtualInvokeExpr_V_Oh88k[];
extern Class xt_caseCastExpr_C_eTaTb[];
extern Class xt_caseInstanceOfExpr_I_gLmkb[];
extern Class xt_caseNewArrayExpr_N_Wr6KL[];
extern Class xt_caseNewMultiArrayExpr_N_Su1rS[];
extern Class xt_caseNewExpr_N_sRzxb[];
extern Class xt_caseLengthExpr_L_oZcUv[];
extern Class xt_caseNegExpr_N_eCTDo[];
extern Class xt_defaultCase_O_eiMTl[];
extern Class xt_init_EG_2XNTm[];

#define HASHMASK 0x1ff
/*  14.  b1803614  (14)  caseCmplExpr  */
/*  22.  b47e3e22  (22)  caseAddExpr  */
/*  24.  e47b4024  (24)  caseNewInvokeExpr  */
/*  25.  5961ec24  (24)  caseNewMultiArrayExpr  */
/*  52.  c99ce052  (52)  caseSpecialInvokeExpr  */
/*  53.  e028e852  (52)  caseNewArrayExpr  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  80.  fd661c80  (80)  caseInstanceOfExpr  */
/*  92.  e66b5492  (92)  caseDivExpr  */
/*  93.  b0814492  (92)  caseInterfaceInvokeExpr  */
/*  9a.  532d269a  (9a)  caseShrExpr  */
/*  a0.  8d1802a0  (a0)  caseRemExpr  */
/*  f4.  16a50af4  (f4)  caseNegExpr  */
/*  f8.  66a072f8  (f8)  caseUshrExpr  */
/*  fc.  5b7a7efc  (fc)  caseGeExpr  */
/*  128.  ced4a328  (128)  defaultCase  */
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
/*  196.  bbf41396  (196)  caseNeExpr  */
/*  19a.  dad9b79a  (19a)  caseCmpgExpr  */
/*  19e.  b37359e  (19e)  caseOrExpr  */
/*  1bc.  7e0f3fbc  (1bc)  caseSubExpr  */
/*  1c4.  9dd6adc4  (1c4)  caseMulExpr  */
/*  1c5.  dac1dbc4  (1c4)  caseStaticInvokeExpr  */
/*  1d0.  df5467d0  (1d0)  caseCmpExpr  */
/*  1d1.  dde08fd0  (1d0)  caseLtExpr  */
/*  1d2.  4c0d6fd2  (1d2)  clone  */
/*  1d4.  d47fe3d4  (1d4)  caseNewExpr  */
/*  1d6.  16b291d6  (1d6)  caseCastExpr  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1316997612, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseCmplExpr_C_GMnZk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1266794974, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseAddExpr_A_08tcB,
    0, 0,
    -461684700, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseNewInvokeExpr_N_NWsn8,
    1499589668, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseNewMultiArrayExpr_N_Su1rS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -912465838, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseSpecialInvokeExpr_S_SRwRV,
    -534189998, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseNewArrayExpr_N_Wr6KL,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43639680, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseInstanceOfExpr_I_gLmkb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -429173614, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseDivExpr_D_WH2Tv,
    -1333705582, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseInterfaceInvokeExpr_I_iNVcZ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1395467930, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseShrExpr_S_gk3nv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1927806304, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseRemExpr_R_05b8z,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379914996, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseNegExpr_N_eCTDo,
    0, 0, 0, 0, 0, 0,
    1721791224, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseUshrExpr_U_QzPDE,
    0, 0, 0, 0, 0, 0,
    1534754556, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseGeExpr_G_49LBj,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.defaultCase_O_eiMTl,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    737875270, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseShlExpr_S_2rRRM,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.equals_O_Ba6e0,
    -786814130, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseXorExpr_X_w4qG7,
    -1470009522, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseVirtualInvokeExpr_V_Oh88k,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.hashCode__8wJNW,
    725652322, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseGtExpr_G_2HQQq,
    0, 0,
    193601892, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseLengthExpr_L_oZcUv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236616554, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseLeExpr_L_m9UKT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1236620922, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseAndExpr_A_gM4fD,
    0, 0,
    -1170252408, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseEqExpr_E_ys4d3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1141632106, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseNeExpr_N_kU995,
    0, 0, 0, 0, 0, 0,
    -623265894, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseCmpgExpr_C_W5dW5,
    0, 0, 0, 0, 0, 0,
    188167582, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseOrExpr_O_kmCtQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2114928572, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseSubExpr_S_aUP3i,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646875196, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseMulExpr_M_QTGtb,
    -624829500, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseStaticInvokeExpr_S_gFY2Z,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -548116528, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseCmpExpr_C_QdYPn,
    -572485680, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseLtExpr_L_kHZZ0,
    1275949010, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.clone__dslwm, 0, 0,
    -729816108, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseNewExpr_N_sRzxb,
    0, 0,
    380801494, &cl_ca_mcgill_sable_soot_grim_8XTtw.M.caseCastExpr_C_eTaTb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(34) nmchars = {&acl_char, 0, 34, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','$','1'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 34 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
't','h','i','s','$','0'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','g','r','i','m','p','/','G','r','i','m','p',';'};
static const Char nmiv_2[] = {
'v','a','l','$','r','e','t','u','r','n','e','d','E','x','p','r'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','g','r','i','m','p','/','E','x','p','r','B','o','x',';'};
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
'c','a','s','e','A','d','d','E','x','p','r'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','d','d','E','x','p',
'r',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','A','n','d','E','x','p','r'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','n','d','E','x','p',
'r',';',')','V'};
static const Char nmim_14[] = {
'c','a','s','e','N','e','w','I','n','v','o','k','e','E','x','p','r'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','I','n','v',
'o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','C','m','p','E','x','p','r'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','E','x','p',
'r',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','C','m','p','g','E','x','p','r'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','g','E','x',
'p','r',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','C','m','p','l','E','x','p','r'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','l','E','x',
'p','r',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','D','i','v','E','x','p','r'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','D','i','v','E','x','p',
'r',';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','E','q','E','x','p','r'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','q','E','x','p','r',
';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','N','e','E','x','p','r'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','E','x','p','r',
';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','G','e','E','x','p','r'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','e','E','x','p','r',
';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','G','t','E','x','p','r'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','t','E','x','p','r',
';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','L','e','E','x','p','r'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','e','E','x','p','r',
';',')','V'};
static const Char nmim_24[] = {
'c','a','s','e','L','t','E','x','p','r'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','t','E','x','p','r',
';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','M','u','l','E','x','p','r'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','M','u','l','E','x','p',
'r',';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','O','r','E','x','p','r'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','O','r','E','x','p','r',
';',')','V'};
static const Char nmim_27[] = {
'c','a','s','e','R','e','m','E','x','p','r'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','m','E','x','p',
'r',';',')','V'};
static const Char nmim_28[] = {
'c','a','s','e','S','h','l','E','x','p','r'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','h','l','E','x','p',
'r',';',')','V'};
static const Char nmim_29[] = {
'c','a','s','e','S','h','r','E','x','p','r'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','h','r','E','x','p',
'r',';',')','V'};
static const Char nmim_30[] = {
'c','a','s','e','U','s','h','r','E','x','p','r'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','s','h','r','E','x',
'p','r',';',')','V'};
static const Char nmim_31[] = {
'c','a','s','e','S','u','b','E','x','p','r'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','u','b','E','x','p',
'r',';',')','V'};
static const Char nmim_32[] = {
'c','a','s','e','X','o','r','E','x','p','r'};
static const Char sgim_32[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','X','o','r','E','x','p',
'r',';',')','V'};
static const Char nmim_33[] = {
'c','a','s','e','I','n','t','e','r','f','a','c','e','I','n','v','o','k',
'e','E','x','p','r'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','t','e','r','f',
'a','c','e','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_34[] = {
'c','a','s','e','S','p','e','c','i','a','l','I','n','v','o','k','e','E',
'x','p','r'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','p','e','c','i','a',
'l','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_35[] = {
'c','a','s','e','S','t','a','t','i','c','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','a','t','i','c',
'I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_36[] = {
'c','a','s','e','V','i','r','t','u','a','l','I','n','v','o','k','e','E',
'x','p','r'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','i','r','t','u','a',
'l','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_37[] = {
'c','a','s','e','C','a','s','t','E','x','p','r'};
static const Char sgim_37[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','a','s','t','E','x',
'p','r',';',')','V'};
static const Char nmim_38[] = {
'c','a','s','e','I','n','s','t','a','n','c','e','O','f','E','x','p','r'};
static const Char sgim_38[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','s','t','a','n',
'c','e','O','f','E','x','p','r',';',')','V'};
static const Char nmim_39[] = {
'c','a','s','e','N','e','w','A','r','r','a','y','E','x','p','r'};
static const Char sgim_39[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','A','r','r',
'a','y','E','x','p','r',';',')','V'};
static const Char nmim_40[] = {
'c','a','s','e','N','e','w','M','u','l','t','i','A','r','r','a','y','E',
'x','p','r'};
static const Char sgim_40[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','M','u','l',
't','i','A','r','r','a','y','E','x','p','r',';',')','V'};
static const Char nmim_41[] = {
'c','a','s','e','N','e','w','E','x','p','r'};
static const Char sgim_41[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','E','x','p',
'r',';',')','V'};
static const Char nmim_42[] = {
'c','a','s','e','L','e','n','g','t','h','E','x','p','r'};
static const Char sgim_42[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','e','n','g','t','h',
'E','x','p','r',';',')','V'};
static const Char nmim_43[] = {
'c','a','s','e','N','e','g','E','x','p','r'};
static const Char sgim_43[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','g','E','x','p',
'r',';',')','V'};
static const Char nmim_44[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_44[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_45[] = {
's','e','t','R','e','s','u','l','t'};
static const Char sgim_45[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_46[] = {
'g','e','t','R','e','s','u','l','t'};
static const Char sgim_46[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_47[] = {
'<','i','n','i','t','>'};
static const Char sgim_47[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','g','r','i','m','p','/','E','x','p','r','B','o','x',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','g','r','i','m','p','/','G','r','i','m','p',';',')',
'V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grim_8XTtw, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grim_8XTtw, this0_oYxUV), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,34,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grim_8XTtw, valreturnedExpr_p14pu), 0,(const Char *)&nmiv_2,16,(const Char *)&sgiv_2,36,1,0x12,1}, 
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
} inr_ca_mcgill_sable_soot_grim_8XTtw = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grim_8XTtw.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grim_8XTtw cl_ca_mcgill_sable_soot_grim_8XTtw = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grim_8XTtw),
    48,
    0,
    3,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    14, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grim_8XTtw,
    st_ca_mcgill_sable_soot_grim_8XTtw,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grim_8XTtw,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__8JSJz,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,35,0},
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
	{TMIT_native_code, caseAddExpr_A_08tcB,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,40,1,0x8001,0,xt_caseAddExpr_A_08tcB},
	{TMIT_native_code, caseAndExpr_A_gM4fD,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,40,1,0x8001,1,xt_caseAndExpr_A_gM4fD},
	{TMIT_native_code, caseNewInvokeExpr_N_NWsn8,(const Char *)&nmim_14,17,
	(const Char *)&sgim_14,46,0,0x8001,2,0},
	{TMIT_native_code, caseCmpExpr_C_QdYPn,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,40,1,0x8001,2,xt_caseCmpExpr_C_QdYPn},
	{TMIT_native_code, caseCmpgExpr_C_W5dW5,(const Char *)&nmim_16,12,
	(const Char *)&sgim_16,41,1,0x8001,3,xt_caseCmpgExpr_C_W5dW5},
	{TMIT_native_code, caseCmplExpr_C_GMnZk,(const Char *)&nmim_17,12,
	(const Char *)&sgim_17,41,1,0x8001,4,xt_caseCmplExpr_C_GMnZk},
	{TMIT_native_code, caseDivExpr_D_WH2Tv,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,40,1,0x8001,5,xt_caseDivExpr_D_WH2Tv},
	{TMIT_native_code, caseEqExpr_E_ys4d3,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x8001,6,xt_caseEqExpr_E_ys4d3},
	{TMIT_native_code, caseNeExpr_N_kU995,(const Char *)&nmim_20,10,
	(const Char *)&sgim_20,39,1,0x8001,7,xt_caseNeExpr_N_kU995},
	{TMIT_native_code, caseGeExpr_G_49LBj,(const Char *)&nmim_21,10,
	(const Char *)&sgim_21,39,1,0x8001,8,xt_caseGeExpr_G_49LBj},
	{TMIT_native_code, caseGtExpr_G_2HQQq,(const Char *)&nmim_22,10,
	(const Char *)&sgim_22,39,1,0x8001,9,xt_caseGtExpr_G_2HQQq},
	{TMIT_native_code, caseLeExpr_L_m9UKT,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,39,1,0x8001,10,xt_caseLeExpr_L_m9UKT},
	{TMIT_native_code, caseLtExpr_L_kHZZ0,(const Char *)&nmim_24,10,
	(const Char *)&sgim_24,39,1,0x8001,11,xt_caseLtExpr_L_kHZZ0},
	{TMIT_native_code, caseMulExpr_M_QTGtb,(const Char *)&nmim_25,11,
	(const Char *)&sgim_25,40,1,0x8001,12,xt_caseMulExpr_M_QTGtb},
	{TMIT_native_code, caseOrExpr_O_kmCtQ,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,39,1,0x8001,13,xt_caseOrExpr_O_kmCtQ},
	{TMIT_native_code, caseRemExpr_R_05b8z,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,40,1,0x8001,14,xt_caseRemExpr_R_05b8z},
	{TMIT_native_code, caseShlExpr_S_2rRRM,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,40,1,0x8001,15,xt_caseShlExpr_S_2rRRM},
	{TMIT_native_code, caseShrExpr_S_gk3nv,(const Char *)&nmim_29,11,
	(const Char *)&sgim_29,40,1,0x8001,16,xt_caseShrExpr_S_gk3nv},
	{TMIT_native_code, caseUshrExpr_U_QzPDE,(const Char *)&nmim_30,12,
	(const Char *)&sgim_30,41,1,0x8001,17,xt_caseUshrExpr_U_QzPDE},
	{TMIT_native_code, caseSubExpr_S_aUP3i,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,40,1,0x8001,18,xt_caseSubExpr_S_aUP3i},
	{TMIT_native_code, caseXorExpr_X_w4qG7,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,40,1,0x8001,19,xt_caseXorExpr_X_w4qG7},
	{TMIT_native_code, caseInterfaceInvokeExpr_I_iNVcZ,(const Char *)&nmim_33,23,
	(const Char *)&sgim_33,52,1,0x8001,20,xt_caseInterfaceInvokeExpr_I_iNVcZ},
	{TMIT_native_code, caseSpecialInvokeExpr_S_SRwRV,(const Char *)&nmim_34,21,
	(const Char *)&sgim_34,50,1,0x8001,21,xt_caseSpecialInvokeExpr_S_SRwRV},
	{TMIT_native_code, caseStaticInvokeExpr_S_gFY2Z,(const Char *)&nmim_35,20,
	(const Char *)&sgim_35,49,1,0x8001,22,xt_caseStaticInvokeExpr_S_gFY2Z},
	{TMIT_native_code, caseVirtualInvokeExpr_V_Oh88k,(const Char *)&nmim_36,21,
	(const Char *)&sgim_36,50,1,0x8001,23,xt_caseVirtualInvokeExpr_V_Oh88k},
	{TMIT_native_code, caseCastExpr_C_eTaTb,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,41,1,0x8001,24,xt_caseCastExpr_C_eTaTb},
	{TMIT_native_code, caseInstanceOfExpr_I_gLmkb,(const Char *)&nmim_38,18,
	(const Char *)&sgim_38,47,1,0x8001,25,xt_caseInstanceOfExpr_I_gLmkb},
	{TMIT_native_code, caseNewArrayExpr_N_Wr6KL,(const Char *)&nmim_39,16,
	(const Char *)&sgim_39,45,1,0x8001,26,xt_caseNewArrayExpr_N_Wr6KL},
	{TMIT_native_code, caseNewMultiArrayExpr_N_Su1rS,(const Char *)&nmim_40,21,
	(const Char *)&sgim_40,50,1,0x8001,27,xt_caseNewMultiArrayExpr_N_Su1rS},
	{TMIT_native_code, caseNewExpr_N_sRzxb,(const Char *)&nmim_41,11,
	(const Char *)&sgim_41,40,1,0x8001,28,xt_caseNewExpr_N_sRzxb},
	{TMIT_native_code, caseLengthExpr_L_oZcUv,(const Char *)&nmim_42,14,
	(const Char *)&sgim_42,43,1,0x8001,29,xt_caseLengthExpr_L_oZcUv},
	{TMIT_native_code, caseNegExpr_N_eCTDo,(const Char *)&nmim_43,11,
	(const Char *)&sgim_43,40,1,0x8001,30,xt_caseNegExpr_N_eCTDo},
	{TMIT_native_code, defaultCase_O_eiMTl,(const Char *)&nmim_44,11,
	(const Char *)&sgim_44,21,1,0x8001,31,xt_defaultCase_O_eiMTl},
	{TMIT_native_code, setResult_O_HchsU,(const Char *)&nmim_45,9,
	(const Char *)&sgim_45,21,0,0x1,33,0},
	{TMIT_native_code, getResult__NMUvI,(const Char *)&nmim_46,9,
	(const Char *)&sgim_46,20,0,0x1,34,0},
	{TMIT_native_code, init_EG_2XNTm,(const Char *)&nmim_47,6,
	(const Char *)&sgim_47,73,1,0x0,32,xt_init_EG_2XNTm},
    } /* end of methodsigs */
};


/*M caseAddExpr_A_08tcB: ca.mcgill.sable.soot.grimp.Grimp$1.caseAddExpr(Lca/mcgill/sable/soot/jimple/AddExpr;)V */

Class xt_caseAddExpr_A_08tcB[] = { 0 };

Void caseAddExpr_A_08tcB(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newAddExpr_VV_7cnb3.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseAndExpr_A_gM4fD: ca.mcgill.sable.soot.grimp.Grimp$1.caseAndExpr(Lca/mcgill/sable/soot/jimple/AndExpr;)V */

Class xt_caseAndExpr_A_gM4fD[] = { 0 };

Void caseAndExpr_A_gM4fD(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newAndExpr_VV_llrdX.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpExpr_C_QdYPn: ca.mcgill.sable.soot.grimp.Grimp$1.caseCmpExpr(Lca/mcgill/sable/soot/jimple/CmpExpr;)V */

Class xt_caseCmpExpr_C_QdYPn[] = { 0 };

Void caseCmpExpr_C_QdYPn(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newCmpExpr_VV_l6dZk.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpgExpr_C_W5dW5: ca.mcgill.sable.soot.grimp.Grimp$1.caseCmpgExpr(Lca/mcgill/sable/soot/jimple/CmpgExpr;)V */

Class xt_caseCmpgExpr_C_W5dW5[] = { 0 };

Void caseCmpgExpr_C_W5dW5(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newCmpgExpr_VV_DWQPo.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmplExpr_C_GMnZk: ca.mcgill.sable.soot.grimp.Grimp$1.caseCmplExpr(Lca/mcgill/sable/soot/jimple/CmplExpr;)V */

Class xt_caseCmplExpr_C_GMnZk[] = { 0 };

Void caseCmplExpr_C_GMnZk(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newCmplExpr_VV_L3sp3.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseDivExpr_D_WH2Tv: ca.mcgill.sable.soot.grimp.Grimp$1.caseDivExpr(Lca/mcgill/sable/soot/jimple/DivExpr;)V */

Class xt_caseDivExpr_D_WH2Tv[] = { 0 };

Void caseDivExpr_D_WH2Tv(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newDivExpr_VV_Zrtox.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseEqExpr_E_ys4d3: ca.mcgill.sable.soot.grimp.Grimp$1.caseEqExpr(Lca/mcgill/sable/soot/jimple/EqExpr;)V */

Class xt_caseEqExpr_E_ys4d3[] = { 0 };

Void caseEqExpr_E_ys4d3(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newEqExpr_VV_r517A.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNeExpr_N_kU995: ca.mcgill.sable.soot.grimp.Grimp$1.caseNeExpr(Lca/mcgill/sable/soot/jimple/NeExpr;)V */

Class xt_caseNeExpr_N_kU995[] = { 0 };

Void caseNeExpr_N_kU995(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newNeExpr_VV_5z6ew.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGeExpr_G_49LBj: ca.mcgill.sable.soot.grimp.Grimp$1.caseGeExpr(Lca/mcgill/sable/soot/jimple/GeExpr;)V */

Class xt_caseGeExpr_G_49LBj[] = { 0 };

Void caseGeExpr_G_49LBj(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newGeExpr_VV_j1KYf.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGtExpr_G_2HQQq: ca.mcgill.sable.soot.grimp.Grimp$1.caseGtExpr(Lca/mcgill/sable/soot/jimple/GtExpr;)V */

Class xt_caseGtExpr_G_2HQQq[] = { 0 };

Void caseGtExpr_G_2HQQq(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newGtExpr_VV_Z9MZJ.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLeExpr_L_m9UKT: ca.mcgill.sable.soot.grimp.Grimp$1.caseLeExpr(Lca/mcgill/sable/soot/jimple/LeExpr;)V */

Class xt_caseLeExpr_L_m9UKT[] = { 0 };

Void caseLeExpr_L_m9UKT(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newLeExpr_VV_j2vl4.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLtExpr_L_kHZZ0: ca.mcgill.sable.soot.grimp.Grimp$1.caseLtExpr(Lca/mcgill/sable/soot/jimple/LtExpr;)V */

Class xt_caseLtExpr_L_kHZZ0[] = { 0 };

Void caseLtExpr_L_kHZZ0(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newLtExpr_VV_Zaxmy.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseMulExpr_M_QTGtb: ca.mcgill.sable.soot.grimp.Grimp$1.caseMulExpr(Lca/mcgill/sable/soot/jimple/MulExpr;)V */

Class xt_caseMulExpr_M_QTGtb[] = { 0 };

Void caseMulExpr_M_QTGtb(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newMulExpr_VV_9O7wf.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseOrExpr_O_kmCtQ: ca.mcgill.sable.soot.grimp.Grimp$1.caseOrExpr(Lca/mcgill/sable/soot/jimple/OrExpr;)V */

Class xt_caseOrExpr_O_kmCtQ[] = { 0 };

Void caseOrExpr_O_kmCtQ(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newOrExpr_VV_HiAQ6.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRemExpr_R_05b8z: ca.mcgill.sable.soot.grimp.Grimp$1.caseRemExpr(Lca/mcgill/sable/soot/jimple/RemExpr;)V */

Class xt_caseRemExpr_R_05b8z[] = { 0 };

Void caseRemExpr_R_05b8z(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newRemExpr_VV_FMxFd.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShlExpr_S_2rRRM: ca.mcgill.sable.soot.grimp.Grimp$1.caseShlExpr(Lca/mcgill/sable/soot/jimple/ShlExpr;)V */

Class xt_caseShlExpr_S_2rRRM[] = { 0 };

Void caseShlExpr_S_2rRRM(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newShlExpr_VV_PUZ1c.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShrExpr_S_gk3nv: ca.mcgill.sable.soot.grimp.Grimp$1.caseShrExpr(Lca/mcgill/sable/soot/jimple/ShrExpr;)V */

Class xt_caseShrExpr_S_gk3nv[] = { 0 };

Void caseShrExpr_S_gk3nv(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newShrExpr_VV_1XqBw.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseUshrExpr_U_QzPDE: ca.mcgill.sable.soot.grimp.Grimp$1.caseUshrExpr(Lca/mcgill/sable/soot/jimple/UshrExpr;)V */

Class xt_caseUshrExpr_U_QzPDE[] = { 0 };

Void caseUshrExpr_U_QzPDE(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newUshrExpr_VV_9OIJi.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSubExpr_S_aUP3i: ca.mcgill.sable.soot.grimp.Grimp$1.caseSubExpr(Lca/mcgill/sable/soot/jimple/SubExpr;)V */

Class xt_caseSubExpr_S_aUP3i[] = { 0 };

Void caseSubExpr_S_aUP3i(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newSubExpr_VV_jXJbu.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseXorExpr_X_w4qG7: ca.mcgill.sable.soot.grimp.Grimp$1.caseXorExpr(Lca/mcgill/sable/soot/jimple/XorExpr;)V */

Class xt_caseXorExpr_X_w4qG7[] = { 0 };

Void caseXorExpr_X_w4qG7(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1897633053)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a4)->this0_oYxUV;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1696921970)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newExpr_V_B7nJe.f(a4,a5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newXorExpr_VV_zgr82.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInterfaceInvokeExpr_I_iNVcZ: ca.mcgill.sable.soot.grimp.Grimp$1.caseInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr;)V */

Class xt_caseInterfaceInvokeExpr_I_iNVcZ[] = { 0 };

Void caseInterfaceInvokeExpr_I_iNVcZ(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(10,L2);

L1:	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	i4 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1091742784)->f)(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExpr_V_B7nJe.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,1465840485)->f)(a2);
	if (i1 < i2)
		GOBACK(42,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1295252652)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,54970279)->f)(a4);
	a5 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newInterfaceInvokeExp_LSL_uqlZZ.f(a2,a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSpecialInvokeExpr_S_SRwRV: ca.mcgill.sable.soot.grimp.Grimp$1.caseSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr;)V */

Class xt_caseSpecialInvokeExpr_S_SRwRV[] = { 0 };

Void caseSpecialInvokeExpr_S_SRwRV(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(10,L2);

L1:	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	i4 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1091742784)->f)(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExpr_V_B7nJe.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,1465840485)->f)(a2);
	if (i1 < i2)
		GOBACK(42,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1295252652)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,54970279)->f)(a4);
	a5 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newSpecialInvokeExpr_LSL_u2HPi.f(a2,a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStaticInvokeExpr_S_gFY2Z: ca.mcgill.sable.soot.grimp.Grimp$1.caseStaticInvokeExpr(Lca/mcgill/sable/soot/jimple/StaticInvokeExpr;)V */

Class xt_caseStaticInvokeExpr_S_gFY2Z[] = { 0 };

Void caseStaticInvokeExpr_S_gFY2Z(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(10,L2);

L1:	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	i4 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1091742784)->f)(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExpr_V_B7nJe.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,1465840485)->f)(a2);
	if (i1 < i2)
		GOBACK(42,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,54970279)->f)(a3);
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newStaticInvokeExpr_SL_ArUCB.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseVirtualInvokeExpr_V_Oh88k: ca.mcgill.sable.soot.grimp.Grimp$1.caseVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr;)V */

Class xt_caseVirtualInvokeExpr_V_Oh88k[] = { 0 };

Void caseVirtualInvokeExpr_V_Oh88k(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(10,L2);

L1:	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	i4 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1091742784)->f)(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExpr_V_B7nJe.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,1465840485)->f)(a2);
	if (i1 < i2)
		GOBACK(42,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1295252652)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,54970279)->f)(a4);
	a5 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newVirtualInvokeExpr_LSL_e8vOg.f(a2,a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCastExpr_C_eTaTb: ca.mcgill.sable.soot.grimp.Grimp$1.caseCastExpr(Lca/mcgill/sable/soot/jimple/CastExpr;)V */

Class xt_caseCastExpr_C_eTaTb[] = { 0 };

Void caseCastExpr_C_eTaTb(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1043173984)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1832792848)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newCastExpr_VT_2Njag.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInstanceOfExpr_I_gLmkb: ca.mcgill.sable.soot.grimp.Grimp$1.caseInstanceOfExpr(Lca/mcgill/sable/soot/jimple/InstanceOfExpr;)V */

Class xt_caseInstanceOfExpr_I_gLmkb[] = { 0 };

Void caseInstanceOfExpr_I_gLmkb(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1043173984)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-703223410)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newInstanceOfExpr_VT_66MFq.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewArrayExpr_N_Wr6KL: ca.mcgill.sable.soot.grimp.Grimp$1.caseNewArrayExpr(Lca/mcgill/sable/soot/jimple/NewArrayExpr;)V */

Class xt_caseNewArrayExpr_N_Wr6KL[] = { 0 };

Void caseNewArrayExpr_N_Wr6KL(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1692016385)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-303484964)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newNewArrayExpr_TV_0MVt0.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewMultiArrayExpr_N_Su1rS: ca.mcgill.sable.soot.grimp.Grimp$1.caseNewMultiArrayExpr(Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr;)V */

Class xt_caseNewMultiArrayExpr_N_Su1rS[] = { 0 };

Void caseNewMultiArrayExpr_N_Su1rS(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-2008166658)->f)(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1064319757)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newNewMultiArrayExpr_AL_Z2qaL.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewExpr_N_sRzxb: ca.mcgill.sable.soot.grimp.Grimp$1.caseNewExpr(Lca/mcgill/sable/soot/jimple/NewExpr;)V */

Class xt_caseNewExpr_N_sRzxb[] = { 0 };

Void caseNewExpr_N_sRzxb(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1015674292)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newNewExpr_R_bIf9u.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLengthExpr_L_oZcUv: ca.mcgill.sable.soot.grimp.Grimp$1.caseLengthExpr(Lca/mcgill/sable/soot/jimple/LengthExpr;)V */

Class xt_caseLengthExpr_L_oZcUv[] = { 0 };

Void caseLengthExpr_L_oZcUv(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1043173984)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newLengthExpr_V_5i4o8.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNegExpr_N_eCTDo: ca.mcgill.sable.soot.grimp.Grimp$1.caseNegExpr(Lca/mcgill/sable/soot/jimple/NegExpr;)V */

Class xt_caseNegExpr_N_eCTDo[] = { 0 };

Void caseNegExpr_N_eCTDo(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1043173984)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExpr_V_B7nJe.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newNegExpr_V_ZofCq.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_O_eiMTl: ca.mcgill.sable.soot.grimp.Grimp$1.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_eiMTl[] = { 0 };

Void defaultCase_O_eiMTl(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Expr.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_EG_2XNTm: ca.mcgill.sable.soot.grimp.Grimp$1.<init>(Lca/mcgill/sable/soot/grimp/ExprBox;Lca/mcgill/sable/soot/grimp/Grimp;)V */

Class xt_init_EG_2XNTm[] = { 0 };

Void init_EG_2XNTm(Object p0, Object p1, Object p2)
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
	init__8JSJz(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->valreturnedExpr_p14pu = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grim_8XTtw*)a1)->this0_oYxUV = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grim_8XTtw[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','$','1'};

const void *st_ca_mcgill_sable_soot_grim_8XTtw[] = {
    ch_ca_mcgill_sable_soot_grim_8XTtw+34,	/* 0. ca.mcgill.sable.soot.grimp.Grimp$1 */
    0};
