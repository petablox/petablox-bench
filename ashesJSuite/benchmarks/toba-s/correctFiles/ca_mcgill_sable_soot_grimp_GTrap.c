/*  ca_mcgill_sable_soot_grimp_GTrap.c -- from Java class ca.mcgill.sable.soot.grimp.GTrap  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GTrap.h"
#include "ca_mcgill_sable_soot_jimple_Trap.h"
#include "ca_mcgill_sable_soot_jimple_JTrap.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GTrap.C,
    &cl_ca_mcgill_sable_soot_jimple_JTrap.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Trap.C,
    &cl_ca_mcgill_sable_soot_jimple_Trap.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GTrap[];
extern const void *st_ca_mcgill_sable_soot_grimp_GTrap[];
extern Class xt_init_SUUU_ShucJ[];

#define HASHMASK 0xff
/*  2d.  b6142e2d  (2d)  getBeginUnit  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  4f.  d400b54f  (4f)  getEndUnit  */
/*  52.  d4c85752  (52)  getUnitBoxes  */
/*  61.  8942e761  (61)  hashCode  */
/*  67.  1a6ac667  (67)  setBeginUnit  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  91.  c21c5291  (91)  setEndUnit  */
/*  94.  d7b6dc94  (94)  setHandlerUnit  */
/*  98.  721e3198  (98)  setException  */
/*  b0.  878aeab0  (b0)  getHandlerUnitBox  */
/*  b3.  f0cc22b3  (b3)  getBeginUnitBox  */
/*  b6.  5d71b8b6  (b6)  getException  */
/*  bd.  72088abd  (bd)  getEndUnitBox  */
/*  d2.  4c0d6fd2  (d2)  clone  */
/*  d6.  eb069cd6  (d6)  getHandlerUnit  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1240191443, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getBeginUnit__OycDP,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.equals_O_Ba6e0,
    -738151089, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getEndUnit__AEPDm,
    0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getUnitBoxes__19K9g,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443205223, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.setBeginUnit_U_MiCya,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1038331247, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.setEndUnit_U_AjWdF,
    0, 0, 0, 0,
    -675881836, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.setHandlerUnit_U_pEMF3,
    0, 0, 0, 0, 0, 0,
    1914581400, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.setException_S_tQYPI,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2020939088, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getHandlerUnitBox__hmyak,
    0, 0, 0, 0,
    -255057229, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getBeginUnitBox__IKSBb,
    0, 0, 0, 0,
    1567733942, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getException__7KTCz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1913162429, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getEndUnitBox__WwMag,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -351888170, &cl_ca_mcgill_sable_soot_grimp_GTrap.M.getHandlerUnit__BfCgR,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(32) nmchars = {&acl_char, 0, 32, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','T','r','a','p'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 32 };
static const Char nmiv_0[] = {
'e','x','c','e','p','t','i','o','n'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmiv_1[] = {
'b','e','g','i','n','S','t','m','t','B','o','x'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',
';'};
static const Char nmiv_2[] = {
'e','n','d','S','t','m','t','B','o','x'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',
';'};
static const Char nmiv_3[] = {
'h','a','n','d','l','e','r','S','t','m','t','B','o','x'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',
';'};
static const Char nmiv_4[] = {
's','t','m','t','B','o','x','e','s'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
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
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','U','n','i','t',';','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j',
'i','m','p','l','e','/','U','n','i','t',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','U','n','i','t',';',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',';','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',';',
')','V'};
static const Char nmim_14[] = {
'g','e','t','B','e','g','i','n','U','n','i','t'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';'};
static const Char nmim_15[] = {
'g','e','t','E','n','d','U','n','i','t'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';'};
static const Char nmim_16[] = {
'g','e','t','H','a','n','d','l','e','r','U','n','i','t'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';'};
static const Char nmim_17[] = {
'g','e','t','H','a','n','d','l','e','r','U','n','i','t','B','o','x'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B',
'o','x',';'};
static const Char nmim_18[] = {
'g','e','t','B','e','g','i','n','U','n','i','t','B','o','x'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B',
'o','x',';'};
static const Char nmim_19[] = {
'g','e','t','E','n','d','U','n','i','t','B','o','x'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B',
'o','x',';'};
static const Char nmim_20[] = {
'g','e','t','U','n','i','t','B','o','x','e','s'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_21[] = {
'g','e','t','E','x','c','e','p','t','i','o','n'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmim_22[] = {
's','e','t','B','e','g','i','n','U','n','i','t'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'V'};
static const Char nmim_23[] = {
's','e','t','E','n','d','U','n','i','t'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'V'};
static const Char nmim_24[] = {
's','e','t','H','a','n','d','l','e','r','U','n','i','t'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'V'};
static const Char nmim_25[] = {
's','e','t','E','x','c','e','p','t','i','o','n'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTrap, exception), 0,(const Char *)&nmiv_0,9,(const Char *)&sgiv_0,32,0,0x4,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTrap, beginStmtBox), 0,(const Char *)&nmiv_1,12,(const Char *)&sgiv_1,37,0,0x4,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTrap, endStmtBox), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,37,0,0x4,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTrap, handlerStmtBox), 0,(const Char *)&nmiv_3,14,(const Char *)&sgiv_3,37,0,0x4,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTrap, stmtBoxes), 0,(const Char *)&nmiv_4,9,(const Char *)&sgiv_4,27,0,0x4,4}, 
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
} inr_ca_mcgill_sable_soot_grimp_GTrap = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GTrap.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GTrap cl_ca_mcgill_sable_soot_grimp_GTrap = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GTrap),
    26,
    0,
    5,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GTrap,
    st_ca_mcgill_sable_soot_grimp_GTrap,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GTrap,
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
	{TMIT_native_code, init_SUUU_ShucJ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,137,1,0x0,0,xt_init_SUUU_ShucJ},
	{TMIT_native_code, init_SUUU_6Py8D,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,146,0,0x4,1,0},
	{TMIT_native_code, getBeginUnit__OycDP,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,36,0,0x8001,2,0},
	{TMIT_native_code, getEndUnit__AEPDm,(const Char *)&nmim_15,10,
	(const Char *)&sgim_15,36,0,0x8001,3,0},
	{TMIT_native_code, getHandlerUnit__BfCgR,(const Char *)&nmim_16,14,
	(const Char *)&sgim_16,36,0,0x8001,4,0},
	{TMIT_native_code, getHandlerUnitBox__hmyak,(const Char *)&nmim_17,17,
	(const Char *)&sgim_17,39,0,0x8001,5,0},
	{TMIT_native_code, getBeginUnitBox__IKSBb,(const Char *)&nmim_18,15,
	(const Char *)&sgim_18,39,0,0x8001,6,0},
	{TMIT_native_code, getEndUnitBox__WwMag,(const Char *)&nmim_19,13,
	(const Char *)&sgim_19,39,0,0x8001,7,0},
	{TMIT_native_code, getUnitBoxes__19K9g,(const Char *)&nmim_20,12,
	(const Char *)&sgim_20,29,0,0x8001,8,0},
	{TMIT_native_code, getException__7KTCz,(const Char *)&nmim_21,12,
	(const Char *)&sgim_21,34,0,0x8001,9,0},
	{TMIT_native_code, setBeginUnit_U_MiCya,(const Char *)&nmim_22,12,
	(const Char *)&sgim_22,37,0,0x8001,10,0},
	{TMIT_native_code, setEndUnit_U_AjWdF,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,37,0,0x8001,11,0},
	{TMIT_native_code, setHandlerUnit_U_pEMF3,(const Char *)&nmim_24,14,
	(const Char *)&sgim_24,37,0,0x8001,12,0},
	{TMIT_native_code, setException_S_tQYPI,(const Char *)&nmim_25,12,
	(const Char *)&sgim_25,35,0,0x8001,13,0},
    } /* end of methodsigs */
};


/*M init_SUUU_ShucJ: ca.mcgill.sable.soot.grimp.GTrap.<init>(Lca/mcgill/sable/soot/SootClass;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_init_SUUU_ShucJ[] = { 0 };

Void init_SUUU_ShucJ(Object p0, Object p1, Object p2, Object p3, Object p4)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av3, av4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	av4 = p4;

L0:	a1 = av0;
	a2 = av1;
	a3 = v__ES3xL();
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newStmtBox_U_0mQ3j.f(a3,a4);
	a4 = v__ES3xL();
	a5 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a4)->class->M.
		newStmtBox_U_0mQ3j.f(a4,a5);
	a5 = v__ES3xL();
	a6 = av4;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a5)->class->M.
		newStmtBox_U_0mQ3j.f(a5,a6);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_SUUU_6Py8D(a1,a2,a3,a4,a5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GTrap[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','T','r','a','p'};

const void *st_ca_mcgill_sable_soot_grimp_GTrap[] = {
    ch_ca_mcgill_sable_soot_grimp_GTrap+32,	/* 0. ca.mcgill.sable.soot.grimp.GTrap */
    0};
