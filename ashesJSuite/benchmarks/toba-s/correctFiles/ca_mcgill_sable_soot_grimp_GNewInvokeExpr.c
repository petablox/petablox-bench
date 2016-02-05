/*  ca_mcgill_sable_soot_grimp_GNewInvokeExpr.c -- from Java class ca.mcgill.sable.soot.grimp.GNewInvokeExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GNewInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewInvokeExpr.h"
#include "ca_mcgill_sable_soot_grimp_Precedence.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_StaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_grimp_ExprBox.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_NewInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_grimp_Precedence.C,
    &cl_ca_mcgill_sable_soot_jimple_StaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_grimp_ExprBox.C,
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[];
extern const void *st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[];
extern Class xt_init_RSL_gzcZR[];
extern Class xt_getBaseType__SYasj[];
extern Class xt_setBaseType_R_8aV7F[];
extern Class xt_getType__kPH38[];
extern Class xt_getPrecedence__cVj3o[];
extern Class xt_toString__9UYgg[];
extern Class xt_toBriefString__73CFz[];
extern Class xt_getUseBoxes__VWAWE[];
extern Class xt_apply_S_dSUhS[];

#define HASHMASK 0xff
/*  10.  6d3e3310  (10)  getType  */
/*  37.  9e646537  (37)  toBriefString  */
/*  46.  c0845446  (46)  setArg  */
/*  4c.  c3760a4c  (4c)  getBaseType  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  55.  24171f55  (55)  setMethod  */
/*  61.  8942e761  (61)  hashCode  */
/*  65.  575ef365  (65)  getArgCount  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  a7.  346c7a7  (a7)  getMethod  */
/*  c0.  beed53c0  (c0)  getArg  */
/*  ca.  54b64bca  (ca)  getArgBox  */
/*  cc.  eaf21fcc  (cc)  getPrecedence  */
/*  d2.  4c0d6fd2  (d2)  clone  */
/*  ef.  494d5bef  (ef)  apply  */
/*  fe.  fc7a37fe  (fe)  setBaseType  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getType__kPH38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.toBriefString__73CFz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1065069498, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.setArg_iV_rytNo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1015674292, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getBaseType__SYasj,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    605495125, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.setMethod_S_E14fd,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0,
    1465840485, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getArgCount__y67P8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.toString__9UYgg,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getUseBoxes__VWAWE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54970279, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getMethod__kWzgE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1091742784, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getArg_i_zrLa6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1421233098, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getArgBox_i_JRrTO,
    0, 0,
    -353230900, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.getPrecedence__cVj3o,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.apply_S_dSUhS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -59099138, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.M.setBaseType_R_8aV7F,
    0, 0,
};

static const CARRAY(41) nmchars = {&acl_char, 0, 41, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','N','e','w','I','n','v','o','k',
'e','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 41 };
static const Char nmiv_0[] = {
'm','e','t','h','o','d'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmiv_1[] = {
'a','r','g','B','o','x','e','s'};
static const Char sgiv_1[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmiv_2[] = {
't','y','p','e'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','R','e','f','T','y','p','e',';'};
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
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmim_13[] = {
's','e','t','M','e','t','h','o','d'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','V'};
static const Char nmim_14[] = {
'g','e','t','A','r','g'};
static const Char sgim_14[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e',';'};
static const Char nmim_15[] = {
'g','e','t','A','r','g','C','o','u','n','t'};
static const Char sgim_15[] = {
'(',')','I'};
static const Char nmim_16[] = {
's','e','t','A','r','g'};
static const Char sgim_16[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';',')','V'};
static const Char nmim_17[] = {
'g','e','t','A','r','g','B','o','x'};
static const Char sgim_17[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e','B','o','x',';'};
static const Char nmim_18[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_19[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_20[] = {
'a','p','p','l','y'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};
static const Char nmim_21[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_21[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_22[] = {
'<','i','n','i','t','>'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i',
'l','/','L','i','s','t',';',')','V'};
static const Char nmim_23[] = {
'<','i','n','i','t','>'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','[','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o','x',
';',')','V'};
static const Char nmim_24[] = {
'<','i','n','i','t','>'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','R','e','f','T','y','p','e',';','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','S',
'o','o','t','M','e','t','h','o','d',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','u','t','i','l','/','L','i','s','t',
';',')','V'};
static const Char nmim_25[] = {
'g','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_25[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','R','e','f','T','y','p','e',';'};
static const Char nmim_26[] = {
's','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','R','e','f','T','y','p','e',';',')','V'};
static const Char nmim_27[] = {
'g','e','t','P','r','e','c','e','d','e','n','c','e'};
static const Char sgim_27[] = {
'(',')','I'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr, method), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr, argBoxes), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,39,0,0x4,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr, type), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,30,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_grimp_GNewInvokeExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr cl_ca_mcgill_sable_soot_grimp_GNewInvokeExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr),
    28,
    0,
    3,
    0,
    4, supers,
    4, 2, inters, HASHMASK, htable,
    10, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr,
    st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GNewInvokeExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__yAbBf,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x0,7,0},
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
	{TMIT_native_code, toString__9UYgg,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x8001,5,xt_toString__9UYgg},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getMethod__kWzgE,(const Char *)&nmim_12,9,
	(const Char *)&sgim_12,35,0,0x8001,0,0},
	{TMIT_native_code, setMethod_S_E14fd,(const Char *)&nmim_13,9,
	(const Char *)&sgim_13,36,0,0x8001,1,0},
	{TMIT_native_code, getArg_i_zrLa6,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,38,0,0x8001,2,0},
	{TMIT_native_code, getArgCount__y67P8,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,3,0,0x8001,3,0},
	{TMIT_native_code, setArg_iV_rytNo,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,39,0,0x8001,4,0},
	{TMIT_native_code, getArgBox_i_JRrTO,(const Char *)&nmim_17,9,
	(const Char *)&sgim_17,41,0,0x8001,5,0},
	{TMIT_native_code, getType__kPH38,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,29,1,0x8001,3,xt_getType__kPH38},
	{TMIT_native_code, getUseBoxes__VWAWE,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,1,0x8001,7,xt_getUseBoxes__VWAWE},
	{TMIT_native_code, apply_S_dSUhS,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,32,1,0x8001,8,xt_apply_S_dSUhS},
	{TMIT_native_code, toBriefString__73CFz,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,20,1,0x8001,6,xt_toBriefString__73CFz},
	{TMIT_native_code, init_SL_ZYjIo,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,63,0,0x0,0,0},
	{TMIT_native_code, init_SaV_t22BR,(const Char *)&nmim_23,6,
	(const Char *)&sgim_23,75,0,0x4,1,0},
	{TMIT_native_code, init_RSL_gzcZR,(const Char *)&nmim_24,6,
	(const Char *)&sgim_24,93,1,0x0,0,xt_init_RSL_gzcZR},
	{TMIT_native_code, getBaseType__SYasj,(const Char *)&nmim_25,11,
	(const Char *)&sgim_25,32,1,0x8001,1,xt_getBaseType__SYasj},
	{TMIT_native_code, setBaseType_R_8aV7F,(const Char *)&nmim_26,11,
	(const Char *)&sgim_26,33,1,0x8001,2,xt_setBaseType_R_8aV7F},
	{TMIT_native_code, getPrecedence__cVj3o,(const Char *)&nmim_27,13,
	(const Char *)&sgim_27,3,1,0x8001,4,xt_getPrecedence__cVj3o},
    } /* end of methodsigs */
};


