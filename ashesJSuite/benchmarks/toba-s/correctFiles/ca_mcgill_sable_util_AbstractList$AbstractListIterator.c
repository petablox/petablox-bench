/*  ca_mcgill_sable_util_AbstractList$AbstractListIterator.c -- from Java class ca.mcgill.sable.util.AbstractList$AbstractListIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_AbstractList$AbstractListIterator.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_ConcurrentModificationException.h"
#include "java_util_NoSuchElementException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Abst_HwYnE.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ListIterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_ConcurrentModificationException.C,
    &cl_java_util_NoSuchElementException.C,
};

extern const Char ch_ca_mcgill_sable_util_Abst_HwYnE[];
extern const void *st_ca_mcgill_sable_util_Abst_HwYnE[];
extern Class xt_init_Ai_PueOP[];
extern Class xt_set_O_Sz1Cl[];
extern Class xt_add_O_R8I7h[];
extern Class xt_nextIndex__KyVW9[];
extern Class xt_previousIndex__mfrVG[];
extern Class xt_hasPrevious__F4whc[];
extern Class xt_previous__78eTr[];
extern Class xt_hasNext__PEQf4[];
extern Class xt_next__JgRi6[];
extern Class xt_remove__2gfD5[];

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
    -1682658167, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.remove__2gfD5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1192131050, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.previous__78eTr,
    1132064151, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.previousIndex__mfrVG,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    921304864, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.next__JgRi6, 0, 0,
    0, 0, 0, 0,
    -2100818652, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.hasPrevious__F4whc,
    0, 0, 0, 0,
    594371495, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.set_O_Sz1Cl, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174432, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.add_O_R8I7h,
    -1992104095, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.hasNext__PEQf4, 0, 0,
    0, 0,
    859221097, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.nextIndex__KyVW9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_util_Abst_HwYnE.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(54) nmchars = {&acl_char, 0, 54, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','L','i','s','t','$','A','b',
's','t','r','a','c','t','L','i','s','t','I','t','e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 54 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','A','b','s','t','r','a','c','t','L','i','s','t',';'};
static const Char nmiv_1[] = {
'i','n','d','e','x'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'l','a','s','t','I','n','d','e','x'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'l','o','c','a','l','M','o','d','C','o','u','n','t'};
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
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','A','b','s','t','r','a','c','t','L','i','s','t',';',
'I',')','V'};
static const Char nmim_13[] = {
's','e','t'};
static const Char sgim_13[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_14[] = {
'a','d','d'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_15[] = {
'n','e','x','t','I','n','d','e','x'};
static const Char sgim_15[] = {
'(',')','I'};
static const Char nmim_16[] = {
'p','r','e','v','i','o','u','s','I','n','d','e','x'};
static const Char sgim_16[] = {
'(',')','I'};
static const Char nmim_17[] = {
'h','a','s','P','r','e','v','i','o','u','s'};
static const Char sgim_17[] = {
'(',')','Z'};
static const Char nmim_18[] = {
'p','r','e','v','i','o','u','s'};
static const Char sgim_18[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_19[] = {
'h','a','s','N','e','x','t'};
static const Char sgim_19[] = {
'(',')','Z'};
static const Char nmim_20[] = {
'n','e','x','t'};
static const Char sgim_20[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_21[] = {
'r','e','m','o','v','e'};
static const Char sgim_21[] = {
'(',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Abst_HwYnE, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,35,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Abst_HwYnE, index), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,1,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_Abst_HwYnE, lastIndex), 0,(const Char *)&nmiv_2,9,(const Char *)&sgiv_2,1,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_Abst_HwYnE, localModCount), 0,(const Char *)&nmiv_3,13,(const Char *)&sgiv_3,1,1,0x2,3}, 
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
} inr_ca_mcgill_sable_util_Abst_HwYnE = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Abst_HwYnE.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Abst_HwYnE cl_ca_mcgill_sable_util_Abst_HwYnE = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Abst_HwYnE),
    22,
    0,
    4,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_util_Abst_HwYnE,
    st_ca_mcgill_sable_util_Abst_HwYnE,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Abst_HwYnE,
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
	{TMIT_native_code, init_Ai_PueOP,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,39,1,0x0,0,xt_init_Ai_PueOP},
	{TMIT_native_code, set_O_Sz1Cl,(const Char *)&nmim_13,3,
	(const Char *)&sgim_13,21,1,0x8001,1,xt_set_O_Sz1Cl},
	{TMIT_native_code, add_O_R8I7h,(const Char *)&nmim_14,3,
	(const Char *)&sgim_14,21,1,0x8001,2,xt_add_O_R8I7h},
	{TMIT_native_code, nextIndex__KyVW9,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,3,1,0x8001,3,xt_nextIndex__KyVW9},
	{TMIT_native_code, previousIndex__mfrVG,(const Char *)&nmim_16,13,
	(const Char *)&sgim_16,3,1,0x8001,4,xt_previousIndex__mfrVG},
	{TMIT_native_code, hasPrevious__F4whc,(const Char *)&nmim_17,11,
	(const Char *)&sgim_17,3,1,0x8001,5,xt_hasPrevious__F4whc},
	{TMIT_native_code, previous__78eTr,(const Char *)&nmim_18,8,
	(const Char *)&sgim_18,20,1,0x8001,6,xt_previous__78eTr},
	{TMIT_native_code, hasNext__PEQf4,(const Char *)&nmim_19,7,
	(const Char *)&sgim_19,3,1,0x8001,7,xt_hasNext__PEQf4},
	{TMIT_native_code, next__JgRi6,(const Char *)&nmim_20,4,
	(const Char *)&sgim_20,20,1,0x8001,8,xt_next__JgRi6},
	{TMIT_native_code, remove__2gfD5,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,3,1,0x8001,9,xt_remove__2gfD5},
    } /* end of methodsigs */
};


