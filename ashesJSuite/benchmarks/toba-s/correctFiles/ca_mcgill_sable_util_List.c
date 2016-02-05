/*  ca_mcgill_sable_util_List.c -- from Java class ca.mcgill.sable.util.List  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_ClassCastException.h"
#include "java_lang_IllegalArgumentException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_ClassCastException.C,
    &cl_java_lang_IllegalArgumentException.C,
};

extern const Char ch_ca_mcgill_sable_util_List[];
extern const void *st_ca_mcgill_sable_util_List[];
extern Class xt_size__K5dGL[];
extern Class xt_isEmpty__vNJd7[];
extern Class xt_contains_O_DBONr[];
extern Class xt_iterator__y7a4G[];
extern Class xt_toArray__dWRjB[];
extern Class xt_toArray_aO_nKh4g[];
extern Class xt_add_O_jm4YW[];
extern Class xt_remove_O_qdGTr[];
extern Class xt_containsAll_C_SSZ1o[];
extern Class xt_addAll_C_UQIVP[];
extern Class xt_removeAll_C_NIXyM[];
extern Class xt_retainAll_C_wvkWb[];
extern Class xt_clear__VoyPB[];
extern Class xt_equals_O_zFeCl[];
extern Class xt_hashCode__oyO3C[];
extern Class xt_get_i_BOKFJ[];
extern Class xt_set_iO_TTrWA[];
extern Class xt_add_iO_UWqIa[];
extern Class xt_remove_i_HWuYX[];
extern Class xt_indexOf_O_cnNRO[];
extern Class xt_indexOf_Oi_T6i9I[];
extern Class xt_lastIndexOf_O_Wi0Qp[];
extern Class xt_lastIndexOf_Oi_zgFIQ[];
extern Class xt_removeRange_ii_VZnRx[];
extern Class xt_addAll_iC_lqOH0[];
extern Class xt_listIterator__OvJ91[];
extern Class xt_listIterator_i_ZeT4V[];

#define HASHMASK 0x1ff
/*  4e.  174d304e  (4e)  clear  */
/*  64.  56145a64  (64)  add  */
/*  6f.  489f8e6f  (6f)  toString  */
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
    390934606, &cl_ca_mcgill_sable_util_List.M.clear__VoyPB, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_List.M.add_O_jm4YW, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_util_List.M.toString__4d9OF, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_List.M.iterator__y7a4G, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_List.M.toArray_aO_nKh4g, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_List.M.containsAll_C_SSZ1o, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_List.M.contains_O_DBONr, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_List.M.equals_O_zFeCl, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_List.M.hashCode__oyO3C, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_List.M.isEmpty__vNJd7, 0, 0, 0, 0,
    0, 0, 2095947698, &cl_ca_mcgill_sable_util_List.M.toArray__dWRjB, 0, 0,
    0, 0, -1646441547, &cl_ca_mcgill_sable_util_List.M.size__K5dGL, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -936165947, &cl_ca_mcgill_sable_util_List.M.remove_O_qdGTr,
    0, 0, 0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_List.M.addAll_C_UQIVP, 0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_List.M.retainAll_C_wvkWb, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_List.M.clone__dslwm, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1288074734, &cl_ca_mcgill_sable_util_List.M.removeAll_C_NIXyM,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(25) nmchars = {&acl_char, 0, 25, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','s','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 25 };
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
'c','o','n','t','a','i','n','s'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_15[] = {
'i','t','e','r','a','t','o','r'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','t','e','r','a','t','o','r',';'};
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
'l','i','s','t','I','t','e','r','a','t','o','r'};
static const Char sgim_35[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t','I','t','e','r','a','t','o','r',
';'};
static const Char nmim_36[] = {
'l','i','s','t','I','t','e','r','a','t','o','r'};
static const Char sgim_36[] = {
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
    {0}
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
} inr_ca_mcgill_sable_util_List = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_List.C.classclass, 0};

