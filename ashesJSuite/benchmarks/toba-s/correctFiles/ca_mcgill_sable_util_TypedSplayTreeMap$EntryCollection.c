/*  ca_mcgill_sable_util_TypedSplayTreeMap$EntryCollection.c -- from Java class ca.mcgill.sable.util.TypedSplayTreeMap$EntryCollection  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$EntryCollection.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$EntryIterator.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$TypedEntry.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Type_AiLCg.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_TypedSplayTreeMap.C,
    &cl_ca_mcgill_sable_util_Type_KCE6Q.C,
    &cl_ca_mcgill_sable_util_Type_6y11S.C,
};

extern const Char ch_ca_mcgill_sable_util_Type_AiLCg[];
extern const void *st_ca_mcgill_sable_util_Type_AiLCg[];
extern Class xt_init_TC_maCt0[];
extern Class xt_size__XLOcD[];
extern Class xt_iterator__jP1wL[];

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
    390934606, &cl_ca_mcgill_sable_util_Type_AiLCg.M.clear__zWYtB, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_Type_AiLCg.M.add_O_hKkaR, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_Type_AiLCg.M.iterator__jP1wL,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_Type_AiLCg.M.toArray_aO_bJpag,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_Type_AiLCg.M.containsAll_C_6vFga,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_Type_AiLCg.M.contains_O_302Uk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Type_AiLCg.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_Type_AiLCg.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_Type_AiLCg.M.isEmpty__pVAEs, 0, 0,
    0, 0, 0, 0,
    2095947698, &cl_ca_mcgill_sable_util_Type_AiLCg.M.toArray__DAHJZ, 0, 0,
    0, 0, -1646441547, &cl_ca_mcgill_sable_util_Type_AiLCg.M.size__XLOcD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -936165947, &cl_ca_mcgill_sable_util_Type_AiLCg.M.remove_O_kFhHf, 0, 0,
    0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_Type_AiLCg.M.addAll_C_MDtDx,
    0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_Type_AiLCg.M.retainAll_C_048uu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Type_AiLCg.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1288074734, &cl_ca_mcgill_sable_util_Type_AiLCg.M.removeAll_C_hhL65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(54) nmchars = {&acl_char, 0, 54, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','S','p','l','a','y','T','r','e','e','M',
'a','p','$','E','n','t','r','y','C','o','l','l','e','c','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 54 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','T','y','p','e','d','S','p','l','a','y','T','r','e','e',
'M','a','p',';'};
static const Char nmiv_1[] = {
'c','o','l','l','e','c','t','i','o','n'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','o','l','l','e','c','t','i','o','n',';'};
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
static const Char nmim_25[] = {
'<','i','n','i','t','>'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','T','y','p','e','d','S','p','l','a','y','T','r','e',
'e','M','a','p',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','u','t','i','l','/','C','o','l','l','e','c','t','i','o',
'n',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Type_AiLCg, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,40,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Type_AiLCg, collection), 0,(const Char *)&nmiv_1,10,(const Char *)&sgiv_1,33,1,0x2,1}, 
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
} inr_ca_mcgill_sable_util_Type_AiLCg = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Type_AiLCg.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Type_AiLCg cl_ca_mcgill_sable_util_Type_AiLCg = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Type_AiLCg),
    26,
    0,
    2,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_util_Type_AiLCg,
    st_ca_mcgill_sable_util_Type_AiLCg,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Type_AiLCg,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__a6x0C,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,12,0},
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
	(const Char *)&sgim_8,20,0,0x1,11,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, isEmpty__pVAEs,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,3,0,0x8001,0,0},
	{TMIT_native_code, contains_O_302Uk,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,21,0,0x8001,1,0},
	{TMIT_native_code, toArray__DAHJZ,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,21,0,0x8001,2,0},
	{TMIT_native_code, toArray_aO_bJpag,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,22,0,0x8001,3,0},
	{TMIT_native_code, add_O_hKkaR,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,21,0,0x8001,4,0},
	{TMIT_native_code, remove_O_kFhHf,(const Char *)&nmim_17,6,
	(const Char *)&sgim_17,21,0,0x8001,5,0},
	{TMIT_native_code, containsAll_C_6vFga,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,36,0,0x8001,6,0},
	{TMIT_native_code, addAll_C_MDtDx,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,36,0,0x8001,7,0},
	{TMIT_native_code, removeAll_C_hhL65,(const Char *)&nmim_20,9,
	(const Char *)&sgim_20,36,0,0x8001,8,0},
	{TMIT_native_code, retainAll_C_048uu,(const Char *)&nmim_21,9,
	(const Char *)&sgim_21,36,0,0x8001,9,0},
	{TMIT_native_code, clear__zWYtB,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,3,0,0x8001,10,0},
	{TMIT_native_code, size__XLOcD,(const Char *)&nmim_23,4,
	(const Char *)&sgim_23,3,1,0x8001,1,xt_size__XLOcD},
	{TMIT_native_code, iterator__jP1wL,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,33,1,0x8001,2,xt_iterator__jP1wL},
	{TMIT_native_code, init_TC_maCt0,(const Char *)&nmim_25,6,
	(const Char *)&sgim_25,76,1,0x0,0,xt_init_TC_maCt0},
    } /* end of methodsigs */
};


/*M init_TC_maCt0: ca.mcgill.sable.util.TypedSplayTreeMap$EntryCollection.<init>(Lca/mcgill/sable/util/TypedSplayTreeMap;Lca/mcgill/sable/util/Collection;)V */

Class xt_init_TC_maCt0[] = { 0 };

Void init_TC_maCt0(Object p0, Object p1, Object p2)
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
	init__a6x0C(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_AiLCg*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_AiLCg*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_AiLCg*)a1)->collection = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__XLOcD: ca.mcgill.sable.util.TypedSplayTreeMap$EntryCollection.size()I */

Class xt_size__XLOcD[] = { 0 };

Int size__XLOcD(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Type_AiLCg*)a1)->collection;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M iterator__jP1wL: ca.mcgill.sable.util.TypedSplayTreeMap$EntryCollection.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__jP1wL[] = { 0 };

Object iterator__jP1wL(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Type_KCE6Q.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Type_AiLCg*)a3)->this0_oYxUV;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_util_Type_AiLCg*)a4)->collection;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1180110655)->f)(a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_TI_0UesG(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Type_AiLCg[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','S','p','l','a','y','T','r','e','e','M',
'a','p','$','E','n','t','r','y','C','o','l','l','e','c','t','i','o','n'};

const void *st_ca_mcgill_sable_util_Type_AiLCg[] = {
    ch_ca_mcgill_sable_util_Type_AiLCg+54,	/* 0. ca.mcgill.sable.util.TypedSplayTreeMap$E */
    0};
