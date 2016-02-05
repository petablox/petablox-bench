/*  ca_mcgill_sable_util_LinkedList$LinkedListIterator.c -- from Java class ca.mcgill.sable.util.LinkedList$LinkedListIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_LinkedList$LinkedListIterator.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_ConcurrentModificationException.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_LinkedList$Node.h"
#include "java_util_NoSuchElementException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Link_hcQ5L.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ListIterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_ConcurrentModificationException.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_Link_cHLND.C,
    &cl_java_util_NoSuchElementException.C,
};

extern const Char ch_ca_mcgill_sable_util_Link_hcQ5L[];
extern const void *st_ca_mcgill_sable_util_Link_hcQ5L[];
extern Class xt_init_Li_A9PEl[];
extern Class xt_set_O_GvtaF[];
extern Class xt_add_O_F4aGA[];
extern Class xt_nextIndex__y4a3F[];
extern Class xt_previousIndex__m3mom[];
extern Class xt_hasPrevious__HpTyy[];
extern Class xt_previous__bud4A[];
extern Class xt_hasNext__RRzcB[];
extern Class xt_next__1IXdK[];
extern Class xt_remove__8j6Dy[];

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
    -1682658167, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.remove__8j6Dy, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1192131050, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.previous__bud4A,
    1132064151, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.previousIndex__m3mom,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    921304864, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.next__1IXdK, 0, 0,
    0, 0, 0, 0,
    -2100818652, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.hasPrevious__HpTyy,
    0, 0, 0, 0,
    594371495, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.set_O_GvtaF, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174432, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.add_O_F4aGA,
    -1992104095, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.hasNext__RRzcB, 0, 0,
    0, 0,
    859221097, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.nextIndex__y4a3F,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_util_Link_hcQ5L.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(50) nmchars = {&acl_char, 0, 50, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','n','k','e','d','L','i','s','t','$','L','i','n','k',
'e','d','L','i','s','t','I','t','e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 50 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t',';'};
static const Char nmiv_1[] = {
'n','e','x','t'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d',
'e',';'};
static const Char nmiv_2[] = {
'p','r','e','v'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d',
'e',';'};
static const Char nmiv_3[] = {
'o','l','d'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d',
'e',';'};
static const Char nmiv_4[] = {
'n','e','x','t','I','n','d','e','x'};
static const Char sgiv_4[] = {
'I'};
static const Char nmiv_5[] = {
'p','r','e','v','I','n','d','e','x'};
static const Char sgiv_5[] = {
'I'};
static const Char nmiv_6[] = {
'l','o','c','a','l','M','o','d','C','o','u','n','t'};
static const Char sgiv_6[] = {
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
'u','t','i','l','/','L','i','n','k','e','d','L','i','s','t',';','I',')',
'V'};
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
    { offsetof(struct in_ca_mcgill_sable_util_Link_hcQ5L, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_hcQ5L, next), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,38,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_hcQ5L, prev), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,38,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_hcQ5L, old), 0,(const Char *)&nmiv_3,3,(const Char *)&sgiv_3,38,1,0x2,3}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_hcQ5L, nextIndex), 0,(const Char *)&nmiv_4,9,(const Char *)&sgiv_4,1,1,0x2,4}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_hcQ5L, prevIndex), 0,(const Char *)&nmiv_5,9,(const Char *)&sgiv_5,1,1,0x2,5}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_hcQ5L, localModCount), 0,(const Char *)&nmiv_6,13,(const Char *)&sgiv_6,1,1,0x2,6}, 
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
} inr_ca_mcgill_sable_util_Link_hcQ5L = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Link_hcQ5L.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Link_hcQ5L cl_ca_mcgill_sable_util_Link_hcQ5L = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Link_hcQ5L),
    22,
    0,
    7,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_Link_hcQ5L,
    st_ca_mcgill_sable_util_Link_hcQ5L,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Link_hcQ5L,
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
	{TMIT_native_code, init_Li_A9PEl,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,37,1,0x0,0,xt_init_Li_A9PEl},
	{TMIT_native_code, set_O_GvtaF,(const Char *)&nmim_13,3,
	(const Char *)&sgim_13,21,1,0x8001,1,xt_set_O_GvtaF},
	{TMIT_native_code, add_O_F4aGA,(const Char *)&nmim_14,3,
	(const Char *)&sgim_14,21,1,0x8001,2,xt_add_O_F4aGA},
	{TMIT_native_code, nextIndex__y4a3F,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,3,1,0x8001,3,xt_nextIndex__y4a3F},
	{TMIT_native_code, previousIndex__m3mom,(const Char *)&nmim_16,13,
	(const Char *)&sgim_16,3,1,0x8001,4,xt_previousIndex__m3mom},
	{TMIT_native_code, hasPrevious__HpTyy,(const Char *)&nmim_17,11,
	(const Char *)&sgim_17,3,1,0x8001,5,xt_hasPrevious__HpTyy},
	{TMIT_native_code, previous__bud4A,(const Char *)&nmim_18,8,
	(const Char *)&sgim_18,20,1,0x8001,6,xt_previous__bud4A},
	{TMIT_native_code, hasNext__RRzcB,(const Char *)&nmim_19,7,
	(const Char *)&sgim_19,3,1,0x8001,7,xt_hasNext__RRzcB},
	{TMIT_native_code, next__1IXdK,(const Char *)&nmim_20,4,
	(const Char *)&sgim_20,20,1,0x8001,8,xt_next__1IXdK},
	{TMIT_native_code, remove__8j6Dy,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,3,1,0x8001,9,xt_remove__8j6Dy},
    } /* end of methodsigs */
};


/*M init_Li_A9PEl: ca.mcgill.sable.util.LinkedList$LinkedListIterator.<init>(Lca/mcgill/sable/util/LinkedList;I)V */

