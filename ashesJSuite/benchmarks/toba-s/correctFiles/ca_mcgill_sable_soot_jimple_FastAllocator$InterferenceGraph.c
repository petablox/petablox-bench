/*  ca_mcgill_sable_soot_jimple_FastAllocator$InterferenceGraph.c -- from Java class ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_FastAllocator$InterferenceGraph.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_FastAllocator.h"
#include "ca_mcgill_sable_soot_jimple_LiveLocals.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtBody.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_ArraySet.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"
#include "ca_mcgill_sable_util_Set.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_NB9w0.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_FastAllocator.C,
    &cl_ca_mcgill_sable_soot_jimple_LiveLocals.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtBody.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_ArraySet.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_ca_mcgill_sable_util_Set.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_NB9w0[];
extern const void *st_ca_mcgill_sable_soot_jimp_NB9w0[];
extern Class xt_init_F_aRG99[];
extern Class xt_getLocals__WLf5u[];
extern Class xt_init_FSTL_P8Vdp[];
extern Class xt_localsInterfere_LL_QpXY7[];
extern Class xt_setInterference_LL_gDJul[];
extern Class xt_isEmpty__bYDhF[];
extern Class xt_getInterferencesOf_L_nej2X[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimp_NB9w0.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimp_NB9w0.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimp_NB9w0.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_NB9w0.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(59) nmchars = {&acl_char, 0, 59, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','a','s','t','A','l','l','o',
'c','a','t','o','r','$','I','n','t','e','r','f','e','r','e','n','c','e',
'G','r','a','p','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 59 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','F','a','s','t','A','l','l',
'o','c','a','t','o','r',';'};
static const Char nmiv_1[] = {
'l','o','c','a','l','T','o','L','o','c','a','l','s'};
static const Char sgiv_1[] = {
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
's','o','o','t','/','j','i','m','p','l','e','/','F','a','s','t','A','l',
'l','o','c','a','t','o','r',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','L','o','c','a','l','s'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','S','e','t',';'};
static const Char nmim_14[] = {
'<','i','n','i','t','>'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','a','s','t','A','l',
'l','o','c','a','t','o','r',';','L','c','a','/','m','c','g','i','l','l',
'/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e',
'/','S','t','m','t','B','o','d','y',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p','e',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','i','v','e','L','o',
'c','a','l','s',';',')','V'};
static const Char nmim_15[] = {
'l','o','c','a','l','s','I','n','t','e','r','f','e','r','e'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',')',
'Z'};
static const Char nmim_16[] = {
's','e','t','I','n','t','e','r','f','e','r','e','n','c','e'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',')',
'V'};
static const Char nmim_17[] = {
'i','s','E','m','p','t','y'};
static const Char sgim_17[] = {
'(',')','Z'};
static const Char nmim_18[] = {
'g','e','t','I','n','t','e','r','f','e','r','e','n','c','e','s','O','f'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',
';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_NB9w0, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,43,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_NB9w0, localToLocals), 0,(const Char *)&nmiv_1,13,(const Char *)&sgiv_1,26,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimp_NB9w0 = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_NB9w0.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_NB9w0 cl_ca_mcgill_sable_soot_jimp_NB9w0 = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_NB9w0),
    19,
    0,
    2,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    13, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_NB9w0,
    st_ca_mcgill_sable_soot_jimp_NB9w0,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_NB9w0,
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
	{TMIT_native_code, init_F_aRG99,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,46,1,0x2,0,xt_init_F_aRG99},
	{TMIT_native_code, getLocals__WLf5u,(const Char *)&nmim_13,9,
	(const Char *)&sgim_13,28,1,0x1,1,xt_getLocals__WLf5u},
	{TMIT_native_code, init_FSTL_P8Vdp,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,151,1,0x1,2,xt_init_FSTL_P8Vdp},
	{TMIT_native_code, localsInterfere_LL_QpXY7,(const Char *)&nmim_15,15,
	(const Char *)&sgim_15,73,1,0x1,3,xt_localsInterfere_LL_QpXY7},
	{TMIT_native_code, setInterference_LL_gDJul,(const Char *)&nmim_16,15,
	(const Char *)&sgim_16,73,1,0x1,4,xt_setInterference_LL_gDJul},
	{TMIT_native_code, isEmpty__bYDhF,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,3,1,0x1,5,xt_isEmpty__bYDhF},
	{TMIT_native_code, getInterferencesOf_L_nej2X,(const Char *)&nmim_18,18,
	(const Char *)&sgim_18,73,1,0x0,6,xt_getInterferencesOf_L_nej2X},
    } /* end of methodsigs */
};

