/*  ca_mcgill_sable_soot_jimple_AbstractValueBox.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractValueBox  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractValueBox.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "java_lang_RuntimeException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
};

static const Class others[] = {
    &cl_java_lang_RuntimeException.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractValueBox[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractValueBox[];
extern Class xt_setValue_V_iO6Xi[];
extern Class xt_getValue__qJWMb[];
extern Class xt_init__JH5kK[];
extern Class xt_canContainValue_V_Aajb4[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  c.  db354d8c  (c)  setValue  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
/*  12.  ff73cc12  (12)  canContainValue  */
/*  1e.  caec1d3e  (1e)  getValue  */
static const struct ihash htable[32] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -617263732, &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.M.setValue_V_iO6Xi,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.M.toString__4d9OF,
    0, 0, 0, 0,
    -9188334, &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.M.canContainValue_V_Aajb4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -890495682, &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.M.getValue__qJWMb,
    0, 0,
};

static const CARRAY(44) nmchars = {&acl_char, 0, 44, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'V','a','l','u','e','B','o','x'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 44 };
static const Char nmiv_0[] = {
'v','a','l','u','e'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';'};
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
's','e','t','V','a','l','u','e'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_13[] = {
'g','e','t','V','a','l','u','e'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_14[] = {
'c','a','n','C','o','n','t','a','i','n','V','a','l','u','e'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','Z'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox, value), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,35,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractValueBox = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractValueBox cl_ca_mcgill_sable_soot_jimple_AbstractValueBox = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox),
    15,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractValueBox,
    st_ca_mcgill_sable_soot_jimple_AbstractValueBox,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractValueBox,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__JH5kK,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,2,xt_init__JH5kK},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
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
	{TMIT_native_code, setValue_V_iO6Xi,(const Char *)&nmim_12,8,
	(const Char *)&sgim_12,38,1,0x8001,0,xt_setValue_V_iO6Xi},
	{TMIT_native_code, getValue__qJWMb,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,37,1,0x8001,1,xt_getValue__qJWMb},
	{TMIT_abstract, 0,(const Char *)&nmim_14,15,
	(const Char *)&sgim_14,38,1,0x8401,3,xt_canContainValue_V_Aajb4},
    } /* end of methodsigs */
};


/*M setValue_V_iO6Xi: ca.mcgill.sable.soot.jimple.AbstractValueBox.setValue(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setValue_V_iO6Xi[] = { 0 };

Void setValue_V_iO6Xi(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		canContainValue_V_Aajb4.f(a1,a2);
	if (i1 == 0)
		GOTO(5,L1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->value = a2;
	return;

L1:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractValueBox[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getValue__qJWMb: ca.mcgill.sable.soot.jimple.AbstractValueBox.getValue()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getValue__qJWMb[] = { 0 };

Object getValue__qJWMb(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->value;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__JH5kK: ca.mcgill.sable.soot.jimple.AbstractValueBox.<init>()V */

Class xt_init__JH5kK[] = { 0 };

Void init__JH5kK(Object p0)
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

/*M canContainValue_V_Aajb4: ca.mcgill.sable.soot.jimple.AbstractValueBox.canContainValue(Lca/mcgill/sable/soot/jimple/Value;)Z */

Class xt_canContainValue_V_Aajb4[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_AbstractValueBox[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'V','a','l','u','e','B','o','x','B','o','x',' ','c','a','n','n','o','t',
' ','c','o','n','t','a','i','n',' ','g','i','v','e','n',' ','v','a','l',
'u','e','.'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractValueBox[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractValueBox+44,	/* 0. ca.mcgill.sable.soot.jimple.AbstractValu */
    ch_ca_mcgill_sable_soot_jimple_AbstractValueBox+75,	/* 1. Box cannot contain given value. */
    0};
