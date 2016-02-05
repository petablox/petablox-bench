/*  ca_mcgill_sable_soot_jimple_SimpleEqualLocals.c -- from Java class ca.mcgill.sable.soot.jimple.SimpleEqualLocals  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_SimpleEqualLocals.h"
#include "ca_mcgill_sable_soot_jimple_EqualLocals.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_FlowAnalysis.h"
#include "ca_mcgill_sable_soot_jimple_FlowSet.h"
#include "ca_mcgill_sable_soot_jimple_LocalCopy.h"
#include "ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_EqualLocals.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.C,
    &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
    &cl_ca_mcgill_sable_soot_jimple_LocalCopy.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocals[];
extern const void *st_ca_mcgill_sable_soot_jimple_SimpleEqualLocals[];
extern Class xt_init_C_ljmVk[];
extern Class xt_isLocalEqualToAt_LLS_7B5ui[];
extern Class xt_getCopiesAt_S_WhuUB[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  4.  6759a274  (4)  getCopiesAt  */
/*  5.  e6017615  (5)  isLocalEqualToAt  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.M.clone__dslwm,
    0, 0,
    1733927540, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.M.getCopiesAt_S_WhuUB,
    -436111851, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.M.isLocalEqualToAt_LLS_7B5ui,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(45) nmchars = {&acl_char, 0, 45, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','i','m','p','l','e','E','q',
'u','a','l','L','o','c','a','l','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 45 };
static const Char nmiv_0[] = {
'l','o','c','a','l','S','t','m','t','P','a','i','r','T','o','D','e','f',
's'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_1[] = {
'l','i','v','e','L','o','c','a','l','s'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','i','v','e','L','o','c',
'a','l','s',';'};
static const Char nmiv_2[] = {
'a','n','a','l','y','s','i','s'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','i','m','p','l','e','E',
'q','u','a','l','L','o','c','a','l','s','A','n','a','l','y','s','i','s',
';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','C','o','m','p','l','e',
't','e','S','t','m','t','G','r','a','p','h',';',')','V'};
static const Char nmim_13[] = {
'i','s','L','o','c','a','l','E','q','u','a','l','T','o','A','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')','Z'};
static const Char nmim_14[] = {
'g','e','t','C','o','p','i','e','s','A','t'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocals, localStmtPairToDefs), 0,(const Char *)&nmiv_0,19,(const Char *)&sgiv_0,26,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocals, liveLocals), 0,(const Char *)&nmiv_1,10,(const Char *)&sgiv_1,40,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocals, analysis), 0,(const Char *)&nmiv_2,8,(const Char *)&sgiv_2,55,1,0x0,2}, 
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
} inr_ca_mcgill_sable_soot_jimple_SimpleEqualLocals = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocals),
    15,
    0,
    3,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocals,
    st_ca_mcgill_sable_soot_jimple_SimpleEqualLocals,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_SimpleEqualLocals,
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
	{TMIT_native_code, init_C_ljmVk,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,50,1,0x1,0,xt_init_C_ljmVk},
	{TMIT_native_code, isLocalEqualToAt_LLS_7B5ui,(const Char *)&nmim_13,16,
	(const Char *)&sgim_13,107,1,0x8001,1,xt_isLocalEqualToAt_LLS_7B5ui},
	{TMIT_native_code, getCopiesAt_S_WhuUB,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,63,1,0x8001,2,xt_getCopiesAt_S_WhuUB},
    } /* end of methodsigs */
};


/*M init_C_ljmVk: ca.mcgill.sable.soot.jimple.SimpleEqualLocals.<init>(Lca/mcgill/sable/soot/jimple/CompleteStmtGraph;)V */

Class xt_init_C_ljmVk[] = { 0 };

Void init_C_ljmVk(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
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
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.C);
	a3 = a2;
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_EBty9(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocals*)a1)->analysis = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isLocalEqualToAt_LLS_7B5ui: ca.mcgill.sable.soot.jimple.SimpleEqualLocals.isLocalEqualToAt(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Stmt;)Z */

Class xt_isLocalEqualToAt_LLS_7B5ui[] = { 0 };

Boolean isLocalEqualToAt_LLS_7B5ui(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av1;
	a2 = av2;
	if (a1 != a2)
		GOTO(2,L1);
	i1 = 1;
	return i1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocals*)a1)->analysis;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		getFlowBeforeStmt_S_vm3Xd.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_LocalCopy.C);
	a3 = a2;
	a4 = av1;
	a5 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_LL_bI5yf(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getCopiesAt_S_WhuUB: ca.mcgill.sable.soot.jimple.SimpleEqualLocals.getCopiesAt(Lca/mcgill/sable/soot/jimple/Stmt;)Lca/mcgill/sable/util/List; */

Class xt_getCopiesAt_S_WhuUB[] = { 0 };

Object getCopiesAt_S_WhuUB(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocals*)a1)->analysis;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		getFlowBeforeStmt_S_vm3Xd.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2063656072)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocals[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','i','m','p','l','e','E','q',
'u','a','l','L','o','c','a','l','s'};

const void *st_ca_mcgill_sable_soot_jimple_SimpleEqualLocals[] = {
    ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocals+45,	/* 0. ca.mcgill.sable.soot.jimple.SimpleEqualL */
    0};
