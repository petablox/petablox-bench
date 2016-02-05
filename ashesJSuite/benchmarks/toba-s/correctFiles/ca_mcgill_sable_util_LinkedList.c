/*  ca_mcgill_sable_util_LinkedList.c -- from Java class ca.mcgill.sable.util.LinkedList  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_AbstractSequentialList.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_LinkedList$LinkedListIterator.h"
#include "ca_mcgill_sable_util_LinkedList$Node.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "java_util_NoSuchElementException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_AbstractSequentialList.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_Link_hcQ5L.C,
    &cl_ca_mcgill_sable_util_Link_cHLND.C,
    &cl_ca_mcgill_sable_util_ListIterator.C,
    &cl_java_util_NoSuchElementException.C,
};

extern const Char ch_ca_mcgill_sable_util_LinkedList[];
extern const void *st_ca_mcgill_sable_util_LinkedList[];
extern Class xt_init__Ln3Si[];
extern Class xt_init_C_FyMW9[];
extern Class xt_getFirst__HhPRs[];
extern Class xt_getLast__RCeOy[];
extern Class xt_removeFirst__FxTPP[];
extern Class xt_removeLast__LabF5[];
extern Class xt_addFirst_O_KZQDt[];
extern Class xt_addLast_O_IGCXT[];
extern Class xt_size__ftbuK[];
extern Class xt_clear__wfEbw[];
extern Class xt_listIterator_i_uWiSi[];
extern Class xt_removeNode_L_gsJxp[];
extern Class xt_access0_LL_9iI7h[];

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
    390934606, &cl_ca_mcgill_sable_util_LinkedList.M.clear__wfEbw, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_LinkedList.M.add_O_PVrqV, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1864544106, &cl_ca_mcgill_sable_util_LinkedList.M.addAll_iC_em01K,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -166575961, &cl_ca_mcgill_sable_util_LinkedList.M.indexOf_O_eZvQQ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1247717038, &cl_ca_mcgill_sable_util_LinkedList.M.get_i_KIZFz, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_LinkedList.M.iterator__EVXsw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    784781002, &cl_ca_mcgill_sable_util_LinkedList.M.set_iO_mI8gV, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_LinkedList.M.toArray_aO_bJpag,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1868300564, &cl_ca_mcgill_sable_util_LinkedList.M.indexOf_Oi_5OUnT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_LinkedList.M.containsAll_C_6vFga,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_LinkedList.M.contains_O_302Uk,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -266686168, &cl_ca_mcgill_sable_util_LinkedList.M.lastIndexOf_Oi_3HCgz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -471529677, &cl_ca_mcgill_sable_util_LinkedList.M.lastIndexOf_O_6hWon,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1266716493, &cl_ca_mcgill_sable_util_LinkedList.M.add_iO_pQObA,
    -1028981426, &cl_ca_mcgill_sable_util_LinkedList.M.equals_O_FBGze,
    0, 0,
    -2094093488, &cl_ca_mcgill_sable_util_LinkedList.M.removeRange_ii_Awwy2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_LinkedList.M.hashCode__kHBbs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    426597750, &cl_ca_mcgill_sable_util_LinkedList.M.listIterator_i_uWiSi,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1378307708, &cl_ca_mcgill_sable_util_LinkedList.M.remove_i_gIMQT,
    -1179988603, &cl_ca_mcgill_sable_util_LinkedList.M.listIterator__OayEl,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_LinkedList.M.isEmpty__pVAEs, 0, 0,
    0, 0, 0, 0,
    2095947698, &cl_ca_mcgill_sable_util_LinkedList.M.toArray__DAHJZ, 0, 0,
    0, 0, -1646441547, &cl_ca_mcgill_sable_util_LinkedList.M.size__ftbuK,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -936165947, &cl_ca_mcgill_sable_util_LinkedList.M.remove_O_kFhHf, 0, 0,
    0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_LinkedList.M.addAll_C_MDtDx,
    0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_LinkedList.M.retainAll_C_048uu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_LinkedList.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1288074734, &cl_ca_mcgill_sable_util_LinkedList.M.removeAll_C_hhL65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','n','k','e','d','L','i','s','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmiv_0[] = {
'm','o','d','C','o','u','n','t'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
's','i','z','e'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'f','i','r','s','t'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d',
'e',';'};
static const Char nmiv_3[] = {
'l','a','s','t'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d',
'e',';'};
static const Char nmsm_0[] = {
'a','c','c','e','s','s','$','0'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','n','k','e','d','L','i','s','t',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i',
'l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d','e',';',
')','V'};
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
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','C','o','l','l','e','c','t','i','o','n',';',')','V'};
static const Char nmim_38[] = {
'g','e','t','F','i','r','s','t'};
static const Char sgim_38[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_39[] = {
'g','e','t','L','a','s','t'};
static const Char sgim_39[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_40[] = {
'r','e','m','o','v','e','F','i','r','s','t'};
static const Char sgim_40[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_41[] = {
'r','e','m','o','v','e','L','a','s','t'};
static const Char sgim_41[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_42[] = {
'a','d','d','F','i','r','s','t'};
static const Char sgim_42[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_43[] = {
'a','d','d','L','a','s','t'};
static const Char sgim_43[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_44[] = {
'r','e','m','o','v','e','N','o','d','e'};
static const Char sgim_44[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o',
'd','e',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_LinkedList, modCount), 0,(const Char *)&nmiv_0,8,(const Char *)&sgiv_0,1,0,0x84,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_LinkedList, size), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,1,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_LinkedList, first), 0,(const Char *)&nmiv_2,5,(const Char *)&sgiv_2,38,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_LinkedList, last), 0,(const Char *)&nmiv_3,4,(const Char *)&sgiv_3,38,1,0x0,2}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())access0_LL_9iI7h,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,74,
	1,0x8,12,xt_access0_LL_9iI7h},
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
} inr_ca_mcgill_sable_util_LinkedList = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_LinkedList.C.classclass, 0};

struct cl_ca_mcgill_sable_util_LinkedList cl_ca_mcgill_sable_util_LinkedList = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_LinkedList),
    45,
    1,
    4,
    0,
    5, supers,
    2, 0, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_LinkedList,
    st_ca_mcgill_sable_util_LinkedList,
    0,
    init__Ln3Si,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_LinkedList,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__Ln3Si,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__Ln3Si},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
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
	{TMIT_native_code, clear__wfEbw,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,3,1,0x8001,9,xt_clear__wfEbw},
	{TMIT_native_code, size__ftbuK,(const Char *)&nmim_23,4,
	(const Char *)&sgim_23,3,1,0x8001,8,xt_size__ftbuK},
	{TMIT_native_code, iterator__EVXsw,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,33,0,0x8001,10,0},
	{TMIT_native_code, set_iO_mI8gV,(const Char *)&nmim_25,3,
	(const Char *)&sgim_25,39,0,0x8001,1,0},
	{TMIT_native_code, add_iO_pQObA,(const Char *)&nmim_26,3,
	(const Char *)&sgim_26,22,0,0x8001,2,0},
	{TMIT_native_code, remove_i_gIMQT,(const Char *)&nmim_27,6,
	(const Char *)&sgim_27,21,0,0x8001,3,0},
	{TMIT_native_code, indexOf_O_eZvQQ,(const Char *)&nmim_28,7,
	(const Char *)&sgim_28,21,0,0x8001,4,0},
	{TMIT_native_code, indexOf_Oi_5OUnT,(const Char *)&nmim_29,7,
	(const Char *)&sgim_29,22,0,0x8001,5,0},
	{TMIT_native_code, lastIndexOf_O_6hWon,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,21,0,0x8001,6,0},
	{TMIT_native_code, lastIndexOf_Oi_3HCgz,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,22,0,0x8001,7,0},
	{TMIT_native_code, removeRange_ii_Awwy2,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,5,0,0x8001,4,0},
	{TMIT_native_code, addAll_iC_em01K,(const Char *)&nmim_33,6,
	(const Char *)&sgim_33,37,0,0x8001,5,0},
	{TMIT_native_code, listIterator__OayEl,(const Char *)&nmim_34,12,
	(const Char *)&sgim_34,37,0,0x8001,11,0},
	{TMIT_native_code, listIterator_i_uWiSi,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,38,1,0x8001,10,xt_listIterator_i_uWiSi},
	{TMIT_native_code, get_i_KIZFz,(const Char *)&nmim_36,3,
	(const Char *)&sgim_36,21,0,0x8001,0,0},
	{TMIT_native_code, init_C_FyMW9,(const Char *)&nmim_37,6,
	(const Char *)&sgim_37,36,1,0x1,1,xt_init_C_FyMW9},
	{TMIT_native_code, getFirst__HhPRs,(const Char *)&nmim_38,8,
	(const Char *)&sgim_38,20,1,0x1,2,xt_getFirst__HhPRs},
	{TMIT_native_code, getLast__RCeOy,(const Char *)&nmim_39,7,
	(const Char *)&sgim_39,20,1,0x1,3,xt_getLast__RCeOy},
	{TMIT_native_code, removeFirst__FxTPP,(const Char *)&nmim_40,11,
	(const Char *)&sgim_40,20,1,0x1,4,xt_removeFirst__FxTPP},
	{TMIT_native_code, removeLast__LabF5,(const Char *)&nmim_41,10,
	(const Char *)&sgim_41,20,1,0x1,5,xt_removeLast__LabF5},
	{TMIT_native_code, addFirst_O_KZQDt,(const Char *)&nmim_42,8,
	(const Char *)&sgim_42,21,1,0x1,6,xt_addFirst_O_KZQDt},
	{TMIT_native_code, addLast_O_IGCXT,(const Char *)&nmim_43,7,
	(const Char *)&sgim_43,21,1,0x1,7,xt_addLast_O_IGCXT},
	{TMIT_native_code, removeNode_L_gsJxp,(const Char *)&nmim_44,10,
	(const Char *)&sgim_44,41,1,0x2,11,xt_removeNode_L_gsJxp},
    } /* end of methodsigs */
};


