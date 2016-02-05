/*  ca_mcgill_sable_util_ListIterator.c -- from Java class ca.mcgill.sable.util.ListIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_UnsupportedOperationException.h"
#include "java_util_NoSuchElementException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_ListIterator.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Iterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_UnsupportedOperationException.C,
    &cl_java_util_NoSuchElementException.C,
};

extern const Char ch_ca_mcgill_sable_util_ListIterator[];
extern const void *st_ca_mcgill_sable_util_ListIterator[];
extern Class xt_hasNext__5JvbE[];
extern Class xt_next__Badii[];
extern Class xt_hasPrevious__tabl8[];
extern Class xt_previous__1H88q[];
extern Class xt_nextIndex__Cu01o[];
extern Class xt_previousIndex__QkHFq[];
extern Class xt_remove__QjN3p[];
extern Class xt_set_O_0entx[];
extern Class xt_add_O_ZM3Zs[];

#define HASHMASK 0xf
/*  0.  36e9ff20  (0)  next  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  697034e6  (6)  hasNext  */
/*  9.  9bb4ac89  (9)  remove  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    921304864, &cl_ca_mcgill_sable_util_ListIterator.M.next__Badii,
    -1992104095, &cl_ca_mcgill_sable_util_ListIterator.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_ListIterator.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_ListIterator.M.hasNext__5JvbE,
    0, 0, 0, 0,
    -1682658167, &cl_ca_mcgill_sable_util_ListIterator.M.remove__QjN3p,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_ListIterator.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_ListIterator.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(33) nmchars = {&acl_char, 0, 33, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','s','t','I','t','e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 33 };
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
'h','a','s','N','e','x','t'};
static const Char sgim_12[] = {
'(',')','Z'};
static const Char nmim_13[] = {
'n','e','x','t'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
'h','a','s','P','r','e','v','i','o','u','s'};
static const Char sgim_14[] = {
'(',')','Z'};
static const Char nmim_15[] = {
'p','r','e','v','i','o','u','s'};
static const Char sgim_15[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_16[] = {
'n','e','x','t','I','n','d','e','x'};
static const Char sgim_16[] = {
'(',')','I'};
static const Char nmim_17[] = {
'p','r','e','v','i','o','u','s','I','n','d','e','x'};
static const Char sgim_17[] = {
'(',')','I'};
static const Char nmim_18[] = {
'r','e','m','o','v','e'};
static const Char sgim_18[] = {
'(',')','V'};
static const Char nmim_19[] = {
's','e','t'};
static const Char sgim_19[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_20[] = {
'a','d','d'};
static const Char sgim_20[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};

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
} inr_ca_mcgill_sable_util_ListIterator = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_ListIterator.C.classclass, 0};

struct cl_ca_mcgill_sable_util_ListIterator cl_ca_mcgill_sable_util_ListIterator = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_ListIterator),
    21,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_util_ListIterator,
    st_ca_mcgill_sable_util_ListIterator,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_ListIterator,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,3,1,0x8401,0,xt_hasNext__5JvbE},
	{TMIT_abstract, 0,(const Char *)&nmim_13,4,
	(const Char *)&sgim_13,20,1,0x8401,1,xt_next__Badii},
	{TMIT_abstract, 0,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,3,1,0x401,2,xt_hasPrevious__tabl8},
	{TMIT_abstract, 0,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,20,1,0x401,3,xt_previous__1H88q},
	{TMIT_abstract, 0,(const Char *)&nmim_16,9,
	(const Char *)&sgim_16,3,1,0x401,4,xt_nextIndex__Cu01o},
	{TMIT_abstract, 0,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,3,1,0x401,5,xt_previousIndex__QkHFq},
	{TMIT_abstract, 0,(const Char *)&nmim_18,6,
	(const Char *)&sgim_18,3,1,0x8401,6,xt_remove__QjN3p},
	{TMIT_abstract, 0,(const Char *)&nmim_19,3,
	(const Char *)&sgim_19,21,1,0x401,7,xt_set_O_0entx},
	{TMIT_abstract, 0,(const Char *)&nmim_20,3,
	(const Char *)&sgim_20,21,1,0x401,8,xt_add_O_ZM3Zs},
    } /* end of methodsigs */
};


/*M hasNext__5JvbE: ca.mcgill.sable.util.ListIterator.hasNext()Z */

Class xt_hasNext__5JvbE[] = { 0 };

/*M next__Badii: ca.mcgill.sable.util.ListIterator.next()Ljava/lang/Object; */

Class xt_next__Badii[] = { &cl_java_util_NoSuchElementException.C, 0 };

/*M hasPrevious__tabl8: ca.mcgill.sable.util.ListIterator.hasPrevious()Z */

Class xt_hasPrevious__tabl8[] = { 0 };

/*M previous__1H88q: ca.mcgill.sable.util.ListIterator.previous()Ljava/lang/Object; */

Class xt_previous__1H88q[] = { &cl_java_util_NoSuchElementException.C, 0 };

/*M nextIndex__Cu01o: ca.mcgill.sable.util.ListIterator.nextIndex()I */

Class xt_nextIndex__Cu01o[] = { 0 };

/*M previousIndex__QkHFq: ca.mcgill.sable.util.ListIterator.previousIndex()I */

Class xt_previousIndex__QkHFq[] = { 0 };

/*M remove__QjN3p: ca.mcgill.sable.util.ListIterator.remove()V */

Class xt_remove__QjN3p[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_util_NoSuchElementException.C, 0 };

/*M set_O_0entx: ca.mcgill.sable.util.ListIterator.set(Ljava/lang/Object;)V */

Class xt_set_O_0entx[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, &cl_java_util_NoSuchElementException.C, 0 };

/*M add_O_ZM3Zs: ca.mcgill.sable.util.ListIterator.add(Ljava/lang/Object;)V */

Class xt_add_O_ZM3Zs[] = { &cl_ca_mcgill_sable_util_UnsupportedOperationException.C, 0 };



const Char ch_ca_mcgill_sable_util_ListIterator[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','s','t','I','t','e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_ListIterator[] = {
    ch_ca_mcgill_sable_util_ListIterator+33,	/* 0. ca.mcgill.sable.util.ListIterator */
    0};
