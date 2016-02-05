/*  ca_mcgill_sable_util_AbstractList.c -- from Java class ca.mcgill.sable.util.AbstractList  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_AbstractList$AbstractListIterator.h"
#include "ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Abst_HwYnE.C,
    &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_ListIterator.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
};

extern const Char ch_ca_mcgill_sable_util_AbstractList[];
extern const void *st_ca_mcgill_sable_util_AbstractList[];
extern Class xt_add_O_PVrqV[];
extern Class xt_set_iO_rQGu0[];
extern Class xt_add_iO_yOnCL[];
extern Class xt_remove_i_NSWVQ[];
extern Class xt_indexOf_O_eZvQQ[];
extern Class xt_indexOf_Oi_5OUnT[];
extern Class xt_lastIndexOf_O_6hWon[];
extern Class xt_lastIndexOf_Oi_3HCgz[];
extern Class xt_removeRange_ii_5Ilrr[];
extern Class xt_addAll_iC_17PxW[];
extern Class xt_iterator__EVXsw[];
extern Class xt_listIterator__OayEl[];
extern Class xt_listIterator_i_PcIuL[];
extern Class xt_equals_O_FBGze[];
extern Class xt_hashCode__kHBbs[];
extern Class xt_init__eqkIO[];
extern Class xt_get_i_7o88I[];

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
    390934606, &cl_ca_mcgill_sable_util_AbstractList.M.clear__zWYtB, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_AbstractList.M.add_O_PVrqV, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1864544106, &cl_ca_mcgill_sable_util_AbstractList.M.addAll_iC_17PxW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -166575961, &cl_ca_mcgill_sable_util_AbstractList.M.indexOf_O_eZvQQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1247717038, &cl_ca_mcgill_sable_util_AbstractList.M.get_i_7o88I, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_AbstractList.M.iterator__EVXsw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    784781002, &cl_ca_mcgill_sable_util_AbstractList.M.set_iO_rQGu0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_AbstractList.M.toArray_aO_bJpag,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1868300564, &cl_ca_mcgill_sable_util_AbstractList.M.indexOf_Oi_5OUnT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_AbstractList.M.containsAll_C_6vFga,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_AbstractList.M.contains_O_302Uk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -266686168, &cl_ca_mcgill_sable_util_AbstractList.M.lastIndexOf_Oi_3HCgz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -471529677, &cl_ca_mcgill_sable_util_AbstractList.M.lastIndexOf_O_6hWon,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1266716493, &cl_ca_mcgill_sable_util_AbstractList.M.add_iO_yOnCL,
    -1028981426, &cl_ca_mcgill_sable_util_AbstractList.M.equals_O_FBGze,
    0, 0,
    -2094093488, &cl_ca_mcgill_sable_util_AbstractList.M.removeRange_ii_5Ilrr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_AbstractList.M.hashCode__kHBbs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    426597750, &cl_ca_mcgill_sable_util_AbstractList.M.listIterator_i_PcIuL,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1378307708, &cl_ca_mcgill_sable_util_AbstractList.M.remove_i_NSWVQ,
    -1179988603, &cl_ca_mcgill_sable_util_AbstractList.M.listIterator__OayEl,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_AbstractList.M.isEmpty__pVAEs,
    0, 0, 0, 0, 0, 0,
    2095947698, &cl_ca_mcgill_sable_util_AbstractList.M.toArray__DAHJZ,
    0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_util_AbstractList.M.size__gPvmD, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -936165947, &cl_ca_mcgill_sable_util_AbstractList.M.remove_O_kFhHf,
    0, 0, 0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_AbstractList.M.addAll_C_MDtDx,
    0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_AbstractList.M.retainAll_C_048uu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_AbstractList.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1288074734, &cl_ca_mcgill_sable_util_AbstractList.M.removeAll_C_hhL65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(33) nmchars = {&acl_char, 0, 33, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','L','i','s','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 33 };
static const Char nmiv_0[] = {
'm','o','d','C','o','u','n','t'};
static const Char sgiv_0[] = {
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_AbstractList, modCount), 0,(const Char *)&nmiv_0,8,(const Char *)&sgiv_0,1,1,0x84,0}, 
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
} inr_ca_mcgill_sable_util_AbstractList = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_AbstractList.C.classclass, 0};

struct cl_ca_mcgill_sable_util_AbstractList cl_ca_mcgill_sable_util_AbstractList = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_AbstractList),
    37,
    0,
    1,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_AbstractList,
    st_ca_mcgill_sable_util_AbstractList,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_AbstractList,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__eqkIO,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,15,xt_init__eqkIO},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_FBGze,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x8001,13,xt_equals_O_FBGze},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__kHBbs,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x8001,14,xt_hashCode__kHBbs},
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
	(const Char *)&sgim_16,21,1,0x8001,0,xt_add_O_PVrqV},
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
	{TMIT_abstract, 0,(const Char *)&nmim_23,4,
	(const Char *)&sgim_23,3,0,0x8401,13,0},
	{TMIT_native_code, iterator__EVXsw,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,33,1,0x8001,10,xt_iterator__EVXsw},
	{TMIT_native_code, set_iO_rQGu0,(const Char *)&nmim_25,3,
	(const Char *)&sgim_25,39,1,0x8001,1,xt_set_iO_rQGu0},
	{TMIT_native_code, add_iO_yOnCL,(const Char *)&nmim_26,3,
	(const Char *)&sgim_26,22,1,0x8001,2,xt_add_iO_yOnCL},
	{TMIT_native_code, remove_i_NSWVQ,(const Char *)&nmim_27,6,
	(const Char *)&sgim_27,21,1,0x8001,3,xt_remove_i_NSWVQ},
	{TMIT_native_code, indexOf_O_eZvQQ,(const Char *)&nmim_28,7,
	(const Char *)&sgim_28,21,1,0x8001,4,xt_indexOf_O_eZvQQ},
	{TMIT_native_code, indexOf_Oi_5OUnT,(const Char *)&nmim_29,7,
	(const Char *)&sgim_29,22,1,0x8001,5,xt_indexOf_Oi_5OUnT},
	{TMIT_native_code, lastIndexOf_O_6hWon,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,21,1,0x8001,6,xt_lastIndexOf_O_6hWon},
	{TMIT_native_code, lastIndexOf_Oi_3HCgz,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,22,1,0x8001,7,xt_lastIndexOf_Oi_3HCgz},
	{TMIT_native_code, removeRange_ii_5Ilrr,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,5,1,0x8001,8,xt_removeRange_ii_5Ilrr},
	{TMIT_native_code, addAll_iC_17PxW,(const Char *)&nmim_33,6,
	(const Char *)&sgim_33,37,1,0x8001,9,xt_addAll_iC_17PxW},
	{TMIT_native_code, listIterator__OayEl,(const Char *)&nmim_34,12,
	(const Char *)&sgim_34,37,1,0x8001,11,xt_listIterator__OayEl},
	{TMIT_native_code, listIterator_i_PcIuL,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,38,1,0x8001,12,xt_listIterator_i_PcIuL},
	{TMIT_abstract, 0,(const Char *)&nmim_36,3,
	(const Char *)&sgim_36,21,1,0x8401,16,xt_get_i_7o88I},
    } /* end of methodsigs */
};


