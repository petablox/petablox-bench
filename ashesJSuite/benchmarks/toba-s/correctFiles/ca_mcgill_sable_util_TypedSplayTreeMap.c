/*  ca_mcgill_sable_util_TypedSplayTreeMap.c -- from Java class ca.mcgill.sable.util.TypedSplayTreeMap  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap.h"
#include "ca_mcgill_sable_util_SplayTreeMap.h"
#include "ca_mcgill_sable_util_AbstractMap.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Cast.h"
#include "ca_mcgill_sable_util_NoCast.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$EntryCollection.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$EntryIterator.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$TypedEntry.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_TypedSplayTreeMap.C,
    &cl_ca_mcgill_sable_util_SplayTreeMap.C,
    &cl_ca_mcgill_sable_util_AbstractMap.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Map.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Cast.C,
    &cl_ca_mcgill_sable_util_NoCast.C,
    &cl_ca_mcgill_sable_util_Type_AiLCg.C,
    &cl_ca_mcgill_sable_util_Type_KCE6Q.C,
    &cl_ca_mcgill_sable_util_Type_6y11S.C,
};

extern const Char ch_ca_mcgill_sable_util_TypedSplayTreeMap[];
extern const void *st_ca_mcgill_sable_util_TypedSplayTreeMap[];
extern Class xt_init__RSk0l[];
extern Class xt_init_C_vlScb[];
extern Class xt_init_M_tfgcw[];
extern Class xt_init_MC_R3VBU[];
extern Class xt_init_CC_RPpBt[];
extern Class xt_init_CCC_zYvxr[];
extern Class xt_clone__Abfod[];
extern Class xt_init_MCC_nzSzB[];
extern Class xt_init_MCCC_1yUwf[];
extern Class xt_getKeyCast__iJYxm[];
extern Class xt_getValueCast__GRvUL[];
extern Class xt_entries__rEBRe[];
extern Class xt_put_OO_ENBuG[];
extern Class xt_access0_T_JjG4a[];

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
    30091266, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.put_OO_ENBuG,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1515828273, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.get_O_ThiuL,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    600973901, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.values__uyQtQ,
    390934606, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.clear__a6tZq,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1173667951, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.entries__rEBRe,
    0, 0, 0, 0,
    1862268018, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.keySet__Po2Uz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -77719429, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.containsValue_O_8UA3p,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -183262533, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.putAll_M_MgEzL,
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
    -1028981426, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.equals_O_XQysy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.hashCode__8LddD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -715680353, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.remove_O_boW7c,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.isEmpty__Bhwpd,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.size__fLEYC,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165920191, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.M.containsKey_O_3qlDb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','S','p','l','a','y','T','r','e','e','M',
'a','p'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
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
's','i','z','e'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'c','o','m','p','a','r','a','t','o','r'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','o','m','p','a','r','a','t','o','r',';'};
static const Char nmiv_4[] = {
'r','o','o','t'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$','N',
'o','d','e',';'};
static const Char nmiv_5[] = {
't','o','g','g','l','e'};
static const Char sgiv_5[] = {
'Z'};
static const Char nmiv_6[] = {
'e','n','t','r','i','e','s'};
static const Char sgiv_6[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','o','l','l','e','c','t','i','o','n',';'};
static const Char nmiv_7[] = {
'm','o','d','C','o','u','n','t'};
static const Char sgiv_7[] = {
'I'};
static const Char nmiv_8[] = {
'k','e','y','C','a','s','t'};
static const Char sgiv_8[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','a','s','t',';'};
static const Char nmiv_9[] = {
'v','a','l','u','e','C','a','s','t'};
static const Char sgiv_9[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','a','s','t',';'};
static const Char nmiv_10[] = {
'e','n','t','r','i','e','s'};
static const Char sgiv_10[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','o','l','l','e','c','t','i','o','n',';'};
static const Char nmsm_0[] = {
'a','c','c','e','s','s','$','0'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','T','y','p','e','d','S','p','l','a','y','T','r','e',
'e','M','a','p',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','u','t','i','l','/','C','a','s','t',';'};
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
'u','t','i','l','/','C','o','m','p','a','r','a','t','o','r',';',')','V'};
static const Char nmim_25[] = {
'<','i','n','i','t','>'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';',')','V'};
static const Char nmim_26[] = {
'<','i','n','i','t','>'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','u','t','i','l','/','C','o','m','p','a',
'r','a','t','o','r',';',')','V'};
static const Char nmim_27[] = {
'g','e','t','C','o','m','p','a','r','a','t','o','r'};
static const Char sgim_27[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','o','m','p','a','r','a','t','o','r',';'};
static const Char nmim_28[] = {
's','p','l','a','y'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$',
'N','o','d','e',';',')','V'};
static const Char nmim_29[] = {
'f','i','n','d'};
static const Char sgim_29[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',
'$','N','o','d','e',';'};
static const Char nmim_30[] = {
'i','n','s','e','r','t'};
static const Char sgim_30[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_31[] = {
'd','e','l','e','t','e'};
static const Char sgim_31[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_32[] = {
'c','o','m','p','a','r','e'};
static const Char sgim_32[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','I'};
static const Char nmim_33[] = {
'<','i','n','i','t','>'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','a','s','t',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','u','t','i','l','/','C','a','s','t',
';',')','V'};
static const Char nmim_34[] = {
'<','i','n','i','t','>'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','m','p','a','r','a','t','o','r',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i',
'l','/','C','a','s','t',';','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','u','t','i','l','/','C','a','s','t',';',')','V'};
static const Char nmim_35[] = {
'<','i','n','i','t','>'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','u','t','i','l','/','C','a','s','t',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','C','a','s','t',';',')','V'};
static const Char nmim_36[] = {
'<','i','n','i','t','>'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','u','t','i','l','/','C','o','m','p','a',
'r','a','t','o','r',';','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','u','t','i','l','/','C','a','s','t',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','C','a','s','t',';',')','V'};
static const Char nmim_37[] = {
'g','e','t','K','e','y','C','a','s','t'};
static const Char sgim_37[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','a','s','t',';'};
static const Char nmim_38[] = {
'g','e','t','V','a','l','u','e','C','a','s','t'};
static const Char sgim_38[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','a','s','t',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, values), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,0,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, keys), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,26,0,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, size), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,1,0,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, comparator), 0,(const Char *)&nmiv_3,10,(const Char *)&sgiv_3,33,0,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, root), 0,(const Char *)&nmiv_4,4,(const Char *)&sgiv_4,40,0,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, toggle), 0,(const Char *)&nmiv_5,6,(const Char *)&sgiv_5,1,0,0x2,3}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, entries), 0,(const Char *)&nmiv_6,7,(const Char *)&sgiv_6,33,0,0x2,4}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, modCount), 0,(const Char *)&nmiv_7,8,(const Char *)&sgiv_7,1,0,0x82,5}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, keyCast), 0,(const Char *)&nmiv_8,7,(const Char *)&sgiv_8,27,1,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, valueCast), 0,(const Char *)&nmiv_9,9,(const Char *)&sgiv_9,27,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap, entries), 0,(const Char *)&nmiv_10,7,(const Char *)&sgiv_10,33,1,0x2,2}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())access0_T_JjG4a,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,69,
	1,0x8,13,xt_access0_T_JjG4a},
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
} inr_ca_mcgill_sable_util_TypedSplayTreeMap = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_TypedSplayTreeMap.C.classclass, 0};

struct cl_ca_mcgill_sable_util_TypedSplayTreeMap cl_ca_mcgill_sable_util_TypedSplayTreeMap = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_TypedSplayTreeMap),
    39,
    1,
    11,
    0,
    4, supers,
    1, 0, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_TypedSplayTreeMap,
    st_ca_mcgill_sable_util_TypedSplayTreeMap,
    0,
    init__RSk0l,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_TypedSplayTreeMap,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__RSk0l,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__RSk0l},
	{TMIT_native_code, clone__Abfod,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x1,6,xt_clone__Abfod},
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
	{TMIT_native_code, size__fLEYC,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,0,0x8001,6,0},
	{TMIT_native_code, isEmpty__Bhwpd,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,0,0x8001,1,0},
	{TMIT_native_code, containsValue_O_8UA3p,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,21,0,0x8001,2,0},
	{TMIT_native_code, containsKey_O_3qlDb,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,21,0,0x8001,7,0},
	{TMIT_native_code, get_O_ThiuL,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,38,0,0x8001,8,0},
	{TMIT_native_code, put_OO_ENBuG,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,56,1,0x8001,12,xt_put_OO_ENBuG},
	{TMIT_native_code, remove_O_boW7c,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,38,0,0x8001,10,0},
	{TMIT_native_code, putAll_M_MgEzL,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,29,0,0x8001,7,0},
	{TMIT_native_code, clear__a6tZq,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,3,0,0x8001,11,0},
	{TMIT_native_code, keySet__Po2Uz,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,28,0,0x8001,9,0},
	{TMIT_native_code, values__uyQtQ,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,35,0,0x8001,10,0},
	{TMIT_native_code, entries__rEBRe,(const Char *)&nmim_23,7,
	(const Char *)&sgim_23,35,1,0x8001,11,xt_entries__rEBRe},
	{TMIT_native_code, init_C_vlScb,(const Char *)&nmim_24,6,
	(const Char *)&sgim_24,36,1,0x1,1,xt_init_C_vlScb},
	{TMIT_native_code, init_M_tfgcw,(const Char *)&nmim_25,6,
	(const Char *)&sgim_25,29,1,0x1,2,xt_init_M_tfgcw},
	{TMIT_native_code, init_MC_R3VBU,(const Char *)&nmim_26,6,
	(const Char *)&sgim_26,62,1,0x1,3,xt_init_MC_R3VBU},
	{TMIT_native_code, getComparator__1So6E,(const Char *)&nmim_27,13,
	(const Char *)&sgim_27,35,0,0x1,5,0},
	{TMIT_native_code, splay_S_vl1uT,(const Char *)&nmim_28,5,
	(const Char *)&sgim_28,43,0,0x2,13,0},
	{TMIT_native_code, find_O_Z1GSs,(const Char *)&nmim_29,4,
	(const Char *)&sgim_29,60,0,0x2,14,0},
	{TMIT_native_code, insert_OO_4rtY3,(const Char *)&nmim_30,6,
	(const Char *)&sgim_30,56,0,0x2,15,0},
	{TMIT_native_code, delete_O_oqx77,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,38,0,0x2,16,0},
	{TMIT_native_code, compare_OO_bZn2p,(const Char *)&nmim_32,7,
	(const Char *)&sgim_32,39,0,0x2,17,0},
	{TMIT_native_code, init_CC_RPpBt,(const Char *)&nmim_33,6,
	(const Char *)&sgim_33,57,1,0x1,4,xt_init_CC_RPpBt},
	{TMIT_native_code, init_CCC_zYvxr,(const Char *)&nmim_34,6,
	(const Char *)&sgim_34,90,1,0x1,5,xt_init_CCC_zYvxr},
	{TMIT_native_code, init_MCC_nzSzB,(const Char *)&nmim_35,6,
	(const Char *)&sgim_35,83,1,0x1,7,xt_init_MCC_nzSzB},
	{TMIT_native_code, init_MCCC_1yUwf,(const Char *)&nmim_36,6,
	(const Char *)&sgim_36,116,1,0x1,8,xt_init_MCCC_1yUwf},
	{TMIT_native_code, getKeyCast__iJYxm,(const Char *)&nmim_37,10,
	(const Char *)&sgim_37,29,1,0x1,9,xt_getKeyCast__iJYxm},
	{TMIT_native_code, getValueCast__GRvUL,(const Char *)&nmim_38,12,
	(const Char *)&sgim_38,29,1,0x1,10,xt_getValueCast__GRvUL},
    } /* end of methodsigs */
};


