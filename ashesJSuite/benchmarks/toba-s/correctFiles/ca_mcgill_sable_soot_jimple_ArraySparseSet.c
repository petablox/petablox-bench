/*  ca_mcgill_sable_soot_jimple_ArraySparseSet.c -- from Java class ca.mcgill.sable.soot.jimple.ArraySparseSet  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ArraySparseSet.h"
#include "ca_mcgill_sable_soot_jimple_FlowSet.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_ArraySparseSet$SparseArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimp_uojgQ.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_ArraySparseSet[];
extern const void *st_ca_mcgill_sable_soot_jimple_ArraySparseSet[];
extern Class xt_init__keSYx[];
extern Class xt_init_A_4osUa[];
extern Class xt_clone__duty4[];
extern Class xt_clear__Pdlna[];
extern Class xt_size__EmIVs[];
extern Class xt_isEmpty__V0pf6[];
extern Class xt_toList__RPU6R[];
extern Class xt_add_O_dZFdd[];
extern Class xt_add_OF_E9V1s[];
extern Class xt_doubleCapacity__tHudw[];
extern Class xt_remove_OF_3qs43[];
extern Class xt_removeElementAt_i_Q8ooa[];
extern Class xt_union_FF_PBeKi[];
extern Class xt_intersection_FF_N58Bb[];
extern Class xt_difference_FF_91VlA[];
extern Class xt_contains_O_7zgn5[];
extern Class xt_equals_O_FoFR6[];
extern Class xt_toString__Up313[];
extern Class xt_copy_F_A0Ipf[];

#define HASHMASK 0xff
/*  21.  14de9a21  (21)  copy  */
/*  22.  4ea93522  (22)  contains  */
/*  47.  5b7e1c47  (47)  add  */
/*  4e.  174d304e  (4e)  clear  */
/*  58.  a77c2458  (58)  intersection  */
/*  61.  8942e761  (61)  hashCode  */
/*  7c.  c2fa7f7c  (7c)  remove  */
/*  88.  7b00e488  (88)  toList  */
/*  a2.  ea013ea2  (a2)  union  */
/*  ae.  fa23fbae  (ae)  isEmpty  */
/*  b5.  9ddd4bb5  (b5)  size  */
/*  bc.  3a6e7abc  (bc)  difference  */
/*  d2.  4c0d6fd2  (d2)  clone  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350132769, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.copy_F_A0Ipf,
    1319712034, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.contains_O_7zgn5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1534991431, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.add_OF_E9V1s,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390934606, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.clear__Pdlna,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1485036456, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.intersection_FF_N58Bb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1023770756, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.remove_OF_3qs43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2063656072, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.toList__RPU6R,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -369017182, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.union_FF_PBeKi,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -98305106, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.isEmpty__V0pf6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1646441547, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.size__EmIVs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    980318908, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.difference_FF_91VlA,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.M.clone__duty4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','r','r','a','y','S','p','a',
'r','s','e','S','e','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
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
's','o','o','t','/','j','i','m','p','l','e','/','A','r','r','a','y','S',
'p','a','r','s','e','S','e','t',';',')','V'};
static const Char nmim_13[] = {
'c','l','e','a','r'};
static const Char sgim_13[] = {
'(',')','V'};
static const Char nmim_14[] = {
's','i','z','e'};
static const Char sgim_14[] = {
'(',')','I'};
static const Char nmim_15[] = {
'i','s','E','m','p','t','y'};
static const Char sgim_15[] = {
'(',')','Z'};
static const Char nmim_16[] = {
't','o','L','i','s','t'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
'a','d','d'};
static const Char sgim_17[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_18[] = {
'a','d','d'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_19[] = {
'd','o','u','b','l','e','C','a','p','a','c','i','t','y'};
static const Char sgim_19[] = {
'(',')','V'};
static const Char nmim_20[] = {
'r','e','m','o','v','e'};
static const Char sgim_20[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_21[] = {
'r','e','m','o','v','e','E','l','e','m','e','n','t','A','t'};
static const Char sgim_21[] = {
'(','I',')','V'};
static const Char nmim_22[] = {
'u','n','i','o','n'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_23[] = {
'i','n','t','e','r','s','e','c','t','i','o','n'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_24[] = {
'd','i','f','f','e','r','e','n','c','e'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_25[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_25[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_26[] = {
'c','o','p','y'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.V.DEFAULT_SIZE,(const Char *)&nmcv_0,12,(const Char *)&sgcv_0,1,1,0x18,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet, numElements), 0,(const Char *)&nmiv_0,11,(const Char *)&sgiv_0,1,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet, maxElements), 0,(const Char *)&nmiv_1,11,(const Char *)&sgiv_1,1,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet, elements), 0,(const Char *)&nmiv_2,8,(const Char *)&sgiv_2,19,1,0x0,3}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_undefined}
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.V.DEFAULT_SIZE = 8;
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
} inr_ca_mcgill_sable_soot_jimple_ArraySparseSet = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_ArraySparseSet cl_ca_mcgill_sable_soot_jimple_ArraySparseSet = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet),
    27,
    0,
    3,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_ArraySparseSet,
    st_ca_mcgill_sable_soot_jimple_ArraySparseSet,
    0,
    init__keSYx,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_ArraySparseSet,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__keSYx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,0,xt_init__keSYx},
	{TMIT_native_code, clone__duty4,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x8001,2,xt_clone__duty4},
	{TMIT_native_code, equals_O_FoFR6,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,16,xt_equals_O_FoFR6},
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
	{TMIT_native_code, toString__Up313,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,17,xt_toString__Up313},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_A_4osUa,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,47,1,0x2,1,xt_init_A_4osUa},
	{TMIT_native_code, clear__Pdlna,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,3,1,0x8001,3,xt_clear__Pdlna},
	{TMIT_native_code, size__EmIVs,(const Char *)&nmim_14,4,
	(const Char *)&sgim_14,3,1,0x8001,4,xt_size__EmIVs},
	{TMIT_native_code, isEmpty__V0pf6,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,3,1,0x8001,5,xt_isEmpty__V0pf6},
	{TMIT_native_code, toList__RPU6R,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,29,1,0x8001,6,xt_toList__RPU6R},
	{TMIT_native_code, add_O_dZFdd,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,21,1,0x1,7,xt_add_O_dZFdd},
	{TMIT_native_code, add_OF_E9V1s,(const Char *)&nmim_18,3,
	(const Char *)&sgim_18,58,1,0x8001,8,xt_add_OF_E9V1s},
	{TMIT_native_code, doubleCapacity__tHudw,(const Char *)&nmim_19,14,
	(const Char *)&sgim_19,3,1,0x2,9,xt_doubleCapacity__tHudw},
	{TMIT_native_code, remove_OF_3qs43,(const Char *)&nmim_20,6,
	(const Char *)&sgim_20,58,1,0x8001,10,xt_remove_OF_3qs43},
	{TMIT_native_code, removeElementAt_i_Q8ooa,(const Char *)&nmim_21,15,
	(const Char *)&sgim_21,4,1,0x2,11,xt_removeElementAt_i_Q8ooa},
	{TMIT_native_code, union_FF_PBeKi,(const Char *)&nmim_22,5,
	(const Char *)&sgim_22,77,1,0x8001,12,xt_union_FF_PBeKi},
	{TMIT_native_code, intersection_FF_N58Bb,(const Char *)&nmim_23,12,
	(const Char *)&sgim_23,77,1,0x8001,13,xt_intersection_FF_N58Bb},
	{TMIT_native_code, difference_FF_91VlA,(const Char *)&nmim_24,10,
	(const Char *)&sgim_24,77,1,0x8001,14,xt_difference_FF_91VlA},
	{TMIT_native_code, contains_O_7zgn5,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,21,1,0x8001,15,xt_contains_O_7zgn5},
	{TMIT_native_code, copy_F_A0Ipf,(const Char *)&nmim_26,4,
	(const Char *)&sgim_26,40,1,0x8001,18,xt_copy_F_A0Ipf},
    } /* end of methodsigs */
};