/*M init_Ai_PueOP: ca.mcgill.sable.util.AbstractList$AbstractListIterator.<init>(Lca/mcgill/sable/util/AbstractList;I)V */

Class xt_init_Ai_PueOP[] = { 0 };

Void init_Ai_PueOP(Object p0, Object p1, Int p2)
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
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->this0_oYxUV = a2;
	a1 = av0;
	i2 = -1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->lastIndex = i2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount = i2;
	a1 = av0;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->index = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M set_O_Sz1Cl: ca.mcgill.sable.util.AbstractList$AbstractListIterator.set(Ljava/lang/Object;)V */

Class xt_set_O_Sz1Cl[] = { 0 };

Void set_O_Sz1Cl(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->lastIndex;
	i2 = -1;
	if (i1 != i2)
		GOTO(27,L2);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->lastIndex;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		set_iO_rQGu0.f(a1,i2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_O_R8I7h: ca.mcgill.sable.util.AbstractList$AbstractListIterator.add(Ljava/lang/Object;)V */

Class xt_add_O_R8I7h[] = { 0 };

Void add_O_R8I7h(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->index;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_iO_yOnCL.f(a1,i2,a3);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M nextIndex__KyVW9: ca.mcgill.sable.util.AbstractList$AbstractListIterator.nextIndex()I */

Class xt_nextIndex__KyVW9[] = { 0 };

Int nextIndex__KyVW9(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->index;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M previousIndex__mfrVG: ca.mcgill.sable.util.AbstractList$AbstractListIterator.previousIndex()I */

Class xt_previousIndex__mfrVG[] = { 0 };

Int previousIndex__mfrVG(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->index;
	i2 = 1;
	i1 = i1 - i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasPrevious__F4whc: ca.mcgill.sable.util.AbstractList$AbstractListIterator.hasPrevious()Z */

Class xt_hasPrevious__F4whc[] = { 0 };

Boolean hasPrevious__F4whc(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->index;
	if (i1 > 0)
		GOTO(26,L2);
	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M previous__78eTr: ca.mcgill.sable.util.AbstractList$AbstractListIterator.previous()Ljava/lang/Object; */

Class xt_previous__78eTr[] = { 0 };

Object previous__78eTr(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a3)->index;
	i4 = 1;
	i3 = i3 - i4;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a3)->index = i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->lastIndex = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		get_i_7o88I.f(a1,i2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasNext__PEQf4: ca.mcgill.sable.util.AbstractList$AbstractListIterator.hasNext()Z */

Class xt_hasNext__PEQf4[] = { 0 };

Boolean hasNext__PEQf4(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->index;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a2)->class->M.
		size__gPvmD.f(a2);
	if (i1 < i2)
		GOTO(33,L2);
	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M next__JgRi6: ca.mcgill.sable.util.AbstractList$AbstractListIterator.next()Ljava/lang/Object; */

Class xt_next__JgRi6[] = { 0 };

Object next__JgRi6(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->lastIndex = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->this0_oYxUV;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a3)->index;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a3)->index = i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		get_i_7o88I.f(a1,i2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove__2gfD5: ca.mcgill.sable.util.AbstractList$AbstractListIterator.remove()V */

Class xt_remove__2gfD5[] = { 0 };

Void remove__2gfD5(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->lastIndex;
	i2 = -1;
	if (i1 != i2)
		GOTO(27,L2);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->lastIndex;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->index;
	if (i1 == i2)
		GOTO(46,L3);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->lastIndex;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->index = i2;
L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->lastIndex;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		remove_i_NSWVQ.f(a1,i2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->localModCount = i2;
	a1 = av0;
	i2 = -1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Abst_HwYnE*)a1)->lastIndex = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Abst_HwYnE[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','L','i','s','t','$','A','b',
's','t','r','a','c','t','L','i','s','t','I','t','e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_Abst_HwYnE[] = {
    ch_ca_mcgill_sable_util_Abst_HwYnE+54,	/* 0. ca.mcgill.sable.util.AbstractList$Abstra */
    0};
