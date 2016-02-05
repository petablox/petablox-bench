/*  ca_mcgill_sable_soot_jimple_FlowUniverse.c -- from Java class ca.mcgill.sable.soot.jimple.FlowUniverse  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_FlowUniverse.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Integer.h"
#include "java_lang_RuntimeException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_FlowUniverse.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_RuntimeException.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_FlowUniverse[];
extern const void *st_ca_mcgill_sable_soot_jimple_FlowUniverse[];
extern Class xt_init_aO_ReLr9[];
extern Class xt_getSize__cxGnA[];
extern Class xt_getObjectOf_i_VjxwF[];
extern Class xt_getIndexOf_O_gysIe[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_FlowUniverse.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_FlowUniverse.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_FlowUniverse.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_FlowUniverse.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(40) nmchars = {&acl_char, 0, 40, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','w','U','n','i','v',
'e','r','s','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 40 };
static const Char nmiv_0[] = {
'i','n','d','e','x','T','o','O','b','j','e','c','t'};
static const Char sgiv_0[] = {
'[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';'};
static const Char nmiv_1[] = {
'o','b','j','e','c','t','T','o','I','n','d','e','x'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
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
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','S','i','z','e'};
static const Char sgim_13[] = {
'(',')','I'};
static const Char nmim_14[] = {
'g','e','t','O','b','j','e','c','t','O','f'};
static const Char sgim_14[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_15[] = {
'g','e','t','I','n','d','e','x','O','f'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','I'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_FlowUniverse, indexToObject), 0,(const Char *)&nmiv_0,13,(const Char *)&sgiv_0,19,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_FlowUniverse, objectToIndex), 0,(const Char *)&nmiv_1,13,(const Char *)&sgiv_1,26,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_FlowUniverse = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_FlowUniverse.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_FlowUniverse cl_ca_mcgill_sable_soot_jimple_FlowUniverse = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_FlowUniverse),
    16,
    0,
    2,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_FlowUniverse,
    st_ca_mcgill_sable_soot_jimple_FlowUniverse,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_FlowUniverse,
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
	{TMIT_native_code, init_aO_ReLr9,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,22,1,0x1,0,xt_init_aO_ReLr9},
	{TMIT_native_code, getSize__cxGnA,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x1,1,xt_getSize__cxGnA},
	{TMIT_native_code, getObjectOf_i_VjxwF,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,21,1,0x1,2,xt_getObjectOf_i_VjxwF},
	{TMIT_native_code, getIndexOf_O_gysIe,(const Char *)&nmim_15,10,
	(const Char *)&sgim_15,21,1,0x1,3,xt_getIndexOf_O_gysIe},
    } /* end of methodsigs */
};

static union fconst fc1 = { 0x3f333333 };

/*M init_aO_ReLr9: ca.mcgill.sable.soot.jimple.FlowUniverse.<init>([Ljava/lang/Object;)V */

Class xt_init_aO_ReLr9[] = { 0 };

Void init_aO_ReLr9(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
Int iv2;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct aarray*)a4)->length;
	i5 = 2;
	i4 = i4 * i5;
	i5 = 1;
	i4 = i4 + i5;
	f5 = fc1.v;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a3,i4,f5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->objectToIndex = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		clone__dslwm.f(a2);
	if ((a2 != 0) && !instanceof(a2,&cl_java_lang_Object.C,1))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->indexToObject = a2;
	i1 = 0;
	iv2 = i1;
	GOTO(36,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->objectToIndex;
	a2 = av1;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	a3 = new(&cl_java_lang_Integer.C);
	a4 = a3;
	i5 = iv2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a4,i5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(66,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getSize__cxGnA: ca.mcgill.sable.soot.jimple.FlowUniverse.getSize()I */

Class xt_getSize__cxGnA[] = { 0 };

Int getSize__cxGnA(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->indexToObject;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getObjectOf_i_VjxwF: ca.mcgill.sable.soot.jimple.FlowUniverse.getObjectOf(I)Ljava/lang/Object; */

Class xt_getObjectOf_i_VjxwF[] = { 0 };

Object getObjectOf_i_VjxwF(Object p0, Int p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->indexToObject;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getIndexOf_O_gysIe: ca.mcgill.sable.soot.jimple.FlowUniverse.getIndexOf(Ljava/lang/Object;)I */

Class xt_getIndexOf_O_gysIe[] = { 0 };

Int getIndexOf_O_gysIe(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->objectToIndex;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_java_lang_Integer.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(15,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FlowUniverse[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Integer*)a1)->class->M.
		intValue__e94pd.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_FlowUniverse[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','w','U','n','i','v',
'e','r','s','e','o','b','j','e','c','t',' ','n','o','t',' ','i','n',' ',
'u','n','i','v','e','r','s','e'};

const void *st_ca_mcgill_sable_soot_jimple_FlowUniverse[] = {
    ch_ca_mcgill_sable_soot_jimple_FlowUniverse+40,	/* 0. ca.mcgill.sable.soot.jimple.FlowUniverse */
    ch_ca_mcgill_sable_soot_jimple_FlowUniverse+62,	/* 1. object not in universe */
    0};
