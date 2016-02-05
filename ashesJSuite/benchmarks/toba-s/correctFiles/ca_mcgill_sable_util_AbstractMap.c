/*  ca_mcgill_sable_util_AbstractMap.c -- from Java class ca.mcgill.sable.util.AbstractMap  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_AbstractMap.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_AbstractMap$AbstractEntry.h"
#include "ca_mcgill_sable_util_AbstractMap$KeyIterator.h"
#include "ca_mcgill_sable_util_AbstractMap$KeySet.h"
#include "ca_mcgill_sable_util_AbstractMap$ValueCollection.h"
#include "ca_mcgill_sable_util_AbstractMap$ValueIterator.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_AbstractMap.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Map.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Abst_FQuSs.C,
    &cl_ca_mcgill_sable_util_Abst_mqF0a.C,
    &cl_ca_mcgill_sable_util_Abst_QyiRw.C,
    &cl_ca_mcgill_sable_util_Abst_KrD52.C,
    &cl_ca_mcgill_sable_util_Abst_Qbx2w.C,
    &cl_ca_mcgill_sable_util_Collection.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_util_AbstractMap[];
extern const void *st_ca_mcgill_sable_util_AbstractMap[];
extern Class xt_size__M7Wwn[];
extern Class xt_isEmpty__Bhwpd[];
extern Class xt_containsValue_O_8UA3p[];
extern Class xt_containsKey_O_qXkiv[];
extern Class xt_get_O_uwtdB[];
extern Class xt_put_OO_vSkOj[];
extern Class xt_remove_O_wUeTD[];
extern Class xt_putAll_M_MgEzL[];
extern Class xt_clear__7orZA[];
extern Class xt_keySet__Po2Uz[];
extern Class xt_values__uyQtQ[];
extern Class xt_equals_O_XQysy[];
extern Class xt_hashCode__8LddD[];
extern Class xt_toString__UUuX4[];
extern Class xt_init__e4yNt[];
extern Class xt_entries__qDQ0P[];

#define HASHMASK 0x1ff
/*  2.  1cb2802  (2)  put  */
/*  31.  5a59b431  (31)  get  */
/*  4d.  23d2224d  (4d)  values  */
/*  4e.  174d304e  (4e)  clear  */
/*  6f.  45f4c06f  (6f)  entries  */
/*  72.  6efff472  (72)  keySet  */
/*  7b.  fb5e187b  (7b)  containsValue  */
/*  bb.  f513a2bb  (bb)  putAll  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  161.  8942e761  (161)  hashCode  */
/*  19f.  d557959f  (19f)  remove  */
/*  1ae.  fa23fbae  (1ae)  isEmpty  */
/*  1b5.  9ddd4bb5  (1b5)  size  */
/*  1bf.  9e3bdbf  (1bf)  containsKey  */
/*  1d2.  4c0d6fd2  (1d2)  clone  */
static const struct ihash htable[512] = {
    0, 0, 0, 0,
    30091266, &cl_ca_mcgill_sable_util_AbstractMap.M.put_OO_vSkOj, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1515828273, &cl_ca_mcgill_sable_util_AbstractMap.M.get_O_uwtdB, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    600973901, &cl_ca_mcgill_sable_util_AbstractMap.M.values__uyQtQ,
    390934606, &cl_ca_mcgill_sable_util_AbstractMap.M.clear__7orZA, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1173667951, &cl_ca_mcgill_sable_util_AbstractMap.M.entries__qDQ0P,
    0, 0, 0, 0,
    1862268018, &cl_ca_mcgill_sable_util_AbstractMap.M.keySet__Po2Uz, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -77719429, &cl_ca_mcgill_sable_util_AbstractMap.M.containsValue_O_8UA3p,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -183262533, &cl_ca_mcgill_sable_util_AbstractMap.M.putAll_M_MgEzL,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_AbstractMap.M.equals_O_XQysy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_AbstractMap.M.hashCode__8LddD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -715680353, &cl_ca_mcgill_sable_util_AbstractMap.M.remove_O_wUeTD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_AbstractMap.M.isEmpty__Bhwpd, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_util_AbstractMap.M.size__M7Wwn, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165920191, &cl_ca_mcgill_sable_util_AbstractMap.M.containsKey_O_qXkiv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_AbstractMap.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(32) nmchars = {&acl_char, 0, 32, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','M','a','p'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 32 };
static const Char nmiv_0[] = {
'v','a','l','u','e','s'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','o','l','l','e','c','t','i','o','n',';'};
static const Char nmiv_1[] = {
'k','e','y','s'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','e','t',';'};
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
'c','o','n','t','a','i','n','s','V','a','l','u','e'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_15[] = {
'c','o','n','t','a','i','n','s','K','e','y'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_16[] = {
'g','e','t'};
static const Char sgim_16[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_17[] = {
'p','u','t'};
static const Char sgim_17[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_18[] = {
'r','e','m','o','v','e'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_19[] = {
'p','u','t','A','l','l'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';',')','V'};
static const Char nmim_20[] = {
'c','l','e','a','r'};
static const Char sgim_20[] = {
'(',')','V'};
static const Char nmim_21[] = {
'k','e','y','S','e','t'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','S','e','t',';'};
static const Char nmim_22[] = {
'v','a','l','u','e','s'};
static const Char sgim_22[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';'};
static const Char nmim_23[] = {
'e','n','t','r','i','e','s'};
static const Char sgim_23[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_AbstractMap, values), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,1,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_AbstractMap, keys), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,26,1,0x2,1}, 
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
} inr_ca_mcgill_sable_util_AbstractMap = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_AbstractMap.C.classclass, 0};

struct cl_ca_mcgill_sable_util_AbstractMap cl_ca_mcgill_sable_util_AbstractMap = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_AbstractMap),
    24,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    10, others,
    0, 0,
    ch_ca_mcgill_sable_util_AbstractMap,
    st_ca_mcgill_sable_util_AbstractMap,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_AbstractMap,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__e4yNt,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,14,xt_init__e4yNt},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_XQysy,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x8001,11,xt_equals_O_XQysy},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8LddD,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x8001,12,xt_hashCode__8LddD},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__UUuX4,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,13,xt_toString__UUuX4},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, size__M7Wwn,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x8001,0,xt_size__M7Wwn},
	{TMIT_native_code, isEmpty__Bhwpd,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8001,1,xt_isEmpty__Bhwpd},
	{TMIT_native_code, containsValue_O_8UA3p,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,21,1,0x8001,2,xt_containsValue_O_8UA3p},
	{TMIT_native_code, containsKey_O_qXkiv,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,21,1,0x8001,3,xt_containsKey_O_qXkiv},
	{TMIT_native_code, get_O_uwtdB,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,38,1,0x8001,4,xt_get_O_uwtdB},
	{TMIT_native_code, put_OO_vSkOj,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,56,1,0x8001,5,xt_put_OO_vSkOj},
	{TMIT_native_code, remove_O_wUeTD,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,38,1,0x8001,6,xt_remove_O_wUeTD},
	{TMIT_native_code, putAll_M_MgEzL,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,29,1,0x8001,7,xt_putAll_M_MgEzL},
	{TMIT_native_code, clear__7orZA,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,3,1,0x8001,8,xt_clear__7orZA},
	{TMIT_native_code, keySet__Po2Uz,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,28,1,0x8001,9,xt_keySet__Po2Uz},
	{TMIT_native_code, values__uyQtQ,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,35,1,0x8001,10,xt_values__uyQtQ},
	{TMIT_abstract, 0,(const Char *)&nmim_23,7,
	(const Char *)&sgim_23,35,1,0x8401,15,xt_entries__qDQ0P},
    } /* end of methodsigs */
};


