/*  ca_mcgill_sable_soot_jimple_LookupSwitchStmt.c -- from Java class ca.mcgill.sable.soot.jimple.LookupSwitchStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_LookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_LookupSwitchStmt[];
extern const void *st_ca_mcgill_sable_soot_jimple_LookupSwitchStmt[];
extern Class xt_getDefaultTarget__SFt6Y[];
extern Class xt_setDefaultTarget_U_GADGG[];
extern Class xt_getDefaultTargetBox__Yfv87[];
extern Class xt_getKey__glEd1[];
extern Class xt_setKey_V_UwzPV[];
extern Class xt_getKeyBox__uDrxr[];
extern Class xt_setLookupValues_L_rBBMi[];
extern Class xt_setLookupValue_ii_AkmgC[];
extern Class xt_getLookupValue_i_URPMS[];
extern Class xt_getLookupValues__lvni2[];
extern Class xt_getTargetCount__a6FZ9[];
extern Class xt_getTarget_i_gMv3R[];
extern Class xt_getTargetBox_i_kNkaQ[];
extern Class xt_setTarget_iU_2WPqM[];
extern Class xt_getTargets__PaLEP[];
extern Class xt_setTargets_aU_jGACK[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(44) nmchars = {&acl_char, 0, 44, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','L','o','o','k','u','p','S','w',
'i','t','c','h','S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 44 };
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
's','e','t','L','o','o','k','u','p','V','a','l','u','e','s'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','V'};
static const Char nmim_19[] = {
's','e','t','L','o','o','k','u','p','V','a','l','u','e'};
static const Char sgim_19[] = {
'(','I','I',')','V'};
static const Char nmim_20[] = {
'g','e','t','L','o','o','k','u','p','V','a','l','u','e'};
static const Char sgim_20[] = {
'(','I',')','I'};
static const Char nmim_21[] = {
'g','e','t','L','o','o','k','u','p','V','a','l','u','e','s'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_22[] = {
'g','e','t','T','a','r','g','e','t','C','o','u','n','t'};
static const Char sgim_22[] = {
'(',')','I'};
static const Char nmim_23[] = {
'g','e','t','T','a','r','g','e','t'};
static const Char sgim_23[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
';'};
static const Char nmim_24[] = {
'g','e','t','T','a','r','g','e','t','B','o','x'};
static const Char sgim_24[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
'B','o','x',';'};
static const Char nmim_25[] = {
's','e','t','T','a','r','g','e','t'};
static const Char sgim_25[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',
')','V'};
static const Char nmim_26[] = {
'g','e','t','T','a','r','g','e','t','s'};
static const Char sgim_26[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_27[] = {
's','e','t','T','a','r','g','e','t','s'};
static const Char sgim_27[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',
')','V'};

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
} inr_ca_mcgill_sable_soot_jimple_LookupSwitchStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_LookupSwitchStmt),
    28,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_LookupSwitchStmt,
    st_ca_mcgill_sable_soot_jimple_LookupSwitchStmt,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_LookupSwitchStmt,
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
	(const Char *)&sgim_12,36,1,0x401,0,xt_getDefaultTarget__SFt6Y},
	{TMIT_abstract, 0,(const Char *)&nmim_13,16,
	(const Char *)&sgim_13,37,1,0x401,1,xt_setDefaultTarget_U_GADGG},
	{TMIT_abstract, 0,(const Char *)&nmim_14,19,
	(const Char *)&sgim_14,39,1,0x401,2,xt_getDefaultTargetBox__Yfv87},
	{TMIT_abstract, 0,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,37,1,0x401,3,xt_getKey__glEd1},
	{TMIT_abstract, 0,(const Char *)&nmim_16,6,
	(const Char *)&sgim_16,38,1,0x401,4,xt_setKey_V_UwzPV},
	{TMIT_abstract, 0,(const Char *)&nmim_17,9,
	(const Char *)&sgim_17,40,1,0x401,5,xt_getKeyBox__uDrxr},
	{TMIT_abstract, 0,(const Char *)&nmim_18,15,
	(const Char *)&sgim_18,30,1,0x401,6,xt_setLookupValues_L_rBBMi},
	{TMIT_abstract, 0,(const Char *)&nmim_19,14,
	(const Char *)&sgim_19,5,1,0x401,7,xt_setLookupValue_ii_AkmgC},
	{TMIT_abstract, 0,(const Char *)&nmim_20,14,
	(const Char *)&sgim_20,4,1,0x401,8,xt_getLookupValue_i_URPMS},
	{TMIT_abstract, 0,(const Char *)&nmim_21,15,
	(const Char *)&sgim_21,29,1,0x401,9,xt_getLookupValues__lvni2},
	{TMIT_abstract, 0,(const Char *)&nmim_22,14,
	(const Char *)&sgim_22,3,1,0x401,10,xt_getTargetCount__a6FZ9},
	{TMIT_abstract, 0,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,37,1,0x401,11,xt_getTarget_i_gMv3R},
	{TMIT_abstract, 0,(const Char *)&nmim_24,12,
	(const Char *)&sgim_24,40,1,0x401,12,xt_getTargetBox_i_kNkaQ},
	{TMIT_abstract, 0,(const Char *)&nmim_25,9,
	(const Char *)&sgim_25,38,1,0x401,13,xt_setTarget_iU_2WPqM},
	{TMIT_abstract, 0,(const Char *)&nmim_26,10,
	(const Char *)&sgim_26,29,1,0x401,14,xt_getTargets__PaLEP},
	{TMIT_abstract, 0,(const Char *)&nmim_27,10,
	(const Char *)&sgim_27,38,1,0x401,15,xt_setTargets_aU_jGACK},
    } /* end of methodsigs */
};


