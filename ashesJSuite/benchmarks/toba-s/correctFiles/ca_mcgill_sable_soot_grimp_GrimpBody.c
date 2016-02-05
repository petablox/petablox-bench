/*  ca_mcgill_sable_soot_grimp_GrimpBody.c -- from Java class ca.mcgill.sable.soot.grimp.GrimpBody  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody.h"
#include "ca_mcgill_sable_soot_jimple_StmtBody.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_AlreadyDeclaredException.h"
#include "ca_mcgill_sable_soot_ClassFileBody.h"
#include "ca_mcgill_sable_soot_DeterministicHashMap.h"
#include "ca_mcgill_sable_soot_IncorrectDeclarerException.h"
#include "ca_mcgill_sable_soot_Modifier.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_Timer.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody$1.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody$2.h"
#include "ca_mcgill_sable_soot_grimp_GrimpTransformations.h"
#include "ca_mcgill_sable_soot_grimp_Main.h"
#include "ca_mcgill_sable_soot_jimple_BriefStmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_NoSuchLocalException.h"
#include "ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtBox.h"
#include "ca_mcgill_sable_soot_jimple_StmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_StmtList.h"
#include "ca_mcgill_sable_soot_jimple_Transformations.h"
#include "ca_mcgill_sable_soot_jimple_Trap.h"
#include "ca_mcgill_sable_soot_jimple_Unit.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_HashSet.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"
#include "ca_mcgill_sable_util_Set.h"
#include "java_io_PrintWriter.h"
#include "java_lang_Integer.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtBody.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C,
    &cl_ca_mcgill_sable_soot_ClassFileBody.C,
    &cl_ca_mcgill_sable_soot_DeterministicHashMap.C,
    &cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C,
    &cl_ca_mcgill_sable_soot_Modifier.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_Timer.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_grim_2pbRs.C,
    &cl_ca_mcgill_sable_soot_grim_3pbRs.C,
    &cl_ca_mcgill_sable_soot_grimp_GrimpTransformations.C,
    &cl_ca_mcgill_sable_soot_grimp_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException.C,
    &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtList.C,
    &cl_ca_mcgill_sable_soot_jimple_Transformations.C,
    &cl_ca_mcgill_sable_soot_jimple_Trap.C,
    &cl_ca_mcgill_sable_soot_jimple_Unit.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_HashSet.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_ca_mcgill_sable_util_Set.C,
    &cl_java_io_PrintWriter.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GrimpBody[];
extern const void *st_ca_mcgill_sable_soot_grimp_GrimpBody[];
extern Class xt_init_S_P3u3o[];
extern Class xt_init_SBi_b8v3X[];
extern Class xt_getStmtList__DcNB7[];
extern Class xt_redirectJumps_SS_D729q[];
extern Class xt_eliminateBackPointersTo_S_1IDCG[];
extern Class xt_getLocalCount__rlH3T[];
extern Class xt_getLocals__SKJ41[];
extern Class xt_addLocal_L_u3Zsr[];
extern Class xt_removeLocal_L_dc5Vt[];
extern Class xt_getLocal_S_9GdYj[];
extern Class xt_declaresLocal_S_KvdZF[];
extern Class xt_getMethod__2qjt9[];
extern Class xt_getUnitBoxes__5MQp1[];
extern Class xt_getTraps__EBrwu[];
extern Class xt_addTrap_T_KJeJ1[];
extern Class xt_removeTrap_T_xuS0s[];
extern Class xt_printTo_P_H85nD[];
extern Class xt_printTo_Pi_YIn9e[];
extern Class xt_printStatementsInBody_Pz_R37W9[];
extern Class xt_print_debug_P_KYD85[];

#define HASHMASK 0xff
/*  34.  75e9e534  (34)  getStmtList  */
/*  35.  554dc535  (35)  printTo  */
/*  3a.  5001863a  (3a)  getLocalCount  */
/*  40.  9a858b40  (40)  printTo  */
/*  42.  c2b4242  (42)  eliminateBackPointersTo  */
/*  4e.  c2aafd4e  (4e)  equals  */
/*  52.  d4c85752  (52)  getUnitBoxes  */
/*  61.  8942e761  (61)  hashCode  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  a7.  346c7a7  (a7)  getMethod  */
/*  bb.  c78368bb  (bb)  getLocals  */
/*  ce.  519ce6ce  (ce)  redirectJumps  */
/*  d2.  4c0d6fd2  (d2)  clone  */
/*  df.  4c3c86df  (df)  getTraps  */
static const struct ihash htable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1978262836, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.getStmtList__DcNB7,
    1431160117, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.printTo_Pi_YIn9e,
    0, 0, 0, 0, 0, 0, 0, 0,
    1342277178, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.getLocalCount__rlH3T,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1702524096, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.printTo_P_H85nD,
    0, 0,
    204161602, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.eliminateBackPointersTo_S_1IDCG,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.getUnitBoxes__5MQp1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.toString__4d9OF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54970279, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.getMethod__2qjt9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -947689285, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.getLocals__SKJ41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1369237198, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.redirectJumps_SS_D729q,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1279035103, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.M.getTraps__EBrwu,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','B','o','d','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
