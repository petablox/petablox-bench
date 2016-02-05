/*  ca_mcgill_sable_soot_grimp_GrimpExprSwitch.c -- from Java class ca.mcgill.sable.soot.grimp.GrimpExprSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GrimpExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GrimpExprSwitch[];
extern const void *st_ca_mcgill_sable_soot_grimp_GrimpExprSwitch[];
extern Class xt_caseAddExpr_A_25uxA[];
extern Class xt_caseAndExpr_A_iJ5AC[];
extern Class xt_caseCmpExpr_C_SaZan[];
extern Class xt_caseCmpgExpr_C_kaGIK[];
extern Class xt_caseCmplExpr_C_836rG[];
extern Class xt_caseDivExpr_D_YE3ev[];
extern Class xt_caseEqExpr_E_KAarp[];
extern Class xt_caseNeExpr_N_w2gnr[];
extern Class xt_caseGeExpr_G_ghRPF[];
extern Class xt_caseGtExpr_G_ePW4N[];
extern Class xt_caseLeExpr_L_yh0Zf[];
extern Class xt_caseLtExpr_L_A1lT3[];
extern Class xt_caseMulExpr_M_SQHOa[];
extern Class xt_caseOrExpr_O_wuIHc[];
extern Class xt_caseRemExpr_R_YPWNR[];
extern Class xt_caseShlExpr_S_0cDx5[];
extern Class xt_caseShrExpr_S_e5P2O[];
extern Class xt_caseUshrExpr_U_eEiqj[];
extern Class xt_caseSubExpr_S_8FBJA[];
extern Class xt_caseXorExpr_X_y1r17[];
extern Class xt_caseInterfaceInvokeExpr_I_wK1or[];
extern Class xt_caseSpecialInvokeExpr_S_ubG7h[];
extern Class xt_caseStaticInvokeExpr_S_K6QiH[];
extern Class xt_caseVirtualInvokeExpr_V_qBhoF[];
extern Class xt_caseNewInvokeExpr_N_yUgXI[];
extern Class xt_caseCastExpr_C_CXDFQ[];
extern Class xt_caseInstanceOfExpr_I_0XrJ1[];
extern Class xt_caseNewArrayExpr_N_4iUYM[];
extern Class xt_caseNewMultiArrayExpr_N_uOaHd[];
extern Class xt_caseNewExpr_N_uOASa[];
extern Class xt_caseLengthExpr_L_mcHdk[];
extern Class xt_caseNegExpr_N_gzUYn[];
extern Class xt_defaultCase_O_um7Fg[];

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
    -1316997612, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseCmplExpr_C_836rG,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1266794974, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseAddExpr_A_25uxA,
    0, 0,
    -461684700, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseNewInvokeExpr_N_yUgXI,
    1499589668, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseNewMultiArrayExpr_N_uOaHd,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -912465838, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseSpecialInvokeExpr_S_ubG7h,
    -534189998, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseNewArrayExpr_N_4iUYM,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43639680, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseInstanceOfExpr_I_0XrJ1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -429173614, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseDivExpr_D_YE3ev,
    -1333705582, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseInterfaceInvokeExpr_I_wK1or,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1395467930, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseShrExpr_S_e5P2O,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1927806304, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseRemExpr_R_YPWNR,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379914996, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseNegExpr_N_gzUYn,
    0, 0, 0, 0, 0, 0,
    1721791224, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseUshrExpr_U_eEiqj,
    0, 0, 0, 0, 0, 0,
    1534754556, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseGeExpr_G_ghRPF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.defaultCase_O_um7Fg,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    737875270, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseShlExpr_S_0cDx5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.equals_O_Ba6e0,
    -786814130, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseXorExpr_X_y1r17,
    -1470009522, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseVirtualInvokeExpr_V_qBhoF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.hashCode__8wJNW,
    725652322, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseGtExpr_G_ePW4N,
    0, 0,
    193601892, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseLengthExpr_L_mcHdk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236616554, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseLeExpr_L_yh0Zf,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1236620922, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseAndExpr_A_iJ5AC,
    0, 0,
    -1170252408, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseEqExpr_E_KAarp,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1141632106, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseNeExpr_N_w2gnr,
    0, 0, 0, 0, 0, 0,
    -623265894, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseCmpgExpr_C_kaGIK,
    0, 0, 0, 0, 0, 0,
    188167582, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseOrExpr_O_wuIHc,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2114928572, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseSubExpr_S_8FBJA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646875196, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseMulExpr_M_SQHOa,
    -624829500, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseStaticInvokeExpr_S_K6QiH,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -548116528, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseCmpExpr_C_SaZan,
    -572485680, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseLtExpr_L_A1lT3,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.clone__dslwm,
    0, 0,
    -729816108, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseNewExpr_N_uOASa,
    0, 0,
    380801494, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.M.caseCastExpr_C_CXDFQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','E','x','p','r',
'S','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
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
'c','a','s','e','C','m','p','E','x','p','r'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','E','x','p',
'r',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','C','m','p','g','E','x','p','r'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','g','E','x',
'p','r',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','C','m','p','l','E','x','p','r'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','m','p','l','E','x',
'p','r',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','D','i','v','E','x','p','r'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','D','i','v','E','x','p',
'r',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','E','q','E','x','p','r'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','q','E','x','p','r',
';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','N','e','E','x','p','r'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','E','x','p','r',
';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','G','e','E','x','p','r'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','e','E','x','p','r',
';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','G','t','E','x','p','r'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','t','E','x','p','r',
';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','L','e','E','x','p','r'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','e','E','x','p','r',
';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','L','t','E','x','p','r'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','t','E','x','p','r',
';',')','V'};
static const Char nmim_24[] = {
'c','a','s','e','M','u','l','E','x','p','r'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','M','u','l','E','x','p',
'r',';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','O','r','E','x','p','r'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','O','r','E','x','p','r',
';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','R','e','m','E','x','p','r'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','m','E','x','p',
'r',';',')','V'};
static const Char nmim_27[] = {
'c','a','s','e','S','h','l','E','x','p','r'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','h','l','E','x','p',
'r',';',')','V'};
static const Char nmim_28[] = {
'c','a','s','e','S','h','r','E','x','p','r'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','h','r','E','x','p',
'r',';',')','V'};
static const Char nmim_29[] = {
'c','a','s','e','U','s','h','r','E','x','p','r'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','s','h','r','E','x',
'p','r',';',')','V'};
static const Char nmim_30[] = {
'c','a','s','e','S','u','b','E','x','p','r'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','u','b','E','x','p',
'r',';',')','V'};
static const Char nmim_31[] = {
'c','a','s','e','X','o','r','E','x','p','r'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','X','o','r','E','x','p',
'r',';',')','V'};
static const Char nmim_32[] = {
'c','a','s','e','I','n','t','e','r','f','a','c','e','I','n','v','o','k',
'e','E','x','p','r'};
static const Char sgim_32[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','t','e','r','f',
'a','c','e','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_33[] = {
'c','a','s','e','S','p','e','c','i','a','l','I','n','v','o','k','e','E',
'x','p','r'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','p','e','c','i','a',
'l','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_34[] = {
'c','a','s','e','S','t','a','t','i','c','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','a','t','i','c',
'I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_35[] = {
'c','a','s','e','V','i','r','t','u','a','l','I','n','v','o','k','e','E',
'x','p','r'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','i','r','t','u','a',
'l','I','n','v','o','k','e','E','x','p','r',';',')','V'};
static const Char nmim_36[] = {
'c','a','s','e','N','e','w','I','n','v','o','k','e','E','x','p','r'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','I','n','v',
'o','k','e','E','x','p','r',';',')','V'};
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
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
} inr_ca_mcgill_sable_soot_grimp_GrimpExprSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch cl_ca_mcgill_sable_soot_grimp_GrimpExprSwitch = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GrimpExprSwitch),
    45,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GrimpExprSwitch,
    st_ca_mcgill_sable_soot_grimp_GrimpExprSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GrimpExprSwitch,
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,40,1,0x8401,0,xt_caseAddExpr_A_25uxA},
	{TMIT_abstract, 0,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,40,1,0x8401,1,xt_caseAndExpr_A_iJ5AC},
	{TMIT_abstract, 0,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,40,1,0x8401,2,xt_caseCmpExpr_C_SaZan},
	{TMIT_abstract, 0,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,41,1,0x8401,3,xt_caseCmpgExpr_C_kaGIK},
	{TMIT_abstract, 0,(const Char *)&nmim_16,12,
	(const Char *)&sgim_16,41,1,0x8401,4,xt_caseCmplExpr_C_836rG},
	{TMIT_abstract, 0,(const Char *)&nmim_17,11,
	(const Char *)&sgim_17,40,1,0x8401,5,xt_caseDivExpr_D_YE3ev},
	{TMIT_abstract, 0,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,39,1,0x8401,6,xt_caseEqExpr_E_KAarp},
	{TMIT_abstract, 0,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x8401,7,xt_caseNeExpr_N_w2gnr},
	{TMIT_abstract, 0,(const Char *)&nmim_20,10,
	(const Char *)&sgim_20,39,1,0x8401,8,xt_caseGeExpr_G_ghRPF},
	{TMIT_abstract, 0,(const Char *)&nmim_21,10,
	(const Char *)&sgim_21,39,1,0x8401,9,xt_caseGtExpr_G_ePW4N},
	{TMIT_abstract, 0,(const Char *)&nmim_22,10,
	(const Char *)&sgim_22,39,1,0x8401,10,xt_caseLeExpr_L_yh0Zf},
	{TMIT_abstract, 0,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,39,1,0x8401,11,xt_caseLtExpr_L_A1lT3},
	{TMIT_abstract, 0,(const Char *)&nmim_24,11,
	(const Char *)&sgim_24,40,1,0x8401,12,xt_caseMulExpr_M_SQHOa},
	{TMIT_abstract, 0,(const Char *)&nmim_25,10,
	(const Char *)&sgim_25,39,1,0x8401,13,xt_caseOrExpr_O_wuIHc},
	{TMIT_abstract, 0,(const Char *)&nmim_26,11,
	(const Char *)&sgim_26,40,1,0x8401,14,xt_caseRemExpr_R_YPWNR},
	{TMIT_abstract, 0,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,40,1,0x8401,15,xt_caseShlExpr_S_0cDx5},
	{TMIT_abstract, 0,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,40,1,0x8401,16,xt_caseShrExpr_S_e5P2O},
	{TMIT_abstract, 0,(const Char *)&nmim_29,12,
	(const Char *)&sgim_29,41,1,0x8401,17,xt_caseUshrExpr_U_eEiqj},
	{TMIT_abstract, 0,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,40,1,0x8401,18,xt_caseSubExpr_S_8FBJA},
	{TMIT_abstract, 0,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,40,1,0x8401,19,xt_caseXorExpr_X_y1r17},
	{TMIT_abstract, 0,(const Char *)&nmim_32,23,
	(const Char *)&sgim_32,52,1,0x8401,20,xt_caseInterfaceInvokeExpr_I_wK1or},
	{TMIT_abstract, 0,(const Char *)&nmim_33,21,
	(const Char *)&sgim_33,50,1,0x8401,21,xt_caseSpecialInvokeExpr_S_ubG7h},
	{TMIT_abstract, 0,(const Char *)&nmim_34,20,
	(const Char *)&sgim_34,49,1,0x8401,22,xt_caseStaticInvokeExpr_S_K6QiH},
	{TMIT_abstract, 0,(const Char *)&nmim_35,21,
	(const Char *)&sgim_35,50,1,0x8401,23,xt_caseVirtualInvokeExpr_V_qBhoF},
	{TMIT_abstract, 0,(const Char *)&nmim_36,17,
	(const Char *)&sgim_36,46,1,0x8401,24,xt_caseNewInvokeExpr_N_yUgXI},
	{TMIT_abstract, 0,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,41,1,0x8401,25,xt_caseCastExpr_C_CXDFQ},
	{TMIT_abstract, 0,(const Char *)&nmim_38,18,
	(const Char *)&sgim_38,47,1,0x8401,26,xt_caseInstanceOfExpr_I_0XrJ1},
	{TMIT_abstract, 0,(const Char *)&nmim_39,16,
	(const Char *)&sgim_39,45,1,0x8401,27,xt_caseNewArrayExpr_N_4iUYM},
	{TMIT_abstract, 0,(const Char *)&nmim_40,21,
	(const Char *)&sgim_40,50,1,0x8401,28,xt_caseNewMultiArrayExpr_N_uOaHd},
	{TMIT_abstract, 0,(const Char *)&nmim_41,11,
	(const Char *)&sgim_41,40,1,0x8401,29,xt_caseNewExpr_N_uOASa},
	{TMIT_abstract, 0,(const Char *)&nmim_42,14,
	(const Char *)&sgim_42,43,1,0x8401,30,xt_caseLengthExpr_L_mcHdk},
	{TMIT_abstract, 0,(const Char *)&nmim_43,11,
	(const Char *)&sgim_43,40,1,0x8401,31,xt_caseNegExpr_N_gzUYn},
	{TMIT_abstract, 0,(const Char *)&nmim_44,11,
	(const Char *)&sgim_44,21,1,0x8401,32,xt_defaultCase_O_um7Fg},
    } /* end of methodsigs */
};


