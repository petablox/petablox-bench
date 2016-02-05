/*  ca_mcgill_sable_util_HashMap.c -- from Java class ca.mcgill.sable.util.HashMap  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_AbstractMap.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_HashMap$HashEntry.h"
#include "ca_mcgill_sable_util_HashSet.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Set.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_util_Enumeration.h"
#include "java_util_Hashtable.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_AbstractMap.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Map.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Hash_rJAjz.C,
    &cl_ca_mcgill_sable_util_HashSet.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Set.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_util_Enumeration.C,
    &cl_java_util_Hashtable.C,
};

extern const Char ch_ca_mcgill_sable_util_HashMap[];
extern const void *st_ca_mcgill_sable_util_HashMap[];
extern Class xt_init__4dSXs[];
extern Class xt_clear__P2Qi0[];
extern Class xt_init_i_NDPpI[];
extern Class xt_init_if_LzPr3[];
extern Class xt_put_OO_TYElP[];
extern Class xt_get_O_qmciZ[];
extern Class xt_isEmpty__5r0ym[];
extern Class xt_size__WiOoZ[];
extern Class xt_keySet__t9tgA[];
extern Class xt_contains_O_rM4RF[];
extern Class xt_containsKey_O_yzp32[];
extern Class xt_remove_O_GZXrM[];
extern Class xt_entries__U0AZU[];

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
    0, 0, 0, 0, 30091266, &cl_ca_mcgill_sable_util_HashMap.M.put_OO_TYElP,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1515828273, &cl_ca_mcgill_sable_util_HashMap.M.get_O_qmciZ, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 600973901, &cl_ca_mcgill_sable_util_HashMap.M.values__uyQtQ,
    390934606, &cl_ca_mcgill_sable_util_HashMap.M.clear__P2Qi0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1173667951, &cl_ca_mcgill_sable_util_HashMap.M.entries__U0AZU, 0, 0,
    0, 0, 1862268018, &cl_ca_mcgill_sable_util_HashMap.M.keySet__t9tgA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -77719429, &cl_ca_mcgill_sable_util_HashMap.M.containsValue_O_8UA3p,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -183262533, &cl_ca_mcgill_sable_util_HashMap.M.putAll_M_MgEzL, 0, 0,
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
    0, 0, -1028981426, &cl_ca_mcgill_sable_util_HashMap.M.equals_O_XQysy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_HashMap.M.hashCode__8LddD, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -715680353, &cl_ca_mcgill_sable_util_HashMap.M.remove_O_GZXrM, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -98305106, &cl_ca_mcgill_sable_util_HashMap.M.isEmpty__5r0ym,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_util_HashMap.M.size__WiOoZ, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165920191, &cl_ca_mcgill_sable_util_HashMap.M.containsKey_O_yzp32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_HashMap.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(28) nmchars = {&acl_char, 0, 28, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','H','a','s','h','M','a','p'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 28 };
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
static const Char nmiv_2[] = {
't','a','b','l','e'};
static const Char sgiv_2[] = {
'L','j','a','v','a','/','u','t','i','l','/','H','a','s','h','t','a','b',
'l','e',';'};
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
static const Char nmim_24[] = {
'<','i','n','i','t','>'};
static const Char sgim_24[] = {
'(','I',')','V'};
static const Char nmim_25[] = {
'<','i','n','i','t','>'};
static const Char sgim_25[] = {
'(','I','F',')','V'};
static const Char nmim_26[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_26[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_HashMap, values), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,0,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_HashMap, keys), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,26,0,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_HashMap, table), 0,(const Char *)&nmiv_2,5,(const Char *)&sgiv_2,21,1,0x0,0}, 
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
} inr_ca_mcgill_sable_util_HashMap = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_HashMap.C.classclass, 0};

struct cl_ca_mcgill_sable_util_HashMap cl_ca_mcgill_sable_util_HashMap = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_HashMap),
    27,
    0,
    3,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_util_HashMap,
    st_ca_mcgill_sable_util_HashMap,
    0,
    init__4dSXs,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_HashMap,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__4dSXs,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__4dSXs},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_XQysy,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,11,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8LddD,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x8001,12,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__UUuX4,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x1,13,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, size__WiOoZ,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x8001,7,xt_size__WiOoZ},
	{TMIT_native_code, isEmpty__5r0ym,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8001,6,xt_isEmpty__5r0ym},
	{TMIT_native_code, containsValue_O_8UA3p,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,21,0,0x8001,2,0},
	{TMIT_native_code, containsKey_O_yzp32,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,21,1,0x8001,10,xt_containsKey_O_yzp32},
	{TMIT_native_code, get_O_qmciZ,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,38,1,0x8001,5,xt_get_O_qmciZ},
	{TMIT_native_code, put_OO_TYElP,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,56,1,0x8001,4,xt_put_OO_TYElP},
	{TMIT_native_code, remove_O_GZXrM,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,38,1,0x8001,11,xt_remove_O_GZXrM},
	{TMIT_native_code, putAll_M_MgEzL,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,29,0,0x8001,7,0},
	{TMIT_native_code, clear__P2Qi0,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,3,1,0x8001,1,xt_clear__P2Qi0},
	{TMIT_native_code, keySet__t9tgA,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,28,1,0x8001,8,xt_keySet__t9tgA},
	{TMIT_native_code, values__uyQtQ,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,35,0,0x8001,10,0},
	{TMIT_native_code, entries__U0AZU,(const Char *)&nmim_23,7,
	(const Char *)&sgim_23,35,1,0x8001,12,xt_entries__U0AZU},
	{TMIT_native_code, init_i_NDPpI,(const Char *)&nmim_24,6,
	(const Char *)&sgim_24,4,1,0x1,2,xt_init_i_NDPpI},
	{TMIT_native_code, init_if_LzPr3,(const Char *)&nmim_25,6,
	(const Char *)&sgim_25,5,1,0x1,3,xt_init_if_LzPr3},
	{TMIT_native_code, contains_O_rM4RF,(const Char *)&nmim_26,8,
	(const Char *)&sgim_26,21,1,0x1,9,xt_contains_O_rM4RF},
    } /* end of methodsigs */
};