static const Char nmiv_0[] = {
'l','o','c','a','l','s'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_1[] = {
'm','e','t','h','o','d'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmiv_2[] = {
's','t','m','t','L','i','s','t'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L','i','s',
't',';'};
static const Char nmiv_3[] = {
't','r','a','p','s'};
static const Char sgiv_3[] = {
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
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','B','o','d','y',';','I',')','V'};
static const Char nmim_14[] = {
'g','e','t','S','t','m','t','L','i','s','t'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L',
'i','s','t',';'};
static const Char nmim_15[] = {
'r','e','d','i','r','e','c','t','J','u','m','p','s'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')','V'};
static const Char nmim_16[] = {
'e','l','i','m','i','n','a','t','e','B','a','c','k','P','o','i','n','t',
'e','r','s','T','o'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'V'};
static const Char nmim_17[] = {
'g','e','t','L','o','c','a','l','C','o','u','n','t'};
static const Char sgim_17[] = {
'(',')','I'};
static const Char nmim_18[] = {
'g','e','t','L','o','c','a','l','s'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_19[] = {
'a','d','d','L','o','c','a','l'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','V'};
static const Char nmim_20[] = {
'r','e','m','o','v','e','L','o','c','a','l'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','V'};
static const Char nmim_21[] = {
'g','e','t','L','o','c','a','l'};
static const Char sgim_21[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',
';'};
static const Char nmim_22[] = {
'd','e','c','l','a','r','e','s','L','o','c','a','l'};
static const Char sgim_22[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_23[] = {
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_23[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmim_24[] = {
'g','e','t','U','n','i','t','B','o','x','e','s'};
static const Char sgim_24[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_25[] = {
'g','e','t','T','r','a','p','s'};
static const Char sgim_25[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_26[] = {
'a','d','d','T','r','a','p'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','r','a','p',';',')',
'V'};
static const Char nmim_27[] = {
'r','e','m','o','v','e','T','r','a','p'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','r','a','p',';',')',
'V'};
static const Char nmim_28[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_28[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';',')','V'};
static const Char nmim_29[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_29[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';','I',')','V'};
static const Char nmim_30[] = {
'p','r','i','n','t','S','t','a','t','e','m','e','n','t','s','I','n','B',
'o','d','y'};
static const Char sgim_30[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';','Z',')','V'};
static const Char nmim_31[] = {
'p','r','i','n','t','_','d','e','b','u','g'};
static const Char sgim_31[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GrimpBody, locals), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,27,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GrimpBody, method), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,33,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GrimpBody, stmtList), 0,(const Char *)&nmiv_2,8,(const Char *)&sgiv_2,38,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GrimpBody, traps), 0,(const Char *)&nmiv_3,5,(const Char *)&sgiv_3,27,1,0x0,3}, 
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
} inr_ca_mcgill_sable_soot_grimp_GrimpBody = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GrimpBody cl_ca_mcgill_sable_soot_grimp_GrimpBody = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GrimpBody),
    32,
    0,
    4,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    42, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GrimpBody,
    st_ca_mcgill_sable_soot_grimp_GrimpBody,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GrimpBody,
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
	{TMIT_native_code, init_S_P3u3o,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,36,1,0x0,0,xt_init_S_P3u3o},
	{TMIT_native_code, init_SBi_b8v3X,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,64,1,0x0,1,xt_init_SBi_b8v3X},
	{TMIT_native_code, getStmtList__DcNB7,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,40,1,0x8001,2,xt_getStmtList__DcNB7},
	{TMIT_native_code, redirectJumps_SS_D729q,(const Char *)&nmim_15,13,
	(const Char *)&sgim_15,71,1,0x8001,3,xt_redirectJumps_SS_D729q},
	{TMIT_native_code, eliminateBackPointersTo_S_1IDCG,(const Char *)&nmim_16,23,
	(const Char *)&sgim_16,37,1,0x8001,4,xt_eliminateBackPointersTo_S_1IDCG},
	{TMIT_native_code, getLocalCount__rlH3T,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,3,1,0x8001,5,xt_getLocalCount__rlH3T},
	{TMIT_native_code, getLocals__SKJ41,(const Char *)&nmim_18,9,
	(const Char *)&sgim_18,29,1,0x8001,6,xt_getLocals__SKJ41},
	{TMIT_native_code, addLocal_L_u3Zsr,(const Char *)&nmim_19,8,
	(const Char *)&sgim_19,38,1,0x1,7,xt_addLocal_L_u3Zsr},
	{TMIT_native_code, removeLocal_L_dc5Vt,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,38,1,0x1,8,xt_removeLocal_L_dc5Vt},
	{TMIT_native_code, getLocal_S_9GdYj,(const Char *)&nmim_21,8,
	(const Char *)&sgim_21,55,1,0x1,9,xt_getLocal_S_9GdYj},
	{TMIT_native_code, declaresLocal_S_KvdZF,(const Char *)&nmim_22,13,
	(const Char *)&sgim_22,21,1,0x1,10,xt_declaresLocal_S_KvdZF},
	{TMIT_native_code, getMethod__2qjt9,(const Char *)&nmim_23,9,
	(const Char *)&sgim_23,35,1,0x8001,11,xt_getMethod__2qjt9},
	{TMIT_native_code, getUnitBoxes__5MQp1,(const Char *)&nmim_24,12,
	(const Char *)&sgim_24,29,1,0x8001,12,xt_getUnitBoxes__5MQp1},
	{TMIT_native_code, getTraps__EBrwu,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,29,1,0x8001,13,xt_getTraps__EBrwu},
	{TMIT_native_code, addTrap_T_KJeJ1,(const Char *)&nmim_26,7,
	(const Char *)&sgim_26,37,1,0x1,14,xt_addTrap_T_KJeJ1},
	{TMIT_native_code, removeTrap_T_xuS0s,(const Char *)&nmim_27,10,
	(const Char *)&sgim_27,37,1,0x1,15,xt_removeTrap_T_xuS0s},
	{TMIT_native_code, printTo_P_H85nD,(const Char *)&nmim_28,7,
	(const Char *)&sgim_28,24,1,0x8001,16,xt_printTo_P_H85nD},
	{TMIT_native_code, printTo_Pi_YIn9e,(const Char *)&nmim_29,7,
	(const Char *)&sgim_29,25,1,0x8001,17,xt_printTo_Pi_YIn9e},
	{TMIT_native_code, printStatementsInBody_Pz_R37W9,(const Char *)&nmim_30,21,
	(const Char *)&sgim_30,25,1,0x0,18,xt_printStatementsInBody_Pz_R37W9},
	{TMIT_native_code, print_debug_P_KYD85,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,24,1,0x0,19,xt_print_debug_P_KYD85},
    } /* end of methodsigs */
};

static union fconst fc1 = { 0x3f333333 };

/*M init_S_P3u3o: ca.mcgill.sable.soot.grimp.GrimpBody.<init>(Lca/mcgill/sable/soot/SootMethod;)V */

Class xt_init_S_P3u3o[] = { 0 };

Void init_S_P3u3o(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->method = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_StmtList.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_IBEM7(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->stmtList = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_SBi_b8v3X: ca.mcgill.sable.soot.grimp.GrimpBody.<init>(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/soot/Body;I)V */

Class xt_init_SBi_b8v3X[] = { 0 };

Void init_SBi_b8v3X(Object p0, Object p1, Object p2, Int p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1, av2, av4, av5, av6, av7, av8, av9, av10, av11, av12, av13;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Int iv3;
Float f0, f1, f2, f3, f4, f5, f6, f7;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps = a2;
	a1 = 0;
	av4 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ClassFileBody.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(33,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JimpleBody.C);
	a2 = a1;
	a3 = av1;
	a4 = av2;
	i5 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SBi_zoaC2(a2,a3,a4,i5);
	av4 = a1;
	GOTO(48,L3);

L1:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(55,L2);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	GOTO(64,L3);

L2:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L3:	a1 = av0;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->class->M.
		getMethod__6GJJv.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->method = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals = a2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocals__iAK9r.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av5 = a1;
	GOTO(109,L5);

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L5:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(139,L4);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_jimple_StmtList.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_IBEM7(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->stmtList = a2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getStmtList__BJdpo.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av5 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a3)->stmtList;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArrayList*)a3)->class->M.
		size__xLkH6.f(a3);
	i4 = 2;
	i3 = i3 * i4;
	i4 = 1;
	i3 = i3 + i4;
	f4 = fc1.v;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a2,i3,f4);
	av6 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av7 = a1;
	GOTO(195,L9);

L6:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_StmtBox.C);
	a2 = a1;
	a3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_xOXUp(a2,a3);
	av9 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_StmtBox.C);
	a2 = a1;
	a3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_xOXUp(a2,a3);
	av10 = a1;
	a1 = av8;
	a2 = new(&cl_ca_mcgill_sable_soot_grim_2pbRs.C);
	a3 = a2;
	a4 = av9;
	a5 = av10;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_SS_rdVYy(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1229806575)->f)(a1,a2);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		getUnit__zFD9S.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-990073779)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av12 = a1;
	GOTO(272,L8);

