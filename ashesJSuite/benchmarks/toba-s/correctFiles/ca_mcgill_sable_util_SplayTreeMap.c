/*  ca_mcgill_sable_util_SplayTreeMap.c -- from Java class ca.mcgill.sable.util.SplayTreeMap  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_SplayTreeMap.h"
#include "ca_mcgill_sable_util_AbstractMap.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "ca_mcgill_sable_util_Comparable.h"
#include "ca_mcgill_sable_util_Comparator.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "ca_mcgill_sable_util_SplayTreeMap$EntryCollection.h"
#include "ca_mcgill_sable_util_SplayTreeMap$EntryIterator.h"
#include "ca_mcgill_sable_util_SplayTreeMap$Node.h"
#include "java_lang_NullPointerException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_SplayTreeMap.C,
    &cl_ca_mcgill_sable_util_AbstractMap.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Map.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Collection.C,
    &cl_ca_mcgill_sable_util_Comparable.C,
    &cl_ca_mcgill_sable_util_Comparator.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
    &cl_ca_mcgill_sable_util_Spla_8RYAj.C,
    &cl_ca_mcgill_sable_util_Spla_gQTcK.C,
    &cl_ca_mcgill_sable_util_Spla_Cgwz5.C,
    &cl_java_lang_NullPointerException.C,
};

extern const Char ch_ca_mcgill_sable_util_SplayTreeMap[];
extern const void *st_ca_mcgill_sable_util_SplayTreeMap[];
extern Class xt_init__HDIum[];
extern Class xt_init_C_lGyvH[];
extern Class xt_init_M_53Zow[];
extern Class xt_init_MC_fKnMy[];
extern Class xt_clone__ElqdG[];
extern Class xt_getComparator__1So6E[];
extern Class xt_size__fLEYC[];
extern Class xt_containsKey_O_3qlDb[];
extern Class xt_get_O_ThiuL[];
extern Class xt_put_OO_MB2ge[];
extern Class xt_remove_O_boW7c[];
extern Class xt_clear__a6tZq[];
extern Class xt_entries__jISF8[];
extern Class xt_splay_S_vl1uT[];
extern Class xt_find_O_Z1GSs[];
extern Class xt_insert_OO_4rtY3[];
extern Class xt_delete_O_oqx77[];
extern Class xt_compare_OO_bZn2p[];
extern Class xt_access0_S_7aikG[];
extern Class xt_access1_S_oa8DE[];
extern Class xt_access2_S_VKW9x[];

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
    30091266, &cl_ca_mcgill_sable_util_SplayTreeMap.M.put_OO_MB2ge, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1515828273, &cl_ca_mcgill_sable_util_SplayTreeMap.M.get_O_ThiuL, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    600973901, &cl_ca_mcgill_sable_util_SplayTreeMap.M.values__uyQtQ,
    390934606, &cl_ca_mcgill_sable_util_SplayTreeMap.M.clear__a6tZq, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1173667951, &cl_ca_mcgill_sable_util_SplayTreeMap.M.entries__jISF8,
    0, 0, 0, 0,
    1862268018, &cl_ca_mcgill_sable_util_SplayTreeMap.M.keySet__Po2Uz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -77719429, &cl_ca_mcgill_sable_util_SplayTreeMap.M.containsValue_O_8UA3p,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -183262533, &cl_ca_mcgill_sable_util_SplayTreeMap.M.putAll_M_MgEzL,
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
    -1028981426, &cl_ca_mcgill_sable_util_SplayTreeMap.M.equals_O_XQysy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_SplayTreeMap.M.hashCode__8LddD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -715680353, &cl_ca_mcgill_sable_util_SplayTreeMap.M.remove_O_boW7c,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_SplayTreeMap.M.isEmpty__Bhwpd,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_util_SplayTreeMap.M.size__fLEYC, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165920191, &cl_ca_mcgill_sable_util_SplayTreeMap.M.containsKey_O_3qlDb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(33) nmchars = {&acl_char, 0, 33, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','p','l','a','y','T','r','e','e','M','a','p'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 33 };
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
static const Char nmsm_0[] = {
'a','c','c','e','s','s','$','0'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',';',
')','I'};
static const Char nmsm_1[] = {
'a','c','c','e','s','s','$','1'};
static const Char sgsm_1[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$',
'N','o','d','e',';'};
static const Char nmsm_2[] = {
'a','c','c','e','s','s','$','2'};
static const Char sgsm_2[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',';',
')','I'};
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, values), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,0,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, keys), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,26,0,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, size), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,1,1,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, comparator), 0,(const Char *)&nmiv_3,10,(const Char *)&sgiv_3,33,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, root), 0,(const Char *)&nmiv_4,4,(const Char *)&sgiv_4,40,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, toggle), 0,(const Char *)&nmiv_5,6,(const Char *)&sgiv_5,1,1,0x2,3}, 
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, entries), 0,(const Char *)&nmiv_6,7,(const Char *)&sgiv_6,33,1,0x2,4}, 
    { offsetof(struct in_ca_mcgill_sable_util_SplayTreeMap, modCount), 0,(const Char *)&nmiv_7,8,(const Char *)&sgiv_7,1,1,0x82,5}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())access0_S_7aikG,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,38,
	1,0x8,18,xt_access0_S_7aikG},
    {TMIT_native_code, (Void(*)())access1_S_oa8DE,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,77,
	1,0x8,19,xt_access1_S_oa8DE},
    {TMIT_native_code, (Void(*)())access2_S_VKW9x,
	(const Char *)&nmsm_2,8,(const Char *)&sgsm_2,38,
	1,0x8,20,xt_access2_S_VKW9x},
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
} inr_ca_mcgill_sable_util_SplayTreeMap = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_SplayTreeMap.C.classclass, 0};

struct cl_ca_mcgill_sable_util_SplayTreeMap cl_ca_mcgill_sable_util_SplayTreeMap = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_SplayTreeMap),
    33,
    3,
    8,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_util_SplayTreeMap,
    st_ca_mcgill_sable_util_SplayTreeMap,
    0,
    init__HDIum,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_SplayTreeMap,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__HDIum,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__HDIum},
	{TMIT_native_code, clone__ElqdG,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x1,4,xt_clone__ElqdG},
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
	(const Char *)&sgim_12,3,1,0x8001,6,xt_size__fLEYC},
	{TMIT_native_code, isEmpty__Bhwpd,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,0,0x8001,1,0},
	{TMIT_native_code, containsValue_O_8UA3p,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,21,0,0x8001,2,0},
	{TMIT_native_code, containsKey_O_3qlDb,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,21,1,0x8001,7,xt_containsKey_O_3qlDb},
	{TMIT_native_code, get_O_ThiuL,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,38,1,0x8001,8,xt_get_O_ThiuL},
	{TMIT_native_code, put_OO_MB2ge,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,56,1,0x8001,9,xt_put_OO_MB2ge},
	{TMIT_native_code, remove_O_boW7c,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,38,1,0x8001,10,xt_remove_O_boW7c},
	{TMIT_native_code, putAll_M_MgEzL,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,29,0,0x8001,7,0},
	{TMIT_native_code, clear__a6tZq,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,3,1,0x8001,11,xt_clear__a6tZq},
	{TMIT_native_code, keySet__Po2Uz,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,28,0,0x8001,9,0},
	{TMIT_native_code, values__uyQtQ,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,35,0,0x8001,10,0},
	{TMIT_native_code, entries__jISF8,(const Char *)&nmim_23,7,
	(const Char *)&sgim_23,35,1,0x8001,12,xt_entries__jISF8},
	{TMIT_native_code, init_C_lGyvH,(const Char *)&nmim_24,6,
	(const Char *)&sgim_24,36,1,0x1,1,xt_init_C_lGyvH},
	{TMIT_native_code, init_M_53Zow,(const Char *)&nmim_25,6,
	(const Char *)&sgim_25,29,1,0x1,2,xt_init_M_53Zow},
	{TMIT_native_code, init_MC_fKnMy,(const Char *)&nmim_26,6,
	(const Char *)&sgim_26,62,1,0x1,3,xt_init_MC_fKnMy},
	{TMIT_native_code, getComparator__1So6E,(const Char *)&nmim_27,13,
	(const Char *)&sgim_27,35,1,0x1,5,xt_getComparator__1So6E},
	{TMIT_native_code, splay_S_vl1uT,(const Char *)&nmim_28,5,
	(const Char *)&sgim_28,43,1,0x2,13,xt_splay_S_vl1uT},
	{TMIT_native_code, find_O_Z1GSs,(const Char *)&nmim_29,4,
	(const Char *)&sgim_29,60,1,0x2,14,xt_find_O_Z1GSs},
	{TMIT_native_code, insert_OO_4rtY3,(const Char *)&nmim_30,6,
	(const Char *)&sgim_30,56,1,0x2,15,xt_insert_OO_4rtY3},
	{TMIT_native_code, delete_O_oqx77,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,38,1,0x2,16,xt_delete_O_oqx77},
	{TMIT_native_code, compare_OO_bZn2p,(const Char *)&nmim_32,7,
	(const Char *)&sgim_32,39,1,0x2,17,xt_compare_OO_bZn2p},
    } /* end of methodsigs */
};


