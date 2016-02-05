/*  ca_mcgill_sable_soot_jimple_AbstractExprSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractExprSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractExprSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractExprSwitch[];
extern Class xt_caseAddExpr_A_j48In[];
extern Class xt_caseAndExpr_A_zIJKp[];
extern Class xt_caseNewInvokeExpr_N_NWsn8[];
extern Class xt_caseCmpExpr_C_9aDla[];
extern Class xt_caseCmpgExpr_C_ll5ad[];
extern Class xt_caseCmplExpr_C_9evS8[];
extern Class xt_caseDivExpr_D_fEHoi[];
extern Class xt_caseEqExpr_E_ls2Sj[];
extern Class xt_caseNeExpr_N_7U7Ol[];
extern Class xt_caseGeExpr_G_R8JgA[];
extern Class xt_caseGtExpr_G_PGOvH[];
extern Class xt_caseLeExpr_L_99Spa[];
extern Class xt_caseLtExpr_L_7HXEh[];
extern Class xt_caseMulExpr_M_d2BEE[];
extern Class xt_caseOrExpr_O_7mA87[];
extern Class xt_caseRemExpr_R_j1QDl[];
extern Class xt_caseShlExpr_S_lnwnz[];
extern Class xt_caseShrExpr_S_zgISh[];
extern Class xt_caseUshrExpr_U_fPHRL[];
extern Class xt_caseSubExpr_S_tQuz4[];
extern Class xt_caseXorExpr_X_P05cU[];
extern Class xt_caseInterfaceInvokeExpr_I_nEf3F[];
extern Class xt_caseSpecialInvokeExpr_S_95r11[];
extern Class xt_caseStaticInvokeExpr_S_hEw5p[];
extern Class xt_caseVirtualInvokeExpr_V_9HhX5[];
extern Class xt_caseCastExpr_C_D837j[];
extern Class xt_caseInstanceOfExpr_I_ZUIEG[];
extern Class xt_caseNewArrayExpr_N_dTcTx[];
extern Class xt_caseNewMultiArrayExpr_N_dUagE[];
extern Class xt_caseNewExpr_N_LNe3Y[];
extern Class xt_caseLengthExpr_L_9ejnZ[];
extern Class xt_caseNegExpr_N_xyy9b[];
extern Class xt_defaultCase_O_PXOCK[];
extern Class xt_setResult_O_HchsU[];
extern Class xt_getResult__NMUvI[];
extern Class xt_init__8JSJz[];

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
    -1316997612, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseCmplExpr_C_9evS8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1266794974, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseAddExpr_A_j48In,
    0, 0,
    -461684700, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseNewInvokeExpr_N_NWsn8,
    1499589668, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseNewMultiArrayExpr_N_dUagE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -912465838, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseSpecialInvokeExpr_S_95r11,
    -534189998, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseNewArrayExpr_N_dTcTx,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -43639680, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseInstanceOfExpr_I_ZUIEG,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -429173614, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseDivExpr_D_fEHoi,
    -1333705582, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseInterfaceInvokeExpr_I_nEf3F,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1395467930, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseShrExpr_S_zgISh,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1927806304, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseRemExpr_R_j1QDl,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379914996, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseNegExpr_N_xyy9b,
    0, 0, 0, 0, 0, 0,
    1721791224, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseUshrExpr_U_fPHRL,
    0, 0, 0, 0, 0, 0,
    1534754556, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseGeExpr_G_R8JgA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.defaultCase_O_PXOCK,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    737875270, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseShlExpr_S_lnwnz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.equals_O_Ba6e0,
    -786814130, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseXorExpr_X_P05cU,
    -1470009522, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseVirtualInvokeExpr_V_9HhX5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.hashCode__8wJNW,
    725652322, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseGtExpr_G_PGOvH,
    0, 0,
    193601892, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseLengthExpr_L_9ejnZ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236616554, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseLeExpr_L_99Spa,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1236620922, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseAndExpr_A_zIJKp,
    0, 0,
    -1170252408, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseEqExpr_E_ls2Sj,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1141632106, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseNeExpr_N_7U7Ol,
    0, 0, 0, 0, 0, 0,
    -623265894, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseCmpgExpr_C_ll5ad,
    0, 0, 0, 0, 0, 0,
    188167582, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseOrExpr_O_7mA87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2114928572, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseSubExpr_S_tQuz4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646875196, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseMulExpr_M_d2BEE,
    -624829500, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseStaticInvokeExpr_S_hEw5p,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -548116528, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseCmpExpr_C_9aDla,
    -572485680, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseLtExpr_L_7HXEh,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.clone__dslwm,
    0, 0,
    -729816108, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseNewExpr_N_LNe3Y,
    0, 0,
    380801494, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.M.caseCastExpr_C_D837j,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(46) nmchars = {&acl_char, 0, 46, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'E','x','p','r','S','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 46 };
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractExprSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch cl_ca_mcgill_sable_soot_jimple_AbstractExprSwitch = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch),
    47,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractExprSwitch,
    st_ca_mcgill_sable_soot_jimple_AbstractExprSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractExprSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__8JSJz,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,35,xt_init__8JSJz},
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
	{TMIT_native_code, caseAddExpr_A_j48In,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,40,1,0x8001,0,xt_caseAddExpr_A_j48In},
	{TMIT_native_code, caseAndExpr_A_zIJKp,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,40,1,0x8001,1,xt_caseAndExpr_A_zIJKp},
	{TMIT_native_code, caseNewInvokeExpr_N_NWsn8,(const Char *)&nmim_14,17,
	(const Char *)&sgim_14,46,1,0x8001,2,xt_caseNewInvokeExpr_N_NWsn8},
	{TMIT_native_code, caseCmpExpr_C_9aDla,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,40,1,0x8001,3,xt_caseCmpExpr_C_9aDla},
	{TMIT_native_code, caseCmpgExpr_C_ll5ad,(const Char *)&nmim_16,12,
	(const Char *)&sgim_16,41,1,0x8001,4,xt_caseCmpgExpr_C_ll5ad},
	{TMIT_native_code, caseCmplExpr_C_9evS8,(const Char *)&nmim_17,12,
	(const Char *)&sgim_17,41,1,0x8001,5,xt_caseCmplExpr_C_9evS8},
	{TMIT_native_code, caseDivExpr_D_fEHoi,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,40,1,0x8001,6,xt_caseDivExpr_D_fEHoi},
	{TMIT_native_code, caseEqExpr_E_ls2Sj,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x8001,7,xt_caseEqExpr_E_ls2Sj},
	{TMIT_native_code, caseNeExpr_N_7U7Ol,(const Char *)&nmim_20,10,
	(const Char *)&sgim_20,39,1,0x8001,8,xt_caseNeExpr_N_7U7Ol},
	{TMIT_native_code, caseGeExpr_G_R8JgA,(const Char *)&nmim_21,10,
	(const Char *)&sgim_21,39,1,0x8001,9,xt_caseGeExpr_G_R8JgA},
	{TMIT_native_code, caseGtExpr_G_PGOvH,(const Char *)&nmim_22,10,
	(const Char *)&sgim_22,39,1,0x8001,10,xt_caseGtExpr_G_PGOvH},
	{TMIT_native_code, caseLeExpr_L_99Spa,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,39,1,0x8001,11,xt_caseLeExpr_L_99Spa},
	{TMIT_native_code, caseLtExpr_L_7HXEh,(const Char *)&nmim_24,10,
	(const Char *)&sgim_24,39,1,0x8001,12,xt_caseLtExpr_L_7HXEh},
	{TMIT_native_code, caseMulExpr_M_d2BEE,(const Char *)&nmim_25,11,
	(const Char *)&sgim_25,40,1,0x8001,13,xt_caseMulExpr_M_d2BEE},
	{TMIT_native_code, caseOrExpr_O_7mA87,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,39,1,0x8001,14,xt_caseOrExpr_O_7mA87},
	{TMIT_native_code, caseRemExpr_R_j1QDl,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,40,1,0x8001,15,xt_caseRemExpr_R_j1QDl},
	{TMIT_native_code, caseShlExpr_S_lnwnz,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,40,1,0x8001,16,xt_caseShlExpr_S_lnwnz},
	{TMIT_native_code, caseShrExpr_S_zgISh,(const Char *)&nmim_29,11,
	(const Char *)&sgim_29,40,1,0x8001,17,xt_caseShrExpr_S_zgISh},
	{TMIT_native_code, caseUshrExpr_U_fPHRL,(const Char *)&nmim_30,12,
	(const Char *)&sgim_30,41,1,0x8001,18,xt_caseUshrExpr_U_fPHRL},
	{TMIT_native_code, caseSubExpr_S_tQuz4,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,40,1,0x8001,19,xt_caseSubExpr_S_tQuz4},
	{TMIT_native_code, caseXorExpr_X_P05cU,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,40,1,0x8001,20,xt_caseXorExpr_X_P05cU},
	{TMIT_native_code, caseInterfaceInvokeExpr_I_nEf3F,(const Char *)&nmim_33,23,
	(const Char *)&sgim_33,52,1,0x8001,21,xt_caseInterfaceInvokeExpr_I_nEf3F},
	{TMIT_native_code, caseSpecialInvokeExpr_S_95r11,(const Char *)&nmim_34,21,
	(const Char *)&sgim_34,50,1,0x8001,22,xt_caseSpecialInvokeExpr_S_95r11},
	{TMIT_native_code, caseStaticInvokeExpr_S_hEw5p,(const Char *)&nmim_35,20,
	(const Char *)&sgim_35,49,1,0x8001,23,xt_caseStaticInvokeExpr_S_hEw5p},
	{TMIT_native_code, caseVirtualInvokeExpr_V_9HhX5,(const Char *)&nmim_36,21,
	(const Char *)&sgim_36,50,1,0x8001,24,xt_caseVirtualInvokeExpr_V_9HhX5},
	{TMIT_native_code, caseCastExpr_C_D837j,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,41,1,0x8001,25,xt_caseCastExpr_C_D837j},
	{TMIT_native_code, caseInstanceOfExpr_I_ZUIEG,(const Char *)&nmim_38,18,
	(const Char *)&sgim_38,47,1,0x8001,26,xt_caseInstanceOfExpr_I_ZUIEG},
	{TMIT_native_code, caseNewArrayExpr_N_dTcTx,(const Char *)&nmim_39,16,
	(const Char *)&sgim_39,45,1,0x8001,27,xt_caseNewArrayExpr_N_dTcTx},
	{TMIT_native_code, caseNewMultiArrayExpr_N_dUagE,(const Char *)&nmim_40,21,
	(const Char *)&sgim_40,50,1,0x8001,28,xt_caseNewMultiArrayExpr_N_dUagE},
	{TMIT_native_code, caseNewExpr_N_LNe3Y,(const Char *)&nmim_41,11,
	(const Char *)&sgim_41,40,1,0x8001,29,xt_caseNewExpr_N_LNe3Y},
	{TMIT_native_code, caseLengthExpr_L_9ejnZ,(const Char *)&nmim_42,14,
	(const Char *)&sgim_42,43,1,0x8001,30,xt_caseLengthExpr_L_9ejnZ},
	{TMIT_native_code, caseNegExpr_N_xyy9b,(const Char *)&nmim_43,11,
	(const Char *)&sgim_43,40,1,0x8001,31,xt_caseNegExpr_N_xyy9b},
	{TMIT_native_code, defaultCase_O_PXOCK,(const Char *)&nmim_44,11,
	(const Char *)&sgim_44,21,1,0x8001,32,xt_defaultCase_O_PXOCK},
	{TMIT_native_code, setResult_O_HchsU,(const Char *)&nmim_45,9,
	(const Char *)&sgim_45,21,1,0x1,33,xt_setResult_O_HchsU},
	{TMIT_native_code, getResult__NMUvI,(const Char *)&nmim_46,9,
	(const Char *)&sgim_46,20,1,0x1,34,xt_getResult__NMUvI},
    } /* end of methodsigs */
};


