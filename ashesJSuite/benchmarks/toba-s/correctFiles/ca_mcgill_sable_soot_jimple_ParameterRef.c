/*  ca_mcgill_sable_soot_jimple_ParameterRef.c -- from Java class ca.mcgill.sable.soot.jimple.ParameterRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ParameterRef.h"
#include "ca_mcgill_sable_soot_jimple_IdentityRef.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_RefSwitch.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_ParameterRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_IdentityRef.C,
    &cl_ca_mcgill_sable_util_Switchable.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_ParameterRef[];
extern const void *st_ca_mcgill_sable_soot_jimple_ParameterRef[];
extern Class xt_init_Si_JrAiy[];
extern Class xt_toString__thUSP[];
extern Class xt_toBriefString__zMY8X[];
extern Class xt_getIndex__aQ2LB[];
extern Class xt_getMethod__hHsVu[];
extern Class xt_getUseBoxes__jEdTV[];
extern Class xt_getType__AEMPL[];
extern Class xt_apply_S_pZ3Oe[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_ParameterRef.M.getType__AEMPL,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_ParameterRef.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_ParameterRef.M.getUseBoxes__jEdTV,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_ParameterRef.M.toBriefString__zMY8X,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_ParameterRef.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_ParameterRef.M.apply_S_pZ3Oe,
    0, 0,
};

static const CARRAY(40) nmchars = {&acl_char, 0, 40, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','P','a','r','a','m','e','t','e',
'r','R','e','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 40 };
static const Char nmiv_0[] = {
'n'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'm','e','t','h','o','d'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
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
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','I',')',
'V'};
static const Char nmim_13[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
'g','e','t','I','n','d','e','x'};
static const Char sgim_14[] = {
'(',')','I'};
static const Char nmim_15[] = {
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmim_16[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_18[] = {
'a','p','p','l','y'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ParameterRef, n), 0,(const Char *)&nmiv_0,1,(const Char *)&sgiv_0,1,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ParameterRef, method), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,33,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_ParameterRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_ParameterRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_ParameterRef cl_ca_mcgill_sable_soot_jimple_ParameterRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_ParameterRef),
    19,
    0,
    2,
    0,
    2, supers,
    3, 3, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_ParameterRef,
    st_ca_mcgill_sable_soot_jimple_ParameterRef,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_ParameterRef,
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
	{TMIT_native_code, toString__thUSP,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,1,xt_toString__thUSP},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_Si_JrAiy,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,37,1,0x0,0,xt_init_Si_JrAiy},
	{TMIT_native_code, toBriefString__zMY8X,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,1,0x8001,2,xt_toBriefString__zMY8X},
	{TMIT_native_code, getIndex__aQ2LB,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,3,1,0x1,3,xt_getIndex__aQ2LB},
	{TMIT_native_code, getMethod__hHsVu,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,35,1,0x1,4,xt_getMethod__hHsVu},
	{TMIT_native_code, getUseBoxes__jEdTV,(const Char *)&nmim_16,11,
	(const Char *)&sgim_16,29,1,0x8001,5,xt_getUseBoxes__jEdTV},
	{TMIT_native_code, getType__AEMPL,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,29,1,0x8001,6,xt_getType__AEMPL},
	{TMIT_native_code, apply_S_pZ3Oe,(const Char *)&nmim_18,5,
	(const Char *)&sgim_18,32,1,0x8001,7,xt_apply_S_pZ3Oe},
    } /* end of methodsigs */
};


/*M init_Si_JrAiy: ca.mcgill.sable.soot.jimple.ParameterRef.<init>(Lca/mcgill/sable/soot/SootMethod;I)V */

Class xt_init_Si_JrAiy[] = { 0 };

Void init_Si_JrAiy(Object p0, Object p1, Int p2)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a1)->n = i2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a1)->method = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__thUSP: ca.mcgill.sable.soot.jimple.ParameterRef.toString()Ljava/lang/String; */

Class xt_toString__thUSP[] = { 0 };

Object toString__thUSP(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_ParameterRef[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a2)->n;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_i_ZQIqx.f(a1,i2);
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

/*M toBriefString__zMY8X: ca.mcgill.sable.soot.jimple.ParameterRef.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__zMY8X[] = { 0 };

Object toBriefString__zMY8X(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a1)->class->M.
		toString__thUSP.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getIndex__aQ2LB: ca.mcgill.sable.soot.jimple.ParameterRef.getIndex()I */

Class xt_getIndex__aQ2LB[] = { 0 };

Int getIndex__aQ2LB(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a1)->n;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethod__hHsVu: ca.mcgill.sable.soot.jimple.ParameterRef.getMethod()Lca/mcgill/sable/soot/SootMethod; */

Class xt_getMethod__hHsVu[] = { 0 };

Object getMethod__hHsVu(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a1)->method;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__jEdTV: ca.mcgill.sable.soot.jimple.ParameterRef.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__jEdTV[] = { 0 };

Object getUseBoxes__jEdTV(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	init_ca_mcgill_sable_soot_jimple_AbstractStmt();
	a1 = cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList;
	return a1;

	/*NOTREACHED*/
}

/*M getType__AEMPL: ca.mcgill.sable.soot.jimple.ParameterRef.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__AEMPL[] = { 0 };

Object getType__AEMPL(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a1)->method;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ParameterRef*)a2)->n;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getParameterType_i_cz4Pq.f(a1,i2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_pZ3Oe: ca.mcgill.sable.soot.jimple.ParameterRef.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_pZ3Oe[] = { 0 };

Void apply_S_pZ3Oe(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1217912210)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_ParameterRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','P','a','r','a','m','e','t','e',
'r','R','e','f','@','p','a','r','a','m','e','t','e','r'};

const void *st_ca_mcgill_sable_soot_jimple_ParameterRef[] = {
    ch_ca_mcgill_sable_soot_jimple_ParameterRef+40,	/* 0. ca.mcgill.sable.soot.jimple.ParameterRef */
    ch_ca_mcgill_sable_soot_jimple_ParameterRef+50,	/* 1. @parameter */
    0};
