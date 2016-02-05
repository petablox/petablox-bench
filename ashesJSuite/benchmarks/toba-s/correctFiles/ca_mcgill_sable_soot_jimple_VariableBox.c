/*  ca_mcgill_sable_soot_jimple_VariableBox.c -- from Java class ca.mcgill.sable.soot.jimple.VariableBox  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_VariableBox.h"
#include "ca_mcgill_sable_soot_jimple_AbstractValueBox.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_ConcreteRef.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_NextNextStmtRef.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_VariableBox.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractValueBox.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_ConcreteRef.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_VariableBox[];
extern const void *st_ca_mcgill_sable_soot_jimple_VariableBox[];
extern Class xt_init_V_a8vuj[];
extern Class xt_canContainValue_V_FJI0R[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  c.  db354d8c  (c)  setValue  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
/*  12.  ff73cc12  (12)  canContainValue  */
/*  1e.  caec1d3e  (1e)  getValue  */
static const struct ihash htable[32] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_VariableBox.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -617263732, &cl_ca_mcgill_sable_soot_jimple_VariableBox.M.setValue_V_iO6Xi,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_VariableBox.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_VariableBox.M.toString__4d9OF,
    0, 0, 0, 0,
    -9188334, &cl_ca_mcgill_sable_soot_jimple_VariableBox.M.canContainValue_V_FJI0R,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -890495682, &cl_ca_mcgill_sable_soot_jimple_VariableBox.M.getValue__qJWMb,
    0, 0,
};

static const CARRAY(39) nmchars = {&acl_char, 0, 39, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','V','a','r','i','a','b','l','e',
'B','o','x'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 39 };
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
static const Char nmim_15[] = {
'<','i','n','i','t','>'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_VariableBox, value), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,35,0,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_VariableBox = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_VariableBox.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_VariableBox cl_ca_mcgill_sable_soot_jimple_VariableBox = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_VariableBox),
    16,
    0,
    1,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_VariableBox,
    st_ca_mcgill_sable_soot_jimple_VariableBox,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_VariableBox,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__JH5kK,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,2,0},
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
	(const Char *)&sgim_12,38,0,0x8001,0,0},
	{TMIT_native_code, getValue__qJWMb,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,37,0,0x8001,1,0},
	{TMIT_native_code, canContainValue_V_FJI0R,(const Char *)&nmim_14,15,
	(const Char *)&sgim_14,38,1,0x8001,1,xt_canContainValue_V_FJI0R},
	{TMIT_native_code, init_V_a8vuj,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,38,1,0x0,0,xt_init_V_a8vuj},
    } /* end of methodsigs */
};


/*M init_V_a8vuj: ca.mcgill.sable.soot.jimple.VariableBox.<init>(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_init_V_a8vuj[] = { 0 };

Void init_V_a8vuj(Object p0, Object p1)
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
	init__JH5kK(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractValueBox*)a1)->class->M.
		setValue_V_iO6Xi.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M canContainValue_V_FJI0R: ca.mcgill.sable.soot.jimple.VariableBox.canContainValue(Lca/mcgill/sable/soot/jimple/Value;)Z */

Class xt_canContainValue_V_FJI0R[] = { 0 };

Boolean canContainValue_V_FJI0R(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1;
Object av0, av1;
Int i0, i1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(4,L2);
	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ConcreteRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(11,L1);
	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NextNextStmtRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(18,L2);
L1:	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_VariableBox[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','V','a','r','i','a','b','l','e',
'B','o','x'};

const void *st_ca_mcgill_sable_soot_jimple_VariableBox[] = {
    ch_ca_mcgill_sable_soot_jimple_VariableBox+39,	/* 0. ca.mcgill.sable.soot.jimple.VariableBox */
    0};