/*M init__HDIum: ca.mcgill.sable.util.SplayTreeMap.<init>()V */

Class xt_init__HDIum[] = { 0 };

Void init__HDIum(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__e4yNt(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_C_lGyvH: ca.mcgill.sable.util.SplayTreeMap.<init>(Lca/mcgill/sable/util/Comparator;)V */

Class xt_init_C_lGyvH[] = { 0 };

Void init_C_lGyvH(Object p0, Object p1)
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
	init__e4yNt(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->comparator = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_M_53Zow: ca.mcgill.sable.util.SplayTreeMap.<init>(Lca/mcgill/sable/util/Map;)V */

Class xt_init_M_53Zow[] = { 0 };

Void init_M_53Zow(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__e4yNt(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1173667951)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(16,L2);

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
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->class->M.
		put_OO_MB2ge.f(a1,a2,a3);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(52,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_MC_fKnMy: ca.mcgill.sable.util.SplayTreeMap.<init>(Lca/mcgill/sable/util/Map;Lca/mcgill/sable/util/Comparator;)V */

Class xt_init_MC_fKnMy[] = { 0 };

Void init_MC_fKnMy(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3;
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
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->comparator = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1173667951)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(21,L2);

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
	a1 = av0;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1867935226)->f)(a2);
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,187019670)->f)(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->class->M.
		put_OO_MB2ge.f(a1,a2,a3);
L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(60,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__ElqdG: ca.mcgill.sable.util.SplayTreeMap.clone()Ljava/lang/Object; */

Class xt_clone__ElqdG[] = { 0 };

Object clone__ElqdG(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_SplayTreeMap.C);
	a2 = a1;
	a3 = av0;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a4)->comparator;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_MC_fKnMy(a2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getComparator__1So6E: ca.mcgill.sable.util.SplayTreeMap.getComparator()Lca/mcgill/sable/util/Comparator; */

Class xt_getComparator__1So6E[] = { 0 };

Object getComparator__1So6E(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->comparator;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__fLEYC: ca.mcgill.sable.util.SplayTreeMap.size()I */

Class xt_size__fLEYC[] = { 0 };

Int size__fLEYC(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->size;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M containsKey_O_3qlDb: ca.mcgill.sable.util.SplayTreeMap.containsKey(Ljava/lang/Object;)Z */

Class xt_containsKey_O_3qlDb[] = { 0 };

Boolean containsKey_O_3qlDb(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (a1 != 0)
		GOTO(1,L1);
	a1 = new(&cl_java_lang_NullPointerException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__iQiCT(a2);
	athrow(a1);

L1:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = find_O_Z1GSs(a1,a2);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(19,L2);
	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_O_ThiuL: ca.mcgill.sable.util.SplayTreeMap.get(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_get_O_ThiuL[] = { 0 };

Object get_O_ThiuL(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (a1 != 0)
		GOTO(1,L1);
	a1 = new(&cl_java_lang_NullPointerException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__iQiCT(a2);
	athrow(a1);

L1:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = find_O_Z1GSs(a1,a2);
	av2 = a1;
	a1 = av2;
	if (a1 == 0)
		GOTO(19,L2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	return a1;

L2:	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M put_OO_MB2ge: ca.mcgill.sable.util.SplayTreeMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_put_OO_MB2ge[] = { 0 };

Object put_OO_MB2ge(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a2)->modCount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->modCount = i2;
	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = insert_OO_4rtY3(a1,a2,a3);
	av3 = a1;
	a1 = av3;
	if (a1 != 0)
		GOTO(18,L1);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a2)->size;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->size = i2;
L1:	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove_O_boW7c: ca.mcgill.sable.util.SplayTreeMap.remove(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_remove_O_boW7c[] = { 0 };

Object remove_O_boW7c(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a2)->modCount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->modCount = i2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = delete_O_oqx77(a1,a2);
	av2 = a1;
	a1 = av2;
	if (a1 == 0)
		GOTO(17,L1);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a2)->size;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->size = i2;
L1:	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__a6tZq: ca.mcgill.sable.util.SplayTreeMap.clear()V */

Class xt_clear__a6tZq[] = { 0 };

Void clear__a6tZq(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a2)->modCount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->modCount = i2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M entries__jISF8: ca.mcgill.sable.util.SplayTreeMap.entries()Lca/mcgill/sable/util/Collection; */

Class xt_entries__jISF8[] = { 0 };

Object entries__jISF8(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->entries;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_Spla_8RYAj.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_kU5JK(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->entries = a2;
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->entries;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M splay_S_vl1uT: ca.mcgill.sable.util.SplayTreeMap.splay(Lca/mcgill/sable/util/SplayTreeMap$Node;)V */

Class xt_splay_S_vl1uT[] = { 0 };

Void splay_S_vl1uT(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (a1 != 0)
		GOTO(1,L10);
	return;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	av3 = a1;
	a1 = av3;
	if (a1 != 0)
		GOTO(16,L3);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (a1 != a2)
		GOTO(24,L2);
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	GOTO(40,L10);

L2:	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	GOTO(56,L10);

L3:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	av4 = a1;
	i1 = 0;
	iv5 = i1;
	a1 = av4;
	if (a1 == 0)
		GOTO(70,L4);
	a1 = av3;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (a1 != a2)
		GOTO(79,L4);
	i1 = 1;
	iv5 = i1;
L4:	a1 = av2;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (a1 != a2)
		GOTO(90,L6);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (a1 != a2)
		GOTO(98,L5);
	a1 = av3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	GOTO(127,L8);

L5:	a1 = av3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av1;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	GOTO(156,L8);

L6:	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (a1 != a2)
		GOTO(164,L7);
	a1 = av3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	GOTO(193,L8);

L7:	a1 = av3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av1;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
L8:	a1 = av4;
	if (a1 == 0)
		GOTO(224,L10);
	i1 = iv5;
	if (i1 == 0)
		GOTO(229,L9);
	a1 = av4;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	GOTO(238,L10);

L9:	a1 = av4;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
L10:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	if (a1 != 0)
		GOBACK(251,L1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M find_O_Z1GSs: ca.mcgill.sable.util.SplayTreeMap.find(Ljava/lang/Object;)Lca/mcgill/sable/util/SplayTreeMap$Node; */

Class xt_find_O_Z1GSs[] = { 0 };

Object find_O_Z1GSs(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root;
	av2 = a1;
	a1 = 0;
	av3 = a1;
	GOTO(7,L4);

L1:	a1 = av2;
	av3 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a3)->class->M.
		getKey__azarQ.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = compare_OO_bZn2p(a1,a2,a3);
	iv4 = i1;
	i1 = iv4;
	if (i1 != 0)
		GOTO(25,L2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = av2;
	return a1;

L2:	i1 = iv4;
	if (i1 >= 0)
		GOTO(37,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	av2 = a1;
	GOTO(45,L4);

L3:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	av2 = a1;
L4:	a1 = av2;
	if (a1 != 0)
		GOBACK(54,L1);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M insert_OO_4rtY3: ca.mcgill.sable.util.SplayTreeMap.insert(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_insert_OO_4rtY3[] = { 0 };

Object insert_OO_4rtY3(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av6;
Int i0, i1, i2, i3, i4, i5;
Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root;
	av3 = a1;
	a1 = 0;
	av4 = a1;
	GOTO(8,L4);

L1:	a1 = av3;
	av4 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a3)->class->M.
		getKey__azarQ.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = compare_OO_bZn2p(a1,a2,a3);
	iv5 = i1;
	i1 = iv5;
	if (i1 != 0)
		GOTO(27,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	av6 = a1;
	a1 = av3;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setValue_O_Q0wRy.f(a1,a2);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = av6;
	return a1;

L2:	i1 = iv5;
	if (i1 >= 0)
		GOTO(52,L3);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	av3 = a1;
	GOTO(60,L4);

L3:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	av3 = a1;
L4:	a1 = av3;
	if (a1 != 0)
		GOBACK(69,L1);
	a1 = av4;
	if (a1 == 0)
		GOTO(74,L6);
	a1 = av0;
	a2 = av1;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a3)->class->M.
		getKey__azarQ.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = compare_OO_bZn2p(a1,a2,a3);
	iv5 = i1;
	i1 = iv5;
	if (i1 >= 0)
		GOTO(91,L5);
	a1 = av4;
	a2 = new(&cl_ca_mcgill_sable_util_Spla_Cgwz5.C);
	a3 = a2;
	a4 = av1;
	a5 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_OO_trzWw(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av0;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = 0;
	return a1;

L5:	a1 = av4;
	a2 = new(&cl_ca_mcgill_sable_util_Spla_Cgwz5.C);
	a3 = a2;
	a4 = av1;
	a5 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_OO_trzWw(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av0;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = 0;
	return a1;

L6:	a1 = av0;
	a2 = av1;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = compare_OO_bZn2p(a1,a2,a3);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_Spla_Cgwz5.C);
	a3 = a2;
	a4 = av1;
	a5 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_OO_trzWw(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root = a2;
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M delete_O_oqx77: ca.mcgill.sable.util.SplayTreeMap.delete(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_delete_O_oqx77[] = { 0 };

Object delete_O_oqx77(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av5, av6;
Int i0, i1, i2, i3;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root;
	av2 = a1;
	a1 = 0;
	av3 = a1;
	GOTO(7,L23);

L1:	a1 = av2;
	av3 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a3)->class->M.
		getKey__azarQ.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = compare_OO_bZn2p(a1,a2,a3);
	iv4 = i1;
	i1 = iv4;
	if (i1 != 0)
		GOTO(25,L21);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	if (a1 != 0)
		GOTO(32,L5);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	av5 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	if (a1 != 0)
		GOTO(45,L2);
	a1 = av2;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root = a2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	return a1;

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	av6 = a1;
	a1 = av2;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (a1 != a2)
		GOTO(76,L3);
	a1 = av6;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	GOTO(86,L4);

L3:	a1 = av6;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
L4:	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	return a1;

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	if (a1 != 0)
		GOTO(111,L9);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	av5 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	if (a1 != 0)
		GOTO(124,L6);
	a1 = av2;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root = a2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	return a1;

L6:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	av6 = a1;
	a1 = av2;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (a1 != a2)
		GOTO(155,L7);
	a1 = av6;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	GOTO(165,L8);

L7:	a1 = av6;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
L8:	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	return a1;

L9:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a2)->toggle;
	if (i2 == 0)
		GOTO(191,L10);
	i2 = 0;
	GOTO(195,L11);

L10:	i2 = 1;
L11:	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->toggle = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->toggle;
	if (i1 == 0)
		GOTO(206,L14);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	av5 = a1;
	GOTO(215,L13);

L12:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	av5 = a1;
L13:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	if (a1 != 0)
		GOBACK(230,L12);
	GOTO(233,L17);

L14:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	av5 = a1;
	GOTO(242,L16);

L15:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	av5 = a1;
L16:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	if (a1 != 0)
		GOBACK(257,L15);
L17:	a1 = av0;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getKey__azarQ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = delete_O_oqx77(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	if (a1 != 0)
		GOTO(274,L18);
	a1 = av5;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av5;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root = a2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	return a1;

L18:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getParent__MZBKw.f(a1);
	av6 = a1;
	a1 = av2;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (a1 != a2)
		GOTO(318,L19);
	a1 = av6;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	GOTO(328,L20);

L19:	a1 = av6;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
L20:	a1 = av5;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
	a1 = av5;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getValue__q3Pa2.f(a1);
	return a1;

L21:	i1 = iv4;
	if (i1 >= 0)
		GOTO(369,L22);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	av2 = a1;
	GOTO(377,L23);

L22:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	av2 = a1;
L23:	a1 = av2;
	if (a1 != 0)
		GOBACK(386,L1);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	splay_S_vl1uT(a1,a2);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M compare_OO_bZn2p: ca.mcgill.sable.util.SplayTreeMap.compare(Ljava/lang/Object;Ljava/lang/Object;)I */

Class xt_compare_OO_bZn2p[] = { 0 };

Int compare_OO_bZn2p(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->comparator;
	if (a1 == 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->comparator;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1513739247)->f)(a1,a2,a3);
	return i1;

L1:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_Comparable.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1743497296)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access0_S_7aikG: ca.mcgill.sable.util.SplayTreeMap.access$0(Lca/mcgill/sable/util/SplayTreeMap;)I */

Class xt_access0_S_7aikG[] = { 0 };

Int access0_S_7aikG(Object p1)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->modCount;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access1_S_oa8DE: ca.mcgill.sable.util.SplayTreeMap.access$1(Lca/mcgill/sable/util/SplayTreeMap;)Lca/mcgill/sable/util/SplayTreeMap$Node; */

Class xt_access1_S_oa8DE[] = { 0 };

Object access1_S_oa8DE(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->root;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access2_S_VKW9x: ca.mcgill.sable.util.SplayTreeMap.access$2(Lca/mcgill/sable/util/SplayTreeMap;)I */

Class xt_access2_S_VKW9x[] = { 0 };

Int access2_S_VKW9x(Object p1)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->size;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_SplayTreeMap[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','p','l','a','y','T','r','e','e','M','a','p'};

const void *st_ca_mcgill_sable_util_SplayTreeMap[] = {
    ch_ca_mcgill_sable_util_SplayTreeMap+33,	/* 0. ca.mcgill.sable.util.SplayTreeMap */
    0};
