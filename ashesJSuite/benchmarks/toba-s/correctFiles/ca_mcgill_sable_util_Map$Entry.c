/*  ca_mcgill_sable_util_Map$Entry.c -- from Java class ca.mcgill.sable.util.Map$Entry  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Map.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_lang_ClassCastException.h"
#include "java_lang_IllegalArgumentException.h"
#include "java_lang_NullPointerException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_lang_ClassCastException.C,
    &cl_java_lang_IllegalArgumentException.C,
    &cl_java_lang_NullPointerException.C,
};

extern const Char ch_ca_mcgill_sable_util_MapE_PL383[];
extern const void *st_ca_mcgill_sable_util_MapE_PL383[];
extern Class xt_getKey__zklOL[];
extern Class xt_getValue__J1AsM[];
extern Class xt_setValue_O_dnAAl[];
extern Class xt_equals_O_RLmLw[];
extern Class xt_hashCode__a6jJ4[];

#define HASHMASK 0x1
/*  0.  4c0d6fd2  (0)  clone  */
/*  1.  489f8e6f  (1)  toString  */
static const struct ihash htable[3] = {
    1275949010, &cl_ca_mcgill_sable_util_MapE_PL383.M.clone__dslwm,
    1218416239, &cl_ca_mcgill_sable_util_MapE_PL383.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(30) nmchars = {&acl_char, 0, 30, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','M','a','p','$','E','n','t','r','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 30 };
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
'g','e','t','K','e','y'};
static const Char sgim_12[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_13[] = {
'g','e','t','V','a','l','u','e'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
's','e','t','V','a','l','u','e'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};

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
} inr_ca_mcgill_sable_util_MapE_PL383 = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_MapE_PL383.C.classclass, 0};

struct cl_ca_mcgill_sable_util_MapE_PL383 cl_ca_mcgill_sable_util_MapE_PL383 = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_MapE_PL383),
    15,
    0,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_MapE_PL383,
    st_ca_mcgill_sable_util_MapE_PL383,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_MapE_PL383,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_abstract, 0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x401,3,xt_equals_O_RLmLw},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_abstract, 0,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x401,4,xt_hashCode__a6jJ4},
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,20,1,0x401,0,xt_getKey__zklOL},
	{TMIT_abstract, 0,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,20,1,0x401,1,xt_getValue__J1AsM},
	{TMIT_abstract, 0,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,38,1,0x401,2,xt_setValue_O_dnAAl},
    } /* end of methodsigs */
};


/*M getKey__zklOL: ca.mcgill.sable.util.Map$Entry.getKey()Ljava/lang/Object; */

Class xt_getKey__zklOL[] = { 0 };

/*M getValue__J1AsM: ca.mcgill.sable.util.Map$Entry.getValue()Ljava/lang/Object; */

Class xt_getValue__J1AsM[] = { 0 };

/*M setValue_O_dnAAl: ca.mcgill.sable.util.Map$Entry.setValue(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_setValue_O_dnAAl[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_lang_ClassCastException.C, 
    &cl_java_lang_IllegalArgumentException.C, &cl_java_lang_NullPointerException.C, 0 };

/*M equals_O_RLmLw: ca.mcgill.sable.util.Map$Entry.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_RLmLw[] = { 0 };

/*M hashCode__a6jJ4: ca.mcgill.sable.util.Map$Entry.hashCode()I */

Class xt_hashCode__a6jJ4[] = { 0 };



const Char ch_ca_mcgill_sable_util_MapE_PL383[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','M','a','p','$','E','n','t','r','y'};

const void *st_ca_mcgill_sable_util_MapE_PL383[] = {
    ch_ca_mcgill_sable_util_MapE_PL383+30,	/* 0. ca.mcgill.sable.util.Map$Entry */
    0};
