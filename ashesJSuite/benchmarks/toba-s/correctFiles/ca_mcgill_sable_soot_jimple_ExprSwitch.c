/*  ca_mcgill_sable_soot_jimple_ExprSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.ExprSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "ca_mcgill_sable_util_Switch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Switch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_ExprSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_ExprSwitch[];
extern Class xt_caseAddExpr_A_737Ou[];
extern Class xt_caseAndExpr_A_nHIQw[];
extern Class xt_caseCmpExpr_C_X8Crh[];
extern Class xt_caseCmpgExpr_C_B2wx9[];
extern Class xt_caseCmplExpr_C_lJGAo[];
extern Class xt_caseNewInvokeExpr_N_T0I0v[];
extern Class xt_caseDivExpr_D_3DGup[];
extern Class xt_caseEqExpr_E_Zl70N[];
extern Class xt_caseNeExpr_N_LNcWO[];
extern Class xt_caseGeExpr_G_v2Oo3[];
extern Class xt_caseGtExpr_G_tATDa[];
extern Class xt_caseLeExpr_L_N2XxD[];
extern Class xt_caseLtExpr_L_PMhsr[];
extern Class xt_caseMulExpr_M_XOk55[];
extern Class xt_caseOrExpr_O_LfFgA[];
extern Class xt_caseRemExpr_R_3Oz4M[];
extern Class xt_caseShlExpr_S_9mvtG[];
extern Class xt_caseShrExpr_S_j3sjI[];
extern Class xt_caseUshrExpr_U_vw8fI[];
extern Class xt_caseSubExpr_S_dDe0v[];
extern Class xt_caseXorExpr_X_DZ3i1[];
extern Class xt_caseInterfaceInvokeExpr_I_l8oVP[];
extern Class xt_caseSpecialInvokeExpr_S_14F1m[];
extern Class xt_caseStaticInvokeExpr_S_RDtpW[];
extern Class xt_caseVirtualInvokeExpr_V_1GvXq[];
extern Class xt_caseCastExpr_C_TPtuf[];
extern Class xt_caseInstanceOfExpr_I_n6Dgl[];
extern Class xt_caseNewArrayExpr_N_PBM7Y[];
extern Class xt_caseNewMultiArrayExpr_N_5TogZ[];
extern Class xt_caseNewExpr_N_zMd95[];
extern Class xt_caseLengthExpr_L_1NP6v[];
extern Class xt_caseNegExpr_N_lxxfi[];
extern Class xt_defaultCase_O_HiqEi[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','E','x','p','r','S','w','i','t',
'c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
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
'c','a','s','e','N','e','w','I','n','v','o','k','e','E','x','p','r'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','w','I','n','v',
'o','k','e','E','x','p','r',';',')','V'};
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
} inr_ca_mcgill_sable_soot_jimple_ExprSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_ExprSwitch cl_ca_mcgill_sable_soot_jimple_ExprSwitch = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_ExprSwitch),
    45,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_ExprSwitch,
    st_ca_mcgill_sable_soot_jimple_ExprSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_ExprSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,40,1,0x401,0,xt_caseAddExpr_A_737Ou},
	{TMIT_abstract, 0,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,40,1,0x401,1,xt_caseAndExpr_A_nHIQw},
	{TMIT_abstract, 0,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,40,1,0x401,2,xt_caseCmpExpr_C_X8Crh},
	{TMIT_abstract, 0,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,41,1,0x401,3,xt_caseCmpgExpr_C_B2wx9},
	{TMIT_abstract, 0,(const Char *)&nmim_16,12,
	(const Char *)&sgim_16,41,1,0x401,4,xt_caseCmplExpr_C_lJGAo},
	{TMIT_abstract, 0,(const Char *)&nmim_17,17,
	(const Char *)&sgim_17,46,1,0x401,5,xt_caseNewInvokeExpr_N_T0I0v},
	{TMIT_abstract, 0,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,40,1,0x401,6,xt_caseDivExpr_D_3DGup},
	{TMIT_abstract, 0,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x401,7,xt_caseEqExpr_E_Zl70N},
	{TMIT_abstract, 0,(const Char *)&nmim_20,10,
	(const Char *)&sgim_20,39,1,0x401,8,xt_caseNeExpr_N_LNcWO},
	{TMIT_abstract, 0,(const Char *)&nmim_21,10,
	(const Char *)&sgim_21,39,1,0x401,9,xt_caseGeExpr_G_v2Oo3},
	{TMIT_abstract, 0,(const Char *)&nmim_22,10,
	(const Char *)&sgim_22,39,1,0x401,10,xt_caseGtExpr_G_tATDa},
	{TMIT_abstract, 0,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,39,1,0x401,11,xt_caseLeExpr_L_N2XxD},
	{TMIT_abstract, 0,(const Char *)&nmim_24,10,
	(const Char *)&sgim_24,39,1,0x401,12,xt_caseLtExpr_L_PMhsr},
	{TMIT_abstract, 0,(const Char *)&nmim_25,11,
	(const Char *)&sgim_25,40,1,0x401,13,xt_caseMulExpr_M_XOk55},
	{TMIT_abstract, 0,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,39,1,0x401,14,xt_caseOrExpr_O_LfFgA},
	{TMIT_abstract, 0,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,40,1,0x401,15,xt_caseRemExpr_R_3Oz4M},
	{TMIT_abstract, 0,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,40,1,0x401,16,xt_caseShlExpr_S_9mvtG},
	{TMIT_abstract, 0,(const Char *)&nmim_29,11,
	(const Char *)&sgim_29,40,1,0x401,17,xt_caseShrExpr_S_j3sjI},
	{TMIT_abstract, 0,(const Char *)&nmim_30,12,
	(const Char *)&sgim_30,41,1,0x401,18,xt_caseUshrExpr_U_vw8fI},
	{TMIT_abstract, 0,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,40,1,0x401,19,xt_caseSubExpr_S_dDe0v},
	{TMIT_abstract, 0,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,40,1,0x401,20,xt_caseXorExpr_X_DZ3i1},
	{TMIT_abstract, 0,(const Char *)&nmim_33,23,
	(const Char *)&sgim_33,52,1,0x401,21,xt_caseInterfaceInvokeExpr_I_l8oVP},
	{TMIT_abstract, 0,(const Char *)&nmim_34,21,
	(const Char *)&sgim_34,50,1,0x401,22,xt_caseSpecialInvokeExpr_S_14F1m},
	{TMIT_abstract, 0,(const Char *)&nmim_35,20,
	(const Char *)&sgim_35,49,1,0x401,23,xt_caseStaticInvokeExpr_S_RDtpW},
	{TMIT_abstract, 0,(const Char *)&nmim_36,21,
	(const Char *)&sgim_36,50,1,0x401,24,xt_caseVirtualInvokeExpr_V_1GvXq},
	{TMIT_abstract, 0,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,41,1,0x401,25,xt_caseCastExpr_C_TPtuf},
	{TMIT_abstract, 0,(const Char *)&nmim_38,18,
	(const Char *)&sgim_38,47,1,0x401,26,xt_caseInstanceOfExpr_I_n6Dgl},
	{TMIT_abstract, 0,(const Char *)&nmim_39,16,
	(const Char *)&sgim_39,45,1,0x401,27,xt_caseNewArrayExpr_N_PBM7Y},
	{TMIT_abstract, 0,(const Char *)&nmim_40,21,
	(const Char *)&sgim_40,50,1,0x401,28,xt_caseNewMultiArrayExpr_N_5TogZ},
	{TMIT_abstract, 0,(const Char *)&nmim_41,11,
	(const Char *)&sgim_41,40,1,0x401,29,xt_caseNewExpr_N_zMd95},
	{TMIT_abstract, 0,(const Char *)&nmim_42,14,
	(const Char *)&sgim_42,43,1,0x401,30,xt_caseLengthExpr_L_1NP6v},
	{TMIT_abstract, 0,(const Char *)&nmim_43,11,
	(const Char *)&sgim_43,40,1,0x401,31,xt_caseNegExpr_N_lxxfi},
	{TMIT_abstract, 0,(const Char *)&nmim_44,11,
	(const Char *)&sgim_44,21,1,0x401,32,xt_defaultCase_O_HiqEi},
    } /* end of methodsigs */
};


