/*  ca_mcgill_sable_soot_jimple_TypeResolver$1$RecursiveFunction.c -- from Java class ca.mcgill.sable.soot.jimple.TypeResolver$1$RecursiveFunction  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$1$RecursiveFunction.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$ConstraintCollector.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$SCC.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeException.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeVariable.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_h9ITA.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_TypeResolver.C,
    &cl_ca_mcgill_sable_soot_jimp_KfqdG.C,
    &cl_ca_mcgill_sable_soot_jimp_Hv6gk.C,
    &cl_ca_mcgill_sable_soot_jimp_VCk9q.C,
    &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_h9ITA[];
extern const void *st_ca_mcgill_sable_soot_jimp_h9ITA[];
extern Class xt_resolve__0UOLI[];
extern Class xt_init_aTaiT_dTy9u[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimp_h9ITA.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimp_h9ITA.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimp_h9ITA.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_h9ITA.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(60) nmchars = {&acl_char, 0, 60, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r','$','1','$','R','e','c','u','r','s','i','v','e','F','u',
'n','c','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 60 };
static const Char nmiv_0[] = {
'v','a','l','$','e','c','r','I','n','s','t','a','n','c','e','s'};
static const Char sgiv_0[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';'};
static const Char nmiv_1[] = {
't','h','i','s','$','0'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s',
'o','l','v','e','r',';'};
static const Char nmiv_2[] = {
'v','a','l','$','e','l','e','m','e','n','t','s'};
static const Char sgiv_2[] = {
'[','I'};
static const Char nmiv_3[] = {
'i','n','d','e','x'};
static const Char sgiv_3[] = {
'I'};
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
'r','e','s','o','l','v','e'};
static const Char sgim_12[] = {
'(',')','Z'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R',
'e','s','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b',
'l','e',';','[','I','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','T','y',
'p','e','R','e','s','o','l','v','e','r',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_h9ITA, valecrInstances_TBnO3), 0,(const Char *)&nmiv_0,16,(const Char *)&sgiv_0,56,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_h9ITA, this0_oYxUV), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,42,1,0x12,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_h9ITA, valelements_YIodM), 0,(const Char *)&nmiv_2,12,(const Char *)&sgiv_2,2,1,0x12,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_h9ITA, index), 0,(const Char *)&nmiv_3,5,(const Char *)&sgiv_3,1,1,0x0,3}, 
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
} inr_ca_mcgill_sable_soot_jimp_h9ITA = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_h9ITA.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_h9ITA cl_ca_mcgill_sable_soot_jimp_h9ITA = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_h9ITA),
    14,
    0,
    4,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_h9ITA,
    st_ca_mcgill_sable_soot_jimp_h9ITA,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_h9ITA,
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
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, resolve__0UOLI,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,3,1,0x1,0,xt_resolve__0UOLI},
	{TMIT_native_code, init_aTaiT_dTy9u,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,103,1,0x0,1,xt_init_aTaiT_dTy9u},
    } /* end of methodsigs */
};


/*M resolve__0UOLI: ca.mcgill.sable.soot.jimple.TypeResolver$1$RecursiveFunction.resolve()Z */

Class xt_resolve__0UOLI[] = { 0 };

Boolean resolve__0UOLI(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->index;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a2)->valelements_YIodM;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 != i2)
		GOTO(9,L1);
	i1 = 1;
	return i1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a2)->valelements_YIodM;
	a3 = av0;
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a4)->index;
	i5 = i4;
	a4 = a3;
	i3 = i5;
	i6 = 1;
	i5 = i5 + i6;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a4)->index = i5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
	GOTO(46,L5);

L2:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a2)->valecrInstances_TBnO3;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrTypeNode__nk5LZ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		setEcrTypeNode_C_5O4Ng.f(a1,a2);
	if (i1 == 0)
		GOTO(62,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->class->M.
		resolve__0UOLI.f(a1);
	if (i1 == 0)
		GOTO(69,L3);
	i1 = 1;
	return i1;

L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		unsetEcrTypeNode__UCiJs.f(a1);
L4:	iv2 += 1;
L5:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a2)->valecrInstances_TBnO3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(87,L2);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a2)->index;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->index = i2;
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_aTaiT_dTy9u: ca.mcgill.sable.soot.jimple.TypeResolver$1$RecursiveFunction.<init>([Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable;[ILca/mcgill/sable/soot/jimple/TypeResolver;)V */

Class xt_init_aTaiT_dTy9u[] = { 0 };

Void init_aTaiT_dTy9u(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->valecrInstances_TBnO3 = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->valelements_YIodM = a2;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->this0_oYxUV = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_h9ITA[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r','$','1','$','R','e','c','u','r','s','i','v','e','F','u',
'n','c','t','i','o','n'};

const void *st_ca_mcgill_sable_soot_jimp_h9ITA[] = {
    ch_ca_mcgill_sable_soot_jimp_h9ITA+60,	/* 0. ca.mcgill.sable.soot.jimple.TypeResolver */
    0};
