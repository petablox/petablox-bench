/*  ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.c -- from Java class ca.mcgill.sable.soot.jimple.SimpleEqualLocalsAnalysis  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.h"
#include "ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.h"
#include "ca_mcgill_sable_soot_jimple_FlowAnalysis.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_ArraySparseSet.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_FlowSet.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_LocalCopy.h"
#include "ca_mcgill_sable_soot_jimple_SimpleEqualLocals.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.C,
    &cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.C,
    &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_LocalCopy.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocals.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis[];
extern const void *st_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis[];
extern Class xt_init_S_EBty9[];
extern Class xt_newInitialFlow__Z805U[];
extern Class xt_flowThrough_OSO_R17Dx[];
extern Class xt_copy_OO_SaWPp[];
extern Class xt_merge_OOO_nIByb[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(53) nmchars = {&acl_char, 0, 53, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','i','m','p','l','e','E','q',
'u','a','l','L','o','c','a','l','s','A','n','a','l','y','s','i','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 53 };
static const Char nmiv_0[] = {
's','t','m','t','T','o','A','f','t','e','r','F','l','o','w'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_1[] = {
's','t','m','t','T','o','B','e','f','o','r','e','F','l','o','w'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_2[] = {
'g','r','a','p','h'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','G','r','a',
'p','h',';'};
static const Char nmiv_3[] = {
'e','m','p','t','y','S','e','t'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e','t',
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
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','G','r',
'a','p','h',';',')','V'};
static const Char nmim_13[] = {
'n','e','w','I','n','i','t','i','a','l','F','l','o','w'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
'i','s','F','o','r','w','a','r','d'};
static const Char sgim_14[] = {
'(',')','Z'};
static const Char nmim_15[] = {
'f','l','o','w','T','h','r','o','u','g','h'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';','L',
'j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';',')',
'V'};
static const Char nmim_16[] = {
'm','e','r','g','e'};
static const Char sgim_16[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_17[] = {
'c','o','p','y'};
static const Char sgim_17[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_18[] = {
'd','o','A','n','a','l','y','s','i','s'};
static const Char sgim_18[] = {
'(',')','V'};
static const Char nmim_19[] = {
'g','e','t','F','l','o','w','A','f','t','e','r','S','t','m','t'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmim_20[] = {
'g','e','t','F','l','o','w','B','e','f','o','r','e','S','t','m','t'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis, stmtToAfterFlow), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,0,0x4,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis, stmtToBeforeFlow), 0,(const Char *)&nmiv_1,16,(const Char *)&sgiv_1,26,0,0x4,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis, graph), 0,(const Char *)&nmiv_2,5,(const Char *)&sgiv_2,39,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis, emptySet), 0,(const Char *)&nmiv_3,8,(const Char *)&sgiv_3,37,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis cl_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis),
    21,
    0,
    4,
    0,
    4, supers,
    0, 0, inters, HASHMASK, htable,
    8, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis,
    st_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis,
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
	{TMIT_native_code, init_S_EBty9,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,42,1,0x1,0,xt_init_S_EBty9},
	{TMIT_native_code, newInitialFlow__Z805U,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,20,1,0x4,1,xt_newInitialFlow__Z805U},
	{TMIT_native_code, isForward__5gFPz,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,3,0,0x4,1,0},
	{TMIT_native_code, flowThrough_OSO_R17Dx,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,73,1,0x4,2,xt_flowThrough_OSO_R17Dx},
	{TMIT_native_code, merge_OOO_nIByb,(const Char *)&nmim_16,5,
	(const Char *)&sgim_16,57,1,0x4,4,xt_merge_OOO_nIByb},
	{TMIT_native_code, copy_OO_SaWPp,(const Char *)&nmim_17,4,
	(const Char *)&sgim_17,39,1,0x4,3,xt_copy_OO_SaWPp},
	{TMIT_native_code, doAnalysis__XeB30,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,3,0,0x4,2,0},
	{TMIT_native_code, getFlowAfterStmt_S_I5bTv,(const Char *)&nmim_19,16,
	(const Char *)&sgim_19,54,0,0x1,7,0},
	{TMIT_native_code, getFlowBeforeStmt_S_vm3Xd,(const Char *)&nmim_20,17,
	(const Char *)&sgim_20,54,0,0x1,8,0},
    } /* end of methodsigs */
};


/*M init_S_EBty9: ca.mcgill.sable.soot.jimple.SimpleEqualLocalsAnalysis.<init>(Lca/mcgill/sable/soot/jimple/StmtGraph;)V */

