/*  ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractStaticInvokeExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_StaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_StaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[];
extern Class xt_init_SL_ZYjIo[];
extern Class xt_init_SaV_t22BR[];
extern Class xt_toString__KUPTE[];
extern Class xt_toBriefString__CG6Zl[];
extern Class xt_getUseBoxes__43HM2[];
extern Class xt_apply_S_cdKof[];

#define HASHMASK 0xff
/*  10.  6d3e3310  (10)  getType  */
/*  37.  9e646537  (37)  toBriefString  */
/*  46.  c0845446  (46)  setArg  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  55.  24171f55  (55)  setMethod  */
/*  61.  8942e761  (61)  hashCode  */
/*  65.  575ef365  (65)  getArgCount  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  a7.  346c7a7  (a7)  getMethod  */
/*  c0.  beed53c0  (c0)  getArg  */
/*  ca.  54b64bca  (ca)  getArgBox  */
/*  ef.  494d5bef  (ef)  apply  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.getType__tomHF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.toBriefString__CG6Zl,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1065069498, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.setArg_iV_rytNo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    605495125, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.setMethod_S_E14fd,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0,
    1465840485, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.getArgCount__y67P8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.toString__KUPTE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.getUseBoxes__43HM2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54970279, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.getMethod__kWzgE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1091742784, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.getArg_i_zrLa6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1421233098, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.getArgBox_i_JRrTO,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.M.apply_S_cdKof,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(52) nmchars = {&acl_char, 0, 52, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','a','t','i','c','I','n','v','o','k','e','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 52 };
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr, method), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr, argBoxes), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,39,0,0x4,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr cl_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr),
    24,
    0,
    2,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    11, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr,
    st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__yAbBf,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x0,7,0},
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
	{TMIT_native_code, toString__KUPTE,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x8001,2,xt_toString__KUPTE},
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
	{TMIT_native_code, getType__tomHF,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,29,0,0x8001,6,0},
	{TMIT_native_code, getUseBoxes__43HM2,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,1,0x8001,4,xt_getUseBoxes__43HM2},
	{TMIT_native_code, apply_S_cdKof,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,32,1,0x8001,5,xt_apply_S_cdKof},
	{TMIT_native_code, toBriefString__CG6Zl,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,20,1,0x8001,3,xt_toBriefString__CG6Zl},
	{TMIT_native_code, init_SL_ZYjIo,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,63,1,0x0,0,xt_init_SL_ZYjIo},
	{TMIT_native_code, init_SaV_t22BR,(const Char *)&nmim_23,6,
	(const Char *)&sgim_23,75,1,0x4,1,xt_init_SaV_t22BR},
    } /* end of methodsigs */
};


/*M init_SL_ZYjIo: ca.mcgill.sable.soot.jimple.AbstractStaticInvokeExpr.<init>(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)V */

Class xt_init_SL_ZYjIo[] = { 0 };

Void init_SL_ZYjIo(Object p0, Object p1, Object p2)
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
	init_SaV_t22BR(a1,a2,a3);
	i1 = 0;
	iv3 = i1;
	GOTO(16,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a1)->argBoxes;
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

/*M init_SaV_t22BR: ca.mcgill.sable.soot.jimple.AbstractStaticInvokeExpr.<init>(Lca/mcgill/sable/soot/SootMethod;[Lca/mcgill/sable/soot/jimple/ValueBox;)V */

Class xt_init_SaV_t22BR[] = { 0 };

Void init_SaV_t22BR(Object p0, Object p1, Object p2)
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
	init__yAbBf(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a1)->method = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a1)->argBoxes = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__KUPTE: ca.mcgill.sable.soot.jimple.AbstractStaticInvokeExpr.toString()Ljava/lang/String; */

Class xt_toString__KUPTE[] = { 0 };

Object toString__KUPTE(Object p0)
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
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a3)->method;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getSignature__fIDMx.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[2];
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[3];
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[4];
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

/*M toBriefString__CG6Zl: ca.mcgill.sable.soot.jimple.AbstractStaticInvokeExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__CG6Zl[] = { 0 };

Object toBriefString__CG6Zl(Object p0)
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
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a4)->method;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getDeclaringClass__ywcIy.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr*)a3)->method;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[6];
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
	GOTO(58,L3);

L1:	i1 = iv2;
	if (i1 == 0)
		GOTO(62,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[3];
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
		GOBACK(105,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[4];
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

/*M getUseBoxes__43HM2: ca.mcgill.sable.soot.jimple.AbstractStaticInvokeExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__43HM2[] = { 0 };

Object getUseBoxes__43HM2(Object p0)
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

/*M apply_S_cdKof: ca.mcgill.sable.soot.jimple.AbstractStaticInvokeExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_cdKof[] = { 0 };

Void apply_S_cdKof(Object p0, Object p1)
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
	(*(Void(*)())findinterface(a1,-624829500)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','a','t','i','c','I','n','v','o','k','e','E','x','p','r','s','t',
'a','t','i','c','i','n','v','o','k','e',' ','[',']','(',',',' ',')','.',
'('};

const void *st_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr+52,	/* 0. ca.mcgill.sable.soot.jimple.AbstractStat */
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr+66,	/* 1. staticinvoke [ */
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr+68,	/* 2. ]( */
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr+70,	/* 3. ,  */
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr+71,	/* 4. ) */
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr+72,	/* 5. . */
    ch_ca_mcgill_sable_soot_jimple_AbstractStaticInvokeExpr+73,	/* 6. ( */
    0};
