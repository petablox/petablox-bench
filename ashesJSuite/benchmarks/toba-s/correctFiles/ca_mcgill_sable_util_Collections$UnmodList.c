/*  ca_mcgill_sable_util_Collections$UnmodList.c -- from Java class ca.mcgill.sable.util.Collections$UnmodList  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Collections$UnmodList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.h"
#include "ca_mcgill_sable_util_Collections.h"
#include "ca_mcgill_sable_util_Collections$UnmodIterator.h"
#include "ca_mcgill_sable_util_Collections$UnmodListIterator.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_ClassCastException.h"
#include "java_lang_IllegalArgumentException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Coll_FfXDi.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_List.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C,
    &cl_ca_mcgill_sable_util_Collections.C,
    &cl_ca_mcgill_sable_util_Coll_BuHAM.C,
    &cl_ca_mcgill_sable_util_Coll_vDien.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_ClassCastException.C,
    &cl_java_lang_IllegalArgumentException.C,
};

extern const Char ch_ca_mcgill_sable_util_Coll_FfXDi[];
extern const void *st_ca_mcgill_sable_util_Coll_FfXDi[];
extern Class xt_init_L_wst4A[];
extern Class xt_size__QwCkQ[];
extern Class xt_isEmpty__znOqC[];
extern Class xt_contains_O_fzWcl[];
extern Class xt_toArray__bpGJG[];
extern Class xt_toArray_aO_b2ptu[];
extern Class xt_add_O_930FB[];
extern Class xt_remove_O_YkoYO[];
extern Class xt_containsAll_C_qiBKu[];
extern Class xt_addAll_C_wW4q8[];
extern Class xt_removeAll_C_LpHyu[];
extern Class xt_retainAll_C_uc4WT[];
extern Class xt_clear__pSkSb[];
extern Class xt_equals_O_7NWGI[];
extern Class xt_hashCode__ibPm0[];
extern Class xt_get_i_rvGmo[];
extern Class xt_set_iO_5QlNl[];
extern Class xt_add_iO_adwYw[];
extern Class xt_remove_i_f4d3l[];
extern Class xt_indexOf_O_aQBhU[];
extern Class xt_indexOf_Oi_HopyW[];
extern Class xt_lastIndexOf_O_cJmui[];
extern Class xt_lastIndexOf_Oi_Fzk9E[];
extern Class xt_removeRange_ii_T2Drg[];
extern Class xt_addAll_iC_RibtZ[];
extern Class xt_toString__OOlky[];
extern Class xt_iterator__MGT9W[];
extern Class xt_listIterator__Y0qoS[];
extern Class xt_listIterator_i_37Pw3[];

#define HASHMASK 0x1ff
/*  4e.  174d304e  (4e)  clear  */
/*  64.  56145a64  (64)  add  */
/*  96.  90dd5096  (96)  addAll  */
/*  a7.  f61240a7  (a7)  indexOf  */
/*  ae.  4a5ea6ae  (ae)  get  */
/*  c1.  b9a8f0c1  (c1)  iterator  */
/*  ca.  2ec6ceca  (ca)  set  */
/*  e0.  77e8a8e0  (e0)  toArray  */
/*  ec.  90a3feec  (ec)  indexOf  */
/*  ff.  5c6e18ff  (ff)  containsAll  */
/*  122.  4ea93522  (122)  contains  */
/*  128.  f01ab128  (128)  lastIndexOf  */
/*  133.  e3e50733  (133)  lastIndexOf  */
/*  14d.  4b808f4d  (14d)  add  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  150.  832eab50  (150)  removeRange  */
/*  161.  8942e761  (161)  hashCode  */
/*  176.  196d5d76  (176)  listIterator  */
/*  184.  add8b184  (184)  remove  */
/*  185.  b9aacd85  (185)  listIterator  */
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
    390934606, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.clear__pSkSb, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.add_O_930FB, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1864544106, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.addAll_iC_RibtZ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -166575961, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.indexOf_O_aQBhU,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1247717038, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.get_i_rvGmo, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.iterator__MGT9W,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    784781002, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.set_iO_5QlNl, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.toArray_aO_b2ptu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1868300564, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.indexOf_Oi_HopyW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.containsAll_C_qiBKu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.contains_O_fzWcl,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -266686168, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.lastIndexOf_Oi_Fzk9E,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -471529677, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.lastIndexOf_O_cJmui,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1266716493, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.add_iO_adwYw,
    -1028981426, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.equals_O_7NWGI,
    0, 0,
    -2094093488, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.removeRange_ii_T2Drg,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.hashCode__ibPm0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    426597750, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.listIterator_i_37Pw3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1378307708, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.remove_i_f4d3l,
    -1179988603, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.listIterator__Y0qoS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.isEmpty__znOqC, 0, 0,
    0, 0, 0, 0,
    2095947698, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.toArray__bpGJG, 0, 0,
    0, 0, -1646441547, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.size__QwCkQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -936165947, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.remove_O_YkoYO, 0, 0,
    0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.addAll_C_wW4q8,
    0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.retainAll_C_uc4WT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1288074734, &cl_ca_mcgill_sable_util_Coll_FfXDi.M.removeAll_C_LpHyu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','o','l','l','e','c','t','i','o','n','s','$','U','n','m',
