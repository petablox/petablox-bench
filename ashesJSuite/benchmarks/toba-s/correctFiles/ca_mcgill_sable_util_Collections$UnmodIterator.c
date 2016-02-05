/*  ca_mcgill_sable_util_Collections$UnmodIterator.c -- from Java class ca.mcgill.sable.util.Collections$UnmodIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Collections$UnmodIterator.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Collections.h"
#include "ca_mcgill_sable_util_Collections$UnmodList.h"
#include "ca_mcgill_sable_util_Collections$UnmodListIterator.h"
#include "ca_mcgill_sable_util_NoSuchElementException.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Coll_BuHAM.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Iterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Collections.C,
    &cl_ca_mcgill_sable_util_Coll_FfXDi.C,
    &cl_ca_mcgill_sable_util_Coll_vDien.C,
    &cl_ca_mcgill_sable_util_NoSuchElementException.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
};

extern const Char ch_ca_mcgill_sable_util_Coll_BuHAM[];
extern const void *st_ca_mcgill_sable_util_Coll_BuHAM[];
extern Class xt_init_I_KI1TW[];
extern Class xt_hasNext__Jo7fe[];
extern Class xt_next__XMxoS[];
extern Class xt_remove__q30fR[];

#define HASHMASK 0xf
/*  0.  36e9ff20  (0)  next  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  697034e6  (6)  hasNext  */
/*  9.  9bb4ac89  (9)  remove  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    921304864, &cl_ca_mcgill_sable_util_Coll_BuHAM.M.next__XMxoS,
    -1992104095, &cl_ca_mcgill_sable_util_Coll_BuHAM.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_Coll_BuHAM.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_Coll_BuHAM.M.hasNext__Jo7fe, 0, 0,
    0, 0, -1682658167, &cl_ca_mcgill_sable_util_Coll_BuHAM.M.remove__q30fR,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Coll_BuHAM.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_Coll_BuHAM.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(46) nmchars = {&acl_char, 0, 46, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','o','l','l','e','c','t','i','o','n','s','$','U','n','m',
'o','d','I','t','e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 46 };
static const Char nmiv_0[] = {
'i','t'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','I','t','e','r','a','t','o','r',';'};
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
'u','t','i','l','/','I','t','e','r','a','t','o','r',';',')','V'};
static const Char nmim_13[] = {
'h','a','s','N','e','x','t'};
static const Char sgim_13[] = {
'(',')','Z'};
static const Char nmim_14[] = {
'n','e','x','t'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_15[] = {
'r','e','m','o','v','e'};
static const Char sgim_15[] = {
'(',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Coll_BuHAM, it), 0,(const Char *)&nmiv_0,2,(const Char *)&sgiv_0,31,1,0x0,0}, 
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
} inr_ca_mcgill_sable_util_Coll_BuHAM = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Coll_BuHAM.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Coll_BuHAM cl_ca_mcgill_sable_util_Coll_BuHAM = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Coll_BuHAM),
    16,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_Coll_BuHAM,
    st_ca_mcgill_sable_util_Coll_BuHAM,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Coll_BuHAM,
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
	{TMIT_native_code, init_I_KI1TW,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,34,1,0x1,0,xt_init_I_KI1TW},
	{TMIT_native_code, hasNext__Jo7fe,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8001,1,xt_hasNext__Jo7fe},
	{TMIT_native_code, next__XMxoS,(const Char *)&nmim_14,4,
	(const Char *)&sgim_14,20,1,0x8001,2,xt_next__XMxoS},
	{TMIT_native_code, remove__q30fR,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,3,1,0x8001,3,xt_remove__q30fR},
    } /* end of methodsigs */
};


/*M init_I_KI1TW: ca.mcgill.sable.util.Collections$UnmodIterator.<init>(Lca/mcgill/sable/util/Iterator;)V */

Class xt_init_I_KI1TW[] = { 0 };

Void init_I_KI1TW(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

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
	((struct in_ca_mcgill_sable_util_Coll_BuHAM*)a1)->it = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasNext__Jo7fe: ca.mcgill.sable.util.Collections$UnmodIterator.hasNext()Z */

Class xt_hasNext__Jo7fe[] = { 0 };

Boolean hasNext__Jo7fe(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_BuHAM*)a1)->it;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M next__XMxoS: ca.mcgill.sable.util.Collections$UnmodIterator.next()Ljava/lang/Object; */

Class xt_next__XMxoS[] = { 0 };

Object next__XMxoS(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Coll_BuHAM*)a1)->it;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove__q30fR: ca.mcgill.sable.util.Collections$UnmodIterator.remove()V */

Class xt_remove__q30fR[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_ca_mcgill_sable_util_NoSuchElementException.C, 0 };

Void remove__q30fR(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_UnsupportedOperationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__h4Pxw(a2);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Coll_BuHAM[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','o','l','l','e','c','t','i','o','n','s','$','U','n','m',
'o','d','I','t','e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_Coll_BuHAM[] = {
    ch_ca_mcgill_sable_util_Coll_BuHAM+46,	/* 0. ca.mcgill.sable.util.Collections$UnmodIt */
    0};
