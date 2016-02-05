/*  ca_mcgill_sable_soot_grimp_GrimpBody$2.c -- from Java class ca.mcgill.sable.soot.grimp.GrimpBody$2  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody$2.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.h"
#include "ca_mcgill_sable_soot_jimple_StmtSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody$1.h"
#include "ca_mcgill_sable_soot_jimple_GotoStmt.h"
#include "ca_mcgill_sable_soot_jimple_IfStmt.h"
#include "ca_mcgill_sable_soot_jimple_LookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_TableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_Unit.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grim_3pbRs.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C,
    &cl_ca_mcgill_sable_soot_grim_2pbRs.C,
    &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Unit.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grim_3pbRs[];
extern const void *st_ca_mcgill_sable_soot_grim_3pbRs[];
extern Class xt_defaultCase_S_A6QDV[];
extern Class xt_caseGotoStmt_G_lyl5y[];
extern Class xt_caseIfStmt_I_hYE5E[];
extern Class xt_caseLookupSwitchStmt_L_ZJMNL[];
extern Class xt_caseTableSwitchStmt_T_Rtp3v[];
extern Class xt_init_H_U4cj7[];

#define HASHMASK 0x1ff
/*  60.  b4381c60  (60)  caseIfStmt  */
/*  6a.  4ef12e6a  (6a)  caseThrowStmt  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  72.  53c49c72  (72)  caseLookupSwitchStmt  */
/*  84.  7a613884  (84)  caseAssignStmt  */
/*  a4.  12bcbaa4  (a4)  caseGotoStmt  */
/*  d4.  fc3eaad4  (d4)  caseRetStmt  */
/*  d6.  658220d6  (d6)  caseReturnStmt  */
/*  ea.  bade4aea  (ea)  caseIdentityStmt  */
/*  fa.  901d1cfa  (fa)  caseTableSwitchStmt  */
/*  128.  ced4a328  (128)  defaultCase  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  15a.  df0a495a  (15a)  caseEnterMonitorStmt  */
/*  161.  8942e761  (161)  hashCode  */
/*  166.  f9337566  (166)  caseInvokeStmt  */
/*  176.  af0e4576  (176)  caseReturnVoidStmt  */
/*  1a8.  dcb333a8  (1a8)  caseBreakpointStmt  */
/*  1a9.  3f5379a8  (1a8)  caseNopStmt  */
/*  1d2.  4c0d6fd2  (1d2)  clone  */
/*  1e6.  499847e6  (1e6)  caseExitMonitorStmt  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1271391136, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseIfStmt_I_hYE5E,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1324428906, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseThrowStmt_T_kBmfU,
    0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.toString__4d9OF,
    0, 0, 0, 0,
    1405394034, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseLookupSwitchStmt_L_ZJMNL,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2053191812, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseAssignStmt_A_UC8RU,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314358436, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseGotoStmt_G_lyl5y,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -63001900, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseRetStmt_R_mfhjB,
    0, 0,
    1703026902, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseReturnStmt_R_MJS9x,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1159836950, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseIdentityStmt_I_e4hif,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1877140230, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseTableSwitchStmt_T_Rtp3v,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.defaultCase_O_gehkN,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -552973990, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseEnterMonitorStmt_E_CWyO7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0,
    -114068122, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseInvokeStmt_I_AvMQe,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1358019210, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseReturnVoidStmt_R_orT7v,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -592235608, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseBreakpointStmt_B_OJ2Xk,
    1062435240, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseNopStmt_N_iRutP,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1234716646, &cl_ca_mcgill_sable_soot_grim_3pbRs.M.caseExitMonitorStmt_E_818wS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','B','o','d','y',
'$','2'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
'v','a','l','$','o','l','d','T','o','N','e','w'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
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
'c','a','s','e','B','r','e','a','k','p','o','i','n','t','S','t','m','t'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','B','r','e','a','k','p',
'o','i','n','t','S','t','m','t',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','I','n','v','o','k','e','S','t','m','t'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'S','t','m','t',';',')','V'};
static const Char nmim_14[] = {
'c','a','s','e','A','s','s','i','g','n','S','t','m','t'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','A','s','s','i','g','n',
'S','t','m','t',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','I','d','e','n','t','i','t','y','S','t','m','t'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','d','e','n','t','i',
't','y','S','t','m','t',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','E','n','t','e','r','M','o','n','i','t','o','r','S','t',
'm','t'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','n','t','e','r','M',
'o','n','i','t','o','r','S','t','m','t',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','E','x','i','t','M','o','n','i','t','o','r','S','t','m',
't'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','x','i','t','M','o',
'n','i','t','o','r','S','t','m','t',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','G','o','t','o','S','t','m','t'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','G','o','t','o','S','t',
'm','t',';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','I','f','S','t','m','t'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','f','S','t','m','t',
';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','L','o','o','k','u','p','S','w','i','t','c','h','S','t',
'm','t'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','o','k','u','p',
'S','w','i','t','c','h','S','t','m','t',';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','N','o','p','S','t','m','t'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S','t','m',
't',';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','R','e','t','S','t','m','t'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S','t','m',
't',';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','R','e','t','u','r','n','S','t','m','t'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'S','t','m','t',';',')','V'};
static const Char nmim_24[] = {
'c','a','s','e','R','e','t','u','r','n','V','o','i','d','S','t','m','t'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'V','o','i','d','S','t','m','t',';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','T','a','b','l','e','S','w','i','t','c','h','S','t','m',
't'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','a','b','l','e','S',
'w','i','t','c','h','S','t','m','t',';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','T','h','r','o','w','S','t','m','t'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','r','o','w','S',
't','m','t',';',')','V'};
static const Char nmim_27[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_27[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_28[] = {
's','e','t','R','e','s','u','l','t'};
static const Char sgim_28[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_29[] = {
'g','e','t','R','e','s','u','l','t'};
static const Char sgim_29[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_30[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t',';',')',
'V'};
static const Char nmim_31[] = {
'<','i','n','i','t','>'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','H','a','s','h','M','a','p',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grim_3pbRs, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grim_3pbRs, valoldToNew_DGmKF), 0,(const Char *)&nmiv_1,12,(const Char *)&sgiv_1,30,1,0x12,0}, 
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
} inr_ca_mcgill_sable_soot_grim_3pbRs = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grim_3pbRs.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grim_3pbRs cl_ca_mcgill_sable_soot_grim_3pbRs = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grim_3pbRs),
    32,
    0,
    2,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    13, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grim_3pbRs,
    st_ca_mcgill_sable_soot_grim_3pbRs,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grim_3pbRs,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__xmxzo,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,18,0},
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
	{TMIT_native_code, caseBreakpointStmt_B_OJ2Xk,(const Char *)&nmim_12,18,
	(const Char *)&sgim_12,47,0,0x8001,0,0},
	{TMIT_native_code, caseInvokeStmt_I_AvMQe,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,43,0,0x8001,1,0},
	{TMIT_native_code, caseAssignStmt_A_UC8RU,(const Char *)&nmim_14,14,
	(const Char *)&sgim_14,43,0,0x8001,2,0},
	{TMIT_native_code, caseIdentityStmt_I_e4hif,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,0,0x8001,3,0},
	{TMIT_native_code, caseEnterMonitorStmt_E_CWyO7,(const Char *)&nmim_16,20,
	(const Char *)&sgim_16,49,0,0x8001,4,0},
	{TMIT_native_code, caseExitMonitorStmt_E_818wS,(const Char *)&nmim_17,19,
	(const Char *)&sgim_17,48,0,0x8001,5,0},
	{TMIT_native_code, caseGotoStmt_G_lyl5y,(const Char *)&nmim_18,12,
	(const Char *)&sgim_18,41,1,0x8001,1,xt_caseGotoStmt_G_lyl5y},
	{TMIT_native_code, caseIfStmt_I_hYE5E,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x8001,2,xt_caseIfStmt_I_hYE5E},
	{TMIT_native_code, caseLookupSwitchStmt_L_ZJMNL,(const Char *)&nmim_20,20,
	(const Char *)&sgim_20,49,1,0x8001,3,xt_caseLookupSwitchStmt_L_ZJMNL},
	{TMIT_native_code, caseNopStmt_N_iRutP,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,0,0x8001,9,0},
	{TMIT_native_code, caseRetStmt_R_mfhjB,(const Char *)&nmim_22,11,
	(const Char *)&sgim_22,40,0,0x8001,10,0},
	{TMIT_native_code, caseReturnStmt_R_MJS9x,(const Char *)&nmim_23,14,
	(const Char *)&sgim_23,43,0,0x8001,11,0},
	{TMIT_native_code, caseReturnVoidStmt_R_orT7v,(const Char *)&nmim_24,18,
	(const Char *)&sgim_24,47,0,0x8001,12,0},
	{TMIT_native_code, caseTableSwitchStmt_T_Rtp3v,(const Char *)&nmim_25,19,
	(const Char *)&sgim_25,48,1,0x8001,4,xt_caseTableSwitchStmt_T_Rtp3v},
	{TMIT_native_code, caseThrowStmt_T_kBmfU,(const Char *)&nmim_26,13,
	(const Char *)&sgim_26,42,0,0x8001,14,0},
	{TMIT_native_code, defaultCase_O_gehkN,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,21,0,0x8001,15,0},
	{TMIT_native_code, setResult_O_If72c,(const Char *)&nmim_28,9,
	(const Char *)&sgim_28,21,0,0x1,16,0},
	{TMIT_native_code, getResult__IigFK,(const Char *)&nmim_29,9,
	(const Char *)&sgim_29,20,0,0x1,17,0},
	{TMIT_native_code, defaultCase_S_A6QDV,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,37,1,0x1,0,xt_defaultCase_S_A6QDV},
	{TMIT_native_code, init_H_U4cj7,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,33,1,0x0,5,xt_init_H_U4cj7},
    } /* end of methodsigs */
};


