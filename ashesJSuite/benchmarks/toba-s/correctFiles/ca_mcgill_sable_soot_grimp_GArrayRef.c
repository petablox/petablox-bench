/*  ca_mcgill_sable_soot_grimp_GArrayRef.c -- from Java class ca.mcgill.sable.soot.grimp.GArrayRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GArrayRef.h"
#include "ca_mcgill_sable_soot_jimple_ArrayRef.h"
#include "ca_mcgill_sable_soot_grimp_Precedence.h"
#include "ca_mcgill_sable_soot_jimple_JArrayRef.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GArrayRef.C,
    &cl_ca_mcgill_sable_soot_jimple_JArrayRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
    &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
    &cl_ca_mcgill_sable_soot_jimple_ArrayRef.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GArrayRef[];
extern const void *st_ca_mcgill_sable_soot_grimp_GArrayRef[];
extern Class xt_init_VV_ukdRA[];
extern Class xt_getPrecedence__RuZ0N[];
extern Class xt_toString_VSS_IOgPa[];
extern Class xt_toString__eDDaR[];
extern Class xt_toBriefString__c0MEc[];

#define HASHMASK 0x3f
/*  8.  5008a2c8  (8)  setBase  */
/*  c.  eaf21fcc  (c)  getPrecedence  */
/*  f.  37e733cf  (f)  getIndexBox  */
/*  10.  6d3e3310  (10)  getType  */
/*  12.  4c0d6fd2  (12)  clone  */
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
    1342743240, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.setBase_L_kxP2z,
    0, 0, 0, 0, 0, 0,
    -353230900, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.getPrecedence__RuZ0N,
    0, 0, 0, 0,
    937898959, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.getIndexBox__RoGRF,
    1832792848, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.getType__aicjn,
    0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.clone__dslwm,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.getUseBoxes__XvBmf,
    0, 0, 0, 0, 0, 0,
    -974163689, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.setIndex_V_Veedd,
    0, 0, 0, 0,
    -866604006, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.getBaseBox__irvDn,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1295252652, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.getBase__UNpgV,
    1421462317, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.getIndex__7gjtj,
    0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.apply_S_DVkGA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.M.toBriefString__c0MEc,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','A','r','r','a','y','R','e','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
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
static const Char nmim_24[] = {
'g','e','t','P','r','e','c','e','d','e','n','c','e'};
static const Char sgim_24[] = {
'(',')','I'};
static const Char nmim_25[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';',
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';',
')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GArrayRef, baseBox), 0,(const Char *)&nmiv_0,7,(const Char *)&sgiv_0,38,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GArrayRef, indexBox), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,38,0,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_grimp_GArrayRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GArrayRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GArrayRef cl_ca_mcgill_sable_soot_grimp_GArrayRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GArrayRef),
    26,
    0,
    2,
    0,
    3, supers,
    3, 2, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GArrayRef,
    st_ca_mcgill_sable_soot_grimp_GArrayRef,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GArrayRef,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_sMAEP,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x1,2,0},
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
	{TMIT_native_code, toString__eDDaR,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__eDDaR},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VV_ukdRA,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,73,1,0x0,0,xt_init_VV_ukdRA},
	{TMIT_native_code, init_VV_dY9p4,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,79,0,0x4,1,0},
	{TMIT_native_code, toBriefString__c0MEc,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,20,1,0x8001,4,xt_toBriefString__c0MEc},
	{TMIT_native_code, getBase__UNpgV,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,37,0,0x8001,5,0},
	{TMIT_native_code, setBase_L_kxP2z,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,38,0,0x8001,6,0},
	{TMIT_native_code, getBaseBox__irvDn,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,40,0,0x8001,7,0},
	{TMIT_native_code, getIndex__7gjtj,(const Char *)&nmim_18,8,
	(const Char *)&sgim_18,37,0,0x8001,8,0},
	{TMIT_native_code, setIndex_V_Veedd,(const Char *)&nmim_19,8,
	(const Char *)&sgim_19,38,0,0x8001,9,0},
	{TMIT_native_code, getIndexBox__RoGRF,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,40,0,0x8001,10,0},
	{TMIT_native_code, getUseBoxes__XvBmf,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,29,0,0x8001,11,0},
	{TMIT_native_code, getType__aicjn,(const Char *)&nmim_22,7,
	(const Char *)&sgim_22,29,0,0x8001,12,0},
	{TMIT_native_code, apply_S_DVkGA,(const Char *)&nmim_23,5,
	(const Char *)&sgim_23,32,0,0x8001,13,0},
	{TMIT_native_code, getPrecedence__RuZ0N,(const Char *)&nmim_24,13,
	(const Char *)&sgim_24,3,1,0x8001,1,xt_getPrecedence__RuZ0N},
	{TMIT_native_code, toString_VSS_IOgPa,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,91,1,0x2,2,xt_toString_VSS_IOgPa},
    } /* end of methodsigs */
};


