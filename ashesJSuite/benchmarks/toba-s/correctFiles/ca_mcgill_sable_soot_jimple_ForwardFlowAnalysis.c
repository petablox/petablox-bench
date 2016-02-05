/*  ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.c -- from Java class ca.mcgill.sable.soot.jimple.ForwardFlowAnalysis  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.h"
#include "ca_mcgill_sable_soot_jimple_FlowAnalysis.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtGraph.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_HashSet.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.C,
    &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtGraph.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_ca_mcgill_sable_util_HashSet.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis[];
extern const void *st_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis[];
extern Class xt_init_S_ZNWog[];
extern Class xt_isForward__5gFPz[];
extern Class xt_doAnalysis__XeB30[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(47) nmchars = {&acl_char, 0, 47, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','o','r','w','a','r','d','F',
'l','o','w','A','n','a','l','y','s','i','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 47 };
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
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis, stmtToAfterFlow), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,0,0x4,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis, stmtToBeforeFlow), 0,(const Char *)&nmiv_1,16,(const Char *)&sgiv_1,26,0,0x4,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis, graph), 0,(const Char *)&nmiv_2,5,(const Char *)&sgiv_2,39,0,0x0,2}, 
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
} inr_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis cl_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis),
    21,
    0,
    3,
    0,
    3, supers,
    0, 0, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis,
    st_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis,
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
	{TMIT_native_code, init_S_ZNWog,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,42,1,0x1,0,xt_init_S_ZNWog},
	{TMIT_abstract, 0,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,20,0,0x404,1,0},
	{TMIT_native_code, isForward__5gFPz,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,3,1,0x4,1,xt_isForward__5gFPz},
	{TMIT_abstract, 0,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,73,0,0x404,3,0},
	{TMIT_abstract, 0,(const Char *)&nmim_16,5,
	(const Char *)&sgim_16,57,0,0x404,4,0},
	{TMIT_abstract, 0,(const Char *)&nmim_17,4,
	(const Char *)&sgim_17,39,0,0x404,5,0},
	{TMIT_native_code, doAnalysis__XeB30,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,3,1,0x4,2,xt_doAnalysis__XeB30},
	{TMIT_native_code, getFlowAfterStmt_S_I5bTv,(const Char *)&nmim_19,16,
	(const Char *)&sgim_19,54,0,0x1,7,0},
	{TMIT_native_code, getFlowBeforeStmt_S_vm3Xd,(const Char *)&nmim_20,17,
	(const Char *)&sgim_20,54,0,0x1,8,0},
    } /* end of methodsigs */
};


/*M init_S_ZNWog: ca.mcgill.sable.soot.jimple.ForwardFlowAnalysis.<init>(Lca/mcgill/sable/soot/jimple/StmtGraph;)V */

Class xt_init_S_ZNWog[] = { 0 };

Void init_S_ZNWog(Object p0, Object p1)
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
	init_S_yU0ut(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isForward__5gFPz: ca.mcgill.sable.soot.jimple.ForwardFlowAnalysis.isForward()Z */

Class xt_isForward__5gFPz[] = { 0 };

Boolean isForward__5gFPz(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M doAnalysis__XeB30: ca.mcgill.sable.soot.jimple.ForwardFlowAnalysis.doAnalysis()V */

Class xt_doAnalysis__XeB30[] = { 0 };

Void doAnalysis__XeB30(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av5, av6, av7, av8, av9, av10, av11, av12;
Int i0, i1, i2, i3, i4;
Int iv3, iv4;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av1 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->graph;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		size__5IdVG.f(a1);
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->graph;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		iterator__RqNON.f(a1);
	av5 = a1;
	GOTO(36,L2);

L1:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addLast_O_IGCXT.f(a1,a2);
	a1 = av2;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_HashSet*)a1)->class->M.
		add_O_pRDEj.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToBeforeFlow;
	a2 = av6;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a3)->class->M.
		newInitialFlow__V45Sv.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToAfterFlow;
	a2 = av6;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a3)->class->M.
		newInitialFlow__V45Sv.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L2:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(103,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		newInitialFlow__V45Sv.f(a1);
	av6 = a1;
	GOTO(112,L10);

L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av2;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_HashSet*)a1)->class->M.
		remove_O_6pKPl.f(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a2)->stmtToAfterFlow;
	a3 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	a3 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		copy_OO_u6KNw.f(a1,a2,a3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->graph;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		getPredsOf_S_DYcxP.f(a1,a2);
	av10 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToBeforeFlow;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	av7 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	i2 = 1;
	if (i1 != i2)
		GOTO(180,L4);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a2)->stmtToAfterFlow;
	a3 = av10;
	i4 = 0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1247717038)->f)(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		copy_OO_u6KNw.f(a1,a2,a3);
	GOTO(206,L7);

L4:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	if (i1 == 0)
		GOTO(216,L7);
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av11 = a1;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a2)->stmtToAfterFlow;
	a3 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		copy_OO_u6KNw.f(a1,a2,a3);
	GOTO(250,L6);

L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToAfterFlow;
	a2 = av11;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	av12 = a1;
	a1 = av0;
	a2 = av7;
	a3 = av12;
	a4 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		merge_OOO_LGa6A.f(a1,a2,a3,a4);
L6:	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(288,L5);
L7:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToAfterFlow;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	av8 = a1;
	a1 = av0;
	a2 = av7;
	a3 = av9;
	a4 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		flowThrough_OSO_pPHbY.f(a1,a2,a3,a4);
	iv4 += 1;
	a1 = av8;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(324,L10);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->graph;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		getSuccsOf_S_ma3uS.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av11 = a1;
	GOTO(343,L9);

L8:	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av12 = a1;
	a1 = av2;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_HashSet*)a1)->class->M.
		contains_O_3pEgA.f(a1,a2);
	if (i1 != 0)
		GOTO(364,L9);
	a1 = av1;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addLast_O_IGCXT.f(a1,a2);
	a1 = av2;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_HashSet*)a1)->class->M.
		add_O_pRDEj.f(a1,a2);
L9:	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(387,L8);
L10:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		isEmpty__pVAEs.f(a1);
	if (i1 == 0)
		GOBACK(394,L3);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowNodes;
	i2 = iv3;
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowNodes = i1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowComputations;
	i2 = iv4;
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowComputations = i1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','o','r','w','a','r','d','F',
'l','o','w','A','n','a','l','y','s','i','s'};

const void *st_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis[] = {
    ch_ca_mcgill_sable_soot_jimple_ForwardFlowAnalysis+47,	/* 0. ca.mcgill.sable.soot.jimple.ForwardFlowA */
    0};
