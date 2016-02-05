/*  ca_mcgill_sable_soot_StoredBody.c -- from Java class ca.mcgill.sable.soot.StoredBody  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_StoredBody.h"
#include "ca_mcgill_sable_soot_BodyExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootMethod.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_StoredBody.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_BodyExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootMethod.C,
};

extern const Char ch_ca_mcgill_sable_soot_StoredBody[];
extern const void *st_ca_mcgill_sable_soot_StoredBody[];
extern Class xt_init_B_GpjPv[];
extern Class xt_resolveFor_S_nZHdz[];

#define HASHMASK 0xf
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  81cb61a6  (6)  resolveFor  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_StoredBody.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_StoredBody.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -2117377626, &cl_ca_mcgill_sable_soot_StoredBody.M.resolveFor_S_nZHdz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_StoredBody.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_StoredBody.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','t','o','r','e','d','B','o','d','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmiv_0[] = {
'b','o','d','y','R','e','p'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','B','o','d','y','R','e','p','r','e','s','e','n','t','a',
't','i','o','n',';'};
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
's','o','o','t','/','B','o','d','y','R','e','p','r','e','s','e','n','t',
'a','t','i','o','n',';',')','V'};
static const Char nmim_13[] = {
'r','e','s','o','l','v','e','F','o','r'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','B','o','d','y',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_StoredBody, bodyRep), 0,(const Char *)&nmiv_0,7,(const Char *)&sgiv_0,41,1,0x11,0}, 
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
} inr_ca_mcgill_sable_soot_StoredBody = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_StoredBody.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_StoredBody cl_ca_mcgill_sable_soot_StoredBody = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_StoredBody),
    14,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_StoredBody,
    st_ca_mcgill_sable_soot_StoredBody,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_StoredBody,
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
	{TMIT_native_code, init_B_GpjPv,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,44,1,0x1,0,xt_init_B_GpjPv},
	{TMIT_native_code, resolveFor_S_nZHdz,(const Char *)&nmim_13,10,
	(const Char *)&sgim_13,62,1,0x8001,1,xt_resolveFor_S_nZHdz},
    } /* end of methodsigs */
};


/*M init_B_GpjPv: ca.mcgill.sable.soot.StoredBody.<init>(Lca/mcgill/sable/soot/BodyRepresentation;)V */

Class xt_init_B_GpjPv[] = { 0 };

Void init_B_GpjPv(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_StoredBody*)a1)->bodyRep = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M resolveFor_S_nZHdz: ca.mcgill.sable.soot.StoredBody.resolveFor(Lca/mcgill/sable/soot/SootMethod;)Lca/mcgill/sable/soot/Body; */

Class xt_resolveFor_S_nZHdz[] = { 0 };

Object resolveFor_S_nZHdz(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_StoredBody*)a2)->bodyRep;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getBody_B_2pFZ5.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_StoredBody[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','t','o','r','e','d','B','o','d','y'};

const void *st_ca_mcgill_sable_soot_StoredBody[] = {
    ch_ca_mcgill_sable_soot_StoredBody+31,	/* 0. ca.mcgill.sable.soot.StoredBody */
    0};
