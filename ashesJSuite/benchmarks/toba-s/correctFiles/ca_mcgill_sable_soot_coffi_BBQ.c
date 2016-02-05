/*  ca_mcgill_sable_soot_coffi_BBQ.c -- from Java class ca.mcgill.sable.soot.coffi.BBQ  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_BBQ.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_BasicBlock.h"
#include "java_util_Enumeration.h"
#include "java_util_NoSuchElementException.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_BBQ.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
    &cl_java_util_Enumeration.C,
    &cl_java_util_NoSuchElementException.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_BBQ[];
extern const void *st_ca_mcgill_sable_soot_coffi_BBQ[];
extern Class xt_push_B_6KwT3[];
extern Class xt_pull__xaT0h[];
extern Class xt_contains_B_RWHLB[];
extern Class xt_size__eG3hc[];
extern Class xt_isEmpty__p3Jlh[];
extern Class xt_clear__LyVOw[];
extern Class xt_init__ANkx1[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_BBQ.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_BBQ.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_BBQ.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_BBQ.M.toString__4d9OF, 0, 0,
};

static const CARRAY(30) nmchars = {&acl_char, 0, 30, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','B','B','Q'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 30 };
static const Char nmiv_0[] = {
'q'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','u','t','i','l','/','V','e','c','t','o','r',';'};
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
'p','u','s','h'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l',
'o','c','k',';',')','V'};
static const Char nmim_13[] = {
'p','u','l','l'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B',
'l','o','c','k',';'};
static const Char nmim_14[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','a','s','i','c','B','l',
'o','c','k',';',')','Z'};
static const Char nmim_15[] = {
's','i','z','e'};
static const Char sgim_15[] = {
'(',')','I'};
static const Char nmim_16[] = {
'i','s','E','m','p','t','y'};
static const Char sgim_16[] = {
'(',')','Z'};
static const Char nmim_17[] = {
'c','l','e','a','r'};
static const Char sgim_17[] = {
'(',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_BBQ, q), 0,(const Char *)&nmiv_0,1,(const Char *)&sgiv_0,18,1,0x2,0}, 
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
} inr_ca_mcgill_sable_soot_coffi_BBQ = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_BBQ.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_BBQ cl_ca_mcgill_sable_soot_coffi_BBQ = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_BBQ),
    18,
    0,
    1,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_BBQ,
    st_ca_mcgill_sable_soot_coffi_BBQ,
    0,
    init__ANkx1,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_BBQ,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__ANkx1,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,6,xt_init__ANkx1},
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
	{TMIT_native_code, push_B_6KwT3,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,42,1,0x1,0,xt_push_B_6KwT3},
	{TMIT_native_code, pull__xaT0h,(const Char *)&nmim_13,4,
	(const Char *)&sgim_13,41,1,0x1,1,xt_pull__xaT0h},
	{TMIT_native_code, contains_B_RWHLB,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,42,1,0x1,2,xt_contains_B_RWHLB},
	{TMIT_native_code, size__eG3hc,(const Char *)&nmim_15,4,
	(const Char *)&sgim_15,3,1,0x1,3,xt_size__eG3hc},
	{TMIT_native_code, isEmpty__p3Jlh,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,3,1,0x1,4,xt_isEmpty__p3Jlh},
	{TMIT_native_code, clear__LyVOw,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,3,1,0x1,5,xt_clear__LyVOw},
    } /* end of methodsigs */
};


/*M push_B_6KwT3: ca.mcgill.sable.soot.coffi.BBQ.push(Lca/mcgill/sable/soot/coffi/BasicBlock;)V */

Class xt_push_B_6KwT3[] = { 0 };

Void push_B_6KwT3(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->inq;
	i2 = 1;
	if (i1 == i2)
		GOTO(5,L1);
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->inq = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M pull__xaT0h: ca.mcgill.sable.soot.coffi.BBQ.pull()Lca/mcgill/sable/soot/coffi/BasicBlock; */

Class xt_pull__xaT0h[] = { &cl_java_util_NoSuchElementException.C, 0 };

Object pull__xaT0h(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	if (i1 != 0)
		GOTO(7,L1);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_BBQ[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_MGW2W(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		firstElement__ek7HB.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		removeElementAt_i_SXIxd.f(a1,i2);
	a1 = av1;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->inq = i2;
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_B_RWHLB: ca.mcgill.sable.soot.coffi.BBQ.contains(Lca/mcgill/sable/soot/coffi/BasicBlock;)Z */

Class xt_contains_B_RWHLB[] = { 0 };

Boolean contains_B_RWHLB(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
Int i0, i1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->inq;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__eG3hc: ca.mcgill.sable.soot.coffi.BBQ.size()I */

Class xt_size__eG3hc[] = { 0 };

Int size__eG3hc(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEmpty__p3Jlh: ca.mcgill.sable.soot.coffi.BBQ.isEmpty()Z */

Class xt_isEmpty__p3Jlh[] = { 0 };

Boolean isEmpty__p3Jlh(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		isEmpty__vLYvD.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__LyVOw: ca.mcgill.sable.soot.coffi.BBQ.clear()V */

Class xt_clear__LyVOw[] = { 0 };

Void clear__LyVOw(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av2 = a1;
	GOTO(8,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_BasicBlock.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av1 = a1;
	a1 = av1;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BasicBlock*)a1)->inq = i2;
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(32,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		removeAllElements__eQdEb.f(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__ANkx1: ca.mcgill.sable.soot.coffi.BBQ.<init>()V */

Class xt_init__ANkx1[] = { 0 };

Void init__ANkx1(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_java_util_Vector.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__kkKK3(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_BBQ*)a1)->q = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_BBQ[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','B','B','Q','P','u','l','l',' ','f',
'r','o','m',' ','e','m','p','t','y',' ','B','B','Q'};

const void *st_ca_mcgill_sable_soot_coffi_BBQ[] = {
    ch_ca_mcgill_sable_soot_coffi_BBQ+30,	/* 0. ca.mcgill.sable.soot.coffi.BBQ */
    ch_ca_mcgill_sable_soot_coffi_BBQ+49,	/* 1. Pull from empty BBQ */
    0};
