/*  ca_mcgill_sable_soot_grimp_GrimpBody$1.c -- from Java class ca.mcgill.sable.soot.grimp.GrimpBody$1  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody$1.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.h"
#include "ca_mcgill_sable_soot_jimple_StmtSwitch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody.h"
#include "ca_mcgill_sable_soot_grimp_GrimpBody$2.h"
#include "ca_mcgill_sable_soot_jimple_StmtBox.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grim_2pbRs.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmtSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C,
    &cl_ca_mcgill_sable_soot_grim_3pbRs.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtBox.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_grim_2pbRs[];
extern const void *st_ca_mcgill_sable_soot_grim_2pbRs[];
extern Class xt_caseAssignStmt_A_idOnz[];
extern Class xt_caseIdentityStmt_I_o1y4S[];
extern Class xt_caseBreakpointStmt_B_iZBch[];
extern Class xt_caseInvokeStmt_I_Y5snT[];
extern Class xt_defaultCase_S_r0gZk[];
extern Class xt_caseEnterMonitorStmt_E_asDMK[];
extern Class xt_caseExitMonitorStmt_E_yI6dX[];
extern Class xt_caseGotoStmt_G_M0Mln[];
extern Class xt_caseIfStmt_I_iXEPN[];
extern Class xt_caseLookupSwitchStmt_L_crKjT[];
extern Class xt_caseNopStmt_N_0InBD[];
extern Class xt_caseRetStmt_R_8ip66[];
extern Class xt_caseReturnStmt_R_akyGb[];
extern Class xt_caseReturnVoidStmt_R_SGsnr[];
extern Class xt_caseTableSwitchStmt_T_GMjhf[];
extern Class xt_caseThrowStmt_T_g9sks[];
extern Class xt_init_SS_rdVYy[];

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
    -1271391136, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseIfStmt_I_iXEPN,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1324428906, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseThrowStmt_T_g9sks,
    0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.toString__4d9OF,
    0, 0, 0, 0,
    1405394034, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseLookupSwitchStmt_L_crKjT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2053191812, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseAssignStmt_A_idOnz,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314358436, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseGotoStmt_G_M0Mln,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -63001900, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseRetStmt_R_8ip66,
    0, 0,
    1703026902, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseReturnStmt_R_akyGb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1159836950, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseIdentityStmt_I_o1y4S,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1877140230, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseTableSwitchStmt_T_GMjhf,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -824925400, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.defaultCase_O_gehkN,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -552973990, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseEnterMonitorStmt_E_asDMK,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0,
    -114068122, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseInvokeStmt_I_Y5snT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    -1358019210, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseReturnVoidStmt_R_SGsnr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    -592235608, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseBreakpointStmt_B_iZBch,
    1062435240, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseNopStmt_N_0InBD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.clone__dslwm, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1234716646, &cl_ca_mcgill_sable_soot_grim_2pbRs.M.caseExitMonitorStmt_E_yI6dX,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','B','o','d','y',
'$','1'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
'v','a','l','$','u','p','d','a','t','e','S','t','m','t','B','o','x'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B','o','x',
';'};
static const Char nmiv_2[] = {
'v','a','l','$','n','e','w','S','t','m','t','B','o','x'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B','o','x',
';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B','o',
'x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','S','t','m','t','B',
'o','x',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grim_2pbRs, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grim_2pbRs, valupdateStmtBox_lLTtz), 0,(const Char *)&nmiv_1,17,(const Char *)&sgiv_1,37,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grim_2pbRs, valnewStmtBox_YlsM9), 0,(const Char *)&nmiv_2,14,(const Char *)&sgiv_2,37,1,0x12,1}, 
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
} inr_ca_mcgill_sable_soot_grim_2pbRs = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grim_2pbRs.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grim_2pbRs cl_ca_mcgill_sable_soot_grim_2pbRs = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grim_2pbRs),
    32,
    0,
    3,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grim_2pbRs,
    st_ca_mcgill_sable_soot_grim_2pbRs,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grim_2pbRs,
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
	{TMIT_native_code, caseBreakpointStmt_B_iZBch,(const Char *)&nmim_12,18,
	(const Char *)&sgim_12,47,1,0x8001,2,xt_caseBreakpointStmt_B_iZBch},
	{TMIT_native_code, caseInvokeStmt_I_Y5snT,(const Char *)&nmim_13,14,
	(const Char *)&sgim_13,43,1,0x8001,3,xt_caseInvokeStmt_I_Y5snT},
	{TMIT_native_code, caseAssignStmt_A_idOnz,(const Char *)&nmim_14,14,
	(const Char *)&sgim_14,43,1,0x8001,0,xt_caseAssignStmt_A_idOnz},
	{TMIT_native_code, caseIdentityStmt_I_o1y4S,(const Char *)&nmim_15,16,
	(const Char *)&sgim_15,45,1,0x8001,1,xt_caseIdentityStmt_I_o1y4S},
	{TMIT_native_code, caseEnterMonitorStmt_E_asDMK,(const Char *)&nmim_16,20,
	(const Char *)&sgim_16,49,1,0x8001,5,xt_caseEnterMonitorStmt_E_asDMK},
	{TMIT_native_code, caseExitMonitorStmt_E_yI6dX,(const Char *)&nmim_17,19,
	(const Char *)&sgim_17,48,1,0x8001,6,xt_caseExitMonitorStmt_E_yI6dX},
	{TMIT_native_code, caseGotoStmt_G_M0Mln,(const Char *)&nmim_18,12,
	(const Char *)&sgim_18,41,1,0x8001,7,xt_caseGotoStmt_G_M0Mln},
	{TMIT_native_code, caseIfStmt_I_iXEPN,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,39,1,0x8001,8,xt_caseIfStmt_I_iXEPN},
	{TMIT_native_code, caseLookupSwitchStmt_L_crKjT,(const Char *)&nmim_20,20,
	(const Char *)&sgim_20,49,1,0x8001,9,xt_caseLookupSwitchStmt_L_crKjT},
	{TMIT_native_code, caseNopStmt_N_0InBD,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,40,1,0x8001,10,xt_caseNopStmt_N_0InBD},
	{TMIT_native_code, caseRetStmt_R_8ip66,(const Char *)&nmim_22,11,
	(const Char *)&sgim_22,40,1,0x8001,11,xt_caseRetStmt_R_8ip66},
	{TMIT_native_code, caseReturnStmt_R_akyGb,(const Char *)&nmim_23,14,
	(const Char *)&sgim_23,43,1,0x8001,12,xt_caseReturnStmt_R_akyGb},
	{TMIT_native_code, caseReturnVoidStmt_R_SGsnr,(const Char *)&nmim_24,18,
	(const Char *)&sgim_24,47,1,0x8001,13,xt_caseReturnVoidStmt_R_SGsnr},
	{TMIT_native_code, caseTableSwitchStmt_T_GMjhf,(const Char *)&nmim_25,19,
	(const Char *)&sgim_25,48,1,0x8001,14,xt_caseTableSwitchStmt_T_GMjhf},
	{TMIT_native_code, caseThrowStmt_T_g9sks,(const Char *)&nmim_26,13,
	(const Char *)&sgim_26,42,1,0x8001,15,xt_caseThrowStmt_T_g9sks},
	{TMIT_native_code, defaultCase_O_gehkN,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,21,0,0x8001,15,0},
	{TMIT_native_code, setResult_O_If72c,(const Char *)&nmim_28,9,
	(const Char *)&sgim_28,21,0,0x1,16,0},
	{TMIT_native_code, getResult__IigFK,(const Char *)&nmim_29,9,
	(const Char *)&sgim_29,20,0,0x1,17,0},
	{TMIT_native_code, defaultCase_S_r0gZk,(const Char *)&nmim_30,11,
	(const Char *)&sgim_30,37,1,0x1,4,xt_defaultCase_S_r0gZk},
	{TMIT_native_code, init_SS_rdVYy,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,77,1,0x0,16,xt_init_SS_rdVYy},
    } /* end of methodsigs */
};


