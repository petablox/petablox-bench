/*  ca_mcgill_sable_util_TypedLinkedList$TypedLinkedListIterator.c -- from Java class ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_TypedLinkedList$TypedLinkedListIterator.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Cast.h"
#include "ca_mcgill_sable_util_TypedLinkedList.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Type_1gD1r.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ListIterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Cast.C,
    &cl_ca_mcgill_sable_util_TypedLinkedList.C,
};

extern const Char ch_ca_mcgill_sable_util_Type_1gD1r[];
extern const void *st_ca_mcgill_sable_util_Type_1gD1r[];
extern Class xt_init_TL_RnbBx[];
extern Class xt_hasNext__h4hFp[];
extern Class xt_next__RJigu[];
extern Class xt_hasPrevious__Z3jKc[];
extern Class xt_previous__J0rOz[];
extern Class xt_nextIndex__osaSv[];
extern Class xt_previousIndex__A9Vkg[];
extern Class xt_remove__inJnq[];
extern Class xt_set_O_WOAbJ[];
extern Class xt_add_O_VnhHE[];

#define HASHMASK 0x7f
/*  9.  9bb4ac89  (9)  remove  */
/*  16.  b8f18616  (16)  previous  */
/*  17.  4379ed97  (17)  previousIndex  */
/*  20.  36e9ff20  (20)  next  */
/*  24.  82c80d24  (24)  hasPrevious  */
/*  27.  236d63a7  (27)  set  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  52.  4c0d6fd2  (52)  clone  */
/*  60.  56145a60  (60)  add  */
/*  61.  8942e761  (61)  hashCode  */
/*  66.  697034e6  (66)  hasNext  */
/*  69.  3336ac69  (69)  nextIndex  */
/*  6f.  489f8e6f  (6f)  toString  */
static const struct ihash htable[128] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1682658167, &cl_ca_mcgill_sable_util_Type_1gD1r.M.remove__inJnq, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1192131050, &cl_ca_mcgill_sable_util_Type_1gD1r.M.previous__J0rOz,
    1132064151, &cl_ca_mcgill_sable_util_Type_1gD1r.M.previousIndex__A9Vkg,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    921304864, &cl_ca_mcgill_sable_util_Type_1gD1r.M.next__RJigu, 0, 0,
    0, 0, 0, 0,
    -2100818652, &cl_ca_mcgill_sable_util_Type_1gD1r.M.hasPrevious__Z3jKc,
    0, 0, 0, 0,
    594371495, &cl_ca_mcgill_sable_util_Type_1gD1r.M.set_O_WOAbJ, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Type_1gD1r.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Type_1gD1r.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174432, &cl_ca_mcgill_sable_util_Type_1gD1r.M.add_O_VnhHE,
    -1992104095, &cl_ca_mcgill_sable_util_Type_1gD1r.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_Type_1gD1r.M.hasNext__h4hFp, 0, 0,
    0, 0,
    859221097, &cl_ca_mcgill_sable_util_Type_1gD1r.M.nextIndex__osaSv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_util_Type_1gD1r.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(60) nmchars = {&acl_char, 0, 60, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','L','i','n','k','e','d','L','i','s','t',
'$','T','y','p','e','d','L','i','n','k','e','d','L','i','s','t','I','t',
'e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 60 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','T','y','p','e','d','L','i','n','k','e','d','L','i','s',
't',';'};
static const Char nmiv_1[] = {
'i','t','e','r','a','t','o','r'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t','I','t','e','r','a','t','o','r',';'};
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
'u','t','i','l','/','T','y','p','e','d','L','i','n','k','e','d','L','i',
's','t',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','L','i','s','t','I','t','e','r','a','t','o',
'r',';',')','V'};
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
'h','a','s','P','r','e','v','i','o','u','s'};
static const Char sgim_15[] = {
'(',')','Z'};
static const Char nmim_16[] = {
'p','r','e','v','i','o','u','s'};
static const Char sgim_16[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_17[] = {
'n','e','x','t','I','n','d','e','x'};
static const Char sgim_17[] = {
'(',')','I'};
static const Char nmim_18[] = {
'p','r','e','v','i','o','u','s','I','n','d','e','x'};
static const Char sgim_18[] = {
'(',')','I'};
static const Char nmim_19[] = {
'r','e','m','o','v','e'};
static const Char sgim_19[] = {
'(',')','V'};
static const Char nmim_20[] = {
's','e','t'};
static const Char sgim_20[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_21[] = {
'a','d','d'};
static const Char sgim_21[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Type_1gD1r, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,38,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Type_1gD1r, iterator), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,35,1,0x0,1}, 
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
} inr_ca_mcgill_sable_util_Type_1gD1r = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Type_1gD1r.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Type_1gD1r cl_ca_mcgill_sable_util_Type_1gD1r = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Type_1gD1r),
    22,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_util_Type_1gD1r,
    st_ca_mcgill_sable_util_Type_1gD1r,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Type_1gD1r,
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
	{TMIT_native_code, init_TL_RnbBx,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,76,1,0x0,0,xt_init_TL_RnbBx},
	{TMIT_native_code, hasNext__h4hFp,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8001,1,xt_hasNext__h4hFp},
	{TMIT_native_code, next__RJigu,(const Char *)&nmim_14,4,
	(const Char *)&sgim_14,20,1,0x8001,2,xt_next__RJigu},
	{TMIT_native_code, hasPrevious__Z3jKc,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,3,1,0x8001,3,xt_hasPrevious__Z3jKc},
	{TMIT_native_code, previous__J0rOz,(const Char *)&nmim_16,8,
	(const Char *)&sgim_16,20,1,0x8001,4,xt_previous__J0rOz},
	{TMIT_native_code, nextIndex__osaSv,(const Char *)&nmim_17,9,
	(const Char *)&sgim_17,3,1,0x8001,5,xt_nextIndex__osaSv},
	{TMIT_native_code, previousIndex__A9Vkg,(const Char *)&nmim_18,13,
	(const Char *)&sgim_18,3,1,0x8001,6,xt_previousIndex__A9Vkg},
	{TMIT_native_code, remove__inJnq,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,3,1,0x8001,7,xt_remove__inJnq},
	{TMIT_native_code, set_O_WOAbJ,(const Char *)&nmim_20,3,
	(const Char *)&sgim_20,21,1,0x8001,8,xt_set_O_WOAbJ},
	{TMIT_native_code, add_O_VnhHE,(const Char *)&nmim_21,3,
	(const Char *)&sgim_21,21,1,0x8001,9,xt_add_O_VnhHE},
    } /* end of methodsigs */
};


