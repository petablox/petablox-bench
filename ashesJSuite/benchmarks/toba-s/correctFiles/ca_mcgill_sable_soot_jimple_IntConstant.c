/*  ca_mcgill_sable_soot_jimple_IntConstant.c -- from Java class ca.mcgill.sable.soot.jimple.IntConstant  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_IntConstant.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_jimple_Constant.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_jimple_ConstantSwitch.h"
#include "java_lang_Integer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
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
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_jimple_ConstantSwitch.C,
    &cl_java_lang_Integer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_IntConstant[];
extern const void *st_ca_mcgill_sable_soot_jimple_IntConstant[];
extern Class xt_init_i_7Knzh[];
extern Class xt_v_i_P1Dgu[];
extern Class xt_equals_C_c2zUX[];
extern Class xt_toString__QiXHm[];
extern Class xt_toBriefString__ilnsV[];
extern Class xt_getType__vRTiX[];
extern Class xt_apply_S_8sLwX[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_IntConstant.M.getType__vRTiX,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_IntConstant.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_IntConstant.M.getUseBoxes__FSwIo,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_IntConstant.M.toBriefString__ilnsV,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_IntConstant.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_IntConstant.M.apply_S_8sLwX,
    0, 0,
};

static const CARRAY(39) nmchars = {&acl_char, 0, 39, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','I','n','t','C','o','n','s','t',
'a','n','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 39 };
static const Char nmiv_0[] = {
'v','a','l','u','e'};
static const Char sgiv_0[] = {
'I'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','I','n','t','C',
'o','n','s','t','a','n','t',';'};
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
'(','I',')','V'};
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
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_IntConstant, value), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,1,1,0x11,0}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v_i_P1Dgu,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,44,
	1,0x9,1,xt_v_i_P1Dgu},
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
} inr_ca_mcgill_sable_soot_jimple_IntConstant = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_IntConstant.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_IntConstant cl_ca_mcgill_sable_soot_jimple_IntConstant = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_IntConstant),
    18,
    1,
    1,
    0,
    3, supers,
    4, 2, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_IntConstant,
    st_ca_mcgill_sable_soot_jimple_IntConstant,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_IntConstant,
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
	{TMIT_native_code, toString__QiXHm,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__QiXHm},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, equals_C_c2zUX,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,41,1,0x1,2,xt_equals_C_c2zUX},
	{TMIT_native_code, getUseBoxes__FSwIo,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,0,0x8001,1,0},
	{TMIT_native_code, getType__vRTiX,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,29,1,0x8001,5,xt_getType__vRTiX},
	{TMIT_native_code, apply_S_8sLwX,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,32,1,0x8001,6,xt_apply_S_8sLwX},
	{TMIT_native_code, init_i_7Knzh,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,4,1,0x2,0,xt_init_i_7Knzh},
	{TMIT_native_code, toBriefString__ilnsV,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,20,1,0x8001,4,xt_toBriefString__ilnsV},
    } /* end of methodsigs */
};


/*M init_i_7Knzh: ca.mcgill.sable.soot.jimple.IntConstant.<init>(I)V */

Class xt_init_i_7Knzh[] = { 0 };

Void init_i_7Knzh(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__JvdpB(a1);
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M v_i_P1Dgu: ca.mcgill.sable.soot.jimple.IntConstant.v(I)Lca/mcgill/sable/soot/jimple/IntConstant; */

Class xt_v_i_P1Dgu[] = { 0 };

Object v_i_P1Dgu(Int p1)
{
Object a0, a1, a2, a3;
Int i0, i1, i2, i3;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_IntConstant.C);
	a2 = a1;
	i3 = iv0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_i_7Knzh(a2,i3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_C_c2zUX: ca.mcgill.sable.soot.jimple.IntConstant.equals(Lca/mcgill/sable/soot/jimple/Constant;)Z */

Class xt_equals_C_c2zUX[] = { 0 };

Boolean equals_C_c2zUX(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IntConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->value;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a2)->value;
	if (i1 == i2)
		GOTO(18,L2);
L1:	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__QiXHm: ca.mcgill.sable.soot.jimple.IntConstant.toString()Ljava/lang/String; */

Class xt_toString__QiXHm[] = { 0 };

Object toString__QiXHm(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_Integer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a3)->value;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Integer*)a1)->class->M.
		toString__bvwIN.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__ilnsV: ca.mcgill.sable.soot.jimple.IntConstant.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__ilnsV[] = { 0 };

Object toBriefString__ilnsV(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_IntConstant*)a1)->class->M.
		toString__QiXHm.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__vRTiX: ca.mcgill.sable.soot.jimple.IntConstant.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__vRTiX[] = { 0 };

Object getType__vRTiX(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__GKSua();
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_8sLwX: ca.mcgill.sable.soot.jimple.IntConstant.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_8sLwX[] = { 0 };

Void apply_S_8sLwX(Object p0, Object p1)
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
	(*(Void(*)())findinterface(a1,866670696)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_IntConstant[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','I','n','t','C','o','n','s','t',
'a','n','t'};

const void *st_ca_mcgill_sable_soot_jimple_IntConstant[] = {
    ch_ca_mcgill_sable_soot_jimple_IntConstant+39,	/* 0. ca.mcgill.sable.soot.jimple.IntConstant */
    0};
