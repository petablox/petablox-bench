/*  ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.c -- from Java class ca.mcgill.sable.soot.jimple.JNewMultiArrayExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractNewMultiArrayExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractNewMultiArrayExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr[];
extern Class xt_init_AL_kP37g[];

#define HASHMASK 0xff
/*  8.  d8ff1208  (8)  setBaseType  */
/*  10.  6d3e3310  (10)  getType  */
/*  32.  5b7f9932  (32)  getSizeCount  */
/*  37.  9e646537  (37)  toBriefString  */
/*  3b.  e7ed723b  (3b)  setSize  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  61.  8942e761  (61)  hashCode  */
/*  6f.  afbc186f  (6f)  getSizeBox  */
/*  71.  f1b3c171  (71)  getSize  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  ef.  494d5bef  (ef)  apply  */
/*  f3.  c08fc4f3  (f3)  getSizes  */
/*  fe.  884dcefe  (fe)  getBaseType  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -654372344, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.setBaseType_A_rRldD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.getType__pMLRg,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1535088946, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.getSizeCount__322rj,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.toBriefString__SrIc3,
    0, 0, 0, 0, 0, 0,
    -403869125, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.setSize_iV_GxW6d,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1346627473, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.getSizeBox_i_eJGxE,
    0, 0,
    -239877775, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.getSize_i_SGW71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.getUseBoxes__mT07M,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.apply_S_KzYwZ,
    0, 0, 0, 0, 0, 0,
    -1064319757, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.getSizes__c03IY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2008166658, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.M.getBaseType__ng2oO,
    0, 0,
};

static const CARRAY(46) nmchars = {&acl_char, 0, 46, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','N','e','w','M','u','l','t',
'i','A','r','r','a','y','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 46 };
static const Char nmiv_0[] = {
'b','a','s','e','T','y','p','e'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','A','r','r','a','y','T','y','p','e',';'};
static const Char nmiv_1[] = {
's','i','z','e','B','o','x','e','s'};
static const Char sgiv_1[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
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
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';','[','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o','x',';',
')','V'};
static const Char nmim_13[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
'g','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','A','r','r','a','y','T','y','p','e',';'};
static const Char nmim_15[] = {
's','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';',')','V'};
static const Char nmim_16[] = {
'g','e','t','S','i','z','e','B','o','x'};
static const Char sgim_16[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e','B','o','x',';'};
static const Char nmim_17[] = {
'g','e','t','S','i','z','e','C','o','u','n','t'};
static const Char sgim_17[] = {
'(',')','I'};
static const Char nmim_18[] = {
'g','e','t','S','i','z','e'};
static const Char sgim_18[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e',';'};
static const Char nmim_19[] = {
'g','e','t','S','i','z','e','s'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_20[] = {
's','e','t','S','i','z','e'};
static const Char sgim_20[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';',')','V'};
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
'<','i','n','i','t','>'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr, baseType), 0,(const Char *)&nmiv_0,8,(const Char *)&sgiv_0,32,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr, sizeBoxes), 0,(const Char *)&nmiv_1,9,(const Char *)&sgiv_1,39,0,0x4,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr cl_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr),
    25,
    0,
    2,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr,
    st_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr,
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
	{TMIT_native_code, toString__EYwMs,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x1,1,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_AaV_usFUb,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,74,0,0x4,0,0},
	{TMIT_native_code, toBriefString__SrIc3,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,0,0x8001,2,0},
	{TMIT_native_code, getBaseType__ng2oO,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,34,0,0x8001,3,0},
	{TMIT_native_code, setBaseType_A_rRldD,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,35,0,0x8001,4,0},
	{TMIT_native_code, getSizeBox_i_eJGxE,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,41,0,0x8001,5,0},
	{TMIT_native_code, getSizeCount__322rj,(const Char *)&nmim_17,12,
	(const Char *)&sgim_17,3,0,0x8001,6,0},
	{TMIT_native_code, getSize_i_SGW71,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,38,0,0x8001,7,0},
	{TMIT_native_code, getSizes__c03IY,(const Char *)&nmim_19,8,
	(const Char *)&sgim_19,29,0,0x8001,8,0},
	{TMIT_native_code, setSize_iV_GxW6d,(const Char *)&nmim_20,7,
	(const Char *)&sgim_20,39,0,0x8001,9,0},
	{TMIT_native_code, getUseBoxes__mT07M,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,29,0,0x8001,10,0},
	{TMIT_native_code, getType__pMLRg,(const Char *)&nmim_22,7,
	(const Char *)&sgim_22,29,0,0x8001,11,0},
	{TMIT_native_code, apply_S_KzYwZ,(const Char *)&nmim_23,5,
	(const Char *)&sgim_23,32,0,0x8001,12,0},
	{TMIT_native_code, init_AL_kP37g,(const Char *)&nmim_24,6,
	(const Char *)&sgim_24,62,1,0x0,0,xt_init_AL_kP37g},
    } /* end of methodsigs */
};


/*M init_AL_kP37g: ca.mcgill.sable.soot.jimple.JNewMultiArrayExpr.<init>(Lca/mcgill/sable/soot/ArrayType;Lca/mcgill/sable/util/List;)V */

Class xt_init_AL_kP37g[] = { 0 };

Void init_AL_kP37g(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = (*(Int(*)())findinterface(a3,-1646441547)->f)(a3);
	a3 = anewarray(&cl_ca_mcgill_sable_soot_jimple_ValueBox.C,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_AaV_usFUb(a1,a2,a3);
	i1 = 0;
	iv3 = i1;
	GOTO(16,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNewMultiArrayExpr*)a1)->sizeBoxes;
	i2 = iv3;
	a3 = v__WbL8F();
	a4 = av2;
	i5 = iv3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1247717038)->f)(a4,i5);
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_jimple_Value.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a3)->class->M.
		newImmediateBox_V_7jLB8.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	if (i1 < i2)
		GOBACK(51,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','N','e','w','M','u','l','t',
'i','A','r','r','a','y','E','x','p','r'};

const void *st_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_JNewMultiArrayExpr+46,	/* 0. ca.mcgill.sable.soot.jimple.JNewMultiArr */
    0};