/*M caseAddExpr_A_j48In: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseAddExpr(Lca/mcgill/sable/soot/jimple/AddExpr;)V */

Class xt_caseAddExpr_A_j48In[] = { 0 };

Void caseAddExpr_A_j48In(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseAndExpr_A_zIJKp: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseAndExpr(Lca/mcgill/sable/soot/jimple/AndExpr;)V */

Class xt_caseAndExpr_A_zIJKp[] = { 0 };

Void caseAndExpr_A_zIJKp(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewInvokeExpr_N_NWsn8: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseNewInvokeExpr(Lca/mcgill/sable/soot/jimple/NewInvokeExpr;)V */

Class xt_caseNewInvokeExpr_N_NWsn8[] = { 0 };

Void caseNewInvokeExpr_N_NWsn8(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpExpr_C_9aDla: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseCmpExpr(Lca/mcgill/sable/soot/jimple/CmpExpr;)V */

Class xt_caseCmpExpr_C_9aDla[] = { 0 };

Void caseCmpExpr_C_9aDla(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmpgExpr_C_ll5ad: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseCmpgExpr(Lca/mcgill/sable/soot/jimple/CmpgExpr;)V */

Class xt_caseCmpgExpr_C_ll5ad[] = { 0 };

Void caseCmpgExpr_C_ll5ad(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCmplExpr_C_9evS8: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseCmplExpr(Lca/mcgill/sable/soot/jimple/CmplExpr;)V */

Class xt_caseCmplExpr_C_9evS8[] = { 0 };

Void caseCmplExpr_C_9evS8(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseDivExpr_D_fEHoi: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseDivExpr(Lca/mcgill/sable/soot/jimple/DivExpr;)V */

Class xt_caseDivExpr_D_fEHoi[] = { 0 };

Void caseDivExpr_D_fEHoi(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseEqExpr_E_ls2Sj: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseEqExpr(Lca/mcgill/sable/soot/jimple/EqExpr;)V */

Class xt_caseEqExpr_E_ls2Sj[] = { 0 };

Void caseEqExpr_E_ls2Sj(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNeExpr_N_7U7Ol: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseNeExpr(Lca/mcgill/sable/soot/jimple/NeExpr;)V */

Class xt_caseNeExpr_N_7U7Ol[] = { 0 };

Void caseNeExpr_N_7U7Ol(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGeExpr_G_R8JgA: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseGeExpr(Lca/mcgill/sable/soot/jimple/GeExpr;)V */

Class xt_caseGeExpr_G_R8JgA[] = { 0 };

Void caseGeExpr_G_R8JgA(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGtExpr_G_PGOvH: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseGtExpr(Lca/mcgill/sable/soot/jimple/GtExpr;)V */

Class xt_caseGtExpr_G_PGOvH[] = { 0 };

Void caseGtExpr_G_PGOvH(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLeExpr_L_99Spa: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseLeExpr(Lca/mcgill/sable/soot/jimple/LeExpr;)V */

Class xt_caseLeExpr_L_99Spa[] = { 0 };

Void caseLeExpr_L_99Spa(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLtExpr_L_7HXEh: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseLtExpr(Lca/mcgill/sable/soot/jimple/LtExpr;)V */

Class xt_caseLtExpr_L_7HXEh[] = { 0 };

Void caseLtExpr_L_7HXEh(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseMulExpr_M_d2BEE: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseMulExpr(Lca/mcgill/sable/soot/jimple/MulExpr;)V */

Class xt_caseMulExpr_M_d2BEE[] = { 0 };

Void caseMulExpr_M_d2BEE(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseOrExpr_O_7mA87: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseOrExpr(Lca/mcgill/sable/soot/jimple/OrExpr;)V */

Class xt_caseOrExpr_O_7mA87[] = { 0 };

Void caseOrExpr_O_7mA87(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRemExpr_R_j1QDl: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseRemExpr(Lca/mcgill/sable/soot/jimple/RemExpr;)V */

Class xt_caseRemExpr_R_j1QDl[] = { 0 };

Void caseRemExpr_R_j1QDl(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShlExpr_S_lnwnz: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseShlExpr(Lca/mcgill/sable/soot/jimple/ShlExpr;)V */

Class xt_caseShlExpr_S_lnwnz[] = { 0 };

Void caseShlExpr_S_lnwnz(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShrExpr_S_zgISh: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseShrExpr(Lca/mcgill/sable/soot/jimple/ShrExpr;)V */

Class xt_caseShrExpr_S_zgISh[] = { 0 };

Void caseShrExpr_S_zgISh(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseUshrExpr_U_fPHRL: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseUshrExpr(Lca/mcgill/sable/soot/jimple/UshrExpr;)V */

Class xt_caseUshrExpr_U_fPHRL[] = { 0 };

Void caseUshrExpr_U_fPHRL(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSubExpr_S_tQuz4: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseSubExpr(Lca/mcgill/sable/soot/jimple/SubExpr;)V */

Class xt_caseSubExpr_S_tQuz4[] = { 0 };

Void caseSubExpr_S_tQuz4(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseXorExpr_X_P05cU: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseXorExpr(Lca/mcgill/sable/soot/jimple/XorExpr;)V */

Class xt_caseXorExpr_X_P05cU[] = { 0 };

Void caseXorExpr_X_P05cU(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInterfaceInvokeExpr_I_nEf3F: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr;)V */

Class xt_caseInterfaceInvokeExpr_I_nEf3F[] = { 0 };

Void caseInterfaceInvokeExpr_I_nEf3F(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseSpecialInvokeExpr_S_95r11: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr;)V */

Class xt_caseSpecialInvokeExpr_S_95r11[] = { 0 };

Void caseSpecialInvokeExpr_S_95r11(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStaticInvokeExpr_S_hEw5p: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseStaticInvokeExpr(Lca/mcgill/sable/soot/jimple/StaticInvokeExpr;)V */

Class xt_caseStaticInvokeExpr_S_hEw5p[] = { 0 };

Void caseStaticInvokeExpr_S_hEw5p(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseVirtualInvokeExpr_V_9HhX5: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr;)V */

Class xt_caseVirtualInvokeExpr_V_9HhX5[] = { 0 };

Void caseVirtualInvokeExpr_V_9HhX5(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCastExpr_C_D837j: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseCastExpr(Lca/mcgill/sable/soot/jimple/CastExpr;)V */

Class xt_caseCastExpr_C_D837j[] = { 0 };

Void caseCastExpr_C_D837j(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInstanceOfExpr_I_ZUIEG: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseInstanceOfExpr(Lca/mcgill/sable/soot/jimple/InstanceOfExpr;)V */

Class xt_caseInstanceOfExpr_I_ZUIEG[] = { 0 };

Void caseInstanceOfExpr_I_ZUIEG(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewArrayExpr_N_dTcTx: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseNewArrayExpr(Lca/mcgill/sable/soot/jimple/NewArrayExpr;)V */

Class xt_caseNewArrayExpr_N_dTcTx[] = { 0 };

Void caseNewArrayExpr_N_dTcTx(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewMultiArrayExpr_N_dUagE: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseNewMultiArrayExpr(Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr;)V */

Class xt_caseNewMultiArrayExpr_N_dUagE[] = { 0 };

Void caseNewMultiArrayExpr_N_dUagE(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNewExpr_N_LNe3Y: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseNewExpr(Lca/mcgill/sable/soot/jimple/NewExpr;)V */

Class xt_caseNewExpr_N_LNe3Y[] = { 0 };

Void caseNewExpr_N_LNe3Y(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLengthExpr_L_9ejnZ: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseLengthExpr(Lca/mcgill/sable/soot/jimple/LengthExpr;)V */

Class xt_caseLengthExpr_L_9ejnZ[] = { 0 };

Void caseLengthExpr_L_9ejnZ(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNegExpr_N_xyy9b: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.caseNegExpr(Lca/mcgill/sable/soot/jimple/NegExpr;)V */

Class xt_caseNegExpr_N_xyy9b[] = { 0 };

Void caseNegExpr_N_xyy9b(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->class->M.
		defaultCase_O_PXOCK.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_O_PXOCK: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_PXOCK[] = { 0 };

Void defaultCase_O_PXOCK(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M setResult_O_HchsU: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.setResult(Ljava/lang/Object;)V */

Class xt_setResult_O_HchsU[] = { 0 };

Void setResult_O_HchsU(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->result = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getResult__NMUvI: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.getResult()Ljava/lang/Object; */

Class xt_getResult__NMUvI[] = { 0 };

Object getResult__NMUvI(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractExprSwitch*)a1)->result;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__8JSJz: ca.mcgill.sable.soot.jimple.AbstractExprSwitch.<init>()V */

Class xt_init__8JSJz[] = { 0 };

Void init__8JSJz(Object p0)
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



const Char ch_ca_mcgill_sable_soot_jimple_AbstractExprSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'E','x','p','r','S','w','i','t','c','h'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractExprSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractExprSwitch+46,	/* 0. ca.mcgill.sable.soot.jimple.AbstractExpr */
    0};
