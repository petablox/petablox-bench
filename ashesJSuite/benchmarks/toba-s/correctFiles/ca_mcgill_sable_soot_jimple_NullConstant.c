/*  ca_mcgill_sable_soot_jimple_NullConstant.c -- from Java class ca.mcgill.sable.soot.jimple.NullConstant  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_NullConstant.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_jimple_Constant.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_NullType.h"
#include "ca_mcgill_sable_soot_jimple_ConstantSwitch.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_NullConstant.C,
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
    &cl_ca_mcgill_sable_soot_NullType.C,
    &cl_ca_mcgill_sable_soot_jimple_ConstantSwitch.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_NullConstant[];
extern const void *st_ca_mcgill_sable_soot_jimple_NullConstant[];
extern Class xt_init__KsGxj[];
extern Class xt_v__iH4fa[];
extern Class xt_equals_C_wUkzw[];
extern Class xt_toString__sy4o5[];
extern Class xt_toBriefString__2nzdD[];
extern Class xt_getType__xay4E[];
extern Class xt_apply_S_GBUUd[];
extern Class xt_clinit__xUMbu[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_NullConstant.M.getType__xay4E,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_NullConstant.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_NullConstant.M.getUseBoxes__FSwIo,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_NullConstant.M.toBriefString__2nzdD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_NullConstant.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_NullConstant.M.apply_S_GBUUd,
    0, 0,
};

static const CARRAY(40) nmchars = {&acl_char, 0, 40, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','u','l','l','C','o','n','s',
't','a','n','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 40 };
static const Char nmcv_0[] = {
'c','o','n','s','t','a','n','t'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','N','u','l','l','C','o','n',
's','t','a','n','t',';'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','N','u','l','l','C',
'o','n','s','t','a','n','t',';'};
static const Char nmsm_1[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_1[] = {
'(',')','V'};
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
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_16[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_NullConstant.V.constant,(const Char *)&nmcv_0,8,(const Char *)&sgcv_0,42,1,0x1a,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v__iH4fa,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,44,
	1,0x9,1,xt_v__iH4fa},
    {TMIT_native_code, (Void(*)())clinit__xUMbu,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,7,xt_clinit__xUMbu},
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
} inr_ca_mcgill_sable_soot_jimple_NullConstant = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_NullConstant.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_NullConstant cl_ca_mcgill_sable_soot_jimple_NullConstant = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_NullConstant),
    17,
    2,
    0,
    1,
    3, supers,
    4, 2, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_NullConstant,
    st_ca_mcgill_sable_soot_jimple_NullConstant,
    clinit__xUMbu,
    init__KsGxj,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_NullConstant,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__KsGxj,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__KsGxj},
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
	{TMIT_native_code, toString__sy4o5,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__sy4o5},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, equals_C_wUkzw,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,41,1,0x1,2,xt_equals_C_wUkzw},
	{TMIT_native_code, getUseBoxes__FSwIo,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,0,0x8001,1,0},
	{TMIT_native_code, getType__xay4E,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,29,1,0x8001,5,xt_getType__xay4E},
	{TMIT_native_code, apply_S_GBUUd,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,32,1,0x8001,6,xt_apply_S_GBUUd},
	{TMIT_native_code, toBriefString__2nzdD,(const Char *)&nmim_16,13,
	(const Char *)&sgim_16,20,1,0x8001,4,xt_toBriefString__2nzdD},
    } /* end of methodsigs */
};


/*M init__KsGxj: ca.mcgill.sable.soot.jimple.NullConstant.<init>()V */

Class xt_init__KsGxj[] = { 0 };

Void init__KsGxj(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__JvdpB(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M v__iH4fa: ca.mcgill.sable.soot.jimple.NullConstant.v()Lca/mcgill/sable/soot/jimple/NullConstant; */

Class xt_v__iH4fa[] = { 0 };

Object v__iH4fa(void)
{
Object a0, a1;
PROLOGUE;


	if (cl_ca_mcgill_sable_soot_jimple_NullConstant.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_NullConstant.C);

L0:	a1 = cl_ca_mcgill_sable_soot_jimple_NullConstant.V.constant;
	return a1;

	/*NOTREACHED*/
}

/*M equals_C_wUkzw: ca.mcgill.sable.soot.jimple.NullConstant.equals(Lca/mcgill/sable/soot/jimple/Constant;)Z */

Class xt_equals_C_wUkzw[] = { 0 };

Boolean equals_C_wUkzw(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = cl_ca_mcgill_sable_soot_jimple_NullConstant.V.constant;
	if (a1 == a2)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M toString__sy4o5: ca.mcgill.sable.soot.jimple.NullConstant.toString()Ljava/lang/String; */

Class xt_toString__sy4o5[] = { 0 };

Object toString__sy4o5(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_jimple_NullConstant[1];
	return a1;

	/*NOTREACHED*/
}

/*M toBriefString__2nzdD: ca.mcgill.sable.soot.jimple.NullConstant.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__2nzdD[] = { 0 };

Object toBriefString__2nzdD(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_NullConstant*)a1)->class->M.
		toString__sy4o5.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__xay4E: ca.mcgill.sable.soot.jimple.NullConstant.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__xay4E[] = { 0 };

Object getType__xay4E(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__Yx4Fv();
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_GBUUd: ca.mcgill.sable.soot.jimple.NullConstant.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_GBUUd[] = { 0 };

Void apply_S_GBUUd(Object p0, Object p1)
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
	(*(Void(*)())findinterface(a1,-1439590372)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__xUMbu: ca.mcgill.sable.soot.jimple.NullConstant.<clinit>()V */

Class xt_clinit__xUMbu[] = { 0 };

Void clinit__xUMbu(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_NullConstant.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__KsGxj(a2);
	cl_ca_mcgill_sable_soot_jimple_NullConstant.V.constant = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_NullConstant[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','u','l','l','C','o','n','s',
't','a','n','t','n','u','l','l'};

const void *st_ca_mcgill_sable_soot_jimple_NullConstant[] = {
    ch_ca_mcgill_sable_soot_jimple_NullConstant+40,	/* 0. ca.mcgill.sable.soot.jimple.NullConstant */
    ch_ca_mcgill_sable_soot_jimple_NullConstant+44,	/* 1. null */
    0};
