/*  ca_mcgill_sable_soot_grimp_GCastExpr.c -- from Java class ca.mcgill.sable.soot.grimp.GCastExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GCastExpr.h"
#include "ca_mcgill_sable_soot_jimple_CastExpr.h"
#include "ca_mcgill_sable_soot_grimp_Precedence.h"
#include "ca_mcgill_sable_soot_jimple_AbstractCastExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GCastExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GCastExpr[];
extern const void *st_ca_mcgill_sable_soot_grimp_GCastExpr[];
extern Class xt_init_VT_BIAfE[];
extern Class xt_getPrecedence__DMI33[];
extern Class xt_toString_SVS_oriRw[];
extern Class xt_toString__AhZC2[];
extern Class xt_toBriefString__QDezG[];

#define HASHMASK 0x1f
/*  0.  c1d26da0  (0)  getOp  */
/*  1.  8942e761  (1)  hashCode  */
/*  7.  68b3dbe7  (7)  getCastType  */
/*  c.  eaf21fcc  (c)  getPrecedence  */
/*  d.  b52a1c8d  (d)  setCastType  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
/*  10.  6d3e3310  (10)  getType  */
/*  12.  4c0d6fd2  (12)  clone  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  16.  62b17c16  (16)  setOp  */
/*  17.  9e646537  (17)  toBriefString  */
/*  1e.  667dba9e  (1e)  getOpBox  */
static const struct ihash htable[32] = {
    -1043173984, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.getOp__ePCGc,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1756617703, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.getCastType__Rbe6H,
    0, 0, 0, 0, 0, 0, 0, 0,
    -353230900, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.getPrecedence__DMI33,
    -1255531379, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.setCastType_T_7bnQX,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.apply_S_HqKEd,
    1832792848, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.getType__EMMZe,
    0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.clone__dslwm,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.getUseBoxes__vkzwE,
    0, 0, 0, 0,
    1655798806, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.setOp_V_ywjZ6,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.toBriefString__QDezG,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1719515806, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.M.getOpBox__wfVXo,
    0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','C','a','s','t','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
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
static const Char nmim_23[] = {
'g','e','t','P','r','e','c','e','d','e','n','c','e'};
static const Char sgim_23[] = {
'(',')','I'};
static const Char nmim_24[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_24[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';',
')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GCastExpr, opBox), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,38,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GCastExpr, type), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,27,0,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_grimp_GCastExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GCastExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GCastExpr cl_ca_mcgill_sable_soot_grimp_GCastExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GCastExpr),
    25,
    0,
    2,
    0,
    3, supers,
    3, 2, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GCastExpr,
    st_ca_mcgill_sable_soot_grimp_GCastExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GCastExpr,
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
	{TMIT_native_code, toString__AhZC2,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__AhZC2},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VT_BIAfE,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,65,1,0x0,0,xt_init_VT_BIAfE},
	{TMIT_native_code, init_VT_RxSzV,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,68,0,0x4,1,0},
	{TMIT_native_code, toBriefString__QDezG,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,20,1,0x8001,4,xt_toBriefString__QDezG},
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
	{TMIT_native_code, getPrecedence__DMI33,(const Char *)&nmim_23,13,
	(const Char *)&sgim_23,3,1,0x8001,1,xt_getPrecedence__DMI33},
	{TMIT_native_code, toString_SVS_oriRw,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,91,1,0x2,2,xt_toString_SVS_oriRw},
    } /* end of methodsigs */
};


/*M init_VT_BIAfE: ca.mcgill.sable.soot.grimp.GCastExpr.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_VT_BIAfE[] = { 0 };

Void init_VT_BIAfE(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExprBox_V_B8P02.f(a2,a3);
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

/*M getPrecedence__DMI33: ca.mcgill.sable.soot.grimp.GCastExpr.getPrecedence()I */

Class xt_getPrecedence__DMI33[] = { 0 };

Int getPrecedence__DMI33(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 850;
	return i1;

	/*NOTREACHED*/
}

/*M toString_SVS_oriRw: ca.mcgill.sable.soot.grimp.GCastExpr.toString(Ljava/lang/String;Lca/mcgill/sable/soot/jimple/Value;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_SVS_oriRw[] = { 0 };

Object toString_SVS_oriRw(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av3;
	av4 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(7,L1);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-353230900)->f)(a1);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_grimp_GCastExpr*)a2)->class->M.
		getPrecedence__DMI33.f(a2);
	if (i1 >= i2)
		GOTO(23,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GCastExpr[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GCastExpr[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av4 = a1;
L1:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av1;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__AhZC2: ca.mcgill.sable.soot.grimp.GCastExpr.toString()Ljava/lang/String; */

Class xt_toString__AhZC2[] = { 0 };

Object toString__AhZC2(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GCastExpr[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a3)->class->M.
		getCastType__Rbe6H.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_Type*)a3)->class->M.
		toString__J7Vel.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GCastExpr[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a3)->class->M.
		getOp__ePCGc.f(a3);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a4)->class->M.
		getOp__ePCGc.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_Object*)a4)->class->M.
		toString__4d9OF.f(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_SVS_oriRw(a1,a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__QDezG: ca.mcgill.sable.soot.grimp.GCastExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__QDezG[] = { 0 };

Object toBriefString__QDezG(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GCastExpr[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a3)->class->M.
		getCastType__Rbe6H.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_Type*)a3)->class->M.
		toString__J7Vel.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GCastExpr[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a3)->class->M.
		getOp__ePCGc.f(a3);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a4)->class->M.
		getOp__ePCGc.f(a4);
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1637587657)->f)(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_SVS_oriRw(a1,a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GCastExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','C','a','s','t','E','x','p','r',
'(',')',')',' '};

const void *st_ca_mcgill_sable_soot_grimp_GCastExpr[] = {
    ch_ca_mcgill_sable_soot_grimp_GCastExpr+36,	/* 0. ca.mcgill.sable.soot.grimp.GCastExpr */
    ch_ca_mcgill_sable_soot_grimp_GCastExpr+37,	/* 1. ( */
    ch_ca_mcgill_sable_soot_grimp_GCastExpr+38,	/* 2. ) */
    ch_ca_mcgill_sable_soot_grimp_GCastExpr+40,	/* 3. )  */
    0};
