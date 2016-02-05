/*  ca_mcgill_sable_soot_jimple_AbstractStmt$AllMapTo.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractStmt$AllMapTo  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt$AllMapTo.h"
#include "ca_mcgill_sable_util_AbstractMap.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_QDgNO.C,
    &cl_ca_mcgill_sable_util_AbstractMap.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Map.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_QDgNO[];
extern const void *st_ca_mcgill_sable_soot_jimp_QDgNO[];
extern Class xt_init_AO_KY3MU[];
extern Class xt_get_O_9Tsb7[];
extern Class xt_entries__x0M3K[];

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
static const struct ihash htable[512] = {
    0, 0, 0, 0,
    30091266, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.put_OO_vSkOj, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1515828273, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.get_O_9Tsb7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    600973901, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.values__uyQtQ,
    390934606, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.clear__7orZA, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1173667951, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.entries__x0M3K, 0, 0,
    0, 0, 1862268018, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.keySet__Po2Uz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -77719429, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.containsValue_O_8UA3p,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -183262533, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.putAll_M_MgEzL, 0, 0,
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
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.equals_O_XQysy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.hashCode__8LddD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -715680353, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.remove_O_wUeTD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.isEmpty__Bhwpd, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.size__M7Wwn, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165920191, &cl_ca_mcgill_sable_soot_jimp_QDgNO.M.containsKey_O_qXkiv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(49) nmchars = {&acl_char, 0, 49, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','m','t','$','A','l','l','M','a','p','T','o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 49 };
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
't','h','i','s','$','0'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','b','s','t','r','a','c',
't','S','t','m','t',';'};
static const Char nmiv_3[] = {
'd','e','s','t'};
static const Char sgiv_3[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
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
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','b','s','t','r','a',
'c','t','S','t','m','t',';','L','j','a','v','a','/','l','a','n','g','/',
'O','b','j','e','c','t',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_QDgNO, values), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,0,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_QDgNO, keys), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,26,0,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_QDgNO, this0_oYxUV), 0,(const Char *)&nmiv_2,6,(const Char *)&sgiv_2,42,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_QDgNO, dest), 0,(const Char *)&nmiv_3,4,(const Char *)&sgiv_3,18,1,0x0,1}, 
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
} inr_ca_mcgill_sable_soot_jimp_QDgNO = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_QDgNO.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_QDgNO cl_ca_mcgill_sable_soot_jimp_QDgNO = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_QDgNO),
    25,
    0,
    4,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_QDgNO,
    st_ca_mcgill_sable_soot_jimp_QDgNO,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_QDgNO,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__e4yNt,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,14,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
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
	{TMIT_native_code, size__M7Wwn,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,0,0x8001,0,0},
	{TMIT_native_code, isEmpty__Bhwpd,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,0,0x8001,1,0},
	{TMIT_native_code, containsValue_O_8UA3p,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,21,0,0x8001,2,0},
	{TMIT_native_code, containsKey_O_qXkiv,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,21,0,0x8001,3,0},
	{TMIT_native_code, get_O_9Tsb7,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,38,1,0x8001,1,xt_get_O_9Tsb7},
	{TMIT_native_code, put_OO_vSkOj,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,56,0,0x8001,5,0},
	{TMIT_native_code, remove_O_wUeTD,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,38,0,0x8001,6,0},
	{TMIT_native_code, putAll_M_MgEzL,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,29,0,0x8001,7,0},
	{TMIT_native_code, clear__7orZA,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,3,0,0x8001,8,0},
	{TMIT_native_code, keySet__Po2Uz,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,28,0,0x8001,9,0},
	{TMIT_native_code, values__uyQtQ,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,35,0,0x8001,10,0},
	{TMIT_native_code, entries__x0M3K,(const Char *)&nmim_23,7,
	(const Char *)&sgim_23,35,1,0x8001,2,xt_entries__x0M3K},
	{TMIT_native_code, init_AO_KY3MU,(const Char *)&nmim_24,6,
	(const Char *)&sgim_24,63,1,0x1,0,xt_init_AO_KY3MU},
    } /* end of methodsigs */
};


/*M init_AO_KY3MU: ca.mcgill.sable.soot.jimple.AbstractStmt$AllMapTo.<init>(Lca/mcgill/sable/soot/jimple/AbstractStmt;Ljava/lang/Object;)V */

Class xt_init_AO_KY3MU[] = { 0 };

Void init_AO_KY3MU(Object p0, Object p1, Object p2)
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
	init__e4yNt(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_QDgNO*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_QDgNO*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_QDgNO*)a1)->dest = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_O_9Tsb7: ca.mcgill.sable.soot.jimple.AbstractStmt$AllMapTo.get(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_get_O_9Tsb7[] = { 0 };

Object get_O_9Tsb7(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_QDgNO*)a1)->dest;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M entries__x0M3K: ca.mcgill.sable.soot.jimple.AbstractStmt$AllMapTo.entries()Lca/mcgill/sable/util/Collection; */

Class xt_entries__x0M3K[] = { 0 };

Object entries__x0M3K(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

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



const Char ch_ca_mcgill_sable_soot_jimp_QDgNO[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','m','t','$','A','l','l','M','a','p','T','o'};

const void *st_ca_mcgill_sable_soot_jimp_QDgNO[] = {
    ch_ca_mcgill_sable_soot_jimp_QDgNO+49,	/* 0. ca.mcgill.sable.soot.jimple.AbstractStmt */
    0};
