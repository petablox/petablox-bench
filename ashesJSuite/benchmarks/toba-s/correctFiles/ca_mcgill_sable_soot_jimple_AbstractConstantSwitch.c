/*  ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractConstantSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.h"
#include "ca_mcgill_sable_soot_jimple_ConstantSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ConstantSwitch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch[];
extern Class xt_caseDoubleConstant_D_Cpt4U[];
extern Class xt_caseFloatConstant_F_eEoXa[];
extern Class xt_caseIntConstant_I_UehrT[];
extern Class xt_caseLongConstant_L_oZmKC[];
extern Class xt_caseNullConstant_N_oKa11[];
extern Class xt_caseStringConstant_S_mtjWx[];
extern Class xt_defaultCase_O_4IVRt[];
extern Class xt_getResult__m57fE[];
extern Class xt_setResult_O_8VTLx[];
extern Class xt_init__j1IWS[];

#define HASHMASK 0x7f
/*  18.  36ffff98  (18)  caseDoubleConstant  */
/*  1c.  aa31981c  (1c)  caseNullConstant  */
/*  28.  ced4a328  (28)  defaultCase  */
/*  36.  5bb98036  (36)  caseFloatConstant  */
/*  38.  23820138  (38)  caseStringConstant  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  52.  4c0d6fd2  (52)  clone  */
/*  61.  8942e761  (61)  hashCode  */
/*  68.  33a85868  (68)  caseIntConstant  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  76.  94d13bf6  (76)  caseLongConstant  */
static const struct ihash htable[128] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    922746776, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.caseDoubleConstant_D_Cpt4U,
    0, 0, 0, 0, 0, 0,
    -1439590372, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.caseNullConstant_N_oKa11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.defaultCase_O_4IVRt,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1538883638, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.caseFloatConstant_F_eEoXa,
    0, 0,
    595722552, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.caseStringConstant_S_mtjWx,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    866670696, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.caseIntConstant_I_UehrT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1798226954, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.M.caseLongConstant_L_oZmKC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(50) nmchars = {&acl_char, 0, 50, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'C','o','n','s','t','a','n','t','S','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 50 };
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
'c','a','s','e','D','o','u','b','l','e','C','o','n','s','t','a','n','t'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','D','o','u','b','l','e',
'C','o','n','s','t','a','n','t',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','F','l','o','a','t','C','o','n','s','t','a','n','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','a','t','C',
'o','n','s','t','a','n','t',';',')','V'};
static const Char nmim_14[] = {
'c','a','s','e','I','n','t','C','o','n','s','t','a','n','t'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','t','C','o','n',
's','t','a','n','t',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','L','o','n','g','C','o','n','s','t','a','n','t'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','n','g','C','o',
'n','s','t','a','n','t',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','N','u','l','l','C','o','n','s','t','a','n','t'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','u','l','l','C','o',
'n','s','t','a','n','t',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','S','t','r','i','n','g','C','o','n','s','t','a','n','t'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','r','i','n','g',
'C','o','n','s','t','a','n','t',';',')','V'};
static const Char nmim_18[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_19[] = {
'g','e','t','R','e','s','u','l','t'};
static const Char sgim_19[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_20[] = {
's','e','t','R','e','s','u','l','t'};
static const Char sgim_20[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch cl_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch),
    21,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch,
    st_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__j1IWS,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,9,xt_init__j1IWS},
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
	{TMIT_native_code, caseDoubleConstant_D_Cpt4U,(const Char *)&nmim_12,18,
	(const Char *)&sgim_12,47,1,0x8001,0,xt_caseDoubleConstant_D_Cpt4U},
	{TMIT_native_code, caseFloatConstant_F_eEoXa,(const Char *)&nmim_13,17,
	(const Char *)&sgim_13,46,1,0x8001,1,xt_caseFloatConstant_F_eEoXa},
	{TMIT_native_code, caseIntConstant_I_UehrT,(const Char *)&nmim_14,15,
	(const Char *)&sgim_14,44,1,0x8001,2,xt_caseIntConstant_I_UehrT},
	{TMIT_native_code, caseLongConstant_L_oZmKC,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,1,0x8001,3,xt_caseLongConstant_L_oZmKC},
	{TMIT_native_code, caseNullConstant_N_oKa11,(const Char *)&nmim_16,16,
	(const Char *)&sgim_16,45,1,0x8001,4,xt_caseNullConstant_N_oKa11},
	{TMIT_native_code, caseStringConstant_S_mtjWx,(const Char *)&nmim_17,18,
	(const Char *)&sgim_17,47,1,0x8001,5,xt_caseStringConstant_S_mtjWx},
	{TMIT_native_code, defaultCase_O_4IVRt,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,21,1,0x8001,6,xt_defaultCase_O_4IVRt},
	{TMIT_native_code, getResult__m57fE,(const Char *)&nmim_19,9,
	(const Char *)&sgim_19,20,1,0x1,7,xt_getResult__m57fE},
	{TMIT_native_code, setResult_O_8VTLx,(const Char *)&nmim_20,9,
	(const Char *)&sgim_20,21,1,0x1,8,xt_setResult_O_8VTLx},
    } /* end of methodsigs */
};


