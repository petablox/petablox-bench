/*  ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.c -- from Java class ca.mcgill.sable.soot.grimp.AbstractGrimpIntBinopExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractIntBinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractBinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_Expr.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractIntBinopExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractBinopExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Expr.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr[];
extern const void *st_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr[];
extern Class xt_init_VV_AhgZ2[];
extern Class xt_init_VV_CnHo9[];

#define HASHMASK 0xff
/*  7.  23901607  (7)  setOp1  */
/*  10.  6d3e3310  (10)  getType  */
/*  18.  3395eb18  (18)  getOp2Box  */
/*  1d.  711b951d  (1d)  getOp1  */
/*  37.  9e646537  (37)  toBriefString  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  50.  68eb9650  (50)  setOp2  */
/*  61.  8942e761  (61)  hashCode  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  72.  6524f972  (72)  getOp2  */
/*  7f.  c7d7927f  (7f)  getOp1Box  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  d2.  4c0d6fd2  (d2)  clone  */
/*  ef.  494d5bef  (ef)  apply  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    596645383, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.setOp1_V_smADO,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.getType__CmbMy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    865463064, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.getOp2Box__1UMlm,
    0, 0, 0, 0, 0, 0, 0, 0,
    1897633053, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.getOp1__mUF21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.toBriefString__mHCqh,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.equals_O_Ba6e0,
    0, 0,
    1760269904, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.setOp2_V_Tf2o5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.toString__k6uLi,
    0, 0, 0, 0,
    1696921970, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.getOp2__PMvsN,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -942173569, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.getOp1Box__s281o,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.getUseBoxes__IOSR3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.M.apply_S_mJjTz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(52) nmchars = {&acl_char, 0, 52, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','A','b','s','t','r','a','c','t','G',
'r','i','m','p','I','n','t','B','i','n','o','p','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 52 };
static const Char nmiv_0[] = {
'o','p','1','B','o','x'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_1[] = {
'o','p','2','B','o','x'};
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
'g','e','t','O','p','1'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_13[] = {
'g','e','t','O','p','2'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_14[] = {
'g','e','t','O','p','1','B','o','x'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_15[] = {
'g','e','t','O','p','2','B','o','x'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_16[] = {
's','e','t','O','p','1'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_17[] = {
's','e','t','O','p','2'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_18[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'g','e','t','S','y','m','b','o','l'};
static const Char sgim_19[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_20[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_20[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
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
static const Char nmim_23[] = {
'<','i','n','i','t','>'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'V'};
static const Char nmim_24[] = {
'<','i','n','i','t','>'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e','B','o','x',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr, op1Box), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,38,0,0x4,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr, op2Box), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,38,0,0x4,1}, 
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
} inr_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr cl_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr),
    25,
    0,
    2,
    0,
    4, supers,
    2, 0, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr,
    st_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__bwh3U,(const Char *)&nmim_0,6,
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
	{TMIT_native_code, toString__k6uLi,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,8,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getOp1__mUF21,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,37,0,0x8001,0,0},
	{TMIT_native_code, getOp2__PMvsN,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,37,0,0x8001,1,0},
	{TMIT_native_code, getOp1Box__s281o,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,40,0,0x8001,2,0},
	{TMIT_native_code, getOp2Box__1UMlm,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,40,0,0x8001,3,0},
	{TMIT_native_code, setOp1_V_smADO,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,38,0,0x8001,4,0},
	{TMIT_native_code, setOp2_V_Tf2o5,(const Char *)&nmim_17,6,
	(const Char *)&sgim_17,38,0,0x8001,5,0},
	{TMIT_native_code, getUseBoxes__IOSR3,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,29,0,0x8001,6,0},
	{TMIT_abstract, 0,(const Char *)&nmim_19,9,
	(const Char *)&sgim_19,20,0,0x404,7,0},
	{TMIT_native_code, toBriefString__mHCqh,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,20,0,0x8001,9,0},
	{TMIT_native_code, getType__CmbMy,(const Char *)&nmim_21,7,
	(const Char *)&sgim_21,29,0,0x8001,0,0},
	{TMIT_abstract, 0,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,32,0,0x8401,12,0},
	{TMIT_native_code, init_VV_AhgZ2,(const Char *)&nmim_23,6,
	(const Char *)&sgim_23,73,1,0x0,0,xt_init_VV_AhgZ2},
	{TMIT_native_code, init_VV_CnHo9,(const Char *)&nmim_24,6,
	(const Char *)&sgim_24,79,1,0x4,1,xt_init_VV_CnHo9},
    } /* end of methodsigs */
};


/*M init_VV_AhgZ2: ca.mcgill.sable.soot.grimp.AbstractGrimpIntBinopExpr.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_init_VV_AhgZ2[] = { 0 };

Void init_VV_AhgZ2(Object p0, Object p1, Object p2)
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
		newArgBox_V_gOZZr.f(a2,a3);
	a3 = v__ES3xL();
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newArgBox_V_gOZZr.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_VV_CnHo9(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_VV_CnHo9: ca.mcgill.sable.soot.grimp.AbstractGrimpIntBinopExpr.<init>(Lca/mcgill/sable/soot/jimple/ValueBox;Lca/mcgill/sable/soot/jimple/ValueBox;)V */

Class xt_init_VV_CnHo9[] = { 0 };

Void init_VV_CnHo9(Object p0, Object p1, Object p2)
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
	init__bwh3U(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op1Box = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractBinopExpr*)a1)->op2Box = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','A','b','s','t','r','a','c','t','G',
'r','i','m','p','I','n','t','B','i','n','o','p','E','x','p','r'};

const void *st_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr[] = {
    ch_ca_mcgill_sable_soot_grimp_AbstractGrimpIntBinopExpr+52,	/* 0. ca.mcgill.sable.soot.grimp.AbstractGrimp */
    0};
