/*  ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractStmtSwitch  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.h"
#include "ca_mcgill_sable_soot_jimple_StmtSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch[];
extern Class xt_caseBreakpointStmt_B_OJ2Xk[];
extern Class xt_caseInvokeStmt_I_AvMQe[];
extern Class xt_caseAssignStmt_A_UC8RU[];
extern Class xt_caseIdentityStmt_I_e4hif[];
extern Class xt_caseEnterMonitorStmt_E_CWyO7[];
extern Class xt_caseExitMonitorStmt_E_818wS[];
extern Class xt_caseGotoStmt_G_smXLY[];
extern Class xt_caseIfStmt_I_OvvaS[];
extern Class xt_caseLookupSwitchStmt_L_AJqGz[];
extern Class xt_caseNopStmt_N_iRutP[];
extern Class xt_caseRetStmt_R_mfhjB[];
extern Class xt_caseReturnStmt_R_MJS9x[];
extern Class xt_caseReturnVoidStmt_R_orT7v[];
extern Class xt_caseTableSwitchStmt_T_g5lAa[];
extern Class xt_caseThrowStmt_T_kBmfU[];
extern Class xt_defaultCase_O_gehkN[];
extern Class xt_setResult_O_If72c[];
extern Class xt_getResult__IigFK[];
extern Class xt_init__xmxzo[];

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
    -1271391136, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseIfStmt_I_OvvaS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1324428906, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseThrowStmt_T_kBmfU,
    0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.toString__4d9OF,
    0, 0, 0, 0,
    1405394034, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseLookupSwitchStmt_L_AJqGz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2053191812, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseAssignStmt_A_UC8RU,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314358436, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseGotoStmt_G_smXLY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -63001900, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseRetStmt_R_mfhjB,
    0, 0,
    1703026902, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseReturnStmt_R_MJS9x,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1159836950, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseIdentityStmt_I_e4hif,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1877140230, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseTableSwitchStmt_T_g5lAa,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.defaultCase_O_gehkN,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -552973990, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseEnterMonitorStmt_E_CWyO7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0,
    -114068122, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseInvokeStmt_I_AvMQe,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1358019210, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseReturnVoidStmt_R_orT7v,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -592235608, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseBreakpointStmt_B_OJ2Xk,
    1062435240, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseNopStmt_N_iRutP,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1234716646, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.M.caseExitMonitorStmt_E_818wS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
};

static const CARRAY(46) nmchars = {&acl_char, 0, 46, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','m','t','S','w','i','t','c','h'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 46 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
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

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch),
    30,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch,
    st_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__xmxzo,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,18,xt_init__xmxzo},
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
	{TMIT_native_code, caseBreakpointStmt_B_OJ2Xk,(const Char *)&nmim_12,18,
	(const Char *)&sgim_12,47,1,0x8001,0,xt_caseBreakpointStmt_B_OJ2Xk},
	{TMIT_native_code, caseInvokeStmt_I_AvMQe,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,43,1,0x8001,1,xt_caseInvokeStmt_I_AvMQe},
	{TMIT_native_code, caseAssignStmt_A_UC8RU,(const Char *)&nmim_14,14,
	(const Char *)&sgim_14,43,1,0x8001,2,xt_caseAssignStmt_A_UC8RU},
	{TMIT_native_code, caseIdentityStmt_I_e4hif,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,1,0x8001,3,xt_caseIdentityStmt_I_e4hif},
	{TMIT_native_code, caseEnterMonitorStmt_E_CWyO7,(const Char *)&nmim_16,20,
	(const Char *)&sgim_16,49,1,0x8001,4,xt_caseEnterMonitorStmt_E_CWyO7},
	{TMIT_native_code, caseExitMonitorStmt_E_818wS,(const Char *)&nmim_17,19,
	(const Char *)&sgim_17,48,1,0x8001,5,xt_caseExitMonitorStmt_E_818wS},
	{TMIT_native_code, caseGotoStmt_G_smXLY,(const Char *)&nmim_18,12,
	(const Char *)&sgim_18,41,1,0x8001,6,xt_caseGotoStmt_G_smXLY},
	{TMIT_native_code, caseIfStmt_I_OvvaS,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x8001,7,xt_caseIfStmt_I_OvvaS},
	{TMIT_native_code, caseLookupSwitchStmt_L_AJqGz,(const Char *)&nmim_20,20,
	(const Char *)&sgim_20,49,1,0x8001,8,xt_caseLookupSwitchStmt_L_AJqGz},
	{TMIT_native_code, caseNopStmt_N_iRutP,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,1,0x8001,9,xt_caseNopStmt_N_iRutP},
	{TMIT_native_code, caseRetStmt_R_mfhjB,(const Char *)&nmim_22,11,
	(const Char *)&sgim_22,40,1,0x8001,10,xt_caseRetStmt_R_mfhjB},
	{TMIT_native_code, caseReturnStmt_R_MJS9x,(const Char *)&nmim_23,14,
	(const Char *)&sgim_23,43,1,0x8001,11,xt_caseReturnStmt_R_MJS9x},
	{TMIT_native_code, caseReturnVoidStmt_R_orT7v,(const Char *)&nmim_24,18,
	(const Char *)&sgim_24,47,1,0x8001,12,xt_caseReturnVoidStmt_R_orT7v},
	{TMIT_native_code, caseTableSwitchStmt_T_g5lAa,(const Char *)&nmim_25,19,
	(const Char *)&sgim_25,48,1,0x8001,13,xt_caseTableSwitchStmt_T_g5lAa},
	{TMIT_native_code, caseThrowStmt_T_kBmfU,(const Char *)&nmim_26,13,
	(const Char *)&sgim_26,42,1,0x8001,14,xt_caseThrowStmt_T_kBmfU},
	{TMIT_native_code, defaultCase_O_gehkN,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,21,1,0x8001,15,xt_defaultCase_O_gehkN},
	{TMIT_native_code, setResult_O_If72c,(const Char *)&nmim_28,9,
	(const Char *)&sgim_28,21,1,0x1,16,xt_setResult_O_If72c},
	{TMIT_native_code, getResult__IigFK,(const Char *)&nmim_29,9,
	(const Char *)&sgim_29,20,1,0x1,17,xt_getResult__IigFK},
    } /* end of methodsigs */
};


