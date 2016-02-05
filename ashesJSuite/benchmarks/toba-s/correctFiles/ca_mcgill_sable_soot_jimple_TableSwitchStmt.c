/*  ca_mcgill_sable_soot_jimple_TableSwitchStmt.c -- from Java class ca.mcgill.sable.soot.jimple.TableSwitchStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_TableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_TableSwitchStmt[];
extern const void *st_ca_mcgill_sable_soot_jimple_TableSwitchStmt[];
extern Class xt_getDefaultTarget__Sjnrv[];
extern Class xt_setDefaultTarget_U_oBxt9[];
extern Class xt_getDefaultTargetBox__sjKvO[];
extern Class xt_getKey__aIiwG[];
extern Class xt_setKey_V_Y6wZ7[];
extern Class xt_getKeyBox__SDI3k[];
extern Class xt_setLowIndex_i_onegq[];
extern Class xt_setHighIndex_i_EE8rB[];
extern Class xt_getLowIndex__g2f7v[];
extern Class xt_getHighIndex__ExUCO[];
extern Class xt_getTargets__pzliC[];
extern Class xt_getTarget_i_Iyojm[];
extern Class xt_setTarget_iU_u69S0[];
extern Class xt_setTargets_L_LJlow[];
extern Class xt_getTargetBox_i_O6uGy[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(43) nmchars = {&acl_char, 0, 43, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','a','b','l','e','S','w','i',
't','c','h','S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 43 };
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
'g','e','t','D','e','f','a','u','l','t','T','a','r','g','e','t'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';'};
static const Char nmim_13[] = {
's','e','t','D','e','f','a','u','l','t','T','a','r','g','e','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'V'};
static const Char nmim_14[] = {
'g','e','t','D','e','f','a','u','l','t','T','a','r','g','e','t','B','o',
'x'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B',
'o','x',';'};
static const Char nmim_15[] = {
'g','e','t','K','e','y'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_16[] = {
's','e','t','K','e','y'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_17[] = {
'g','e','t','K','e','y','B','o','x'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_18[] = {
's','e','t','L','o','w','I','n','d','e','x'};
static const Char sgim_18[] = {
'(','I',')','V'};
static const Char nmim_19[] = {
's','e','t','H','i','g','h','I','n','d','e','x'};
static const Char sgim_19[] = {
'(','I',')','V'};
static const Char nmim_20[] = {
'g','e','t','L','o','w','I','n','d','e','x'};
static const Char sgim_20[] = {
'(',')','I'};
static const Char nmim_21[] = {
'g','e','t','H','i','g','h','I','n','d','e','x'};
static const Char sgim_21[] = {
'(',')','I'};
static const Char nmim_22[] = {
'g','e','t','T','a','r','g','e','t','s'};
static const Char sgim_22[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_23[] = {
'g','e','t','T','a','r','g','e','t'};
static const Char sgim_23[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
';'};
static const Char nmim_24[] = {
's','e','t','T','a','r','g','e','t'};
static const Char sgim_24[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',
')','V'};
static const Char nmim_25[] = {
's','e','t','T','a','r','g','e','t','s'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','V'};
static const Char nmim_26[] = {
'g','e','t','T','a','r','g','e','t','B','o','x'};
static const Char sgim_26[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
'B','o','x',';'};

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
} inr_ca_mcgill_sable_soot_jimple_TableSwitchStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_TableSwitchStmt),
    27,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_TableSwitchStmt,
    st_ca_mcgill_sable_soot_jimple_TableSwitchStmt,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_TableSwitchStmt,
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,16,
	(const Char *)&sgim_12,36,1,0x401,0,xt_getDefaultTarget__Sjnrv},
	{TMIT_abstract, 0,(const Char *)&nmim_13,16,
	(const Char *)&sgim_13,37,1,0x401,1,xt_setDefaultTarget_U_oBxt9},
	{TMIT_abstract, 0,(const Char *)&nmim_14,19,
	(const Char *)&sgim_14,39,1,0x401,2,xt_getDefaultTargetBox__sjKvO},
	{TMIT_abstract, 0,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,37,1,0x401,3,xt_getKey__aIiwG},
	{TMIT_abstract, 0,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,38,1,0x401,4,xt_setKey_V_Y6wZ7},
	{TMIT_abstract, 0,(const Char *)&nmim_17,9,
	(const Char *)&sgim_17,40,1,0x401,5,xt_getKeyBox__SDI3k},
	{TMIT_abstract, 0,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,4,1,0x401,6,xt_setLowIndex_i_onegq},
	{TMIT_abstract, 0,(const Char *)&nmim_19,12,
	(const Char *)&sgim_19,4,1,0x401,7,xt_setHighIndex_i_EE8rB},
	{TMIT_abstract, 0,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,3,1,0x401,8,xt_getLowIndex__g2f7v},
	{TMIT_abstract, 0,(const Char *)&nmim_21,12,
	(const Char *)&sgim_21,3,1,0x401,9,xt_getHighIndex__ExUCO},
	{TMIT_abstract, 0,(const Char *)&nmim_22,10,
	(const Char *)&sgim_22,29,1,0x401,10,xt_getTargets__pzliC},
	{TMIT_abstract, 0,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,37,1,0x401,11,xt_getTarget_i_Iyojm},
	{TMIT_abstract, 0,(const Char *)&nmim_24,9,
	(const Char *)&sgim_24,38,1,0x401,12,xt_setTarget_iU_u69S0},
	{TMIT_abstract, 0,(const Char *)&nmim_25,10,
	(const Char *)&sgim_25,30,1,0x401,13,xt_setTargets_L_LJlow},
	{TMIT_abstract, 0,(const Char *)&nmim_26,12,
	(const Char *)&sgim_26,40,1,0x401,14,xt_getTargetBox_i_O6uGy},
    } /* end of methodsigs */
};