/*M init__4dSXs: ca.mcgill.sable.util.HashMap.<init>()V */

Class xt_init__4dSXs[] = { 0 };

Void init__4dSXs(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__e4yNt(a1);
	a1 = av0;
	a2 = new(&cl_java_util_Hashtable.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lkK9b(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_HashMap*)a1)->table = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__P2Qi0: ca.mcgill.sable.util.HashMap.clear()V */

Class xt_clear__P2Qi0[] = { 0 };

Void clear__P2Qi0(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Hashtable*)a1)->class->M.
		clear__oZzcN.f(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_i_NDPpI: ca.mcgill.sable.util.HashMap.<init>(I)V */

Class xt_init_i_NDPpI[] = { 0 };

Void init_i_NDPpI(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__e4yNt(a1);
	a1 = av0;
	a2 = new(&cl_java_util_Hashtable.C);
	a3 = a2;
	i4 = iv1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_i_yOEvX(a3,i4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_HashMap*)a1)->table = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_if_LzPr3: ca.mcgill.sable.util.HashMap.<init>(IF)V */

Class xt_init_if_LzPr3[] = { 0 };

Void init_if_LzPr3(Object p0, Int p1, Float p2)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
Int i0, i1, i2, i3, i4, i5;
Int iv1;
Float f0, f1, f2, f3, f4, f5;
Float fv2;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	fv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__e4yNt(a1);
	i1 = iv1;
	if (i1 > 0)
		GOTO(5,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_util_HashMap[1];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	i4 = iv1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_i_ZQIqx.f(a3,i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	f1 = fv2;
	f2 = 0;
	i1 = (f1 < f2) ? -1 : ((f1 == f2) ? 0 : 1);
	if (i1 > 0)
		GOTO(35,L2);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_util_HashMap[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	i4 = iv1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_i_ZQIqx.f(a3,i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L2:	a1 = av0;
	a2 = new(&cl_java_util_Hashtable.C);
	a3 = a2;
	i4 = iv1;
	f5 = fv2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_if_IINeH(a3,i4,f5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_HashMap*)a1)->table = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M put_OO_TYElP: ca.mcgill.sable.util.HashMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_put_OO_TYElP[] = { 0 };

Object put_OO_TYElP(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_O_qmciZ: ca.mcgill.sable.util.HashMap.get(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_get_O_qmciZ[] = { 0 };

Object get_O_qmciZ(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEmpty__5r0ym: ca.mcgill.sable.util.HashMap.isEmpty()Z */

Class xt_isEmpty__5r0ym[] = { 0 };

Boolean isEmpty__5r0ym(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		size__LHWUu.f(a1);
	if (i1 == 0)
		GOTO(7,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__WiOoZ: ca.mcgill.sable.util.HashMap.size()I */

Class xt_size__WiOoZ[] = { 0 };

Int size__WiOoZ(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		size__LHWUu.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M keySet__t9tgA: ca.mcgill.sable.util.HashMap.keySet()Lca/mcgill/sable/util/Set; */

Class xt_keySet__t9tgA[] = { 0 };

Object keySet__t9tgA(Object p0)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		keys__xGD0F.f(a1);
	av1 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av2 = a1;
	GOTO(16,L2);

L1:	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1715937210)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(38,L1);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_O_rM4RF: ca.mcgill.sable.util.HashMap.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_rM4RF[] = { 0 };

Boolean contains_O_rM4RF(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		contains_O_SoCET.f(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M containsKey_O_yzp32: ca.mcgill.sable.util.HashMap.containsKey(Ljava/lang/Object;)Z */

Class xt_containsKey_O_yzp32[] = { 0 };

Boolean containsKey_O_yzp32(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (a1 != 0)
		GOTO(1,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_util_HashMap[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		containsKey_O_NPUci.f(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove_O_GZXrM: ca.mcgill.sable.util.HashMap.remove(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_remove_O_GZXrM[] = { 0 };

Object remove_O_GZXrM(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		remove_O_XahIv.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M entries__U0AZU: ca.mcgill.sable.util.HashMap.entries()Lca/mcgill/sable/util/Collection; */

Class xt_entries__U0AZU[] = { 0 };

Object entries__U0AZU(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->table;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		keys__xGD0F.f(a1);
	av1 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av2 = a1;
	GOTO(16,L2);

L1:	a1 = av2;
	a2 = new(&cl_ca_mcgill_sable_util_Hash_rJAjz.C);
	a3 = a2;
	a4 = av0;
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,1715937210)->f)(a5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_HO_atRUL(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(46,L1);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_HashMap[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','H','a','s','h','M','a','p','i','n','i','t','i','a','l','C',
'a','p','a','c','i','t','y',' ','i','s',' ','l','o','a','d','F','a','c',
't','o','r',' ','i','s',' ','H','e','y',' ','h','e','y','!'};

const void *st_ca_mcgill_sable_util_HashMap[] = {
    ch_ca_mcgill_sable_util_HashMap+28,	/* 0. ca.mcgill.sable.util.HashMap */
    ch_ca_mcgill_sable_util_HashMap+47,	/* 1. initialCapacity is  */
    ch_ca_mcgill_sable_util_HashMap+61,	/* 2. loadFactor is  */
    ch_ca_mcgill_sable_util_HashMap+69,	/* 3. Hey hey! */
    0};
