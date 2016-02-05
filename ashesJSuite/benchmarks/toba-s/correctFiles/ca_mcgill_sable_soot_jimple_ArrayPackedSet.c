/*  ca_mcgill_sable_soot_jimple_ArrayPackedSet.c -- from Java class ca.mcgill.sable.soot.jimple.ArrayPackedSet  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ArrayPackedSet.h"
#include "ca_mcgill_sable_soot_jimple_BoundedFlowSet.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_FlowUniverse.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_BoundedFlowSet.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_FlowUniverse.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet[];
extern const void *st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[];
extern Class xt_init_F_ixV1P[];
extern Class xt_init_Fai_Y0c5E[];
extern Class xt_clone__NK9Ak[];
extern Class xt_size__o8SJc[];
extern Class xt_isEmpty__bpow4[];
extern Class xt_clear__H7VzW[];
extern Class xt_toList_ii_Fw4WW[];
extern Class xt_toList__nGUqn[];
extern Class xt_add_OF_Mpyu0[];
extern Class xt_complement_F_33Ps5[];
extern Class xt_remove_OF_XqLKi[];
extern Class xt_union_FF_nvdta[];
extern Class xt_difference_FF_B78Wj[];
extern Class xt_intersection_FF_l1qzS[];
extern Class xt_contains_O_nTnFt[];
extern Class xt_equals_O_5Kg8s[];
extern Class xt_toString__ovtyi[];
extern Class xt_copy_F_GNk5x[];

#define HASHMASK 0xff
/*  6.  9add306  (6)  toList  */
/*  21.  14de9a21  (21)  copy  */
/*  22.  4ea93522  (22)  contains  */
/*  47.  5b7e1c47  (47)  add  */
/*  4e.  174d304e  (4e)  clear  */
/*  58.  a77c2458  (58)  intersection  */
/*  61.  8942e761  (61)  hashCode  */
/*  7c.  c2fa7f7c  (7c)  remove  */
/*  88.  7b00e488  (88)  toList  */
/*  a2.  ea013ea2  (a2)  union  */
/*  aa.  df0f57aa  (aa)  complement  */
/*  ae.  fa23fbae  (ae)  isEmpty  */
/*  b5.  9ddd4bb5  (b5)  size  */
/*  bc.  3a6e7abc  (bc)  difference  */
/*  d2.  4c0d6fd2  (d2)  clone  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162386694, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.toList_ii_Fw4WW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    350132769, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.copy_F_GNk5x,
    1319712034, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.contains_O_nTnFt,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1534991431, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.add_OF_Mpyu0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390934606, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.clear__H7VzW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1485036456, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.intersection_FF_l1qzS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1023770756, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.remove_OF_XqLKi,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2063656072, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.toList__nGUqn,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -369017182, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.union_FF_nvdta,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -552642646, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.complement_F_33Ps5,
    0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.isEmpty__bpow4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.size__o8SJc,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    980318908, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.difference_FF_B78Wj,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.M.clone__NK9Ak,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','r','r','a','y','P','a','c',
'k','e','d','S','e','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmiv_0[] = {
'm','a','p'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','U','n','i',
'v','e','r','s','e',';'};
static const Char nmiv_1[] = {
'b','i','t','s'};
static const Char sgiv_1[] = {
'[','I'};
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
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','U','n',
'i','v','e','r','s','e',';',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','U','n',
'i','v','e','r','s','e',';','[','I',')','V'};
static const Char nmim_14[] = {
's','i','z','e'};
static const Char sgim_14[] = {
'(',')','I'};
static const Char nmim_15[] = {
'i','s','E','m','p','t','y'};
static const Char sgim_15[] = {
'(',')','Z'};
static const Char nmim_16[] = {
'c','l','e','a','r'};
static const Char sgim_16[] = {
'(',')','V'};
static const Char nmim_17[] = {
't','o','L','i','s','t'};
static const Char sgim_17[] = {
'(','I','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_18[] = {
't','o','L','i','s','t'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'a','d','d'};
static const Char sgim_19[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_20[] = {
'c','o','m','p','l','e','m','e','n','t'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_21[] = {
'r','e','m','o','v','e'};
static const Char sgim_21[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_22[] = {
'u','n','i','o','n'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_23[] = {
'd','i','f','f','e','r','e','n','c','e'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_24[] = {
'i','n','t','e','r','s','e','c','t','i','o','n'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_25[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_25[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_26[] = {
'c','o','p','y'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet, map), 0,(const Char *)&nmiv_0,3,(const Char *)&sgiv_0,42,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet, bits), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,2,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimple_ArrayPackedSet = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet),
    27,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet,
    st_ca_mcgill_sable_soot_jimple_ArrayPackedSet,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_ArrayPackedSet,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__NK9Ak,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x8001,2,xt_clone__NK9Ak},
	{TMIT_native_code, equals_O_5Kg8s,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,15,xt_equals_O_5Kg8s},
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
	{TMIT_native_code, toString__ovtyi,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,16,xt_toString__ovtyi},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_F_ixV1P,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,45,1,0x1,0,xt_init_F_ixV1P},
	{TMIT_native_code, init_Fai_Y0c5E,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,47,1,0x0,1,xt_init_Fai_Y0c5E},
	{TMIT_native_code, size__o8SJc,(const Char *)&nmim_14,4,
	(const Char *)&sgim_14,3,1,0x8001,3,xt_size__o8SJc},
	{TMIT_native_code, isEmpty__bpow4,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,3,1,0x8001,4,xt_isEmpty__bpow4},
	{TMIT_native_code, clear__H7VzW,(const Char *)&nmim_16,5,
	(const Char *)&sgim_16,3,1,0x8001,5,xt_clear__H7VzW},
	{TMIT_native_code, toList_ii_Fw4WW,(const Char *)&nmim_17,6,
	(const Char *)&sgim_17,31,1,0x8001,6,xt_toList_ii_Fw4WW},
	{TMIT_native_code, toList__nGUqn,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,29,1,0x8001,7,xt_toList__nGUqn},
	{TMIT_native_code, add_OF_Mpyu0,(const Char *)&nmim_19,3,
	(const Char *)&sgim_19,58,1,0x8001,8,xt_add_OF_Mpyu0},
	{TMIT_native_code, complement_F_33Ps5,(const Char *)&nmim_20,10,
	(const Char *)&sgim_20,40,1,0x8001,9,xt_complement_F_33Ps5},
	{TMIT_native_code, remove_OF_XqLKi,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,58,1,0x8001,10,xt_remove_OF_XqLKi},
	{TMIT_native_code, union_FF_nvdta,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,77,1,0x8001,11,xt_union_FF_nvdta},
	{TMIT_native_code, difference_FF_B78Wj,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,77,1,0x8001,12,xt_difference_FF_B78Wj},
	{TMIT_native_code, intersection_FF_l1qzS,(const Char *)&nmim_24,12,
	(const Char *)&sgim_24,77,1,0x8001,13,xt_intersection_FF_l1qzS},
	{TMIT_native_code, contains_O_nTnFt,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,21,1,0x8001,14,xt_contains_O_nTnFt},
	{TMIT_native_code, copy_F_GNk5x,(const Char *)&nmim_26,4,
	(const Char *)&sgim_26,40,1,0x8001,17,xt_copy_F_GNk5x},
    } /* end of methodsigs */
};


