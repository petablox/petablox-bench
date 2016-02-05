/*  ca_mcgill_sable_soot_jimple_JCastExpr.c -- from Java class ca.mcgill.sable.soot.jimple.JCastExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JCastExpr.h"
#include "ca_mcgill_sable_soot_jimple_CastExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractCastExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JCastExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JCastExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_JCastExpr[];
extern Class xt_init_VT_YjbyI[];

#define HASHMASK 0x1f
/*  0.  c1d26da0  (0)  getOp  */
/*  1.  8942e761  (1)  hashCode  */
/*  7.  68b3dbe7  (7)  getCastType  */
/*  d.  b52a1c8d  (d)  setCastType  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
/*  10.  6d3e3310  (10)  getType  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  16.  62b17c16  (16)  setOp  */
/*  17.  9e646537  (17)  toBriefString  */
/*  1e.  667dba9e  (1e)  getOpBox  */
static const struct ihash htable[32] = {
    -1043173984, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.getOp__ePCGc,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1756617703, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.getCastType__Rbe6H,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1255531379, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.setCastType_T_7bnQX,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.apply_S_HqKEd,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.getType__EMMZe,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.getUseBoxes__vkzwE,
    0, 0, 0, 0,
    1655798806, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.setOp_V_ywjZ6,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.toBriefString__ldTqe,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1719515806, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.M.getOpBox__wfVXo,
    0, 0,
};

static const CARRAY(37) nmchars = {&acl_char, 0, 37, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','C','a','s','t','E','x','p',
'r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 37 };
static const Char nmiv_0[] = {
'o','p','B','o','x'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_1[] = {
't','y','p','e'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_14[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_15[] = {
'g','e','t','O','p'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_16[] = {
's','e','t','O','p'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_17[] = {
'g','e','t','O','p','B','o','x'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_18[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'g','e','t','C','a','s','t','T','y','p','e'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_20[] = {
's','e','t','C','a','s','t','T','y','p','e'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_21[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_22[] = {
'a','p','p','l','y'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JCastExpr, opBox), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,38,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JCastExpr, type), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,27,0,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_JCastExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JCastExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JCastExpr cl_ca_mcgill_sable_soot_jimple_JCastExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JCastExpr),
    23,
    0,
    2,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JCastExpr,
    st_ca_mcgill_sable_soot_jimple_JCastExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JCastExpr,
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
	{TMIT_native_code, toString__NbfNh,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x1,2,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VT_YjbyI,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,65,1,0x0,0,xt_init_VT_YjbyI},
	{TMIT_native_code, init_VT_RxSzV,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,68,0,0x4,1,0},
	{TMIT_native_code, toBriefString__ldTqe,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,20,0,0x8001,3,0},
	{TMIT_native_code, getOp__ePCGc,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,37,0,0x8001,4,0},
	{TMIT_native_code, setOp_V_ywjZ6,(const Char *)&nmim_16,5,
	(const Char *)&sgim_16,38,0,0x8001,5,0},
	{TMIT_native_code, getOpBox__wfVXo,(const Char *)&nmim_17,8,
	(const Char *)&sgim_17,40,0,0x8001,6,0},
	{TMIT_native_code, getUseBoxes__vkzwE,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,29,0,0x8001,7,0},
	{TMIT_native_code, getCastType__Rbe6H,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,0,0x8001,8,0},
	{TMIT_native_code, setCastType_T_7bnQX,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,30,0,0x8001,9,0},
	{TMIT_native_code, getType__EMMZe,(const Char *)&nmim_21,7,
	(const Char *)&sgim_21,29,0,0x8001,10,0},
	{TMIT_native_code, apply_S_HqKEd,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,32,0,0x8001,11,0},
    } /* end of methodsigs */
};


/*M init_VT_YjbyI: ca.mcgill.sable.soot.jimple.JCastExpr.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_VT_YjbyI[] = { 0 };

Void init_VT_YjbyI(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = v__WbL8F();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a2)->class->M.
		newImmediateBox_V_7jLB8.f(a2,a3);
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_VT_RxSzV(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_JCastExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','C','a','s','t','E','x','p',
'r'};

const void *st_ca_mcgill_sable_soot_jimple_JCastExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_JCastExpr+37,	/* 0. ca.mcgill.sable.soot.jimple.JCastExpr */
    0};