'o','d','L','i','s','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmiv_0[] = {
'l'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
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
'u','t','i','l','/','L','i','s','t',';',')','V'};
static const Char nmim_13[] = {
's','i','z','e'};
static const Char sgim_13[] = {
'(',')','I'};
static const Char nmim_14[] = {
'i','s','E','m','p','t','y'};
static const Char sgim_14[] = {
'(',')','Z'};
static const Char nmim_15[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
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
'r','e','m','o','v','e','A','l','l'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_23[] = {
'r','e','t','a','i','n','A','l','l'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','Z'};
static const Char nmim_24[] = {
'c','l','e','a','r'};
static const Char sgim_24[] = {
'(',')','V'};
static const Char nmim_25[] = {
'g','e','t'};
static const Char sgim_25[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_26[] = {
's','e','t'};
static const Char sgim_26[] = {
'(','I','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_27[] = {
'a','d','d'};
static const Char sgim_27[] = {
'(','I','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','V'};
static const Char nmim_28[] = {
'r','e','m','o','v','e'};
static const Char sgim_28[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_29[] = {
'i','n','d','e','x','O','f'};
static const Char sgim_29[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','I'};
static const Char nmim_30[] = {
'i','n','d','e','x','O','f'};
static const Char sgim_30[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','I',')','I'};
static const Char nmim_31[] = {
'l','a','s','t','I','n','d','e','x','O','f'};
static const Char sgim_31[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','I'};
static const Char nmim_32[] = {
'l','a','s','t','I','n','d','e','x','O','f'};
static const Char sgim_32[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','I',')','I'};
static const Char nmim_33[] = {
'r','e','m','o','v','e','R','a','n','g','e'};
static const Char sgim_33[] = {
'(','I','I',')','V'};
static const Char nmim_34[] = {
'a','d','d','A','l','l'};
static const Char sgim_34[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')',
'Z'};
static const Char nmim_35[] = {
'i','t','e','r','a','t','o','r'};
static const Char sgim_35[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','t','e','r','a','t','o','r',';'};
static const Char nmim_36[] = {
'l','i','s','t','I','t','e','r','a','t','o','r'};
static const Char sgim_36[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t','I','t','e','r','a','t','o','r',
';'};
static const Char nmim_37[] = {
'l','i','s','t','I','t','e','r','a','t','o','r'};
static const Char sgim_37[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','L','i','s','t','I','t','e','r','a','t','o',
'r',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Coll_FfXDi, l), 0,(const Char *)&nmiv_0,1,(const Char *)&sgiv_0,27,1,0x2,0}, 
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
} inr_ca_mcgill_sable_util_Coll_FfXDi = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Coll_FfXDi.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Coll_FfXDi cl_ca_mcgill_sable_util_Coll_FfXDi = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Coll_FfXDi),
    38,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    7, others,
    0, 0,
    ch_ca_mcgill_sable_util_Coll_FfXDi,
    st_ca_mcgill_sable_util_Coll_FfXDi,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Coll_FfXDi,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_7NWGI,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x8001,13,xt_equals_O_7NWGI},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__ibPm0,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x8001,14,xt_hashCode__ibPm0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__OOlky,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,25,xt_toString__OOlky},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_L_wst4A,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,30,1,0x1,0,xt_init_L_wst4A},
	{TMIT_native_code, size__QwCkQ,(const Char *)&nmim_13,4,
	(const Char *)&sgim_13,3,1,0x8001,1,xt_size__QwCkQ},
	{TMIT_native_code, isEmpty__znOqC,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,3,1,0x8001,2,xt_isEmpty__znOqC},
	{TMIT_native_code, contains_O_fzWcl,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,21,1,0x8001,3,xt_contains_O_fzWcl},
	{TMIT_native_code, toArray__bpGJG,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,21,1,0x8001,4,xt_toArray__bpGJG},
	{TMIT_native_code, toArray_aO_b2ptu,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,22,1,0x8001,5,xt_toArray_aO_b2ptu},
	{TMIT_native_code, add_O_930FB,(const Char *)&nmim_18,3,
	(const Char *)&sgim_18,21,1,0x8001,6,xt_add_O_930FB},
	{TMIT_native_code, remove_O_YkoYO,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,21,1,0x8001,7,xt_remove_O_YkoYO},
	{TMIT_native_code, containsAll_C_qiBKu,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,36,1,0x8001,8,xt_containsAll_C_qiBKu},
	{TMIT_native_code, addAll_C_wW4q8,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,36,1,0x8001,9,xt_addAll_C_wW4q8},
	{TMIT_native_code, removeAll_C_LpHyu,(const Char *)&nmim_22,9,
	(const Char *)&sgim_22,36,1,0x8001,10,xt_removeAll_C_LpHyu},
	{TMIT_native_code, retainAll_C_uc4WT,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,36,1,0x8001,11,xt_retainAll_C_uc4WT},
	{TMIT_native_code, clear__pSkSb,(const Char *)&nmim_24,5,
	(const Char *)&sgim_24,3,1,0x8001,12,xt_clear__pSkSb},
	{TMIT_native_code, get_i_rvGmo,(const Char *)&nmim_25,3,
	(const Char *)&sgim_25,21,1,0x8001,15,xt_get_i_rvGmo},
	{TMIT_native_code, set_iO_5QlNl,(const Char *)&nmim_26,3,
	(const Char *)&sgim_26,39,1,0x8001,16,xt_set_iO_5QlNl},
	{TMIT_native_code, add_iO_adwYw,(const Char *)&nmim_27,3,
	(const Char *)&sgim_27,22,1,0x8001,17,xt_add_iO_adwYw},
	{TMIT_native_code, remove_i_f4d3l,(const Char *)&nmim_28,6,
	(const Char *)&sgim_28,21,1,0x8001,18,xt_remove_i_f4d3l},
	{TMIT_native_code, indexOf_O_aQBhU,(const Char *)&nmim_29,7,
	(const Char *)&sgim_29,21,1,0x8001,19,xt_indexOf_O_aQBhU},
	{TMIT_native_code, indexOf_Oi_HopyW,(const Char *)&nmim_30,7,
	(const Char *)&sgim_30,22,1,0x8001,20,xt_indexOf_Oi_HopyW},
	{TMIT_native_code, lastIndexOf_O_cJmui,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,21,1,0x8001,21,xt_lastIndexOf_O_cJmui},
	{TMIT_native_code, lastIndexOf_Oi_Fzk9E,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,22,1,0x8001,22,xt_lastIndexOf_Oi_Fzk9E},
	{TMIT_native_code, removeRange_ii_T2Drg,(const Char *)&nmim_33,11,
	(const Char *)&sgim_33,5,1,0x8001,23,xt_removeRange_ii_T2Drg},
	{TMIT_native_code, addAll_iC_RibtZ,(const Char *)&nmim_34,6,
	(const Char *)&sgim_34,37,1,0x8001,24,xt_addAll_iC_RibtZ},
	{TMIT_native_code, iterator__MGT9W,(const Char *)&nmim_35,8,
	(const Char *)&sgim_35,33,1,0x8001,26,xt_iterator__MGT9W},
	{TMIT_native_code, listIterator__Y0qoS,(const Char *)&nmim_36,12,
	(const Char *)&sgim_36,37,1,0x8001,27,xt_listIterator__Y0qoS},
	{TMIT_native_code, listIterator_i_37Pw3,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,38,1,0x8001,28,xt_listIterator_i_37Pw3},
    } /* end of methodsigs */
};


