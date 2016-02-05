/*  ca_mcgill_sable_soot_jimple_BinopExpr.c -- from Java class ca.mcgill.sable.soot.jimple.BinopExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_BinopExpr.h"
#include "ca_mcgill_sable_soot_jimple_Expr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_BinopExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Expr.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_BinopExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_BinopExpr[];
extern Class xt_getOp1__2hUVt[];
extern Class xt_getOp2__v9Klg[];
extern Class xt_getOp1Box__M3J15[];
extern Class xt_getOp2Box__lVnm3[];
extern Class xt_setOp1_V_KydCN[];
extern Class xt_setOp2_V_bsFm4[];
extern Class xt_getUseBoxes__OyW48[];
extern Class xt_getSymbol__2Me45[];
extern Class xt_toString__2ILHw[];
extern Class xt_toBriefString__cz479[];

#define HASHMASK 0x7
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
static const struct ihash htable[9] = {
    0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_BinopExpr.M.getUseBoxes__OyW48,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_BinopExpr.M.toBriefString__cz479,
    0, 0,
};

static const CARRAY(37) nmchars = {&acl_char, 0, 37, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','B','i','n','o','p','E','x','p',
'r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 37 };
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
'g','e','t','O','p','1'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_13[] = {
'g','e','t','O','p','2'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_14[] = {
'g','e','t','O','p','1','B','o','x'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_15[] = {
'g','e','t','O','p','2','B','o','x'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_16[] = {
's','e','t','O','p','1'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_17[] = {
's','e','t','O','p','2'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_18[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'g','e','t','S','y','m','b','o','l'};
static const Char sgim_19[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_20[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_20[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};

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
} inr_ca_mcgill_sable_soot_jimple_BinopExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_BinopExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_BinopExpr cl_ca_mcgill_sable_soot_jimple_BinopExpr = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_BinopExpr),
    21,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_BinopExpr,
    st_ca_mcgill_sable_soot_jimple_BinopExpr,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_BinopExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x1,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8wJNW,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x101,6,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_abstract, 0,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x401,8,xt_toString__2ILHw},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_abstract, 0,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,37,1,0x401,0,xt_getOp1__2hUVt},
	{TMIT_abstract, 0,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,37,1,0x401,1,xt_getOp2__v9Klg},
	{TMIT_abstract, 0,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,40,1,0x401,2,xt_getOp1Box__M3J15},
	{TMIT_abstract, 0,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,40,1,0x401,3,xt_getOp2Box__lVnm3},
	{TMIT_abstract, 0,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,38,1,0x401,4,xt_setOp1_V_KydCN},
	{TMIT_abstract, 0,(const Char *)&nmim_17,6,
	(const Char *)&sgim_17,38,1,0x401,5,xt_setOp2_V_bsFm4},
	{TMIT_abstract, 0,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,29,1,0x8401,6,xt_getUseBoxes__OyW48},
	{TMIT_abstract, 0,(const Char *)&nmim_19,9,
	(const Char *)&sgim_19,20,1,0x401,7,xt_getSymbol__2Me45},
	{TMIT_abstract, 0,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,20,1,0x8401,9,xt_toBriefString__cz479},
    } /* end of methodsigs */
};


/*M getOp1__2hUVt: ca.mcgill.sable.soot.jimple.BinopExpr.getOp1()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getOp1__2hUVt[] = { 0 };

/*M getOp2__v9Klg: ca.mcgill.sable.soot.jimple.BinopExpr.getOp2()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getOp2__v9Klg[] = { 0 };

/*M getOp1Box__M3J15: ca.mcgill.sable.soot.jimple.BinopExpr.getOp1Box()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getOp1Box__M3J15[] = { 0 };

/*M getOp2Box__lVnm3: ca.mcgill.sable.soot.jimple.BinopExpr.getOp2Box()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getOp2Box__lVnm3[] = { 0 };

/*M setOp1_V_KydCN: ca.mcgill.sable.soot.jimple.BinopExpr.setOp1(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setOp1_V_KydCN[] = { 0 };

/*M setOp2_V_bsFm4: ca.mcgill.sable.soot.jimple.BinopExpr.setOp2(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setOp2_V_bsFm4[] = { 0 };

/*M getUseBoxes__OyW48: ca.mcgill.sable.soot.jimple.BinopExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__OyW48[] = { 0 };

/*M getSymbol__2Me45: ca.mcgill.sable.soot.jimple.BinopExpr.getSymbol()Ljava/lang/String; */

Class xt_getSymbol__2Me45[] = { 0 };

/*M toString__2ILHw: ca.mcgill.sable.soot.jimple.BinopExpr.toString()Ljava/lang/String; */

Class xt_toString__2ILHw[] = { 0 };

/*M toBriefString__cz479: ca.mcgill.sable.soot.jimple.BinopExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__cz479[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_BinopExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','B','i','n','o','p','E','x','p',
'r'};

const void *st_ca_mcgill_sable_soot_jimple_BinopExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_BinopExpr+37,	/* 0. ca.mcgill.sable.soot.jimple.BinopExpr */
    0};
