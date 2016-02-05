/*  ca_mcgill_sable_util_ArraySet.c -- from Java class ca.mcgill.sable.util.ArraySet  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_ArraySet.h"
#include "ca_mcgill_sable_util_AbstractSet.h"
#include "ca_mcgill_sable_util_Set.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_ArraySet$ArrayIterator.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_ArraySet.C,
    &cl_ca_mcgill_sable_util_AbstractSet.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Set.C,
    &cl_ca_mcgill_sable_util_Collection.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Arra_X1zkZ.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_util_ArraySet[];
extern const void *st_ca_mcgill_sable_util_ArraySet[];
extern Class xt_init__h9XGg[];
extern Class xt_init_aO_iYleh[];
extern Class xt_clear__YKaU3[];
extern Class xt_contains_O_yDA9h[];
extern Class xt_add_O_AzmjU[];
extern Class xt_size__NNiv7[];
extern Class xt_iterator__tdOi9[];
extern Class xt_removeElementAt_i_ZDdMO[];
extern Class xt_doubleCapacity__Gs4iW[];
extern Class xt_toArray__ivg5g[];
extern Class xt_toArray_aO_2II19[];
extern Class xt_access0_A_Ne1jm[];
extern Class xt_access1_A_86acp[];
extern Class xt_access2_Ai_VScBu[];

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
    390934606, &cl_ca_mcgill_sable_util_ArraySet.M.clear__YKaU3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1444174436, &cl_ca_mcgill_sable_util_ArraySet.M.add_O_AzmjU, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1180110655, &cl_ca_mcgill_sable_util_ArraySet.M.iterator__tdOi9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2011736288, &cl_ca_mcgill_sable_util_ArraySet.M.toArray_aO_2II19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1550719231, &cl_ca_mcgill_sable_util_ArraySet.M.containsAll_C_6vFga,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1319712034, &cl_ca_mcgill_sable_util_ArraySet.M.contains_O_yDA9h, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_ArraySet.M.equals_O_RaO0V, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_ArraySet.M.hashCode__sS77O, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_util_ArraySet.M.isEmpty__pVAEs, 0, 0,
    0, 0, 0, 0,
    2095947698, &cl_ca_mcgill_sable_util_ArraySet.M.toArray__ivg5g, 0, 0,
    0, 0, -1646441547, &cl_ca_mcgill_sable_util_ArraySet.M.size__NNiv7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -936165947, &cl_ca_mcgill_sable_util_ArraySet.M.remove_O_kFhHf, 0, 0,
    0, 0, 0, 0,
    -1575638583, &cl_ca_mcgill_sable_util_ArraySet.M.addAll_C_MDtDx, 0, 0,
    -1715782197, &cl_ca_mcgill_sable_util_ArraySet.M.retainAll_C_048uu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_ArraySet.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    1288074734, &cl_ca_mcgill_sable_util_ArraySet.M.removeAll_C_hhL65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(29) nmchars = {&acl_char, 0, 29, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y','S','e','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 29 };
static const Char nmcv_0[] = {
'D','E','F','A','U','L','T','_','S','I','Z','E'};
static const Char sgcv_0[] = {
'I'};
static const Char nmiv_0[] = {
'n','u','m','E','l','e','m','e','n','t','s'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'm','a','x','E','l','e','m','e','n','t','s'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'e','l','e','m','e','n','t','s'};
static const Char sgiv_2[] = {
'[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';'};
static const Char nmsm_0[] = {
'a','c','c','e','s','s','$','0'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','A','r','r','a','y','S','e','t',';',')','I'};
static const Char nmsm_1[] = {
'a','c','c','e','s','s','$','1'};
static const Char sgsm_1[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','A','r','r','a','y','S','e','t',';',')','[','L','j',
'a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmsm_2[] = {
'a','c','c','e','s','s','$','2'};
static const Char sgsm_2[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','A','r','r','a','y','S','e','t',';','I',')','V'};
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
'(','[','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';',')','V'};
static const Char nmim_26[] = {
'r','e','m','o','v','e','E','l','e','m','e','n','t','A','t'};
static const Char sgim_26[] = {
'(','I',')','V'};
static const Char nmim_27[] = {
'd','o','u','b','l','e','C','a','p','a','c','i','t','y'};
static const Char sgim_27[] = {
'(',')','V'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_util_ArraySet.V.DEFAULT_SIZE,(const Char *)&nmcv_0,12,(const Char *)&sgcv_0,1,1,0x1a,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_ArraySet, numElements), 0,(const Char *)&nmiv_0,11,(const Char *)&sgiv_0,1,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_ArraySet, maxElements), 0,(const Char *)&nmiv_1,11,(const Char *)&sgiv_1,1,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_ArraySet, elements), 0,(const Char *)&nmiv_2,8,(const Char *)&sgiv_2,19,1,0x2,3}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())access0_A_Ne1jm,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,34,
	1,0x8,11,xt_access0_A_Ne1jm},
    {TMIT_native_code, (Void(*)())access1_A_86acp,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,52,
	1,0x8,12,xt_access1_A_86acp},
    {TMIT_native_code, (Void(*)())access2_Ai_VScBu,
	(const Char *)&nmsm_2,8,(const Char *)&sgsm_2,35,
	1,0x8,13,xt_access2_Ai_VScBu},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_util_ArraySet.V.DEFAULT_SIZE = 8;
   }
}

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_util_ArraySet = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_ArraySet.C.classclass, 0};

struct cl_ca_mcgill_sable_util_ArraySet cl_ca_mcgill_sable_util_ArraySet = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_ArraySet),
    28,
    3,
    3,
    1,
    4, supers,
    2, 0, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_util_ArraySet,
    st_ca_mcgill_sable_util_ArraySet,
    0,
    init__h9XGg,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_ArraySet,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__h9XGg,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__h9XGg},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_RaO0V,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,0,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__sS77O,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x8001,1,0},
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
	{TMIT_native_code, contains_O_yDA9h,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,21,1,0x8001,3,xt_contains_O_yDA9h},
	{TMIT_native_code, toArray__ivg5g,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,21,1,0x8001,9,xt_toArray__ivg5g},
	{TMIT_native_code, toArray_aO_2II19,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,22,1,0x8001,10,xt_toArray_aO_2II19},
	{TMIT_native_code, add_O_AzmjU,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,21,1,0x8001,4,xt_add_O_AzmjU},
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
	{TMIT_native_code, clear__YKaU3,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,3,1,0x8001,2,xt_clear__YKaU3},
	{TMIT_native_code, size__NNiv7,(const Char *)&nmim_23,4,
	(const Char *)&sgim_23,3,1,0x8001,5,xt_size__NNiv7},
	{TMIT_native_code, iterator__tdOi9,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,33,1,0x8001,6,xt_iterator__tdOi9},
	{TMIT_native_code, init_aO_iYleh,(const Char *)&nmim_25,6,
	(const Char *)&sgim_25,22,1,0x1,1,xt_init_aO_iYleh},
	{TMIT_native_code, removeElementAt_i_ZDdMO,(const Char *)&nmim_26,15,
	(const Char *)&sgim_26,4,1,0x2,7,xt_removeElementAt_i_ZDdMO},
	{TMIT_native_code, doubleCapacity__Gs4iW,(const Char *)&nmim_27,14,
	(const Char *)&sgim_27,3,1,0x2,8,xt_doubleCapacity__Gs4iW},
    } /* end of methodsigs */
};


