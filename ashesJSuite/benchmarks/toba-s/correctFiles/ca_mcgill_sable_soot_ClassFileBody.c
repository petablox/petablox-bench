/*  ca_mcgill_sable_soot_ClassFileBody.c -- from Java class ca.mcgill.sable.soot.ClassFileBody  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_ClassFileBody.h"
#include "ca_mcgill_sable_soot_Body.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootMethod.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_ClassFileBody.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_Body.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootMethod.C,
};

extern const Char ch_ca_mcgill_sable_soot_ClassFileBody[];
extern const void *st_ca_mcgill_sable_soot_ClassFileBody[];
extern Class xt_init_S_KOdFx[];
extern Class xt_getMethod__ltxK9[];
extern Class xt_printTo_P_GvJHF[];
extern Class xt_printTo_Pi_RSv97[];

#define HASHMASK 0xf
/*  0.  9a858b40  (0)  printTo  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  5.  554dc535  (5)  printTo  */
/*  7.  346c7a7  (7)  getMethod  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    -1702524096, &cl_ca_mcgill_sable_soot_ClassFileBody.M.printTo_P_GvJHF,
    -1992104095, &cl_ca_mcgill_sable_soot_ClassFileBody.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_ClassFileBody.M.clone__dslwm,
    0, 0, 0, 0,
    1431160117, &cl_ca_mcgill_sable_soot_ClassFileBody.M.printTo_Pi_RSv97,
    0, 0,
    54970279, &cl_ca_mcgill_sable_soot_ClassFileBody.M.getMethod__ltxK9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_ClassFileBody.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_ClassFileBody.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(34) nmchars = {&acl_char, 0, 34, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','C','l','a','s','s','F','i','l','e','B','o','d','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 34 };
static const Char nmiv_0[] = {
'm','e','t','h','o','d'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmiv_1[] = {
'c','o','f','f','i','C','l','a','s','s'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','C','l','a','s','s','F','i','l',
'e',';'};
static const Char nmiv_2[] = {
'c','o','f','f','i','M','e','t','h','o','d'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d','_','i',
'n','f','o',';'};
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
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmim_14[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';',')','V'};
static const Char nmim_15[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';','I',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_ClassFileBody, method), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_ClassFileBody, coffiClass), 0,(const Char *)&nmiv_1,10,(const Char *)&sgiv_1,38,1,0x1,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_ClassFileBody, coffiMethod), 0,(const Char *)&nmiv_2,11,(const Char *)&sgiv_2,40,1,0x1,2}, 
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
} inr_ca_mcgill_sable_soot_ClassFileBody = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_ClassFileBody.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_ClassFileBody cl_ca_mcgill_sable_soot_ClassFileBody = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_ClassFileBody),
    16,
    0,
    3,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_ClassFileBody,
    st_ca_mcgill_sable_soot_ClassFileBody,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_ClassFileBody,
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
	{TMIT_native_code, init_S_KOdFx,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,36,1,0x0,0,xt_init_S_KOdFx},
	{TMIT_native_code, getMethod__ltxK9,(const Char *)&nmim_13,9,
	(const Char *)&sgim_13,35,1,0x8001,1,xt_getMethod__ltxK9},
	{TMIT_native_code, printTo_P_GvJHF,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,24,1,0x8001,2,xt_printTo_P_GvJHF},
	{TMIT_native_code, printTo_Pi_RSv97,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,25,1,0x8001,3,xt_printTo_Pi_RSv97},
    } /* end of methodsigs */
};


/*M init_S_KOdFx: ca.mcgill.sable.soot.ClassFileBody.<init>(Lca/mcgill/sable/soot/SootMethod;)V */

Class xt_init_S_KOdFx[] = { 0 };

Void init_S_KOdFx(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_ClassFileBody*)a1)->method = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->coffiClass;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_ClassFileBody*)a1)->coffiClass = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->coffiMethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_ClassFileBody*)a1)->coffiMethod = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethod__ltxK9: ca.mcgill.sable.soot.ClassFileBody.getMethod()Lca/mcgill/sable/soot/SootMethod; */

Class xt_getMethod__ltxK9[] = { 0 };

Object getMethod__ltxK9(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ClassFileBody*)a1)->method;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printTo_P_GvJHF: ca.mcgill.sable.soot.ClassFileBody.printTo(Ljava/io/PrintWriter;)V */

Class xt_printTo_P_GvJHF[] = { 0 };

Void printTo_P_GvJHF(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M printTo_Pi_RSv97: ca.mcgill.sable.soot.ClassFileBody.printTo(Ljava/io/PrintWriter;I)V */

Class xt_printTo_Pi_RSv97[] = { 0 };

Void printTo_Pi_RSv97(Object p0, Object p1, Int p2)
{
Object av0, av1;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	return;

	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_ClassFileBody[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','C','l','a','s','s','F','i','l','e','B','o','d','y'};

const void *st_ca_mcgill_sable_soot_ClassFileBody[] = {
    ch_ca_mcgill_sable_soot_ClassFileBody+34,	/* 0. ca.mcgill.sable.soot.ClassFileBody */
    0};
