/*  ca_mcgill_sable_util_AbstractCollection.c -- from Java class ca.mcgill.sable.util.AbstractCollection  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_util_AbstractCollection[];
extern const void *st_ca_mcgill_sable_util_AbstractCollection[];
extern Class xt_isEmpty__pVAEs[];
extern Class xt_contains_O_302Uk[];
extern Class xt_toArray__DAHJZ[];
extern Class xt_toArray_aO_bJpag[];
extern Class xt_add_O_hKkaR[];
extern Class xt_remove_O_kFhHf[];
extern Class xt_containsAll_C_6vFga[];
extern Class xt_addAll_C_MDtDx[];
extern Class xt_removeAll_C_hhL65[];
extern Class xt_retainAll_C_048uu[];
extern Class xt_clear__zWYtB[];
extern Class xt_toString__gotEn[];
extern Class xt_init__a6x0C[];
extern Class xt_size__gPvmD[];
extern Class xt_iterator__u8L0T[];

#define HASHMASK 0x1ff
/*  4e.  174d304e  (4e)  clear  */
/*  64.  56145a64  (64)  add  */
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
    390934606, &cl_ca_mcgill_sable_util_AbstractCollection.M.clear__zWYtB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_AbstractCollection.M.add_O_hKkaR,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_AbstractCollection.M.iterator__u8L0T,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_AbstractCollection.M.toArray_aO_bJpag,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_AbstractCollection.M.containsAll_C_6vFga,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_AbstractCollection.M.contains_O_302Uk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_AbstractCollection.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_AbstractCollection.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_AbstractCollection.M.isEmpty__pVAEs,
    0, 0, 0, 0, 0, 0,
    2095947698, &cl_ca_mcgill_sable_util_AbstractCollection.M.toArray__DAHJZ,
    0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_util_AbstractCollection.M.size__gPvmD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -936165947, &cl_ca_mcgill_sable_util_AbstractCollection.M.remove_O_kFhHf,
    0, 0, 0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_AbstractCollection.M.addAll_C_MDtDx,
    0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_AbstractCollection.M.retainAll_C_048uu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_AbstractCollection.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    1288074734, &cl_ca_mcgill_sable_util_AbstractCollection.M.removeAll_C_hhL65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(39) nmchars = {&acl_char, 0, 39, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','C','o','l','l','e','c','t',
'i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 39 };
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
'i','s','E','m','p','t','y'};
static const Char sgim_12[] = {
'(',')','Z'};
static const Char nmim_13[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_13[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_14[] = {
't','o','A','r','r','a','y'};
static const Char sgim_14[] = {
'(',')','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_15[] = {
't','o','A','r','r','a','y'};
static const Char sgim_15[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','V'};
static const Char nmim_16[] = {
'a','d','d'};
static const Char sgim_16[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_17[] = {
'r','e','m','o','v','e'};
static const Char sgim_17[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_18[] = {
'c','o','n','t','a','i','n','s','A','l','l'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_19[] = {
'a','d','d','A','l','l'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_20[] = {
'r','e','m','o','v','e','A','l','l'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_21[] = {
'r','e','t','a','i','n','A','l','l'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_22[] = {
'c','l','e','a','r'};
static const Char sgim_22[] = {
'(',')','V'};
static const Char nmim_23[] = {
's','i','z','e'};
static const Char sgim_23[] = {
'(',')','I'};
static const Char nmim_24[] = {
'i','t','e','r','a','t','o','r'};
static const Char sgim_24[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','t','e','r','a','t','o','r',';'};

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
} inr_ca_mcgill_sable_util_AbstractCollection = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_AbstractCollection.C.classclass, 0};

struct cl_ca_mcgill_sable_util_AbstractCollection cl_ca_mcgill_sable_util_AbstractCollection = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_AbstractCollection),
    25,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_util_AbstractCollection,
    st_ca_mcgill_sable_util_AbstractCollection,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_AbstractCollection,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__a6x0C,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,12,xt_init__a6x0C},
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
	{TMIT_native_code, toString__gotEn,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,11,xt_toString__gotEn},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, isEmpty__pVAEs,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,3,1,0x8001,0,xt_isEmpty__pVAEs},
	{TMIT_native_code, contains_O_302Uk,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,21,1,0x8001,1,xt_contains_O_302Uk},
	{TMIT_native_code, toArray__DAHJZ,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,21,1,0x8001,2,xt_toArray__DAHJZ},
	{TMIT_native_code, toArray_aO_bJpag,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,22,1,0x8001,3,xt_toArray_aO_bJpag},
	{TMIT_native_code, add_O_hKkaR,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,21,1,0x8001,4,xt_add_O_hKkaR},
	{TMIT_native_code, remove_O_kFhHf,(const Char *)&nmim_17,6,
	(const Char *)&sgim_17,21,1,0x8001,5,xt_remove_O_kFhHf},
	{TMIT_native_code, containsAll_C_6vFga,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,36,1,0x8001,6,xt_containsAll_C_6vFga},
	{TMIT_native_code, addAll_C_MDtDx,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,36,1,0x8001,7,xt_addAll_C_MDtDx},
	{TMIT_native_code, removeAll_C_hhL65,(const Char *)&nmim_20,9,
	(const Char *)&sgim_20,36,1,0x8001,8,xt_removeAll_C_hhL65},
	{TMIT_native_code, retainAll_C_048uu,(const Char *)&nmim_21,9,
	(const Char *)&sgim_21,36,1,0x8001,9,xt_retainAll_C_048uu},
	{TMIT_native_code, clear__zWYtB,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,3,1,0x8001,10,xt_clear__zWYtB},
	{TMIT_abstract, 0,(const Char *)&nmim_23,4,
	(const Char *)&sgim_23,3,1,0x8401,13,xt_size__gPvmD},
	{TMIT_abstract, 0,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,33,1,0x8401,14,xt_iterator__u8L0T},
    } /* end of methodsigs */
};


/*M isEmpty__pVAEs: ca.mcgill.sable.util.AbstractCollection.isEmpty()Z */

Class xt_isEmpty__pVAEs[] = { 0 };

Boolean isEmpty__pVAEs(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		size__gPvmD.f(a1);
	if (i1 == 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_O_302Uk: ca.mcgill.sable.util.AbstractCollection.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_302Uk[] = { 0 };

Boolean contains_O_302Uk(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av2 = a1;
	GOTO(5,L5);

L1:	a1 = av1;
	if (a1 != 0)
		GOTO(9,L2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if (a1 == 0)
		GOTO(18,L4);
	i1 = 0;
	GOTO(22,L3);

L2:	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L3:	if (i1 == 0)
		GOTO(35,L5);
L4:	i1 = 1;
	return i1;

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(46,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toArray__DAHJZ: ca.mcgill.sable.util.AbstractCollection.toArray()[Ljava/lang/Object; */

Class xt_toArray__DAHJZ[] = { 0 };

Object toArray__DAHJZ(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av3;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		size__gPvmD.f(a1);
	a1 = anewarray(&cl_java_lang_Object.C,i1);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av3 = a1;
	GOTO(15,L2);

L1:	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(36,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toArray_aO_bJpag: ca.mcgill.sable.util.AbstractCollection.toArray([Ljava/lang/Object;)V */

Class xt_toArray_aO_bJpag[] = { 0 };

Void toArray_aO_bJpag(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av3;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av3 = a1;
	GOTO(7,L2);

L1:	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(28,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_O_hKkaR: ca.mcgill.sable.util.AbstractCollection.add(Ljava/lang/Object;)Z */

Class xt_add_O_hKkaR[] = { 0 };

Boolean add_O_hKkaR(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_UnsupportedOperationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__h4Pxw(a2);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove_O_kFhHf: ca.mcgill.sable.util.AbstractCollection.remove(Ljava/lang/Object;)Z */

Class xt_remove_O_kFhHf[] = { 0 };

Boolean remove_O_kFhHf(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av2 = a1;
	GOTO(5,L5);

L1:	a1 = av1;
	if (a1 != 0)
		GOTO(9,L2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if (a1 == 0)
		GOTO(18,L4);
	i1 = 0;
	GOTO(22,L3);

L2:	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L3:	if (i1 == 0)
		GOTO(35,L5);
L4:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
	i1 = 1;
	return i1;

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(52,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M containsAll_C_6vFga: ca.mcgill.sable.util.AbstractCollection.containsAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_containsAll_C_6vFga[] = { 0 };

Boolean containsAll_C_6vFga(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(7,L2);

L1:	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		contains_O_302Uk.f(a1,a2);
	if (i1 != 0)
		GOTO(20,L2);
	i1 = 0;
	return i1;

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(31,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addAll_C_MDtDx: ca.mcgill.sable.util.AbstractCollection.addAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_C_MDtDx[] = { 0 };

Boolean addAll_C_MDtDx(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av3;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(9,L2);

L1:	i1 = iv2;
	a2 = av0;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a2)->class->M.
		add_O_hKkaR.f(a2,a3);
	i1 = i1 | i2;
	iv2 = i1;
L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(31,L1);
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeAll_C_hhL65: ca.mcgill.sable.util.AbstractCollection.removeAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_removeAll_C_hhL65[] = { 0 };

Boolean removeAll_C_hhL65(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av3, av4;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av3 = a1;
	GOTO(7,L2);

L1:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	av4 = a1;
	a1 = av1;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 == 0)
		GOTO(26,L2);
	i1 = 1;
	iv2 = i1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(43,L1);
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M retainAll_C_048uu: ca.mcgill.sable.util.AbstractCollection.retainAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_retainAll_C_048uu[] = { 0 };

Boolean retainAll_C_048uu(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av3, av4;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av3 = a1;
	GOTO(7,L2);

L1:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	av4 = a1;
	a1 = av1;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 != 0)
		GOTO(26,L2);
	i1 = 1;
	iv2 = i1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(43,L1);
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__zWYtB: ca.mcgill.sable.util.AbstractCollection.clear()V */

Class xt_clear__zWYtB[] = { 0 };

Void clear__zWYtB(Object p0)
{
Object a0, a1;
Object av0, av1;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av1 = a1;
	GOTO(5,L2);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(27,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__gotEn: ca.mcgill.sable.util.AbstractCollection.toString()Ljava/lang/String; */

Class xt_toString__gotEn[] = { 0 };

Object toString__gotEn(Object p0)
{
Object a0, a1, a2;
Object av0, av1, av3;
Int i0, i1, i2;
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
	i1 = 1;
	iv2 = i1;
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractCollection[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		iterator__u8L0T.f(a1);
	av3 = a1;
	GOTO(22,L4);

L1:	i1 = iv2;
	if (i1 != 0)
		GOTO(26,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractCollection[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(36,L3);

L2:	i1 = 0;
	iv2 = i1;
L3:	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(58,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractCollection[3];
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

/*M init__a6x0C: ca.mcgill.sable.util.AbstractCollection.<init>()V */

Class xt_init__a6x0C[] = { 0 };

Void init__a6x0C(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__gPvmD: ca.mcgill.sable.util.AbstractCollection.size()I */

Class xt_size__gPvmD[] = { 0 };

/*M iterator__u8L0T: ca.mcgill.sable.util.AbstractCollection.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__u8L0T[] = { 0 };



const Char ch_ca_mcgill_sable_util_AbstractCollection[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','C','o','l','l','e','c','t',
'i','o','n','{',',','}'};

const void *st_ca_mcgill_sable_util_AbstractCollection[] = {
    ch_ca_mcgill_sable_util_AbstractCollection+39,	/* 0. ca.mcgill.sable.util.AbstractCollection */
    ch_ca_mcgill_sable_util_AbstractCollection+40,	/* 1. { */
    ch_ca_mcgill_sable_util_AbstractCollection+41,	/* 2. , */
    ch_ca_mcgill_sable_util_AbstractCollection+42,	/* 3. } */
    0};
