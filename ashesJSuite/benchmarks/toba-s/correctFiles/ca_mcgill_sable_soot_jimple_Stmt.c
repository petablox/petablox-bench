/*  ca_mcgill_sable_soot_jimple_Stmt.c -- from Java class ca.mcgill.sable.soot.jimple.Stmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_Unit.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Unit.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_Stmt[];
extern const void *st_ca_mcgill_sable_soot_jimple_Stmt[];
extern Class xt_getUseBoxes__fntzF[];
extern Class xt_getDefBoxes__Ztnlx[];
extern Class xt_getUnitBoxes__giwSE[];
extern Class xt_getBoxesPointingToThis__J1wk8[];
extern Class xt_getUseAndDefBoxes__pB8Pd[];
extern Class xt_apply_S_pGzuK[];
extern Class xt_toBriefString__xCRk4[];
extern Class xt_toBriefString_M_Fpalr[];
extern Class xt_toBriefString_S_dWfnF[];
extern Class xt_toBriefString_MS_pjeM9[];
extern Class xt_toString__rnFYu[];
extern Class xt_toString_M_xTLUA[];
extern Class xt_toString_S_py2Lf[];
extern Class xt_toString_MS_Rxoee[];

#define HASHMASK 0x0
/*  0.  494d5bef  (0)  apply  */
static const struct ihash htable[2] = {
    1229806575, &cl_ca_mcgill_sable_soot_jimple_Stmt.M.apply_S_pGzuK, 0, 0,
};