/*M init__Ln3Si: ca.mcgill.sable.util.LinkedList.<init>()V */

Class xt_init__Ln3Si[] = { 0 };

Void init__Ln3Si(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__924SW(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_C_FyMW9: ca.mcgill.sable.util.LinkedList.<init>(Lca/mcgill/sable/util/Collection;)V */

Class xt_init_C_FyMW9[] = { 0 };

Void init_C_FyMW9(Object p0, Object p1)
{
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
	init__924SW(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		listIterator__OayEl.f(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(16,L2);

L1:	a1 = av2;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1444174432)->f)(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(44,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getFirst__HhPRs: ca.mcgill.sable.util.LinkedList.getFirst()Ljava/lang/Object; */

Class xt_getFirst__HhPRs[] = { 0 };

Object getFirst__HhPRs(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getElement__7hCh6.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLast__RCeOy: ca.mcgill.sable.util.LinkedList.getLast()Ljava/lang/Object; */

Class xt_getLast__RCeOy[] = { 0 };

Object getLast__RCeOy(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getElement__7hCh6.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeFirst__FxTPP: ca.mcgill.sable.util.LinkedList.removeFirst()Ljava/lang/Object; */

Class xt_removeFirst__FxTPP[] = { 0 };

Object removeFirst__FxTPP(Object p0)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getElement__7hCh6.f(a1);
	av1 = a1;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->first;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeNode_L_gsJxp(a1,a2);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeLast__LabF5: ca.mcgill.sable.util.LinkedList.removeLast()Ljava/lang/Object; */

Class xt_removeLast__LabF5[] = { 0 };

Object removeLast__LabF5(Object p0)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last;
	if (a1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getElement__7hCh6.f(a1);
	av1 = a1;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->last;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeNode_L_gsJxp(a1,a2);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addFirst_O_KZQDt: ca.mcgill.sable.util.LinkedList.addFirst(Ljava/lang/Object;)V */

Class xt_addFirst_O_KZQDt[] = { 0 };

Void addFirst_O_KZQDt(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Link_cHLND.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_LO_aAUSu(a2,a3,a4);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first;
	if (a1 != 0)
		GOTO(14,L1);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last = a2;
	GOTO(27,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		setPrevious_L_hdLrK.f(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first = a2;
L2:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractList*)a1)->modCount = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->size;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addLast_O_IGCXT: ca.mcgill.sable.util.LinkedList.addLast(Ljava/lang/Object;)V */

Class xt_addLast_O_IGCXT[] = { 0 };

Void addLast_O_IGCXT(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Link_cHLND.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_LO_aAUSu(a2,a3,a4);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last;
	if (a1 != 0)
		GOTO(14,L1);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first = a2;
	GOTO(27,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		setNext_L_vf7Yh.f(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last = a2;
L2:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractList*)a1)->modCount = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->size;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__ftbuK: ca.mcgill.sable.util.LinkedList.size()I */

Class xt_size__ftbuK[] = { 0 };

Int size__ftbuK(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->size;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__wfEbw: ca.mcgill.sable.util.LinkedList.clear()V */

Class xt_clear__wfEbw[] = { 0 };

Void clear__wfEbw(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	a2 = av0;
	a3 = 0;
	a4 = a3;
	a3 = a2;
	a2 = a4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a3)->last = a4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listIterator_i_uWiSi: ca.mcgill.sable.util.LinkedList.listIterator(I)Lca/mcgill/sable/util/ListIterator; */

Class xt_listIterator_i_uWiSi[] = { 0 };

Object listIterator_i_uWiSi(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Link_hcQ5L.C);
	a2 = a1;
	a3 = av0;
	i4 = iv1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_Li_A9PEl(a2,a3,i4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeNode_L_gsJxp: ca.mcgill.sable.util.LinkedList.removeNode(Lca/mcgill/sable/util/LinkedList$Node;)V */

Class xt_removeNode_L_gsJxp[] = { 0 };

Void removeNode_L_gsJxp(Object p0, Object p1)
{
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getPrevious__xcmt2.f(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		getNext__j2NKA.f(a1);
	av3 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(11,L1);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->first = a2;
	GOTO(19,L2);

L1:	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		setNext_L_vf7Yh.f(a1,a2);
L2:	a1 = av3;
	if (a1 != 0)
		GOTO(28,L3);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->last = a2;
	GOTO(36,L4);

L3:	a1 = av3;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->class->M.
		setPrevious_L_hdLrK.f(a1,a2);
L4:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_AbstractList*)a2)->modCount;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractList*)a1)->modCount = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->size;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->size = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access0_LL_9iI7h: ca.mcgill.sable.util.LinkedList.access$0(Lca/mcgill/sable/util/LinkedList;Lca/mcgill/sable/util/LinkedList$Node;)V */

Class xt_access0_LL_9iI7h[] = { 0 };

Void access0_LL_9iI7h(Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p1;
	av1 = p2;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeNode_L_gsJxp(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_LinkedList[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','n','k','e','d','L','i','s','t'};

const void *st_ca_mcgill_sable_util_LinkedList[] = {
    ch_ca_mcgill_sable_util_LinkedList+31,	/* 0. ca.mcgill.sable.util.LinkedList */
    0};
