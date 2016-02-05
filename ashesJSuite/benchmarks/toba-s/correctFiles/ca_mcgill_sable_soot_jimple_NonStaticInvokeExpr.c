/*  ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.c -- from Java class ca.mcgill.sable.soot.jimple.NonStaticInvokeExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr[];
extern Class xt_getBase__i2Yah[];
extern Class xt_getBaseBox__s2dH4[];
extern Class xt_setBase_V_ufpNV[];
extern Class xt_getUseBoxes__f73BY[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.M.getUseBoxes__f73BY,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(47) nmchars = {&acl_char, 0, 47, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','o','n','S','t','a','t','i',
'c','I','n','v','o','k','e','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 47 };
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
'g','e','t','B','a','s','e'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_13[] = {
'g','e','t','B','a','s','e','B','o','x'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_14[] = {
's','e','t','B','a','s','e'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_15[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};

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
} inr_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr),
    16,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr,
    st_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
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
	(const Char *)&sgim_12,37,1,0x401,0,xt_getBase__i2Yah},
	{TMIT_abstract, 0,(const Char *)&nmim_13,10,
	(const Char *)&sgim_13,40,1,0x401,1,xt_getBaseBox__s2dH4},
	{TMIT_abstract, 0,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,38,1,0x401,2,xt_setBase_V_ufpNV},
	{TMIT_abstract, 0,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,29,1,0x8401,3,xt_getUseBoxes__f73BY},
    } /* end of methodsigs */
};


/*M getBase__i2Yah: ca.mcgill.sable.soot.jimple.NonStaticInvokeExpr.getBase()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getBase__i2Yah[] = { 0 };

/*M getBaseBox__s2dH4: ca.mcgill.sable.soot.jimple.NonStaticInvokeExpr.getBaseBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getBaseBox__s2dH4[] = { 0 };

/*M setBase_V_ufpNV: ca.mcgill.sable.soot.jimple.NonStaticInvokeExpr.setBase(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setBase_V_ufpNV[] = { 0 };

/*M getUseBoxes__f73BY: ca.mcgill.sable.soot.jimple.NonStaticInvokeExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__f73BY[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','o','n','S','t','a','t','i',
'c','I','n','v','o','k','e','E','x','p','r'};

const void *st_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr+47,	/* 0. ca.mcgill.sable.soot.jimple.NonStaticInv */
    0};