/*M init__h9XGg: ca.mcgill.sable.util.ArraySet.<init>()V */

Class xt_init__h9XGg[] = { 0 };

Void init__h9XGg(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__UaOBA(a1);
	a1 = av0;
	i2 = 8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->maxElements = i2;
	a1 = av0;
	i2 = 8;
	a2 = anewarray(&cl_java_lang_Object.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_aO_iYleh: ca.mcgill.sable.util.ArraySet.<init>([Ljava/lang/Object;)V */

Class xt_init_aO_iYleh[] = { 0 };

Void init_aO_iYleh(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__h9XGg(a1);
	i1 = 0;
	iv2 = i1;
	GOTO(6,L2);

L1:	a1 = av0;
	a2 = av1;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->class->M.
		add_O_AzmjU.f(a1,a2);
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(23,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__YKaU3: ca.mcgill.sable.util.ArraySet.clear()V */

Class xt_clear__YKaU3[] = { 0 };

Void clear__YKaU3(Object p0)
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
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_O_yDA9h: ca.mcgill.sable.util.ArraySet.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_yDA9h[] = { 0 };

Boolean contains_O_yDA9h(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(15,L2);
	i1 = 1;
	return i1;

L2:	iv2 += 1;
L3:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArraySet*)a2)->numElements;
	if (i1 < i2)
		GOBACK(28,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_O_AzmjU: ca.mcgill.sable.util.ArraySet.add(Ljava/lang/Object;)Z */

Class xt_add_O_AzmjU[] = { 0 };

Boolean add_O_AzmjU(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->class->M.
		contains_O_yDA9h.f(a1,a2);
	if (i1 == 0)
		GOTO(5,L1);
	i1 = 0;
	return i1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArraySet*)a2)->maxElements;
	if (i1 != i2)
		GOTO(18,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	doubleCapacity__Gs4iW(a1);
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArraySet*)a3)->numElements;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a3)->numElements = i4;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__NNiv7: ca.mcgill.sable.util.ArraySet.size()I */

Class xt_size__NNiv7[] = { 0 };

Int size__NNiv7(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M iterator__tdOi9: ca.mcgill.sable.util.ArraySet.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__tdOi9[] = { 0 };

Object iterator__tdOi9(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_Arra_X1zkZ.C);
	a2 = a1;
	a3 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_A_d2VzJ(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeElementAt_i_ZDdMO: ca.mcgill.sable.util.ArraySet.removeElementAt(I)V */

Class xt_removeElementAt_i_ZDdMO[] = { 0 };

Void removeElementAt_i_ZDdMO(Object p0, Int p1)
{
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArraySet*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 != i2)
		GOTO(7,L1);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArraySet*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements = i2;
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements;
	i2 = iv1;
	i3 = 1;
	i2 = i2 + i3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_ArraySet*)a3)->elements;
	i4 = iv1;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_ArraySet*)a5)->numElements;
	i6 = iv1;
	i7 = 1;
	i6 = i6 + i7;
	i5 = i5 - i6;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArraySet*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M doubleCapacity__Gs4iW: ca.mcgill.sable.util.ArraySet.doubleCapacity()V */