/*M caseAssignStmt_A_idOnz: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseAssignStmt(Lca/mcgill/sable/soot/jimple/AssignStmt;)V */

Class xt_caseAssignStmt_A_idOnz[] = { 0 };

Void caseAssignStmt_A_idOnz(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newAssignStmt_A_p4JOC.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIdentityStmt_I_o1y4S: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseIdentityStmt(Lca/mcgill/sable/soot/jimple/IdentityStmt;)V */

Class xt_caseIdentityStmt_I_o1y4S[] = { 0 };

Void caseIdentityStmt_I_o1y4S(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newIdentityStmt_I_08QnB.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseBreakpointStmt_B_iZBch: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseBreakpointStmt(Lca/mcgill/sable/soot/jimple/BreakpointStmt;)V */

Class xt_caseBreakpointStmt_B_iZBch[] = { 0 };

Void caseBreakpointStmt_B_iZBch(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newBreakpointStmt_B_R9gTQ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseInvokeStmt_I_Y5snT: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseInvokeStmt(Lca/mcgill/sable/soot/jimple/InvokeStmt;)V */

Class xt_caseInvokeStmt_I_Y5snT[] = { 0 };

Void caseInvokeStmt_I_Y5snT(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newInvokeStmt_I_aYjvp.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_S_r0gZk: ca.mcgill.sable.soot.grimp.GrimpBody$1.defaultCase(Lca/mcgill/sable/soot/jimple/Stmt;)V */

Class xt_defaultCase_S_r0gZk[] = { 0 };

Void defaultCase_S_r0gZk(Object p0, Object p1)
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
	a5 = (Object)st_ca_mcgill_sable_soot_grim_2pbRs[1];
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

/*M caseEnterMonitorStmt_E_asDMK: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/EnterMonitorStmt;)V */

Class xt_caseEnterMonitorStmt_E_asDMK[] = { 0 };

Void caseEnterMonitorStmt_E_asDMK(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newEnterMonitorStmt_E_6lwc2.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseExitMonitorStmt_E_yI6dX: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseExitMonitorStmt(Lca/mcgill/sable/soot/jimple/ExitMonitorStmt;)V */

Class xt_caseExitMonitorStmt_E_yI6dX[] = { 0 };

Void caseExitMonitorStmt_E_yI6dX(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExitMonitorStmt_E_0cI0R.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseGotoStmt_G_M0Mln: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseGotoStmt(Lca/mcgill/sable/soot/jimple/GotoStmt;)V */

Class xt_caseGotoStmt_G_M0Mln[] = { 0 };

Void caseGotoStmt_G_M0Mln(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newGotoStmt_G_pSxTw.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valupdateStmtBox_lLTtz;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIfStmt_I_iXEPN: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseIfStmt(Lca/mcgill/sable/soot/jimple/IfStmt;)V */

Class xt_caseIfStmt_I_iXEPN[] = { 0 };

Void caseIfStmt_I_iXEPN(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newIfStmt_I_1xHmT.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valupdateStmtBox_lLTtz;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLookupSwitchStmt_L_crKjT: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/LookupSwitchStmt;)V */

Class xt_caseLookupSwitchStmt_L_crKjT[] = { 0 };

Void caseLookupSwitchStmt_L_crKjT(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newLookupSwitchStmt_L_AXEdZ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valupdateStmtBox_lLTtz;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNopStmt_N_0InBD: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseNopStmt(Lca/mcgill/sable/soot/jimple/NopStmt;)V */

Class xt_caseNopStmt_N_0InBD[] = { 0 };

Void caseNopStmt_N_0InBD(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newNopStmt_N_TtrCt.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRetStmt_R_8ip66: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseRetStmt(Lca/mcgill/sable/soot/jimple/RetStmt;)V */

Class xt_caseRetStmt_R_8ip66[] = { 0 };

Void caseRetStmt_R_8ip66(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newRetStmt_R_LEVEG.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseReturnStmt_R_akyGb: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseReturnStmt(Lca/mcgill/sable/soot/jimple/ReturnStmt;)V */

Class xt_caseReturnStmt_R_akyGb[] = { 0 };

Void caseReturnStmt_R_akyGb(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newReturnStmt_R_qKlYr.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseReturnVoidStmt_R_SGsnr: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseReturnVoidStmt(Lca/mcgill/sable/soot/jimple/ReturnVoidStmt;)V */

Class xt_caseReturnVoidStmt_R_SGsnr[] = { 0 };

Void caseReturnVoidStmt_R_SGsnr(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newReturnVoidStmt_R_6f0ds.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseTableSwitchStmt_T_GMjhf: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseTableSwitchStmt(Lca/mcgill/sable/soot/jimple/TableSwitchStmt;)V */

Class xt_caseTableSwitchStmt_T_GMjhf[] = { 0 };

Void caseTableSwitchStmt_T_GMjhf(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newTableSwitchStmt_T_mjcQq.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valupdateStmtBox_lLTtz;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseThrowStmt_T_g9sks: ca.mcgill.sable.soot.grimp.GrimpBody$1.caseThrowStmt(Lca/mcgill/sable/soot/jimple/ThrowStmt;)V */

Class xt_caseThrowStmt_T_g9sks[] = { 0 };

Void caseThrowStmt_T_g9sks(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9;
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newThrowStmt_T_G2cRj.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StmtBox*)a1)->class->M.
		setUnit_U_NPbFx.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_SS_rdVYy: ca.mcgill.sable.soot.grimp.GrimpBody$1.<init>(Lca/mcgill/sable/soot/jimple/StmtBox;Lca/mcgill/sable/soot/jimple/StmtBox;)V */

Class xt_init_SS_rdVYy[] = { 0 };

Void init_SS_rdVYy(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

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
	((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valnewStmtBox_YlsM9 = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_grim_2pbRs*)a1)->valupdateStmtBox_lLTtz = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grim_2pbRs[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','r','i','m','p','B','o','d','y',
'$','1','i','n','v','a','l','i','d',' ','j','i','m','p','l','e',' ','s',
't','m','t',':',' '};

const void *st_ca_mcgill_sable_soot_grim_2pbRs[] = {
    ch_ca_mcgill_sable_soot_grim_2pbRs+38,	/* 0. ca.mcgill.sable.soot.grimp.GrimpBody$1 */
    ch_ca_mcgill_sable_soot_grim_2pbRs+59,	/* 1. invalid jimple stmt:  */
    0};
