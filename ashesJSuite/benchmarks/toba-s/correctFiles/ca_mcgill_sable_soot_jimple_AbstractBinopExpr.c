/*  ca_mcgill_sable_soot_jimple_AbstractBinopExpr.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractBinopExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractBinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_Expr.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Expr.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractBinopExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractBinopExpr[];
extern Class xt_getOp1__mUF21[];
extern Class xt_getOp2__PMvsN[];
extern Class xt_getOp1Box__s281o[];
extern Class xt_getOp2Box__1UMlm[];
extern Class xt_setOp1_V_smADO[];
extern Class xt_setOp2_V_Tf2o5[];
extern Class xt_getUseBoxes__IOSR3[];
extern Class xt_getSymbol__UIFSQ[];
extern Class xt_toString__k6uLi[];
extern Class xt_toBriefString__mHCqh[];
extern Class xt_init__WU5L1[];
extern Class xt_getType__nnVPX[];
extern Class xt_apply_S_mJjTz[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.M.getType__nnVPX,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.M.getUseBoxes__IOSR3,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.M.toBriefString__mHCqh,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.M.apply_S_mJjTz,
    0, 0,
};

static const CARRAY(45) nmchars = {&acl_char, 0, 45, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'B','i','n','o','p','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 45 };
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr, op1Box), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,38,1,0x4,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr, op2Box), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,38,1,0x4,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractBinopExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr),
    23,
    0,
    2,
    0,
    2, supers,
    2, 2, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractBinopExpr,
    st_ca_mcgill_sable_soot_jimple_AbstractBinopExpr,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractBinopExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__WU5L1,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,10,xt_init__WU5L1},
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
	{TMIT_native_code, toString__k6uLi,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,8,xt_toString__k6uLi},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getOp1__mUF21,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,37,1,0x1,0,xt_getOp1__mUF21},
	{TMIT_native_code, getOp2__PMvsN,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,37,1,0x1,1,xt_getOp2__PMvsN},
	{TMIT_native_code, getOp1Box__s281o,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,40,1,0x1,2,xt_getOp1Box__s281o},
	{TMIT_native_code, getOp2Box__1UMlm,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,40,1,0x1,3,xt_getOp2Box__1UMlm},
	{TMIT_native_code, setOp1_V_smADO,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,38,1,0x1,4,xt_setOp1_V_smADO},
	{TMIT_native_code, setOp2_V_Tf2o5,(const Char *)&nmim_17,6,
	(const Char *)&sgim_17,38,1,0x1,5,xt_setOp2_V_Tf2o5},
	{TMIT_native_code, getUseBoxes__IOSR3,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,29,1,0x8001,6,xt_getUseBoxes__IOSR3},
	{TMIT_abstract, 0,(const Char *)&nmim_19,9,
	(const Char *)&sgim_19,20,1,0x404,7,xt_getSymbol__UIFSQ},
	{TMIT_native_code, toBriefString__mHCqh,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,20,1,0x8001,9,xt_toBriefString__mHCqh},
	{TMIT_abstract, 0,(const Char *)&nmim_21,7,
	(const Char *)&sgim_21,29,1,0x8401,11,xt_getType__nnVPX},
	{TMIT_abstract, 0,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,32,1,0x8401,12,xt_apply_S_mJjTz},
    } /* end of methodsigs */
};


/*M getOp1__mUF21: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.getOp1()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getOp1__mUF21[] = { 0 };

Object getOp1__mUF21(Object p0)
{
Object a0, a1;
Object av0;
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
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getOp2__PMvsN: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.getOp2()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getOp2__PMvsN[] = { 0 };

Object getOp2__PMvsN(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op2Box;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getOp1Box__s281o: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.getOp1Box()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getOp1Box__s281o[] = { 0 };

Object getOp1Box__s281o(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op1Box;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getOp2Box__1UMlm: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.getOp2Box()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getOp2Box__1UMlm[] = { 0 };

Object getOp2Box__1UMlm(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op2Box;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setOp1_V_smADO: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.setOp1(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setOp1_V_smADO[] = { 0 };

Void setOp1_V_smADO(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op1Box;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-617263732)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setOp2_V_Tf2o5: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.setOp2(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setOp2_V_Tf2o5[] = { 0 };

Void setOp2_V_Tf2o5(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op2Box;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-617263732)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__IOSR3: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__IOSR3[] = { 0 };

Object getUseBoxes__IOSR3(Object p0)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av1 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a2)->op1Box;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-890495682)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-113699181)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a2)->op1Box;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a2)->op2Box;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-890495682)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-113699181)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a2)->op2Box;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getSymbol__UIFSQ: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.getSymbol()Ljava/lang/String; */

Class xt_getSymbol__UIFSQ[] = { 0 };

/*M toString__k6uLi: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.toString()Ljava/lang/String; */

Class xt_toString__k6uLi[] = { 0 };

Object toString__k6uLi(Object p0)
{
Object a0, a1, a2, a3;
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
	a1 = new(&cl_java_lang_StringBuffer.C);
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

/*M toBriefString__mHCqh: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__mHCqh[] = { 0 };

Object toBriefString__mHCqh(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
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
	a1 = new(&cl_java_lang_StringBuffer.C);
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

/*M init__WU5L1: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.<init>()V */

Class xt_init__WU5L1[] = { 0 };

Void init__WU5L1(Object p0)
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

/*M getType__nnVPX: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__nnVPX[] = { 0 };

/*M apply_S_mJjTz: ca.mcgill.sable.soot.jimple.AbstractBinopExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_mJjTz[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_AbstractBinopExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'B','i','n','o','p','E','x','p','r'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractBinopExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractBinopExpr+45,	/* 0. ca.mcgill.sable.soot.jimple.AbstractBino */
    0};