/*M init_F_ixV1P: ca.mcgill.sable.soot.jimple.ArrayPackedSet.<init>(Lca/mcgill/sable/soot/jimple/FlowUniverse;)V */

Class xt_init_F_ixV1P[] = { 0 };

Void init_F_ixV1P(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a3)->class->M.
		getSize__cxGnA.f(a3);
	i4 = 32;
	if (!i4) throwDivisionByZeroException();
	i3 = i3 / i4;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a4)->class->M.
		getSize__cxGnA.f(a4);
	i5 = 32;
	if (!i5) throwDivisionByZeroException();
	i4 = i4 % i5;
	if (i4 == 0)
		GOTO(16,L1);
	i4 = 1;
	GOTO(20,L2);

L1:	i4 = 0;
L2:	i3 = i3 + i4;
	a3 = anewarray(&cl_int,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_Fai_Y0c5E(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_Fai_Y0c5E: ca.mcgill.sable.soot.jimple.ArrayPackedSet.<init>(Lca/mcgill/sable/soot/jimple/FlowUniverse;[I)V */

Class xt_init_Fai_Y0c5E[] = { 0 };

Void init_Fai_Y0c5E(Object p0, Object p1, Object p2)
{
Class c0, c1;
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
	((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->map = a2;
	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		clone__dslwm.f(a2);
	if ((a2 != 0) && !(*(struct class **)a2 == &acl_int.C))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__NK9Ak: ca.mcgill.sable.soot.jimple.ArrayPackedSet.clone()Ljava/lang/Object; */

Class xt_clone__NK9Ak[] = { 0 };

Object clone__NK9Ak(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a3)->map;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a4)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_Fai_Y0c5E(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__o8SJc: ca.mcgill.sable.soot.jimple.ArrayPackedSet.size()I */

Class xt_size__o8SJc[] = { 0 };

Int size__o8SJc(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1, iv2, iv3, iv4;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	i1 = 0;
	iv2 = i1;
	GOTO(4,L5);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	GOTO(17,L4);

L2:	i1 = iv3;
	i2 = 1;
	i3 = iv4;
	i2 = i2 << (i3 & 31);
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(26,L3);
	iv1 += 1;
L3:	iv4 += 1;
L4:	i1 = iv4;
	i2 = 32;
	if (i1 < i2)
		GOBACK(39,L2);
	iv2 += 1;
L5:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(51,L1);
	i1 = iv1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEmpty__bpow4: ca.mcgill.sable.soot.jimple.ArrayPackedSet.isEmpty()Z */

Class xt_isEmpty__bpow4[] = { 0 };

Boolean isEmpty__bpow4(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	if (i1 == 0)
		GOTO(11,L2);
	i1 = 0;
	return i1;

L2:	iv1 += 1;
L3:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(25,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__H7VzW: ca.mcgill.sable.soot.jimple.ArrayPackedSet.clear()V */

Class xt_clear__H7VzW[] = { 0 };

Void clear__H7VzW(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	GOTO(2,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv1;
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv1 += 1;
L2:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(21,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toList_ii_Fw4WW: ca.mcgill.sable.soot.jimple.ArrayPackedSet.toList(II)Lca/mcgill/sable/util/List; */

Class xt_toList_ii_Fw4WW[] = { 0 };

Object toList_ii_Fw4WW(Object p0, Int p1, Int p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av3;
Int i0, i1, i2, i3, i4;
Int iv1, iv2, iv4, iv5, iv6, iv7, iv8, iv9, iv10, iv11, iv12, iv13, iv14, iv15;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	iv2 = p2;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av3 = a1;
	i1 = iv1;
	i2 = 32;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 / i2;
	iv4 = i1;
	i1 = iv1;
	i2 = 32;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 % i2;
	iv5 = i1;
	i1 = iv2;
	i2 = 32;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 / i2;
	iv6 = i1;
	i1 = iv2;
	i2 = 32;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 % i2;
	iv7 = i1;
	i1 = iv1;
	i2 = iv2;
	if (i1 <= i2)
		GOTO(34,L1);
	a1 = av3;
	return a1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	iv8 = i1;
	i1 = iv4;
	i2 = 32;
	i1 = i1 * i2;
	iv9 = i1;
	i1 = iv4;
	i2 = iv6;
	if (i1 == i2)
		GOTO(59,L2);
	i1 = 32;
	GOTO(64,L3);

L2:	i1 = iv7;
	i2 = 1;
	i1 = i1 + i2;
L3:	iv10 = i1;
	i1 = iv5;
	iv11 = i1;
	GOTO(77,L6);

L4:	i1 = iv8;
	i2 = 1;
	i3 = iv11;
	i2 = i2 << (i3 & 31);
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(87,L5);
	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->map;
	i3 = iv9;
	i4 = iv11;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a2)->class->M.
		getObjectOf_i_VjxwF.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L5:	iv11 += 1;
L6:	i1 = iv11;
	i2 = iv10;
	if (i1 < i2)
		GOBACK(116,L4);
	i1 = iv4;
	i2 = iv6;
	if (i1 == i2)
		GOTO(123,L12);
	i1 = iv4;
	i2 = 1;
	i1 = i1 + i2;
	i2 = iv6;
	if (i1 == i2)
		GOTO(132,L12);
	i1 = iv4;
	i2 = 1;
	i1 = i1 + i2;
	iv12 = i1;
	GOTO(141,L11);

L7:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	iv13 = i1;
	i1 = iv12;
	i2 = 32;
	i1 = i1 * i2;
	iv14 = i1;
	i1 = 0;
	iv15 = i1;
	GOTO(163,L10);

L8:	i1 = iv13;
	i2 = 1;
	i3 = iv15;
	i2 = i2 << (i3 & 31);
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(173,L9);
	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->map;
	i3 = iv14;
	i4 = iv15;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a2)->class->M.
		getObjectOf_i_VjxwF.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L9:	iv15 += 1;
L10:	i1 = iv15;
	i2 = 32;
	if (i1 < i2)
		GOBACK(202,L8);
	iv12 += 1;
L11:	i1 = iv12;
	i2 = iv6;
	if (i1 < i2)
		GOBACK(212,L7);
L12:	i1 = iv4;
	i2 = iv6;
	if (i1 == i2)
		GOTO(219,L16);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	iv12 = i1;
	i1 = iv6;
	i2 = 32;
	i1 = i1 * i2;
	iv13 = i1;
	i1 = iv7;
	i2 = 1;
	i1 = i1 + i2;
	iv14 = i1;
	i1 = 0;
	iv15 = i1;
	GOTO(247,L15);

L13:	i1 = iv12;
	i2 = 1;
	i3 = iv15;
	i2 = i2 << (i3 & 31);
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(257,L14);
	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->map;
	i3 = iv13;
	i4 = iv15;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a2)->class->M.
		getObjectOf_i_VjxwF.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L14:	iv15 += 1;
L15:	i1 = iv15;
	i2 = iv14;
	if (i1 < i2)
		GOBACK(286,L13);
L16:	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toList__nGUqn: ca.mcgill.sable.soot.jimple.ArrayPackedSet.toList()Lca/mcgill/sable/util/List; */

Class xt_toList__nGUqn[] = { 0 };

Object toList__nGUqn(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2, iv3, iv4, iv5;
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
	GOTO(10,L5);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	iv3 = i1;
	i1 = iv2;
	i2 = 32;
	i1 = i1 * i2;
	iv4 = i1;
	i1 = 0;
	iv5 = i1;
	GOTO(29,L4);

L2:	i1 = iv3;
	i2 = 1;
	i3 = iv5;
	i2 = i2 << (i3 & 31);
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(38,L3);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->map;
	i3 = iv4;
	i4 = iv5;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a2)->class->M.
		getObjectOf_i_VjxwF.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L3:	iv5 += 1;
L4:	i1 = iv5;
	i2 = 32;
	if (i1 < i2)
		GOBACK(67,L2);
	iv2 += 1;
L5:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(79,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_OF_Mpyu0: ca.mcgill.sable.soot.jimple.ArrayPackedSet.add(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_add_OF_Mpyu0[] = { 0 };

Void add_OF_Mpyu0(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (a1 == a2)
		GOTO(7,L1);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->class->M.
		copy_F_GNk5x.f(a1,a2);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->map;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->class->M.
		getIndexOf_O_gysIe.f(a1,a2);
	iv4 = i1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv4;
	i3 = 32;
	if (!i3) throwDivisionByZeroException();
	i2 = i2 / i3;
	i4 = i2;
	a3 = a1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	i4 = 1;
	i5 = iv4;
	i6 = 32;
	if (!i6) throwDivisionByZeroException();
	i5 = i5 % i6;
	i4 = i4 << (i5 & 31);
	i3 = i3 | i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M complement_F_33Ps5: ca.mcgill.sable.soot.jimple.ArrayPackedSet.complement(Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_complement_F_33Ps5[] = { 0 };

Void complement_F_33Ps5(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3, iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(7,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a3)->bits;
	i4 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	i4 = -1;
	i3 = i3 ^ i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(33,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = 1;
	if (i1 < i2)
		GOTO(42,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->map;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->class->M.
		getSize__cxGnA.f(a1);
	i2 = 32;
	if (!i2) throwDivisionByZeroException();
	i1 = i1 % i2;
	iv4 = i1;
	i1 = iv4;
	if (i1 == 0)
		GOTO(59,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	i4 = i2;
	a3 = a1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	i4 = -1;
	i5 = iv4;
	i4 = i4 << (i5 & 31);
	i5 = -1;
	i4 = i4 ^ i5;
	i3 = i3 & i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
L3:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove_OF_XqLKi: ca.mcgill.sable.soot.jimple.ArrayPackedSet.remove(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_remove_OF_XqLKi[] = { 0 };

Void remove_OF_XqLKi(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (a1 == a2)
		GOTO(7,L1);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->class->M.
		copy_F_GNk5x.f(a1,a2);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->map;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->class->M.
		getIndexOf_O_gysIe.f(a1,a2);
	iv4 = i1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv4;
	i3 = 32;
	if (!i3) throwDivisionByZeroException();
	i2 = i2 / i3;
	i4 = i2;
	a3 = a1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	i4 = 1;
	i5 = iv4;
	i6 = 32;
	if (!i6) throwDivisionByZeroException();
	i5 = i5 % i6;
	i4 = i4 << (i5 & 31);
	i5 = -1;
	i4 = i4 ^ i5;
	i3 = i3 & i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M union_FF_nvdta: ca.mcgill.sable.soot.jimple.ArrayPackedSet.union(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_union_FF_nvdta[] = { 0 };

Void union_FF_nvdta(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4, i5;
Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(15,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(28,L2);
L1:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L2:	i1 = 0;
	iv5 = i1;
	GOTO(44,L4);

L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv5;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a3)->bits;
	i4 = iv5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a4)->bits;
	i5 = iv5;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	i3 = i3 | i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv5 += 1;
L4:	i1 = iv5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(80,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M difference_FF_B78Wj: ca.mcgill.sable.soot.jimple.ArrayPackedSet.difference(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_difference_FF_B78Wj[] = { 0 };

Void difference_FF_B78Wj(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4, i5;
Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(15,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(28,L2);
L1:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L2:	i1 = 0;
	iv5 = i1;
	GOTO(44,L4);

L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv5;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a3)->bits;
	i4 = iv5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a4)->bits;
	i5 = iv5;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	i5 = -1;
	i4 = i4 ^ i5;
	i3 = i3 & i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv5 += 1;
L4:	i1 = iv5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(82,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M intersection_FF_l1qzS: ca.mcgill.sable.soot.jimple.ArrayPackedSet.intersection(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_intersection_FF_l1qzS[] = { 0 };

Void intersection_FF_l1qzS(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4, i5;
Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av3;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(15,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(28,L2);
L1:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L2:	i1 = 0;
	iv5 = i1;
	GOTO(44,L4);

L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv5;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a3)->bits;
	i4 = iv5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	a4 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a4)->bits;
	i5 = iv5;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	i3 = i3 & i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv5 += 1;
L4:	i1 = iv5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(80,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_O_nTnFt: ca.mcgill.sable.soot.jimple.ArrayPackedSet.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_nTnFt[] = { 0 };

Boolean contains_O_nTnFt(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->map;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_FlowUniverse*)a1)->class->M.
		getIndexOf_O_gysIe.f(a1,a2);
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv2;
	i3 = 32;
	if (!i3) throwDivisionByZeroException();
	i2 = i2 / i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	i2 = 1;
	i3 = iv2;
	i4 = 32;
	if (!i4) throwDivisionByZeroException();
	i3 = i3 % i4;
	i2 = i2 << (i3 & 31);
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(25,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_5Kg8s: ca.mcgill.sable.soot.jimple.ArrayPackedSet.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_5Kg8s[] = { 0 };

Boolean equals_O_5Kg8s(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(7,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct iarray*)a1)->data[i2];
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (i1 == i2)
		GOTO(22,L2);
	i1 = 0;
	return i1;

L2:	iv3 += 1;
L3:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(36,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__ovtyi: ca.mcgill.sable.soot.jimple.ArrayPackedSet.toString()Ljava/lang/String; */

Class xt_toString__ovtyi[] = { 0 };

Object toString__ovtyi(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[2];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->class->M.
		toList__nGUqn.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(26,L3);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
	GOTO(40,L2);

L1:	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[3];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
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
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(75,L1);
L3:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[4];
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

/*M copy_F_GNk5x: ca.mcgill.sable.soot.jimple.ArrayPackedSet.copy(Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_copy_F_GNk5x[] = { 0 };

Void copy_F_GNk5x(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArrayPackedSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(7,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a1)->bits;
	i2 = iv3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a3)->bits;
	i4 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct iarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	i3 = ((struct iarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArrayPackedSet*)a2)->bits;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(31,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','r','r','a','y','P','a','c',
'k','e','d','S','e','t','I','n','c','o','m','p','a','t','i','b','l','e',
' ','o','t','h','e','r',' ','s','e','t',' ','f','o','r',' ','u','n','i',
'o','n','{',',',' ','}'};

const void *st_ca_mcgill_sable_soot_jimple_ArrayPackedSet[] = {
    ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet+42,	/* 0. ca.mcgill.sable.soot.jimple.ArrayPackedS */
    ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet+74,	/* 1. Incompatible other set for union */
    ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet+75,	/* 2. { */
    ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet+77,	/* 3. ,  */
    ch_ca_mcgill_sable_soot_jimple_ArrayPackedSet+78,	/* 4. } */
    0};
