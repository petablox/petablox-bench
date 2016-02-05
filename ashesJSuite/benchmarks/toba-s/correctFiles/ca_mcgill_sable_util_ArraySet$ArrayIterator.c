/*  ca_mcgill_sable_util_ArraySet$ArrayIterator.c -- from Java class ca.mcgill.sable.util.ArraySet$ArrayIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_ArraySet$ArrayIterator.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_ArraySet.h"
#include "ca_mcgill_sable_util_NoSuchElementException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Arra_X1zkZ.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Iterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_ArraySet.C,
    &cl_ca_mcgill_sable_util_NoSuchElementException.C,
};

extern const Char ch_ca_mcgill_sable_util_Arra_X1zkZ[];
extern const void *st_ca_mcgill_sable_util_Arra_X1zkZ[];
extern Class xt_init_A_d2VzJ[];
extern Class xt_hasNext__bcUDv[];
extern Class xt_next__nJvFt[];
extern Class xt_remove__oBy6w[];

#define HASHMASK 0xf
/*  0.  36e9ff20  (0)  next  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  697034e6  (6)  hasNext  */
/*  9.  9bb4ac89  (9)  remove  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    921304864, &cl_ca_mcgill_sable_util_Arra_X1zkZ.M.next__nJvFt,
    -1992104095, &cl_ca_mcgill_sable_util_Arra_X1zkZ.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_Arra_X1zkZ.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_Arra_X1zkZ.M.hasNext__bcUDv, 0, 0,
    0, 0, -1682658167, &cl_ca_mcgill_sable_util_Arra_X1zkZ.M.remove__oBy6w,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Arra_X1zkZ.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_Arra_X1zkZ.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(43) nmchars = {&acl_char, 0, 43, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y','S','e','t','$','A','r','r','a','y','I',
't','e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 43 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','A','r','r','a','y','S','e','t',';'};
static const Char nmiv_1[] = {
'n','e','x','t','I','n','d','e','x'};
static const Char sgiv_1[] = {
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
'u','t','i','l','/','A','r','r','a','y','S','e','t',';',')','V'};
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
    { offsetof(struct in_ca_mcgill_sable_util_Arra_X1zkZ, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,31,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Arra_X1zkZ, nextIndex), 0,(const Char *)&nmiv_1,9,(const Char *)&sgiv_1,1,1,0x0,1}, 
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
} inr_ca_mcgill_sable_util_Arra_X1zkZ = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Arra_X1zkZ.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Arra_X1zkZ cl_ca_mcgill_sable_util_Arra_X1zkZ = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Arra_X1zkZ),
    16,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_util_Arra_X1zkZ,
    st_ca_mcgill_sable_util_Arra_X1zkZ,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Arra_X1zkZ,
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
	{TMIT_native_code, init_A_d2VzJ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,34,1,0x0,0,xt_init_A_d2VzJ},
	{TMIT_native_code, hasNext__bcUDv,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8001,1,xt_hasNext__bcUDv},
	{TMIT_native_code, next__nJvFt,(const Char *)&nmim_14,4,
	(const Char *)&sgim_14,20,1,0x8001,2,xt_next__nJvFt},
	{TMIT_native_code, remove__oBy6w,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,3,1,0x8001,3,xt_remove__oBy6w},
    } /* end of methodsigs */
};


/*M init_A_d2VzJ: ca.mcgill.sable.util.ArraySet$ArrayIterator.<init>(Lca/mcgill/sable/util/ArraySet;)V */

Class xt_init_A_d2VzJ[] = { 0 };

Void init_A_d2VzJ(Object p0, Object p1)
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
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->this0_oYxUV = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->nextIndex = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasNext__bcUDv: ca.mcgill.sable.util.ArraySet$ArrayIterator.hasNext()Z */

Class xt_hasNext__bcUDv[] = { 0 };

Boolean hasNext__bcUDv(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->nextIndex;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a2)->this0_oYxUV;
	i2 = access0_A_Ne1jm(a2);
	if (i1 < i2)
		GOTO(11,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M next__nJvFt: ca.mcgill.sable.util.ArraySet$ArrayIterator.next()Ljava/lang/Object; */

Class xt_next__nJvFt[] = { &cl_ca_mcgill_sable_util_NoSuchElementException.C, 0 };

Object next__nJvFt(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->nextIndex;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a2)->this0_oYxUV;
	i2 = access0_A_Ne1jm(a2);
	if (i1 < i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__3RB2k(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->this0_oYxUV;
	a1 = access1_A_86acp(a1);
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a3)->nextIndex;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a3)->nextIndex = i4;
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

/*M remove__oBy6w: ca.mcgill.sable.util.ArraySet$ArrayIterator.remove()V */

Class xt_remove__oBy6w[] = { &cl_ca_mcgill_sable_util_NoSuchElementException.C, 0 };

Void remove__oBy6w(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->nextIndex;
	if (i1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_ca_mcgill_sable_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__3RB2k(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a2)->nextIndex;
	i3 = 1;
	i2 = i2 - i3;
	access2_Ai_VScBu(a1,i2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a2)->nextIndex;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Arra_X1zkZ*)a1)->nextIndex = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Arra_X1zkZ[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y','S','e','t','$','A','r','r','a','y','I',
't','e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_Arra_X1zkZ[] = {
    ch_ca_mcgill_sable_util_Arra_X1zkZ+43,	/* 0. ca.mcgill.sable.util.ArraySet$ArrayItera */
    0};
