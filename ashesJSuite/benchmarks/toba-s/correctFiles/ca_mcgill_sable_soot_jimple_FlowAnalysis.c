/*  ca_mcgill_sable_soot_jimple_FlowAnalysis.c -- from Java class ca.mcgill.sable.soot.jimple.FlowAnalysis  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_FlowAnalysis.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_StmtGraph.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_Map.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtGraph.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_Map.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_FlowAnalysis[];
extern const void *st_ca_mcgill_sable_soot_jimple_FlowAnalysis[];
extern Class xt_init_S_yU0ut[];
extern Class xt_newInitialFlow__V45Sv[];
extern Class xt_isForward__2joHv[];
extern Class xt_flowThrough_OSO_pPHbY[];
extern Class xt_merge_OOO_LGa6A[];
extern Class xt_copy_OO_u6KNw[];
extern Class xt_doAnalysis__orbB4[];
extern Class xt_getFlowAfterStmt_S_I5bTv[];
extern Class xt_getFlowBeforeStmt_S_vm3Xd[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(40) nmchars = {&acl_char, 0, 40, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','w','A','n','a','l',
'y','s','i','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 40 };
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
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis, stmtToAfterFlow), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,1,0x4,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis, stmtToBeforeFlow), 0,(const Char *)&nmiv_1,16,(const Char *)&sgiv_1,26,1,0x4,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis, graph), 0,(const Char *)&nmiv_2,5,(const Char *)&sgiv_2,39,1,0x0,2}, 
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
} inr_ca_mcgill_sable_soot_jimple_FlowAnalysis = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_FlowAnalysis cl_ca_mcgill_sable_soot_jimple_FlowAnalysis = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis),
    21,
    0,
    3,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_FlowAnalysis,
    st_ca_mcgill_sable_soot_jimple_FlowAnalysis,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_FlowAnalysis,
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
	{TMIT_native_code, init_S_yU0ut,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,42,1,0x1,0,xt_init_S_yU0ut},
	{TMIT_abstract, 0,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,20,1,0x404,1,xt_newInitialFlow__V45Sv},
	{TMIT_abstract, 0,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,3,1,0x404,2,xt_isForward__2joHv},
	{TMIT_abstract, 0,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,73,1,0x404,3,xt_flowThrough_OSO_pPHbY},
	{TMIT_abstract, 0,(const Char *)&nmim_16,5,
	(const Char *)&sgim_16,57,1,0x404,4,xt_merge_OOO_LGa6A},
	{TMIT_abstract, 0,(const Char *)&nmim_17,4,
	(const Char *)&sgim_17,39,1,0x404,5,xt_copy_OO_u6KNw},
	{TMIT_abstract, 0,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,3,1,0x404,6,xt_doAnalysis__orbB4},
	{TMIT_native_code, getFlowAfterStmt_S_I5bTv,(const Char *)&nmim_19,16,
	(const Char *)&sgim_19,54,1,0x1,7,xt_getFlowAfterStmt_S_I5bTv},
	{TMIT_native_code, getFlowBeforeStmt_S_vm3Xd,(const Char *)&nmim_20,17,
	(const Char *)&sgim_20,54,1,0x1,8,xt_getFlowBeforeStmt_S_vm3Xd},
    } /* end of methodsigs */
};

static union fconst fc1 = { 0x3f333333 };

/*M init_S_yU0ut: ca.mcgill.sable.soot.jimple.FlowAnalysis.<init>(Lca/mcgill/sable/soot/jimple/StmtGraph;)V */

Class xt_init_S_yU0ut[] = { 0 };

Void init_S_yU0ut(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a4)->class->M.
		size__5IdVG.f(a4);
	i5 = 2;
	i4 = i4 * i5;
	i5 = 1;
	i4 = i4 + i5;
	f5 = fc1.v;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a3,i4,f5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToAfterFlow = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a4)->class->M.
		size__5IdVG.f(a4);
	i5 = 2;
	i4 = i4 * i5;
	i5 = 1;
	i4 = i4 + i5;
	f5 = fc1.v;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a3,i4,f5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToBeforeFlow = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->graph = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M newInitialFlow__V45Sv: ca.mcgill.sable.soot.jimple.FlowAnalysis.newInitialFlow()Ljava/lang/Object; */

Class xt_newInitialFlow__V45Sv[] = { 0 };

/*M isForward__2joHv: ca.mcgill.sable.soot.jimple.FlowAnalysis.isForward()Z */

Class xt_isForward__2joHv[] = { 0 };

/*M flowThrough_OSO_pPHbY: ca.mcgill.sable.soot.jimple.FlowAnalysis.flowThrough(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/Stmt;Ljava/lang/Object;)V */

Class xt_flowThrough_OSO_pPHbY[] = { 0 };

/*M merge_OOO_LGa6A: ca.mcgill.sable.soot.jimple.FlowAnalysis.merge(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V */

Class xt_merge_OOO_LGa6A[] = { 0 };

/*M copy_OO_u6KNw: ca.mcgill.sable.soot.jimple.FlowAnalysis.copy(Ljava/lang/Object;Ljava/lang/Object;)V */

Class xt_copy_OO_u6KNw[] = { 0 };

/*M doAnalysis__orbB4: ca.mcgill.sable.soot.jimple.FlowAnalysis.doAnalysis()V */

Class xt_doAnalysis__orbB4[] = { 0 };

/*M getFlowAfterStmt_S_I5bTv: ca.mcgill.sable.soot.jimple.FlowAnalysis.getFlowAfterStmt(Lca/mcgill/sable/soot/jimple/Stmt;)Ljava/lang/Object; */

Class xt_getFlowAfterStmt_S_I5bTv[] = { 0 };

Object getFlowAfterStmt_S_I5bTv(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToAfterFlow;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getFlowBeforeStmt_S_vm3Xd: ca.mcgill.sable.soot.jimple.FlowAnalysis.getFlowBeforeStmt(Lca/mcgill/sable/soot/jimple/Stmt;)Ljava/lang/Object; */

Class xt_getFlowBeforeStmt_S_vm3Xd[] = { 0 };

Object getFlowBeforeStmt_S_vm3Xd(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->stmtToBeforeFlow;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_FlowAnalysis[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','w','A','n','a','l',
'y','s','i','s'};

const void *st_ca_mcgill_sable_soot_jimple_FlowAnalysis[] = {
    ch_ca_mcgill_sable_soot_jimple_FlowAnalysis+40,	/* 0. ca.mcgill.sable.soot.jimple.FlowAnalysis */
    0};