struct cl_ca_mcgill_sable_util_List cl_ca_mcgill_sable_util_List = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_List),
    37,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_util_List,
    st_ca_mcgill_sable_util_List,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_List,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_abstract, 0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x8401,13,xt_equals_O_zFeCl},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_abstract, 0,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x8401,14,xt_hashCode__oyO3C},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_abstract, 0,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x8401,0,xt_size__K5dGL},
	{TMIT_abstract, 0,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8401,1,xt_isEmpty__vNJd7},
	{TMIT_abstract, 0,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,21,1,0x8401,2,xt_contains_O_DBONr},
	{TMIT_abstract, 0,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,33,1,0x8401,3,xt_iterator__y7a4G},
	{TMIT_abstract, 0,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,21,1,0x8401,4,xt_toArray__dWRjB},
	{TMIT_abstract, 0,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,22,1,0x8401,5,xt_toArray_aO_nKh4g},
	{TMIT_abstract, 0,(const Char *)&nmim_18,3,
	(const Char *)&sgim_18,21,1,0x8401,6,xt_add_O_jm4YW},
	{TMIT_abstract, 0,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,21,1,0x8401,7,xt_remove_O_qdGTr},
	{TMIT_abstract, 0,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,36,1,0x8401,8,xt_containsAll_C_SSZ1o},
	{TMIT_abstract, 0,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,36,1,0x8401,9,xt_addAll_C_UQIVP},
	{TMIT_abstract, 0,(const Char *)&nmim_22,9,
	(const Char *)&sgim_22,36,1,0x8401,10,xt_removeAll_C_NIXyM},
	{TMIT_abstract, 0,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,36,1,0x8401,11,xt_retainAll_C_wvkWb},
	{TMIT_abstract, 0,(const Char *)&nmim_24,5,
	(const Char *)&sgim_24,3,1,0x8401,12,xt_clear__VoyPB},
	{TMIT_abstract, 0,(const Char *)&nmim_25,3,
	(const Char *)&sgim_25,21,1,0x401,15,xt_get_i_BOKFJ},
	{TMIT_abstract, 0,(const Char *)&nmim_26,3,
	(const Char *)&sgim_26,39,1,0x401,16,xt_set_iO_TTrWA},
	{TMIT_abstract, 0,(const Char *)&nmim_27,3,
	(const Char *)&sgim_27,22,1,0x401,17,xt_add_iO_UWqIa},
	{TMIT_abstract, 0,(const Char *)&nmim_28,6,
	(const Char *)&sgim_28,21,1,0x401,18,xt_remove_i_HWuYX},
	{TMIT_abstract, 0,(const Char *)&nmim_29,7,
	(const Char *)&sgim_29,21,1,0x401,19,xt_indexOf_O_cnNRO},
	{TMIT_abstract, 0,(const Char *)&nmim_30,7,
	(const Char *)&sgim_30,22,1,0x401,20,xt_indexOf_Oi_T6i9I},
	{TMIT_abstract, 0,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,21,1,0x401,21,xt_lastIndexOf_O_Wi0Qp},
	{TMIT_abstract, 0,(const Char *)&nmim_32,11,
	(const Char *)&sgim_32,22,1,0x401,22,xt_lastIndexOf_Oi_zgFIQ},
	{TMIT_abstract, 0,(const Char *)&nmim_33,11,
	(const Char *)&sgim_33,5,1,0x401,23,xt_removeRange_ii_VZnRx},
	{TMIT_abstract, 0,(const Char *)&nmim_34,6,
	(const Char *)&sgim_34,37,1,0x401,24,xt_addAll_iC_lqOH0},
	{TMIT_abstract, 0,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,37,1,0x401,25,xt_listIterator__OvJ91},
	{TMIT_abstract, 0,(const Char *)&nmim_36,12,
	(const Char *)&sgim_36,38,1,0x401,26,xt_listIterator_i_ZeT4V},
    } /* end of methodsigs */
};


/*M size__K5dGL: ca.mcgill.sable.util.List.size()I */

Class xt_size__K5dGL[] = { 0 };

/*M isEmpty__vNJd7: ca.mcgill.sable.util.List.isEmpty()Z */

Class xt_isEmpty__vNJd7[] = { 0 };

