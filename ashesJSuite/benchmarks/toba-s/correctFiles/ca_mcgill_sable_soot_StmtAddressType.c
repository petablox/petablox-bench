/*  ca_mcgill_sable_soot_StmtAddressType.c -- from Java class ca.mcgill.sable.soot.StmtAddressType  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_StmtAddressType.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_TypeSwitch.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_StmtAddressType.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ValueObject.C,
    &cl_ca_mcgill_sable_util_Switchable.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_TypeSwitch.C,
};

extern const Char ch_ca_mcgill_sable_soot_StmtAddressType[];
extern const void *st_ca_mcgill_sable_soot_StmtAddressType[];
extern Class xt_init__t8r4j[];
extern Class xt_v__u8Teb[];
extern Class xt_equals_O_4X2ib[];
extern Class xt_hashCode__PPtlr[];
extern Class xt_toString__xJ2Zx[];
extern Class xt_apply_S_5Lino[];
extern Class xt_clinit__u50zF[];

#define HASHMASK 0x1
/*  0.  4c0d6fd2  (0)  clone  */
/*  1.  494d5bef  (1)  apply  */
static const struct ihash htable[3] = {
    1275949010, &cl_ca_mcgill_sable_soot_StmtAddressType.M.clone__dslwm,
    1229806575, &cl_ca_mcgill_sable_soot_StmtAddressType.M.apply_S_5Lino,
    0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','t','m','t','A','d','d','r','e','s','s','T','y','p','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
static const Char nmcv_0[] = {
'c','o','n','s','t','a','n','t'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','t','m','t','A','d','d','r','e','s','s','T','y','p',
'e',';'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','t','m','t','A','d','d','r','e','s','s','T',
'y','p','e',';'};
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
'm','e','r','g','e'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','S','o','o','t',
'C','l','a','s','s','M','a','n','a','g','e','r',';',')','L','c','a','/',
'm','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/',
'T','y','p','e',';'};
static const Char nmim_13[] = {
'a','p','p','l','y'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_StmtAddressType.V.constant,(const Char *)&nmcv_0,8,(const Char *)&sgcv_0,38,1,0x1a,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v__u8Teb,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,40,
	1,0x9,1,xt_v__u8Teb},
    {TMIT_native_code, (Void(*)())clinit__u50zF,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,6,xt_clinit__u50zF},
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
} inr_ca_mcgill_sable_soot_StmtAddressType = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_StmtAddressType.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_StmtAddressType cl_ca_mcgill_sable_soot_StmtAddressType = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_StmtAddressType),
    14,
    2,
    0,
    1,
    3, supers,
    2, 0, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_StmtAddressType,
    st_ca_mcgill_sable_soot_StmtAddressType,
    clinit__u50zF,
    init__t8r4j,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_StmtAddressType,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__t8r4j,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__t8r4j},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_4X2ib,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,2,xt_equals_O_4X2ib},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__PPtlr,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x1,3,xt_hashCode__PPtlr},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__xJ2Zx,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,4,xt_toString__xJ2Zx},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, merge_TS_yfmlv,(const Char *)&nmim_12,5,
	(const Char *)&sgim_12,95,0,0x1,2,0},
	{TMIT_native_code, apply_S_5Lino,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,32,1,0x8001,5,xt_apply_S_5Lino},
    } /* end of methodsigs */
};


/*M init__t8r4j: ca.mcgill.sable.soot.StmtAddressType.<init>()V */

Class xt_init__t8r4j[] = { 0 };

Void init__t8r4j(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__vh6sx(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M v__u8Teb: ca.mcgill.sable.soot.StmtAddressType.v()Lca/mcgill/sable/soot/StmtAddressType; */

Class xt_v__u8Teb[] = { 0 };

Object v__u8Teb(void)
{
Object a0, a1;
PROLOGUE;


	if (cl_ca_mcgill_sable_soot_StmtAddressType.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_StmtAddressType.C);

L0:	a1 = cl_ca_mcgill_sable_soot_StmtAddressType.V.constant;
	return a1;

	/*NOTREACHED*/
}

/*M equals_O_4X2ib: ca.mcgill.sable.soot.StmtAddressType.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_4X2ib[] = { 0 };

Boolean equals_O_4X2ib(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (a1 == a2)
		GOTO(2,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M hashCode__PPtlr: ca.mcgill.sable.soot.StmtAddressType.hashCode()I */

Class xt_hashCode__PPtlr[] = { 0 };

Int hashCode__PPtlr(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 1962109137;
	return i1;

	/*NOTREACHED*/
}

/*M toString__xJ2Zx: ca.mcgill.sable.soot.StmtAddressType.toString()Ljava/lang/String; */

Class xt_toString__xJ2Zx[] = { 0 };

Object toString__xJ2Zx(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_StmtAddressType[1];
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_5Lino: ca.mcgill.sable.soot.StmtAddressType.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_5Lino[] = { 0 };

Void apply_S_5Lino(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_TypeSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		caseStmtAddressType_S_6w2qx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__u50zF: ca.mcgill.sable.soot.StmtAddressType.<clinit>()V */

Class xt_clinit__u50zF[] = { 0 };

Void clinit__u50zF(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_StmtAddressType.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__t8r4j(a2);
	cl_ca_mcgill_sable_soot_StmtAddressType.V.constant = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_StmtAddressType[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','t','m','t','A','d','d','r','e','s','s','T','y','p','e',
'a','d','d','r','e','s','s'};

const void *st_ca_mcgill_sable_soot_StmtAddressType[] = {
    ch_ca_mcgill_sable_soot_StmtAddressType+36,	/* 0. ca.mcgill.sable.soot.StmtAddressType */
    ch_ca_mcgill_sable_soot_StmtAddressType+43,	/* 1. address */
    0};