/*M init_RSL_gzcZR: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.<init>(Lca/mcgill/sable/soot/RefType;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)V */

Class xt_init_RSL_gzcZR[] = { 0 };

Void init_RSL_gzcZR(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	a2 = av2;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = (*(Int(*)())findinterface(a3,-1646441547)->f)(a3);
	a3 = anewarray(&cl_ca_mcgill_sable_soot_grimp_ExprBox.C,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_SaV_t22BR(a1,a2,a3);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr*)a1)->type = a2;
	i1 = 0;
	iv4 = i1;
	GOTO(22,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a1)->argBoxes;
	i2 = iv4;
	a3 = v__ES3xL();
	a4 = av3;
	i5 = iv4;
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
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newExprBox_V_B8P02.f(a3,a4);
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
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	if (i1 < i2)
		GOBACK(60,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getBaseType__SYasj: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.getBaseType()Lca/mcgill/sable/soot/RefType; */

Class xt_getBaseType__SYasj[] = { 0 };

Object getBaseType__SYasj(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setBaseType_R_8aV7F: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.setBaseType(Lca/mcgill/sable/soot/RefType;)V */

Class xt_setBaseType_R_8aV7F[] = { 0 };

Void setBaseType_R_8aV7F(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr*)a1)->type = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__kPH38: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__kPH38[] = { 0 };

Object getType__kPH38(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getPrecedence__cVj3o: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.getPrecedence()I */

Class xt_getPrecedence__cVj3o[] = { 0 };

Int getPrecedence__cVj3o(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 850;
	return i1;

	/*NOTREACHED*/
}

/*M toString__9UYgg: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.toString()Ljava/lang/String; */

Class xt_toString__9UYgg[] = { 0 };

Object toString__9UYgg(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr*)a3)->type;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_RefType*)a3)->class->M.
		toString__qqwSR.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[2];
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
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	i1 = 0;
	iv2 = i1;
	GOTO(42,L3);

L1:	i1 = iv2;
	if (i1 == 0)
		GOTO(46,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L2:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a2)->argBoxes;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
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
	iv2 += 1;
L3:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a2)->argBoxes;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(84,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
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

/*M toBriefString__73CFz: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__73CFz[] = { 0 };

Object toBriefString__73CFz(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_GNewInvokeExpr*)a3)->type;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1637587657)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[2];
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
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	i1 = 0;
	iv2 = i1;
	GOTO(44,L3);

L1:	i1 = iv2;
	if (i1 == 0)
		GOTO(48,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L2:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a2)->argBoxes;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
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
	iv2 += 1;
L3:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a2)->argBoxes;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(91,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
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

/*M getUseBoxes__VWAWE: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__VWAWE[] = { 0 };

Object getUseBoxes__VWAWE(Object p0)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
	GOTO(10,L2);

L1:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a2)->argBoxes;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a2)->argBoxes;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a2)->argBoxes;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(58,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_dSUhS: ca.mcgill.sable.soot.grimp.GNewInvokeExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_dSUhS[] = { 0 };

Void apply_S_dSUhS(Object p0, Object p1)
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
	(*(Void(*)())findinterface(a1,-461684700)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','N','e','w','I','n','v','o','k',
'e','E','x','p','r','n','e','w',' ','(',',',' ',')'};

const void *st_ca_mcgill_sable_soot_grimp_GNewInvokeExpr[] = {
    ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr+41,	/* 0. ca.mcgill.sable.soot.grimp.GNewInvokeExp */
    ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr+45,	/* 1. new  */
    ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr+46,	/* 2. ( */
    ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr+48,	/* 3. ,  */
    ch_ca_mcgill_sable_soot_grimp_GNewInvokeExpr+49,	/* 4. ) */
    0};
