/*  ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.h"
#include "ca_mcgill_sable_soot_jimple_InstanceOfExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_InstanceOfExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr[];
extern Class xt_init_VT_Kx4tj[];
extern Class xt_toString__4EFvX[];
extern Class xt_toBriefString__C55GY[];
extern Class xt_getOp__tSz8r[];
extern Class xt_setOp_V_TC1FR[];
extern Class xt_getOpBox__reU8V[];
extern Class xt_getUseBoxes__K7wIV[];
extern Class xt_getType__lynKh[];
extern Class xt_getCheckType__lFi1N[];
extern Class xt_setCheckType_T_V0KVQ[];
extern Class xt_apply_S_wirk4[];

#define HASHMASK 0xff
/*  10.  6d3e3310  (10)  getType  */
/*  16.  62b17c16  (16)  setOp  */
/*  37.  9e646537  (37)  toBriefString  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  61.  8942e761  (61)  hashCode  */
/*  8e.  d615a98e  (8e)  getCheckType  */
/*  90.  a2421090  (90)  setCheckType  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  9e.  667dba9e  (9e)  getOpBox  */
/*  a0.  c1d26da0  (a0)  getOp  */
/*  ef.  494d5bef  (ef)  apply  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.getType__lynKh,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1655798806, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.setOp_V_TC1FR,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.toBriefString__C55GY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -703223410, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.getCheckType__lFi1N,
    0, 0,
    -1572728688, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.setCheckType_T_V0KVQ,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.getUseBoxes__K7wIV,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1719515806, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.getOpBox__reU8V,
    0, 0,
    -1043173984, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.getOp__tSz8r,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.M.apply_S_wirk4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(50) nmchars = {&acl_char, 0, 50, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'I','n','s','t','a','n','c','e','O','f','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 50 };
static const Char nmiv_0[] = {
'o','p','B','o','x'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_1[] = {
'c','h','e','c','k','T','y','p','e'};
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
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_13[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
'g','e','t','O','p'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_15[] = {
's','e','t','O','p'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_16[] = {
'g','e','t','O','p','B','o','x'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_17[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_18[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_19[] = {
'g','e','t','C','h','e','c','k','T','y','p','e'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_20[] = {
's','e','t','C','h','e','c','k','T','y','p','e'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_21[] = {
'a','p','p','l','y'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr, opBox), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,38,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr, checkType), 0,(const Char *)&nmiv_1,9,(const Char *)&sgiv_1,27,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr cl_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr),
    22,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    10, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr,
    st_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr,
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
	{TMIT_native_code, toString__4EFvX,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,1,xt_toString__4EFvX},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VT_Kx4tj,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,68,1,0x4,0,xt_init_VT_Kx4tj},
	{TMIT_native_code, toBriefString__C55GY,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,1,0x8001,2,xt_toBriefString__C55GY},
	{TMIT_native_code, getOp__tSz8r,(const Char *)&nmim_14,5,
	(const Char *)&sgim_14,37,1,0x8001,3,xt_getOp__tSz8r},
	{TMIT_native_code, setOp_V_TC1FR,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,38,1,0x8001,4,xt_setOp_V_TC1FR},
	{TMIT_native_code, getOpBox__reU8V,(const Char *)&nmim_16,8,
	(const Char *)&sgim_16,40,1,0x8001,5,xt_getOpBox__reU8V},
	{TMIT_native_code, getUseBoxes__K7wIV,(const Char *)&nmim_17,11,
	(const Char *)&sgim_17,29,1,0x8001,6,xt_getUseBoxes__K7wIV},
	{TMIT_native_code, getType__lynKh,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,29,1,0x8001,7,xt_getType__lynKh},
	{TMIT_native_code, getCheckType__lFi1N,(const Char *)&nmim_19,12,
	(const Char *)&sgim_19,29,1,0x8001,8,xt_getCheckType__lFi1N},
	{TMIT_native_code, setCheckType_T_V0KVQ,(const Char *)&nmim_20,12,
	(const Char *)&sgim_20,30,1,0x8001,9,xt_setCheckType_T_V0KVQ},
	{TMIT_native_code, apply_S_wirk4,(const Char *)&nmim_21,5,
	(const Char *)&sgim_21,32,1,0x8001,10,xt_apply_S_wirk4},
    } /* end of methodsigs */
};


/*M init_VT_Kx4tj: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.<init>(Lca/mcgill/sable/soot/jimple/ValueBox;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_VT_Kx4tj[] = { 0 };

Void init_VT_Kx4tj(Object p0, Object p1, Object p2)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a1)->opBox = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a1)->checkType = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__4EFvX: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.toString()Ljava/lang/String; */

Class xt_toString__4EFvX[] = { 0 };

Object toString__4EFvX(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a3)->opBox;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-890495682)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Object*)a3)->class->M.
		toString__4d9OF.f(a3);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a2)->checkType;
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

/*M toBriefString__C55GY: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__C55GY[] = { 0 };

Object toBriefString__C55GY(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a3)->opBox;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-890495682)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1637587657)->f)(a3);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a2)->checkType;
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

/*M getOp__tSz8r: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.getOp()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getOp__tSz8r[] = { 0 };

Object getOp__tSz8r(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a1)->opBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setOp_V_TC1FR: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.setOp(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setOp_V_TC1FR[] = { 0 };

Void setOp_V_TC1FR(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a1)->opBox;
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

/*M getOpBox__reU8V: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.getOpBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getOpBox__reU8V[] = { 0 };

Object getOpBox__reU8V(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a1)->opBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__K7wIV: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__K7wIV[] = { 0 };

Object getUseBoxes__K7wIV(Object p0)
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a2)->opBox;
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a2)->opBox;
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

/*M getType__lynKh: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__lynKh[] = { 0 };

Object getType__lynKh(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = v__GKSua();
	return a1;

	/*NOTREACHED*/
}

/*M getCheckType__lFi1N: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.getCheckType()Lca/mcgill/sable/soot/Type; */

Class xt_getCheckType__lFi1N[] = { 0 };

Object getCheckType__lFi1N(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a1)->checkType;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setCheckType_T_V0KVQ: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.setCheckType(Lca/mcgill/sable/soot/Type;)V */

Class xt_setCheckType_T_V0KVQ[] = { 0 };

Void setCheckType_T_V0KVQ(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr*)a1)->checkType = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_wirk4: ca.mcgill.sable.soot.jimple.AbstractInstanceOfExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_wirk4[] = { 0 };

Void apply_S_wirk4(Object p0, Object p1)
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
	(*(Void(*)())findinterface(a1,-43639680)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'I','n','s','t','a','n','c','e','O','f','E','x','p','r',' ','i','n','s',
't','a','n','c','e','o','f',' '};

const void *st_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr+50,	/* 0. ca.mcgill.sable.soot.jimple.AbstractInst */
    ch_ca_mcgill_sable_soot_jimple_AbstractInstanceOfExpr+62,	/* 1.  instanceof  */
    0};
