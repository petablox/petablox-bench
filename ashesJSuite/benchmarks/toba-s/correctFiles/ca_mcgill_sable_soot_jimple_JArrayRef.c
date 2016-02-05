/*  ca_mcgill_sable_soot_jimple_JArrayRef.c -- from Java class ca.mcgill.sable.soot.jimple.JArrayRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JArrayRef.h"
#include "ca_mcgill_sable_soot_jimple_ArrayRef.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_NullType.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_UnknownType.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_RefSwitch.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JArrayRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_NullType.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_UnknownType.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JArrayRef[];
extern const void *st_ca_mcgill_sable_soot_jimple_JArrayRef[];
extern Class xt_init_VV_hnhpj[];
extern Class xt_init_VV_dY9p4[];
extern Class xt_equals_O_sMAEP[];
extern Class xt_toString__BW1ot[];
extern Class xt_toBriefString__bRFpA[];
extern Class xt_getBase__UNpgV[];
extern Class xt_setBase_L_kxP2z[];
extern Class xt_getBaseBox__irvDn[];
extern Class xt_getIndex__7gjtj[];
extern Class xt_setIndex_V_Veedd[];
extern Class xt_getIndexBox__RoGRF[];
extern Class xt_getUseBoxes__XvBmf[];
extern Class xt_getType__aicjn[];
extern Class xt_apply_S_DVkGA[];

#define HASHMASK 0x3f
/*  8.  5008a2c8  (8)  setBase  */
/*  f.  37e733cf  (f)  getIndexBox  */
/*  10.  6d3e3310  (10)  getType  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  17.  c5ef7117  (17)  setIndex  */
/*  1a.  cc58ac1a  (1a)  getBaseBox  */
/*  21.  8942e761  (21)  hashCode  */
/*  2c.  4d33fcac  (2c)  getBase  */
/*  2d.  54b9cb2d  (2d)  getIndex  */
/*  2f.  494d5bef  (2f)  apply  */
/*  37.  9e646537  (37)  toBriefString  */
static const struct ihash htable[64] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1342743240, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.setBase_L_kxP2z,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    937898959, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.getIndexBox__RoGRF,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.getType__aicjn,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.getUseBoxes__XvBmf,
    0, 0, 0, 0, 0, 0,
    -974163689, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.setIndex_V_Veedd,
    0, 0, 0, 0,
    -866604006, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.getBaseBox__irvDn,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1295252652, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.getBase__UNpgV,
    1421462317, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.getIndex__7gjtj,
    0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.apply_S_DVkGA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.M.toBriefString__bRFpA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(37) nmchars = {&acl_char, 0, 37, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','A','r','r','a','y','R','e',
'f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 37 };
static const Char nmiv_0[] = {
'b','a','s','e','B','o','x'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_1[] = {
'i','n','d','e','x','B','o','x'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
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
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e','B','o','x',';',')','V'};
static const Char nmim_14[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_15[] = {
'g','e','t','B','a','s','e'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_16[] = {
's','e','t','B','a','s','e'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','V'};
static const Char nmim_17[] = {
'g','e','t','B','a','s','e','B','o','x'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_18[] = {
'g','e','t','I','n','d','e','x'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_19[] = {
's','e','t','I','n','d','e','x'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_20[] = {
'g','e','t','I','n','d','e','x','B','o','x'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_21[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_22[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_22[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_23[] = {
'a','p','p','l','y'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JArrayRef, baseBox), 0,(const Char *)&nmiv_0,7,(const Char *)&sgiv_0,38,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JArrayRef, indexBox), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,38,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_JArrayRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JArrayRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JArrayRef cl_ca_mcgill_sable_soot_jimple_JArrayRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JArrayRef),
    24,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    12, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JArrayRef,
    st_ca_mcgill_sable_soot_jimple_JArrayRef,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JArrayRef,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
	{TMIT_native_code, equals_O_sMAEP,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,2,xt_equals_O_sMAEP},
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
	{TMIT_native_code, toString__BW1ot,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__BW1ot},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VV_hnhpj,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,73,1,0x0,0,xt_init_VV_hnhpj},
	{TMIT_native_code, init_VV_dY9p4,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,79,1,0x4,1,xt_init_VV_dY9p4},
	{TMIT_native_code, toBriefString__bRFpA,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,20,1,0x8001,4,xt_toBriefString__bRFpA},
	{TMIT_native_code, getBase__UNpgV,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,37,1,0x8001,5,xt_getBase__UNpgV},
	{TMIT_native_code, setBase_L_kxP2z,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,38,1,0x8001,6,xt_setBase_L_kxP2z},
	{TMIT_native_code, getBaseBox__irvDn,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,40,1,0x8001,7,xt_getBaseBox__irvDn},
	{TMIT_native_code, getIndex__7gjtj,(const Char *)&nmim_18,8,
	(const Char *)&sgim_18,37,1,0x8001,8,xt_getIndex__7gjtj},
	{TMIT_native_code, setIndex_V_Veedd,(const Char *)&nmim_19,8,
	(const Char *)&sgim_19,38,1,0x8001,9,xt_setIndex_V_Veedd},
	{TMIT_native_code, getIndexBox__RoGRF,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,40,1,0x8001,10,xt_getIndexBox__RoGRF},
	{TMIT_native_code, getUseBoxes__XvBmf,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,29,1,0x8001,11,xt_getUseBoxes__XvBmf},
	{TMIT_native_code, getType__aicjn,(const Char *)&nmim_22,7,
	(const Char *)&sgim_22,29,1,0x8001,12,xt_getType__aicjn},
	{TMIT_native_code, apply_S_DVkGA,(const Char *)&nmim_23,5,
	(const Char *)&sgim_23,32,1,0x8001,13,xt_apply_S_DVkGA},
    } /* end of methodsigs */
};


/*M init_VV_hnhpj: ca.mcgill.sable.soot.jimple.JArrayRef.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_init_VV_hnhpj[] = { 0 };

Void init_VV_hnhpj(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
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
		newLocalBox_V_BsxZy.f(a2,a3);
	a3 = v__WbL8F();
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a3)->class->M.
		newImmediateBox_V_7jLB8.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_dY9p4(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_VV_dY9p4: ca.mcgill.sable.soot.jimple.JArrayRef.<init>(Lca/mcgill/sable/soot/jimple/ValueBox;Lca/mcgill/sable/soot/jimple/ValueBox;)V */

Class xt_init_VV_dY9p4[] = { 0 };

Void init_VV_dY9p4(Object p0, Object p1, Object p2)
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
	((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->baseBox = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->indexBox = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_sMAEP: ca.mcgill.sable.soot.jimple.JArrayRef.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_sMAEP[] = { 0 };

Boolean equals_O_sMAEP(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->class->M.
		getBase__UNpgV.f(a1);
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1295252652)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(23,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->class->M.
		getIndex__7gjtj.f(a1);
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1421462317)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(42,L2);
L1:	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

L3:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__BW1ot: ca.mcgill.sable.soot.jimple.JArrayRef.toString()Ljava/lang/String; */

Class xt_toString__BW1ot[] = { 0 };

Object toString__BW1ot(Object p0)
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
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a3)->baseBox;
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JArrayRef[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a2)->indexBox;
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JArrayRef[2];
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

/*M toBriefString__bRFpA: ca.mcgill.sable.soot.jimple.JArrayRef.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__bRFpA[] = { 0 };

Object toBriefString__bRFpA(Object p0)
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
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a3)->baseBox;
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JArrayRef[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a2)->indexBox;
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JArrayRef[2];
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

/*M getBase__UNpgV: ca.mcgill.sable.soot.jimple.JArrayRef.getBase()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getBase__UNpgV[] = { 0 };

Object getBase__UNpgV(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->baseBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setBase_L_kxP2z: ca.mcgill.sable.soot.jimple.JArrayRef.setBase(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_setBase_L_kxP2z[] = { 0 };

Void setBase_L_kxP2z(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->baseBox;
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

/*M getBaseBox__irvDn: ca.mcgill.sable.soot.jimple.JArrayRef.getBaseBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getBaseBox__irvDn[] = { 0 };

Object getBaseBox__irvDn(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->baseBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getIndex__7gjtj: ca.mcgill.sable.soot.jimple.JArrayRef.getIndex()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getIndex__7gjtj[] = { 0 };

Object getIndex__7gjtj(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->indexBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setIndex_V_Veedd: ca.mcgill.sable.soot.jimple.JArrayRef.setIndex(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setIndex_V_Veedd[] = { 0 };

Void setIndex_V_Veedd(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->indexBox;
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

/*M getIndexBox__RoGRF: ca.mcgill.sable.soot.jimple.JArrayRef.getIndexBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getIndexBox__RoGRF[] = { 0 };

Object getIndexBox__RoGRF(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->indexBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__XvBmf: ca.mcgill.sable.soot.jimple.JArrayRef.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__XvBmf[] = { 0 };

Object getUseBoxes__XvBmf(Object p0)
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a2)->baseBox;
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a2)->baseBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a2)->indexBox;
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a2)->indexBox;
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

/*M getType__aicjn: ca.mcgill.sable.soot.jimple.JArrayRef.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__aicjn[] = { 0 };

Object getType__aicjn(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->baseBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	av1 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1832792848)->f)(a1);
	av2 = a1;
	a1 = av2;
	a2 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(24,L1);
	a1 = v__SUHmS();
	return a1;

L1:	a1 = av2;
	a2 = v__Yx4Fv();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(38,L2);
	a1 = v__Yx4Fv();
	return a1;

L2:	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->numDimensions;
	i2 = 1;
	if (i1 != i2)
		GOTO(55,L3);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->baseType;
	return a1;

L3:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->baseType;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->numDimensions;
	i3 = 1;
	i2 = i2 - i3;
	a1 = v_Bi_52nDH(a1,i2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_DVkGA: ca.mcgill.sable.soot.jimple.JArrayRef.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_DVkGA[] = { 0 };

Void apply_S_DVkGA(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,4703162)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_JArrayRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','A','r','r','a','y','R','e',
'f','[',']'};

const void *st_ca_mcgill_sable_soot_jimple_JArrayRef[] = {
    ch_ca_mcgill_sable_soot_jimple_JArrayRef+37,	/* 0. ca.mcgill.sable.soot.jimple.JArrayRef */
    ch_ca_mcgill_sable_soot_jimple_JArrayRef+38,	/* 1. [ */
    ch_ca_mcgill_sable_soot_jimple_JArrayRef+39,	/* 2. ] */
    0};