Class xt_doubleCapacity__Gs4iW[] = { 0 };

Void doubleCapacity__Gs4iW(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->maxElements;
	i2 = 2;
	i1 = i1 * i2;
	iv1 = i1;
	i1 = iv1;
	a1 = anewarray(&cl_java_lang_Object.C,i1);
	av2 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements;
	i2 = 0;
	a3 = av2;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_ArraySet*)a5)->numElements;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements = a2;
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_ArraySet*)a1)->maxElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toArray__ivg5g: ca.mcgill.sable.util.ArraySet.toArray()[Ljava/lang/Object; */

Class xt_toArray__ivg5g[] = { 0 };

Object toArray__ivg5g(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements;
	a1 = anewarray(&cl_java_lang_Object.C,i1);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements;
	i2 = 0;
	a3 = av1;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_ArraySet*)a5)->numElements;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toArray_aO_2II19: ca.mcgill.sable.util.ArraySet.toArray([Ljava/lang/Object;)V */

Class xt_toArray_aO_2II19[] = { 0 };

Void toArray_aO_2II19(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements;
	i2 = 0;
	a3 = av1;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_util_ArraySet*)a5)->numElements;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access0_A_Ne1jm: ca.mcgill.sable.util.ArraySet.access$0(Lca/mcgill/sable/util/ArraySet;)I */

Class xt_access0_A_Ne1jm[] = { 0 };

Int access0_A_Ne1jm(Object p1)
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
	i1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->numElements;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access1_A_86acp: ca.mcgill.sable.util.ArraySet.access$1(Lca/mcgill/sable/util/ArraySet;)[Ljava/lang/Object; */

Class xt_access1_A_86acp[] = { 0 };

Object access1_A_86acp(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArraySet*)a1)->elements;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access2_Ai_VScBu: ca.mcgill.sable.util.ArraySet.access$2(Lca/mcgill/sable/util/ArraySet;I)V */

Class xt_access2_Ai_VScBu[] = { 0 };

Void access2_Ai_VScBu(Object p1, Int p2)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeElementAt_i_ZDdMO(a1,i2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_ArraySet[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','A','r','r','a','y','S','e','t'};

const void *st_ca_mcgill_sable_util_ArraySet[] = {
    ch_ca_mcgill_sable_util_ArraySet+29,	/* 0. ca.mcgill.sable.util.ArraySet */
    0};