Class xt_init_S_EBty9[] = { 0 };

Void init_S_EBty9(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_S_ZNWog(a1,a2);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__keSYx(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis*)a1)->emptySet = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis*)a1)->class->M.
		doAnalysis__XeB30.f(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInitialFlow__Z805U: ca.mcgill.sable.soot.jimple.SimpleEqualLocalsAnalysis.newInitialFlow()Ljava/lang/Object; */

Class xt_newInitialFlow__Z805U[] = { 0 };

Object newInitialFlow__Z805U(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis*)a1)->emptySet;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1275949010)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M flowThrough_OSO_R17Dx: ca.mcgill.sable.soot.jimple.SimpleEqualLocalsAnalysis.flowThrough(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/Stmt;Ljava/lang/Object;)V */

Class xt_flowThrough_OSO_R17Dx[] = { 0 };

Void flowThrough_OSO_R17Dx(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av4;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,350132769)->f)(a1,a2);
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(25,L15);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(44,L15);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2063656072)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av8 = a1;
	GOTO(73,L3);

L1:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LocalCopy.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a1)->leftLocal;
	a2 = av7;
	if (a1 == a2)
		GOTO(95,L2);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a1)->rightLocal;
	a2 = av7;
	if (a1 != a2)
		GOTO(105,L3);
L2:	a1 = av5;
	a2 = av9;
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1023770756)->f)(a1,a2,a3);
L3:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(126,L1);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1235668254)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(139,L15);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1235668254)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av7;
	a2 = av9;
	if (a1 == a2)
		GOTO(158,L15);
	a1 = av5;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_LocalCopy.C);
	a3 = a2;
	a4 = av7;
	a5 = av9;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_LL_bI5yf(a3,a4,a5);
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1534991431)->f)(a1,a2,a3);
	a1 = av5;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_LocalCopy.C);
	a3 = a2;
	a4 = av9;
	a5 = av7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_LL_bI5yf(a3,a4,a5);
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1534991431)->f)(a1,a2,a3);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2063656072)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av8 = a1;
	GOTO(215,L14);

L4:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LocalCopy.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a1)->leftLocal;
	a2 = av9;
	if (a1 == a2)
		GOTO(237,L5);
	i1 = 0;
	GOTO(241,L6);

L5:	i1 = 1;
L6:	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a2)->rightLocal;
	a3 = av7;
	if (a2 != a3)
		GOTO(252,L7);
	i2 = 0;
	GOTO(256,L8);

L7:	i2 = 1;
L8:	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(261,L9);
	a1 = av5;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_LocalCopy.C);
	a3 = a2;
	a4 = av7;
	a5 = av10;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a5)->rightLocal;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_LL_bI5yf(a3,a4,a5);
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1534991431)->f)(a1,a2,a3);
L9:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a1)->rightLocal;
	a2 = av9;
	if (a1 == a2)
		GOTO(294,L10);
	i1 = 0;
	GOTO(298,L11);

L10:	i1 = 1;
L11:	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a2)->leftLocal;
	a3 = av7;
	if (a2 != a3)
		GOTO(309,L12);
	i2 = 0;
	GOTO(313,L13);

L12:	i2 = 1;
L13:	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(318,L14);
	a1 = av5;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_LocalCopy.C);
	a3 = a2;
	a4 = av10;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_LocalCopy*)a4)->leftLocal;
	a5 = av7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_LL_bI5yf(a3,a4,a5);
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1534991431)->f)(a1,a2,a3);
L14:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(351,L4);
L15:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M copy_OO_SaWPp: ca.mcgill.sable.soot.jimple.SimpleEqualLocalsAnalysis.copy(Ljava/lang/Object;Ljava/lang/Object;)V */

Class xt_copy_OO_SaWPp[] = { 0 };

Void copy_OO_SaWPp(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av3;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,350132769)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M merge_OOO_nIByb: ca.mcgill.sable.soot.jimple.SimpleEqualLocalsAnalysis.merge(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V */

Class xt_merge_OOO_nIByb[] = { 0 };

Void merge_OOO_nIByb(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5, av6;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av4;
	a2 = av5;
	a3 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1485036456)->f)(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','i','m','p','l','e','E','q',
'u','a','l','L','o','c','a','l','s','A','n','a','l','y','s','i','s'};

const void *st_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis[] = {
    ch_ca_mcgill_sable_soot_jimple_SimpleEqualLocalsAnalysis+53,	/* 0. ca.mcgill.sable.soot.jimple.SimpleEqualL */
    0};