/*M caseAddExpr_A_737Ou: ca.mcgill.sable.soot.jimple.ExprSwitch.caseAddExpr(Lca/mcgill/sable/soot/jimple/AddExpr;)V */

Class xt_caseAddExpr_A_737Ou[] = { 0 };

/*M caseAndExpr_A_nHIQw: ca.mcgill.sable.soot.jimple.ExprSwitch.caseAndExpr(Lca/mcgill/sable/soot/jimple/AndExpr;)V */

Class xt_caseAndExpr_A_nHIQw[] = { 0 };

/*M caseCmpExpr_C_X8Crh: ca.mcgill.sable.soot.jimple.ExprSwitch.caseCmpExpr(Lca/mcgill/sable/soot/jimple/CmpExpr;)V */

Class xt_caseCmpExpr_C_X8Crh[] = { 0 };

/*M caseCmpgExpr_C_B2wx9: ca.mcgill.sable.soot.jimple.ExprSwitch.caseCmpgExpr(Lca/mcgill/sable/soot/jimple/CmpgExpr;)V */

Class xt_caseCmpgExpr_C_B2wx9[] = { 0 };

/*M caseCmplExpr_C_lJGAo: ca.mcgill.sable.soot.jimple.ExprSwitch.caseCmplExpr(Lca/mcgill/sable/soot/jimple/CmplExpr;)V */