/*M getDefaultTarget__Sjnrv: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getDefaultTarget()Lca/mcgill/sable/soot/jimple/Unit; */

Class xt_getDefaultTarget__Sjnrv[] = { 0 };

/*M setDefaultTarget_U_oBxt9: ca.mcgill.sable.soot.jimple.TableSwitchStmt.setDefaultTarget(Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setDefaultTarget_U_oBxt9[] = { 0 };

/*M getDefaultTargetBox__sjKvO: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getDefaultTargetBox()Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getDefaultTargetBox__sjKvO[] = { 0 };

/*M getKey__aIiwG: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getKey()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getKey__aIiwG[] = { 0 };

/*M setKey_V_Y6wZ7: ca.mcgill.sable.soot.jimple.TableSwitchStmt.setKey(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setKey_V_Y6wZ7[] = { 0 };

/*M getKeyBox__SDI3k: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getKeyBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getKeyBox__SDI3k[] = { 0 };

/*M setLowIndex_i_onegq: ca.mcgill.sable.soot.jimple.TableSwitchStmt.setLowIndex(I)V */

Class xt_setLowIndex_i_onegq[] = { 0 };

/*M setHighIndex_i_EE8rB: ca.mcgill.sable.soot.jimple.TableSwitchStmt.setHighIndex(I)V */

Class xt_setHighIndex_i_EE8rB[] = { 0 };

/*M getLowIndex__g2f7v: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getLowIndex()I */

Class xt_getLowIndex__g2f7v[] = { 0 };

/*M getHighIndex__ExUCO: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getHighIndex()I */

Class xt_getHighIndex__ExUCO[] = { 0 };

/*M getTargets__pzliC: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getTargets()Lca/mcgill/sable/util/List; */

Class xt_getTargets__pzliC[] = { 0 };

/*M getTarget_i_Iyojm: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getTarget(I)Lca/mcgill/sable/soot/jimple/Unit; */

Class xt_getTarget_i_Iyojm[] = { 0 };

/*M setTarget_iU_u69S0: ca.mcgill.sable.soot.jimple.TableSwitchStmt.setTarget(ILca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setTarget_iU_u69S0[] = { 0 };

/*M setTargets_L_LJlow: ca.mcgill.sable.soot.jimple.TableSwitchStmt.setTargets(Lca/mcgill/sable/util/List;)V */

Class xt_setTargets_L_LJlow[] = { 0 };

/*M getTargetBox_i_O6uGy: ca.mcgill.sable.soot.jimple.TableSwitchStmt.getTargetBox(I)Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getTargetBox_i_O6uGy[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_TableSwitchStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','a','b','l','e','S','w','i',
't','c','h','S','t','m','t'};

const void *st_ca_mcgill_sable_soot_jimple_TableSwitchStmt[] = {
    ch_ca_mcgill_sable_soot_jimple_TableSwitchStmt+43,	/* 0. ca.mcgill.sable.soot.jimple.TableSwitchS */
    0};
