/*  ca_mcgill_sable_util_Set.c -- from Java class ca.mcgill.sable.util.Set  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Set.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_ClassCastException.h"
#include "java_lang_IllegalArgumentException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Set.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_ClassCastException.C,
    &cl_java_lang_IllegalArgumentException.C,
};

extern const Char ch_ca_mcgill_sable_util_Set[];
extern const void *st_ca_mcgill_sable_util_Set[];
extern Class xt_size__cT2YK[];
extern Class xt_isEmpty__1xS2z[];
extern Class xt_contains_O_B3Hqp[];
extern Class xt_iterator__od7Od[];
extern Class xt_toArray__Z7NkY[];
extern Class xt_toArray_aO_nPXX6[];
extern Class xt_add_O_pasOA[];
extern Class xt_remove_O_ELTfz[];
extern Class xt_containsAll_C_okzQv[];
extern Class xt_addAll_C_UBmRv[];
extern Class xt_retainAll_C_0MGgQ[];
extern Class xt_removeAll_C_hZjTq[];
extern Class xt_clear__r6OC8[];
extern Class xt_equals_O_NdsYs[];
extern Class xt_hashCode__iSBdg[];

#define HASHMASK 0x1ff
/*  4e.  174d304e  (4e)  clear  */
/*  64.  56145a64  (64)  add  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  c1.  b9a8f0c1  (c1)  iterator  */
/*  e0.  77e8a8e0  (e0)  toArray  */
/*  ff.  5c6e18ff  (ff)  containsAll  */
/*  122.  4ea93522  (122)  contains  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  161.  8942e761  (161)  hashCode  */
/*  1ae.  fa23fbae  (1ae)  isEmpty  */
/*  1b2.  7ced9fb2  (1b2)  toArray  */
/*  1b5.  9ddd4bb5  (1b5)  size  */
/*  1c5.  c8333dc5  (1c5)  remove  */
/*  1c9.  a215a9c9  (1c9)  addAll  */
/*  1cb.  99bb3dcb  (1cb)  retainAll  */
/*  1d2.  4c0d6fd2  (1d2)  clone  */
/*  1ee.  4cc675ee  (1ee)  removeAll  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390934606, &cl_ca_mcgill_sable_util_Set.M.clear__r6OC8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_Set.M.add_O_pasOA, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_util_Set.M.toString__4d9OF, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_Set.M.iterator__od7Od, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_Set.M.toArray_aO_nPXX6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_Set.M.containsAll_C_okzQv, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_Set.M.contains_O_B3Hqp, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Set.M.equals_O_NdsYs, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_Set.M.hashCode__iSBdg, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_Set.M.isEmpty__1xS2z, 0, 0, 0, 0,
    0, 0, 2095947698, &cl_ca_mcgill_sable_util_Set.M.toArray__Z7NkY, 0, 0,
    0, 0, -1646441547, &cl_ca_mcgill_sable_util_Set.M.size__cT2YK, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -936165947, &cl_ca_mcgill_sable_util_Set.M.remove_O_ELTfz,
    0, 0, 0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_Set.M.addAll_C_UBmRv, 0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_Set.M.retainAll_C_0MGgQ, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Set.M.clone__dslwm, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1288074734, &cl_ca_mcgill_sable_util_Set.M.removeAll_C_hZjTq,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(24) nmchars = {&acl_char, 0, 24, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','e','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 24 };
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
's','i','z','e'};
static const Char sgim_12[] = {
'(',')','I'};
static const Char nmim_13[] = {
'i','s','E','m','p','t','y'};
static const Char sgim_13[] = {
'(',')','Z'};
static const Char nmim_14[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_15[] = {
'i','t','e','r','a','t','o','r'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','t','e','r','a','t','o','r',';'};
static const Char nmim_16[] = {
't','o','A','r','r','a','y'};
static const Char sgim_16[] = {
'(',')','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_17[] = {
't','o','A','r','r','a','y'};
static const Char sgim_17[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','V'};
static const Char nmim_18[] = {
'a','d','d'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_19[] = {
'r','e','m','o','v','e'};
static const Char sgim_19[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_20[] = {
'c','o','n','t','a','i','n','s','A','l','l'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_21[] = {
'a','d','d','A','l','l'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_22[] = {
'r','e','t','a','i','n','A','l','l'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_23[] = {
'r','e','m','o','v','e','A','l','l'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_24[] = {
'c','l','e','a','r'};
static const Char sgim_24[] = {
'(',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
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
} inr_ca_mcgill_sable_util_Set = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Set.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Set cl_ca_mcgill_sable_util_Set = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Set),
    25,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_util_Set,
    st_ca_mcgill_sable_util_Set,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Set,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_abstract, 0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x8401,13,xt_equals_O_NdsYs},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_abstract, 0,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x8401,14,xt_hashCode__iSBdg},
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x8401,0,xt_size__cT2YK},
	{TMIT_abstract, 0,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8401,1,xt_isEmpty__1xS2z},
	{TMIT_abstract, 0,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,21,1,0x8401,2,xt_contains_O_B3Hqp},
	{TMIT_abstract, 0,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,33,1,0x8401,3,xt_iterator__od7Od},
	{TMIT_abstract, 0,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,21,1,0x8401,4,xt_toArray__Z7NkY},
	{TMIT_abstract, 0,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,22,1,0x8401,5,xt_toArray_aO_nPXX6},
	{TMIT_abstract, 0,(const Char *)&nmim_18,3,
	(const Char *)&sgim_18,21,1,0x8401,6,xt_add_O_pasOA},
	{TMIT_abstract, 0,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,21,1,0x8401,7,xt_remove_O_ELTfz},
	{TMIT_abstract, 0,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,36,1,0x8401,8,xt_containsAll_C_okzQv},
	{TMIT_abstract, 0,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,36,1,0x8401,9,xt_addAll_C_UBmRv},
	{TMIT_abstract, 0,(const Char *)&nmim_22,9,
	(const Char *)&sgim_22,36,1,0x8401,10,xt_retainAll_C_0MGgQ},
	{TMIT_abstract, 0,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,36,1,0x8401,11,xt_removeAll_C_hZjTq},
	{TMIT_abstract, 0,(const Char *)&nmim_24,5,
	(const Char *)&sgim_24,3,1,0x8401,12,xt_clear__r6OC8},
    } /* end of methodsigs */
};


