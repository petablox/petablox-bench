/*  ca_mcgill_sable_soot_jimple_JimpleBody.c -- from Java class ca.mcgill.sable.soot.jimple.JimpleBody  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_StmtBody.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_AlreadyDeclaredException.h"
#include "ca_mcgill_sable_soot_ClassFileBody.h"
#include "ca_mcgill_sable_soot_DeterministicHashMap.h"
#include "ca_mcgill_sable_soot_ErroneousType.h"
#include "ca_mcgill_sable_soot_IncorrectDeclarerException.h"
#include "ca_mcgill_sable_soot_Modifier.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_Timer.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_UnknownType.h"
#include "ca_mcgill_sable_soot_coffi_CFG.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "ca_mcgill_sable_soot_coffi_method_info.h"
#include "ca_mcgill_sable_soot_jimple_AssignStmt.h"
#include "ca_mcgill_sable_soot_jimple_BriefStmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.h"
#include "ca_mcgill_sable_soot_jimple_CompleteStmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_InvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_InvokeStmt.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_LiveLocals.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_LocalSplitter.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_soot_jimple_NewExpr.h"
#include "ca_mcgill_sable_soot_jimple_NoSuchLocalException.h"
#include "ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.h"
#include "ca_mcgill_sable_soot_jimple_SimpleLiveLocals.h"
#include "ca_mcgill_sable_soot_jimple_SimpleLocalDefs.h"
#include "ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_StmtBox.h"
#include "ca_mcgill_sable_soot_jimple_StmtGraph.h"
#include "ca_mcgill_sable_soot_jimple_StmtList.h"
#include "ca_mcgill_sable_soot_jimple_Transformations.h"
#include "ca_mcgill_sable_soot_jimple_Trap.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_HashSet.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_ListIterator.h"
#include "ca_mcgill_sable_util_Map.h"
#include "ca_mcgill_sable_util_Set.h"
#include "java_io_PrintStream.h"
#include "java_io_PrintWriter.h"
#include "java_lang_Integer.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtBody.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C,
    &cl_ca_mcgill_sable_soot_ClassFileBody.C,
    &cl_ca_mcgill_sable_soot_DeterministicHashMap.C,
    &cl_ca_mcgill_sable_soot_ErroneousType.C,
    &cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C,
    &cl_ca_mcgill_sable_soot_Modifier.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_Timer.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_UnknownType.C,
    &cl_ca_mcgill_sable_soot_coffi_CFG.C,
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_ca_mcgill_sable_soot_coffi_method_info.C,
    &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_BriefStmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.C,
    &cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_LiveLocals.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_LocalSplitter.C,
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException.C,
    &cl_ca_mcgill_sable_soot_jimple_NonStaticInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleLiveLocals.C,
    &cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.C,
    &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtGraph.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtList.C,
    &cl_ca_mcgill_sable_soot_jimple_Transformations.C,
    &cl_ca_mcgill_sable_soot_jimple_Trap.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_HashSet.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_ListIterator.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_ca_mcgill_sable_util_Set.C,
    &cl_java_io_PrintStream.C,
    &cl_java_io_PrintWriter.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JimpleBody[];
extern const void *st_ca_mcgill_sable_soot_jimple_JimpleBody[];
extern Class xt_init_S_77afC[];
extern Class xt_init_SBi_zoaC2[];
extern Class xt_patchForTyping__OXGf0[];
extern Class xt_typingFailed__sbEtc[];
extern Class xt_getStmtList__BJdpo[];
extern Class xt_redirectJumps_SS_NyOWQ[];
extern Class xt_eliminateBackPointersTo_S_DboaU[];
extern Class xt_getLocalCount__zHfl4[];
extern Class xt_getLocals__iAK9r[];
extern Class xt_addLocal_L_AwPJJ[];
extern Class xt_removeLocal_L_rRze6[];
extern Class xt_getLocal_S_jHgLo[];
extern Class xt_declaresLocal_S_MQOnI[];
extern Class xt_getMethod__6GJJv[];
extern Class xt_getUnitBoxes__rb9Io[];
extern Class xt_getTraps__8lukq[];
extern Class xt_addTrap_T_eHc7x[];
extern Class xt_removeTrap_T_Dja0U[];
extern Class xt_printTo_P_bCdqK[];
extern Class xt_printTo_Pi_kG9Gf[];
extern Class xt_printStatementsInBody_Pz_bQVU1[];
extern Class xt_printDebugTo_P_obATq[];

#define HASHMASK 0x1f
/*  0.  9a858b40  (0)  printTo  */
/*  2.  c2b4242  (2)  eliminateBackPointersTo  */
/*  7.  346c7a7  (7)  getMethod  */
/*  e.  519ce6ce  (e)  redirectJumps  */
/*  f.  489f8e6f  (f)  toString  */
/*  12.  d4c85752  (12)  getUnitBoxes  */
/*  14.  75e9e534  (14)  getStmtList  */
/*  15.  554dc535  (15)  printTo  */
/*  1a.  5001863a  (1a)  getLocalCount  */
/*  1b.  c78368bb  (1b)  getLocals  */
/*  1f.  4c3c86df  (1f)  getTraps  */
static const struct ihash htable[33] = {
    -1702524096, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.printTo_P_bCdqK,
    0, 0,
    204161602, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.eliminateBackPointersTo_S_DboaU,
    0, 0, 0, 0, 0, 0, 0, 0,
    54970279, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.getMethod__6GJJv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1369237198, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.redirectJumps_SS_NyOWQ,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.toString__4d9OF,
    0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.getUnitBoxes__rb9Io,
    0, 0,
    1978262836, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.getStmtList__BJdpo,
    1431160117, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.printTo_Pi_kG9Gf,
    0, 0, 0, 0, 0, 0, 0, 0,
    1342277178, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.getLocalCount__zHfl4,
    -947689285, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.getLocals__iAK9r,
    0, 0, 0, 0, 0, 0,
    1279035103, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.M.getTraps__8lukq,
    0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','i','m','p','l','e','B','o',
'd','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
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
'p','a','t','c','h','F','o','r','T','y','p','i','n','g'};
static const Char sgim_14[] = {
'(',')','V'};
static const Char nmim_15[] = {
't','y','p','i','n','g','F','a','i','l','e','d'};
static const Char sgim_15[] = {
'(',')','Z'};
static const Char nmim_16[] = {
'g','e','t','S','t','m','t','L','i','s','t'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','L',
'i','s','t',';'};
static const Char nmim_17[] = {
'r','e','d','i','r','e','c','t','J','u','m','p','s'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')','V'};
static const Char nmim_18[] = {
'e','l','i','m','i','n','a','t','e','B','a','c','k','P','o','i','n','t',
'e','r','s','T','o'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'V'};
static const Char nmim_19[] = {
'g','e','t','L','o','c','a','l','C','o','u','n','t'};
static const Char sgim_19[] = {
'(',')','I'};
static const Char nmim_20[] = {
'g','e','t','L','o','c','a','l','s'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_21[] = {
'a','d','d','L','o','c','a','l'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','V'};
static const Char nmim_22[] = {
'r','e','m','o','v','e','L','o','c','a','l'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','V'};
static const Char nmim_23[] = {
'g','e','t','L','o','c','a','l'};
static const Char sgim_23[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',
';'};
static const Char nmim_24[] = {
'd','e','c','l','a','r','e','s','L','o','c','a','l'};
static const Char sgim_24[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_25[] = {
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_25[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmim_26[] = {
'g','e','t','U','n','i','t','B','o','x','e','s'};
static const Char sgim_26[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_27[] = {
'g','e','t','T','r','a','p','s'};
static const Char sgim_27[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_28[] = {
'a','d','d','T','r','a','p'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','r','a','p',';',')',
'V'};
static const Char nmim_29[] = {
'r','e','m','o','v','e','T','r','a','p'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','r','a','p',';',')',
'V'};
static const Char nmim_30[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_30[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';',')','V'};
static const Char nmim_31[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_31[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';','I',')','V'};
static const Char nmim_32[] = {
'p','r','i','n','t','S','t','a','t','e','m','e','n','t','s','I','n','B',
'o','d','y'};
static const Char sgim_32[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';','Z',')','V'};
static const Char nmim_33[] = {
'p','r','i','n','t','D','e','b','u','g','T','o'};
static const Char sgim_33[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','W','r','i',
't','e','r',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JimpleBody, locals), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,27,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JimpleBody, method), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,33,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JimpleBody, stmtList), 0,(const Char *)&nmiv_2,8,(const Char *)&sgiv_2,38,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JimpleBody, traps), 0,(const Char *)&nmiv_3,5,(const Char *)&sgiv_3,27,1,0x0,3}, 
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
} inr_ca_mcgill_sable_soot_jimple_JimpleBody = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JimpleBody cl_ca_mcgill_sable_soot_jimple_JimpleBody = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JimpleBody),
    34,
    0,
    4,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    55, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JimpleBody,
    st_ca_mcgill_sable_soot_jimple_JimpleBody,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JimpleBody,
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
	{TMIT_native_code, init_S_77afC,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,36,1,0x0,0,xt_init_S_77afC},
	{TMIT_native_code, init_SBi_zoaC2,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,64,1,0x1,1,xt_init_SBi_zoaC2},
	{TMIT_native_code, patchForTyping__OXGf0,(const Char *)&nmim_14,14,
	(const Char *)&sgim_14,3,1,0x2,2,xt_patchForTyping__OXGf0},
	{TMIT_native_code, typingFailed__sbEtc,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,3,1,0x2,3,xt_typingFailed__sbEtc},
	{TMIT_native_code, getStmtList__BJdpo,(const Char *)&nmim_16,11,
	(const Char *)&sgim_16,40,1,0x8001,4,xt_getStmtList__BJdpo},
	{TMIT_native_code, redirectJumps_SS_NyOWQ,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,71,1,0x8001,5,xt_redirectJumps_SS_NyOWQ},
	{TMIT_native_code, eliminateBackPointersTo_S_DboaU,(const Char *)&nmim_18,23,
	(const Char *)&sgim_18,37,1,0x8001,6,xt_eliminateBackPointersTo_S_DboaU},
	{TMIT_native_code, getLocalCount__zHfl4,(const Char *)&nmim_19,13,
	(const Char *)&sgim_19,3,1,0x8001,7,xt_getLocalCount__zHfl4},
	{TMIT_native_code, getLocals__iAK9r,(const Char *)&nmim_20,9,
	(const Char *)&sgim_20,29,1,0x8001,8,xt_getLocals__iAK9r},
	{TMIT_native_code, addLocal_L_AwPJJ,(const Char *)&nmim_21,8,
	(const Char *)&sgim_21,38,1,0x1,9,xt_addLocal_L_AwPJJ},
	{TMIT_native_code, removeLocal_L_rRze6,(const Char *)&nmim_22,11,
	(const Char *)&sgim_22,38,1,0x1,10,xt_removeLocal_L_rRze6},
	{TMIT_native_code, getLocal_S_jHgLo,(const Char *)&nmim_23,8,
	(const Char *)&sgim_23,55,1,0x1,11,xt_getLocal_S_jHgLo},
	{TMIT_native_code, declaresLocal_S_MQOnI,(const Char *)&nmim_24,13,
	(const Char *)&sgim_24,21,1,0x1,12,xt_declaresLocal_S_MQOnI},
	{TMIT_native_code, getMethod__6GJJv,(const Char *)&nmim_25,9,
	(const Char *)&sgim_25,35,1,0x8001,13,xt_getMethod__6GJJv},
	{TMIT_native_code, getUnitBoxes__rb9Io,(const Char *)&nmim_26,12,
	(const Char *)&sgim_26,29,1,0x8001,14,xt_getUnitBoxes__rb9Io},
	{TMIT_native_code, getTraps__8lukq,(const Char *)&nmim_27,8,
	(const Char *)&sgim_27,29,1,0x8001,15,xt_getTraps__8lukq},
	{TMIT_native_code, addTrap_T_eHc7x,(const Char *)&nmim_28,7,
	(const Char *)&sgim_28,37,1,0x1,16,xt_addTrap_T_eHc7x},
	{TMIT_native_code, removeTrap_T_Dja0U,(const Char *)&nmim_29,10,
	(const Char *)&sgim_29,37,1,0x1,17,xt_removeTrap_T_Dja0U},
	{TMIT_native_code, printTo_P_bCdqK,(const Char *)&nmim_30,7,
	(const Char *)&sgim_30,24,1,0x8001,18,xt_printTo_P_bCdqK},
	{TMIT_native_code, printTo_Pi_kG9Gf,(const Char *)&nmim_31,7,
	(const Char *)&sgim_31,25,1,0x8001,19,xt_printTo_Pi_kG9Gf},
	{TMIT_native_code, printStatementsInBody_Pz_bQVU1,(const Char *)&nmim_32,21,
	(const Char *)&sgim_32,25,1,0x0,20,xt_printStatementsInBody_Pz_bQVU1},
	{TMIT_native_code, printDebugTo_P_obATq,(const Char *)&nmim_33,12,
	(const Char *)&sgim_33,24,1,0x1,21,xt_printDebugTo_P_obATq},
    } /* end of methodsigs */
};

