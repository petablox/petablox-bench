/*  ca_mcgill_sable_soot_jimple_AbstractCastExpr.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractCastExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractCastExpr.h"
#include "ca_mcgill_sable_soot_jimple_CastExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_CastExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractCastExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractCastExpr[];
extern Class xt_init_VT_0tBth[];
extern Class xt_init_VT_RxSzV[];
extern Class xt_toString__NbfNh[];
extern Class xt_toBriefString__ldTqe[];
extern Class xt_getOp__ePCGc[];
extern Class xt_setOp_V_ywjZ6[];
extern Class xt_getOpBox__wfVXo[];
extern Class xt_getUseBoxes__vkzwE[];
extern Class xt_getCastType__Rbe6H[];
extern Class xt_setCastType_T_7bnQX[];
extern Class xt_getType__EMMZe[];
extern Class xt_apply_S_HqKEd[];

#define HASHMASK 0x1f
/*  0.  c1d26da0  (0)  getOp  */
/*  1.  8942e761  (1)  hashCode  */
/*  7.  68b3dbe7  (7)  getCastType  */
/*  d.  b52a1c8d  (d)  setCastType  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
/*  10.  6d3e3310  (10)  getType  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  16.  62b17c16  (16)  setOp  */
/*  17.  9e646537  (17)  toBriefString  */
/*  1e.  667dba9e  (1e)  getOpBox  */
static const struct ihash htable[32] = {
    -1043173984, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.getOp__ePCGc,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1756617703, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.getCastType__Rbe6H,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1255531379, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.setCastType_T_7bnQX,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.apply_S_HqKEd,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.getType__EMMZe,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.getUseBoxes__vkzwE,
    0, 0, 0, 0,
    1655798806, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.setOp_V_ywjZ6,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.toBriefString__ldTqe,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1719515806, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.M.getOpBox__wfVXo,
    0, 0,
};

static const CARRAY(44) nmchars = {&acl_char, 0, 44, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'C','a','s','t','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 44 };
static const Char nmiv_0[] = {
'o','p','B','o','x'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_1[] = {
't','y','p','e'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_14[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_15[] = {
'g','e','t','O','p'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_16[] = {
's','e','t','O','p'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_17[] = {
'g','e','t','O','p','B','o','x'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_18[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'g','e','t','C','a','s','t','T','y','p','e'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_20[] = {
's','e','t','C','a','s','t','T','y','p','e'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_21[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_22[] = {
'a','p','p','l','y'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr, opBox), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,38,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr, type), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,27,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractCastExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr cl_ca_mcgill_sable_soot_jimple_AbstractCastExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr),
    23,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractCastExpr,
    st_ca_mcgill_sable_soot_jimple_AbstractCastExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractCastExpr,
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
	{TMIT_native_code, toString__NbfNh,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,2,xt_toString__NbfNh},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VT_0tBth,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,65,1,0x0,0,xt_init_VT_0tBth},
	{TMIT_native_code, init_VT_RxSzV,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,68,1,0x4,1,xt_init_VT_RxSzV},
	{TMIT_native_code, toBriefString__ldTqe,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,20,1,0x8001,3,xt_toBriefString__ldTqe},
	{TMIT_native_code, getOp__ePCGc,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,37,1,0x8001,4,xt_getOp__ePCGc},
	{TMIT_native_code, setOp_V_ywjZ6,(const Char *)&nmim_16,5,
	(const Char *)&sgim_16,38,1,0x8001,5,xt_setOp_V_ywjZ6},
	{TMIT_native_code, getOpBox__wfVXo,(const Char *)&nmim_17,8,
	(const Char *)&sgim_17,40,1,0x8001,6,xt_getOpBox__wfVXo},
	{TMIT_native_code, getUseBoxes__vkzwE,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,29,1,0x8001,7,xt_getUseBoxes__vkzwE},
	{TMIT_native_code, getCastType__Rbe6H,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,1,0x8001,8,xt_getCastType__Rbe6H},
	{TMIT_native_code, setCastType_T_7bnQX,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,30,1,0x8001,9,xt_setCastType_T_7bnQX},
	{TMIT_native_code, getType__EMMZe,(const Char *)&nmim_21,7,
	(const Char *)&sgim_21,29,1,0x8001,10,xt_getType__EMMZe},
	{TMIT_native_code, apply_S_HqKEd,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,32,1,0x8001,11,xt_apply_S_HqKEd},
    } /* end of methodsigs */
};


/*M init_VT_0tBth: ca.mcgill.sable.soot.jimple.AbstractCastExpr.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_VT_0tBth[] = { 0 };

Void init_VT_0tBth(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = v__WbL8F();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a2)->class->M.
		newImmediateBox_V_7jLB8.f(a2,a3);
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_VT_RxSzV(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_VT_RxSzV: ca.mcgill.sable.soot.jimple.AbstractCastExpr.<init>(Lca/mcgill/sable/soot/jimple/ValueBox;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_VT_RxSzV[] = { 0 };

Void init_VT_RxSzV(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->opBox = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->type = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__NbfNh: ca.mcgill.sable.soot.jimple.AbstractCastExpr.toString()Ljava/lang/String; */

Class xt_toString__NbfNh[] = { 0 };

Object toString__NbfNh(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractCastExpr[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a2)->type;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_Type*)a2)->class->M.
		toString__J7Vel.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractCastExpr[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a2)->opBox;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-890495682)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		toString__4d9OF.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__ldTqe: ca.mcgill.sable.soot.jimple.AbstractCastExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__ldTqe[] = { 0 };

Object toBriefString__ldTqe(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractCastExpr[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a2)->type;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_Type*)a2)->class->M.
		toString__J7Vel.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractCastExpr[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a2)->opBox;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-890495682)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1637587657)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getOp__ePCGc: ca.mcgill.sable.soot.jimple.AbstractCastExpr.getOp()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getOp__ePCGc[] = { 0 };

