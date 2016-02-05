/*  ca_mcgill_sable_soot_jimple_FloatConstant.c -- from Java class ca.mcgill.sable.soot.jimple.FloatConstant  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_FloatConstant.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_jimple_Constant.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_FloatType.h"
#include "ca_mcgill_sable_soot_jimple_ConstantSwitch.h"
#include "java_lang_Float.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
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
    &cl_ca_mcgill_sable_soot_FloatType.C,
    &cl_ca_mcgill_sable_soot_jimple_ConstantSwitch.C,
    &cl_java_lang_Float.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_FloatConstant[];
extern const void *st_ca_mcgill_sable_soot_jimple_FloatConstant[];
extern Class xt_init_f_VqQQm[];
extern Class xt_v_f_WO8CF[];
extern Class xt_equals_C_da4aw[];
extern Class xt_toString__Boynj[];
extern Class xt_toBriefString__pcdfH[];
extern Class xt_getType__6Kvxk[];
extern Class xt_apply_S_fDZaM[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_FloatConstant.M.getType__6Kvxk,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_FloatConstant.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_FloatConstant.M.getUseBoxes__FSwIo,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_FloatConstant.M.toBriefString__pcdfH,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_FloatConstant.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_FloatConstant.M.apply_S_fDZaM,
    0, 0,
};

static const CARRAY(41) nmchars = {&acl_char, 0, 41, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','a','t','C','o','n',
's','t','a','n','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 41 };
static const Char nmiv_0[] = {
'v','a','l','u','e'};
static const Char sgiv_0[] = {
'F'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(','F',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','a',
't','C','o','n','s','t','a','n','t',';'};
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
'(','F',')','V'};
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
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_FloatConstant, value), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,1,1,0x11,0}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v_f_WO8CF,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,46,
	1,0x9,1,xt_v_f_WO8CF},
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
} inr_ca_mcgill_sable_soot_jimple_FloatConstant = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_FloatConstant cl_ca_mcgill_sable_soot_jimple_FloatConstant = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_FloatConstant),
    18,
    1,
    1,
    0,
    3, supers,
    4, 2, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_FloatConstant,
    st_ca_mcgill_sable_soot_jimple_FloatConstant,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_FloatConstant,
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
	{TMIT_native_code, toString__Boynj,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__Boynj},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, equals_C_da4aw,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,41,1,0x1,2,xt_equals_C_da4aw},
	{TMIT_native_code, getUseBoxes__FSwIo,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,0,0x8001,1,0},
	{TMIT_native_code, getType__6Kvxk,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,29,1,0x8001,5,xt_getType__6Kvxk},
	{TMIT_native_code, apply_S_fDZaM,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,32,1,0x8001,6,xt_apply_S_fDZaM},
	{TMIT_native_code, init_f_VqQQm,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,4,1,0x2,0,xt_init_f_VqQQm},
	{TMIT_native_code, toBriefString__pcdfH,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,20,1,0x8001,4,xt_toBriefString__pcdfH},
    } /* end of methodsigs */
};


/*M init_f_VqQQm: ca.mcgill.sable.soot.jimple.FloatConstant.<init>(F)V */

Class xt_init_f_VqQQm[] = { 0 };

Void init_f_VqQQm(Object p0, Float p1)
{
Object a0, a1, a2;
Object av0;
Float f0, f1, f2;
Float fv1;
PROLOGUE;

	av0 = p0;
	fv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__JvdpB(a1);
	a1 = av0;
	f2 = fv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a1)->value = f2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M v_f_WO8CF: ca.mcgill.sable.soot.jimple.FloatConstant.v(F)Lca/mcgill/sable/soot/jimple/FloatConstant; */

Class xt_v_f_WO8CF[] = { 0 };

Object v_f_WO8CF(Float p1)
{
Object a0, a1, a2, a3;
Float f0, f1, f2, f3;
Float fv0;
PROLOGUE;

	fv0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_FloatConstant.C);
	a2 = a1;
	f3 = fv0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_f_VqQQm(a2,f3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_C_da4aw: ca.mcgill.sable.soot.jimple.FloatConstant.equals(Lca/mcgill/sable/soot/jimple/Constant;)Z */

Class xt_equals_C_da4aw[] = { 0 };

Boolean equals_C_da4aw(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
Float f0, f1, f2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FloatConstant.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	f1 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a1)->value;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	f2 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a2)->value;
	i1 = (f1 > f2) ? 1 : ((f1 == f2) ? 0 : -1);
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

/*M toString__Boynj: ca.mcgill.sable.soot.jimple.FloatConstant.toString()Ljava/lang/String; */

Class xt_toString__Boynj[] = { 0 };

Object toString__Boynj(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = new(&cl_java_lang_Float.C);
	a4 = a3;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	f5 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a5)->value;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_f_Bhtg5(a4,f5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Float*)a3)->class->M.
		toString__HCmmM.f(a3);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_FloatConstant[1];
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

/*M toBriefString__pcdfH: ca.mcgill.sable.soot.jimple.FloatConstant.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__pcdfH[] = { 0 };

Object toBriefString__pcdfH(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FloatConstant*)a1)->class->M.
		toString__Boynj.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__6Kvxk: ca.mcgill.sable.soot.jimple.FloatConstant.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__6Kvxk[] = { 0 };

Object getType__6Kvxk(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__m4rGl();
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_fDZaM: ca.mcgill.sable.soot.jimple.FloatConstant.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_fDZaM[] = { 0 };

Void apply_S_fDZaM(Object p0, Object p1)
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
	(*(Void(*)())findinterface(a1,1538883638)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_FloatConstant[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','a','t','C','o','n',
's','t','a','n','t','F'};

const void *st_ca_mcgill_sable_soot_jimple_FloatConstant[] = {
    ch_ca_mcgill_sable_soot_jimple_FloatConstant+41,	/* 0. ca.mcgill.sable.soot.jimple.FloatConstan */
    ch_ca_mcgill_sable_soot_jimple_FloatConstant+42,	/* 1. F */
    0};
