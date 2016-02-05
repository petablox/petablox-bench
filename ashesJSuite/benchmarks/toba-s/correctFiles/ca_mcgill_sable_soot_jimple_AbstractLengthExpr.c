/*  ca_mcgill_sable_soot_jimple_AbstractLengthExpr.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractLengthExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractLengthExpr.h"
#include "ca_mcgill_sable_soot_jimple_LengthExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractUnopExpr.h"
#include "ca_mcgill_sable_soot_jimple_UnopExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractUnopExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_LengthExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_UnopExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractLengthExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractLengthExpr[];
extern Class xt_init_V_L9Fel[];
extern Class xt_toString__eWnDK[];
extern Class xt_toBriefString__w9Uqw[];
extern Class xt_getType__hp7zG[];
extern Class xt_apply_S_68Ekx[];

#define HASHMASK 0x1f
/*  0.  c1d26da0  (0)  getOp  */
/*  1.  8942e761  (1)  hashCode  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
/*  10.  6d3e3310  (10)  getType  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  16.  62b17c16  (16)  setOp  */
/*  17.  9e646537  (17)  toBriefString  */
/*  1e.  667dba9e  (1e)  getOpBox  */
static const struct ihash htable[32] = {
    -1043173984, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.getOp__fOzXW,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.apply_S_68Ekx,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.getType__hp7zG,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.getUseBoxes__2OXTd,
    0, 0, 0, 0,
    1655798806, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.setOp_V_jrV47,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.toBriefString__w9Uqw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1719515806, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.M.getOpBox__NqxVh,
    0, 0,
};

static const CARRAY(46) nmchars = {&acl_char, 0, 46, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'L','e','n','g','t','h','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 46 };
static const Char nmiv_0[] = {
'o','p','B','o','x'};
static const Char sgiv_0[] = {
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
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','O','p'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_14[] = {
's','e','t','O','p'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_15[] = {
'g','e','t','O','p','B','o','x'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_16[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_17[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_18[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_19[] = {
'a','p','p','l','y'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractLengthExpr, opBox), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,38,0,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractLengthExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr cl_ca_mcgill_sable_soot_jimple_AbstractLengthExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractLengthExpr),
    20,
    0,
    1,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractLengthExpr,
    st_ca_mcgill_sable_soot_jimple_AbstractLengthExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractLengthExpr,
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
	{TMIT_native_code, toString__eWnDK,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,1,xt_toString__eWnDK},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_V_L9Fel,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,41,1,0x4,0,xt_init_V_L9Fel},
	{TMIT_native_code, getOp__fOzXW,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,37,0,0x8001,1,0},
	{TMIT_native_code, setOp_V_jrV47,(const Char *)&nmim_14,5,
	(const Char *)&sgim_14,38,0,0x8001,2,0},
	{TMIT_native_code, getOpBox__NqxVh,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,40,0,0x8001,3,0},
	{TMIT_native_code, getUseBoxes__2OXTd,(const Char *)&nmim_16,11,
	(const Char *)&sgim_16,29,0,0x8001,4,0},
	{TMIT_native_code, toBriefString__w9Uqw,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,20,1,0x8001,2,xt_toBriefString__w9Uqw},
	{TMIT_native_code, getType__hp7zG,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,29,1,0x8001,3,xt_getType__hp7zG},
	{TMIT_native_code, apply_S_68Ekx,(const Char *)&nmim_19,5,
	(const Char *)&sgim_19,32,1,0x8001,4,xt_apply_S_68Ekx},
    } /* end of methodsigs */
};


/*M init_V_L9Fel: ca.mcgill.sable.soot.jimple.AbstractLengthExpr.<init>(Lca/mcgill/sable/soot/jimple/ValueBox;)V */

Class xt_init_V_L9Fel[] = { 0 };

Void init_V_L9Fel(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_V_TL9UA(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__eWnDK: ca.mcgill.sable.soot.jimple.AbstractLengthExpr.toString()Ljava/lang/String; */

Class xt_toString__eWnDK[] = { 0 };

Object toString__eWnDK(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractLengthExpr[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractUnopExpr*)a2)->opBox;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-890495682)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		toString__4d9OF.f(a2);
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

/*M toBriefString__w9Uqw: ca.mcgill.sable.soot.jimple.AbstractLengthExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__w9Uqw[] = { 0 };

Object toBriefString__w9Uqw(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractUnopExpr*)a3)->opBox;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-890495682)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1637587657)->f)(a3);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractLengthExpr[2];
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

/*M getType__hp7zG: ca.mcgill.sable.soot.jimple.AbstractLengthExpr.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__hp7zG[] = { 0 };

Object getType__hp7zG(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__GKSua();
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_68Ekx: ca.mcgill.sable.soot.jimple.AbstractLengthExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_68Ekx[] = { 0 };

Void apply_S_68Ekx(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,193601892)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractLengthExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'L','e','n','g','t','h','E','x','p','r','l','e','n','g','t','h','o','f',
' ','.','l','e','n','g','t','h'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractLengthExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractLengthExpr+46,	/* 0. ca.mcgill.sable.soot.jimple.AbstractLeng */
    ch_ca_mcgill_sable_soot_jimple_AbstractLengthExpr+55,	/* 1. lengthof  */
    ch_ca_mcgill_sable_soot_jimple_AbstractLengthExpr+62,	/* 2. .length */
    0};