static union fconst fc1 = { 0x3f333333 };

/*M init_S_77afC: ca.mcgill.sable.soot.jimple.JimpleBody.<init>(Lca/mcgill/sable/soot/SootMethod;)V */

Class xt_init_S_77afC[] = { 0 };

Void init_S_77afC(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->locals = a2;
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
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->traps = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->method = a2;
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
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->stmtList = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_SBi_zoaC2: ca.mcgill.sable.soot.jimple.JimpleBody.<init>(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/soot/Body;I)V */

Class xt_init_SBi_zoaC2[] = { 0 };

Void init_SBi_zoaC2(Object p0, Object p1, Object p2, Int p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av4, av5, av6;
Int i0, i1, i2, i3, i4;
Int iv3;
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
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->locals = a2;
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
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->traps = a2;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ClassFileBody.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(30,L1);
	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ClassFileBody.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	GOTO(39,L2);

L1:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L2:	a1 = av0;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ClassFileBody*)a2)->class->M.
		getMethod__ltxK9.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->method = a2;
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
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->stmtList = a2;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ClassFileBody*)a1)->coffiClass;
	av5 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ClassFileBody*)a1)->coffiMethod;
	av6 = a1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(90,L3);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->method;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[3];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getModifiers__KRAh8.f(a1);
	i1 = isAbstract_i_9wghh(i1);
	if (i1 != 0)
		GOTO(136,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->method;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getModifiers__KRAh8.f(a1);
	i1 = isNative_i_c6Hg4(i1);
	if (i1 == 0)
		GOTO(149,L5);
L4:	return;

L5:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(156,L6);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.conversionTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L6:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->cfg;
	if (a1 != 0)
		GOTO(170,L8);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(176,L7);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->method;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[4];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L7:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CFG.C);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_m_MVZMH(a1,a2);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(223,L8);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->method;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[5];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L8:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(262,L9);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->method;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[6];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L9:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->cfg;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool;
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->this_class;
	a4 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		jimplify_aciJ_ihFxE.f(a1,a2,i3,a4);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(321,L10);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.conversionTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.conversionLocalCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->class->M.
		getLocalCount__zHfl4.f(a2);
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.conversionLocalCount = i1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.conversionStmtCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->stmtList;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArrayList*)a2)->class->M.
		size__xLkH6.f(a2);
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.conversionStmtCount = i1;
L10:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(358,L11);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->method;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[7];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L11:	i1 = iv3;
	i1 = noSplitting_i_VulE9(i1);
	if (i1 != 0)
		GOTO(398,L16);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(404,L12);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.splitTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L12:	a1 = av0;
	splitLocals_J_Lo37e(a1);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(420,L13);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.splitTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.splitLocalCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->class->M.
		getLocalCount__zHfl4.f(a2);
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.splitLocalCount = i1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.splitStmtCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->stmtList;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArrayList*)a2)->class->M.
		size__xLkH6.f(a2);
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.splitStmtCount = i1;
L13:	i1 = iv3;
	i1 = noTyping_i_kptnC(i1);
	if (i1 != 0)
		GOTO(458,L16);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(464,L14);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.assignTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
