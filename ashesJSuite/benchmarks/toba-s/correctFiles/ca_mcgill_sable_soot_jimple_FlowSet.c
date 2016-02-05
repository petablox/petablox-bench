/*  ca_mcgill_sable_soot_jimple_FlowSet.c -- from Java class ca.mcgill.sable.soot.jimple.FlowSet  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_FlowSet.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_FlowSet.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_FlowSet[];
extern const void *st_ca_mcgill_sable_soot_jimple_FlowSet[];
extern Class xt_size__n6JTG[];
extern Class xt_clone__cES5n[];
extern Class xt_copy_F_JfBJc[];
extern Class xt_isEmpty__EmTr9[];
extern Class xt_clear__izVKD[];
extern Class xt_toList__cjdCG[];
extern Class xt_add_OF_hMYkm[];
extern Class xt_remove_OF_eCXjv[];
extern Class xt_union_FF_0yK8S[];
extern Class xt_intersection_FF_SsDCr[];
extern Class xt_difference_FF_gvtvr[];
extern Class xt_contains_O_ASdTX[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_FlowSet.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_FlowSet.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_FlowSet.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(35) nmchars = {&acl_char, 0, 35, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','w','S','e','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 35 };
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
'c','o','p','y'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_14[] = {
'i','s','E','m','p','t','y'};
static const Char sgim_14[] = {
'(',')','Z'};
static const Char nmim_15[] = {
'c','l','e','a','r'};
static const Char sgim_15[] = {
'(',')','V'};
static const Char nmim_16[] = {
't','o','L','i','s','t'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
'a','d','d'};
static const Char sgim_17[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_18[] = {
'r','e','m','o','v','e'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';',')','V'};
static const Char nmim_19[] = {
'u','n','i','o','n'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_20[] = {
'i','n','t','e','r','s','e','c','t','i','o','n'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_21[] = {
'd','i','f','f','e','r','e','n','c','e'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S','e',
't',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','F','l','o','w','S',
'e','t',';',')','V'};
static const Char nmim_22[] = {
'c','o','n','t','a','i','n','s'};
static const Char sgim_22[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};

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
} inr_ca_mcgill_sable_soot_jimple_FlowSet = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_FlowSet.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_FlowSet cl_ca_mcgill_sable_soot_jimple_FlowSet = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_FlowSet),
    23,
    0,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_FlowSet,
    st_ca_mcgill_sable_soot_jimple_FlowSet,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_FlowSet,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_abstract, 0,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x401,1,xt_clone__cES5n},
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
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_abstract, 0,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x401,0,xt_size__n6JTG},
	{TMIT_abstract, 0,(const Char *)&nmim_13,4,
	(const Char *)&sgim_13,40,1,0x401,2,xt_copy_F_JfBJc},
	{TMIT_abstract, 0,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,3,1,0x401,3,xt_isEmpty__EmTr9},
	{TMIT_abstract, 0,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,3,1,0x401,4,xt_clear__izVKD},
	{TMIT_abstract, 0,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,29,1,0x401,5,xt_toList__cjdCG},
	{TMIT_abstract, 0,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,58,1,0x401,6,xt_add_OF_hMYkm},
	{TMIT_abstract, 0,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,58,1,0x401,7,xt_remove_OF_eCXjv},
	{TMIT_abstract, 0,(const Char *)&nmim_19,5,
	(const Char *)&sgim_19,77,1,0x401,8,xt_union_FF_0yK8S},
	{TMIT_abstract, 0,(const Char *)&nmim_20,12,
	(const Char *)&sgim_20,77,1,0x401,9,xt_intersection_FF_SsDCr},
	{TMIT_abstract, 0,(const Char *)&nmim_21,10,
	(const Char *)&sgim_21,77,1,0x401,10,xt_difference_FF_gvtvr},
	{TMIT_abstract, 0,(const Char *)&nmim_22,8,
	(const Char *)&sgim_22,21,1,0x401,11,xt_contains_O_ASdTX},
    } /* end of methodsigs */
};


/*M size__n6JTG: ca.mcgill.sable.soot.jimple.FlowSet.size()I */

Class xt_size__n6JTG[] = { 0 };

/*M clone__cES5n: ca.mcgill.sable.soot.jimple.FlowSet.clone()Ljava/lang/Object; */

Class xt_clone__cES5n[] = { 0 };

/*M copy_F_JfBJc: ca.mcgill.sable.soot.jimple.FlowSet.copy(Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_copy_F_JfBJc[] = { 0 };

/*M isEmpty__EmTr9: ca.mcgill.sable.soot.jimple.FlowSet.isEmpty()Z */

Class xt_isEmpty__EmTr9[] = { 0 };

/*M clear__izVKD: ca.mcgill.sable.soot.jimple.FlowSet.clear()V */

Class xt_clear__izVKD[] = { 0 };

/*M toList__cjdCG: ca.mcgill.sable.soot.jimple.FlowSet.toList()Lca/mcgill/sable/util/List; */

Class xt_toList__cjdCG[] = { 0 };

/*M add_OF_hMYkm: ca.mcgill.sable.soot.jimple.FlowSet.add(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_add_OF_hMYkm[] = { 0 };

/*M remove_OF_eCXjv: ca.mcgill.sable.soot.jimple.FlowSet.remove(Ljava/lang/Object;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_remove_OF_eCXjv[] = { 0 };

/*M union_FF_0yK8S: ca.mcgill.sable.soot.jimple.FlowSet.union(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_union_FF_0yK8S[] = { 0 };

/*M intersection_FF_SsDCr: ca.mcgill.sable.soot.jimple.FlowSet.intersection(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_intersection_FF_SsDCr[] = { 0 };

/*M difference_FF_gvtvr: ca.mcgill.sable.soot.jimple.FlowSet.difference(Lca/mcgill/sable/soot/jimple/FlowSet;Lca/mcgill/sable/soot/jimple/FlowSet;)V */

Class xt_difference_FF_gvtvr[] = { 0 };

/*M contains_O_ASdTX: ca.mcgill.sable.soot.jimple.FlowSet.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_ASdTX[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_FlowSet[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','F','l','o','w','S','e','t'};

const void *st_ca_mcgill_sable_soot_jimple_FlowSet[] = {
    ch_ca_mcgill_sable_soot_jimple_FlowSet+35,	/* 0. ca.mcgill.sable.soot.jimple.FlowSet */
    0};
