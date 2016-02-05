/*  ca_mcgill_sable_soot_jimple_IfStmt.c -- from Java class ca.mcgill.sable.soot.jimple.IfStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_IfStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_IfStmt[];
extern const void *st_ca_mcgill_sable_soot_jimple_IfStmt[];
extern Class xt_getCondition__Vr5iU[];
extern Class xt_setCondition_V_VggWv[];
extern Class xt_getConditionBox__jdwR2[];
extern Class xt_getTarget__OMyGy[];
extern Class xt_setTarget_U_88Wjg[];
extern Class xt_getTargetBox__KVGY8[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_IfStmt.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_IfStmt.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_IfStmt.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(34) nmchars = {&acl_char, 0, 34, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','I','f','S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 34 };
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
'g','e','t','C','o','n','d','i','t','i','o','n'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_13[] = {
's','e','t','C','o','n','d','i','t','i','o','n'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_14[] = {
'g','e','t','C','o','n','d','i','t','i','o','n','B','o','x'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_15[] = {
'g','e','t','T','a','r','g','e','t'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';'};
static const Char nmim_16[] = {
's','e','t','T','a','r','g','e','t'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'V'};
static const Char nmim_17[] = {
'g','e','t','T','a','r','g','e','t','B','o','x'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B',
'o','x',';'};

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
} inr_ca_mcgill_sable_soot_jimple_IfStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_IfStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_IfStmt cl_ca_mcgill_sable_soot_jimple_IfStmt = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_IfStmt),
    18,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_IfStmt,
    st_ca_mcgill_sable_soot_jimple_IfStmt,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_IfStmt,
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,37,1,0x401,0,xt_getCondition__Vr5iU},
	{TMIT_abstract, 0,(const Char *)&nmim_13,12,
	(const Char *)&sgim_13,38,1,0x401,1,xt_setCondition_V_VggWv},
	{TMIT_abstract, 0,(const Char *)&nmim_14,15,
	(const Char *)&sgim_14,40,1,0x401,2,xt_getConditionBox__jdwR2},
	{TMIT_abstract, 0,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,36,1,0x401,3,xt_getTarget__OMyGy},
	{TMIT_abstract, 0,(const Char *)&nmim_16,9,
	(const Char *)&sgim_16,37,1,0x401,4,xt_setTarget_U_88Wjg},
	{TMIT_abstract, 0,(const Char *)&nmim_17,12,
	(const Char *)&sgim_17,39,1,0x401,5,xt_getTargetBox__KVGY8},
    } /* end of methodsigs */
};


/*M getCondition__Vr5iU: ca.mcgill.sable.soot.jimple.IfStmt.getCondition()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getCondition__Vr5iU[] = { 0 };

/*M setCondition_V_VggWv: ca.mcgill.sable.soot.jimple.IfStmt.setCondition(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setCondition_V_VggWv[] = { 0 };

/*M getConditionBox__jdwR2: ca.mcgill.sable.soot.jimple.IfStmt.getConditionBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getConditionBox__jdwR2[] = { 0 };

/*M getTarget__OMyGy: ca.mcgill.sable.soot.jimple.IfStmt.getTarget()Lca/mcgill/sable/soot/jimple/Stmt; */

Class xt_getTarget__OMyGy[] = { 0 };

/*M setTarget_U_88Wjg: ca.mcgill.sable.soot.jimple.IfStmt.setTarget(Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setTarget_U_88Wjg[] = { 0 };

/*M getTargetBox__KVGY8: ca.mcgill.sable.soot.jimple.IfStmt.getTargetBox()Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getTargetBox__KVGY8[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_IfStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','I','f','S','t','m','t'};

const void *st_ca_mcgill_sable_soot_jimple_IfStmt[] = {
    ch_ca_mcgill_sable_soot_jimple_IfStmt+34,	/* 0. ca.mcgill.sable.soot.jimple.IfStmt */
    0};
