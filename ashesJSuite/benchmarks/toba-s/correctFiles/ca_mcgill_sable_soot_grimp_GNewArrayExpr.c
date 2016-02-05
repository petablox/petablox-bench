/*  ca_mcgill_sable_soot_grimp_GNewArrayExpr.c -- from Java class ca.mcgill.sable.soot.grimp.GNewArrayExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GNewArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewArrayExpr.h"
#include "ca_mcgill_sable_soot_grimp_Precedence.h"
#include "ca_mcgill_sable_soot_jimple_AbstractNewArrayExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractNewArrayExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_NewArrayExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
    &cl_ca_mcgill_sable_soot_jimple_NewArrayExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GNewArrayExpr[];
extern const void *st_ca_mcgill_sable_soot_grimp_GNewArrayExpr[];
extern Class xt_init_TV_rOFjT[];
extern Class xt_getPrecedence__PxmfX[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  2.  5c6f1b82  (2)  setSize  */
/*  5.  ffa4d905  (5)  setBaseType  */
/*  a.  85fe950a  (a)  getSizeBox  */
/*  c.  eaf21fcc  (c)  getPrecedence  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
/*  10.  6d3e3310  (10)  getType  */
/*  12.  4c0d6fd2  (12)  clone  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  17.  9e646537  (17)  toBriefString  */
/*  1c.  ede92fdc  (1c)  getSize  */
/*  1f.  9b25e0ff  (1f)  getBaseType  */
static const struct ihash htable[33] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.hashCode__8wJNW,
    1550785410, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.setSize_V_sWVc6,
    0, 0, 0, 0,
    -5973755, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.setBaseType_T_n0me7,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2046913270, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.getSizeBox__UWEmu,
    0, 0,
    -353230900, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.getPrecedence__PxmfX,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.apply_S_bzlA3,
    1832792848, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.getType__0vGtB,
    0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.clone__dslwm,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.getUseBoxes__Va6vv,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.toBriefString__dkr0O,
    0, 0, 0, 0, 0, 0, 0, 0,
    -303484964, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.getSize__Ql92O,
    0, 0, 0, 0,
    -1692016385, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.M.getBaseType__PLDGM,
    0, 0,
};

static const CARRAY(40) nmchars = {&acl_char, 0, 40, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','N','e','w','A','r','r','a','y',
'E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 40 };
static const Char nmiv_0[] = {
'b','a','s','e','T','y','p','e'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';'};
static const Char nmiv_1[] = {
's','i','z','e','B','o','x'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
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
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','V','a','l','u','e','B','o','x',';',')','V'};
static const Char nmim_13[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
'g','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_15[] = {
's','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_16[] = {
'g','e','t','S','i','z','e','B','o','x'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_17[] = {
'g','e','t','S','i','z','e'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_18[] = {
's','e','t','S','i','z','e'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_19[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_20[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_21[] = {
'a','p','p','l','y'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};
static const Char nmim_22[] = {
'<','i','n','i','t','>'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','V','a','l','u','e',';',')','V'};
static const Char nmim_23[] = {
'g','e','t','P','r','e','c','e','d','e','n','c','e'};
static const Char sgim_23[] = {
'(',')','I'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GNewArrayExpr, baseType), 0,(const Char *)&nmiv_0,8,(const Char *)&sgiv_0,27,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GNewArrayExpr, sizeBox), 0,(const Char *)&nmiv_1,7,(const Char *)&sgiv_1,38,0,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_grimp_GNewArrayExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr cl_ca_mcgill_sable_soot_grimp_GNewArrayExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GNewArrayExpr),
    24,
    0,
    2,
    0,
    3, supers,
    3, 2, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GNewArrayExpr,
    st_ca_mcgill_sable_soot_grimp_GNewArrayExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GNewArrayExpr,
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
	{TMIT_native_code, toString__P1Q9g,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x1,1,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_TV_fFhHf,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,68,0,0x4,0,0},
	{TMIT_native_code, toBriefString__dkr0O,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,0,0x8001,2,0},
	{TMIT_native_code, getBaseType__PLDGM,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,29,0,0x8001,3,0},
	{TMIT_native_code, setBaseType_T_n0me7,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,30,0,0x8001,4,0},
	{TMIT_native_code, getSizeBox__UWEmu,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,40,0,0x8001,5,0},
	{TMIT_native_code, getSize__Ql92O,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,37,0,0x8001,6,0},
	{TMIT_native_code, setSize_V_sWVc6,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,38,0,0x8001,7,0},
	{TMIT_native_code, getUseBoxes__Va6vv,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,0,0x8001,8,0},
	{TMIT_native_code, getType__0vGtB,(const Char *)&nmim_20,7,
	(const Char *)&sgim_20,29,0,0x8001,9,0},
	{TMIT_native_code, apply_S_bzlA3,(const Char *)&nmim_21,5,
	(const Char *)&sgim_21,32,0,0x8001,10,0},
	{TMIT_native_code, init_TV_rOFjT,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,65,1,0x0,0,xt_init_TV_rOFjT},
	{TMIT_native_code, getPrecedence__PxmfX,(const Char *)&nmim_23,13,
	(const Char *)&sgim_23,3,1,0x8001,1,xt_getPrecedence__PxmfX},
    } /* end of methodsigs */
};


/*M init_TV_rOFjT: ca.mcgill.sable.soot.grimp.GNewArrayExpr.<init>(Lca/mcgill/sable/soot/Type;Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_init_TV_rOFjT[] = { 0 };

Void init_TV_rOFjT(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	a3 = v__ES3xL();
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExprBox_V_B8P02.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_TV_fFhHf(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getPrecedence__PxmfX: ca.mcgill.sable.soot.grimp.GNewArrayExpr.getPrecedence()I */

Class xt_getPrecedence__PxmfX[] = { 0 };

Int getPrecedence__PxmfX(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 850;
	return i1;

	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GNewArrayExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','N','e','w','A','r','r','a','y',
'E','x','p','r'};

const void *st_ca_mcgill_sable_soot_grimp_GNewArrayExpr[] = {
    ch_ca_mcgill_sable_soot_grimp_GNewArrayExpr+40,	/* 0. ca.mcgill.sable.soot.grimp.GNewArrayExpr */
    0};
