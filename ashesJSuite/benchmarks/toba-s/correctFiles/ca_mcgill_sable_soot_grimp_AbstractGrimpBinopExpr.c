/*  ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.c -- from Java class ca.mcgill.sable.soot.grimp.AbstractGrimpBinopExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.h"
#include "ca_mcgill_sable_soot_grimp_Precedence.h"
#include "ca_mcgill_sable_soot_jimple_AbstractBinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_Expr.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
    &cl_ca_mcgill_sable_soot_jimple_Expr.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[];
extern const void *st_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[];
extern Class xt_init_VV_DIMol[];
extern Class xt_getPrecedence__gVfSm[];
extern Class xt_toString_VVSS_z9hBi[];
extern Class xt_toString__3jY9t[];
extern Class xt_toBriefString__JKxpS[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  c.  eaf21fcc  (c)  getPrecedence  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.getType__nnVPX,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.clone__dslwm,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.getUseBoxes__IOSR3,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.toBriefString__JKxpS,
    0, 0, 0, 0, 0, 0, 0, 0,
    -353230900, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.getPrecedence__gVfSm,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.M.apply_S_mJjTz,
    0, 0,
};

static const CARRAY(49) nmchars = {&acl_char, 0, 49, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','A','b','s','t','r','a','c','t','G',
'r','i','m','p','B','i','n','o','p','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 49 };
static const Char nmiv_0[] = {
'o','p','1','B','o','x'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_1[] = {
'o','p','2','B','o','x'};
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
'g','e','t','O','p','1'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_13[] = {
'g','e','t','O','p','2'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_14[] = {
'g','e','t','O','p','1','B','o','x'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_15[] = {
'g','e','t','O','p','2','B','o','x'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_16[] = {
's','e','t','O','p','1'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_17[] = {
's','e','t','O','p','2'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_18[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'g','e','t','S','y','m','b','o','l'};
static const Char sgim_19[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_20[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_20[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
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
'<','i','n','i','t','>'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'V'};
static const Char nmim_24[] = {
'g','e','t','P','r','e','c','e','d','e','n','c','e'};
static const Char sgim_24[] = {
'(',')','I'};
static const Char nmim_25[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';','L',
'j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';','L',
'j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';',')',
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr, op1Box), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,38,0,0x4,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr, op2Box), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,38,0,0x4,1}, 
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
} inr_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr cl_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr),
    26,
    0,
    2,
    0,
    3, supers,
    3, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr,
    st_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__WU5L1,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,10,0},
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
	{TMIT_native_code, toString__3jY9t,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__3jY9t},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getOp1__mUF21,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,37,0,0x1,0,0},
	{TMIT_native_code, getOp2__PMvsN,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,37,0,0x1,1,0},
	{TMIT_native_code, getOp1Box__s281o,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,40,0,0x1,2,0},
	{TMIT_native_code, getOp2Box__1UMlm,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,40,0,0x1,3,0},
	{TMIT_native_code, setOp1_V_smADO,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,38,0,0x1,4,0},
	{TMIT_native_code, setOp2_V_Tf2o5,(const Char *)&nmim_17,6,
	(const Char *)&sgim_17,38,0,0x1,5,0},
	{TMIT_native_code, getUseBoxes__IOSR3,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,29,0,0x8001,6,0},
	{TMIT_abstract, 0,(const Char *)&nmim_19,9,
	(const Char *)&sgim_19,20,0,0x404,7,0},
	{TMIT_native_code, toBriefString__JKxpS,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,20,1,0x8001,4,xt_toBriefString__JKxpS},
	{TMIT_abstract, 0,(const Char *)&nmim_21,7,
	(const Char *)&sgim_21,29,0,0x8401,11,0},
	{TMIT_abstract, 0,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,32,0,0x8401,12,0},
	{TMIT_native_code, init_VV_DIMol,(const Char *)&nmim_23,6,
	(const Char *)&sgim_23,73,1,0x4,0,xt_init_VV_DIMol},
	{TMIT_abstract, 0,(const Char *)&nmim_24,13,
	(const Char *)&sgim_24,3,1,0x8401,1,xt_getPrecedence__gVfSm},
	{TMIT_native_code, toString_VVSS_z9hBi,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,126,1,0x2,2,xt_toString_VVSS_z9hBi},
    } /* end of methodsigs */
};


/*M init_VV_DIMol: ca.mcgill.sable.soot.grimp.AbstractGrimpBinopExpr.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_init_VV_DIMol[] = { 0 };

Void init_VV_DIMol(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__WU5L1(a1);
	a1 = av0;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newArgBox_V_gOZZr.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op1Box = a2;
	a1 = av0;
	a2 = v__ES3xL();
	a3 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newArgBox_V_gOZZr.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op2Box = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getPrecedence__gVfSm: ca.mcgill.sable.soot.grimp.AbstractGrimpBinopExpr.getPrecedence()I */

Class xt_getPrecedence__gVfSm[] = { 0 };

/*M toString_VVSS_z9hBi: ca.mcgill.sable.soot.grimp.AbstractGrimpBinopExpr.toString(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_VVSS_z9hBi[] = { 0 };

Object toString_VVSS_z9hBi(Object p0, Object p1, Object p2, Object p3, Object p4)
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
	av4 = p4;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
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
	i2 = ((struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr*)a2)->class->M.
		getPrecedence__gVfSm.f(a2);
	if (i1 >= i2)
		GOTO(20,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[2];
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
	av3 = a1;
L1:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(49,L2);
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
	i2 = ((struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr*)a2)->class->M.
		getPrecedence__gVfSm.f(a2);
	if (i1 >= i2)
		GOTO(65,L2);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[1];
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
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[2];
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
L2:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a2)->class->M.
		getSymbol__UIFSQ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
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

/*M toString__3jY9t: ca.mcgill.sable.soot.grimp.AbstractGrimpBinopExpr.toString()Ljava/lang/String; */

Class xt_toString__3jY9t[] = { 0 };

Object toString__3jY9t(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op1Box;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op2Box;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Object*)a1)->class->M.
		toString__4d9OF.f(a1);
	av3 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Object*)a1)->class->M.
		toString__4d9OF.f(a1);
	av4 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av2;
	a4 = av3;
	a5 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_VVSS_z9hBi(a1,a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__JKxpS: ca.mcgill.sable.soot.grimp.AbstractGrimpBinopExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__JKxpS[] = { 0 };

Object toBriefString__JKxpS(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op1Box;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op2Box;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	av2 = a1;
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1637587657)->f)(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1637587657)->f)(a1);
	av4 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av2;
	a4 = av3;
	a5 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_VVSS_z9hBi(a1,a2,a3,a4,a5);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','A','b','s','t','r','a','c','t','G',
'r','i','m','p','B','i','n','o','p','E','x','p','r','(',')'};

const void *st_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr[] = {
    ch_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr+49,	/* 0. ca.mcgill.sable.soot.grimp.AbstractGrimp */
    ch_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr+50,	/* 1. ( */
    ch_ca_mcgill_sable_soot_grimp_AbstractGrimpBinopExpr+51,	/* 2. ) */
    0};