/*M caseAddExpr_A_25uxA: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseAddExpr(Lca/mcgill/sable/soot/jimple/AddExpr;)V */

Class xt_caseAddExpr_A_25uxA[] = { 0 };

/*M caseAndExpr_A_iJ5AC: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseAndExpr(Lca/mcgill/sable/soot/jimple/AndExpr;)V */

Class xt_caseAndExpr_A_iJ5AC[] = { 0 };

/*M caseCmpExpr_C_SaZan: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseCmpExpr(Lca/mcgill/sable/soot/jimple/CmpExpr;)V */

Class xt_caseCmpExpr_C_SaZan[] = { 0 };

/*M caseCmpgExpr_C_kaGIK: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseCmpgExpr(Lca/mcgill/sable/soot/jimple/CmpgExpr;)V */

Class xt_caseCmpgExpr_C_kaGIK[] = { 0 };

/*M caseCmplExpr_C_836rG: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseCmplExpr(Lca/mcgill/sable/soot/jimple/CmplExpr;)V */

Class xt_caseCmplExpr_C_836rG[] = { 0 };

/*M caseDivExpr_D_YE3ev: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseDivExpr(Lca/mcgill/sable/soot/jimple/DivExpr;)V */

Class xt_caseDivExpr_D_YE3ev[] = { 0 };