/*M caseDoubleConstant_D_Cpt4U: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.caseDoubleConstant(Lca/mcgill/sable/soot/jimple/DoubleConstant;)V */

Class xt_caseDoubleConstant_D_Cpt4U[] = { 0 };

Void caseDoubleConstant_D_Cpt4U(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->class->M.
		defaultCase_O_4IVRt.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseFloatConstant_F_eEoXa: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.caseFloatConstant(Lca/mcgill/sable/soot/jimple/FloatConstant;)V */

Class xt_caseFloatConstant_F_eEoXa[] = { 0 };

Void caseFloatConstant_F_eEoXa(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->class->M.
		defaultCase_O_4IVRt.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIntConstant_I_UehrT: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.caseIntConstant(Lca/mcgill/sable/soot/jimple/IntConstant;)V */

Class xt_caseIntConstant_I_UehrT[] = { 0 };

Void caseIntConstant_I_UehrT(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->class->M.
		defaultCase_O_4IVRt.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLongConstant_L_oZmKC: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.caseLongConstant(Lca/mcgill/sable/soot/jimple/LongConstant;)V */

Class xt_caseLongConstant_L_oZmKC[] = { 0 };

Void caseLongConstant_L_oZmKC(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->class->M.
		defaultCase_O_4IVRt.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNullConstant_N_oKa11: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.caseNullConstant(Lca/mcgill/sable/soot/jimple/NullConstant;)V */

Class xt_caseNullConstant_N_oKa11[] = { 0 };

Void caseNullConstant_N_oKa11(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->class->M.
		defaultCase_O_4IVRt.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseStringConstant_S_mtjWx: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.caseStringConstant(Lca/mcgill/sable/soot/jimple/StringConstant;)V */

Class xt_caseStringConstant_S_mtjWx[] = { 0 };

Void caseStringConstant_S_mtjWx(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->class->M.
		defaultCase_O_4IVRt.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_O_4IVRt: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_4IVRt[] = { 0 };

Void defaultCase_O_4IVRt(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M getResult__m57fE: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.getResult()Ljava/lang/Object; */

Class xt_getResult__m57fE[] = { 0 };

Object getResult__m57fE(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->result;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setResult_O_8VTLx: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.setResult(Ljava/lang/Object;)V */

Class xt_setResult_O_8VTLx[] = { 0 };

Void setResult_O_8VTLx(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch*)a1)->result = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__j1IWS: ca.mcgill.sable.soot.jimple.AbstractConstantSwitch.<init>()V */

Class xt_init__j1IWS[] = { 0 };

Void init__j1IWS(Object p0)
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



const Char ch_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'C','o','n','s','t','a','n','t','S','w','i','t','c','h'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractConstantSwitch+50,	/* 0. ca.mcgill.sable.soot.jimple.AbstractCons */
    0};
