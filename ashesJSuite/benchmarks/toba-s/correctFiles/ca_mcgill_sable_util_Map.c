/*  ca_mcgill_sable_util_Map.c -- from Java class ca.mcgill.sable.util.Map  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_ClassCastException.h"
#include "java_lang_IllegalArgumentException.h"
#include "java_lang_NullPointerException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_ClassCastException.C,
    &cl_java_lang_IllegalArgumentException.C,
    &cl_java_lang_NullPointerException.C,
};

extern const Char ch_ca_mcgill_sable_util_Map[];
extern const void *st_ca_mcgill_sable_util_Map[];
extern Class xt_size__e1Rde[];
extern Class xt_isEmpty__Jyguy[];
extern Class xt_containsValue_O_ue5fe[];
extern Class xt_containsKey_O_c5mlc[];
extern Class xt_get_O_qN8vV[];
extern Class xt_put_OO_5YLK9[];
extern Class xt_remove_O_MBci0[];
extern Class xt_putAll_M_KOdVq[];
extern Class xt_clear__vDYpJ[];
extern Class xt_keySet__5GY2I[];
extern Class xt_values__6bCFQ[];
extern Class xt_entries__yalNW[];
extern Class xt_equals_O_TTcq6[];
extern Class xt_hashCode__UysEo[];

#define HASHMASK 0x1
/*  0.  4c0d6fd2  (0)  clone  */
/*  1.  489f8e6f  (1)  toString  */
static const struct ihash htable[3] = {
    1275949010, &cl_ca_mcgill_sable_util_Map.M.clone__dslwm,
    1218416239, &cl_ca_mcgill_sable_util_Map.M.toString__4d9OF, 0, 0,
};

static const CARRAY(24) nmchars = {&acl_char, 0, 24, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','M','a','p'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 24 };
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
} inr_ca_mcgill_sable_util_Map = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Map.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Map cl_ca_mcgill_sable_util_Map = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Map),
    24,
    0,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_Map,
    st_ca_mcgill_sable_util_Map,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Map,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_abstract, 0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x401,12,xt_equals_O_TTcq6},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_abstract, 0,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x401,13,xt_hashCode__UysEo},
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
	(const Char *)&sgim_12,3,1,0x401,0,xt_size__e1Rde},
	{TMIT_abstract, 0,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x401,1,xt_isEmpty__Jyguy},
	{TMIT_abstract, 0,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,21,1,0x401,2,xt_containsValue_O_ue5fe},
	{TMIT_abstract, 0,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,21,1,0x401,3,xt_containsKey_O_c5mlc},
	{TMIT_abstract, 0,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,38,1,0x401,4,xt_get_O_qN8vV},
	{TMIT_abstract, 0,(const Char *)&nmim_17,3,
	(const Char *)&sgim_17,56,1,0x401,5,xt_put_OO_5YLK9},
	{TMIT_abstract, 0,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,38,1,0x401,6,xt_remove_O_MBci0},
	{TMIT_abstract, 0,(const Char *)&nmim_19,6,
	(const Char *)&sgim_19,29,1,0x401,7,xt_putAll_M_KOdVq},
	{TMIT_abstract, 0,(const Char *)&nmim_20,5,
	(const Char *)&sgim_20,3,1,0x401,8,xt_clear__vDYpJ},
	{TMIT_abstract, 0,(const Char *)&nmim_21,6,
	(const Char *)&sgim_21,28,1,0x401,9,xt_keySet__5GY2I},
	{TMIT_abstract, 0,(const Char *)&nmim_22,6,
	(const Char *)&sgim_22,35,1,0x401,10,xt_values__6bCFQ},
	{TMIT_abstract, 0,(const Char *)&nmim_23,7,
	(const Char *)&sgim_23,35,1,0x401,11,xt_entries__yalNW},
    } /* end of methodsigs */
};


/*M size__e1Rde: ca.mcgill.sable.util.Map.size()I */

Class xt_size__e1Rde[] = { 0 };

/*M isEmpty__Jyguy: ca.mcgill.sable.util.Map.isEmpty()Z */

Class xt_isEmpty__Jyguy[] = { 0 };

/*M containsValue_O_ue5fe: ca.mcgill.sable.util.Map.containsValue(Ljava/lang/Object;)Z */

Class xt_containsValue_O_ue5fe[] = { 0 };

/*M containsKey_O_c5mlc: ca.mcgill.sable.util.Map.containsKey(Ljava/lang/Object;)Z */

Class xt_containsKey_O_c5mlc[] = { &cl_java_lang_ClassCastException.C, &cl_java_lang_NullPointerException.C, 0 };

/*M get_O_qN8vV: ca.mcgill.sable.util.Map.get(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_get_O_qN8vV[] = { &cl_java_lang_ClassCastException.C, &cl_java_lang_NullPointerException.C, 0 };

/*M put_OO_5YLK9: ca.mcgill.sable.util.Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_put_OO_5YLK9[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_java_lang_NullPointerException.C, 0 };

/*M remove_O_MBci0: ca.mcgill.sable.util.Map.remove(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_remove_O_MBci0[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M putAll_M_KOdVq: ca.mcgill.sable.util.Map.putAll(Lca/mcgill/sable/util/Map;)V */

Class xt_putAll_M_KOdVq[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_java_lang_NullPointerException.C, 0 };

/*M clear__vDYpJ: ca.mcgill.sable.util.Map.clear()V */

Class xt_clear__vDYpJ[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };

/*M keySet__5GY2I: ca.mcgill.sable.util.Map.keySet()Lca/mcgill/sable/util/Set; */

Class xt_keySet__5GY2I[] = { 0 };

/*M values__6bCFQ: ca.mcgill.sable.util.Map.values()Lca/mcgill/sable/util/Collection; */

Class xt_values__6bCFQ[] = { 0 };

/*M entries__yalNW: ca.mcgill.sable.util.Map.entries()Lca/mcgill/sable/util/Collection; */

Class xt_entries__yalNW[] = { 0 };

/*M equals_O_TTcq6: ca.mcgill.sable.util.Map.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_TTcq6[] = { 0 };

/*M hashCode__UysEo: ca.mcgill.sable.util.Map.hashCode()I */

Class xt_hashCode__UysEo[] = { 0 };



const Char ch_ca_mcgill_sable_util_Map[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','M','a','p'};

const void *st_ca_mcgill_sable_util_Map[] = {
    ch_ca_mcgill_sable_util_Map+24,	/* 0. ca.mcgill.sable.util.Map */
    0};