/*M size__M7Wwn: ca.mcgill.sable.util.AbstractMap.size()I */

Class xt_size__M7Wwn[] = { 0 };

Int size__M7Wwn(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEmpty__Bhwpd: ca.mcgill.sable.util.AbstractMap.isEmpty()Z */

Class xt_isEmpty__Bhwpd[] = { 0 };

Boolean isEmpty__Bhwpd(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		size__M7Wwn.f(a1);
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

/*M containsValue_O_8UA3p: ca.mcgill.sable.util.AbstractMap.containsValue(Ljava/lang/Object;)Z */

Class xt_containsValue_O_8UA3p[] = { 0 };

Boolean containsValue_O_8UA3p(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(10,L5);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,187019670)->f)(a1);
	av3 = a1;
	a1 = av1;
	if (a1 != 0)
		GOTO(29,L2);
	a1 = av3;
	if (a1 == 0)
		GOTO(33,L4);
	i1 = 0;
	GOTO(37,L3);

L2:	a1 = av1;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L3:	if (i1 == 0)
		GOTO(45,L5);
L4:	i1 = 1;
	return i1;

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(56,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M containsKey_O_qXkiv: ca.mcgill.sable.util.AbstractMap.containsKey(Ljava/lang/Object;)Z */

Class xt_containsKey_O_qXkiv[] = { 0 };

Boolean containsKey_O_qXkiv(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(10,L5);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	av3 = a1;
	a1 = av1;
	if (a1 != 0)
		GOTO(29,L2);
	a1 = av3;
	if (a1 == 0)
		GOTO(33,L4);
	i1 = 0;
	GOTO(37,L3);

L2:	a1 = av1;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L3:	if (i1 == 0)
		GOTO(45,L5);
L4:	i1 = 1;
	return i1;

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(56,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_O_uwtdB: ca.mcgill.sable.util.AbstractMap.get(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_get_O_uwtdB[] = { 0 };

Object get_O_uwtdB(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(10,L5);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av1;
	if (a1 != 0)
		GOTO(24,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if (a1 == 0)
		GOTO(33,L4);
	i1 = 0;
	GOTO(37,L3);

L2:	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1867935226)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L3:	if (i1 == 0)
		GOTO(50,L5);
L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,187019670)->f)(a1);
	return a1;

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(66,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M put_OO_vSkOj: ca.mcgill.sable.util.AbstractMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_put_OO_vSkOj[] = { 0 };

Object put_OO_vSkOj(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

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

/*M remove_O_wUeTD: ca.mcgill.sable.util.AbstractMap.remove(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_remove_O_wUeTD[] = { 0 };

Object remove_O_wUeTD(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(10,L5);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av1;
	if (a1 != 0)
		GOTO(24,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	if (a1 == 0)
		GOTO(33,L4);
	i1 = 0;
	GOTO(37,L3);

L2:	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1867935226)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L3:	if (i1 == 0)
		GOTO(50,L5);
L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,187019670)->f)(a1);
	av4 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1682658167)->f)(a1);
	a1 = av4;
	return a1;

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(76,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M putAll_M_MgEzL: ca.mcgill.sable.util.AbstractMap.putAll(Lca/mcgill/sable/util/Map;)V */

Class xt_putAll_M_MgEzL[] = { 0 };

Void putAll_M_MgEzL(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1173667951)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(12,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1867935226)->f)(a2);
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,187019670)->f)(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		put_OO_vSkOj.f(a1,a2,a3);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(48,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__7orZA: ca.mcgill.sable.util.AbstractMap.clear()V */

Class xt_clear__7orZA[] = { 0 };

Void clear__7orZA(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,390934606)->f)(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M keySet__Po2Uz: ca.mcgill.sable.util.AbstractMap.keySet()Lca/mcgill/sable/util/Set; */

Class xt_keySet__Po2Uz[] = { 0 };

Object keySet__Po2Uz(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->keys;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_Abst_QyiRw.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_A_9CGg1(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->keys = a2;
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->keys;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M values__uyQtQ: ca.mcgill.sable.util.AbstractMap.values()Lca/mcgill/sable/util/Collection; */

Class xt_values__uyQtQ[] = { 0 };

Object values__uyQtQ(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->values;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_Abst_KrD52.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_A_XoTqE(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->values = a2;
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->values;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_XQysy: ca.mcgill.sable.util.AbstractMap.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_XQysy[] = { 0 };

Boolean equals_O_XQysy(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5, av6;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (a1 != a2)
		GOTO(2,L1);
	i1 = 1;
	return i1;

L1:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Map.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(11,L2);
	i1 = 0;
	return i1;

L2:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Map.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a2)->class->M.
		size__M7Wwn.f(a2);
	if (i1 == i2)
		GOTO(31,L3);
	i1 = 0;
	return i1;

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(46,L8);

L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	av5 = a1;
	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 != 0)
		GOTO(77,L5);
	i1 = 0;
	return i1;

L5:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,187019670)->f)(a1);
	av6 = a1;
	a1 = av6;
	if (a1 != 0)
		GOTO(93,L6);
	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if (a1 == 0)
		GOTO(104,L8);
	i1 = 0;
	GOTO(108,L7);

L6:	a1 = av6;
	a2 = av2;
	a3 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1515828273)->f)(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L7:	if (i1 != 0)
		GOTO(124,L8);
	i1 = 0;
	return i1;

L8:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(135,L4);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__8LddD: ca.mcgill.sable.util.AbstractMap.hashCode()I */

Class xt_hashCode__8LddD[] = { 0 };

Int hashCode__8LddD(Object p0)
{
Object a0, a1, a2;
Object av0, av2;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(12,L2);

L1:	i1 = iv1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_Object*)a2)->class->M.
		hashCode__8wJNW.f(a2);
	i1 = i1 + i2;
	iv1 = i1;
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(33,L1);
	i1 = iv1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__UUuX4: ca.mcgill.sable.util.AbstractMap.toString()Ljava/lang/String; */

Class xt_toString__UUuX4[] = { 0 };

Object toString__UUuX4(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av3, av4;
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
	a2 = (Object)st_ca_mcgill_sable_util_AbstractMap[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractMap*)a1)->class->M.
		entries__qDQ0P.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(27,L4);

L1:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	i1 = iv2;
	if (i1 != 0)
		GOTO(42,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractMap[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(52,L3);

L2:	i1 = 0;
	iv2 = i1;
L3:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractMap[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1867935226)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractMap[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,187019670)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractMap[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(108,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_util_AbstractMap[5];
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

/*M init__e4yNt: ca.mcgill.sable.util.AbstractMap.<init>()V */

Class xt_init__e4yNt[] = { 0 };

Void init__e4yNt(Object p0)
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

/*M entries__qDQ0P: ca.mcgill.sable.util.AbstractMap.entries()Lca/mcgill/sable/util/Collection; */

Class xt_entries__qDQ0P[] = { 0 };



const Char ch_ca_mcgill_sable_util_AbstractMap[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','M','a','p','{',',','(',')',
'}'};

const void *st_ca_mcgill_sable_util_AbstractMap[] = {
    ch_ca_mcgill_sable_util_AbstractMap+32,	/* 0. ca.mcgill.sable.util.AbstractMap */
    ch_ca_mcgill_sable_util_AbstractMap+33,	/* 1. { */
    ch_ca_mcgill_sable_util_AbstractMap+34,	/* 2. , */
    ch_ca_mcgill_sable_util_AbstractMap+35,	/* 3. ( */
    ch_ca_mcgill_sable_util_AbstractMap+36,	/* 4. ) */
    ch_ca_mcgill_sable_util_AbstractMap+37,	/* 5. } */
    0};
