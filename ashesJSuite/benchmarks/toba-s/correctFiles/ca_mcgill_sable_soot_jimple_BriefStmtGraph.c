/*  ca_mcgill_sable_soot_jimple_BriefStmtGraph.c -- from Java class ca.mcgill.sable.soot.jimple.BriefStmtGraph  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_BriefStmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_StmtGraph.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtGraph.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_BriefStmtGraph[];
extern const void *st_ca_mcgill_sable_soot_jimple_BriefStmtGraph[];
extern Class xt_init_S_OIQkq[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','B','r','i','e','f','S','t','m',
't','G','r','a','p','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmiv_0[] = {
'h','e','a','d','s'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_1[] = {
't','a','i','l','s'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_2[] = {
's','t','m','t','T','o','S','u','c','c','s'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_3[] = {
's','t','m','t','T','o','P','r','e','d','s'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_4[] = {
'm','e','t','h','o','d'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmiv_5[] = {
's','t','m','t','s'};
static const Char sgiv_5[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_6[] = {
's','i','z','e'};
static const Char sgiv_6[] = {
'I'};
static const Char nmiv_7[] = {
's','t','m','t','L','i','s','t'};
static const Char sgiv_7[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L','i','s',
't',';'};
static const Char nmiv_8[] = {
'i','s','P','s','e','u','d','o','T','o','p','o','l','o','g','i','c','a',
'l','O','r','d','e','r','R','e','a','d','y'};
static const Char sgiv_8[] = {
'Z'};
static const Char nmiv_9[] = {
't','o','p','O','r','d','e','r'};
static const Char sgiv_9[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_10[] = {
'i','s','R','e','v','e','r','s','e','P','s','e','u','d','o','T','o','p',
'o','l','o','g','i','c','a','l','O','r','d','e','r','R','e','a','d','y'};
static const Char sgiv_10[] = {
'Z'};
static const Char nmiv_11[] = {
'r','e','v','e','r','s','e','T','o','p','O','r','d','e','r'};
static const Char sgiv_11[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_12[] = {
's','t','m','t','T','o','C','o','l','o','r'};
static const Char sgiv_12[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_13[] = {
'W','H','I','T','E'};
static const Char sgiv_13[] = {
'I'};
static const Char nmiv_14[] = {
'G','R','A','Y'};
static const Char sgiv_14[] = {
'I'};
static const Char nmiv_15[] = {
'B','L','A','C','K'};
static const Char sgiv_15[] = {
'I'};
static const Char nmiv_16[] = {
'o','r','d','e','r'};
static const Char sgiv_16[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t',';'};
static const Char nmiv_17[] = {
'i','s','R','e','v','e','r','s','e','d'};
static const Char sgiv_17[] = {
'Z'};
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
'g','e','t','B','o','d','y'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B',
'o','d','y',';'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L','i',
's','t',';','Z',')','V'};
static const Char nmim_14[] = {
'g','e','t','H','e','a','d','s'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_15[] = {
'g','e','t','T','a','i','l','s'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_16[] = {
'g','e','t','P','r','e','d','s','O','f'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
'g','e','t','S','u','c','c','s','O','f'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmim_18[] = {
'i','t','e','r','a','t','o','r'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','t','e','r','a','t','o','r',';'};
static const Char nmim_19[] = {
's','i','z','e'};
static const Char sgim_19[] = {
'(',')','I'};
static const Char nmim_20[] = {
'p','s','e','u','d','o','T','o','p','o','l','o','g','i','c','a','l','O',
'r','d','e','r','I','t','e','r','a','t','o','r'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','t','e','r','a','t','o','r',';'};
static const Char nmim_21[] = {
'r','e','v','e','r','s','e','P','s','e','u','d','o','T','o','p','o','l',
'o','g','i','c','a','l','O','r','d','e','r','I','t','e','r','a','t','o',
'r'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','t','e','r','a','t','o','r',';'};
static const Char nmim_22[] = {
'c','o','m','p','u','t','e','O','r','d','e','r'};
static const Char sgim_22[] = {
'(','Z',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','L','i','n','k','e','d','L','i','s','t',';'};
static const Char nmim_23[] = {
'v','i','s','i','t','S','t','m','t'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'V'};
static const Char nmim_24[] = {
'g','e','t','E','x','t','e','n','d','e','d','B','a','s','i','c','B','l',
'o','c','k','P','a','t','h','B','e','t','w','e','e','n'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i',
'l','/','L','i','s','t',';'};
static const Char nmim_25[] = {
'<','i','n','i','t','>'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L','i',
's','t',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, heads), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,27,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, tails), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,27,0,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, stmtToSuccs), 0,(const Char *)&nmiv_2,11,(const Char *)&sgiv_2,26,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, stmtToPreds), 0,(const Char *)&nmiv_3,11,(const Char *)&sgiv_3,26,0,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, method), 0,(const Char *)&nmiv_4,6,(const Char *)&sgiv_4,33,0,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, stmts), 0,(const Char *)&nmiv_5,5,(const Char *)&sgiv_5,27,0,0x0,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, size), 0,(const Char *)&nmiv_6,4,(const Char *)&sgiv_6,1,0,0x0,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, stmtList), 0,(const Char *)&nmiv_7,8,(const Char *)&sgiv_7,38,0,0x0,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, isPseudoTopologicalOrderReady), 0,(const Char *)&nmiv_8,29,(const Char *)&sgiv_8,1,0,0x2,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, topOrder), 0,(const Char *)&nmiv_9,8,(const Char *)&sgiv_9,27,0,0x2,9}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, isReversePseudoTopologica_s1xZW), 0,(const Char *)&nmiv_10,36,(const Char *)&sgiv_10,1,0,0x2,10}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, reverseTopOrder), 0,(const Char *)&nmiv_11,15,(const Char *)&sgiv_11,27,0,0x2,11}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, stmtToColor), 0,(const Char *)&nmiv_12,11,(const Char *)&sgiv_12,26,0,0x2,12}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, WHITE), 0,(const Char *)&nmiv_13,5,(const Char *)&sgiv_13,1,0,0x12,13}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, GRAY), 0,(const Char *)&nmiv_14,4,(const Char *)&sgiv_14,1,0,0x12,14}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, BLACK), 0,(const Char *)&nmiv_15,5,(const Char *)&sgiv_15,1,0,0x12,15}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, order), 0,(const Char *)&nmiv_16,5,(const Char *)&sgiv_16,33,0,0x2,16}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph, isReversed), 0,(const Char *)&nmiv_17,10,(const Char *)&sgiv_17,1,0,0x2,17}, 
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
} inr_ca_mcgill_sable_soot_jimple_BriefStmtGraph = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_BriefStmtGraph),
    26,
    0,
    18,
    0,
    3, supers,
    0, 0, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_BriefStmtGraph,
    st_ca_mcgill_sable_soot_jimple_BriefStmtGraph,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_BriefStmtGraph,
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
	{TMIT_native_code, getBody__ursbi,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,40,0,0x1,0,0},
	{TMIT_native_code, init_Sz_e8nz7,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,42,0,0x0,1,0},
	{TMIT_native_code, getHeads__OgkQy,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,29,0,0x1,2,0},
	{TMIT_native_code, getTails__AHfWA,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,29,0,0x1,3,0},
	{TMIT_native_code, getPredsOf_S_DYcxP,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,63,0,0x1,4,0},
	{TMIT_native_code, getSuccsOf_S_ma3uS,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,63,0,0x1,5,0},
	{TMIT_native_code, iterator__RqNON,(const Char *)&nmim_18,8,
	(const Char *)&sgim_18,33,0,0x1,6,0},
	{TMIT_native_code, size__5IdVG,(const Char *)&nmim_19,4,
	(const Char *)&sgim_19,3,0,0x1,7,0},
	{TMIT_native_code, pseudoTopologicalOrderIt__Oi9a0,(const Char *)&nmim_20,30,
	(const Char *)&sgim_20,33,0,0x1,8,0},
	{TMIT_native_code, reversePseudoTopological__WumAx,(const Char *)&nmim_21,37,
	(const Char *)&sgim_21,33,0,0x1,9,0},
	{TMIT_native_code, computeOrder_z_7C2Je,(const Char *)&nmim_22,12,
	(const Char *)&sgim_22,36,0,0x2,10,0},
	{TMIT_native_code, visitStmt_S_5MrmN,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,37,0,0x2,11,0},
	{TMIT_native_code, getExtendedBasicBlockP_SS_ilIUW,(const Char *)&nmim_24,32,
	(const Char *)&sgim_24,97,0,0x1,12,0},
	{TMIT_native_code, init_S_OIQkq,(const Char *)&nmim_25,6,
	(const Char *)&sgim_25,41,1,0x1,0,xt_init_S_OIQkq},
    } /* end of methodsigs */
};


/*M init_S_OIQkq: ca.mcgill.sable.soot.jimple.BriefStmtGraph.<init>(Lca/mcgill/sable/soot/jimple/StmtList;)V */

Class xt_init_S_OIQkq[] = { 0 };

Void init_S_OIQkq(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	i3 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_Sz_e8nz7(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_BriefStmtGraph[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','B','r','i','e','f','S','t','m',
't','G','r','a','p','h'};

const void *st_ca_mcgill_sable_soot_jimple_BriefStmtGraph[] = {
    ch_ca_mcgill_sable_soot_jimple_BriefStmtGraph+42,	/* 0. ca.mcgill.sable.soot.jimple.BriefStmtGra */
    0};