/*M caseBreakpointStmt_B_OJ2Xk: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseBreakpointStmt(Lca/mcgill/sable/soot/jimple/BreakpointStmt;)V */

Class xt_caseBreakpointStmt_B_OJ2Xk[] = { 0 };

Void caseBreakpointStmt_B_OJ2Xk(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInvokeStmt_I_AvMQe: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseInvokeStmt(Lca/mcgill/sable/soot/jimple/InvokeStmt;)V */

Class xt_caseInvokeStmt_I_AvMQe[] = { 0 };

Void caseInvokeStmt_I_AvMQe(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseAssignStmt_A_UC8RU: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseAssignStmt(Lca/mcgill/sable/soot/jimple/AssignStmt;)V */

Class xt_caseAssignStmt_A_UC8RU[] = { 0 };

Void caseAssignStmt_A_UC8RU(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIdentityStmt_I_e4hif: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseIdentityStmt(Lca/mcgill/sable/soot/jimple/IdentityStmt;)V */

Class xt_caseIdentityStmt_I_e4hif[] = { 0 };

Void caseIdentityStmt_I_e4hif(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseEnterMonitorStmt_E_CWyO7: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/EnterMonitorStmt;)V */

Class xt_caseEnterMonitorStmt_E_CWyO7[] = { 0 };

Void caseEnterMonitorStmt_E_CWyO7(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseExitMonitorStmt_E_818wS: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseExitMonitorStmt(Lca/mcgill/sable/soot/jimple/ExitMonitorStmt;)V */

Class xt_caseExitMonitorStmt_E_818wS[] = { 0 };

Void caseExitMonitorStmt_E_818wS(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGotoStmt_G_smXLY: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseGotoStmt(Lca/mcgill/sable/soot/jimple/GotoStmt;)V */

Class xt_caseGotoStmt_G_smXLY[] = { 0 };

Void caseGotoStmt_G_smXLY(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIfStmt_I_OvvaS: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseIfStmt(Lca/mcgill/sable/soot/jimple/IfStmt;)V */

Class xt_caseIfStmt_I_OvvaS[] = { 0 };

Void caseIfStmt_I_OvvaS(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLookupSwitchStmt_L_AJqGz: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/LookupSwitchStmt;)V */

Class xt_caseLookupSwitchStmt_L_AJqGz[] = { 0 };

Void caseLookupSwitchStmt_L_AJqGz(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNopStmt_N_iRutP: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseNopStmt(Lca/mcgill/sable/soot/jimple/NopStmt;)V */

Class xt_caseNopStmt_N_iRutP[] = { 0 };

Void caseNopStmt_N_iRutP(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRetStmt_R_mfhjB: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseRetStmt(Lca/mcgill/sable/soot/jimple/RetStmt;)V */

Class xt_caseRetStmt_R_mfhjB[] = { 0 };

Void caseRetStmt_R_mfhjB(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseReturnStmt_R_MJS9x: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseReturnStmt(Lca/mcgill/sable/soot/jimple/ReturnStmt;)V */

Class xt_caseReturnStmt_R_MJS9x[] = { 0 };

Void caseReturnStmt_R_MJS9x(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseReturnVoidStmt_R_orT7v: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseReturnVoidStmt(Lca/mcgill/sable/soot/jimple/ReturnVoidStmt;)V */

Class xt_caseReturnVoidStmt_R_orT7v[] = { 0 };

Void caseReturnVoidStmt_R_orT7v(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseTableSwitchStmt_T_g5lAa: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseTableSwitchStmt(Lca/mcgill/sable/soot/jimple/TableSwitchStmt;)V */

Class xt_caseTableSwitchStmt_T_g5lAa[] = { 0 };

Void caseTableSwitchStmt_T_g5lAa(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseThrowStmt_T_kBmfU: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.caseThrowStmt(Lca/mcgill/sable/soot/jimple/ThrowStmt;)V */

Class xt_caseThrowStmt_T_kBmfU[] = { 0 };

Void caseThrowStmt_T_kBmfU(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->class->M.
		defaultCase_O_gehkN.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_O_gehkN: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.defaultCase(Ljava/lang/Object;)V */

Class xt_defaultCase_O_gehkN[] = { 0 };

Void defaultCase_O_gehkN(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M setResult_O_If72c: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.setResult(Ljava/lang/Object;)V */

Class xt_setResult_O_If72c[] = { 0 };

Void setResult_O_If72c(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->result = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getResult__IigFK: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.getResult()Ljava/lang/Object; */

Class xt_getResult__IigFK[] = { 0 };

Object getResult__IigFK(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch*)a1)->result;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__xmxzo: ca.mcgill.sable.soot.jimple.AbstractStmtSwitch.<init>()V */

Class xt_init__xmxzo[] = { 0 };

Void init__xmxzo(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','m','t','S','w','i','t','c','h'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch+46,	/* 0. ca.mcgill.sable.soot.jimple.AbstractStmt */
    0};