/*M caseEqExpr_E_KAarp: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseEqExpr(Lca/mcgill/sable/soot/jimple/EqExpr;)V */

Class xt_caseEqExpr_E_KAarp[] = { 0 };

/*M caseNeExpr_N_w2gnr: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseNeExpr(Lca/mcgill/sable/soot/jimple/NeExpr;)V */

Class xt_caseNeExpr_N_w2gnr[] = { 0 };

/*M caseGeExpr_G_ghRPF: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseGeExpr(Lca/mcgill/sable/soot/jimple/GeExpr;)V */

Class xt_caseGeExpr_G_ghRPF[] = { 0 };

/*M caseGtExpr_G_ePW4N: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseGtExpr(Lca/mcgill/sable/soot/jimple/GtExpr;)V */

Class xt_caseGtExpr_G_ePW4N[] = { 0 };

/*M caseLeExpr_L_yh0Zf: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseLeExpr(Lca/mcgill/sable/soot/jimple/LeExpr;)V */

Class xt_caseLeExpr_L_yh0Zf[] = { 0 };

/*M caseLtExpr_L_A1lT3: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseLtExpr(Lca/mcgill/sable/soot/jimple/LtExpr;)V */

Class xt_caseLtExpr_L_A1lT3[] = { 0 };

/*M caseMulExpr_M_SQHOa: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseMulExpr(Lca/mcgill/sable/soot/jimple/MulExpr;)V */