L14:	a1 = av0;
	assignTypesToLocals_J_cGy7l(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = typingFailed__sbEtc(a1);
	if (i1 == 0)
		GOTO(481,L15);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	patchForTyping__OXGf0(a1);
	a1 = av0;
	assignTypesToLocals_J_cGy7l(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = typingFailed__sbEtc(a1);
	if (i1 == 0)
		GOTO(496,L15);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[8];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L15:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(512,L16);
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.assignLocalCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->class->M.
		getLocalCount__zHfl4.f(a2);
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.assignLocalCount = i1;
	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.assignStmtCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->stmtList;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArrayList*)a2)->class->M.
		size__xLkH6.f(a2);
	i1 = i1 + i2;
	init_ca_mcgill_sable_soot_jimple_Main();
	cl_ca_mcgill_sable_soot_jimple_Main.V.assignStmtCount = i1;
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.assignTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
L16:	i1 = iv3;
	i1 = noCleanup_i_32ZQT(i1);
	if (i1 != 0)
		GOTO(550,L17);
	a1 = av0;
	cleanupCode_J_SJFsC(a1);
	a1 = av0;
	removeUnusedLocals_S_inhiW(a1);
L17:	i1 = iv3;
	i1 = noAggregating_i_3mlsA(i1);
	if (i1 != 0)
		GOTO(565,L18);
	a1 = av0;
	aggregate_S_zuRdz(a1);
	a1 = av0;
	removeUnusedLocals_S_inhiW(a1);