/*M init_TL_RnbBx: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.<init>(Lca/mcgill/sable/util/TypedLinkedList;Lca/mcgill/sable/util/ListIterator;)V */

Class xt_init_TL_RnbBx[] = { 0 };

Void init_TL_RnbBx(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

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
	((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasNext__h4hFp: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.hasNext()Z */

Class xt_hasNext__h4hFp[] = { 0 };

Boolean hasNext__h4hFp(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M next__RJigu: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.next()Ljava/lang/Object; */

Class xt_next__RJigu[] = { 0 };

Object next__RJigu(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasPrevious__Z3jKc: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.hasPrevious()Z */

Class xt_hasPrevious__Z3jKc[] = { 0 };

Boolean hasPrevious__Z3jKc(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-2100818652)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M previous__J0rOz: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.previous()Ljava/lang/Object; */

Class xt_previous__J0rOz[] = { 0 };

Object previous__J0rOz(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1192131050)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M nextIndex__osaSv: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.nextIndex()I */

Class xt_nextIndex__osaSv[] = { 0 };

Int nextIndex__osaSv(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,859221097)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M previousIndex__A9Vkg: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.previousIndex()I */

Class xt_previousIndex__A9Vkg[] = { 0 };

Int previousIndex__A9Vkg(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,1132064151)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove__inJnq: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.remove()V */

Class xt_remove__inJnq[] = { 0 };

Void remove__inJnq(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M set_O_WOAbJ: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.set(Ljava/lang/Object;)V */

Class xt_set_O_WOAbJ[] = { 0 };

Void set_O_WOAbJ(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_TypedLinkedList*)a2)->cast;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1063132180)->f)(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,594371495)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_O_VnhHE: ca.mcgill.sable.util.TypedLinkedList$TypedLinkedListIterator.add(Ljava/lang/Object;)V */

Class xt_add_O_VnhHE[] = { 0 };

Void add_O_VnhHE(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a1)->iterator;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Type_1gD1r*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_TypedLinkedList*)a2)->cast;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1063132180)->f)(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1444174432)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Type_1gD1r[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','L','i','n','k','e','d','L','i','s','t',
'$','T','y','p','e','d','L','i','n','k','e','d','L','i','s','t','I','t',
'e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_Type_1gD1r[] = {
    ch_ca_mcgill_sable_util_Type_1gD1r+60,	/* 0. ca.mcgill.sable.util.TypedLinkedList$Typ */
    0};