/*M add_O_PVrqV: ca.mcgill.sable.util.AbstractList.add(Ljava/lang/Object;)Z */

Class xt_add_O_PVrqV[] = { 0 };

Boolean add_O_PVrqV(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a2)->class->M.
		size__gPvmD.f(a2);
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_iO_yOnCL.f(a1,i2,a3);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M set_iO_rQGu0: ca.mcgill.sable.util.AbstractList.set(ILjava/lang/Object;)Ljava/lang/Object; */

Class xt_set_iO_rQGu0[] = { 0 };

Object set_iO_rQGu0(Object p0, Int p1, Object p2)
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

/*M add_iO_yOnCL: ca.mcgill.sable.util.AbstractList.add(ILjava/lang/Object;)V */

Class xt_add_iO_yOnCL[] = { 0 };

Void add_iO_yOnCL(Object p0, Int p1, Object p2)
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

/*M remove_i_NSWVQ: ca.mcgill.sable.util.AbstractList.remove(I)Ljava/lang/Object; */

Class xt_remove_i_NSWVQ[] = { 0 };

Object remove_i_NSWVQ(Object p0, Int p1)
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

/*M indexOf_O_eZvQQ: ca.mcgill.sable.util.AbstractList.indexOf(Ljava/lang/Object;)I */

