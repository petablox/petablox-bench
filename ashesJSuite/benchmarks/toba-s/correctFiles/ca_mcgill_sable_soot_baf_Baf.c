/*  ca_mcgill_sable_soot_baf_Baf.c -- from Java class ca.mcgill.sable.soot.baf.Baf  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_baf_Baf.h"
#include "ca_mcgill_sable_soot_BodyRepresentation.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_baf_BafBody.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_baf_Baf.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_BodyRepresentation.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_baf_BafBody.C,
};

extern const Char ch_ca_mcgill_sable_soot_baf_Baf[];
extern const void *st_ca_mcgill_sable_soot_baf_Baf[];
extern Class xt_init__6GrRQ[];
extern Class xt_v__iF6BX[];
extern Class xt_buildBodyOfFrom_SBi_j3ZqN[];
extern Class xt_clinit__tMTqG[];

#define HASHMASK 0x7
/*  0.  5b287c48  (0)  buildBodyOfFrom  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    1529379912, &cl_ca_mcgill_sable_soot_baf_Baf.M.buildBodyOfFrom_SBi_j3ZqN,
    -1992104095, &cl_ca_mcgill_sable_soot_baf_Baf.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_baf_Baf.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_baf_Baf.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_baf_Baf.M.toString__4d9OF, 0, 0,
};

static const CARRAY(28) nmchars = {&acl_char, 0, 28, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','b','a','f','.','B','a','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 28 };
static const Char nmcv_0[] = {
'b','a','f','R','e','p','r','e','s','e','n','t','a','t','i','o','n'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','b','a','f','/','B','a','f',';'};
static const Char nmsm_0[] = {
'v'};
static const Char sgsm_0[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','b','a','f','/','B','a','f',';'};
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
    {0,&cl_ca_mcgill_sable_soot_baf_Baf.V.bafRepresentation,(const Char *)&nmcv_0,17,(const Char *)&sgcv_0,30,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())v__iF6BX,
	(const Char *)&nmsm_0,1,(const Char *)&sgsm_0,32,
	1,0x9,1,xt_v__iF6BX},
    {TMIT_native_code, (Void(*)())clinit__tMTqG,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,3,
	1,0x8,3,xt_clinit__tMTqG},
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
} inr_ca_mcgill_sable_soot_baf_Baf = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_baf_Baf.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_baf_Baf cl_ca_mcgill_sable_soot_baf_Baf = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_baf_Baf),
    13,
    2,
    0,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_baf_Baf,
    st_ca_mcgill_sable_soot_baf_Baf,
    clinit__tMTqG,
    init__6GrRQ,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_baf_Baf,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__6GrRQ,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__6GrRQ},
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
	{TMIT_native_code, buildBodyOfFrom_SBi_j3ZqN,(const Char *)&nmim_12,15,
	(const Char *)&sgim_12,90,1,0x8001,2,xt_buildBodyOfFrom_SBi_j3ZqN},
    } /* end of methodsigs */
};


/*M init__6GrRQ: ca.mcgill.sable.soot.baf.Baf.<init>()V */

Class xt_init__6GrRQ[] = { 0 };

Void init__6GrRQ(Object p0)
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

/*M v__iF6BX: ca.mcgill.sable.soot.baf.Baf.v()Lca/mcgill/sable/soot/baf/Baf; */

Class xt_v__iF6BX[] = { 0 };

Object v__iF6BX(void)
{
Object a0, a1;
PROLOGUE;


	if (cl_ca_mcgill_sable_soot_baf_Baf.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_baf_Baf.C);

L0:	a1 = cl_ca_mcgill_sable_soot_baf_Baf.V.bafRepresentation;
	return a1;

	/*NOTREACHED*/
}

/*M buildBodyOfFrom_SBi_j3ZqN: ca.mcgill.sable.soot.baf.Baf.buildBodyOfFrom(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/soot/Body;I)Lca/mcgill/sable/soot/Body; */

Class xt_buildBodyOfFrom_SBi_j3ZqN[] = { 0 };

Object buildBodyOfFrom_SBi_j3ZqN(Object p0, Object p1, Object p2, Int p3)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_baf_BafBody.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_92fjw(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__tMTqG: ca.mcgill.sable.soot.baf.Baf.<clinit>()V */

Class xt_clinit__tMTqG[] = { 0 };

Void clinit__tMTqG(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_baf_Baf.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__6GrRQ(a2);
	cl_ca_mcgill_sable_soot_baf_Baf.V.bafRepresentation = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_baf_Baf[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','b','a','f','.','B','a','f'};

const void *st_ca_mcgill_sable_soot_baf_Baf[] = {
    ch_ca_mcgill_sable_soot_baf_Baf+28,	/* 0. ca.mcgill.sable.soot.baf.Baf */
    0};
