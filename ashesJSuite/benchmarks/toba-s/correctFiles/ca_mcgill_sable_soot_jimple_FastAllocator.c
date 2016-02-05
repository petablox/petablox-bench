/*  ca_mcgill_sable_soot_jimple_FastAllocator.c -- from Java class ca.mcgill.sable.soot.jimple.FastAllocator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_FastAllocator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_Body.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_jimple_CompleteStmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_FastAllocator$InterferenceGraph.h"
#include "ca_mcgill_sable_soot_jimple_IdentityStmt.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_soot_jimple_SimpleLiveLocals.h"
#include "ca_mcgill_sable_soot_jimple_SparseLiveLocals.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtBody.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_ArraySet.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_HashSet.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"
#include "ca_mcgill_sable_util_Set.h"
#include "java_io_PrintStream.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_FastAllocator.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_Body.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimp_NB9w0.C,
    &cl_ca_mcgill_sable_soot_jimple_IdentityStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleLiveLocals.C,
    &cl_ca_mcgill_sable_soot_jimple_SparseLiveLocals.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtBody.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_ArraySet.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_HashSet.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_ca_mcgill_sable_util_Set.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_FastAllocator[];
extern const void *st_ca_mcgill_sable_soot_jimple_FastAllocator[];
extern Class xt_packLocals_S_2Ghga[];
extern Class xt_init_S_HAb53[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_FastAllocator.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_FastAllocator.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_FastAllocator.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_FastAllocator.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(41) nmchars = {&acl_char, 0, 41, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','a','s','t','A','l','l','o',
'c','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 41 };
static const Char nmsm_0[] = {
'p','a','c','k','L','o','c','a','l','s'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B','o',
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
static const Char nmim_12[] = {
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B','o',
'd','y',';',')','V'};

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
    {TMIT_native_code, (Void(*)())packLocals_S_2Ghga,
	(const Char *)&nmsm_0,10,(const Char *)&sgsm_0,41,
	1,0xa,0,xt_packLocals_S_2Ghga},
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
} inr_ca_mcgill_sable_soot_jimple_FastAllocator = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_FastAllocator.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_FastAllocator cl_ca_mcgill_sable_soot_jimple_FastAllocator = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_FastAllocator),
    13,
    1,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    28, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_FastAllocator,
    st_ca_mcgill_sable_soot_jimple_FastAllocator,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_FastAllocator,
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
	{TMIT_native_code, init_S_HAb53,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,41,1,0x1,1,xt_init_S_HAb53},
    } /* end of methodsigs */
};

static union fconst fc2 = { 0x3f333333 };

/*M packLocals_S_2Ghga: ca.mcgill.sable.soot.jimple.FastAllocator.packLocals(Lca/mcgill/sable/soot/jimple/StmtBody;)V */

Class xt_packLocals_S_2Ghga[] = { 0 };

Void packLocals_S_2Ghga(Object p1)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_FastAllocator.C);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_S_HAb53(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_S_HAb53: ca.mcgill.sable.soot.jimple.FastAllocator.<init>(Lca/mcgill/sable/soot/jimple/StmtBody;)V */

Class xt_init_S_HAb53[] = { 0 };

Void init_S_HAb53(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av11, av12, av13, av14,
    av15, av16, av17, av18, av19, av20, av21, av22, av23, av24;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv18;
Float f0, f1, f2, f3, f4, f5, f6;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1978262836)->f)(a1);
	av2 = a1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(14,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[2];
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
L1:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C);
	a2 = a1;
	a3 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_RJw6y(a2,a3);
	av3 = a1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.usePackedLive;
	if (i1 == 0)
		GOTO(64,L2);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SimpleLiveLocals.C);
	a2 = a1;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_C_FZQV5(a2,a3);
	av4 = a1;
	GOTO(77,L3);

L2:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SparseLiveLocals.C);
	a2 = a1;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_C_J2eRc(a2,a3);
	av4 = a1;
L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-947689285)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av6 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArraySet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__h9XGg(a2);
	av5 = a1;
	GOTO(112,L5);

L4:	a1 = av5;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->class->M.
		getType__lsun6.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L5:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(143,L4);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av7 = a1;
	GOTO(155,L31);

