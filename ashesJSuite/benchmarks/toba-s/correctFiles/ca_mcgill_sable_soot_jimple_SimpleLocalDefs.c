/*  ca_mcgill_sable_soot_jimple_SimpleLocalDefs.c -- from Java class ca.mcgill.sable.soot.jimple.SimpleLocalDefs  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_SimpleLocalDefs.h"
#include "ca_mcgill_sable_soot_jimple_LocalDefs.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_Body.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_Timer.h"
#include "ca_mcgill_sable_soot_jimple_BoundedFlowSet.h"
#include "ca_mcgill_sable_soot_jimple_FlowAnalysis.h"
#include "ca_mcgill_sable_soot_jimple_IntPair.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_LocalDefsFlowAnalysis.h"
#include "ca_mcgill_sable_soot_jimple_LocalStmtPair.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_Collections.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_io_PrintStream.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_LocalDefs.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_Body.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_Timer.C,
    &cl_ca_mcgill_sable_soot_jimple_BoundedFlowSet.C,
    &cl_ca_mcgill_sable_soot_jimple_FlowAnalysis.C,
    &cl_ca_mcgill_sable_soot_jimple_IntPair.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_LocalDefsFlowAnalysis.C,
    &cl_ca_mcgill_sable_soot_jimple_LocalStmtPair.C,
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_Collections.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[];
extern const void *st_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[];
extern Class xt_init_C_GvjSD[];
extern Class xt_getDefsOfAt_LS_JdScz[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
/*  1e.  5762ab9e  (1e)  getDefsOfAt  */
static const struct ihash htable[32] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1466084254, &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.M.getDefsOfAt_LS_JdScz,
    0, 0,
};

static const CARRAY(43) nmchars = {&acl_char, 0, 43, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','i','m','p','l','e','L','o',
'c','a','l','D','e','f','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 43 };
static const Char nmiv_0[] = {
'l','o','c','a','l','S','t','m','t','P','a','i','r','T','o','D','e','f',
's'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
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
'g','e','t','D','e','f','s','O','f','A','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t',
'i','l','/','L','i','s','t',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_SimpleLocalDefs, localStmtPairToDefs), 0,(const Char *)&nmiv_0,19,(const Char *)&sgiv_0,26,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_SimpleLocalDefs = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_SimpleLocalDefs),
    14,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    22, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs,
    st_ca_mcgill_sable_soot_jimple_SimpleLocalDefs,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_SimpleLocalDefs,
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
	{TMIT_native_code, init_C_GvjSD,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,50,1,0x1,0,xt_init_C_GvjSD},
	{TMIT_native_code, getDefsOfAt_LS_JdScz,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,98,1,0x8001,1,xt_getDefsOfAt_LS_JdScz},
    } /* end of methodsigs */
};

static union fconst fc1 = { 0x3f333333 };

/*M init_C_GvjSD: ca.mcgill.sable.soot.jimple.SimpleLocalDefs.<init>(Lca/mcgill/sable/soot/jimple/CompleteStmtGraph;)V */

Class xt_init_C_GvjSD[] = { 0 };

Void init_C_GvjSD(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av11;
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
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(7,L1);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.defsTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L1:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(19,L2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a3)->class->M.
		getBody__ursbi.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,54970279)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[2];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L2:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_LocalDefsFlowAnalysis.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_3yycZ(a2,a3);
	av2 = a1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(72,L3);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.defsPostTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		iterator__RqNON.f(a1);
	av3 = a1;
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
	((struct in_ca_mcgill_sable_soot_jimple_SimpleLocalDefs*)a1)->localStmtPairToDefs = a2;
	GOTO(107,L7);

L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-113699181)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av5 = a1;
	GOTO(135,L6);

L5:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(160,L6);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_LocalStmtPair.C);
	a2 = a1;
	a3 = av7;
	a4 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_LS_D7fsL(a2,a3,a4);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_SimpleLocalDefs*)a1)->localStmtPairToDefs;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 != 0)
		GOTO(199,L6);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_LocalDefsFlowAnalysis*)a1)->localToIntPair;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IntPair.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av2;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowAnalysis*)a1)->class->M.
		getFlowBeforeStmt_S_vm3Xd.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_BoundedFlowSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_IntPair*)a2)->op1;
	a3 = av9;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_IntPair*)a3)->op2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,162386694)->f)(a1,i2,i3);
	av11 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_SimpleLocalDefs*)a1)->localStmtPairToDefs;
	a2 = av8;
	a3 = av11;
	a3 = unmodifiableList_L_a5S8d(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L6:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(272,L5);
L7:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(281,L4);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(287,L8);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.defsPostTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
L8:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(299,L9);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.defsTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
L9:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDefsOfAt_LS_JdScz: ca.mcgill.sable.soot.jimple.SimpleLocalDefs.getDefsOfAt(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Stmt;)Lca/mcgill/sable/util/List; */

Class xt_getDefsOfAt_LS_JdScz[] = { 0 };

Object getDefsOfAt_LS_JdScz(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_LocalStmtPair.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_LS_D7fsL(a2,a3,a4);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_SimpleLocalDefs*)a1)->localStmtPairToDefs;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_List.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (a1 != 0)
		GOTO(27,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[3];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_O_wO0jp.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1637587657)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = av4;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','i','m','p','l','e','L','o',
'c','a','l','D','e','f','s','[',']',' ',' ',' ',' ',' ','C','o','n','s',
't','r','u','c','t','i','n','g',' ','S','i','m','p','l','e','L','o','c',
'a','l','D','e','f','s','.','.','.','I','l','l','e','g','a','l',' ','L',
'o','c','a','l','D','e','f','s',' ','q','u','e','r','y',';',' ','l','o',
'c','a','l',' ',' ','h','a','s',' ','n','o',' ','d','e','f','i','n','i',
't','i','o','n',' ','a','t',' '};

const void *st_ca_mcgill_sable_soot_jimple_SimpleLocalDefs[] = {
    ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs+43,	/* 0. ca.mcgill.sable.soot.jimple.SimpleLocalD */
    ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs+44,	/* 1. [ */
    ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs+81,	/* 2. ]     Constructing SimpleLocalDefs... */
    ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs+112,	/* 3. Illegal LocalDefs query; local  */
    ch_ca_mcgill_sable_soot_jimple_SimpleLocalDefs+134,	/* 4.  has no definition at  */
    0};
