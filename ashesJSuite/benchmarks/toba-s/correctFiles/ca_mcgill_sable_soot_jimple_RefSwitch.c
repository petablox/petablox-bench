/*  ca_mcgill_sable_soot_jimple_RefSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.RefSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_RefSwitch.h"
#include "ca_mcgill_sable_util_Switch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Switch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_RefSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_RefSwitch[];
extern Class xt_caseArrayRef_A_hD6Wc[];
extern Class xt_caseStaticFieldRef_S_ZuJS9[];
extern Class xt_caseInstanceFieldRef_I_fWK3Q[];
extern Class xt_caseParameterRef_P_HksG1[];
extern Class xt_caseNextNextStmtRef_N_xqVeu[];
extern Class xt_caseCaughtExceptionRef_C_nOHhS[];
extern Class xt_caseThisRef_T_zJsss[];
extern Class xt_defaultCase_O_JKiV9[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_RefSwitch.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_RefSwitch.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_RefSwitch.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(37) nmchars = {&acl_char, 0, 37, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','R','e','f','S','w','i','t','c',
'h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 37 };
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
'c','a','s','e','S','t','a','t','i','c','F','i','e','l','d','R','e','f'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','a','t','i','c',
'F','i','e','l','d','R','e','f',';',')','V'};
static const Char nmim_14[] = {
'c','a','s','e','I','n','s','t','a','n','c','e','F','i','e','l','d','R',
'e','f'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','s','t','a','n',
'c','e','F','i','e','l','d','R','e','f',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','P','a','r','a','m','e','t','e','r','R','e','f'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','P','a','r','a','m','e',
't','e','r','R','e','f',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','N','e','x','t','N','e','x','t','S','t','m','t','R','e',
'f'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','x','t','N','e',
'x','t','S','t','m','t','R','e','f',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','C','a','u','g','h','t','E','x','c','e','p','t','i','o',
'n','R','e','f'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','a','u','g','h','t',
'E','x','c','e','p','t','i','o','n','R','e','f',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','T','h','i','s','R','e','f'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','i','s','R','e',
'f',';',')','V'};
static const Char nmim_19[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_19[] = {
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
} inr_ca_mcgill_sable_soot_jimple_RefSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_RefSwitch cl_ca_mcgill_sable_soot_jimple_RefSwitch = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_RefSwitch),
    20,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_RefSwitch,
    st_ca_mcgill_sable_soot_jimple_RefSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_RefSwitch,
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,41,1,0x401,0,xt_caseArrayRef_A_hD6Wc},
	{TMIT_abstract, 0,(const Char *)&nmim_13,18,
	(const Char *)&sgim_13,47,1,0x401,1,xt_caseStaticFieldRef_S_ZuJS9},
	{TMIT_abstract, 0,(const Char *)&nmim_14,20,
	(const Char *)&sgim_14,49,1,0x401,2,xt_caseInstanceFieldRef_I_fWK3Q},
	{TMIT_abstract, 0,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,1,0x401,3,xt_caseParameterRef_P_HksG1},
	{TMIT_abstract, 0,(const Char *)&nmim_16,19,
	(const Char *)&sgim_16,48,1,0x401,4,xt_caseNextNextStmtRef_N_xqVeu},
	{TMIT_abstract, 0,(const Char *)&nmim_17,22,
	(const Char *)&sgim_17,51,1,0x401,5,xt_caseCaughtExceptionRef_C_nOHhS},
	{TMIT_abstract, 0,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,40,1,0x401,6,xt_caseThisRef_T_zJsss},
	{TMIT_abstract, 0,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,21,1,0x401,7,xt_defaultCase_O_JKiV9},
    } /* end of methodsigs */
};


/*M caseArrayRef_A_hD6Wc: ca.mcgill.sable.soot.jimple.RefSwitch.caseArrayRef(Lca/mcgill/sable/soot/jimple/ArrayRef;)V */

Class xt_caseArrayRef_A_hD6Wc[] = { 0 };

/*M caseStaticFieldRef_S_ZuJS9: ca.mcgill.sable.soot.jimple.RefSwitch.caseStaticFieldRef(Lca/mcgill/sable/soot/jimple/StaticFieldRef;)V */

Class xt_caseStaticFieldRef_S_ZuJS9[] = { 0 };

/*M caseInstanceFieldRef_I_fWK3Q: ca.mcgill.sable.soot.jimple.RefSwitch.caseInstanceFieldRef(Lca/mcgill/sable/soot/jimple/InstanceFieldRef;)V */

Class xt_caseInstanceFieldRef_I_fWK3Q[] = { 0 };

/*M caseParameterRef_P_HksG1: ca.mcgill.sable.soot.jimple.RefSwitch.caseParameterRef(Lca/mcgill/sable/soot/jimple/ParameterRef;)V */

Class xt_caseParameterRef_P_HksG1[] = { 0 };

/*M caseNextNextStmtRef_N_xqVeu: ca.mcgill.sable.soot.jimple.RefSwitch.caseNextNextStmtRef(Lca/mcgill/sable/soot/jimple/NextNextStmtRef;)V */

Class xt_caseNextNextStmtRef_N_xqVeu[] = { 0 };

/*M caseCaughtExceptionRef_C_nOHhS: ca.mcgill.sable.soot.jimple.RefSwitch.caseCaughtExceptionRef(Lca/mcgill/sable/soot/jimple/CaughtExceptionRef;)V */

Class xt_caseCaughtExceptionRef_C_nOHhS[] = { 0 };

/*M caseThisRef_T_zJsss: ca.mcgill.sable.soot.jimple.RefSwitch.caseThisRef(Lca/mcgill/sable/soot/jimple/ThisRef;)V */

Class xt_caseThisRef_T_zJsss[] = { 0 };

/*M defaultCase_O_JKiV9: ca.mcgill.sable.soot.jimple.RefSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_JKiV9[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_RefSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','R','e','f','S','w','i','t','c',
'h'};

const void *st_ca_mcgill_sable_soot_jimple_RefSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_RefSwitch+37,	/* 0. ca.mcgill.sable.soot.jimple.RefSwitch */
    0};