/*M init_L_wst4A: ca.mcgill.sable.util.Collections$UnmodList.<init>(Lca/mcgill/sable/util/List;)V */

Class xt_init_L_wst4A[] = { 0 };

Void init_L_wst4A(Object p0, Object p1)
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
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__QwCkQ: ca.mcgill.sable.util.Collections$UnmodList.size()I */

Class xt_size__QwCkQ[] = { 0 };

Int size__QwCkQ(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEmpty__znOqC: ca.mcgill.sable.util.Collections$UnmodList.isEmpty()Z */

Class xt_isEmpty__znOqC[] = { 0 };

Boolean isEmpty__znOqC(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-98305106)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_O_fzWcl: ca.mcgill.sable.util.Collections$UnmodList.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_fzWcl[] = { 0 };

Boolean contains_O_fzWcl(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toArray__bpGJG: ca.mcgill.sable.util.Collections$UnmodList.toArray()[Ljava/lang/Object; */

Class xt_toArray__bpGJG[] = { 0 };

Object toArray__bpGJG(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2095947698)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toArray_aO_b2ptu: ca.mcgill.sable.util.Collections$UnmodList.toArray([Ljava/lang/Object;)V */

Class xt_toArray_aO_b2ptu[] = { 0 };

Void toArray_aO_b2ptu(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,2011736288)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_O_930FB: ca.mcgill.sable.util.Collections$UnmodList.add(Ljava/lang/Object;)Z */

Class xt_add_O_930FB[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

Boolean add_O_930FB(Object p0, Object p1)
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

/*M remove_O_YkoYO: ca.mcgill.sable.util.Collections$UnmodList.remove(Ljava/lang/Object;)Z */

Class xt_remove_O_YkoYO[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

Boolean remove_O_YkoYO(Object p0, Object p1)
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

/*M containsAll_C_qiBKu: ca.mcgill.sable.util.Collections$UnmodList.containsAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_containsAll_C_qiBKu[] = { 0 };

Boolean containsAll_C_qiBKu(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1550719231)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addAll_C_wW4q8: ca.mcgill.sable.util.Collections$UnmodList.addAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_C_wW4q8[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

Boolean addAll_C_wW4q8(Object p0, Object p1)
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

/*M removeAll_C_LpHyu: ca.mcgill.sable.util.Collections$UnmodList.removeAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_removeAll_C_LpHyu[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

Boolean removeAll_C_LpHyu(Object p0, Object p1)
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

/*M retainAll_C_uc4WT: ca.mcgill.sable.util.Collections$UnmodList.retainAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_retainAll_C_uc4WT[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

Boolean retainAll_C_uc4WT(Object p0, Object p1)
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

/*M clear__pSkSb: ca.mcgill.sable.util.Collections$UnmodList.clear()V */

Class xt_clear__pSkSb[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

Void clear__pSkSb(Object p0)
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

/*M equals_O_7NWGI: ca.mcgill.sable.util.Collections$UnmodList.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_7NWGI[] = { 0 };

Boolean equals_O_7NWGI(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1028981426)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__ibPm0: ca.mcgill.sable.util.Collections$UnmodList.hashCode()I */

Class xt_hashCode__ibPm0[] = { 0 };

Int hashCode__ibPm0(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1992104095)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_i_rvGmo: ca.mcgill.sable.util.Collections$UnmodList.get(I)Ljava/lang/Object; */

Class xt_get_i_rvGmo[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Object get_i_rvGmo(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1247717038)->f)(a1,i2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M set_iO_5QlNl: ca.mcgill.sable.util.Collections$UnmodList.set(ILjava/lang/Object;)Ljava/lang/Object; */

Class xt_set_iO_5QlNl[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Object set_iO_5QlNl(Object p0, Int p1, Object p2)
{
Object a0, a1, a2;
Object av0, av2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
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

/*M add_iO_adwYw: ca.mcgill.sable.util.Collections$UnmodList.add(ILjava/lang/Object;)V */

Class xt_add_iO_adwYw[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Void add_iO_adwYw(Object p0, Int p1, Object p2)
{
Object a0, a1, a2;
Object av0, av2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
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

/*M remove_i_f4d3l: ca.mcgill.sable.util.Collections$UnmodList.remove(I)Ljava/lang/Object; */

Class xt_remove_i_f4d3l[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Object remove_i_f4d3l(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

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

/*M indexOf_O_aQBhU: ca.mcgill.sable.util.Collections$UnmodList.indexOf(Ljava/lang/Object;)I */

Class xt_indexOf_O_aQBhU[] = { 0 };

Int indexOf_O_aQBhU(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-166575961)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M indexOf_Oi_HopyW: ca.mcgill.sable.util.Collections$UnmodList.indexOf(Ljava/lang/Object;I)I */

Class xt_indexOf_Oi_HopyW[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Int indexOf_Oi_HopyW(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	i3 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1868300564)->f)(a1,a2,i3);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M lastIndexOf_O_cJmui: ca.mcgill.sable.util.Collections$UnmodList.lastIndexOf(Ljava/lang/Object;)I */

Class xt_lastIndexOf_O_cJmui[] = { 0 };

Int lastIndexOf_O_cJmui(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-471529677)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M lastIndexOf_Oi_Fzk9E: ca.mcgill.sable.util.Collections$UnmodList.lastIndexOf(Ljava/lang/Object;I)I */

Class xt_lastIndexOf_Oi_Fzk9E[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Int lastIndexOf_Oi_Fzk9E(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	a2 = av1;
	i3 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-266686168)->f)(a1,a2,i3);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeRange_ii_T2Drg: ca.mcgill.sable.util.Collections$UnmodList.removeRange(II)V */

Class xt_removeRange_ii_T2Drg[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Void removeRange_ii_T2Drg(Object p0, Int p1, Int p2)
{
Object a0, a1, a2;
Object av0;
Int iv1, iv2;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	iv2 = p2;

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

/*M addAll_iC_RibtZ: ca.mcgill.sable.util.Collections$UnmodList.addAll(ILca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_iC_RibtZ[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Boolean addAll_iC_RibtZ(Object p0, Int p1, Object p2)
{
Object a0, a1, a2;
Object av0, av2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
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

/*M toString__OOlky: ca.mcgill.sable.util.Collections$UnmodList.toString()Ljava/lang/String; */

Class xt_toString__OOlky[] = { 0 };

Object toString__OOlky(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a1)->l;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Object*)a1)->class->M.
		toString__4d9OF.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M iterator__MGT9W: ca.mcgill.sable.util.Collections$UnmodList.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__MGT9W[] = { 0 };

Object iterator__MGT9W(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Coll_BuHAM.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a3)->l;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1180110655)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_I_KI1TW(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listIterator__Y0qoS: ca.mcgill.sable.util.Collections$UnmodList.listIterator()Lca/mcgill/sable/util/ListIterator; */

Class xt_listIterator__Y0qoS[] = { 0 };

Object listIterator__Y0qoS(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Coll_vDien.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a3)->l;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1179988603)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_L_SHPWo(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listIterator_i_37Pw3: ca.mcgill.sable.util.Collections$UnmodList.listIterator(I)Lca/mcgill/sable/util/ListIterator; */

Class xt_listIterator_i_37Pw3[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

Object listIterator_i_37Pw3(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Coll_vDien.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Coll_FfXDi*)a3)->l;
	i4 = iv1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,426597750)->f)(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_L_SHPWo(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Coll_FfXDi[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','o','l','l','e','c','t','i','o','n','s','$','U','n','m',
'o','d','L','i','s','t'};

const void *st_ca_mcgill_sable_util_Coll_FfXDi[] = {
    ch_ca_mcgill_sable_util_Coll_FfXDi+42,	/* 0. ca.mcgill.sable.util.Collections$UnmodLi */
    0};
