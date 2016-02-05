/*  ca_mcgill_sable_soot_jimple_DoubleConstant.c -- from Java class ca.mcgill.sable.soot.jimple.DoubleConstant  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_DoubleConstant.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_jimple_Constant.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_DoubleType.h"
#include "ca_mcgill_sable_soot_jimple_ConstantSwitch.h"
#include "java_lang_Double.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
    &cl_ca_mcgill_sable_soot_jimple_Constant.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Switchable.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_util_ValueObject.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_DoubleType.C,
    &cl_ca_mcgill_sable_soot_jimple_ConstantSwitch.C,
    &cl_java_lang_Double.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_DoubleConstant[];
extern const void *st_ca_mcgill_sable_soot_jimple_DoubleConstant[];
extern Class xt_init_d_A2BeX[];
extern Class xt_v_d_olaKu[];
extern Class xt_equals_C_qS4mV[];
extern Class xt_toString__8zN4v[];
extern Class xt_toBriefString__iU5Sr[];
extern Class xt_getType__1lBYP[];
extern Class xt_apply_S_432HR[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.M.getType__1lBYP,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.M.getUseBoxes__FSwIo,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.M.toBriefString__iU5Sr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.M.apply_S_432HR,
    0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','D','o','u','b','l','e','C','o',
'n','s','t','a','n','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmiv_0[] = {
'v','a','l','u','e'};
static const Char sgiv_0[] = {
'D'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(','D',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','D','o','u','b',
'l','e','C','o','n','s','t','a','n','t',';'};
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
'e','q','u','a','l','s'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','o','n','s','t','a',
'n','t',';',')','Z'};
static const Char nmim_13[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_14[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_15[] = {
'a','p','p','l','y'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};
static const Char nmim_16[] = {
'<','i','n','i','t','>'};
static const Char sgim_16[] = {
'(','D',')','V'};
static const Char nmim_17[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_17[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_DoubleConstant, value), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,1,1,0x11,0}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v_d_olaKu,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,47,
	1,0x9,1,xt_v_d_olaKu},
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
} inr_ca_mcgill_sable_soot_jimple_DoubleConstant = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_DoubleConstant cl_ca_mcgill_sable_soot_jimple_DoubleConstant = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_DoubleConstant),
    18,
    1,
    1,
    0,
    3, supers,
    4, 2, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_DoubleConstant,
    st_ca_mcgill_sable_soot_jimple_DoubleConstant,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_DoubleConstant,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__JvdpB,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,2,0},
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
	{TMIT_native_code, toString__8zN4v,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__8zN4v},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, equals_C_qS4mV,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,41,1,0x1,2,xt_equals_C_qS4mV},
	{TMIT_native_code, getUseBoxes__FSwIo,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,0,0x8001,1,0},
	{TMIT_native_code, getType__1lBYP,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,29,1,0x8001,5,xt_getType__1lBYP},
	{TMIT_native_code, apply_S_432HR,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,32,1,0x8001,6,xt_apply_S_432HR},
	{TMIT_native_code, init_d_A2BeX,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,4,1,0x2,0,xt_init_d_A2BeX},
	{TMIT_native_code, toBriefString__iU5Sr,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,20,1,0x8001,4,xt_toBriefString__iU5Sr},
    } /* end of methodsigs */
};


/*M init_d_A2BeX: ca.mcgill.sable.soot.jimple.DoubleConstant.<init>(D)V */

Class xt_init_d_A2BeX[] = { 0 };

Void init_d_A2BeX(Object p0, Double p1)
{
Object a0, a1, a2, a3;
Object av0;
Double d0, d1, d2, d3;
Double dv1;
PROLOGUE;

	av0 = p0;
	dv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__JvdpB(a1);
	a1 = av0;
	d3 = dv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a1)->value = d3;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M v_d_olaKu: ca.mcgill.sable.soot.jimple.DoubleConstant.v(D)Lca/mcgill/sable/soot/jimple/DoubleConstant; */

Class xt_v_d_olaKu[] = { 0 };

Object v_d_olaKu(Double p1)
{
Object a0, a1, a2, a3, a4;
Double d0, d1, d2, d3, d4;
Double dv0;
PROLOGUE;

	dv0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C);
	a2 = a1;
	d4 = dv0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_d_A2BeX(a2,d4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_C_qS4mV: ca.mcgill.sable.soot.jimple.DoubleConstant.equals(Lca/mcgill/sable/soot/jimple/Constant;)Z */

Class xt_equals_C_qS4mV[] = { 0 };

Boolean equals_C_qS4mV(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Double d0, d1, d2, d3, d4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DoubleConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	d2 = ((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a1)->value;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	d4 = ((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a3)->value;
	i1 = (d2 > d4) ? 1 : ((d2 == d4) ? 0 : -1);
	if (i1 == 0)
		GOTO(19,L2);
L1:	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__8zN4v: ca.mcgill.sable.soot.jimple.DoubleConstant.toString()Ljava/lang/String; */

Class xt_toString__8zN4v[] = { 0 };

Object toString__8zN4v(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
Double d0, d1, d2, d3, d4;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_Double.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	d4 = ((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a3)->value;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_d_aASAU(a2,d4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Double*)a1)->class->M.
		toString__YWrdx.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__iU5Sr: ca.mcgill.sable.soot.jimple.DoubleConstant.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__iU5Sr[] = { 0 };

Object toBriefString__iU5Sr(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_DoubleConstant*)a1)->class->M.
		toString__8zN4v.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__1lBYP: ca.mcgill.sable.soot.jimple.DoubleConstant.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__1lBYP[] = { 0 };

Object getType__1lBYP(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__idXk2();
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_432HR: ca.mcgill.sable.soot.jimple.DoubleConstant.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_432HR[] = { 0 };

Void apply_S_432HR(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ConstantSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,922746776)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_DoubleConstant[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','D','o','u','b','l','e','C','o',
'n','s','t','a','n','t'};

const void *st_ca_mcgill_sable_soot_jimple_DoubleConstant[] = {
    ch_ca_mcgill_sable_soot_jimple_DoubleConstant+42,	/* 0. ca.mcgill.sable.soot.jimple.DoubleConsta */
    0};
