/*  ca_mcgill_sable_soot_jimple_JInstanceFieldRef.c -- from Java class ca.mcgill.sable.soot.jimple.JInstanceFieldRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JInstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_InstanceFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractInstanceFieldRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
    &cl_ca_mcgill_sable_soot_jimple_InstanceFieldRef.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JInstanceFieldRef[];
extern const void *st_ca_mcgill_sable_soot_jimple_JInstanceFieldRef[];
extern Class xt_init_VS_FxpjE[];

#define HASHMASK 0x7f
/*  10.  6d3e3310  (10)  getType  */
/*  11.  875cba91  (11)  getField  */
/*  12.  223eb592  (12)  setBase  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  1a.  cc58ac1a  (1a)  getBaseBox  */
/*  2c.  4d33fcac  (2c)  getBase  */
/*  37.  9e646537  (37)  toBriefString  */
/*  61.  8942e761  (61)  hashCode  */
/*  6f.  494d5bef  (6f)  apply  */
/*  77.  30fd6bf7  (77)  setField  */
static const struct ihash htable[128] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.getType__UDrTn,
    -2023966063, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.getField__hrn0q,
    574535058, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.setBase_V_SJ1z0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.getUseBoxes__dkvqO,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -866604006, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.getBaseBox__cq6Gj,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1295252652, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.getBase__AbzoX,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.toBriefString__NkvL7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.apply_S_PJ1FA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    821914615, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.M.setField_S_d4Uyo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(45) nmchars = {&acl_char, 0, 45, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','I','n','s','t','a','n','c',
'e','F','i','e','l','d','R','e','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 45 };
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JInstanceFieldRef, field), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,32,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JInstanceFieldRef, baseBox), 0,(const Char *)&nmiv_1,7,(const Char *)&sgiv_1,38,0,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_JInstanceFieldRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef cl_ca_mcgill_sable_soot_jimple_JInstanceFieldRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JInstanceFieldRef),
    23,
    0,
    2,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JInstanceFieldRef,
    st_ca_mcgill_sable_soot_jimple_JInstanceFieldRef,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JInstanceFieldRef,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
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
	{TMIT_native_code, toString__Xpv6p,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x1,1,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_VS_S1jqJ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,73,0,0x4,0,0},
	{TMIT_native_code, toBriefString__NkvL7,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,0,0x8001,2,0},
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
	{TMIT_native_code, init_VS_FxpjE,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,70,1,0x0,0,xt_init_VS_FxpjE},
    } /* end of methodsigs */
};


/*M init_VS_FxpjE: ca.mcgill.sable.soot.jimple.JInstanceFieldRef.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/SootField;)V */

Class xt_init_VS_FxpjE[] = { 0 };

Void init_VS_FxpjE(Object p0, Object p1, Object p2)
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
		newLocalBox_V_BsxZy.f(a2,a3);
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



const Char ch_ca_mcgill_sable_soot_jimple_JInstanceFieldRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','I','n','s','t','a','n','c',
'e','F','i','e','l','d','R','e','f'};

const void *st_ca_mcgill_sable_soot_jimple_JInstanceFieldRef[] = {
    ch_ca_mcgill_sable_soot_jimple_JInstanceFieldRef+45,	/* 0. ca.mcgill.sable.soot.jimple.JInstanceFie */
    0};
