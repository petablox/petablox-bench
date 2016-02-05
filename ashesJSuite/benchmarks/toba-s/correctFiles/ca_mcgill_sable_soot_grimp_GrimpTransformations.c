/*  ca_mcgill_sable_soot_grimp_GrimpTransformations.c -- from Java class ca.mcgill.sable.soot.grimp.GrimpTransformations  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GrimpTransformations.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_Timer.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody.h"
#include "ca_mcgill_sable_soot_grimp_Main.h"
#include "ca_mcgill_sable_soot_jimple_AssignStmt.h"
#include "ca_mcgill_sable_soot_jimple_CompleteStmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeStmt.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_LocalUses.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_soot_jimple_NewExpr.h"
#include "ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_SimpleLocalDefs.h"
#include "ca_mcgill_sable_soot_jimple_SimpleLocalUses.h"
#include "ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtList.h"
#include "ca_mcgill_sable_soot_jimple_StmtValueBoxPair.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_io_PrintStream.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GrimpTransformations.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_Timer.C,
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C,
    &cl_ca_mcgill_sable_soot_grimp_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_LocalUses.C,
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleLocalUses.C,
    &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtList.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtValueBoxPair.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GrimpTransformations[];
extern const void *st_ca_mcgill_sable_soot_grimp_GrimpTransformations[];
extern Class xt_foldConstructors_G_4ozx7[];
extern Class xt_init__my9XM[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GrimpTransformations.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GrimpTransformations.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GrimpTransformations.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_GrimpTransformations.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(47) nmchars = {&acl_char, 0, 47, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','T','r','a','n',
's','f','o','r','m','a','t','i','o','n','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 47 };
static const Char nmsm_0[] = {
'f','o','l','d','C','o','n','s','t','r','u','c','t','o','r','s'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','g','r','i','m','p','/','G','r','i','m','p','B','o',
'd','y',';',')','V'};
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
    {TMIT_native_code, (Void(*)())foldConstructors_G_4ozx7,
	(const Char *)&nmsm_0,16,(const Char *)&sgsm_0,41,
	1,0x9,0,xt_foldConstructors_G_4ozx7},
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
} inr_ca_mcgill_sable_soot_grimp_GrimpTransformations = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GrimpTransformations.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GrimpTransformations cl_ca_mcgill_sable_soot_grimp_GrimpTransformations = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GrimpTransformations),
    12,
    1,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    29, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GrimpTransformations,
    st_ca_mcgill_sable_soot_grimp_GrimpTransformations,
    0,
    init__my9XM,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GrimpTransformations,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__my9XM,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,1,xt_init__my9XM},
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
    } /* end of methodsigs */
};


/*M foldConstructors_G_4ozx7: ca.mcgill.sable.soot.grimp.GrimpTransformations.foldConstructors(Lca/mcgill/sable/soot/grimp/GrimpBody;)V */

Class xt_foldConstructors_G_4ozx7[] = { 0 };

Void foldConstructors_G_4ozx7(Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av12, av13, av14, av15,
    av17;
Int i0, i1, i2, i3, i4, i5;
Int iv11, iv16;
PROLOGUE;

	av0 = p1;

L0:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(3,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpTransformations[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a3)->class->M.
		getMethod__2qjt9.f(a3);
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
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpTransformations[2];
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
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getStmtList__DcNB7.f(a1);
	av1 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_RJw6y(a2,a3);
	av2 = a1;
	init_ca_mcgill_sable_soot_grimp_Main();
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(56,L2);
	init_ca_mcgill_sable_soot_grimp_Main();
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.defsTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L2:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.C);
	a2 = a1;
	a3 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_C_GvjSD(a2,a3);
	av3 = a1;
	init_ca_mcgill_sable_soot_grimp_Main();
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(77,L3);
	init_ca_mcgill_sable_soot_grimp_Main();
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.defsTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
L3:	init_ca_mcgill_sable_soot_grimp_Main();
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(89,L4);
	init_ca_mcgill_sable_soot_grimp_Main();
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.usesTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L4:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SimpleLocalUses.C);
	a2 = a1;
	a3 = av2;
	a4 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_CL_ewXgG(a2,a3,a4);
	av4 = a1;
	init_ca_mcgill_sable_soot_grimp_Main();
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(112,L5);
	init_ca_mcgill_sable_soot_grimp_Main();
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.usesTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
L5:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av5 = a1;
	GOTO(127,L13);