static const CARRAY(32) nmchars = {&acl_char, 0, 32, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 32 };
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
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_13[] = {
'g','e','t','D','e','f','B','o','x','e','s'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_14[] = {
'g','e','t','U','n','i','t','B','o','x','e','s'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_15[] = {
'g','e','t','B','o','x','e','s','P','o','i','n','t','i','n','g','T','o',
'T','h','i','s'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_16[] = {
'g','e','t','U','s','e','A','n','d','D','e','f','B','o','x','e','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
'a','p','p','l','y'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};
static const Char nmim_18[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_18[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_19[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';',')','L','j','a','v','a','/','l','a',
'n','g','/','S','t','r','i','n','g',';'};
static const Char nmim_20[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_20[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_21[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';','L','j','a','v','a','/','l','a','n',
'g','/','S','t','r','i','n','g',';',')','L','j','a','v','a','/','l','a',
'n','g','/','S','t','r','i','n','g',';'};
static const Char nmim_22[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';',')','L','j','a','v','a','/','l','a',
'n','g','/','S','t','r','i','n','g',';'};
static const Char nmim_23[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_23[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_24[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';','L','j','a','v','a','/','l','a','n',
'g','/','S','t','r','i','n','g',';',')','L','j','a','v','a','/','l','a',
'n','g','/','S','t','r','i','n','g',';'};

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
} inr_ca_mcgill_sable_soot_jimple_Stmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_Stmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_Stmt cl_ca_mcgill_sable_soot_jimple_Stmt = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_Stmt),
    25,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_Stmt,
    st_ca_mcgill_sable_soot_jimple_Stmt,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_Stmt,
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
	(const Char *)&sgim_8,20,1,0x401,10,xt_toString__rnFYu},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_abstract, 0,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,29,1,0x401,0,xt_getUseBoxes__fntzF},
	{TMIT_abstract, 0,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,1,0x401,1,xt_getDefBoxes__Ztnlx},
	{TMIT_abstract, 0,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,29,1,0x401,2,xt_getUnitBoxes__giwSE},
	{TMIT_abstract, 0,(const Char *)&nmim_15,22,
	(const Char *)&sgim_15,29,1,0x401,3,xt_getBoxesPointingToThis__J1wk8},
	{TMIT_abstract, 0,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,29,1,0x401,4,xt_getUseAndDefBoxes__pB8Pd},
	{TMIT_abstract, 0,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,1,0x8401,5,xt_apply_S_pGzuK},
	{TMIT_abstract, 0,(const Char *)&nmim_18,13,
	(const Char *)&sgim_18,20,1,0x401,6,xt_toBriefString__xCRk4},
	{TMIT_abstract, 0,(const Char *)&nmim_19,13,
	(const Char *)&sgim_19,46,1,0x401,7,xt_toBriefString_M_Fpalr},
	{TMIT_abstract, 0,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,38,1,0x401,8,xt_toBriefString_S_dWfnF},
	{TMIT_abstract, 0,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,64,1,0x401,9,xt_toBriefString_MS_pjeM9},
	{TMIT_abstract, 0,(const Char *)&nmim_22,8,
	(const Char *)&sgim_22,46,1,0x401,11,xt_toString_M_xTLUA},
	{TMIT_abstract, 0,(const Char *)&nmim_23,8,
	(const Char *)&sgim_23,38,1,0x401,12,xt_toString_S_py2Lf},
	{TMIT_abstract, 0,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,64,1,0x401,13,xt_toString_MS_Rxoee},
    } /* end of methodsigs */
};


/*M getUseBoxes__fntzF: ca.mcgill.sable.soot.jimple.Stmt.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__fntzF[] = { 0 };

/*M getDefBoxes__Ztnlx: ca.mcgill.sable.soot.jimple.Stmt.getDefBoxes()Lca/mcgill/sable/util/List; */

Class xt_getDefBoxes__Ztnlx[] = { 0 };

/*M getUnitBoxes__giwSE: ca.mcgill.sable.soot.jimple.Stmt.getUnitBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUnitBoxes__giwSE[] = { 0 };

/*M getBoxesPointingToThis__J1wk8: ca.mcgill.sable.soot.jimple.Stmt.getBoxesPointingToThis()Lca/mcgill/sable/util/List; */

Class xt_getBoxesPointingToThis__J1wk8[] = { 0 };

/*M getUseAndDefBoxes__pB8Pd: ca.mcgill.sable.soot.jimple.Stmt.getUseAndDefBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseAndDefBoxes__pB8Pd[] = { 0 };

/*M apply_S_pGzuK: ca.mcgill.sable.soot.jimple.Stmt.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_pGzuK[] = { 0 };

/*M toBriefString__xCRk4: ca.mcgill.sable.soot.jimple.Stmt.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__xCRk4[] = { 0 };

/*M toBriefString_M_Fpalr: ca.mcgill.sable.soot.jimple.Stmt.toBriefString(Lca/mcgill/sable/util/Map;)Ljava/lang/String; */

Class xt_toBriefString_M_Fpalr[] = { 0 };

/*M toBriefString_S_dWfnF: ca.mcgill.sable.soot.jimple.Stmt.toBriefString(Ljava/lang/String;)Ljava/lang/String; */

Class xt_toBriefString_S_dWfnF[] = { 0 };

/*M toBriefString_MS_pjeM9: ca.mcgill.sable.soot.jimple.Stmt.toBriefString(Lca/mcgill/sable/util/Map;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toBriefString_MS_pjeM9[] = { 0 };

/*M toString__rnFYu: ca.mcgill.sable.soot.jimple.Stmt.toString()Ljava/lang/String; */

Class xt_toString__rnFYu[] = { 0 };

/*M toString_M_xTLUA: ca.mcgill.sable.soot.jimple.Stmt.toString(Lca/mcgill/sable/util/Map;)Ljava/lang/String; */

Class xt_toString_M_xTLUA[] = { 0 };

/*M toString_S_py2Lf: ca.mcgill.sable.soot.jimple.Stmt.toString(Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_S_py2Lf[] = { 0 };

/*M toString_MS_Rxoee: ca.mcgill.sable.soot.jimple.Stmt.toString(Lca/mcgill/sable/util/Map;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_MS_Rxoee[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_Stmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','m','t'};

const void *st_ca_mcgill_sable_soot_jimple_Stmt[] = {
    ch_ca_mcgill_sable_soot_jimple_Stmt+32,	/* 0. ca.mcgill.sable.soot.jimple.Stmt */
    0};