L7:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av13 = a1;
	a1 = av13;
	a2 = v__ES3xL();
	a3 = av13;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-890495682)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExpr_V_B7nJe.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-617263732)->f)(a1,a2);
L8:	a1 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(314,L7);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->stmtList;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		add_O_4fhmb.f(a1,a2);
	a1 = av6;
	a2 = av8;
	a3 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		getUnit__zFD9S.f(a1);
	if (a1 == 0)
		GOTO(342,L9);
	a1 = av7;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a2)->class->M.
		getUnit__zFD9S.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L9:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(363,L6);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		iterator__EVXsw.f(a1);
	av5 = a1;
	GOTO(373,L11);

L10:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av8;
	a2 = new(&cl_ca_mcgill_sable_soot_grim_3pbRs.C);
	a3 = a2;
	a4 = av6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_H_U4cj7(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1229806575)->f)(a1,a2);
L11:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(411,L10);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps = a2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getTraps__8lukq.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av5 = a1;
	GOTO(437,L13);

L12:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Trap.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps;
	a2 = v__ES3xL();
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1567733942)->f)(a3);
	a4 = av6;
	a5 = av8;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = (*(Object(*)())findinterface(a5,-1240191443)->f)(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_util_HashMap*)a4)->class->M.
		get_O_qmciZ.f(a4,a5);
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_jimple_Unit.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	a5 = av6;
	a6 = av8;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = (*(Object(*)())findinterface(a6,-738151089)->f)(a6);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_util_HashMap*)a5)->class->M.
		get_O_qmciZ.f(a5,a6);
	if ((a5 != 0) && !(c0 = *(Class*)a5, c1 = &cl_ca_mcgill_sable_soot_jimple_Unit.C,
			(c1->flags & 1) ? instanceof(a5,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a5);
	a6 = av6;
	a7 = av8;
	if (!a7) { 
		SetNPESource(); goto NULLX;
	}
	a7 = (*(Object(*)())findinterface(a7,-351888170)->f)(a7);
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_util_HashMap*)a6)->class->M.
		get_O_qmciZ.f(a6,a7);
	if ((a6 != 0) && !(c0 = *(Class*)a6, c1 = &cl_ca_mcgill_sable_soot_jimple_Unit.C,
			(c1->flags & 1) ? instanceof(a6,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a6);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newTrap_SUUU_C5qOh.f(a2,a3,a4,a5,a6);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L13:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(527,L12);
	init_ca_mcgill_sable_soot_grimp_Main();
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(533,L14);
	init_ca_mcgill_sable_soot_grimp_Main();
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.aggregationTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L14:	i1 = iv3;
	i1 = noAggregating_i_3mlsA(i1);
	if (i1 != 0)
		GOTO(546,L15);
	a1 = av0;
	foldConstructors_G_4ozx7(a1);
	a1 = av0;
	aggregate_S_zuRdz(a1);
	a1 = av0;
	removeUnusedLocals_S_inhiW(a1);
L15:	init_ca_mcgill_sable_soot_grimp_Main();
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(564,L16);
	init_ca_mcgill_sable_soot_grimp_Main();
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.aggregationTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
L16:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getStmtList__DcNB7: ca.mcgill.sable.soot.grimp.GrimpBody.getStmtList()Lca/mcgill/sable/soot/jimple/StmtList; */

Class xt_getStmtList__DcNB7[] = { 0 };

Object getStmtList__DcNB7(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->stmtList;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M redirectJumps_SS_D729q: ca.mcgill.sable.soot.grimp.GrimpBody.redirectJumps(Lca/mcgill/sable/soot/jimple/Stmt;Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_redirectJumps_SS_D729q[] = { 0 };

Void redirectJumps_SS_D729q(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av6;
Int i0, i1, i2, i3;
Int iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,300259457)->f)(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2095947698)->f)(a1);
	av4 = a1;
	i1 = 0;
	iv5 = i1;
	GOTO(18,L3);

L1:	a1 = av4;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		getUnit__zFD9S.f(a1);
	a2 = av1;
	if (a1 == a2)
		GOTO(37,L2);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[2];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L2:	a1 = av6;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	iv5 += 1;
L3:	i1 = iv5;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(64,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M eliminateBackPointersTo_S_1IDCG: ca.mcgill.sable.soot.grimp.GrimpBody.eliminateBackPointersTo(Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_eliminateBackPointersTo_S_1IDCG[] = { 0 };

Void eliminateBackPointersTo_S_1IDCG(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-725067950)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(12,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		getUnit__zFD9S.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,300259457)->f)(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(54,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocalCount__rlH3T: ca.mcgill.sable.soot.grimp.GrimpBody.getLocalCount()I */

Class xt_getLocalCount__rlH3T[] = { 0 };

Int getLocalCount__rlH3T(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocals__SKJ41: ca.mcgill.sable.soot.grimp.GrimpBody.getLocals()Lca/mcgill/sable/util/List; */

Class xt_getLocals__SKJ41[] = { 0 };

Object getLocals__SKJ41(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addLocal_L_u3Zsr: ca.mcgill.sable.soot.grimp.GrimpBody.addLocal(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_addLocal_L_u3Zsr[] = { &cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C, 0 };

Void addLocal_L_u3Zsr(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeLocal_L_dc5Vt: ca.mcgill.sable.soot.grimp.GrimpBody.removeLocal(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_removeLocal_L_dc5Vt[] = { &cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C, 0 };

Void removeLocal_L_dc5Vt(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->locals;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocal_S_9GdYj: ca.mcgill.sable.soot.grimp.GrimpBody.getLocal(Ljava/lang/String;)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_getLocal_S_9GdYj[] = { &cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException.C, 0 };

Object getLocal_S_9GdYj(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getLocals__SKJ41.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(10,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getName__ttbNB.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(31,L2);
	a1 = av3;
	return a1;

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(42,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__PcWbn(a2);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M declaresLocal_S_KvdZF: ca.mcgill.sable.soot.grimp.GrimpBody.declaresLocal(Ljava/lang/String;)Z */

Class xt_declaresLocal_S_KvdZF[] = { 0 };

Boolean declaresLocal_S_KvdZF(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getLocals__SKJ41.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(10,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getName__ttbNB.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(31,L2);
	i1 = 1;
	return i1;

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(42,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethod__2qjt9: ca.mcgill.sable.soot.grimp.GrimpBody.getMethod()Lca/mcgill/sable/soot/SootMethod; */

Class xt_getMethod__2qjt9[] = { 0 };

Object getMethod__2qjt9(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->method;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUnitBoxes__5MQp1: ca.mcgill.sable.soot.grimp.GrimpBody.getUnitBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUnitBoxes__5MQp1[] = { 0 };

Object getUnitBoxes__5MQp1(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->stmtList;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av2 = a1;
	GOTO(16,L4);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-725067950)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av4 = a1;
	GOTO(42,L3);

L2:	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(66,L2);
L4:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(75,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(88,L6);

L5:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Trap.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-725067950)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
L6:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(122,L5);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTraps__EBrwu: ca.mcgill.sable.soot.grimp.GrimpBody.getTraps()Lca/mcgill/sable/util/List; */

Class xt_getTraps__EBrwu[] = { 0 };

Object getTraps__EBrwu(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addTrap_T_KJeJ1: ca.mcgill.sable.soot.grimp.GrimpBody.addTrap(Lca/mcgill/sable/soot/jimple/Trap;)V */

Class xt_addTrap_T_KJeJ1[] = { 0 };

Void addTrap_T_KJeJ1(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeTrap_T_xuS0s: ca.mcgill.sable.soot.grimp.GrimpBody.removeTrap(Lca/mcgill/sable/soot/jimple/Trap;)V */

Class xt_removeTrap_T_xuS0s[] = { 0 };

Void removeTrap_T_xuS0s(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->traps;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printTo_P_H85nD: ca.mcgill.sable.soot.grimp.GrimpBody.printTo(Ljava/io/PrintWriter;)V */

Class xt_printTo_P_H85nD[] = { 0 };

Void printTo_P_H85nD(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		printTo_Pi_YIn9e.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printTo_Pi_YIn9e: ca.mcgill.sable.soot.grimp.GrimpBody.printTo(Ljava/io/PrintWriter;I)V */

Class xt_printTo_Pi_YIn9e[] = { 0 };

Void printTo_Pi_YIn9e(Object p0, Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av4, av5, av6, av7, av8, av9, av10, av11, av12;
Int i0, i1, i2, i3, i4;
Int iv2, iv3, iv13;
Float f0, f1, f2, f3, f4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	i1 = iv2;
	i1 = useAbbreviations_i_bsXhQ(i1);
	if (i1 == 0)
		GOTO(4,L1);
	i1 = 0;
	GOTO(8,L2);

L1:	i1 = 1;
L2:	iv3 = i1;
	i1 = iv2;
	i1 = debugMode_i_bJZlB(i1);
	if (i1 == 0)
		GOTO(17,L3);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		print_debug_P_KYD85.f(a1,a2);
	return;

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getStmtList__DcNB7.f(a1);
	av4 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArrayList*)a2)->class->M.
		size__xLkH6.f(a2);
	i3 = 2;
	i2 = i2 * i3;
	i3 = 1;
	i2 = i2 + i3;
	f3 = fc1.v;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a1,i2,f3);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av5 = a1;
	a1 = av5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a2)->method;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getModifiers__KRAh8.f(a2);
	a2 = toString_i_bHTat(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		length__RGJv1.f(a1);
	if (i1 == 0)
		GOTO(79,L4);
	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L4:	a1 = av5;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a4)->method;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getReturnType__sYISd.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_Type*)a4)->class->M.
		toString__J7Vel.f(a4);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a3)->method;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getParameterTypes__F9alY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(163,L7);
	a1 = av5;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
	GOTO(179,L6);

L5:	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av5;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
L6:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(210,L5);
L7:	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[7];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
	a1 = new(&cl_ca_mcgill_sable_soot_DeterministicHashMap.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a3)->class->M.
		getLocalCount__rlH3T.f(a3);
	i4 = 2;
	i3 = i3 * i4;
	i4 = 1;
	i3 = i3 + i4;
	f4 = fc1.v;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_if_UvzxX(a2,i3,f4);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getLocals__SKJ41.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av8 = a1;
	GOTO(285,L11);

L8:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av7;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->class->M.
		getType__lsun6.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_Type*)a2)->class->M.
		toString__J7Vel.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(315,L9);
	a1 = av7;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->class->M.
		getType__lsun6.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_Type*)a2)->class->M.
		toString__J7Vel.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_List.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	GOTO(338,L10);

L9:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av10 = a1;
	a1 = av7;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->class->M.
		getType__lsun6.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_Type*)a2)->class->M.
		toString__J7Vel.f(a2);
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L10:	a1 = av10;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L11:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(385,L8);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1862268018)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av9 = a1;
	GOTO(402,L16);

L12:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_java_lang_String.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av7;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_List.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,2095947698)->f)(a1);
	av12 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[9];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	i1 = 0;
	iv13 = i1;
	GOTO(469,L15);

L13:	i1 = iv13;
	if (i1 == 0)
		GOTO(474,L14);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
L14:	a1 = av1;
	a2 = av12;
	i3 = iv13;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a2)->class->M.
		getName__ttbNB.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	iv13 += 1;
L15:	i1 = iv13;
	a2 = av12;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(506,L13);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
L16:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(522,L12);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-98305106)->f)(a1);
	if (i1 != 0)
		GOTO(532,L17);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
L17:	a1 = av0;
	a2 = av1;
	i3 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		printStatementsInBody_Pz_R37W9.f(a1,a2,i3);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[11];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printStatementsInBody_Pz_R37W9: ca.mcgill.sable.soot.grimp.GrimpBody.printStatementsInBody(Ljava/io/PrintWriter;Z)V */

Class xt_printStatementsInBody_Pz_R37W9[] = { 0 };

Void printStatementsInBody_Pz_R37W9(Object p0, Object p1, Boolean p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av3, av4, av5, av6, av7, av8, av9, av10, av11, av12, av13;
Int i0, i1, i2, i3, i4, i5;
Int iv2, iv8, iv10;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getStmtList__DcNB7.f(a1);
	av3 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArrayList*)a3)->class->M.
		size__xLkH6.f(a3);
	i4 = 2;
	i3 = i3 * i4;
	i4 = 1;
	i3 = i3 + i4;
	f4 = fc1.v;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a2,i3,f4);
	av4 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.C);
	a2 = a1;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_OIQkq(a2,a3);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getUnitBoxes__5MQp1.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av6 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Kj8Mz(a2);
	av7 = a1;
	GOTO(54,L2);

L1:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		getUnit__zFD9S.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av7;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L2:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(96,L1);
	i1 = 0;
	iv8 = i1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av9 = a1;
	GOTO(108,L4);

L3:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av7;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 == 0)
		GOTO(132,L4);
	a1 = av4;
	a2 = av10;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[12];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	i4 = iv8;
	iv8 += 1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_i_ZQIqx.f(a3,i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L4:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(172,L3);
	i1 = 0;
	iv10 = i1;
	GOTO(178,L12);

L5:	a1 = av3;
	i2 = iv10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		get_i_qTcJE.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	i1 = iv10;
	if (i1 == 0)
		GOTO(194,L8);
	a1 = av3;
	i2 = iv10;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		get_i_qTcJE.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av12 = a1;
	a1 = av5;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		getSuccsOf_S_ma3uS.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	i2 = 1;
	if (i1 != i2)
		GOTO(223,L6);
	a1 = av5;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		getPredsOf_S_DYcxP.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	i2 = 1;
	if (i1 != i2)
		GOTO(239,L6);
	a1 = av4;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(251,L7);
L6:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	GOTO(258,L8);

L7:	a1 = av5;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StmtGraph*)a1)->class->M.
		getSuccsOf_S_ma3uS.f(a1,a2);
	av13 = a1;
	a1 = av13;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1247717038)->f)(a1,i2);
	a2 = av11;
	if (a1 == a2)
		GOTO(280,L8);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
