/*  ca_mcgill_sable_soot_jimple_NoSuchLocalException.c -- from Java class ca.mcgill.sable.soot.jimple.NoSuchLocalException  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_NoSuchLocalException.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_Exception.h"
#include "java_lang_Throwable.h"
#include "java_io_Serializable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_Exception.C,
    &cl_java_lang_Throwable.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_java_io_Serializable.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_NoSuchLocalException[];
extern const void *st_ca_mcgill_sable_soot_jimple_NoSuchLocalException[];
extern Class xt_init_S_pBqPR[];
extern Class xt_init__PcWbn[];

#define HASHMASK 0x0
static const struct ihash htable[1] = {
    0, 0,
};

static const CARRAY(48) nmchars = {&acl_char, 0, 48, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','o','S','u','c','h','L','o',
'c','a','l','E','x','c','e','p','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 48 };
static const Char nmiv_0[] = {
'b','a','c','k','t','r','a','c','e'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
'd','e','t','a','i','l','M','e','s','s','a','g','e'};
static const Char sgiv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
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
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmim_13[] = {
'f','i','l','l','I','n','S','t','a','c','k','T','r','a','c','e'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','T','h','r','o','w',
'a','b','l','e',';'};
static const Char nmim_14[] = {
'g','e','t','L','o','c','a','l','i','z','e','d','M','e','s','s','a','g',
'e'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_15[] = {
'g','e','t','M','e','s','s','a','g','e'};
static const Char sgim_15[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_16[] = {
'p','r','i','n','t','S','t','a','c','k','T','r','a','c','e'};
static const Char sgim_16[] = {
'(',')','V'};
static const Char nmim_17[] = {
'p','r','i','n','t','S','t','a','c','k','T','r','a','c','e'};
static const Char sgim_17[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','S','t','r',
'e','a','m',';',')','V'};
static const Char nmim_18[] = {
'p','r','i','n','t','S','t','a','c','k','T','r','a','c','e'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';',')','V'};
static const Char nmim_19[] = {
'p','r','i','n','t','S','t','a','c','k','T','r','a','c','e','0'};
static const Char sgim_19[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_NoSuchLocalException, backtrace), 0,(const Char *)&nmiv_0,9,(const Char *)&sgiv_0,18,0,0x82,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_NoSuchLocalException, detailMessage), 0,(const Char *)&nmiv_1,13,(const Char *)&sgiv_1,18,0,0x2,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_NoSuchLocalException = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_NoSuchLocalException),
    20,
    0,
    2,
    0,
    5, supers,
    1, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_NoSuchLocalException,
    st_ca_mcgill_sable_soot_jimple_NoSuchLocalException,
    0,
    init__PcWbn,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_NoSuchLocalException,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__PcWbn,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,1,xt_init__PcWbn},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x1,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8wJNW,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x101,6,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__VVof7,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x1,9,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_S_pBqPR,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,21,1,0x1,0,xt_init_S_pBqPR},
	{TMIT_native_code, fillInStackTrace__n9rRx,(const Char *)&nmim_13,16,
	(const Char *)&sgim_13,23,0,0x101,2,0},
	{TMIT_native_code, getLocalizedMessage__LrsNN,(const Char *)&nmim_14,19,
	(const Char *)&sgim_14,20,0,0x1,3,0},
	{TMIT_native_code, getMessage__AHr9V,(const Char *)&nmim_15,10,
	(const Char *)&sgim_15,20,0,0x1,4,0},
	{TMIT_native_code, printStackTrace__XlLJ5,(const Char *)&nmim_16,15,
	(const Char *)&sgim_16,3,0,0x1,5,0},
	{TMIT_native_code, printStackTrace_P_rRCGK,(const Char *)&nmim_17,15,
	(const Char *)&sgim_17,24,0,0x1,6,0},
	{TMIT_native_code, printStackTrace_P_SIxml,(const Char *)&nmim_18,15,
	(const Char *)&sgim_18,24,0,0x1,7,0},
	{TMIT_native_code, printStackTrace0_O_DTViE,(const Char *)&nmim_19,16,
	(const Char *)&sgim_19,21,0,0x102,8,0},
    } /* end of methodsigs */
};


/*M init_S_pBqPR: ca.mcgill.sable.soot.jimple.NoSuchLocalException.<init>(Ljava/lang/String;)V */

Class xt_init_S_pBqPR[] = { 0 };

Void init_S_pBqPR(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__PcWbn: ca.mcgill.sable.soot.jimple.NoSuchLocalException.<init>()V */

Class xt_init__PcWbn[] = { 0 };

Void init__PcWbn(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__Uwjei(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_NoSuchLocalException[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','o','S','u','c','h','L','o',
'c','a','l','E','x','c','e','p','t','i','o','n'};

const void *st_ca_mcgill_sable_soot_jimple_NoSuchLocalException[] = {
    ch_ca_mcgill_sable_soot_jimple_NoSuchLocalException+48,	/* 0. ca.mcgill.sable.soot.jimple.NoSuchLocalE */
    0};