/*M defaultCase_S_A6QDV: ca.mcgill.sable.soot.grimp.GrimpBody$2.defaultCase(Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_defaultCase_S_A6QDV[] = { 0 };

Void defaultCase_S_A6QDV(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_grim_3pbRs[1];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_O_wO0jp.f(a3,a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGotoStmt_G_lyl5y: ca.mcgill.sable.soot.grimp.GrimpBody$2.caseGotoStmt(Lca/mcgill/sable/soot/jimple/GotoStmt;)V */

Class xt_caseGotoStmt_G_lyl5y[] = { 0 };

Void caseGotoStmt_G_lyl5y(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a1)->valoldToNew_DGmKF;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_GotoStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a2)->valoldToNew_DGmKF;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1167855719)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1576761943)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIfStmt_I_hYE5E: ca.mcgill.sable.soot.grimp.GrimpBody$2.caseIfStmt(Lca/mcgill/sable/soot/jimple/IfStmt;)V */

Class xt_caseIfStmt_I_hYE5E[] = { 0 };

Void caseIfStmt_I_hYE5E(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a1)->valoldToNew_DGmKF;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IfStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a2)->valoldToNew_DGmKF;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1164416791)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1576761943)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLookupSwitchStmt_L_ZJMNL: ca.mcgill.sable.soot.grimp.GrimpBody$2.caseLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/LookupSwitchStmt;)V */

