/*  ca_mcgill_sable_util_Collection.c -- from Java class ca.mcgill.sable.util.Collection  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Collection.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_ClassCastException.h"
#include "java_lang_IllegalArgumentException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Collection.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_ClassCastException.C,
    &cl_java_lang_IllegalArgumentException.C,
};

extern const Char ch_ca_mcgill_sable_util_Collection[];
extern const void *st_ca_mcgill_sable_util_Collection[];
extern Class xt_size__WLT1P[];
extern Class xt_isEmpty__JaKWq[];
extern Class xt_contains_O_tMQrK[];
extern Class xt_iterator__qNVXc[];
extern Class xt_toArray__r1Lf9[];
extern Class xt_toArray_aO_rYfjK[];
extern Class xt_add_O_34NgY[];
extern Class xt_remove_O_MQoqx[];
extern Class xt_containsAll_C_OwVRh[];
extern Class xt_addAll_C_QuCiF[];
extern Class xt_removeAll_C_zLUVM[];
extern Class xt_retainAll_C_em2Ev[];
extern Class xt_clear__XBWtw[];
extern Class xt_equals_O_ViX8r[];
extern Class xt_hashCode__skkPA[];

#define HASHMASK 0x1
/*  0.  4c0d6fd2  (0)  clone  */
/*  1.  489f8e6f  (1)  toString  */
static const struct ihash htable[3] = {
    1275949010, &cl_ca_mcgill_sable_util_Collection.M.clone__dslwm,
    1218416239, &cl_ca_mcgill_sable_util_Collection.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','o','l','l','e','c','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
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
} inr_ca_mcgill_sable_util_Collection = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Collection.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Collection cl_ca_mcgill_sable_util_Collection = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Collection),
    25,
    0,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_util_Collection,
    st_ca_mcgill_sable_util_Collection,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Collection,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_abstract, 0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x401,13,xt_equals_O_ViX8r},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_abstract, 0,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x401,14,xt_hashCode__skkPA},
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
	(const Char *)&sgim_12,3,1,0x401,0,xt_size__WLT1P},
	{TMIT_abstract, 0,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x401,1,xt_isEmpty__JaKWq},
	{TMIT_abstract, 0,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,21,1,0x401,2,xt_contains_O_tMQrK},
	{TMIT_abstract, 0,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,33,1,0x401,3,xt_iterator__qNVXc},
	{TMIT_abstract, 0,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,21,1,0x401,4,xt_toArray__r1Lf9},
	{TMIT_abstract, 0,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,22,1,0x401,5,xt_toArray_aO_rYfjK},
	{TMIT_abstract, 0,(const Char *)&nmim_18,3,
	(const Char *)&sgim_18,21,1,0x401,6,xt_add_O_34NgY},
	{TMIT_abstract, 0,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,21,1,0x401,7,xt_remove_O_MQoqx},
	{TMIT_abstract, 0,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,36,1,0x401,8,xt_containsAll_C_OwVRh},
	{TMIT_abstract, 0,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,36,1,0x401,9,xt_addAll_C_QuCiF},
	{TMIT_abstract, 0,(const Char *)&nmim_22,9,
	(const Char *)&sgim_22,36,1,0x401,10,xt_removeAll_C_zLUVM},
	{TMIT_abstract, 0,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,36,1,0x401,11,xt_retainAll_C_em2Ev},
	{TMIT_abstract, 0,(const Char *)&nmim_24,5,
	(const Char *)&sgim_24,3,1,0x401,12,xt_clear__XBWtw},
    } /* end of methodsigs */
};


/*M size__WLT1P: ca.mcgill.sable.util.Collection.size()I */

Class xt_size__WLT1P[] = { 0 };

/*M isEmpty__JaKWq: ca.mcgill.sable.util.Collection.isEmpty()Z */

Class xt_isEmpty__JaKWq[] = { 0 };

/*M contains_O_tMQrK: ca.mcgill.sable.util.Collection.contains(Ljava/lang/Object;)Z */

Class xt_contains_O_tMQrK[] = { 0 };

/*M iterator__qNVXc: ca.mcgill.sable.util.Collection.iterator()Lca/mcgill/sable/util/Iterator; */

Class xt_iterator__qNVXc[] = { 0 };

/*M toArray__r1Lf9: ca.mcgill.sable.util.Collection.toArray()[Ljava/lang/Object; */

Class xt_toArray__r1Lf9[] = { 0 };

/*M toArray_aO_rYfjK: ca.mcgill.sable.util.Collection.toArray([Ljava/lang/Object;)V */

Class xt_toArray_aO_rYfjK[] = { 0 };

/*M add_O_34NgY: ca.mcgill.sable.util.Collection.add(Ljava/lang/Object;)Z */

Class xt_add_O_34NgY[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

/*M remove_O_MQoqx: ca.mcgill.sable.util.Collection.remove(Ljava/lang/Object;)Z */

Class xt_remove_O_MQoqx[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M containsAll_C_OwVRh: ca.mcgill.sable.util.Collection.containsAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_containsAll_C_OwVRh[] = { 0 };

/*M addAll_C_QuCiF: ca.mcgill.sable.util.Collection.addAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_addAll_C_QuCiF[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, 0 };

/*M removeAll_C_zLUVM: ca.mcgill.sable.util.Collection.removeAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_removeAll_C_zLUVM[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M retainAll_C_em2Ev: ca.mcgill.sable.util.Collection.retainAll(Lca/mcgill/sable/util/Collection;)Z */

Class xt_retainAll_C_em2Ev[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M clear__XBWtw: ca.mcgill.sable.util.Collection.clear()V */

Class xt_clear__XBWtw[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M equals_O_ViX8r: ca.mcgill.sable.util.Collection.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_ViX8r[] = { 0 };

/*M hashCode__skkPA: ca.mcgill.sable.util.Collection.hashCode()I */

Class xt_hashCode__skkPA[] = { 0 };



const Char ch_ca_mcgill_sable_util_Collection[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','C','o','l','l','e','c','t','i','o','n'};

const void *st_ca_mcgill_sable_util_Collection[] = {
    ch_ca_mcgill_sable_util_Collection+31,	/* 0. ca.mcgill.sable.util.Collection */
    0};