L18:	a1 = av0;
	renameLocals_S_ANFJI(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M patchForTyping__OXGf0: ca.mcgill.sable.soot.jimple.JimpleBody.patchForTyping()V */

Class xt_patchForTyping__OXGf0[] = { 0 };

Void patchForTyping__OXGf0(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av2, av3, av4, av5, av6, av7, av9, av10;
Int i0, i1, i2, i3, i4;
Int iv1, iv8;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->stmtList;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		listIterator__OayEl.f(a1);
	av2 = a1;
	a1 = 0;
	av3 = a1;
	a1 = av0;
	cleanupCode_J_SJFsC(a1);
	a1 = av0;
	removeUnusedLocals_S_inhiW(a1);
	a1 = av0;
	renameLocals_S_ANFJI(a1);
	GOTO(24,L5);

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
	av4 = a1;
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(43,L5);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_AssignStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1235668254)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(63,L5);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(76,L5);
	a1 = v__WbL8F();
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[9];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	a3 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLocal_ST_UrNI5.f(a1,a2,a3);
	av6 = a1;
	a1 = av0;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		addLocal_L_AwPJJ.f(a1,a2);
	iv1 += 1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2065038185)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av5;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1615663945)->f)(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->stmtList;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,859221097)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		listIterator_i_PcIuL.f(a1,i2);
	av7 = a1;
	i1 = 0;
	iv8 = i1;
	GOTO(153,L3);