Class xt_caseCmplExpr_C_lJGAo[] = { 0 };

/*M caseNewInvokeExpr_N_T0I0v: ca.mcgill.sable.soot.jimple.ExprSwitch.caseNewInvokeExpr(Lca/mcgill/sable/soot/jimple/NewInvokeExpr;)V */

Class xt_caseNewInvokeExpr_N_T0I0v[] = { 0 };

/*M caseDivExpr_D_3DGup: ca.mcgill.sable.soot.jimple.ExprSwitch.caseDivExpr(Lca/mcgill/sable/soot/jimple/DivExpr;)V */

Class xt_caseDivExpr_D_3DGup[] = { 0 };

/*M caseEqExpr_E_Zl70N: ca.mcgill.sable.soot.jimple.ExprSwitch.caseEqExpr(Lca/mcgill/sable/soot/jimple/EqExpr;)V */

Class xt_caseEqExpr_E_Zl70N[] = { 0 };

/*M caseNeExpr_N_LNcWO: ca.mcgill.sable.soot.jimple.ExprSwitch.caseNeExpr(Lca/mcgill/sable/soot/jimple/NeExpr;)V */

Class xt_caseNeExpr_N_LNcWO[] = { 0 };

/*M caseGeExpr_G_v2Oo3: ca.mcgill.sable.soot.jimple.ExprSwitch.caseGeExpr(Lca/mcgill/sable/soot/jimple/GeExpr;)V */

Class xt_caseGeExpr_G_v2Oo3[] = { 0 };

/*M caseGtExpr_G_tATDa: ca.mcgill.sable.soot.jimple.ExprSwitch.caseGtExpr(Lca/mcgill/sable/soot/jimple/GtExpr;)V */

Class xt_caseGtExpr_G_tATDa[] = { 0 };

/*M caseLeExpr_L_N2XxD: ca.mcgill.sable.soot.jimple.ExprSwitch.caseLeExpr(Lca/mcgill/sable/soot/jimple/LeExpr;)V */

Class xt_caseLeExpr_L_N2XxD[] = { 0 };

/*M caseLtExpr_L_PMhsr: ca.mcgill.sable.soot.jimple.ExprSwitch.caseLtExpr(Lca/mcgill/sable/soot/jimple/LtExpr;)V */

Class xt_caseLtExpr_L_PMhsr[] = { 0 };

/*M caseMulExpr_M_XOk55: ca.mcgill.sable.soot.jimple.ExprSwitch.caseMulExpr(Lca/mcgill/sable/soot/jimple/MulExpr;)V */

Class xt_caseMulExpr_M_XOk55[] = { 0 };

/*M caseOrExpr_O_LfFgA: ca.mcgill.sable.soot.jimple.ExprSwitch.caseOrExpr(Lca/mcgill/sable/soot/jimple/OrExpr;)V */

Class xt_caseOrExpr_O_LfFgA[] = { 0 };

/*M caseRemExpr_R_3Oz4M: ca.mcgill.sable.soot.jimple.ExprSwitch.caseRemExpr(Lca/mcgill/sable/soot/jimple/RemExpr;)V */

Class xt_caseRemExpr_R_3Oz4M[] = { 0 };

/*M caseShlExpr_S_9mvtG: ca.mcgill.sable.soot.jimple.ExprSwitch.caseShlExpr(Lca/mcgill/sable/soot/jimple/ShlExpr;)V */

Class xt_caseShlExpr_S_9mvtG[] = { 0 };

/*M caseShrExpr_S_j3sjI: ca.mcgill.sable.soot.jimple.ExprSwitch.caseShrExpr(Lca/mcgill/sable/soot/jimple/ShrExpr;)V */

