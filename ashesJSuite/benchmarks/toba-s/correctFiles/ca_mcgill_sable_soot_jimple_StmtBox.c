/*  ca_mcgill_sable_soot_jimple_StmtBox.c -- from Java class ca.mcgill.sable.soot.jimple.StmtBox  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_StmtBox.h"
#include "ca_mcgill_sable_soot_jimple_UnitBox.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_UnitBox.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_StmtBox[];
extern const void *st_ca_mcgill_sable_soot_jimple_StmtBox[];
extern Class xt_init_S_xOXUp[];
extern Class xt_setUnit_U_NPbFx[];
extern Class xt_getUnit__zFD9S[];

#define HASHMASK 0x3f
/*  8.  b6ccbf08  (8)  getUnit  */
/*  e.  c2aafd4e  (e)  equals  */
/*  21.  8942e761  (21)  hashCode  */
/*  2e.  48d8292e  (2e)  setUnit  */
/*  2f.  489f8e6f  (2f)  toString  */
static const struct ihash htable[64] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1228095736, &cl_ca_mcgill_sable_soot_jimple_StmtBox.M.getUnit__zFD9S,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_StmtBox.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_StmtBox.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1222125870, &cl_ca_mcgill_sable_soot_jimple_StmtBox.M.setUnit_U_NPbFx,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_StmtBox.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(35) nmchars = {&acl_char, 0, 35, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t','B','o','x'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 35 };
static const Char nmiv_0[] = {
's','t','m','t'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'V'};
static const Char nmim_13[] = {
's','e','t','U','n','i','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'V'};
static const Char nmim_14[] = {
'g','e','t','U','n','i','t'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_StmtBox, stmt), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,34,1,0x2,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_StmtBox = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_StmtBox.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_StmtBox cl_ca_mcgill_sable_soot_jimple_StmtBox = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_StmtBox),
    15,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_StmtBox,
    st_ca_mcgill_sable_soot_jimple_StmtBox,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_StmtBox,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
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
	{TMIT_native_code, init_S_xOXUp,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,37,1,0x1,0,xt_init_S_xOXUp},
	{TMIT_native_code, setUnit_U_NPbFx,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,37,1,0x8001,1,xt_setUnit_U_NPbFx},
	{TMIT_native_code, getUnit__zFD9S,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,36,1,0x8001,2,xt_getUnit__zFD9S},
    } /* end of methodsigs */
};


/*M init_S_xOXUp: ca.mcgill.sable.soot.jimple.StmtBox.<init>(Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_init_S_xOXUp[] = { 0 };

Void init_S_xOXUp(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setUnit_U_NPbFx: ca.mcgill.sable.soot.jimple.StmtBox.setUnit(Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setUnit_U_NPbFx[] = { 0 };

Void setUnit_U_NPbFx(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->stmt;
	if (a1 == 0)
		GOTO(9,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->stmt;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,300259457)->f)(a1);
	av3 = a1;
	a1 = av3;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
L1:	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->stmt = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->stmt;
	if (a1 == 0)
		GOTO(39,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->stmt;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,300259457)->f)(a1);
	av3 = a1;
	a1 = av3;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUnit__zFD9S: ca.mcgill.sable.soot.jimple.StmtBox.getUnit()Lca/mcgill/sable/soot/jimple/Unit; */

Class xt_getUnit__zFD9S[] = { 0 };

Object getUnit__zFD9S(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->stmt;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_StmtBox[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t','B','o','x'};

const void *st_ca_mcgill_sable_soot_jimple_StmtBox[] = {
    ch_ca_mcgill_sable_soot_jimple_StmtBox+35,	/* 0. ca.mcgill.sable.soot.jimple.StmtBox */
    0};
