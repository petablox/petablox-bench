/*  ca_mcgill_sable_soot_jimple_ArraySparseSet$SparseArrayList.c -- from Java class ca.mcgill.sable.soot.jimple.ArraySparseSet$SparseArrayList  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ArraySparseSet$SparseArrayList.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_ArraySparseSet.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_uojgQ.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_uojgQ[];
extern const void *st_ca_mcgill_sable_soot_jimp_uojgQ[];
extern Class xt_init_aOi_XyNmh[];
extern Class xt_get_i_CZ9bB[];
extern Class xt_set_iO_61Ice[];
extern Class xt_size__lvonD[];
extern Class xt_clone__0UFY7[];

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
/*  1ee.  4cc675ee  (1ee)  removeAll  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390934606, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.clear__zWYtB, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.add_O_PVrqV, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1864544106, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.addAll_iC_17PxW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -166575961, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.indexOf_O_eZvQQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1247717038, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.get_i_CZ9bB, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.iterator__EVXsw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    784781002, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.set_iO_61Ice, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.toArray_aO_bJpag,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1868300564, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.indexOf_Oi_5OUnT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.containsAll_C_6vFga,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.contains_O_302Uk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -266686168, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.lastIndexOf_Oi_3HCgz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -471529677, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.lastIndexOf_O_6hWon,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1266716493, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.add_iO_yOnCL,
    -1028981426, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.equals_O_FBGze,
    0, 0,
    -2094093488, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.removeRange_ii_5Ilrr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.hashCode__kHBbs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    426597750, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.listIterator_i_PcIuL,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1378307708, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.remove_i_NSWVQ,
    -1179988603, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.listIterator__OayEl,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.isEmpty__pVAEs, 0, 0,
    0, 0, 0, 0,
    2095947698, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.toArray__DAHJZ, 0, 0,
    0, 0, -1646441547, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.size__lvonD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -936165947, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.remove_O_kFhHf, 0, 0,
    0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.addAll_C_MDtDx,
    0, 0,
    -1715782197, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.retainAll_C_048uu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1288074734, &cl_ca_mcgill_sable_soot_jimp_uojgQ.M.removeAll_C_hhL65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(58) nmchars = {&acl_char, 0, 58, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','r','r','a','y','S','p','a',
'r','s','e','S','e','t','$','S','p','a','r','s','e','A','r','r','a','y',
'L','i','s','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 58 };
static const Char nmiv_0[] = {
'm','o','d','C','o','u','n','t'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'a','r','r','a','y'};
static const Char sgiv_1[] = {
'[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';'};
static const Char nmiv_2[] = {
'r','e','a','l','S','i','z','e'};
static const Char sgiv_2[] = {
'I'};
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
's','e','t'};
static const Char sgim_25[] = {
'(','I','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_26[] = {
'a','d','d'};
static const Char sgim_26[] = {
'(','I','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','V'};
static const Char nmim_27[] = {
'r','e','m','o','v','e'};
static const Char sgim_27[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_28[] = {
'i','n','d','e','x','O','f'};
static const Char sgim_28[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','I'};
static const Char nmim_29[] = {
'i','n','d','e','x','O','f'};
static const Char sgim_29[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','I',')','I'};
static const Char nmim_30[] = {
'l','a','s','t','I','n','d','e','x','O','f'};
static const Char sgim_30[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','I'};
static const Char nmim_31[] = {
'l','a','s','t','I','n','d','e','x','O','f'};
static const Char sgim_31[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','I',')','I'};
static const Char nmim_32[] = {
'r','e','m','o','v','e','R','a','n','g','e'};
static const Char sgim_32[] = {
'(','I','I',')','V'};
static const Char nmim_33[] = {
'a','d','d','A','l','l'};
static const Char sgim_33[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')',
'Z'};
static const Char nmim_34[] = {
'l','i','s','t','I','t','e','r','a','t','o','r'};
static const Char sgim_34[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t','I','t','e','r','a','t','o','r',
';'};
static const Char nmim_35[] = {
'l','i','s','t','I','t','e','r','a','t','o','r'};
static const Char sgim_35[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','L','i','s','t','I','t','e','r','a','t','o',
'r',';'};
static const Char nmim_36[] = {
'g','e','t'};
static const Char sgim_36[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e',
'c','t',';'};
static const Char nmim_37[] = {
'<','i','n','i','t','>'};
static const Char sgim_37[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';','I',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_uojgQ, modCount), 0,(const Char *)&nmiv_0,8,(const Char *)&sgiv_0,1,0,0x84,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_uojgQ, array), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,19,1,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_uojgQ, realSize), 0,(const Char *)&nmiv_2,8,(const Char *)&sgiv_2,1,1,0x2,1}, 
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
} inr_ca_mcgill_sable_soot_jimp_uojgQ = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_uojgQ.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_uojgQ cl_ca_mcgill_sable_soot_jimp_uojgQ = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_uojgQ),
    38,
    0,
    3,
    0,
    4, supers,
    2, 0, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_uojgQ,
    st_ca_mcgill_sable_soot_jimp_uojgQ,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_uojgQ,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__eqkIO,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,15,0},
	{TMIT_native_code, clone__0UFY7,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x1,4,xt_clone__0UFY7},
	{TMIT_native_code, equals_O_FBGze,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,13,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__kHBbs,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x8001,14,0},
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
	{TMIT_native_code, add_O_PVrqV,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,21,0,0x8001,0,0},
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
	{TMIT_native_code, size__lvonD,(const Char *)&nmim_23,4,
	(const Char *)&sgim_23,3,1,0x8001,3,xt_size__lvonD},
	{TMIT_native_code, iterator__EVXsw,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,33,0,0x8001,10,0},
	{TMIT_native_code, set_iO_61Ice,(const Char *)&nmim_25,3,
	(const Char *)&sgim_25,39,1,0x8001,2,xt_set_iO_61Ice},
	{TMIT_native_code, add_iO_yOnCL,(const Char *)&nmim_26,3,
	(const Char *)&sgim_26,22,0,0x8001,2,0},
	{TMIT_native_code, remove_i_NSWVQ,(const Char *)&nmim_27,6,
	(const Char *)&sgim_27,21,0,0x8001,3,0},
	{TMIT_native_code, indexOf_O_eZvQQ,(const Char *)&nmim_28,7,
	(const Char *)&sgim_28,21,0,0x8001,4,0},
	{TMIT_native_code, indexOf_Oi_5OUnT,(const Char *)&nmim_29,7,
	(const Char *)&sgim_29,22,0,0x8001,5,0},
	{TMIT_native_code, lastIndexOf_O_6hWon,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,21,0,0x8001,6,0},
	{TMIT_native_code, lastIndexOf_Oi_3HCgz,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,22,0,0x8001,7,0},
	{TMIT_native_code, removeRange_ii_5Ilrr,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,5,0,0x8001,8,0},
	{TMIT_native_code, addAll_iC_17PxW,(const Char *)&nmim_33,6,
	(const Char *)&sgim_33,37,0,0x8001,9,0},
	{TMIT_native_code, listIterator__OayEl,(const Char *)&nmim_34,12,
	(const Char *)&sgim_34,37,0,0x8001,11,0},
	{TMIT_native_code, listIterator_i_PcIuL,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,38,0,0x8001,12,0},
	{TMIT_native_code, get_i_CZ9bB,(const Char *)&nmim_36,3,
	(const Char *)&sgim_36,21,1,0x8001,1,xt_get_i_CZ9bB},
	{TMIT_native_code, init_aOi_XyNmh,(const Char *)&nmim_37,6,
	(const Char *)&sgim_37,23,1,0x1,0,xt_init_aOi_XyNmh},
    } /* end of methodsigs */
};


