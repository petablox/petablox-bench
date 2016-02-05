/*  ca_mcgill_sable_soot_jimple_AbstractRefSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractRefSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractRefSwitch.h"
#include "ca_mcgill_sable_soot_jimple_RefSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractRefSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractRefSwitch[];
extern Class xt_caseArrayRef_A_XDw8Q[];
extern Class xt_caseStaticFieldRef_S_TCzAV[];
extern Class xt_caseInstanceFieldRef_I_RYODF[];
extern Class xt_caseParameterRef_P_HND4l[];
extern Class xt_caseNextNextStmtRef_N_pfUGE[];
extern Class xt_caseCaughtExceptionRef_C_r5a6O[];
extern Class xt_caseThisRef_T_hFZKk[];
extern Class xt_defaultCase_O_Zz3qq[];
extern Class xt_init__Y0Iml[];

#define HASHMASK 0x7f
/*  a.  7a85770a  (a)  caseInstanceFieldRef  */
/*  12.  4897dd92  (12)  caseParameterRef  */
/*  1e.  b8576a1e  (1e)  caseCaughtExceptionRef  */
/*  28.  ced4a328  (28)  defaultCase  */
/*  2c.  750b8dac  (2c)  caseStaticFieldRef  */
/*  3a.  47c3ba  (3a)  caseArrayRef  */
/*  44.  7aa88844  (44)  caseThisRef  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  52.  4c0d6fd2  (52)  clone  */
/*  61.  8942e761  (61)  hashCode  */
/*  6c.  fea967ec  (6c)  caseNextNextStmtRef  */
/*  6f.  489f8e6f  (6f)  toString  */
static const struct ihash htable[128] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2055567114, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.caseInstanceFieldRef_I_RYODF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1217912210, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.caseParameterRef_P_HND4l,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1202230754, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.caseCaughtExceptionRef_C_r5a6O,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.defaultCase_O_Zz3qq,
    0, 0, 0, 0, 0, 0,
    1963691436, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.caseStaticFieldRef_S_TCzAV,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    4703162, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.caseArrayRef_A_XDw8Q,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2057865284, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.caseThisRef_T_hFZKk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -22452244, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.caseNextNextStmtRef_N_pfUGE,
    0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(45) nmchars = {&acl_char, 0, 45, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'R','e','f','S','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 45 };
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
} inr_ca_mcgill_sable_soot_jimple_AbstractRefSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch cl_ca_mcgill_sable_soot_jimple_AbstractRefSwitch = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch),
    20,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractRefSwitch,
    st_ca_mcgill_sable_soot_jimple_AbstractRefSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractRefSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__Y0Iml,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,8,xt_init__Y0Iml},
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
	{TMIT_native_code, caseArrayRef_A_XDw8Q,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,41,1,0x8001,0,xt_caseArrayRef_A_XDw8Q},
	{TMIT_native_code, caseStaticFieldRef_S_TCzAV,(const Char *)&nmim_13,18,
	(const Char *)&sgim_13,47,1,0x8001,1,xt_caseStaticFieldRef_S_TCzAV},
	{TMIT_native_code, caseInstanceFieldRef_I_RYODF,(const Char *)&nmim_14,20,
	(const Char *)&sgim_14,49,1,0x8001,2,xt_caseInstanceFieldRef_I_RYODF},
	{TMIT_native_code, caseParameterRef_P_HND4l,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,1,0x8001,3,xt_caseParameterRef_P_HND4l},
	{TMIT_native_code, caseNextNextStmtRef_N_pfUGE,(const Char *)&nmim_16,19,
	(const Char *)&sgim_16,48,1,0x8001,4,xt_caseNextNextStmtRef_N_pfUGE},
	{TMIT_native_code, caseCaughtExceptionRef_C_r5a6O,(const Char *)&nmim_17,22,
	(const Char *)&sgim_17,51,1,0x8001,5,xt_caseCaughtExceptionRef_C_r5a6O},
	{TMIT_native_code, caseThisRef_T_hFZKk,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,40,1,0x8001,6,xt_caseThisRef_T_hFZKk},
	{TMIT_native_code, defaultCase_O_Zz3qq,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,21,1,0x8001,7,xt_defaultCase_O_Zz3qq},
    } /* end of methodsigs */
};


/*M caseArrayRef_A_XDw8Q: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.caseArrayRef(Lca/mcgill/sable/soot/jimple/ArrayRef;)V */

Class xt_caseArrayRef_A_XDw8Q[] = { 0 };

Void caseArrayRef_A_XDw8Q(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch*)a1)->class->M.
		defaultCase_O_Zz3qq.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStaticFieldRef_S_TCzAV: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.caseStaticFieldRef(Lca/mcgill/sable/soot/jimple/StaticFieldRef;)V */

Class xt_caseStaticFieldRef_S_TCzAV[] = { 0 };

Void caseStaticFieldRef_S_TCzAV(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch*)a1)->class->M.
		defaultCase_O_Zz3qq.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInstanceFieldRef_I_RYODF: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.caseInstanceFieldRef(Lca/mcgill/sable/soot/jimple/InstanceFieldRef;)V */

Class xt_caseInstanceFieldRef_I_RYODF[] = { 0 };

Void caseInstanceFieldRef_I_RYODF(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch*)a1)->class->M.
		defaultCase_O_Zz3qq.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseParameterRef_P_HND4l: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.caseParameterRef(Lca/mcgill/sable/soot/jimple/ParameterRef;)V */

Class xt_caseParameterRef_P_HND4l[] = { 0 };

Void caseParameterRef_P_HND4l(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch*)a1)->class->M.
		defaultCase_O_Zz3qq.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNextNextStmtRef_N_pfUGE: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.caseNextNextStmtRef(Lca/mcgill/sable/soot/jimple/NextNextStmtRef;)V */

Class xt_caseNextNextStmtRef_N_pfUGE[] = { 0 };

Void caseNextNextStmtRef_N_pfUGE(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch*)a1)->class->M.
		defaultCase_O_Zz3qq.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCaughtExceptionRef_C_r5a6O: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.caseCaughtExceptionRef(Lca/mcgill/sable/soot/jimple/CaughtExceptionRef;)V */

Class xt_caseCaughtExceptionRef_C_r5a6O[] = { 0 };

Void caseCaughtExceptionRef_C_r5a6O(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch*)a1)->class->M.
		defaultCase_O_Zz3qq.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseThisRef_T_hFZKk: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.caseThisRef(Lca/mcgill/sable/soot/jimple/ThisRef;)V */

Class xt_caseThisRef_T_hFZKk[] = { 0 };

Void caseThisRef_T_hFZKk(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractRefSwitch*)a1)->class->M.
		defaultCase_O_Zz3qq.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_O_Zz3qq: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_Zz3qq[] = { 0 };

Void defaultCase_O_Zz3qq(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M init__Y0Iml: ca.mcgill.sable.soot.jimple.AbstractRefSwitch.<init>()V */

Class xt_init__Y0Iml[] = { 0 };

Void init__Y0Iml(Object p0)
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



const Char ch_ca_mcgill_sable_soot_jimple_AbstractRefSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'R','e','f','S','w','i','t','c','h'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractRefSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractRefSwitch+45,	/* 0. ca.mcgill.sable.soot.jimple.AbstractRefS */
    0};
