/*  ca_mcgill_sable_soot_jimple_EqualLocals.c -- from Java class ca.mcgill.sable.soot.jimple.EqualLocals  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_EqualLocals.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_EqualLocals.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_EqualLocals[];
extern const void *st_ca_mcgill_sable_soot_jimple_EqualLocals[];
extern Class xt_isLocalEqualToAt_LLS_x7Qxt[];
extern Class xt_getCopiesAt_S_ERJt5[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_EqualLocals.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_EqualLocals.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_EqualLocals.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_EqualLocals.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(39) nmchars = {&acl_char, 0, 39, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','E','q','u','a','l','L','o','c',
'a','l','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 39 };
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
'i','s','L','o','c','a','l','E','q','u','a','l','T','o','A','t'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')','Z'};
static const Char nmim_13[] = {
'g','e','t','C','o','p','i','e','s','A','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};

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
} inr_ca_mcgill_sable_soot_jimple_EqualLocals = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_EqualLocals.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_EqualLocals cl_ca_mcgill_sable_soot_jimple_EqualLocals = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_EqualLocals),
    14,
    0,
    0,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_EqualLocals,
    st_ca_mcgill_sable_soot_jimple_EqualLocals,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_EqualLocals,
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,16,
	(const Char *)&sgim_12,107,1,0x401,0,xt_isLocalEqualToAt_LLS_x7Qxt},
	{TMIT_abstract, 0,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,63,1,0x401,1,xt_getCopiesAt_S_ERJt5},
    } /* end of methodsigs */
};


/*M isLocalEqualToAt_LLS_x7Qxt: ca.mcgill.sable.soot.jimple.EqualLocals.isLocalEqualToAt(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/jimple/Stmt;)Z */

Class xt_isLocalEqualToAt_LLS_x7Qxt[] = { 0 };

/*M getCopiesAt_S_ERJt5: ca.mcgill.sable.soot.jimple.EqualLocals.getCopiesAt(Lca/mcgill/sable/soot/jimple/Stmt;)Lca/mcgill/sable/util/List; */

Class xt_getCopiesAt_S_ERJt5[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_EqualLocals[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','E','q','u','a','l','L','o','c',
'a','l','s'};

const void *st_ca_mcgill_sable_soot_jimple_EqualLocals[] = {
    ch_ca_mcgill_sable_soot_jimple_EqualLocals+39,	/* 0. ca.mcgill.sable.soot.jimple.EqualLocals */
    0};