L6:	a1 = av5;
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
	a1 = av6;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(147,L13);
	a1 = av6;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	av7 = a1;
	a1 = av7;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(167,L13);
	a1 = av6;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1235668254)->f)(a1);
	av8 = a1;
	a1 = av8;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(187,L13);
	a1 = av4;
	a2 = av6;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1746592786)->f)(a1,a2);
	av9 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av10 = a1;
	i1 = 0;
	iv11 = i1;
	GOTO(216,L11);

L7:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StmtValueBoxPair.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtValueBoxPair*)a1)->stmt;
	av12 = a1;
	a1 = av12;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(239,L12);
	a1 = av12;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av13 = a1;
	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-406008228)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(259,L12);
	a1 = av7;
	a2 = av13;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-406008228)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if (a1 == a2)
		GOTO(279,L8);
	GOTO(282,L12);

L8:	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-406008228)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av14 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av15 = a1;
	i1 = 0;
	iv16 = i1;
	GOTO(309,L10);

L9:	a1 = av15;
	a2 = av14;
	i3 = iv16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1091742784)->f)(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
	iv16 += 1;
L10:	i1 = iv16;
	a2 = av14;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,1465840485)->f)(a2);
	if (i1 < i2)
		GOBACK(339,L9);
	a1 = v__ES3xL();
	a2 = av6;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a1)->class->M.
		newAssignStmt_A_p4JOC.f(a1,a2);
	av17 = a1;
	a1 = av17;
	a2 = v__ES3xL();
	a3 = av8;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1015674292)->f)(a3);
	a4 = av14;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,54970279)->f)(a4);
	a5 = av15;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newNewInvokeExpr_RSL_Yu41s.f(a2,a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-86978644)->f)(a1,a2);
	i1 = 1;
	iv11 = i1;
	a1 = av0;
	a2 = av12;
	a3 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		redirectJumps_SS_D729q.f(a1,a2,a3);
	a1 = av0;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		eliminateBackPointersTo_S_1IDCG.f(a1,a2);
	a1 = av1;
	a2 = av1;
	a3 = av12;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->class->M.
		indexOf_O_eZvQQ.f(a2,a3);
	a3 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_iO_Tst7p.f(a1,i2,a3);
	a1 = av1;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtList*)a1)->class->M.
		remove_O_5AvH2.f(a1,a2);
L11:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(430,L7);
L12:	i1 = iv11;
	if (i1 == 0)
		GOTO(435,L13);
	a1 = av0;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		eliminateBackPointersTo_S_1IDCG.f(a1,a2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
L13:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(458,L6);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__my9XM: ca.mcgill.sable.soot.grimp.GrimpTransformations.<init>()V */

Class xt_init__my9XM[] = { 0 };

Void init__my9XM(Object p0)
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



const Char ch_ca_mcgill_sable_soot_grimp_GrimpTransformations[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','T','r','a','n',
's','f','o','r','m','a','t','i','o','n','s','[',']',' ','F','o','l','d',
'i','n','g',' ','c','o','n','s','t','r','u','c','t','o','r','s','.','.',
'.'};

const void *st_ca_mcgill_sable_soot_grimp_GrimpTransformations[] = {
    ch_ca_mcgill_sable_soot_grimp_GrimpTransformations+47,	/* 0. ca.mcgill.sable.soot.grimp.GrimpTransfor */
    ch_ca_mcgill_sable_soot_grimp_GrimpTransformations+48,	/* 1. [ */
    ch_ca_mcgill_sable_soot_grimp_GrimpTransformations+73,	/* 2. ] Folding constructors... */
    0};