L2:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av9;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(173,L3);
	a1 = av9;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-406008228)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_InvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(196,L3);
	a1 = av10;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1295252652)->f)(a1);
	a2 = av3;
	if (a1 != a2)
		GOTO(210,L3);
	a1 = av10;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_SpecialInvokeExpr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,574535058)->f)(a1,a2);
	a1 = av7;
	a2 = v__WbL8F();
	a3 = av3;
	a4 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a2)->class->M.
		newAssignStmt_VV_VK6ax.f(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1444174432)->f)(a1,a2);
	i1 = 1;
	iv8 = i1;
	GOTO(244,L4);

L3:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(254,L2);
L4:	i1 = iv8;
	if (i1 != 0)
		GOTO(259,L5);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[10];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(278,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M typingFailed__sbEtc: ca.mcgill.sable.soot.jimple.JimpleBody.typingFailed()Z */

Class xt_typingFailed__sbEtc[] = { 0 };

Boolean typingFailed__sbEtc(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocals__iAK9r.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av1 = a1;
	GOTO(10,L3);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(33,L2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		getType__lsun6.f(a1);
	a2 = v__43yOC();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(46,L3);
L2:	i1 = 1;
	return i1;

L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(57,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getStmtList__BJdpo: ca.mcgill.sable.soot.jimple.JimpleBody.getStmtList()Lca/mcgill/sable/soot/jimple/StmtList; */

Class xt_getStmtList__BJdpo[] = { 0 };

Object getStmtList__BJdpo(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->stmtList;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M redirectJumps_SS_NyOWQ: ca.mcgill.sable.soot.jimple.JimpleBody.redirectJumps(Lca/mcgill/sable/soot/jimple/Stmt;Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_redirectJumps_SS_NyOWQ[] = { 0 };

Void redirectJumps_SS_NyOWQ(Object p0, Object p1, Object p2)
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[11];
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

/*M eliminateBackPointersTo_S_DboaU: ca.mcgill.sable.soot.jimple.JimpleBody.eliminateBackPointersTo(Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_eliminateBackPointersTo_S_DboaU[] = { 0 };

Void eliminateBackPointersTo_S_DboaU(Object p0, Object p1)
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

/*M getLocalCount__zHfl4: ca.mcgill.sable.soot.jimple.JimpleBody.getLocalCount()I */

Class xt_getLocalCount__zHfl4[] = { 0 };

Int getLocalCount__zHfl4(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->locals;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocals__iAK9r: ca.mcgill.sable.soot.jimple.JimpleBody.getLocals()Lca/mcgill/sable/util/List; */

Class xt_getLocals__iAK9r[] = { 0 };

Object getLocals__iAK9r(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->locals;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addLocal_L_AwPJJ: ca.mcgill.sable.soot.jimple.JimpleBody.addLocal(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_addLocal_L_AwPJJ[] = { &cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C, 0 };

Void addLocal_L_AwPJJ(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->locals;
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

/*M removeLocal_L_rRze6: ca.mcgill.sable.soot.jimple.JimpleBody.removeLocal(Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_removeLocal_L_rRze6[] = { &cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C, 0 };

Void removeLocal_L_rRze6(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->locals;
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

/*M getLocal_S_jHgLo: ca.mcgill.sable.soot.jimple.JimpleBody.getLocal(Ljava/lang/String;)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_getLocal_S_jHgLo[] = { &cl_ca_mcgill_sable_soot_jimple_NoSuchLocalException.C, 0 };

Object getLocal_S_jHgLo(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocals__iAK9r.f(a1);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name;
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

/*M declaresLocal_S_MQOnI: ca.mcgill.sable.soot.jimple.JimpleBody.declaresLocal(Ljava/lang/String;)Z */

Class xt_declaresLocal_S_MQOnI[] = { 0 };

Boolean declaresLocal_S_MQOnI(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocals__iAK9r.f(a1);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->name;
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

/*M getMethod__6GJJv: ca.mcgill.sable.soot.jimple.JimpleBody.getMethod()Lca/mcgill/sable/soot/SootMethod; */

Class xt_getMethod__6GJJv[] = { 0 };

Object getMethod__6GJJv(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->method;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUnitBoxes__rb9Io: ca.mcgill.sable.soot.jimple.JimpleBody.getUnitBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUnitBoxes__rb9Io[] = { 0 };

Object getUnitBoxes__rb9Io(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->stmtList;
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->traps;
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

/*M getTraps__8lukq: ca.mcgill.sable.soot.jimple.JimpleBody.getTraps()Lca/mcgill/sable/util/List; */

Class xt_getTraps__8lukq[] = { 0 };

Object getTraps__8lukq(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->traps;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addTrap_T_eHc7x: ca.mcgill.sable.soot.jimple.JimpleBody.addTrap(Lca/mcgill/sable/soot/jimple/Trap;)V */

Class xt_addTrap_T_eHc7x[] = { 0 };

Void addTrap_T_eHc7x(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->traps;
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

/*M removeTrap_T_Dja0U: ca.mcgill.sable.soot.jimple.JimpleBody.removeTrap(Lca/mcgill/sable/soot/jimple/Trap;)V */

Class xt_removeTrap_T_Dja0U[] = { 0 };

Void removeTrap_T_Dja0U(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->traps;
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

/*M printTo_P_bCdqK: ca.mcgill.sable.soot.jimple.JimpleBody.printTo(Ljava/io/PrintWriter;)V */

Class xt_printTo_P_bCdqK[] = { 0 };

Void printTo_P_bCdqK(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		printTo_Pi_kG9Gf.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printTo_Pi_kG9Gf: ca.mcgill.sable.soot.jimple.JimpleBody.printTo(Ljava/io/PrintWriter;I)V */

Class xt_printTo_Pi_kG9Gf[] = { 0 };

Void printTo_Pi_kG9Gf(Object p0, Object p1, Int p2)
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
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getStmtList__BJdpo.f(a1);
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->method;
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
		GOTO(66,L3);
	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[12];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L3:	a1 = av5;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a4)->method;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[12];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->method;
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->method;
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
		GOTO(150,L6);
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
	GOTO(166,L5);

L4:	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[14];
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
L5:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(197,L4);
L6:	a1 = av5;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[15];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[16];
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[17];
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
	i3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->class->M.
		getLocalCount__zHfl4.f(a3);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocals__iAK9r.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av8 = a1;
	GOTO(272,L10);

L7:	a1 = av8;
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
		GOTO(302,L8);
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
	GOTO(325,L9);

L8:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
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
L9:	a1 = av10;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L10:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(372,L7);
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
	GOTO(389,L15);

L11:	a1 = av9;
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
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[18];
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[12];
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
	GOTO(456,L14);

L12:	i1 = iv13;
	if (i1 == 0)
		GOTO(461,L13);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[14];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
L13:	a1 = av1;
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
L14:	i1 = iv13;
	a2 = av12;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(493,L12);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[19];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
L15:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(509,L11);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-98305106)->f)(a1);
	if (i1 != 0)
		GOTO(519,L16);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
L16:	a1 = av0;
	a2 = av1;
	i3 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		printStatementsInBody_Pz_bQVU1.f(a1,a2,i3);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[20];
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

/*M printStatementsInBody_Pz_bQVU1: ca.mcgill.sable.soot.jimple.JimpleBody.printStatementsInBody(Ljava/io/PrintWriter;Z)V */

Class xt_printStatementsInBody_Pz_bQVU1[] = { 0 };

Void printStatementsInBody_Pz_bQVU1(Object p0, Object p1, Boolean p2)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getStmtList__BJdpo.f(a1);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getUnitBoxes__rb9Io.f(a1);
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
	a5 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[21];
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
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[22];
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[23];
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
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[18];
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
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[18];
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
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[19];
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getTraps__8lukq.f(a1);
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
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[24];
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[25];
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[26];
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[27];
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

/*M printDebugTo_P_obATq: ca.mcgill.sable.soot.jimple.JimpleBody.printDebugTo(Ljava/io/PrintWriter;)V */

Class xt_printDebugTo_P_obATq[] = { 0 };

Void printDebugTo_P_obATq(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av8, av9, av10, av11;
Int i0, i1, i2, i3, i4, i5;
Int iv7, iv9;
Float f0, f1, f2, f3, f4, f5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1978262836)->f)(a1);
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
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_CompleteStmtGraph.C);
	a2 = a1;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_RJw6y(a2,a3);
	av5 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SimpleLocalDefs.C);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_C_GvjSD(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[28];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->class->M.
		getMethod__6GJJv.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getSignature__fIDMx.f(a3);
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_SimpleLiveLocals.C);
	a2 = a1;
	a3 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_C_FZQV5(a2,a3);
	av6 = a1;
	i1 = 0;
	iv7 = i1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av8 = a1;
	GOTO(94,L2);

L1:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av4;
	a2 = av9;
	a3 = new(&cl_java_lang_Integer.C);
	a4 = a3;
	i5 = iv7;
	iv7 += 1;
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
L2:	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(141,L1);
	i1 = 0;
	iv9 = i1;
	GOTO(147,L4);

L3:	a1 = av3;
	i2 = iv9;
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
	av10 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[16];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av4;
	a4 = av10;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[29];
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
	a2 = av10;
	a3 = av4;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[18];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-769832279)->f)(a2,a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[19];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av1;
	a2 = av6;
	a3 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,173033524)->f)(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_O_osdt2.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	iv9 += 1;
L4:	i1 = iv9;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_ArrayList*)a2)->class->M.
		size__xLkH6.f(a2);
	if (i1 < i2)
		GOBACK(241,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1279035103)->f)(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av10 = a1;
	GOTO(257,L6);

L5:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Trap.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av11 = a1;
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[30];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av11;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	a4 = av11;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[26];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	a4 = av11;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JimpleBody[27];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	a4 = av11;
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
L6:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(374,L5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_JimpleBody[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','i','m','p','l','e','B','o',
'd','y','C','a','n',' ','o','n','l','y',' ','c','o','n','s','t','r','u',
'c','t',' ','J','i','m','p','l','e','B','o','d','y',39,'s',' ','d','i',
'r','e','c','t','l','y',' ','f','r','o','m',' ','C','l','a','s','s','F',
'i','l','e','B','o','d','y',39,'s',' ','(','f','o','r',' ','n','o','w',
')','[',']',' ','J','i','m','p','l','i','f','y','i','n','g','.','.','.',
']',' ',' ',' ',' ',' ','B','u','i','l','d','i','n','g',' ','C','o','f',
'f','i',' ','C','F','G','.','.','.',']',' ',' ',' ',' ',' ','C','o','f',
'f','i',' ','C','F','G',' ','c','o','m','p','l','e','t','e','.',']',' ',
' ',' ',' ',' ',' ','P','r','o','d','u','c','i','n','g',' ','n','a','i',
'v','e',' ','J','i','m','p','l','e','.','.','.',']',' ',' ',' ',' ',' ',
' ','N','a','i','v','e',' ','t','y','p','e','l','e','s','s',' ','J','i',
'm','p','l','e',' ','p','r','o','d','u','c','e','d','.','t','y','p','e',
' ','i','n','f','e','r','e','n','c','e',' ','f','a','i','l','e','d','!',
't','m','p','u','n','a','b','l','e',' ','t','o',' ','p','a','t','c','h',
' ','c','o','d','e','S','o','m','e','t','h','i','n','g',' ','w','e','i',
'r','d',39,'s',' ','h','a','p','p','e','n','i','n','g',' ','(',',',' ',
')',' ',' ',' ',' ',' ',' ',' ',' ','{',' ',' ',' ',' ',' ',' ',' ',' ',
';',' ',' ',' ',' ','}','l','a','b','e','l',' ',' ',' ',' ',' ',':',' ',
' ',' ',' ',' ',' ',' ',' ','.','c','a','t','c','h',' ',' ','f','r','o',
'm',' ',' ','t','o',' ',' ','w','i','t','h',' ','d','e','b','u','g',' ',
'o','u','t','p','u','t',' ','f','o','r',' ',':',' ','.','c','a','t','c',
'h',' '};

const void *st_ca_mcgill_sable_soot_jimple_JimpleBody[] = {
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+38,	/* 0. ca.mcgill.sable.soot.jimple.JimpleBody */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+109,	/* 1. Can only construct JimpleBody's directly */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+110,	/* 2. [ */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+126,	/* 3. ] Jimplifying... */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+153,	/* 4. ]     Building Coffi CFG... */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+178,	/* 5. ]     Coffi CFG complete. */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+210,	/* 6. ]      Producing naive Jimple... */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+248,	/* 7. ]      Naive typeless Jimple produced. */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+270,	/* 8. type inference failed! */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+273,	/* 9. tmp */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+293,	/* 10. unable to patch code */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+320,	/* 11. Something weird's happening */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+321,	/* 12.   */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+322,	/* 13. ( */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+324,	/* 14. ,  */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+325,	/* 15. ) */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+329,	/* 16.      */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+334,	/* 17.     { */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+342,	/* 18.          */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+343,	/* 19. ; */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+348,	/* 20.     } */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+353,	/* 21. label */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+358,	/* 22.       */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+359,	/* 23. : */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+374,	/* 24.         .catch  */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+380,	/* 25.  from  */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+384,	/* 26.  to  */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+390,	/* 27.  with  */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+407,	/* 28. debug output for  */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+409,	/* 29. :  */
    ch_ca_mcgill_sable_soot_jimple_JimpleBody+416,	/* 30. .catch  */
    0};
