/*  ca_mcgill_sable_util_AbstractMap$AbstractEntry.c -- from Java class ca.mcgill.sable.util.AbstractMap$AbstractEntry  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_AbstractMap$AbstractEntry.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_AbstractMap.h"
#include "ca_mcgill_sable_util_AbstractMap$KeyIterator.h"
#include "ca_mcgill_sable_util_AbstractMap$KeySet.h"
#include "ca_mcgill_sable_util_AbstractMap$ValueCollection.h"
#include "ca_mcgill_sable_util_AbstractMap$ValueIterator.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_ClassCastException.h"
#include "java_lang_IllegalArgumentException.h"
#include "java_lang_NullPointerException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Abst_FQuSs.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_AbstractMap.C,
    &cl_ca_mcgill_sable_util_Abst_mqF0a.C,
    &cl_ca_mcgill_sable_util_Abst_QyiRw.C,
    &cl_ca_mcgill_sable_util_Abst_KrD52.C,
    &cl_ca_mcgill_sable_util_Abst_Qbx2w.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_ClassCastException.C,
    &cl_java_lang_IllegalArgumentException.C,
    &cl_java_lang_NullPointerException.C,
};

extern const Char ch_ca_mcgill_sable_util_Abst_FQuSs[];
extern const void *st_ca_mcgill_sable_util_Abst_FQuSs[];
extern Class xt_equals_O_pR9rc[];
extern Class xt_hashCode__mOf3l[];
extern Class xt_init__WCwLg[];
extern Class xt_getKey__hjQlb[];
extern Class xt_getValue__3Av73[];
extern Class xt_setValue_O_J1MxN[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  2.  e1b631a2  (2)  setValue  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
/*  12.  4c0d6fd2  (12)  clone  */
/*  16.  b25b196  (16)  getValue  */
/*  1a.  6f566dfa  (1a)  getKey  */
static const struct ihash htable[32] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_Abst_FQuSs.M.hashCode__mOf3l,
    -508153438, &cl_ca_mcgill_sable_util_Abst_FQuSs.M.setValue_O_J1MxN,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Abst_FQuSs.M.equals_O_pR9rc,
    1218416239, &cl_ca_mcgill_sable_util_Abst_FQuSs.M.toString__4d9OF,
    0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Abst_FQuSs.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    187019670, &cl_ca_mcgill_sable_util_Abst_FQuSs.M.getValue__3Av73, 0, 0,
    0, 0, 0, 0,
    1867935226, &cl_ca_mcgill_sable_util_Abst_FQuSs.M.getKey__hjQlb, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(46) nmchars = {&acl_char, 0, 46, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','M','a','p','$','A','b','s',
't','r','a','c','t','E','n','t','r','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 46 };
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
'g','e','t','K','e','y'};
static const Char sgim_12[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_13[] = {
'g','e','t','V','a','l','u','e'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
's','e','t','V','a','l','u','e'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
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
} inr_ca_mcgill_sable_util_Abst_FQuSs = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Abst_FQuSs.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Abst_FQuSs cl_ca_mcgill_sable_util_Abst_FQuSs = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Abst_FQuSs),
    15,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_util_Abst_FQuSs,
    st_ca_mcgill_sable_util_Abst_FQuSs,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Abst_FQuSs,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__WCwLg,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,2,xt_init__WCwLg},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_pR9rc,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x8001,0,xt_equals_O_pR9rc},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__mOf3l,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x8001,1,xt_hashCode__mOf3l},
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,20,1,0x8401,3,xt_getKey__hjQlb},
	{TMIT_abstract, 0,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,20,1,0x8401,4,xt_getValue__3Av73},
	{TMIT_abstract, 0,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,38,1,0x8401,5,xt_setValue_O_J1MxN},
    } /* end of methodsigs */
};


/*M equals_O_pR9rc: ca.mcgill.sable.util.AbstractMap$AbstractEntry.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_pR9rc[] = { 0 };

Boolean equals_O_pR9rc(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (a1 != a2)
		GOTO(2,L1);
	i1 = 1;
	return i1;

L1:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(11,L2);
	i1 = 0;
	return i1;

L2:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_FQuSs*)a1)->class->M.
		getKey__hjQlb.f(a1);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_FQuSs*)a1)->class->M.
		getValue__3Av73.f(a1);
	av4 = a1;
	a1 = av3;
	if (a1 != 0)
		GOTO(33,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if (a1 == 0)
		GOTO(42,L5);
	i1 = 0;
	GOTO(46,L4);

L3:	a1 = av3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1867935226)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L4:	if (i1 == 0)
		GOTO(59,L9);
L5:	a1 = av4;
	if (a1 != 0)
		GOTO(64,L6);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,187019670)->f)(a1);
	if (a1 == 0)
		GOTO(73,L8);
	i1 = 0;
	GOTO(77,L7);

L6:	a1 = av4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,187019670)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L7:	if (i1 == 0)
		GOTO(91,L9);
L8:	i1 = 1;
	return i1;

L9:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__mOf3l: ca.mcgill.sable.util.AbstractMap$AbstractEntry.hashCode()I */

Class xt_hashCode__mOf3l[] = { 0 };

Int hashCode__mOf3l(Object p0)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_FQuSs*)a1)->class->M.
		getKey__hjQlb.f(a1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_FQuSs*)a1)->class->M.
		getValue__3Av73.f(a1);
	av2 = a1;
	a1 = av1;
	if (a1 != 0)
		GOTO(11,L1);
	i1 = 0;
	GOTO(15,L2);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		hashCode__8wJNW.f(a1);
L2:	a2 = av2;
	if (a2 != 0)
		GOTO(23,L3);
	i2 = 0;
	GOTO(27,L4);

L3:	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_Object*)a2)->class->M.
		hashCode__8wJNW.f(a2);
L4:	i1 = i1 ^ i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__WCwLg: ca.mcgill.sable.util.AbstractMap$AbstractEntry.<init>()V */

Class xt_init__WCwLg[] = { 0 };

Void init__WCwLg(Object p0)
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

/*M getKey__hjQlb: ca.mcgill.sable.util.AbstractMap$AbstractEntry.getKey()Ljava/lang/Object; */

Class xt_getKey__hjQlb[] = { 0 };

/*M getValue__3Av73: ca.mcgill.sable.util.AbstractMap$AbstractEntry.getValue()Ljava/lang/Object; */

Class xt_getValue__3Av73[] = { 0 };

/*M setValue_O_J1MxN: ca.mcgill.sable.util.AbstractMap$AbstractEntry.setValue(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_setValue_O_J1MxN[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_java_lang_NullPointerException.C, 0 };



const Char ch_ca_mcgill_sable_util_Abst_FQuSs[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','M','a','p','$','A','b','s',
't','r','a','c','t','E','n','t','r','y'};

const void *st_ca_mcgill_sable_util_Abst_FQuSs[] = {
    ch_ca_mcgill_sable_util_Abst_FQuSs+46,	/* 0. ca.mcgill.sable.util.AbstractMap$Abstrac */
    0};