Class xt_indexOf_O_eZvQQ[] = { 0 };

Int indexOf_O_eZvQQ(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		size__gPvmD.f(a1);
	if (i1 != 0)
		GOTO(4,L1);
	i1 = -1;
	return i1;

L1:	a1 = av0;
	a2 = av1;
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		indexOf_Oi_5OUnT.f(a1,a2,i3);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M indexOf_Oi_5OUnT: ca.mcgill.sable.util.AbstractList.indexOf(Ljava/lang/Object;I)I */

Class xt_indexOf_Oi_5OUnT[] = { 0 };

Int indexOf_Oi_5OUnT(Object p0, Object p1, Int p2)
{
Object a0, a1, a2;
Object av0, av1, av3;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		listIterator_i_PcIuL.f(a1,i2);
	av3 = a1;
L1:	a1 = av1;
	if (a1 != 0)
		GOTO(7,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if (a1 == 0)
		GOTO(16,L4);
	i1 = 0;
	GOTO(20,L3);

L2:	a1 = av1;
	a2 = av3;
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
		GOTO(33,L5);
L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,1132064151)->f)(a1);
	return i1;

L5:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(49,L1);
	i1 = -1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M lastIndexOf_O_6hWon: ca.mcgill.sable.util.AbstractList.lastIndexOf(Ljava/lang/Object;)I */

Class xt_lastIndexOf_O_6hWon[] = { 0 };

Int lastIndexOf_O_6hWon(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		size__gPvmD.f(a1);
	iv2 = i1;
	i1 = iv2;
	if (i1 != 0)
		GOTO(6,L1);
	i1 = -1;
	return i1;

L1:	a1 = av0;
	a2 = av1;
	i3 = iv2;
	i4 = 1;
	i3 = i3 - i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		lastIndexOf_Oi_3HCgz.f(a1,a2,i3);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M lastIndexOf_Oi_3HCgz: ca.mcgill.sable.util.AbstractList.lastIndexOf(Ljava/lang/Object;I)I */

Class xt_lastIndexOf_Oi_3HCgz[] = { 0 };

Int lastIndexOf_Oi_3HCgz(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av3;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	i2 = iv2;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		listIterator_i_PcIuL.f(a1,i2);
	av3 = a1;
	GOTO(8,L5);

L1:	a1 = av1;
	if (a1 != 0)
		GOTO(12,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1192131050)->f)(a1);
	if (a1 == 0)
		GOTO(21,L4);
	i1 = 0;
	GOTO(25,L3);

L2:	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1192131050)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
L3:	if (i1 == 0)
		GOTO(38,L5);
L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,859221097)->f)(a1);
	return i1;

L5:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-2100818652)->f)(a1);
	if (i1 != 0)
		GOBACK(54,L1);
	i1 = -1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeRange_ii_5Ilrr: ca.mcgill.sable.util.AbstractList.removeRange(II)V */

Class xt_removeRange_ii_5Ilrr[] = { 0 };

Void removeRange_ii_5Ilrr(Object p0, Int p1, Int p2)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1, iv2, iv3, iv4, iv5;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		size__gPvmD.f(a1);
	iv3 = i1;
	i1 = iv1;
	if (i1 < 0)
		GOTO(6,L1);
	i1 = iv1;
	i2 = iv3;
	if (i1 >= i2)
		GOTO(11,L1);
	i1 = iv2;
	i2 = iv3;
	if (i1 > i2)
		GOTO(16,L1);
	i1 = iv2;
	i2 = iv1;
	if (i1 >= i2)
		GOTO(21,L2);
