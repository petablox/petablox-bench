/*  ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractNonStaticInvokeExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_AbstractInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractInvokeExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr[];
extern Class xt_getBase__40J5r[];
extern Class xt_getBaseBox__IdhLW[];
extern Class xt_setBase_V_ycPiZ[];
extern Class xt_getUseBoxes__7Gd0w[];
extern Class xt_init__9ofm5[];

#define HASHMASK 0xff
/*  10.  6d3e3310  (10)  getType  */
/*  1a.  cc58ac1a  (1a)  getBaseBox  */
/*  37.  9e646537  (37)  toBriefString  */
/*  46.  c0845446  (46)  setArg  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  55.  24171f55  (55)  setMethod  */
/*  61.  8942e761  (61)  hashCode  */
/*  65.  575ef365  (65)  getArgCount  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  92.  223eb592  (92)  setBase  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  a7.  346c7a7  (a7)  getMethod  */
/*  ac.  4d33fcac  (ac)  getBase  */
/*  c0.  beed53c0  (c0)  getArg  */
/*  ca.  54b64bca  (ca)  getArgBox  */
/*  ef.  494d5bef  (ef)  apply  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getType__tomHF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -866604006, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getBaseBox__IdhLW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.toBriefString__qNMFA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1065069498, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.setArg_iV_rytNo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    605495125, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.setMethod_S_E14fd,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0,
    1465840485, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getArgCount__y67P8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    574535058, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.setBase_V_ycPiZ,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getUseBoxes__7Gd0w,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54970279, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getMethod__kWzgE,
    0, 0, 0, 0, 0, 0, 0, 0,
    1295252652, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getBase__40J5r,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1091742784, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getArg_i_zrLa6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1421233098, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.getArgBox_i_JRrTO,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.M.apply_S_CNPBf,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(55) nmchars = {&acl_char, 0, 55, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'N','o','n','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p',
'r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 55 };
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
'b','a','s','e','B','o','x'};
static const Char sgiv_2[] = {
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
'g','e','t','B','a','s','e'};
static const Char sgim_22[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_23[] = {
'g','e','t','B','a','s','e','B','o','x'};
static const Char sgim_23[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_24[] = {
's','e','t','B','a','s','e'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr, method), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr, argBoxes), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,39,0,0x4,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr, baseBox), 0,(const Char *)&nmiv_2,7,(const Char *)&sgiv_2,38,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr cl_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr),
    25,
    0,
    3,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr,
    st_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__9ofm5,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,4,xt_init__9ofm5},
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
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
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
	{TMIT_native_code, getUseBoxes__7Gd0w,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,1,0x8001,3,xt_getUseBoxes__7Gd0w},
	{TMIT_abstract, 0,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,32,0,0x8401,9,0},
	{TMIT_abstract, 0,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,20,0,0x8401,10,0},
	{TMIT_native_code, getBase__40J5r,(const Char *)&nmim_22,7,
	(const Char *)&sgim_22,37,1,0x8001,0,xt_getBase__40J5r},
	{TMIT_native_code, getBaseBox__IdhLW,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,40,1,0x8001,1,xt_getBaseBox__IdhLW},
	{TMIT_native_code, setBase_V_ycPiZ,(const Char *)&nmim_24,7,
	(const Char *)&sgim_24,38,1,0x8001,2,xt_setBase_V_ycPiZ},
    } /* end of methodsigs */
};


/*M getBase__40J5r: ca.mcgill.sable.soot.jimple.AbstractNonStaticInvokeExpr.getBase()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getBase__40J5r[] = { 0 };

Object getBase__40J5r(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr*)a1)->baseBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getBaseBox__IdhLW: ca.mcgill.sable.soot.jimple.AbstractNonStaticInvokeExpr.getBaseBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getBaseBox__IdhLW[] = { 0 };

Object getBaseBox__IdhLW(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr*)a1)->baseBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setBase_V_ycPiZ: ca.mcgill.sable.soot.jimple.AbstractNonStaticInvokeExpr.setBase(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setBase_V_ycPiZ[] = { 0 };

Void setBase_V_ycPiZ(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr*)a1)->baseBox;
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

/*M getUseBoxes__7Gd0w: ca.mcgill.sable.soot.jimple.AbstractNonStaticInvokeExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__7Gd0w[] = { 0 };

Object getUseBoxes__7Gd0w(Object p0)
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
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr*)a2)->baseBox;
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr*)a2)->baseBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	i1 = 0;
	iv2 = i1;
	GOTO(42,L2);

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
		GOBACK(90,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__9ofm5: ca.mcgill.sable.soot.jimple.AbstractNonStaticInvokeExpr.<init>()V */

Class xt_init__9ofm5[] = { 0 };

Void init__9ofm5(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__yAbBf(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'N','o','n','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p',
'r'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractNonStaticInvokeExpr+55,	/* 0. ca.mcgill.sable.soot.jimple.AbstractNonS */
    0};