L8:	a1 = av4;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(296,L9);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[13];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av4;
	a4 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[14];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
L9:	i1 = iv2;
	if (i1 == 0)
		GOTO(333,L10);
	a1 = av1;
	a2 = av11;
	a3 = av4;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[9];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1139290783)->f)(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	GOTO(351,L11);

L10:	a1 = av1;
	a2 = av11;
	a3 = av4;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[9];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-769832279)->f)(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
L11:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	iv10 += 1;
L12:	i1 = iv10;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArrayList*)a2)->class->M.
		size__xLkH6.f(a2);
	if (i1 < i2)
		GOBACK(388,L5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getTraps__EBrwu.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av11 = a1;
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(409,L14);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	GOTO(416,L14);

L13:	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Trap.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av12 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[15];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av12;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1567733942)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[16];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	a4 = av12;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1240191443)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[17];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	a4 = av12;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-738151089)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[18];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	a4 = av12;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-351888170)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
L14:	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(533,L13);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M print_debug_P_KYD85: ca.mcgill.sable.soot.grimp.GrimpBody.print_debug(Ljava/io/PrintWriter;)V */

Class xt_print_debug_P_KYD85[] = { 0 };

Void print_debug_P_KYD85(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av5, av6, av7, av8;
Int i0, i1, i2, i3, i4, i5;
Int iv4, iv6;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getStmtList__DcNB7.f(a1);
	av2 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a2 = a1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArrayList*)a3)->class->M.
		size__xLkH6.f(a3);
	i4 = 2;
	i3 = i3 * i4;
	i4 = 1;
	i3 = i3 + i4;
	f4 = fc1.v;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_if_LzPr3(a2,i3,f4);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av5 = a1;
	GOTO(32,L2);