Class xt_caseLookupSwitchStmt_L_ZJMNL[] = { 0 };

Void caseLookupSwitchStmt_L_ZJMNL(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a1)->valoldToNew_DGmKF;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a2)->valoldToNew_DGmKF;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-803057444)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Unit.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,481678642)->f)(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,476069454)->f)(a1);
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimple_Unit.C,i1);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(47,L2);

L1:	a1 = av3;
	i2 = iv4;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a3)->valoldToNew_DGmKF;
	a4 = av2;
	i5 = iv4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1646627144)->f)(a4,i5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_HashMap*)a3)->class->M.
		get_O_qmciZ.f(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimple_Unit.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv4 += 1;
L2:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,476069454)->f)(a2);
	if (i1 < i2)
		GOBACK(83,L1);
	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1098713837)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseTableSwitchStmt_T_Rtp3v: ca.mcgill.sable.soot.grimp.GrimpBody$2.caseTableSwitchStmt(Lca/mcgill/sable/soot/jimple/TableSwitchStmt;)V */

Class xt_caseTableSwitchStmt_T_Rtp3v[] = { 0 };

Void caseTableSwitchStmt_T_Rtp3v(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av4;
Int i0, i1, i2, i3, i4;
Int iv3, iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a1)->valoldToNew_DGmKF;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a2)->valoldToNew_DGmKF;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-803057444)->f)(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Unit.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,481678642)->f)(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,278321262)->f)(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-619146984)->f)(a2);
	i1 = i1 - i2;
	i2 = 1;
	i1 = i1 + i2;
	iv3 = i1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av4 = a1;
	i1 = 0;
	iv5 = i1;
	GOTO(62,L2);

L1:	a1 = av4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a2)->valoldToNew_DGmKF;
	a3 = av2;
	i4 = iv5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1646627144)->f)(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
	iv5 += 1;
L2:	i1 = iv5;
	i2 = iv3;
	if (i1 < i2)
		GOBACK(92,L1);
	a1 = av2;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-616107327)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_H_U4cj7: ca.mcgill.sable.soot.grimp.GrimpBody$2.<init>(Lca/mcgill/sable/util/HashMap;)V */

Class xt_init_H_U4cj7[] = { 0 };

Void init_H_U4cj7(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__xmxzo(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grim_3pbRs*)a1)->valoldToNew_DGmKF = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grim_3pbRs[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','B','o','d','y',
'$','2','I','n','t','e','r','n','a','l',' ','e','r','r','o','r',':',' '};

const void *st_ca_mcgill_sable_soot_grim_3pbRs[] = {
    ch_ca_mcgill_sable_soot_grim_3pbRs+38,	/* 0. ca.mcgill.sable.soot.grimp.GrimpBody$2 */
    ch_ca_mcgill_sable_soot_grim_3pbRs+54,	/* 1. Internal error:  */
    0};
