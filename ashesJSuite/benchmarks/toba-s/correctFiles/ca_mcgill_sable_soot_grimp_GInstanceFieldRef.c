/*  ca_mcgill_sable_soot_grimp_GInstanceFieldRef.c -- from Java class ca.mcgill.sable.soot.grimp.GInstanceFieldRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GInstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_InstanceFieldRef.h"
#include "ca_mcgill_sable_soot_grimp_Precedence.h"
#include "ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[];
extern const void *st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[];
extern Class xt_init_VS_ABInR[];
extern Class xt_toString_VSS_ShrG7[];
extern Class xt_toString__ssSoh[];
extern Class xt_toBriefString__6ZY8S[];
extern Class xt_getPrecedence__FktXD[];

#define HASHMASK 0x7f
/*  10.  6d3e3310  (10)  getType  */
/*  11.  875cba91  (11)  getField  */
/*  12.  223eb592  (12)  setBase  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  1a.  cc58ac1a  (1a)  getBaseBox  */
/*  2c.  4d33fcac  (2c)  getBase  */
/*  37.  9e646537  (37)  toBriefString  */
/*  4c.  eaf21fcc  (4c)  getPrecedence  */
/*  52.  4c0d6fd2  (52)  clone  */
/*  61.  8942e761  (61)  hashCode  */
/*  6f.  494d5bef  (6f)  apply  */
/*  77.  30fd6bf7  (77)  setField  */
static const struct ihash htable[128] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.getType__UDrTn,
    -2023966063, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.getField__hrn0q,
    574535058, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.setBase_V_SJ1z0,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.getUseBoxes__dkvqO,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -866604006, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.getBaseBox__cq6Gj,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1295252652, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.getBase__AbzoX,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.toBriefString__6ZY8S,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -353230900, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.getPrecedence__FktXD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.apply_S_PJ1FA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    821914615, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.M.setField_S_d4Uyo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(44) nmchars = {&acl_char, 0, 44, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','I','n','s','t','a','n','c','e',
'F','i','e','l','d','R','e','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 44 };
static const Char nmiv_0[] = {
'f','i','e','l','d'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','F','i','e','l','d',';'};
static const Char nmiv_1[] = {
'b','a','s','e','B','o','x'};
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
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')',
'V'};
static const Char nmim_13[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
'g','e','t','B','a','s','e'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_15[] = {
'g','e','t','B','a','s','e','B','o','x'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_16[] = {
's','e','t','B','a','s','e'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_17[] = {
'g','e','t','F','i','e','l','d'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','F','i','e','l','d',';'};
static const Char nmim_18[] = {
's','e','t','F','i','e','l','d'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','V'};
static const Char nmim_19[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_20[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_21[] = {
'a','p','p','l','y'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};
static const Char nmim_22[] = {
'<','i','n','i','t','>'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','V'};
static const Char nmim_23[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';',
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';',
')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';'};
static const Char nmim_24[] = {
'g','e','t','P','r','e','c','e','d','e','n','c','e'};
static const Char sgim_24[] = {
'(',')','I'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GInstanceFieldRef, field), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,32,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GInstanceFieldRef, baseBox), 0,(const Char *)&nmiv_1,7,(const Char *)&sgiv_1,38,0,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_grimp_GInstanceFieldRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef cl_ca_mcgill_sable_soot_grimp_GInstanceFieldRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GInstanceFieldRef),
    25,
    0,
    2,
    0,
    3, supers,
    3, 2, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef,
    st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GInstanceFieldRef,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_cajxu,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x1,11,0},
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
	{TMIT_native_code, toString__ssSoh,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,2,xt_toString__ssSoh},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VS_S1jqJ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,73,0,0x4,0,0},
	{TMIT_native_code, toBriefString__6ZY8S,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,1,0x8001,3,xt_toBriefString__6ZY8S},
	{TMIT_native_code, getBase__AbzoX,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,37,0,0x8001,3,0},
	{TMIT_native_code, getBaseBox__cq6Gj,(const Char *)&nmim_15,10,
	(const Char *)&sgim_15,40,0,0x8001,4,0},
	{TMIT_native_code, setBase_V_SJ1z0,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,38,0,0x8001,5,0},
	{TMIT_native_code, getField__hrn0q,(const Char *)&nmim_17,8,
	(const Char *)&sgim_17,34,0,0x8001,6,0},
	{TMIT_native_code, setField_S_d4Uyo,(const Char *)&nmim_18,8,
	(const Char *)&sgim_18,35,0,0x8001,7,0},
	{TMIT_native_code, getUseBoxes__dkvqO,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,0,0x8001,8,0},
	{TMIT_native_code, getType__UDrTn,(const Char *)&nmim_20,7,
	(const Char *)&sgim_20,29,0,0x8001,9,0},
	{TMIT_native_code, apply_S_PJ1FA,(const Char *)&nmim_21,5,
	(const Char *)&sgim_21,32,0,0x8001,10,0},
	{TMIT_native_code, init_VS_ABInR,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,70,1,0x0,0,xt_init_VS_ABInR},
	{TMIT_native_code, toString_VSS_ShrG7,(const Char *)&nmim_23,8,
	(const Char *)&sgim_23,91,1,0x2,1,xt_toString_VSS_ShrG7},
	{TMIT_native_code, getPrecedence__FktXD,(const Char *)&nmim_24,13,
	(const Char *)&sgim_24,3,1,0x8001,4,xt_getPrecedence__FktXD},
    } /* end of methodsigs */
};


/*M init_VS_ABInR: ca.mcgill.sable.soot.grimp.GInstanceFieldRef.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/SootField;)V */

Class xt_init_VS_ABInR[] = { 0 };

Void init_VS_ABInR(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
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
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_VS_S1jqJ(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_VSS_ShrG7: ca.mcgill.sable.soot.grimp.GInstanceFieldRef.toString(Lca/mcgill/sable/soot/jimple/Value;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_VSS_ShrG7[] = { 0 };

Object toString_VSS_ShrG7(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av2;
	av4 = a1;
	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(7,L1);
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
	i2 = ((struct in_ca_mcgill_sable_soot_grimp_GInstanceFieldRef*)a2)->class->M.
		getPrecedence__FktXD.f(a2);
	if (i1 >= i2)
		GOTO(23,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[2];
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
	av4 = a1;
L1:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av4;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av3;
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

/*M toString__ssSoh: ca.mcgill.sable.soot.grimp.GInstanceFieldRef.toString()Ljava/lang/String; */

Class xt_toString__ssSoh[] = { 0 };

Object toString__ssSoh(Object p0)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef*)a2)->class->M.
		getBase__AbzoX.f(a2);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef*)a3)->class->M.
		getBase__AbzoX.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Object*)a3)->class->M.
		toString__4d9OF.f(a3);
	a4 = new(&cl_java_lang_StringBuffer.C);
	a5 = a4;
	a6 = (Object)st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[3];
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a5,a6);
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef*)a5)->class->M.
		getField__hrn0q.f(a5);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootField*)a5)->class->M.
		getSignature__yo9RG.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_StringBuffer*)a4)->class->M.
		append_S_6tRW4.f(a4,a5);
	a5 = (Object)st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[4];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_StringBuffer*)a4)->class->M.
		append_S_6tRW4.f(a4,a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_StringBuffer*)a4)->class->M.
		toString__GjBaS.f(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_VSS_ShrG7(a1,a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__6ZY8S: ca.mcgill.sable.soot.grimp.GInstanceFieldRef.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__6ZY8S[] = { 0 };

Object toBriefString__6ZY8S(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef*)a2)->class->M.
		getBase__AbzoX.f(a2);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef*)a3)->class->M.
		getBase__AbzoX.f(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1637587657)->f)(a3);
	a4 = new(&cl_java_lang_StringBuffer.C);
	a5 = a4;
	a6 = (Object)st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[5];
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a5,a6);
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef*)a5)->class->M.
		getField__hrn0q.f(a5);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootField*)a5)->class->M.
		getName__LfNQ7.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_StringBuffer*)a4)->class->M.
		append_S_6tRW4.f(a4,a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_StringBuffer*)a4)->class->M.
		toString__GjBaS.f(a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = toString_VSS_ShrG7(a1,a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getPrecedence__FktXD: ca.mcgill.sable.soot.grimp.GInstanceFieldRef.getPrecedence()I */

Class xt_getPrecedence__FktXD[] = { 0 };

Int getPrecedence__FktXD(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 950;
	return i1;

	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','I','n','s','t','a','n','c','e',
'F','i','e','l','d','R','e','f','(',')','.','[',']','.'};

const void *st_ca_mcgill_sable_soot_grimp_GInstanceFieldRef[] = {
    ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef+44,	/* 0. ca.mcgill.sable.soot.grimp.GInstanceFiel */
    ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef+45,	/* 1. ( */
    ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef+46,	/* 2. ) */
    ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef+48,	/* 3. .[ */
    ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef+49,	/* 4. ] */
    ch_ca_mcgill_sable_soot_grimp_GInstanceFieldRef+50,	/* 5. . */
    0};