Class xt_caseShrExpr_S_j3sjI[] = { 0 };

/*M caseUshrExpr_U_vw8fI: ca.mcgill.sable.soot.jimple.ExprSwitch.caseUshrExpr(Lca/mcgill/sable/soot/jimple/UshrExpr;)V */

Class xt_caseUshrExpr_U_vw8fI[] = { 0 };

/*M caseSubExpr_S_dDe0v: ca.mcgill.sable.soot.jimple.ExprSwitch.caseSubExpr(Lca/mcgill/sable/soot/jimple/SubExpr;)V */

Class xt_caseSubExpr_S_dDe0v[] = { 0 };

/*M caseXorExpr_X_DZ3i1: ca.mcgill.sable.soot.jimple.ExprSwitch.caseXorExpr(Lca/mcgill/sable/soot/jimple/XorExpr;)V */

Class xt_caseXorExpr_X_DZ3i1[] = { 0 };

/*M caseInterfaceInvokeExpr_I_l8oVP: ca.mcgill.sable.soot.jimple.ExprSwitch.caseInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr;)V */

Class xt_caseInterfaceInvokeExpr_I_l8oVP[] = { 0 };

/*M caseSpecialInvokeExpr_S_14F1m: ca.mcgill.sable.soot.jimple.ExprSwitch.caseSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr;)V */

Class xt_caseSpecialInvokeExpr_S_14F1m[] = { 0 };

/*M caseStaticInvokeExpr_S_RDtpW: ca.mcgill.sable.soot.jimple.ExprSwitch.caseStaticInvokeExpr(Lca/mcgill/sable/soot/jimple/StaticInvokeExpr;)V */

Class xt_caseStaticInvokeExpr_S_RDtpW[] = { 0 };

/*M caseVirtualInvokeExpr_V_1GvXq: ca.mcgill.sable.soot.jimple.ExprSwitch.caseVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr;)V */

Class xt_caseVirtualInvokeExpr_V_1GvXq[] = { 0 };

/*M caseCastExpr_C_TPtuf: ca.mcgill.sable.soot.jimple.ExprSwitch.caseCastExpr(Lca/mcgill/sable/soot/jimple/CastExpr;)V */

Class xt_caseCastExpr_C_TPtuf[] = { 0 };

/*M caseInstanceOfExpr_I_n6Dgl: ca.mcgill.sable.soot.jimple.ExprSwitch.caseInstanceOfExpr(Lca/mcgill/sable/soot/jimple/InstanceOfExpr;)V */

Class xt_caseInstanceOfExpr_I_n6Dgl[] = { 0 };

/*M caseNewArrayExpr_N_PBM7Y: ca.mcgill.sable.soot.jimple.ExprSwitch.caseNewArrayExpr(Lca/mcgill/sable/soot/jimple/NewArrayExpr;)V */

Class xt_caseNewArrayExpr_N_PBM7Y[] = { 0 };

/*M caseNewMultiArrayExpr_N_5TogZ: ca.mcgill.sable.soot.jimple.ExprSwitch.caseNewMultiArrayExpr(Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr;)V */

Class xt_caseNewMultiArrayExpr_N_5TogZ[] = { 0 };

/*M caseNewExpr_N_zMd95: ca.mcgill.sable.soot.jimple.ExprSwitch.caseNewExpr(Lca/mcgill/sable/soot/jimple/NewExpr;)V */

Class xt_caseNewExpr_N_zMd95[] = { 0 };

/*M caseLengthExpr_L_1NP6v: ca.mcgill.sable.soot.jimple.ExprSwitch.caseLengthExpr(Lca/mcgill/sable/soot/jimple/LengthExpr;)V */

Class xt_caseLengthExpr_L_1NP6v[] = { 0 };

/*M caseNegExpr_N_lxxfi: ca.mcgill.sable.soot.jimple.ExprSwitch.caseNegExpr(Lca/mcgill/sable/soot/jimple/NegExpr;)V */

Class xt_caseNegExpr_N_lxxfi[] = { 0 };

/*M defaultCase_O_HiqEi: ca.mcgill.sable.soot.jimple.ExprSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_HiqEi[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_ExprSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','E','x','p','r','S','w','i','t',
'c','h'};

const void *st_ca_mcgill_sable_soot_jimple_ExprSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_ExprSwitch+38,	/* 0. ca.mcgill.sable.soot.jimple.ExprSwitch */
    0};