/*M init_VV_ukdRA: ca.mcgill.sable.soot.grimp.GArrayRef.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_init_VV_ukdRA[] = { 0 };

Void init_VV_ukdRA(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newObjExprBox_V_uxjD5.f(a2,a3);
	a3 = v__ES3xL();
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExprBox_V_B8P02.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_dY9p4(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getPrecedence__RuZ0N: ca.mcgill.sable.soot.grimp.GArrayRef.getPrecedence()I */

Class xt_getPrecedence__RuZ0N[] = { 0 };

Int getPrecedence__RuZ0N(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 875;
	return i1;

	/*NOTREACHED*/
}

/*M toString_VSS_IOgPa: ca.mcgill.sable.soot.grimp.GArrayRef.toString(Lca/mcgill/sable/soot/jimple/Value;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_VSS_IOgPa[] = { 0 };

Object toString_VSS_IOgPa(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-353230900)->f)(a1);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_grimp_GArrayRef*)a2)->class->M.
		getPrecedence__RuZ0N.f(a2);
	if (i1 >= i2)
		GOTO(20,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GArrayRef[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GArrayRef[2];
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
	av2 = a1;
L1:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GArrayRef[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GArrayRef[4];
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

/*M toString__eDDaR: ca.mcgill.sable.soot.grimp.GArrayRef.toString()Ljava/lang/String; */

Class xt_toString__eDDaR[] = { 0 };

Object toString__eDDaR(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->class->M.
		getBase__UNpgV.f(a1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->class->M.
		getIndex__7gjtj.f(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Object*)a1)->class->M.
		toString__4d9OF.f(a1);
	av3 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Object*)a1)->class->M.
		toString__4d9OF.f(a1);
	av4 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av3;
	a4 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_VSS_IOgPa(a1,a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__c0MEc: ca.mcgill.sable.soot.grimp.GArrayRef.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__c0MEc[] = { 0 };

Object toBriefString__c0MEc(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->class->M.
		getBase__UNpgV.f(a1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JArrayRef*)a1)->class->M.
		getIndex__7gjtj.f(a1);
	av2 = a1;
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1637587657)->f)(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1637587657)->f)(a1);
	av4 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av3;
	a4 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_VSS_IOgPa(a1,a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GArrayRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','A','r','r','a','y','R','e','f',
'(',')','[',']'};

const void *st_ca_mcgill_sable_soot_grimp_GArrayRef[] = {
    ch_ca_mcgill_sable_soot_grimp_GArrayRef+36,	/* 0. ca.mcgill.sable.soot.grimp.GArrayRef */
    ch_ca_mcgill_sable_soot_grimp_GArrayRef+37,	/* 1. ( */
    ch_ca_mcgill_sable_soot_grimp_GArrayRef+38,	/* 2. ) */
    ch_ca_mcgill_sable_soot_grimp_GArrayRef+39,	/* 3. [ */
    ch_ca_mcgill_sable_soot_grimp_GArrayRef+40,	/* 4. ] */
    0};
