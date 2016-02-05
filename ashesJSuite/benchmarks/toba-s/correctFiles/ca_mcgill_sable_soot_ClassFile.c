/*  ca_mcgill_sable_soot_ClassFile.c -- from Java class ca.mcgill.sable.soot.ClassFile  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_ClassFile.h"
#include "ca_mcgill_sable_soot_BodyRepresentation.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ClassFileBody.h"
#include "java_lang_RuntimeException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_ClassFile.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_BodyRepresentation.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ClassFileBody.C,
    &cl_java_lang_RuntimeException.C,
};

extern const Char ch_ca_mcgill_sable_soot_ClassFile[];
extern const void *st_ca_mcgill_sable_soot_ClassFile[];
extern Class xt_init__Bl3nr[];
extern Class xt_v__w18M7[];
extern Class xt_buildBodyOfFrom_SBi_i47Hl[];
extern Class xt_clinit__I5Ya8[];

#define HASHMASK 0x7
/*  0.  5b287c48  (0)  buildBodyOfFrom  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    1529379912, &cl_ca_mcgill_sable_soot_ClassFile.M.buildBodyOfFrom_SBi_i47Hl,
    -1992104095, &cl_ca_mcgill_sable_soot_ClassFile.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_ClassFile.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_ClassFile.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_ClassFile.M.toString__4d9OF, 0, 0,
};

static const CARRAY(30) nmchars = {&acl_char, 0, 30, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','C','l','a','s','s','F','i','l','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 30 };
static const Char nmcv_0[] = {
'c','l','a','s','s','F','i','l','e','R','e','p','r','e','s','e','n','t',
'a','t','i','o','n'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','C','l','a','s','s','F','i','l','e',';'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','C','l','a','s','s','F','i','l','e',';'};
static const Char nmsm_1[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_1[] = {
'(',')','V'};
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
'b','u','i','l','d','B','o','d','y','O','f','F','r','o','m'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','B','o','d','y',';','I',')','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','B','o','d','y',';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_ClassFile.V.classFileRepresentation,(const Char *)&nmcv_0,23,(const Char *)&sgcv_0,32,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v__w18M7,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,34,
	1,0x9,1,xt_v__w18M7},
    {TMIT_native_code, (Void(*)())clinit__I5Ya8,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,3,xt_clinit__I5Ya8},
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
} inr_ca_mcgill_sable_soot_ClassFile = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_ClassFile.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_ClassFile cl_ca_mcgill_sable_soot_ClassFile = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_ClassFile),
    13,
    2,
    0,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_soot_ClassFile,
    st_ca_mcgill_sable_soot_ClassFile,
    clinit__I5Ya8,
    init__Bl3nr,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_ClassFile,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__Bl3nr,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__Bl3nr},
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
	{TMIT_native_code, buildBodyOfFrom_SBi_i47Hl,(const Char *)&nmim_12,15,
	(const Char *)&sgim_12,90,1,0x8001,2,xt_buildBodyOfFrom_SBi_i47Hl},
    } /* end of methodsigs */
};


/*M init__Bl3nr: ca.mcgill.sable.soot.ClassFile.<init>()V */

Class xt_init__Bl3nr[] = { 0 };

Void init__Bl3nr(Object p0)
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

/*M v__w18M7: ca.mcgill.sable.soot.ClassFile.v()Lca/mcgill/sable/soot/ClassFile; */

Class xt_v__w18M7[] = { 0 };

Object v__w18M7(void)
{
Object a0, a1;
PROLOGUE;


	if (cl_ca_mcgill_sable_soot_ClassFile.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_ClassFile.C);

L0:	a1 = cl_ca_mcgill_sable_soot_ClassFile.V.classFileRepresentation;
	return a1;

	/*NOTREACHED*/
}

/*M buildBodyOfFrom_SBi_i47Hl: ca.mcgill.sable.soot.ClassFile.buildBodyOfFrom(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/soot/Body;I)Lca/mcgill/sable/soot/Body; */

Class xt_buildBodyOfFrom_SBi_i47Hl[] = { 0 };

Object buildBodyOfFrom_SBi_i47Hl(Object p0, Object p1, Object p2, Int p3)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = av2;
	if (a1 == 0)
		GOTO(1,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_ClassFile[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = new(&cl_ca_mcgill_sable_soot_ClassFileBody.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_KOdFx(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__I5Ya8: ca.mcgill.sable.soot.ClassFile.<clinit>()V */

Class xt_clinit__I5Ya8[] = { 0 };

Void clinit__I5Ya8(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_ClassFile.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Bl3nr(a2);
	cl_ca_mcgill_sable_soot_ClassFile.V.classFileRepresentation = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_ClassFile[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','C','l','a','s','s','F','i','l','e','I','l','l','e','g','a',
'l',' ','s','o','u','r','c','e',' ','f','o','r',' ','t','h','e',' ','C',
'l','a','s','s','F','i','l','e',' ','b','o','d','y','.'};

const void *st_ca_mcgill_sable_soot_ClassFile[] = {
    ch_ca_mcgill_sable_soot_ClassFile+30,	/* 0. ca.mcgill.sable.soot.ClassFile */
    ch_ca_mcgill_sable_soot_ClassFile+68,	/* 1. Illegal source for the ClassFile body. */
    0};