/*M init__keSYx: ca.mcgill.sable.soot.jimple.ArraySparseSet.<init>()V */

Class xt_init__keSYx[] = { 0 };

Void init__keSYx(Object p0)
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
	init__AAyKx(a1);
	a1 = av0;
	i2 = 8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->maxElements = i2;
	a1 = av0;
	i2 = 8;
	a2 = anewarray(&cl_java_lang_Object.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_A_4osUa: ca.mcgill.sable.soot.jimple.ArraySparseSet.<init>(Lca/mcgill/sable/soot/jimple/ArraySparseSet;)V */

Class xt_init_A_4osUa[] = { 0 };

Void init_A_4osUa(Object p0, Object p1)
{
Class c0, c1;
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
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->maxElements;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->maxElements = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		clone__dslwm.f(a2);
	if ((a2 != 0) && !instanceof(a2,&cl_java_lang_Object.C,1))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__duty4: ca.mcgill.sable.soot.jimple.ArraySparseSet.clone()Ljava/lang/Object; */

Class xt_clone__duty4[] = { 0 };

Object clone__duty4(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C);
	a2 = a1;
	a3 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_A_4osUa(a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clear__Pdlna: ca.mcgill.sable.soot.jimple.ArraySparseSet.clear()V */

Class xt_clear__Pdlna[] = { 0 };

Void clear__Pdlna(Object p0)
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
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M size__EmIVs: ca.mcgill.sable.soot.jimple.ArraySparseSet.size()I */

Class xt_size__EmIVs[] = { 0 };

Int size__EmIVs(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEmpty__V0pf6: ca.mcgill.sable.soot.jimple.ArraySparseSet.isEmpty()Z */

Class xt_isEmpty__V0pf6[] = { 0 };

Boolean isEmpty__V0pf6(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements;
	if (i1 == 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toList__RPU6R: ca.mcgill.sable.soot.jimple.ArraySparseSet.toList()Lca/mcgill/sable/util/List; */

Class xt_toList__RPU6R[] = { 0 };

Object toList__RPU6R(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimp_uojgQ.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a3)->elements;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a4)->numElements;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_aOi_XyNmh(a2,a3,i4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_O_dZFdd: ca.mcgill.sable.soot.jimple.ArraySparseSet.add(Ljava/lang/Object;)V */

Class xt_add_O_dZFdd[] = { 0 };

Void add_O_dZFdd(Object p0, Object p1)
{
Class c0, c1;
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->maxElements;
	if (i1 != i2)
		GOTO(8,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	doubleCapacity__tHudw(a1);
L1:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		contains_O_7zgn5.f(a1,a2);
	if (i1 != 0)
		GOTO(20,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements;
	a2 = av0;
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a3)->numElements;
	i4 = i3;
	a3 = a2;
	i2 = i4;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a3)->numElements = i4;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M add_OF_E9V1s: ca.mcgill.sable.soot.jimple.ArraySparseSet.add(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_add_OF_E9V1s[] = { 0 };

Void add_OF_E9V1s(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (a1 == a2)
		GOTO(7,L1);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		copy_F_A0Ipf.f(a1,a2);
L1:	a1 = av3;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		add_O_dZFdd.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M doubleCapacity__tHudw: ca.mcgill.sable.soot.jimple.ArraySparseSet.doubleCapacity()V */

Class xt_doubleCapacity__tHudw[] = { 0 };

Void doubleCapacity__tHudw(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->maxElements;
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements;
	i2 = 0;
	a3 = av2;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a5)->numElements;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements = a2;
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->maxElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove_OF_3qs43: ca.mcgill.sable.soot.jimple.ArraySparseSet.remove(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_remove_OF_3qs43[] = { 0 };

Void remove_OF_3qs43(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (a1 == a2)
		GOTO(7,L1);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		copy_F_A0Ipf.f(a1,a2);
L1:	i1 = 0;
	iv4 = i1;
	GOTO(18,L4);

L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements;
	i2 = iv4;
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
		GOTO(32,L3);
	a1 = av3;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeElementAt_i_Q8ooa(a1,i2);
	return;

L3:	iv4 += 1;
L4:	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (i1 < i2)
		GOBACK(51,L2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeElementAt_i_Q8ooa: ca.mcgill.sable.soot.jimple.ArraySparseSet.removeElementAt(I)V */

Class xt_removeElementAt_i_Q8ooa[] = { 0 };

Void removeElementAt_i_Q8ooa(Object p0, Int p1)
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
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 != i2)
		GOTO(7,L1);
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements = i2;
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements;
	i2 = iv1;
	i3 = 1;
	i2 = i2 + i3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a3)->elements;
	i4 = iv1;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a5)->numElements;
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
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M union_FF_PBeKi: ca.mcgill.sable.soot.jimple.ArraySparseSet.union(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_union_FF_PBeKi[] = { 0 };

Void union_FF_PBeKi(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3;
Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	a2 = av3;
	if (a1 != a2)
		GOTO(14,L3);
	i1 = 0;
	iv5 = i1;
	GOTO(20,L2);

L1:	a1 = av4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		add_O_dZFdd.f(a1,a2);
	iv5 += 1;
L2:	i1 = iv5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (i1 < i2)
		GOBACK(44,L1);
	return;

L3:	a1 = av0;
	a2 = av4;
	if (a1 == a2)
		GOTO(51,L4);
	a1 = av0;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		copy_F_A0Ipf.f(a1,a2);
L4:	i1 = 0;
	iv5 = i1;
	GOTO(63,L6);

L5:	a1 = av4;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		add_O_dZFdd.f(a1,a2);
	iv5 += 1;
L6:	i1 = iv5;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (i1 < i2)
		GOBACK(87,L5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M intersection_FF_N58Bb: ca.mcgill.sable.soot.jimple.ArraySparseSet.intersection(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_intersection_FF_N58Bb[] = { 0 };

Void intersection_FF_N58Bb(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5;
Int i0, i1, i2, i3;
Int iv6;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	a2 = av3;
	if (a1 == a2)
		GOTO(14,L1);
	a1 = av4;
	a2 = av0;
	if (a1 != a2)
		GOTO(20,L2);
L1:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__keSYx(a2);
	av5 = a1;
	GOTO(32,L3);

L2:	a1 = av4;
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		clear__Pdlna.f(a1);
L3:	i1 = 0;
	iv6 = i1;
	GOTO(47,L6);

L4:	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		contains_O_7zgn5.f(a1,a2);
	if (i1 == 0)
		GOTO(61,L5);
	a1 = av5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		add_O_dZFdd.f(a1,a2);
L5:	iv6 += 1;
L6:	i1 = iv6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (i1 < i2)
		GOBACK(85,L4);
	a1 = av5;
	a2 = av4;
	if (a1 == a2)
		GOTO(92,L7);
	a1 = av5;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		copy_F_A0Ipf.f(a1,a2);
L7:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M difference_FF_91VlA: ca.mcgill.sable.soot.jimple.ArraySparseSet.difference(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_difference_FF_91VlA[] = { 0 };

Void difference_FF_91VlA(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5;
Int i0, i1, i2, i3;
Int iv6;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	a2 = av3;
	if (a1 == a2)
		GOTO(14,L1);
	a1 = av4;
	a2 = av0;
	if (a1 != a2)
		GOTO(20,L2);
L1:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__keSYx(a2);
	av5 = a1;
	GOTO(32,L3);

L2:	a1 = av4;
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		clear__Pdlna.f(a1);
L3:	i1 = 0;
	iv6 = i1;
	GOTO(47,L6);

L4:	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		contains_O_7zgn5.f(a1,a2);
	if (i1 != 0)
		GOTO(61,L5);
	a1 = av5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		add_O_dZFdd.f(a1,a2);
L5:	iv6 += 1;
L6:	i1 = iv6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (i1 < i2)
		GOBACK(85,L4);
	a1 = av5;
	a2 = av4;
	if (a1 == a2)
		GOTO(92,L7);
	a1 = av5;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		copy_F_A0Ipf.f(a1,a2);
L7:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M contains_O_7zgn5: ca.mcgill.sable.soot.jimple.ArraySparseSet.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_7zgn5[] = { 0 };

Boolean contains_O_7zgn5(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements;
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
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (i1 < i2)
		GOBACK(28,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_FoFR6: ca.mcgill.sable.soot.jimple.ArraySparseSet.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_FoFR6[] = { 0 };

Boolean equals_O_FoFR6(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3, iv4, iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (i1 == i2)
		GOTO(13,L1);
	i1 = 0;
	return i1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements;
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	GOTO(26,L4);

L2:	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		contains_O_7zgn5.f(a1,a2);
	if (i1 != 0)
		GOTO(40,L3);
	i1 = 0;
	return i1;

L3:	iv4 += 1;
L4:	i1 = iv4;
	i2 = iv3;
	if (i1 < i2)
		GOBACK(51,L2);
	i1 = 0;
	iv5 = i1;
	GOTO(57,L7);

L5:	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->elements;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		contains_O_7zgn5.f(a1,a2);
	if (i1 != 0)
		GOTO(71,L6);
	i1 = 0;
	return i1;

L6:	iv5 += 1;
L7:	i1 = iv5;
	i2 = iv3;
	if (i1 < i2)
		GOBACK(82,L5);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__Up313: ca.mcgill.sable.soot.jimple.ArraySparseSet.toString()Ljava/lang/String; */

Class xt_toString__Up313[] = { 0 };

Object toString__Up313(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_ArraySparseSet[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->class->M.
		toList__RPU6R.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(26,L3);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
	GOTO(40,L2);

L1:	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_ArraySparseSet[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(75,L1);
L3:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_ArraySparseSet[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M copy_F_A0Ipf: ca.mcgill.sable.soot.jimple.ArraySparseSet.copy(Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_copy_F_A0Ipf[] = { 0 };

Void copy_F_A0Ipf(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ArraySparseSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	GOTO(5,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	doubleCapacity__tHudw(a1);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->maxElements;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->maxElements;
	if (i1 < i2)
		GOBACK(20,L1);
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a2)->numElements;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->numElements = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a1)->elements;
	i2 = 0;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a3)->elements;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_ca_mcgill_sable_soot_jimple_ArraySparseSet*)a5)->numElements;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_ArraySparseSet[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','r','r','a','y','S','p','a',
'r','s','e','S','e','t','{',',',' ','}'};

const void *st_ca_mcgill_sable_soot_jimple_ArraySparseSet[] = {
    ch_ca_mcgill_sable_soot_jimple_ArraySparseSet+42,	/* 0. ca.mcgill.sable.soot.jimple.ArraySparseS */
    ch_ca_mcgill_sable_soot_jimple_ArraySparseSet+43,	/* 1. { */
    ch_ca_mcgill_sable_soot_jimple_ArraySparseSet+45,	/* 2. ,  */
    ch_ca_mcgill_sable_soot_jimple_ArraySparseSet+46,	/* 3. } */
    0};
