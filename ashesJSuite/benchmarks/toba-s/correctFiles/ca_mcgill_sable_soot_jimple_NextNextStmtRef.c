/*  ca_mcgill_sable_soot_jimple_NextNextStmtRef.c -- from Java class ca.mcgill.sable.soot.jimple.NextNextStmtRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_NextNextStmtRef.h"
#include "ca_mcgill_sable_soot_jimple_ConcreteRef.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_StmtAddressType.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_RefSwitch.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ConcreteRef.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_StmtAddressType.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_NextNextStmtRef[];
extern const void *st_ca_mcgill_sable_soot_jimple_NextNextStmtRef[];
extern Class xt_init__UUbTC[];
extern Class xt_toString__YtHrJ[];
extern Class xt_toBriefString__aIliv[];
extern Class xt_getUseBoxes__S4UWH[];
extern Class xt_getType__RJ0eO[];
extern Class xt_apply_S_6sIEP[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.M.getType__RJ0eO,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.M.getUseBoxes__S4UWH,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.M.toBriefString__aIliv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.M.apply_S_6sIEP,
    0, 0,
};

static const CARRAY(43) nmchars = {&acl_char, 0, 43, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','e','x','t','N','e','x','t',
'S','t','m','t','R','e','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 43 };
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
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_12[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_13[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_14[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_15[] = {
'a','p','p','l','y'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
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
} inr_ca_mcgill_sable_soot_jimple_NextNextStmtRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_NextNextStmtRef),
    16,
    0,
    0,
    0,
    2, supers,
    2, 2, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_NextNextStmtRef,
    st_ca_mcgill_sable_soot_jimple_NextNextStmtRef,
    0,
    init__UUbTC,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_NextNextStmtRef,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__UUbTC,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,0,xt_init__UUbTC},
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
	{TMIT_native_code, toString__YtHrJ,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,1,xt_toString__YtHrJ},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, toBriefString__aIliv,(const Char *)&nmim_12,13,
	(const Char *)&sgim_12,20,1,0x8001,2,xt_toBriefString__aIliv},
	{TMIT_native_code, getUseBoxes__S4UWH,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,1,0x8001,3,xt_getUseBoxes__S4UWH},
	{TMIT_native_code, getType__RJ0eO,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,29,1,0x8001,4,xt_getType__RJ0eO},
	{TMIT_native_code, apply_S_6sIEP,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,32,1,0x8001,5,xt_apply_S_6sIEP},
    } /* end of methodsigs */
};


/*M init__UUbTC: ca.mcgill.sable.soot.jimple.NextNextStmtRef.<init>()V */

Class xt_init__UUbTC[] = { 0 };

Void init__UUbTC(Object p0)
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

/*M toString__YtHrJ: ca.mcgill.sable.soot.jimple.NextNextStmtRef.toString()Ljava/lang/String; */

Class xt_toString__YtHrJ[] = { 0 };

Object toString__YtHrJ(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_jimple_NextNextStmtRef[1];
	return a1;

	/*NOTREACHED*/
}

/*M toBriefString__aIliv: ca.mcgill.sable.soot.jimple.NextNextStmtRef.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__aIliv[] = { 0 };

Object toBriefString__aIliv(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_NextNextStmtRef*)a1)->class->M.
		toString__YtHrJ.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__S4UWH: ca.mcgill.sable.soot.jimple.NextNextStmtRef.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__S4UWH[] = { 0 };

Object getUseBoxes__S4UWH(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	init_ca_mcgill_sable_soot_jimple_AbstractStmt();
	a1 = cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList;
	return a1;

	/*NOTREACHED*/
}

/*M getType__RJ0eO: ca.mcgill.sable.soot.jimple.NextNextStmtRef.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__RJ0eO[] = { 0 };

Object getType__RJ0eO(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__u8Teb();
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_6sIEP: ca.mcgill.sable.soot.jimple.NextNextStmtRef.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_6sIEP[] = { 0 };

Void apply_S_6sIEP(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-22452244)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_NextNextStmtRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','e','x','t','N','e','x','t',
'S','t','m','t','R','e','f','&','n','e','x','t','n','e','x','t','s','t',
'm','t'};

const void *st_ca_mcgill_sable_soot_jimple_NextNextStmtRef[] = {
    ch_ca_mcgill_sable_soot_jimple_NextNextStmtRef+43,	/* 0. ca.mcgill.sable.soot.jimple.NextNextStmt */
    ch_ca_mcgill_sable_soot_jimple_NextNextStmtRef+56,	/* 1. &nextnextstmt */
    0};