/*M init_aOi_XyNmh: ca.mcgill.sable.soot.jimple.ArraySparseSet$SparseArrayList.<init>([Ljava/lang/Object;I)V */

Class xt_init_aOi_XyNmh[] = { 0 };

Void init_aOi_XyNmh(Object p0, Object p1, Int p2)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__eqkIO(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_uojgQ*)a1)->array = a2;
	a1 = av0;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_uojgQ*)a1)->realSize = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_i_CZ9bB: ca.mcgill.sable.soot.jimple.ArraySparseSet$SparseArrayList.get(I)Ljava/lang/Object; */

Class xt_get_i_CZ9bB[] = { 0 };

Object get_i_CZ9bB(Object p0, Int p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_uojgQ*)a1)->array;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M set_iO_61Ice: ca.mcgill.sable.soot.jimple.ArraySparseSet$SparseArrayList.set(ILjava/lang/Object;)Ljava/lang/Object; */

Class xt_set_iO_61Ice[] = { 0 };

Object set_iO_61Ice(Object p0, Int p1, Object p2)
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

/*M size__lvonD: ca.mcgill.sable.soot.jimple.ArraySparseSet$SparseArrayList.size()I */

Class xt_size__lvonD[] = { 0 };

Int size__lvonD(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_uojgQ*)a1)->realSize;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__0UFY7: ca.mcgill.sable.soot.jimple.ArraySparseSet$SparseArrayList.clone()Ljava/lang/Object; */

Class xt_clone__0UFY7[] = { 0 };

Object clone__0UFY7(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_uojgQ*)a1)->array;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Object*)a1)->class->M.
		clone__dslwm.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_uojgQ[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','r','r','a','y','S','p','a',
'r','s','e','S','e','t','$','S','p','a','r','s','e','A','r','r','a','y',
'L','i','s','t'};

const void *st_ca_mcgill_sable_soot_jimp_uojgQ[] = {
    ch_ca_mcgill_sable_soot_jimp_uojgQ+58,	/* 0. ca.mcgill.sable.soot.jimple.ArraySparseS */
    0};