/*M size__cT2YK: ca.mcgill.sable.util.Set.size()I */

Class xt_size__cT2YK[] = { 0 };

/*M isEmpty__1xS2z: ca.mcgill.sable.util.Set.isEmpty()Z */

Class xt_isEmpty__1xS2z[] = { 0 };

/*M contains_O_B3Hqp: ca.mcgill.sable.util.Set.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_B3Hqp[] = { 0 };

/*M iterator__od7Od: ca.mcgill.sable.util.Set.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__od7Od[] = { 0 };

/*M toArray__Z7NkY: ca.mcgill.sable.util.Set.toArray()[Ljava/lang/Object; */

Class xt_toArray__Z7NkY[] = { 0 };

/*M toArray_aO_nPXX6: ca.mcgill.sable.util.Set.toArray([Ljava/lang/Object;)V */

Class xt_toArray_aO_nPXX6[] = { 0 };

/*M add_O_pasOA: ca.mcgill.sable.util.Set.add(Ljava/lang/Object;)Z */

Class xt_add_O_pasOA[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

/*M remove_O_ELTfz: ca.mcgill.sable.util.Set.remove(Ljava/lang/Object;)Z */

Class xt_remove_O_ELTfz[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M containsAll_C_okzQv: ca.mcgill.sable.util.Set.containsAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_containsAll_C_okzQv[] = { 0 };

/*M addAll_C_UBmRv: ca.mcgill.sable.util.Set.addAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_C_UBmRv[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

/*M retainAll_C_0MGgQ: ca.mcgill.sable.util.Set.retainAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_retainAll_C_0MGgQ[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M removeAll_C_hZjTq: ca.mcgill.sable.util.Set.removeAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_removeAll_C_hZjTq[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M clear__r6OC8: ca.mcgill.sable.util.Set.clear()V */

Class xt_clear__r6OC8[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M equals_O_NdsYs: ca.mcgill.sable.util.Set.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_NdsYs[] = { 0 };

/*M hashCode__iSBdg: ca.mcgill.sable.util.Set.hashCode()I */

Class xt_hashCode__iSBdg[] = { 0 };



const Char ch_ca_mcgill_sable_util_Set[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','e','t'};

const void *st_ca_mcgill_sable_util_Set[] = {
    ch_ca_mcgill_sable_util_Set+24,	/* 0. ca.mcgill.sable.util.Set */
    0};