L1:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av3;
	a2 = av6;
	a3 = new(&cl_java_lang_Integer.C);
	a4 = a3;
	i5 = iv4;
	iv4 += 1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a4,i5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Integer*)a3)->class->M.
		toString__bvwIN.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
L2:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(78,L1);
	i1 = 0;
	iv6 = i1;
	GOTO(84,L4);

L3:	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		get_i_qTcJE.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[7];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av3;
	a4 = av7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[19];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av1;
	a2 = av7;
	a3 = av3;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[9];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1139290783)->f)(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	iv6 += 1;
L4:	i1 = iv6;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArrayList*)a2)->class->M.
		size__xLkH6.f(a2);
	if (i1 < i2)
		GOBACK(163,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a1)->class->M.
		getTraps__EBrwu.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av7 = a1;
	GOTO(177,L6);

L5:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Trap.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[20];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1567733942)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[16];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av3;
	a4 = av8;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-1240191443)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[17];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av3;
	a4 = av8;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-738151089)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_GrimpBody[18];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av3;
	a4 = av8;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,-351888170)->f)(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
L6:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(291,L5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GrimpBody[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','B','o','d','y',
'C','a','n',' ','o','n','l','y',' ','c','o','n','s','t','r','u','c','t',
' ','G','r','i','m','p','B','o','d','y',39,'s',' ','f','r','o','m',' ',
'C','l','a','s','s','F','i','l','e','B','o','d','y',39,'s',' ','o','r',
' ','J','i','m','p','l','e','B','o','d','y',39,'s',' ','(','f','o','r',
' ','n','o','w',')','S','o','m','e','t','h','i','n','g',' ','w','e','i',
'r','d',39,'s',' ','h','a','p','p','e','n','i','n','g',' ','(',',',' ',
')',' ',' ',' ',' ',' ',' ',' ',' ','{',' ',' ',' ',' ',' ',' ',' ',' ',
';',' ',' ',' ',' ','}','l','a','b','e','l',' ',' ',' ',' ',' ',':',' ',
' ',' ',' ',' ',' ',' ',' ','.','c','a','t','c','h',' ',' ','f','r','o',
'm',' ',' ','t','o',' ',' ','w','i','t','h',' ',':',' ','.','c','a','t',
'c','h',' '};

const void *st_ca_mcgill_sable_soot_grimp_GrimpBody[] = {
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+36,	/* 0. ca.mcgill.sable.soot.grimp.GrimpBody */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+113,	/* 1. Can only construct GrimpBody's from Clas */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+140,	/* 2. Something weird's happening */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+141,	/* 3.   */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+142,	/* 4. ( */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+144,	/* 5. ,  */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+145,	/* 6. ) */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+149,	/* 7.      */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+154,	/* 8.     { */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+162,	/* 9.          */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+163,	/* 10. ; */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+168,	/* 11.     } */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+173,	/* 12. label */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+178,	/* 13.       */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+179,	/* 14. : */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+194,	/* 15.         .catch  */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+200,	/* 16.  from  */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+204,	/* 17.  to  */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+210,	/* 18.  with  */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+212,	/* 19. :  */
    ch_ca_mcgill_sable_soot_grimp_GrimpBody+219,	/* 20. .catch  */
    0};