/*M contains_O_DBONr: ca.mcgill.sable.util.List.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_DBONr[] = { 0 };

/*M iterator__y7a4G: ca.mcgill.sable.util.List.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__y7a4G[] = { 0 };

/*M toArray__dWRjB: ca.mcgill.sable.util.List.toArray()[Ljava/lang/Object; */

Class xt_toArray__dWRjB[] = { 0 };

/*M toArray_aO_nKh4g: ca.mcgill.sable.util.List.toArray([Ljava/lang/Object;)V */

Class xt_toArray_aO_nKh4g[] = { 0 };

/*M add_O_jm4YW: ca.mcgill.sable.util.List.add(Ljava/lang/Object;)Z */

Class xt_add_O_jm4YW[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

/*M remove_O_qdGTr: ca.mcgill.sable.util.List.remove(Ljava/lang/Object;)Z */

Class xt_remove_O_qdGTr[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M containsAll_C_SSZ1o: ca.mcgill.sable.util.List.containsAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_containsAll_C_SSZ1o[] = { 0 };

/*M addAll_C_UQIVP: ca.mcgill.sable.util.List.addAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_C_UQIVP[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

/*M removeAll_C_NIXyM: ca.mcgill.sable.util.List.removeAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_removeAll_C_NIXyM[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M retainAll_C_wvkWb: ca.mcgill.sable.util.List.retainAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_retainAll_C_wvkWb[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M clear__VoyPB: ca.mcgill.sable.util.List.clear()V */

Class xt_clear__VoyPB[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M equals_O_zFeCl: ca.mcgill.sable.util.List.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_zFeCl[] = { 0 };

/*M hashCode__oyO3C: ca.mcgill.sable.util.List.hashCode()I */

Class xt_hashCode__oyO3C[] = { 0 };

/*M get_i_BOKFJ: ca.mcgill.sable.util.List.get(I)Ljava/lang/Object; */

Class xt_get_i_BOKFJ[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M set_iO_TTrWA: ca.mcgill.sable.util.List.set(ILjava/lang/Object;)Ljava/lang/Object; */

Class xt_set_iO_TTrWA[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M add_iO_UWqIa: ca.mcgill.sable.util.List.add(ILjava/lang/Object;)V */

Class xt_add_iO_UWqIa[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M remove_i_HWuYX: ca.mcgill.sable.util.List.remove(I)Ljava/lang/Object; */

Class xt_remove_i_HWuYX[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M indexOf_O_cnNRO: ca.mcgill.sable.util.List.indexOf(Ljava/lang/Object;)I */

Class xt_indexOf_O_cnNRO[] = { 0 };

/*M indexOf_Oi_T6i9I: ca.mcgill.sable.util.List.indexOf(Ljava/lang/Object;I)I */

Class xt_indexOf_Oi_T6i9I[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M lastIndexOf_O_Wi0Qp: ca.mcgill.sable.util.List.lastIndexOf(Ljava/lang/Object;)I */

Class xt_lastIndexOf_O_Wi0Qp[] = { 0 };

/*M lastIndexOf_Oi_zgFIQ: ca.mcgill.sable.util.List.lastIndexOf(Ljava/lang/Object;I)I */

Class xt_lastIndexOf_Oi_zgFIQ[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M removeRange_ii_VZnRx: ca.mcgill.sable.util.List.removeRange(II)V */

Class xt_removeRange_ii_VZnRx[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M addAll_iC_lqOH0: ca.mcgill.sable.util.List.addAll(ILca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_iC_lqOH0[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };

/*M listIterator__OvJ91: ca.mcgill.sable.util.List.listIterator()Lca/mcgill/sable/util/ListIterator; */

Class xt_listIterator__OvJ91[] = { 0 };

/*M listIterator_i_ZeT4V: ca.mcgill.sable.util.List.listIterator(I)Lca/mcgill/sable/util/ListIterator; */

Class xt_listIterator_i_ZeT4V[] = { &cl_ca_mcgill_sable_util_ArrayIndexOutOfBoundsException.C, 0 };



const Char ch_ca_mcgill_sable_util_List[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','s','t'};

const void *st_ca_mcgill_sable_util_List[] = {
    ch_ca_mcgill_sable_util_List+25,	/* 0. ca.mcgill.sable.util.List */
    0};