/*M getDefaultTarget__SFt6Y: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getDefaultTarget()Lca/mcgill/sable/soot/jimple/Unit; */

Class xt_getDefaultTarget__SFt6Y[] = { 0 };

/*M setDefaultTarget_U_GADGG: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.setDefaultTarget(Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setDefaultTarget_U_GADGG[] = { 0 };

/*M getDefaultTargetBox__Yfv87: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getDefaultTargetBox()Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getDefaultTargetBox__Yfv87[] = { 0 };

/*M getKey__glEd1: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getKey()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getKey__glEd1[] = { 0 };

/*M setKey_V_UwzPV: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.setKey(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setKey_V_UwzPV[] = { 0 };

/*M getKeyBox__uDrxr: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getKeyBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getKeyBox__uDrxr[] = { 0 };

/*M setLookupValues_L_rBBMi: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.setLookupValues(Lca/mcgill/sable/util/List;)V */

Class xt_setLookupValues_L_rBBMi[] = { 0 };

/*M setLookupValue_ii_AkmgC: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.setLookupValue(II)V */

Class xt_setLookupValue_ii_AkmgC[] = { 0 };

/*M getLookupValue_i_URPMS: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getLookupValue(I)I */

Class xt_getLookupValue_i_URPMS[] = { 0 };

/*M getLookupValues__lvni2: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getLookupValues()Lca/mcgill/sable/util/List; */

Class xt_getLookupValues__lvni2[] = { 0 };

/*M getTargetCount__a6FZ9: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getTargetCount()I */

Class xt_getTargetCount__a6FZ9[] = { 0 };

/*M getTarget_i_gMv3R: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getTarget(I)Lca/mcgill/sable/soot/jimple/Unit; */

Class xt_getTarget_i_gMv3R[] = { 0 };

/*M getTargetBox_i_kNkaQ: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getTargetBox(I)Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getTargetBox_i_kNkaQ[] = { 0 };

/*M setTarget_iU_2WPqM: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.setTarget(ILca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setTarget_iU_2WPqM[] = { 0 };

/*M getTargets__PaLEP: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.getTargets()Lca/mcgill/sable/util/List; */

Class xt_getTargets__PaLEP[] = { 0 };

/*M setTargets_aU_jGACK: ca.mcgill.sable.soot.jimple.LookupSwitchStmt.setTargets([Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setTargets_aU_jGACK[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_LookupSwitchStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','L','o','o','k','u','p','S','w',
'i','t','c','h','S','t','m','t'};

const void *st_ca_mcgill_sable_soot_jimple_LookupSwitchStmt[] = {
    ch_ca_mcgill_sable_soot_jimple_LookupSwitchStmt+44,	/* 0. ca.mcgill.sable.soot.jimple.LookupSwitch */
    0};
