/*  ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.c -- from Java class ca.mcgill.sable.soot.jimple.NewMultiArrayExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.h"
#include "ca_mcgill_sable_soot_jimple_Expr.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Expr.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr[];
extern Class xt_getBaseType__hioHX[];
extern Class xt_setBaseType_A_hfiMZ[];
extern Class xt_getSizeBox_i_kpQKv[];
extern Class xt_getSizeCount__H5p72[];
extern Class xt_getSize_i_Uqvr6[];
extern Class xt_getSizes__WqUQ7[];
extern Class xt_setSize_iV_knorc[];
extern Class xt_getUseBoxes__YtF9W[];
extern Class xt_getType__P8YZD[];
extern Class xt_apply_S_Y5Br3[];

#define HASHMASK 0xff
/*  10.  6d3e3310  (10)  getType  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  61.  8942e761  (61)  hashCode  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  ef.  494d5bef  (ef)  apply  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.M.getType__P8YZD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.M.getUseBoxes__YtF9W,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.M.apply_S_Y5Br3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(45) nmchars = {&acl_char, 0, 45, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','e','w','M','u','l','t','i',
'A','r','r','a','y','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 45 };
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
'g','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','A','r','r','a','y','T','y','p','e',';'};
static const Char nmim_13[] = {
's','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';',')','V'};
static const Char nmim_14[] = {
'g','e','t','S','i','z','e','B','o','x'};
static const Char sgim_14[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e','B','o','x',';'};
static const Char nmim_15[] = {
'g','e','t','S','i','z','e','C','o','u','n','t'};
static const Char sgim_15[] = {
'(',')','I'};
static const Char nmim_16[] = {
'g','e','t','S','i','z','e'};
static const Char sgim_16[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u',
'e',';'};
static const Char nmim_17[] = {
'g','e','t','S','i','z','e','s'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_18[] = {
's','e','t','S','i','z','e'};
static const Char sgim_18[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';',')','V'};
static const Char nmim_19[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_20[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_21[] = {
'a','p','p','l','y'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

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
} inr_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr cl_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr),
    22,
    0,
    0,
    0,
    2, supers,
    2, 2, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr,
    st_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr,
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,34,1,0x401,0,xt_getBaseType__hioHX},
	{TMIT_abstract, 0,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,35,1,0x401,1,xt_setBaseType_A_hfiMZ},
	{TMIT_abstract, 0,(const Char *)&nmim_14,10,
	(const Char *)&sgim_14,41,1,0x401,2,xt_getSizeBox_i_kpQKv},
	{TMIT_abstract, 0,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,3,1,0x401,3,xt_getSizeCount__H5p72},
	{TMIT_abstract, 0,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,38,1,0x401,4,xt_getSize_i_Uqvr6},
	{TMIT_abstract, 0,(const Char *)&nmim_17,8,
	(const Char *)&sgim_17,29,1,0x401,5,xt_getSizes__WqUQ7},
	{TMIT_abstract, 0,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,39,1,0x401,6,xt_setSize_iV_knorc},
	{TMIT_abstract, 0,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,29,1,0x8401,7,xt_getUseBoxes__YtF9W},
	{TMIT_abstract, 0,(const Char *)&nmim_20,7,
	(const Char *)&sgim_20,29,1,0x8401,8,xt_getType__P8YZD},
	{TMIT_abstract, 0,(const Char *)&nmim_21,5,
	(const Char *)&sgim_21,32,1,0x8401,9,xt_apply_S_Y5Br3},
    } /* end of methodsigs */
};


/*M getBaseType__hioHX: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.getBaseType()Lca/mcgill/sable/soot/ArrayType; */

Class xt_getBaseType__hioHX[] = { 0 };

/*M setBaseType_A_hfiMZ: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.setBaseType(Lca/mcgill/sable/soot/ArrayType;)V */

Class xt_setBaseType_A_hfiMZ[] = { 0 };

/*M getSizeBox_i_kpQKv: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.getSizeBox(I)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getSizeBox_i_kpQKv[] = { 0 };

/*M getSizeCount__H5p72: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.getSizeCount()I */

Class xt_getSizeCount__H5p72[] = { 0 };

/*M getSize_i_Uqvr6: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.getSize(I)Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getSize_i_Uqvr6[] = { 0 };

/*M getSizes__WqUQ7: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.getSizes()Lca/mcgill/sable/util/List; */

Class xt_getSizes__WqUQ7[] = { 0 };

/*M setSize_iV_knorc: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.setSize(ILca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setSize_iV_knorc[] = { 0 };

/*M getUseBoxes__YtF9W: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__YtF9W[] = { 0 };

/*M getType__P8YZD: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__P8YZD[] = { 0 };

/*M apply_S_Y5Br3: ca.mcgill.sable.soot.jimple.NewMultiArrayExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_Y5Br3[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','N','e','w','M','u','l','t','i',
'A','r','r','a','y','E','x','p','r'};

const void *st_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_NewMultiArrayExpr+45,	/* 0. ca.mcgill.sable.soot.jimple.NewMultiArra */
    0};