Class xt_caseMulExpr_M_SQHOa[] = { 0 };

/*M caseOrExpr_O_wuIHc: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseOrExpr(Lca/mcgill/sable/soot/jimple/OrExpr;)V */

Class xt_caseOrExpr_O_wuIHc[] = { 0 };

/*M caseRemExpr_R_YPWNR: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseRemExpr(Lca/mcgill/sable/soot/jimple/RemExpr;)V */

Class xt_caseRemExpr_R_YPWNR[] = { 0 };

/*M caseShlExpr_S_0cDx5: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseShlExpr(Lca/mcgill/sable/soot/jimple/ShlExpr;)V */

Class xt_caseShlExpr_S_0cDx5[] = { 0 };

/*M caseShrExpr_S_e5P2O: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseShrExpr(Lca/mcgill/sable/soot/jimple/ShrExpr;)V */

Class xt_caseShrExpr_S_e5P2O[] = { 0 };

/*M caseUshrExpr_U_eEiqj: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseUshrExpr(Lca/mcgill/sable/soot/jimple/UshrExpr;)V */

Class xt_caseUshrExpr_U_eEiqj[] = { 0 };

/*M caseSubExpr_S_8FBJA: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseSubExpr(Lca/mcgill/sable/soot/jimple/SubExpr;)V */