static union fconst fc1 = { 0x3f333333 };

/*M init_F_aRG99: ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph.<init>(Lca/mcgill/sable/soot/jimple/FastAllocator;)V */

Class xt_init_F_aRG99[] = { 0 };

Void init_F_aRG99(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->this0_oYxUV = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocals__WLf5u: ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph.getLocals()Lca/mcgill/sable/util/Set; */

Class xt_getLocals__WLf5u[] = { 0 };

Object getLocals__WLf5u(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1862268018)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_FSTL_P8Vdp: ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph.<init>(Lca/mcgill/sable/soot/jimple/FastAllocator;Lca/mcgill/sable/soot/jimple/StmtBody;Lca/mcgill/sable/soot/Type;Lca/mcgill/sable/soot/jimple/LiveLocals;)V */

Class xt_init_FSTL_P8Vdp[] = { 0 };

Void init_FSTL_P8Vdp(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av11, av12, av13;
Int i0, i1, i2, i3, i4, i5;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

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
	((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->this0_oYxUV = a2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1978262836)->f)(a1);
	av5 = a1;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = (*(Int(*)())findinterface(a4,1342277178)->f)(a4);
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
	((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals = a2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-947689285)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av6 = a1;
	GOTO(58,L2);

L1:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(82,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals;
	a2 = av7;
	a3 = new(&cl_ca_mcgill_sable_util_ArraySet.C);
	a4 = a3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init__h9XGg(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L2:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(111,L1);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av7 = a1;
	GOTO(121,L6);

L3:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av4;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,173033524)->f)(a1,a2);
	av9 = a1;
	a1 = av8;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(152,L6);
	a1 = av8;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(172,L6);
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(196,L6);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av12 = a1;
	GOTO(208,L5);

L4:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av13 = a1;
	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(232,L5);
	a1 = av0;
	a2 = av11;
	a3 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->class->M.
		setInterference_LL_gDJul.f(a1,a2,a3);
L5:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(250,L4);
L6:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(260,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M localsInterfere_LL_QpXY7: ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph.localsInterfere(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Local;)Z */

Class xt_localsInterfere_LL_QpXY7[] = { 0 };

Boolean localsInterfere_LL_QpXY7(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Set.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setInterference_LL_gDJul: ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph.setInterference(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_setInterference_LL_gDJul[] = { 0 };

Void setInterference_LL_gDJul(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Set.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Set.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEmpty__bYDhF: ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph.isEmpty()Z */

Class xt_isEmpty__bYDhF[] = { 0 };

Boolean isEmpty__bYDhF(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-98305106)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getInterferencesOf_L_nej2X: ca.mcgill.sable.soot.jimple.FastAllocator$InterferenceGraph.getInterferencesOf(Lca/mcgill/sable/soot/jimple/Local;)[Lca/mcgill/sable/soot/jimple/Local; */

Class xt_getInterferencesOf_L_nej2X[] = { 0 };

Object getInterferencesOf_L_nej2X(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_NB9w0*)a1)->localToLocals;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Set.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2095947698)->f)(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimple_Local.C,i1);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(28,L2);

L1:	a1 = av3;
	i2 = iv4;
	a3 = av2;
	i4 = iv4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv4 += 1;
L2:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(49,L1);
	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_NB9w0[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','a','s','t','A','l','l','o',
'c','a','t','o','r','$','I','n','t','e','r','f','e','r','e','n','c','e',
'G','r','a','p','h'};

const void *st_ca_mcgill_sable_soot_jimp_NB9w0[] = {
    ch_ca_mcgill_sable_soot_jimp_NB9w0+59,	/* 0. ca.mcgill.sable.soot.jimple.FastAllocato */
    0};