Object getOp__ePCGc(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->opBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setOp_V_ywjZ6: ca.mcgill.sable.soot.jimple.AbstractCastExpr.setOp(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setOp_V_ywjZ6[] = { 0 };

Void setOp_V_ywjZ6(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->opBox;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-617263732)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getOpBox__wfVXo: ca.mcgill.sable.soot.jimple.AbstractCastExpr.getOpBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getOpBox__wfVXo[] = { 0 };

Object getOpBox__wfVXo(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->opBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__vkzwE: ca.mcgill.sable.soot.jimple.AbstractCastExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__vkzwE[] = { 0 };

Object getUseBoxes__vkzwE(Object p0)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av1 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a2)->opBox;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-890495682)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-113699181)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a2)->opBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getCastType__Rbe6H: ca.mcgill.sable.soot.jimple.AbstractCastExpr.getCastType()Lca/mcgill/sable/soot/Type; */

Class xt_getCastType__Rbe6H[] = { 0 };

Object getCastType__Rbe6H(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setCastType_T_7bnQX: ca.mcgill.sable.soot.jimple.AbstractCastExpr.setCastType(Lca/mcgill/sable/soot/Type;)V */

Class xt_setCastType_T_7bnQX[] = { 0 };

Void setCastType_T_7bnQX(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->type = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__EMMZe: ca.mcgill.sable.soot.jimple.AbstractCastExpr.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__EMMZe[] = { 0 };

Object getType__EMMZe(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractCastExpr*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_HqKEd: ca.mcgill.sable.soot.jimple.AbstractCastExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_HqKEd[] = { 0 };

Void apply_S_HqKEd(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,380801494)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractCastExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'C','a','s','t','E','x','p','r','(',')',' '};

const void *st_ca_mcgill_sable_soot_jimple_AbstractCastExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractCastExpr+44,	/* 0. ca.mcgill.sable.soot.jimple.AbstractCast */
    ch_ca_mcgill_sable_soot_jimple_AbstractCastExpr+45,	/* 1. ( */
    ch_ca_mcgill_sable_soot_jimple_AbstractCastExpr+47,	/* 2. )  */
    0};