L1:	a1 = new(&cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__KnAPa(a2);
	athrow(a1);

L2:	i1 = iv2;
	i2 = iv1;
	i1 = i1 - i2;
	iv4 = i1;
	i1 = 0;
	iv5 = i1;
	GOTO(40,L4);

L3:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		remove_i_NSWVQ.f(a1,i2);
	iv5 += 1;
L4:	i1 = iv5;
	i2 = iv4;
	if (i1 < i2)
		GOBACK(56,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addAll_iC_17PxW: ca.mcgill.sable.util.AbstractList.addAll(ILca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_iC_17PxW[] = { 0 };

Boolean addAll_iC_17PxW(Object p0, Int p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av2, av4;
Int i0, i1, i2, i3;
Int iv1, iv3;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	av2 = p2;

L0:	i1 = 0;
	iv3 = i1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av4 = a1;
	GOTO(10,L2);

L1:	a1 = av0;
	i2 = iv1;
	iv1 += 1;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_iO_yOnCL.f(a1,i2,a3);
	i1 = 1;
	iv3 = i1;
L2:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(37,L1);
	i1 = iv3;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M iterator__EVXsw: ca.mcgill.sable.util.AbstractList.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__EVXsw[] = { 0 };

Object iterator__EVXsw(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		listIterator__OayEl.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listIterator__OayEl: ca.mcgill.sable.util.AbstractList.listIterator()Lca/mcgill/sable/util/ListIterator; */

Class xt_listIterator__OayEl[] = { 0 };

Object listIterator__OayEl(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		listIterator_i_PcIuL.f(a1,i2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listIterator_i_PcIuL: ca.mcgill.sable.util.AbstractList.listIterator(I)Lca/mcgill/sable/util/ListIterator; */

Class xt_listIterator_i_PcIuL[] = { 0 };

Object listIterator_i_PcIuL(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Abst_HwYnE.C);
	a2 = a1;
	a3 = av0;
	i4 = iv1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_Ai_PueOP(a2,a3,i4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_FBGze: ca.mcgill.sable.util.AbstractList.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_FBGze[] = { 0 };

Boolean equals_O_FBGze(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
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
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_List.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(11,L2);
	i1 = 0;
	return i1;

L2:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_List.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		iterator__EVXsw.f(a1);
	av4 = a1;
	GOTO(34,L5);

L3:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOTO(43,L4);
	i1 = 0;
	return i1;

L4:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(64,L5);
	i1 = 0;
	return i1;

L5:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(76,L3);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(85,L6);
	i1 = 0;
	return i1;

L6:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__kHBbs: ca.mcgill.sable.util.AbstractList.hashCode()I */

Class xt_hashCode__kHBbs[] = { 0 };

Int hashCode__kHBbs(Object p0)
{
Object a0, a1, a2;
Object av0, av2, av3;
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
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		iterator__EVXsw.f(a1);
	av2 = a1;
	GOTO(7,L4);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	av3 = a1;
	i1 = 31;
	i2 = iv1;
	i1 = i1 * i2;
	a2 = av3;
	if (a2 != 0)
		GOTO(22,L2);
	i2 = 0;
	GOTO(26,L3);

L2:	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_Object*)a2)->class->M.
		hashCode__8wJNW.f(a2);
L3:	i1 = i1 + i2;
	iv1 = i1;
L4:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(41,L1);
	i1 = iv1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__eqkIO: ca.mcgill.sable.util.AbstractList.<init>()V */

Class xt_init__eqkIO[] = { 0 };

Void init__eqkIO(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__a6x0C(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_i_7o88I: ca.mcgill.sable.util.AbstractList.get(I)Ljava/lang/Object; */

Class xt_get_i_7o88I[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };



const Char ch_ca_mcgill_sable_util_AbstractList[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','b','s','t','r','a','c','t','L','i','s','t'};

const void *st_ca_mcgill_sable_util_AbstractList[] = {
    ch_ca_mcgill_sable_util_AbstractList+33,	/* 0. ca.mcgill.sable.util.AbstractList */
    0};
