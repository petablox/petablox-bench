/*  ca_mcgill_sable_soot_jimple_StmtBody.c -- from Java class ca.mcgill.sable.soot.jimple.StmtBody  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_StmtBody.h"
#include "ca_mcgill_sable_soot_Body.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtBody.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_Body.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_StmtBody[];
extern const void *st_ca_mcgill_sable_soot_jimple_StmtBody[];
extern Class xt_getStmtList__adslk[];
extern Class xt_redirectJumps_SS_A5gnI[];
extern Class xt_eliminateBackPointersTo_S_YPOH9[];
extern Class xt_getTraps__NjUz2[];
extern Class xt_getLocalCount__8xoLM[];
extern Class xt_getLocals__BhFlN[];
extern Class xt_getUnitBoxes__OgVaM[];

#define HASHMASK 0x0
/*  0.  489f8e6f  (0)  toString  */
static const struct ihash htable[2] = {
    1218416239, &cl_ca_mcgill_sable_soot_jimple_StmtBody.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t','B','o','d','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
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
'g','e','t','S','t','m','t','L','i','s','t'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L',
'i','s','t',';'};
static const Char nmim_13[] = {
'r','e','d','i','r','e','c','t','J','u','m','p','s'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')','V'};
static const Char nmim_14[] = {
'e','l','i','m','i','n','a','t','e','B','a','c','k','P','o','i','n','t',
'e','r','s','T','o'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'V'};
static const Char nmim_15[] = {
'g','e','t','T','r','a','p','s'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_16[] = {
'g','e','t','L','o','c','a','l','C','o','u','n','t'};
static const Char sgim_16[] = {
'(',')','I'};
static const Char nmim_17[] = {
'g','e','t','L','o','c','a','l','s'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_18[] = {
'g','e','t','U','n','i','t','B','o','x','e','s'};
static const Char sgim_18[] = {
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
} inr_ca_mcgill_sable_soot_jimple_StmtBody = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_StmtBody.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_StmtBody cl_ca_mcgill_sable_soot_jimple_StmtBody = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_StmtBody),
    19,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_StmtBody,
    st_ca_mcgill_sable_soot_jimple_StmtBody,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_StmtBody,
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
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_abstract, 0,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,40,1,0x401,0,xt_getStmtList__adslk},
	{TMIT_abstract, 0,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,71,1,0x401,1,xt_redirectJumps_SS_A5gnI},
	{TMIT_abstract, 0,(const Char *)&nmim_14,23,
	(const Char *)&sgim_14,37,1,0x401,2,xt_eliminateBackPointersTo_S_YPOH9},
	{TMIT_abstract, 0,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,29,1,0x401,3,xt_getTraps__NjUz2},
	{TMIT_abstract, 0,(const Char *)&nmim_16,13,
	(const Char *)&sgim_16,3,1,0x401,4,xt_getLocalCount__8xoLM},
	{TMIT_abstract, 0,(const Char *)&nmim_17,9,
	(const Char *)&sgim_17,29,1,0x401,5,xt_getLocals__BhFlN},
	{TMIT_abstract, 0,(const Char *)&nmim_18,12,
	(const Char *)&sgim_18,29,1,0x401,6,xt_getUnitBoxes__OgVaM},
    } /* end of methodsigs */
};


/*M getStmtList__adslk: ca.mcgill.sable.soot.jimple.StmtBody.getStmtList()Lca/mcgill/sable/soot/jimple/StmtList; */

Class xt_getStmtList__adslk[] = { 0 };

/*M redirectJumps_SS_A5gnI: ca.mcgill.sable.soot.jimple.StmtBody.redirectJumps(Lca/mcgill/sable/soot/jimple/Stmt;Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_redirectJumps_SS_A5gnI[] = { 0 };

/*M eliminateBackPointersTo_S_YPOH9: ca.mcgill.sable.soot.jimple.StmtBody.eliminateBackPointersTo(Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_eliminateBackPointersTo_S_YPOH9[] = { 0 };

/*M getTraps__NjUz2: ca.mcgill.sable.soot.jimple.StmtBody.getTraps()Lca/mcgill/sable/util/List; */

Class xt_getTraps__NjUz2[] = { 0 };

/*M getLocalCount__8xoLM: ca.mcgill.sable.soot.jimple.StmtBody.getLocalCount()I */

Class xt_getLocalCount__8xoLM[] = { 0 };

/*M getLocals__BhFlN: ca.mcgill.sable.soot.jimple.StmtBody.getLocals()Lca/mcgill/sable/util/List; */

Class xt_getLocals__BhFlN[] = { 0 };

/*M getUnitBoxes__OgVaM: ca.mcgill.sable.soot.jimple.StmtBody.getUnitBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUnitBoxes__OgVaM[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_StmtBody[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t','B','o','d','y'};

const void *st_ca_mcgill_sable_soot_jimple_StmtBody[] = {
    ch_ca_mcgill_sable_soot_jimple_StmtBody+36,	/* 0. ca.mcgill.sable.soot.jimple.StmtBody */
    0};