Class xt_caseSubExpr_S_8FBJA[] = { 0 };

/*M caseXorExpr_X_y1r17: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseXorExpr(Lca/mcgill/sable/soot/jimple/XorExpr;)V */

Class xt_caseXorExpr_X_y1r17[] = { 0 };

/*M caseInterfaceInvokeExpr_I_wK1or: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr;)V */

Class xt_caseInterfaceInvokeExpr_I_wK1or[] = { 0 };

/*M caseSpecialInvokeExpr_S_ubG7h: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr;)V */

Class xt_caseSpecialInvokeExpr_S_ubG7h[] = { 0 };

/*M caseStaticInvokeExpr_S_K6QiH: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseStaticInvokeExpr(Lca/mcgill/sable/soot/jimple/StaticInvokeExpr;)V */

Class xt_caseStaticInvokeExpr_S_K6QiH[] = { 0 };

/*M caseVirtualInvokeExpr_V_qBhoF: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr;)V */

Class xt_caseVirtualInvokeExpr_V_qBhoF[] = { 0 };

/*M caseNewInvokeExpr_N_yUgXI: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseNewInvokeExpr(Lca/mcgill/sable/soot/jimple/NewInvokeExpr;)V */

Class xt_caseNewInvokeExpr_N_yUgXI[] = { 0 };

/*M caseCastExpr_C_CXDFQ: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseCastExpr(Lca/mcgill/sable/soot/jimple/CastExpr;)V */

Class xt_caseCastExpr_C_CXDFQ[] = { 0 };

/*M caseInstanceOfExpr_I_0XrJ1: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseInstanceOfExpr(Lca/mcgill/sable/soot/jimple/InstanceOfExpr;)V */

Class xt_caseInstanceOfExpr_I_0XrJ1[] = { 0 };

/*M caseNewArrayExpr_N_4iUYM: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseNewArrayExpr(Lca/mcgill/sable/soot/jimple/NewArrayExpr;)V */

Class xt_caseNewArrayExpr_N_4iUYM[] = { 0 };

/*M caseNewMultiArrayExpr_N_uOaHd: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseNewMultiArrayExpr(Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr;)V */

Class xt_caseNewMultiArrayExpr_N_uOaHd[] = { 0 };

/*M caseNewExpr_N_uOASa: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseNewExpr(Lca/mcgill/sable/soot/jimple/NewExpr;)V */

Class xt_caseNewExpr_N_uOASa[] = { 0 };

/*M caseLengthExpr_L_mcHdk: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseLengthExpr(Lca/mcgill/sable/soot/jimple/LengthExpr;)V */

Class xt_caseLengthExpr_L_mcHdk[] = { 0 };

/*M caseNegExpr_N_gzUYn: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.caseNegExpr(Lca/mcgill/sable/soot/jimple/NegExpr;)V */

Class xt_caseNegExpr_N_gzUYn[] = { 0 };

/*M defaultCase_O_um7Fg: ca.mcgill.sable.soot.grimp.GrimpExprSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_um7Fg[] = { 0 };



const Char ch_ca_mcgill_sable_soot_grimp_GrimpExprSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','E','x','p','r',
'S','w','i','t','c','h'};

const void *st_ca_mcgill_sable_soot_grimp_GrimpExprSwitch[] = {
    ch_ca_mcgill_sable_soot_grimp_GrimpExprSwitch+42,	/* 0. ca.mcgill.sable.soot.grimp.GrimpExprSwit */
    0};
