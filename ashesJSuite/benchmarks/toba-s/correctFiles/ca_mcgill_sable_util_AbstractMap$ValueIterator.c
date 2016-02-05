/*  ca_mcgill_sable_util_AbstractMap$ValueIterator.c -- from Java class ca.mcgill.sable.util.AbstractMap$ValueIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_AbstractMap$ValueIterator.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_AbstractMap.h"
#include "ca_mcgill_sable_util_AbstractMap$AbstractEntry.h"
#include "ca_mcgill_sable_util_AbstractMap$KeyIterator.h"
#include "ca_mcgill_sable_util_AbstractMap$KeySet.h"
#include "ca_mcgill_sable_util_AbstractMap$ValueCollection.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "ca_mcgill_sable_util_Map$Entry.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Abst_Qbx2w.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Iterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_AbstractMap.C,
    &cl_ca_mcgill_sable_util_Abst_FQuSs.C,
    &cl_ca_mcgill_sable_util_Abst_mqF0a.C,
    &cl_ca_mcgill_sable_util_Abst_QyiRw.C,
    &cl_ca_mcgill_sable_util_Abst_KrD52.C,
    &cl_ca_mcgill_sable_util_Collection.C,
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
};

extern const Char ch_ca_mcgill_sable_util_Abst_Qbx2w[];
extern const void *st_ca_mcgill_sable_util_Abst_Qbx2w[];
extern Class xt_hasNext__yQUON[];
extern Class xt_next__Qwwcr[];
extern Class xt_remove__p0DNJ[];
extern Class xt_init_A_Fr8mt[];

#define HASHMASK 0xf
/*  0.  36e9ff20  (0)  next  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  697034e6  (6)  hasNext  */
/*  9.  9bb4ac89  (9)  remove  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    921304864, &cl_ca_mcgill_sable_util_Abst_Qbx2w.M.next__Qwwcr,
    -1992104095, &cl_ca_mcgill_sable_util_Abst_Qbx2w.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_Abst_Qbx2w.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_Abst_Qbx2w.M.hasNext__yQUON, 0, 0,
    0, 0, -1682658167, &cl_ca_mcgill_sable_util_Abst_Qbx2w.M.remove__p0DNJ,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Abst_Qbx2w.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_Abst_Qbx2w.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(46) nmchars = {&acl_char, 0, 46, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','M','a','p','$','V','a','l',
'u','e','I','t','e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 46 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','A','b','s','t','r','a','c','t','M','a','p',';'};
static const Char nmiv_1[] = {
'i','t','e','r','a','t','o','r'};
static const Char sgiv_1[] = {
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
'h','a','s','N','e','x','t'};
static const Char sgim_12[] = {
'(',')','Z'};
static const Char nmim_13[] = {
'n','e','x','t'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
'r','e','m','o','v','e'};
static const Char sgim_14[] = {
'(',')','V'};
static const Char nmim_15[] = {
'<','i','n','i','t','>'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','A','b','s','t','r','a','c','t','M','a','p',';',')',
'V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Abst_Qbx2w, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,34,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Abst_Qbx2w, iterator), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,31,1,0x2,1}, 
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
} inr_ca_mcgill_sable_util_Abst_Qbx2w = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Abst_Qbx2w.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Abst_Qbx2w cl_ca_mcgill_sable_util_Abst_Qbx2w = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Abst_Qbx2w),
    16,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    7, others,
    0, 0,
    ch_ca_mcgill_sable_util_Abst_Qbx2w,
    st_ca_mcgill_sable_util_Abst_Qbx2w,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Abst_Qbx2w,
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
	{TMIT_native_code, hasNext__yQUON,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,3,1,0x8001,0,xt_hasNext__yQUON},
	{TMIT_native_code, next__Qwwcr,(const Char *)&nmim_13,4,
	(const Char *)&sgim_13,20,1,0x8001,1,xt_next__Qwwcr},
	{TMIT_native_code, remove__p0DNJ,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,3,1,0x8001,2,xt_remove__p0DNJ},
	{TMIT_native_code, init_A_Fr8mt,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,37,1,0x0,3,xt_init_A_Fr8mt},
    } /* end of methodsigs */
};


/*M hasNext__yQUON: ca.mcgill.sable.util.AbstractMap$ValueIterator.hasNext()Z */

Class xt_hasNext__yQUON[] = { 0 };

Boolean hasNext__yQUON(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Abst_Qbx2w*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M next__Qwwcr: ca.mcgill.sable.util.AbstractMap$ValueIterator.next()Ljava/lang/Object; */

Class xt_next__Qwwcr[] = { 0 };

Object next__Qwwcr(Object p0)
{
Class c0, c1;
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_Qbx2w*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,187019670)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove__p0DNJ: ca.mcgill.sable.util.AbstractMap$ValueIterator.remove()V */

Class xt_remove__p0DNJ[] = { 0 };

Void remove__p0DNJ(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_Qbx2w*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_A_Fr8mt: ca.mcgill.sable.util.AbstractMap$ValueIterator.<init>(Lca/mcgill/sable/util/AbstractMap;)V */

Class xt_init_A_Fr8mt[] = { 0 };

Void init_A_Fr8mt(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_util_Abst_Qbx2w*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_Qbx2w*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_Qbx2w*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a2)->class->M.
		entries__qDQ0P.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1180110655)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_Qbx2w*)a1)->iterator = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Abst_Qbx2w[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','M','a','p','$','V','a','l',
'u','e','I','t','e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_Abst_Qbx2w[] = {
    ch_ca_mcgill_sable_util_Abst_Qbx2w+46,	/* 0. ca.mcgill.sable.util.AbstractMap$ValueIt */
    0};