Class xt_init_Li_A9PEl[] = { 0 };

Void init_Li_A9PEl(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2, iv3;
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
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount = i2;
	i1 = iv2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->size;
	i3 = iv2;
	i2 = i2 - i3;
	if (i1 >= i2)
		GOTO(32,L3);
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prev = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->first;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->nextIndex = i2;
	a1 = av0;
	i2 = -1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prevIndex = i2;
	i1 = 0;
	iv3 = i1;
	GOTO(60,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->class->M.
		next__1IXdK.f(a1);
	iv3 += 1;
L2:	i1 = iv3;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(73,L1);
	return;

L3:	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->last;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prev = a2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->size;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->nextIndex = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->size;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prevIndex = i2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->size;
	iv3 = i1;
	GOTO(113,L5);

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->class->M.
		previous__bud4A.f(a1);
	iv3 += -1;
L5:	i1 = iv3;
	i2 = iv2;
	if (i1 > i2)
		GOBACK(126,L4);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M set_O_GvtaF: ca.mcgill.sable.util.LinkedList$LinkedListIterator.set(Ljava/lang/Object;)V */

Class xt_set_O_GvtaF[] = { 0 };

Void set_O_GvtaF(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->old;
	if (a1 != 0)
		GOTO(26,L2);
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->old;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		setElement_O_pzg8R.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_O_F4aGA: ca.mcgill.sable.util.LinkedList$LinkedListIterator.add(Ljava/lang/Object;)V */

Class xt_add_O_F4aGA[] = { 0 };

Void add_O_F4aGA(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prev;
	if (a1 != 0)
		GOTO(26,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addFirst_O_KZQDt.f(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->first;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	GOTO(48,L4);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next;
	if (a1 != 0)
		GOTO(55,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->this0_oYxUV;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addLast_O_IGCXT.f(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->last;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	GOTO(77,L4);

L3:	a1 = new(&cl_ca_mcgill_sable_util_Link_cHLND.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_LO_aAUSu(a2,a3,a4);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->prev;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		setPrevious_L_hdLrK.f(a1,a2);
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->next;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		setNext_L_vf7Yh.f(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->this0_oYxUV;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractList*)a1)->modCount = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->this0_oYxUV;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->size;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->size = i2;
L4:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M nextIndex__y4a3F: ca.mcgill.sable.util.LinkedList$LinkedListIterator.nextIndex()I */

Class xt_nextIndex__y4a3F[] = { 0 };

Int nextIndex__y4a3F(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->nextIndex;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M previousIndex__m3mom: ca.mcgill.sable.util.LinkedList$LinkedListIterator.previousIndex()I */

Class xt_previousIndex__m3mom[] = { 0 };

Int previousIndex__m3mom(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prevIndex;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasPrevious__HpTyy: ca.mcgill.sable.util.LinkedList$LinkedListIterator.hasPrevious()Z */

Class xt_hasPrevious__HpTyy[] = { 0 };

Boolean hasPrevious__HpTyy(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prevIndex;
	if (i1 >= 0)
		GOTO(26,L2);
	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M previous__bud4A: ca.mcgill.sable.util.LinkedList$LinkedListIterator.previous()Ljava/lang/Object; */

Class xt_previous__bud4A[] = { 0 };

Object previous__bud4A(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prev;
	if (a1 != 0)
		GOTO(26,L2);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L2:	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a3)->prev;
	a4 = a3;
	a3 = a2;
	a2 = a4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a3)->old = a4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->prev;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a2)->class->M.
		getPrevious__xcmt2.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prev = a2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->prevIndex;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prevIndex = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->nextIndex;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->nextIndex = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->old;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getElement__7hCh6.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasNext__RRzcB: ca.mcgill.sable.util.LinkedList$LinkedListIterator.hasNext()Z */

Class xt_hasNext__RRzcB[] = { 0 };

Boolean hasNext__RRzcB(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->nextIndex;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->class->M.
		size__ftbuK.f(a2);
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

/*M next__1IXdK: ca.mcgill.sable.util.LinkedList$LinkedListIterator.next()Ljava/lang/Object; */

Class xt_next__1IXdK[] = { 0 };

Object next__1IXdK(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next;
	if (a1 != 0)
		GOTO(26,L2);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L2:	a1 = av0;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a3)->next;
	a4 = a3;
	a3 = a2;
	a2 = a4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a3)->old = a4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prev = a2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->next;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a2)->class->M.
		getNext__j2NKA.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->prevIndex;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prevIndex = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->nextIndex;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->nextIndex = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->old;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getElement__7hCh6.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove__8j6Dy: ca.mcgill.sable.util.LinkedList$LinkedListIterator.remove()V */

Class xt_remove__8j6Dy[] = { 0 };

Void remove__8j6Dy(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->old;
	if (a1 != 0)
		GOTO(26,L2);
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->old;
	if (a1 != a2)
		GOTO(45,L3);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->next;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a2)->class->M.
		getNext__j2NKA.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->next = a2;
	GOTO(59,L4);

L3:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->prev;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a2)->class->M.
		getPrevious__xcmt2.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prev = a2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->prevIndex;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->prevIndex = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->nextIndex;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->nextIndex = i2;
L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->old;
	access0_LL_9iI7h(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->localModCount = i2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_hcQ5L*)a1)->old = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Link_hcQ5L[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','n','k','e','d','L','i','s','t','$','L','i','n','k',
'e','d','L','i','s','t','I','t','e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_Link_hcQ5L[] = {
    ch_ca_mcgill_sable_util_Link_hcQ5L+50,	/* 0. ca.mcgill.sable.util.LinkedList$LinkedLi */
    0};