L6:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_Type.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(173,L7);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_Type*)a3)->class->M.
		toString__J7Vel.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[4];
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
L7:	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = (*(Int(*)())findinterface(a3,1342277178)->f)(a3);
	i4 = 2;
	i3 = i3 * i4;
	i4 = 1;
	i3 = i3 + i4;
	f4 = fc2.v;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a2,i3,f4);
	av11 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av12 = a1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(257,L8);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[6];
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
L8:	a1 = new(&cl_ca_mcgill_sable_soot_jimp_NB9w0.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	a5 = av8;
	a6 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_FSTL_P8Vdp(a2,a3,a4,a5,a6);
	av9 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av13 = a1;
	GOTO(321,L10);

L9:	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av14 = a1;
	a1 = av14;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IdentityStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(341,L11);
	a1 = av14;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IdentityStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(357,L11);
	a1 = av14;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IdentityStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av15 = a1;
	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(385,L10);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_Local.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[7];
	a4 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ST_lD6h0(a2,a3,a4);
	av16 = a1;
	a1 = av11;
	a2 = av15;
	a3 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	a1 = av12;
	a2 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(423,L10);

L10:	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(433,L9);
L11:	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av10 = a1;
	a1 = av10;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a2)->class->M.
		getLocals__WLf5u.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		addAll_C_MDtDx.f(a1,a2);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(459,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[8];
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
	GOTO(502,L20);

L12:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av14 = a1;
	a1 = av11;
	a2 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 != 0)
		GOTO(524,L20);
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av15 = a1;
	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av16 = a1;
	GOTO(545,L14);

L13:	a1 = av15;
	a2 = av16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L14:	a1 = av16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(570,L13);
	a1 = av9;
	a2 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->class->M.
		getInterferencesOf_L_nej2X.f(a1,a2);
	av17 = a1;
	i1 = 0;
	iv18 = i1;
	GOTO(585,L17);

L15:	a1 = av11;
	a2 = av17;
	i3 = iv18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(600,L16);
	a1 = av15;
	a2 = av11;
	a3 = av17;
	i4 = iv18;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
L16:	iv18 += 1;
L17:	i1 = iv18;
	a2 = av17;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(631,L15);
	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-98305106)->f)(a1);
	if (i1 == 0)
		GOTO(641,L18);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_Local.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[7];
	a4 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_ST_lD6h0(a2,a3,a4);
	av19 = a1;
	a1 = av12;
	a2 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	GOTO(667,L19);

L18:	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
L19:	a1 = av11;
	a2 = av14;
	a3 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L20:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		isEmpty__pVAEs.f(a1);
	if (i1 == 0)
		GOBACK(704,L12);
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av14 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-947689285)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av15 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-947689285)->f)(a1);
	av16 = a1;
	GOTO(737,L22);

L21:	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av17 = a1;
	a1 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(762,L22);
	a1 = av16;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	a1 = av14;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L22:	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(792,L21);
	a1 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av17 = a1;
	GOTO(804,L24);

L23:	a1 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av18 = a1;
	a1 = av11;
	a2 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getName__ttbNB.f(a1);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_FastAllocator[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(843,L24);
	a1 = av19;
	a2 = av18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->class->M.
		getName__ttbNB.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setName_S_typU4.f(a1,a2);
L24:	a1 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(863,L23);
	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av18 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-947689285)->f)(a1);
	av19 = a1;
	GOTO(883,L26);

L25:	a1 = av19;
	a2 = av18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L26:	a1 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(911,L25);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av20 = a1;
	GOTO(920,L30);

L27:	a1 = av20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av21;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-990073779)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av22 = a1;
	GOTO(949,L29);

L28:	a1 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av23 = a1;
	a1 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(974,L29);
	a1 = av23;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av24 = a1;
	a1 = av24;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(999,L29);
	a1 = av23;
	a2 = av11;
	a3 = av24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-617263732)->f)(a1,a2);
L29:	a1 = av22;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1028,L28);
L30:	a1 = av20;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1038,L27);
L31:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1048,L6);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_FastAllocator[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','a','s','t','A','l','l','o',
'c','a','t','o','r','[',']',' ','P','a','c','k','i','n','g',' ','l','o',
'c','a','l','s','.','.','.',']','(','P','a','c','k','i','n','g',' ','l',
'o','c','a','l','s',')',' ',' ',' ',' ','P','a','c','k','i','n','g',' ',
't','y','p','e',' ','.','.','.',']','(','P','a','c','k','i','n','g',' ',
'l','o','c','a','l','s',')',' ',' ',' ',' ','B','u','i','l','d','i','n',
'g',' ','i','n','t','e','r','f','e','r','e','n','c','e',' ','g','r','a',
'p','h','.','.','.','C','o','l','o','r','i','n','g',' ','e','a','c','h',
' ','l','o','c','a','l','.','.','.'};

const void *st_ca_mcgill_sable_soot_jimple_FastAllocator[] = {
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+41,	/* 0. ca.mcgill.sable.soot.jimple.FastAllocato */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+42,	/* 1. [ */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+61,	/* 2. ] Packing locals... */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+95,	/* 3. ](Packing locals)    Packing type  */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+98,	/* 4. ... */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+119,	/* 5. ](Packing locals)     */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+149,	/* 6. Building interference graph... */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+149,	/* 7.  */
    ch_ca_mcgill_sable_soot_jimple_FastAllocator+171,	/* 8. Coloring each local... */
    0};