/*M init__RSk0l: ca.mcgill.sable.util.TypedSplayTreeMap.<init>()V */

Class xt_init__RSk0l[] = { 0 };

Void init__RSk0l(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__HDIum(a1);
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_C_vlScb: ca.mcgill.sable.util.TypedSplayTreeMap.<init>(Lca/mcgill/sable/util/Comparator;)V */

Class xt_init_C_vlScb[] = { 0 };

Void init_C_vlScb(Object p0, Object p1)
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
	init_C_lGyvH(a1,a2);
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_M_tfgcw: ca.mcgill.sable.util.TypedSplayTreeMap.<init>(Lca/mcgill/sable/util/Map;)V */

Class xt_init_M_tfgcw[] = { 0 };

Void init_M_tfgcw(Object p0, Object p1)
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
	init_M_53Zow(a1,a2);
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_MC_R3VBU: ca.mcgill.sable.util.TypedSplayTreeMap.<init>(Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Comparator;)V */

Class xt_init_MC_R3VBU[] = { 0 };

Void init_MC_R3VBU(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_MC_fKnMy(a1,a2,a3);
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	init_ca_mcgill_sable_util_NoCast();
	a2 = cl_ca_mcgill_sable_util_NoCast.V.instance;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_CC_RPpBt: ca.mcgill.sable.util.TypedSplayTreeMap.<init>(Lca/mcgill/sable/util/Cast;Lca/mcgill/sable/util/Cast;)V */

Class xt_init_CC_RPpBt[] = { 0 };

Void init_CC_RPpBt(Object p0, Object p1, Object p2)
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
	init__HDIum(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_CCC_zYvxr: ca.mcgill.sable.util.TypedSplayTreeMap.<init>(Lca/mcgill/sable/util/Comparator;Lca/mcgill/sable/util/Cast;Lca/mcgill/sable/util/Cast;)V */

Class xt_init_CCC_zYvxr[] = { 0 };

Void init_CCC_zYvxr(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_C_lGyvH(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__Abfod: ca.mcgill.sable.util.TypedSplayTreeMap.clone()Ljava/lang/Object; */

Class xt_clone__Abfod[] = { 0 };

Object clone__Abfod(Object p0)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_TypedSplayTreeMap.C);
	a2 = a1;
	a3 = av0;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a4)->class->M.
		getComparator__1So6E.f(a4);
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a5)->keyCast;
	a6 = av0;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a6)->valueCast;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_MCCC_1yUwf(a2,a3,a4,a5,a6);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_MCC_nzSzB: ca.mcgill.sable.util.TypedSplayTreeMap.<init>(Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Cast;Lca/mcgill/sable/util/Cast;)V */

Class xt_init_MCC_nzSzB[] = { 0 };

Void init_MCC_nzSzB(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_M_53Zow(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_MCCC_1yUwf: ca.mcgill.sable.util.TypedSplayTreeMap.<init>(Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Comparator;Lca/mcgill/sable/util/Cast;Lca/mcgill/sable/util/Cast;)V */

Class xt_init_MCCC_1yUwf[] = { 0 };

Void init_MCCC_1yUwf(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_MC_fKnMy(a1,a2,a3);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast = a2;
	a1 = av0;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getKeyCast__iJYxm: ca.mcgill.sable.util.TypedSplayTreeMap.getKeyCast()Lca/mcgill/sable/util/Cast; */

Class xt_getKeyCast__iJYxm[] = { 0 };

Object getKeyCast__iJYxm(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->keyCast;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getValueCast__GRvUL: ca.mcgill.sable.util.TypedSplayTreeMap.getValueCast()Lca/mcgill/sable/util/Cast; */

Class xt_getValueCast__GRvUL[] = { 0 };

Object getValueCast__GRvUL(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M entries__rEBRe: ca.mcgill.sable.util.TypedSplayTreeMap.entries()Lca/mcgill/sable/util/Collection; */

Class xt_entries__rEBRe[] = { 0 };

Object entries__rEBRe(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->entries;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_Type_AiLCg.C);
	a3 = a2;
	a4 = av0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = entries__jISF8(a5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_TC_maCt0(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->entries = a2;
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->entries;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M put_OO_ENBuG: ca.mcgill.sable.util.TypedSplayTreeMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_put_OO_ENBuG[] = { 0 };

Object put_OO_ENBuG(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a2)->keyCast;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1063132180)->f)(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a3)->valueCast;
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1063132180)->f)(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = put_OO_MB2ge(a1,a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access0_T_JjG4a: ca.mcgill.sable.util.TypedSplayTreeMap.access$0(Lca/mcgill/sable/util/TypedSplayTreeMap;)Lca/mcgill/sable/util/Cast; */

Class xt_access0_T_JjG4a[] = { 0 };

Object access0_T_JjG4a(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_TypedSplayTreeMap*)a1)->valueCast;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_TypedSplayTreeMap[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','S','p','l','a','y','T','r','e','e','M',
'a','p'};

const void *st_ca_mcgill_sable_util_TypedSplayTreeMap[] = {
    ch_ca_mcgill_sable_util_TypedSplayTreeMap+38,	/* 0. ca.mcgill.sable.util.TypedSplayTreeMap */
    0};
