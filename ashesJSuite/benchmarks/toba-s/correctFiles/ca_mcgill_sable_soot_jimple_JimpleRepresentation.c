/*  ca_mcgill_sable_soot_jimple_JimpleRepresentation.c -- from Java class ca.mcgill.sable.soot.jimple.JimpleRepresentation  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JimpleRepresentation.h"
#include "ca_mcgill_sable_soot_BodyRepresentation.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_BodyRepresentation.C,
};

static const Class others[] = {
    0
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JimpleRepresentation[];
extern const void *st_ca_mcgill_sable_soot_jimple_JimpleRepresentation[];
extern Class xt_newBody_S_90CgM[];
extern Class xt_buildBodyOfFrom_SBi_EPwRQ[];
extern Class xt_newArgBox_V_fTq1u[];
extern Class xt_newXorExpr_VV_IG8kt[];
extern Class xt_newUshrExpr_VV_2Kvq6[];
extern Class xt_newSubExpr_VV_wzG2C[];
extern Class xt_newShrExpr_VV_an8NX[];
extern Class xt_newShlExpr_VV_YkHdD[];
extern Class xt_newRemExpr_VV_Souwl[];
extern Class xt_newOrExpr_VV_iVtix[];
extern Class xt_newNeExpr_VV_Gb0GW[];
extern Class xt_newMulExpr_VV_iePHG[];
extern Class xt_newLeExpr_VV_UEoNu[];
extern Class xt_newGeExpr_VV_UDDqG[];
extern Class xt_newEqExpr_VV_2IUy0[];
extern Class xt_newDivExpr_VV_8SaAY[];
extern Class xt_newCmplExpr_VV_IbuLx[];
extern Class xt_newCmpgExpr_VV_A4TbT[];
extern Class xt_newCmpExpr_VV_uwUaM[];
extern Class xt_newGtExpr_VV_AMFra[];
extern Class xt_newLtExpr_VV_ANqOY[];
extern Class xt_newAddExpr_VV_gC4nu[];
extern Class xt_newAndExpr_VV_uL8po[];
extern Class xt_newNegExpr_V_WI79d[];
extern Class xt_newLengthExpr_V_gje2p[];
extern Class xt_newCastExpr_VT_lc5SA[];
extern Class xt_newInstanceOfExpr_VT_bE3dd[];
extern Class xt_newNewArrayExpr_TV_B0hrs[];
extern Class xt_newNewMultiArrayExpr_AL_CyBiN[];
extern Class xt_newStaticInvokeExpr_SL_1NR5d[];
extern Class xt_newSpecialInvokeExpr_LSL_HKbxA[];
extern Class xt_newVirtualInvokeExpr_LSL_rQZvy[];
extern Class xt_newInterfaceInvokeExp_LSL_fcTE4[];
extern Class xt_newThrowStmt_V_2FnHy[];
extern Class xt_newExitMonitorStmt_V_8AUxi[];
extern Class xt_newEnterMonitorStmt_V_SFRFx[];
extern Class xt_newBreakpointStmt__8La3z[];
extern Class xt_newGotoStmt_U_5yias[];
extern Class xt_newNopStmt__OcpVi[];
extern Class xt_newReturnVoidStmt__IW9vU[];
extern Class xt_newReturnStmt_V_uLb5D[];
extern Class xt_newRetStmt_V_8nTgz[];
extern Class xt_newIfStmt_VU_zxsFi[];
extern Class xt_newIdentityStmt_VV_u7Kvb[];
extern Class xt_newAssignStmt_VV_W4VyI[];
extern Class xt_newInvokeStmt_V_cwYP4[];
extern Class xt_newTableSwitchStmt_ViiLU_RmCfF[];
extern Class xt_newLookupSwitchStmt_VLLU_XkMiY[];
extern Class xt_newLocal_ST_NRESy[];
extern Class xt_newTrap_SUUU_1ceDB[];
extern Class xt_newStaticFieldRef_S_e6ilk[];
extern Class xt_newThisRef_S_AQ5PA[];
extern Class xt_newParameterRef_Si_otDCP[];
extern Class xt_newInstanceFieldRef_VS_Ee026[];
extern Class xt_newCaughtExceptionRef_J_KUvpV[];
extern Class xt_newArrayRef_VV_a7HEV[];
extern Class xt_newVariableBox_V_ZyVPg[];
extern Class xt_newLocalBox_V_Oamq8[];
extern Class xt_newRValueBox_V_c3JAR[];
extern Class xt_newImmediateBox_V_ioI4i[];
extern Class xt_newIdentityRefBox_V_qGz1n[];
extern Class xt_newConditionExprBox_V_DbJC5[];
extern Class xt_newInvokeExprBox_V_6cuH3[];
extern Class xt_newStmtBox_U_DLzYV[];

#define HASHMASK 0x3
/*  0.  5b287c48  (0)  buildBodyOfFrom  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  c2aafd4e  (2)  equals  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    1529379912, &cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation.M.buildBodyOfFrom_SBi_EPwRQ,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation.M.hashCode__8wJNW,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(48) nmchars = {&acl_char, 0, 48, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','i','m','p','l','e','R','e',
'p','r','e','s','e','n','t','a','t','i','o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 48 };
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
'n','e','w','B','o','d','y'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','B','o','d','y',';'};
static const Char nmim_13[] = {
'b','u','i','l','d','B','o','d','y','O','f','F','r','o','m'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','B','o','d','y',';','I',')','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','B','o','d','y',';'};
static const Char nmim_14[] = {
'n','e','w','A','r','g','B','o','x'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_15[] = {
'n','e','w','X','o','r','E','x','p','r'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','X','o','r','E','x','p','r',
';'};
static const Char nmim_16[] = {
'n','e','w','U','s','h','r','E','x','p','r'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','s','h','r','E','x','p',
'r',';'};
static const Char nmim_17[] = {
'n','e','w','S','u','b','E','x','p','r'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','u','b','E','x','p','r',
';'};
static const Char nmim_18[] = {
'n','e','w','S','h','r','E','x','p','r'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','h','r','E','x','p','r',
';'};
static const Char nmim_19[] = {
'n','e','w','S','h','l','E','x','p','r'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','S','h','l','E','x','p','r',
';'};
static const Char nmim_20[] = {
'n','e','w','R','e','m','E','x','p','r'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','R','e','m','E','x','p','r',
';'};
static const Char nmim_21[] = {
'n','e','w','O','r','E','x','p','r'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','O','r','E','x','p','r',';'};
static const Char nmim_22[] = {
'n','e','w','N','e','E','x','p','r'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','N','e','E','x','p','r',';'};
static const Char nmim_23[] = {
'n','e','w','M','u','l','E','x','p','r'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','M','u','l','E','x','p','r',
';'};
static const Char nmim_24[] = {
'n','e','w','L','e','E','x','p','r'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','e','E','x','p','r',';'};
static const Char nmim_25[] = {
'n','e','w','G','e','E','x','p','r'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','G','e','E','x','p','r',';'};
static const Char nmim_26[] = {
'n','e','w','E','q','E','x','p','r'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','E','q','E','x','p','r',';'};
static const Char nmim_27[] = {
'n','e','w','D','i','v','E','x','p','r'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','D','i','v','E','x','p','r',
';'};
static const Char nmim_28[] = {
'n','e','w','C','m','p','l','E','x','p','r'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','m','p','l','E','x','p',
'r',';'};
static const Char nmim_29[] = {
'n','e','w','C','m','p','g','E','x','p','r'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','m','p','g','E','x','p',
'r',';'};
static const Char nmim_30[] = {
'n','e','w','C','m','p','E','x','p','r'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','m','p','E','x','p','r',
';'};
static const Char nmim_31[] = {
'n','e','w','G','t','E','x','p','r'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','G','t','E','x','p','r',';'};
static const Char nmim_32[] = {
'n','e','w','L','t','E','x','p','r'};
static const Char sgim_32[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','t','E','x','p','r',';'};
static const Char nmim_33[] = {
'n','e','w','A','d','d','E','x','p','r'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','d','d','E','x','p','r',
';'};
static const Char nmim_34[] = {
'n','e','w','A','n','d','E','x','p','r'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','n','d','E','x','p','r',
';'};
static const Char nmim_35[] = {
'n','e','w','N','e','g','E','x','p','r'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','N','e','g','E','x','p',
'r',';'};
static const Char nmim_36[] = {
'n','e','w','L','e','n','g','t','h','E','x','p','r'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','e','n','g','t','h',
'E','x','p','r',';'};
static const Char nmim_37[] = {
'n','e','w','C','a','s','t','E','x','p','r'};
static const Char sgim_37[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','C','a','s','t','E','x','p','r',';'};
static const Char nmim_38[] = {
'n','e','w','I','n','s','t','a','n','c','e','O','f','E','x','p','r'};
static const Char sgim_38[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','I','n','s','t','a','n','c','e','O','f','E','x','p','r',';'};
static const Char nmim_39[] = {
'n','e','w','N','e','w','A','r','r','a','y','E','x','p','r'};
static const Char sgim_39[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','V','a','l','u','e',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','N','e','w','A','r','r','a','y','E','x','p','r',';'};
static const Char nmim_40[] = {
'n','e','w','N','e','w','M','u','l','t','i','A','r','r','a','y','E','x',
'p','r'};
static const Char sgim_40[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'N','e','w','M','u','l','t','i','A','r','r','a','y','E','x','p','r',';'};
static const Char nmim_41[] = {
'n','e','w','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p',
'r'};
static const Char sgim_41[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i',
'l','/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l',
'/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e',
'/','S','t','a','t','i','c','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_42[] = {
'n','e','w','S','p','e','c','i','a','l','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_42[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'S','p','e','c','i','a','l','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_43[] = {
'n','e','w','V','i','r','t','u','a','l','I','n','v','o','k','e','E','x',
'p','r'};
static const Char sgim_43[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'V','i','r','t','u','a','l','I','n','v','o','k','e','E','x','p','r',';'};
static const Char nmim_44[] = {
'n','e','w','I','n','t','e','r','f','a','c','e','I','n','v','o','k','e',
'E','x','p','r'};
static const Char sgim_44[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','u','t','i','l',
'/','L','i','s','t',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'I','n','t','e','r','f','a','c','e','I','n','v','o','k','e','E','x','p',
'r',';'};
static const Char nmim_45[] = {
'n','e','w','T','h','r','o','w','S','t','m','t'};
static const Char sgim_45[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','h','r','o','w','S',
't','m','t',';'};
static const Char nmim_46[] = {
'n','e','w','E','x','i','t','M','o','n','i','t','o','r','S','t','m','t'};
static const Char sgim_46[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','x','i','t','M','o',
'n','i','t','o','r','S','t','m','t',';'};
static const Char nmim_47[] = {
'n','e','w','E','n','t','e','r','M','o','n','i','t','o','r','S','t','m',
't'};
static const Char sgim_47[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','E','n','t','e','r','M',
'o','n','i','t','o','r','S','t','m','t',';'};
static const Char nmim_48[] = {
'n','e','w','B','r','e','a','k','p','o','i','n','t','S','t','m','t'};
static const Char sgim_48[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','B','r','e','a','k',
'p','o','i','n','t','S','t','m','t',';'};
static const Char nmim_49[] = {
'n','e','w','G','o','t','o','S','t','m','t'};
static const Char sgim_49[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','G','o','t','o','S','t','m',
't',';'};
static const Char nmim_50[] = {
'n','e','w','N','o','p','S','t','m','t'};
static const Char sgim_50[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','N','o','p','S','t',
'm','t',';'};
static const Char nmim_51[] = {
'n','e','w','R','e','t','u','r','n','V','o','i','d','S','t','m','t'};
static const Char sgim_51[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r',
'n','V','o','i','d','S','t','m','t',';'};
static const Char nmim_52[] = {
'n','e','w','R','e','t','u','r','n','S','t','m','t'};
static const Char sgim_52[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','u','r','n',
'S','t','m','t',';'};
static const Char nmim_53[] = {
'n','e','w','R','e','t','S','t','m','t'};
static const Char sgim_53[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','R','e','t','S','t','m',
't',';'};
static const Char nmim_54[] = {
'n','e','w','I','f','S','t','m','t'};
static const Char sgim_54[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','I','f','S','t','m','t',';'};
static const Char nmim_55[] = {
'n','e','w','I','d','e','n','t','i','t','y','S','t','m','t'};
static const Char sgim_55[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','I','d','e','n','t','i','t',
'y','S','t','m','t',';'};
static const Char nmim_56[] = {
'n','e','w','A','s','s','i','g','n','S','t','m','t'};
static const Char sgim_56[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','s','s','i','g','n','S',
't','m','t',';'};
static const Char nmim_57[] = {
'n','e','w','I','n','v','o','k','e','S','t','m','t'};
static const Char sgim_57[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','I','n','v','o','k','e',
'S','t','m','t',';'};
static const Char nmim_58[] = {
'n','e','w','T','a','b','l','e','S','w','i','t','c','h','S','t','m','t'};
static const Char sgim_58[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'I','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','U','n','i','t',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','T','a','b','l','e','S','w','i','t','c','h','S','t','m','t',
';'};
static const Char nmim_59[] = {
'n','e','w','L','o','o','k','u','p','S','w','i','t','c','h','S','t','m',
't'};
static const Char sgim_59[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','u','t','i','l','/','L','i','s','t',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')','L',
'c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o',
'o','t','/','j','i','m','p','l','e','/','L','o','o','k','u','p','S','w',
'i','t','c','h','S','t','m','t',';'};
static const Char nmim_60[] = {
'n','e','w','L','o','c','a','l'};
static const Char sgim_60[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','L','o','c','a','l',';'};
static const Char nmim_61[] = {
'n','e','w','T','r','a','p'};
static const Char sgim_61[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','U','n','i','t',';','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j',
'i','m','p','l','e','/','U','n','i','t',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','U','n','i','t',';',')','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p',
'l','e','/','T','r','a','p',';'};
static const Char nmim_62[] = {
'n','e','w','S','t','a','t','i','c','F','i','e','l','d','R','e','f'};
static const Char sgim_62[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','S','t','a','t','i','c','F','i','e',
'l','d','R','e','f',';'};
static const Char nmim_63[] = {
'n','e','w','T','h','i','s','R','e','f'};
static const Char sgim_63[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','T','h','i','s','R','e','f',';'};
static const Char nmim_64[] = {
'n','e','w','P','a','r','a','m','e','t','e','r','R','e','f'};
static const Char sgim_64[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';','I',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','P','a','r','a','m','e','t',
'e','r','R','e','f',';'};
static const Char nmim_65[] = {
'n','e','w','I','n','s','t','a','n','c','e','F','i','e','l','d','R','e',
'f'};
static const Char sgim_65[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','I','n','s','t','a','n','c','e','F','i',
'e','l','d','R','e','f',';'};
static const Char nmim_66[] = {
'n','e','w','C','a','u','g','h','t','E','x','c','e','p','t','i','o','n',
'R','e','f'};
static const Char sgim_66[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','C',
'a','u','g','h','t','E','x','c','e','p','t','i','o','n','R','e','f',';'};
static const Char nmim_67[] = {
'n','e','w','A','r','r','a','y','R','e','f'};
static const Char sgim_67[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','A','r','r','a','y','R','e',
'f',';'};
static const Char nmim_68[] = {
'n','e','w','V','a','r','i','a','b','l','e','B','o','x'};
static const Char sgim_68[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_69[] = {
'n','e','w','L','o','c','a','l','B','o','x'};
static const Char sgim_69[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_70[] = {
'n','e','w','R','V','a','l','u','e','B','o','x'};
static const Char sgim_70[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_71[] = {
'n','e','w','I','m','m','e','d','i','a','t','e','B','o','x'};
static const Char sgim_71[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_72[] = {
'n','e','w','I','d','e','n','t','i','t','y','R','e','f','B','o','x'};
static const Char sgim_72[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_73[] = {
'n','e','w','C','o','n','d','i','t','i','o','n','E','x','p','r','B','o',
'x'};
static const Char sgim_73[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_74[] = {
'n','e','w','I','n','v','o','k','e','E','x','p','r','B','o','x'};
static const Char sgim_74[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';'};
static const Char nmim_75[] = {
'n','e','w','S','t','m','t','B','o','x'};
static const Char sgim_75[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',
';'};

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
} inr_ca_mcgill_sable_soot_jimple_JimpleRepresentation = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation cl_ca_mcgill_sable_soot_jimple_JimpleRepresentation = { {
    1, 1,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JimpleRepresentation),
    76,
    0,
    0,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    0, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JimpleRepresentation,
    st_ca_mcgill_sable_soot_jimple_JimpleRepresentation,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x201,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JimpleRepresentation,
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,7,
	(const Char *)&sgim_12,62,1,0x401,0,xt_newBody_S_90CgM},
	{TMIT_abstract, 0,(const Char *)&nmim_13,15,
	(const Char *)&sgim_13,90,1,0x8401,1,xt_buildBodyOfFrom_SBi_EPwRQ},
	{TMIT_abstract, 0,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,75,1,0x401,2,xt_newArgBox_V_fTq1u},
	{TMIT_abstract, 0,(const Char *)&nmim_15,10,
	(const Char *)&sgim_15,109,1,0x401,3,xt_newXorExpr_VV_IG8kt},
	{TMIT_abstract, 0,(const Char *)&nmim_16,11,
	(const Char *)&sgim_16,110,1,0x401,4,xt_newUshrExpr_VV_2Kvq6},
	{TMIT_abstract, 0,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,109,1,0x401,5,xt_newSubExpr_VV_wzG2C},
	{TMIT_abstract, 0,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,109,1,0x401,6,xt_newShrExpr_VV_an8NX},
	{TMIT_abstract, 0,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,109,1,0x401,7,xt_newShlExpr_VV_YkHdD},
	{TMIT_abstract, 0,(const Char *)&nmim_20,10,
	(const Char *)&sgim_20,109,1,0x401,8,xt_newRemExpr_VV_Souwl},
	{TMIT_abstract, 0,(const Char *)&nmim_21,9,
	(const Char *)&sgim_21,108,1,0x401,9,xt_newOrExpr_VV_iVtix},
	{TMIT_abstract, 0,(const Char *)&nmim_22,9,
	(const Char *)&sgim_22,108,1,0x401,10,xt_newNeExpr_VV_Gb0GW},
	{TMIT_abstract, 0,(const Char *)&nmim_23,10,
	(const Char *)&sgim_23,109,1,0x401,11,xt_newMulExpr_VV_iePHG},
	{TMIT_abstract, 0,(const Char *)&nmim_24,9,
	(const Char *)&sgim_24,108,1,0x401,12,xt_newLeExpr_VV_UEoNu},
	{TMIT_abstract, 0,(const Char *)&nmim_25,9,
	(const Char *)&sgim_25,108,1,0x401,13,xt_newGeExpr_VV_UDDqG},
	{TMIT_abstract, 0,(const Char *)&nmim_26,9,
	(const Char *)&sgim_26,108,1,0x401,14,xt_newEqExpr_VV_2IUy0},
	{TMIT_abstract, 0,(const Char *)&nmim_27,10,
	(const Char *)&sgim_27,109,1,0x401,15,xt_newDivExpr_VV_8SaAY},
	{TMIT_abstract, 0,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,110,1,0x401,16,xt_newCmplExpr_VV_IbuLx},
	{TMIT_abstract, 0,(const Char *)&nmim_29,11,
	(const Char *)&sgim_29,110,1,0x401,17,xt_newCmpgExpr_VV_A4TbT},
	{TMIT_abstract, 0,(const Char *)&nmim_30,10,
	(const Char *)&sgim_30,109,1,0x401,18,xt_newCmpExpr_VV_uwUaM},
	{TMIT_abstract, 0,(const Char *)&nmim_31,9,
	(const Char *)&sgim_31,108,1,0x401,19,xt_newGtExpr_VV_AMFra},
	{TMIT_abstract, 0,(const Char *)&nmim_32,9,
	(const Char *)&sgim_32,108,1,0x401,20,xt_newLtExpr_VV_ANqOY},
	{TMIT_abstract, 0,(const Char *)&nmim_33,10,
	(const Char *)&sgim_33,109,1,0x401,21,xt_newAddExpr_VV_gC4nu},
	{TMIT_abstract, 0,(const Char *)&nmim_34,10,
	(const Char *)&sgim_34,109,1,0x401,22,xt_newAndExpr_VV_uL8po},
	{TMIT_abstract, 0,(const Char *)&nmim_35,10,
	(const Char *)&sgim_35,74,1,0x401,23,xt_newNegExpr_V_WI79d},
	{TMIT_abstract, 0,(const Char *)&nmim_36,13,
	(const Char *)&sgim_36,77,1,0x401,24,xt_newLengthExpr_V_gje2p},
	{TMIT_abstract, 0,(const Char *)&nmim_37,11,
	(const Char *)&sgim_37,102,1,0x401,25,xt_newCastExpr_VT_lc5SA},
	{TMIT_abstract, 0,(const Char *)&nmim_38,17,
	(const Char *)&sgim_38,108,1,0x401,26,xt_newInstanceOfExpr_VT_bE3dd},
	{TMIT_abstract, 0,(const Char *)&nmim_39,15,
	(const Char *)&sgim_39,106,1,0x401,27,xt_newNewArrayExpr_TV_B0hrs},
	{TMIT_abstract, 0,(const Char *)&nmim_40,20,
	(const Char *)&sgim_40,108,1,0x401,28,xt_newNewMultiArrayExpr_AL_CyBiN},
	{TMIT_abstract, 0,(const Char *)&nmim_41,19,
	(const Char *)&sgim_41,108,1,0x401,29,xt_newStaticInvokeExpr_SL_1NR5d},
	{TMIT_abstract, 0,(const Char *)&nmim_42,20,
	(const Char *)&sgim_42,144,1,0x401,30,xt_newSpecialInvokeExpr_LSL_HKbxA},
	{TMIT_abstract, 0,(const Char *)&nmim_43,20,
	(const Char *)&sgim_43,144,1,0x401,31,xt_newVirtualInvokeExpr_LSL_rQZvy},
	{TMIT_abstract, 0,(const Char *)&nmim_44,22,
	(const Char *)&sgim_44,146,1,0x401,32,xt_newInterfaceInvokeExp_LSL_fcTE4},
	{TMIT_abstract, 0,(const Char *)&nmim_45,12,
	(const Char *)&sgim_45,76,1,0x401,33,xt_newThrowStmt_V_2FnHy},
	{TMIT_abstract, 0,(const Char *)&nmim_46,18,
	(const Char *)&sgim_46,82,1,0x401,34,xt_newExitMonitorStmt_V_8AUxi},
	{TMIT_abstract, 0,(const Char *)&nmim_47,19,
	(const Char *)&sgim_47,83,1,0x401,35,xt_newEnterMonitorStmt_V_SFRFx},
	{TMIT_abstract, 0,(const Char *)&nmim_48,17,
	(const Char *)&sgim_48,46,1,0x401,36,xt_newBreakpointStmt__8La3z},
	{TMIT_abstract, 0,(const Char *)&nmim_49,11,
	(const Char *)&sgim_49,74,1,0x401,37,xt_newGotoStmt_U_5yias},
	{TMIT_abstract, 0,(const Char *)&nmim_50,10,
	(const Char *)&sgim_50,39,1,0x401,38,xt_newNopStmt__OcpVi},
	{TMIT_abstract, 0,(const Char *)&nmim_51,17,
	(const Char *)&sgim_51,46,1,0x401,39,xt_newReturnVoidStmt__IW9vU},
	{TMIT_abstract, 0,(const Char *)&nmim_52,13,
	(const Char *)&sgim_52,77,1,0x401,40,xt_newReturnStmt_V_uLb5D},
	{TMIT_abstract, 0,(const Char *)&nmim_53,10,
	(const Char *)&sgim_53,74,1,0x401,41,xt_newRetStmt_V_8nTgz},
	{TMIT_abstract, 0,(const Char *)&nmim_54,9,
	(const Char *)&sgim_54,107,1,0x401,42,xt_newIfStmt_VU_zxsFi},
	{TMIT_abstract, 0,(const Char *)&nmim_55,15,
	(const Char *)&sgim_55,114,1,0x401,43,xt_newIdentityStmt_VV_u7Kvb},
	{TMIT_abstract, 0,(const Char *)&nmim_56,13,
	(const Char *)&sgim_56,112,1,0x401,44,xt_newAssignStmt_VV_W4VyI},
	{TMIT_abstract, 0,(const Char *)&nmim_57,13,
	(const Char *)&sgim_57,77,1,0x401,45,xt_newInvokeStmt_V_cwYP4},
	{TMIT_abstract, 0,(const Char *)&nmim_58,18,
	(const Char *)&sgim_58,145,1,0x401,46,xt_newTableSwitchStmt_ViiLU_RmCfF},
	{TMIT_abstract, 0,(const Char *)&nmim_59,19,
	(const Char *)&sgim_59,171,1,0x401,47,xt_newLookupSwitchStmt_VLLU_XkMiY},
	{TMIT_abstract, 0,(const Char *)&nmim_60,8,
	(const Char *)&sgim_60,82,1,0x401,48,xt_newLocal_ST_NRESy},
	{TMIT_abstract, 0,(const Char *)&nmim_61,7,
	(const Char *)&sgim_61,170,1,0x401,49,xt_newTrap_SUUU_1ceDB},
	{TMIT_abstract, 0,(const Char *)&nmim_62,17,
	(const Char *)&sgim_62,78,1,0x401,50,xt_newStaticFieldRef_S_e6ilk},
	{TMIT_abstract, 0,(const Char *)&nmim_63,10,
	(const Char *)&sgim_63,71,1,0x401,51,xt_newThisRef_S_AQ5PA},
	{TMIT_abstract, 0,(const Char *)&nmim_64,15,
	(const Char *)&sgim_64,78,1,0x401,52,xt_newParameterRef_Si_otDCP},
	{TMIT_abstract, 0,(const Char *)&nmim_65,19,
	(const Char *)&sgim_65,115,1,0x401,53,xt_newInstanceFieldRef_VS_Ee026},
	{TMIT_abstract, 0,(const Char *)&nmim_66,21,
	(const Char *)&sgim_66,90,1,0x401,54,xt_newCaughtExceptionRef_J_KUvpV},
	{TMIT_abstract, 0,(const Char *)&nmim_67,11,
	(const Char *)&sgim_67,110,1,0x401,55,xt_newArrayRef_VV_a7HEV},
	{TMIT_abstract, 0,(const Char *)&nmim_68,14,
	(const Char *)&sgim_68,75,1,0x401,56,xt_newVariableBox_V_ZyVPg},
	{TMIT_abstract, 0,(const Char *)&nmim_69,11,
	(const Char *)&sgim_69,75,1,0x401,57,xt_newLocalBox_V_Oamq8},
	{TMIT_abstract, 0,(const Char *)&nmim_70,12,
	(const Char *)&sgim_70,75,1,0x401,58,xt_newRValueBox_V_c3JAR},
	{TMIT_abstract, 0,(const Char *)&nmim_71,15,
	(const Char *)&sgim_71,75,1,0x401,59,xt_newImmediateBox_V_ioI4i},
	{TMIT_abstract, 0,(const Char *)&nmim_72,17,
	(const Char *)&sgim_72,75,1,0x401,60,xt_newIdentityRefBox_V_qGz1n},
	{TMIT_abstract, 0,(const Char *)&nmim_73,19,
	(const Char *)&sgim_73,75,1,0x401,61,xt_newConditionExprBox_V_DbJC5},
	{TMIT_abstract, 0,(const Char *)&nmim_74,16,
	(const Char *)&sgim_74,75,1,0x401,62,xt_newInvokeExprBox_V_6cuH3},
	{TMIT_abstract, 0,(const Char *)&nmim_75,10,
	(const Char *)&sgim_75,73,1,0x401,63,xt_newStmtBox_U_DLzYV},
    } /* end of methodsigs */
};


/*M newBody_S_90CgM: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newBody(Lca/mcgill/sable/soot/SootMethod;)Lca/mcgill/sable/soot/Body; */

Class xt_newBody_S_90CgM[] = { 0 };

/*M buildBodyOfFrom_SBi_EPwRQ: ca.mcgill.sable.soot.jimple.JimpleRepresentation.buildBodyOfFrom(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/soot/Body;I)Lca/mcgill/sable/soot/Body; */

Class xt_buildBodyOfFrom_SBi_EPwRQ[] = { 0 };

/*M newArgBox_V_fTq1u: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newArgBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newArgBox_V_fTq1u[] = { 0 };

/*M newXorExpr_VV_IG8kt: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newXorExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/XorExpr; */

Class xt_newXorExpr_VV_IG8kt[] = { 0 };

/*M newUshrExpr_VV_2Kvq6: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newUshrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/UshrExpr; */

Class xt_newUshrExpr_VV_2Kvq6[] = { 0 };

/*M newSubExpr_VV_wzG2C: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newSubExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/SubExpr; */

Class xt_newSubExpr_VV_wzG2C[] = { 0 };

/*M newShrExpr_VV_an8NX: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newShrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ShrExpr; */

Class xt_newShrExpr_VV_an8NX[] = { 0 };

/*M newShlExpr_VV_YkHdD: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newShlExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ShlExpr; */

Class xt_newShlExpr_VV_YkHdD[] = { 0 };

/*M newRemExpr_VV_Souwl: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newRemExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/RemExpr; */

Class xt_newRemExpr_VV_Souwl[] = { 0 };

/*M newOrExpr_VV_iVtix: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newOrExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/OrExpr; */

Class xt_newOrExpr_VV_iVtix[] = { 0 };

/*M newNeExpr_VV_Gb0GW: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newNeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NeExpr; */

Class xt_newNeExpr_VV_Gb0GW[] = { 0 };

/*M newMulExpr_VV_iePHG: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newMulExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/MulExpr; */

Class xt_newMulExpr_VV_iePHG[] = { 0 };

/*M newLeExpr_VV_UEoNu: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newLeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LeExpr; */

Class xt_newLeExpr_VV_UEoNu[] = { 0 };

/*M newGeExpr_VV_UDDqG: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newGeExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/GeExpr; */

Class xt_newGeExpr_VV_UDDqG[] = { 0 };

/*M newEqExpr_VV_2IUy0: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newEqExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/EqExpr; */

Class xt_newEqExpr_VV_2IUy0[] = { 0 };

/*M newDivExpr_VV_8SaAY: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newDivExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/DivExpr; */

Class xt_newDivExpr_VV_8SaAY[] = { 0 };

/*M newCmplExpr_VV_IbuLx: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newCmplExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmplExpr; */

Class xt_newCmplExpr_VV_IbuLx[] = { 0 };

/*M newCmpgExpr_VV_A4TbT: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newCmpgExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmpgExpr; */

Class xt_newCmpgExpr_VV_A4TbT[] = { 0 };

/*M newCmpExpr_VV_uwUaM: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newCmpExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/CmpExpr; */

Class xt_newCmpExpr_VV_uwUaM[] = { 0 };

/*M newGtExpr_VV_AMFra: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newGtExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/GtExpr; */

Class xt_newGtExpr_VV_AMFra[] = { 0 };

/*M newLtExpr_VV_ANqOY: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newLtExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LtExpr; */

Class xt_newLtExpr_VV_ANqOY[] = { 0 };

/*M newAddExpr_VV_gC4nu: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newAddExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AddExpr; */

Class xt_newAddExpr_VV_gC4nu[] = { 0 };

/*M newAndExpr_VV_uL8po: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newAndExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AndExpr; */

Class xt_newAndExpr_VV_uL8po[] = { 0 };

/*M newNegExpr_V_WI79d: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newNegExpr(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NegExpr; */

Class xt_newNegExpr_V_WI79d[] = { 0 };

/*M newLengthExpr_V_gje2p: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newLengthExpr(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/LengthExpr; */

Class xt_newLengthExpr_V_gje2p[] = { 0 };

/*M newCastExpr_VT_lc5SA: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newCastExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/CastExpr; */

Class xt_newCastExpr_VT_lc5SA[] = { 0 };

/*M newInstanceOfExpr_VT_bE3dd: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newInstanceOfExpr(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/InstanceOfExpr; */

Class xt_newInstanceOfExpr_VT_bE3dd[] = { 0 };

/*M newNewArrayExpr_TV_B0hrs: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newNewArrayExpr(Lca/mcgill/sable/soot/Type;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/NewArrayExpr; */

Class xt_newNewArrayExpr_TV_B0hrs[] = { 0 };

/*M newNewMultiArrayExpr_AL_CyBiN: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newNewMultiArrayExpr(Lca/mcgill/sable/soot/ArrayType;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/NewMultiArrayExpr; */

Class xt_newNewMultiArrayExpr_AL_CyBiN[] = { 0 };

/*M newStaticInvokeExpr_SL_1NR5d: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newStaticInvokeExpr(Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/StaticInvokeExpr; */

Class xt_newStaticInvokeExpr_SL_1NR5d[] = { 0 };

/*M newSpecialInvokeExpr_LSL_HKbxA: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newSpecialInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/SpecialInvokeExpr; */

Class xt_newSpecialInvokeExpr_LSL_HKbxA[] = { 0 };

/*M newVirtualInvokeExpr_LSL_rQZvy: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newVirtualInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/VirtualInvokeExpr; */

Class xt_newVirtualInvokeExpr_LSL_rQZvy[] = { 0 };

/*M newInterfaceInvokeExp_LSL_fcTE4: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newInterfaceInvokeExpr(Lca/mcgill/sable/soot/jimple/Local;Lca/mcgill/sable/soot/SootMethod;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/jimple/InterfaceInvokeExpr; */

Class xt_newInterfaceInvokeExp_LSL_fcTE4[] = { 0 };

/*M newThrowStmt_V_2FnHy: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newThrowStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ThrowStmt; */

Class xt_newThrowStmt_V_2FnHy[] = { 0 };

/*M newExitMonitorStmt_V_8AUxi: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newExitMonitorStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ExitMonitorStmt; */

Class xt_newExitMonitorStmt_V_8AUxi[] = { 0 };

/*M newEnterMonitorStmt_V_SFRFx: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newEnterMonitorStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/EnterMonitorStmt; */

Class xt_newEnterMonitorStmt_V_SFRFx[] = { 0 };

/*M newBreakpointStmt__8La3z: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newBreakpointStmt()Lca/mcgill/sable/soot/jimple/BreakpointStmt; */

Class xt_newBreakpointStmt__8La3z[] = { 0 };

/*M newGotoStmt_U_5yias: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newGotoStmt(Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/GotoStmt; */

Class xt_newGotoStmt_U_5yias[] = { 0 };

/*M newNopStmt__OcpVi: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newNopStmt()Lca/mcgill/sable/soot/jimple/NopStmt; */

Class xt_newNopStmt__OcpVi[] = { 0 };

/*M newReturnVoidStmt__IW9vU: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newReturnVoidStmt()Lca/mcgill/sable/soot/jimple/ReturnVoidStmt; */

Class xt_newReturnVoidStmt__IW9vU[] = { 0 };

/*M newReturnStmt_V_uLb5D: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newReturnStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ReturnStmt; */

Class xt_newReturnStmt_V_uLb5D[] = { 0 };

/*M newRetStmt_V_8nTgz: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newRetStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/RetStmt; */

Class xt_newRetStmt_V_8nTgz[] = { 0 };

/*M newIfStmt_VU_zxsFi: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newIfStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/IfStmt; */

Class xt_newIfStmt_VU_zxsFi[] = { 0 };

/*M newIdentityStmt_VV_u7Kvb: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newIdentityStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/IdentityStmt; */

Class xt_newIdentityStmt_VV_u7Kvb[] = { 0 };

/*M newAssignStmt_VV_W4VyI: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newAssignStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/AssignStmt; */

Class xt_newAssignStmt_VV_W4VyI[] = { 0 };

/*M newInvokeStmt_V_cwYP4: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newInvokeStmt(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/InvokeStmt; */

Class xt_newInvokeStmt_V_cwYP4[] = { 0 };

/*M newTableSwitchStmt_ViiLU_RmCfF: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newTableSwitchStmt(Lca/mcgill/sable/soot/jimple/Value;IILca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/TableSwitchStmt; */

Class xt_newTableSwitchStmt_ViiLU_RmCfF[] = { 0 };

/*M newLookupSwitchStmt_VLLU_XkMiY: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newLookupSwitchStmt(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/util/List;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/LookupSwitchStmt; */

Class xt_newLookupSwitchStmt_VLLU_XkMiY[] = { 0 };

/*M newLocal_ST_NRESy: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newLocal(Ljava/lang/String;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_newLocal_ST_NRESy[] = { 0 };

/*M newTrap_SUUU_1ceDB: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newTrap(Lca/mcgill/sable/soot/SootClass;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/Trap; */

Class xt_newTrap_SUUU_1ceDB[] = { 0 };

/*M newStaticFieldRef_S_e6ilk: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newStaticFieldRef(Lca/mcgill/sable/soot/SootField;)Lca/mcgill/sable/soot/jimple/StaticFieldRef; */

Class xt_newStaticFieldRef_S_e6ilk[] = { 0 };

/*M newThisRef_S_AQ5PA: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newThisRef(Lca/mcgill/sable/soot/SootClass;)Lca/mcgill/sable/soot/jimple/ThisRef; */

Class xt_newThisRef_S_AQ5PA[] = { 0 };

/*M newParameterRef_Si_otDCP: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newParameterRef(Lca/mcgill/sable/soot/SootMethod;I)Lca/mcgill/sable/soot/jimple/ParameterRef; */

Class xt_newParameterRef_Si_otDCP[] = { 0 };

/*M newInstanceFieldRef_VS_Ee026: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newInstanceFieldRef(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/SootField;)Lca/mcgill/sable/soot/jimple/InstanceFieldRef; */

Class xt_newInstanceFieldRef_VS_Ee026[] = { 0 };

/*M newCaughtExceptionRef_J_KUvpV: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newCaughtExceptionRef(Lca/mcgill/sable/soot/jimple/JimpleBody;)Lca/mcgill/sable/soot/jimple/CaughtExceptionRef; */

Class xt_newCaughtExceptionRef_J_KUvpV[] = { 0 };

/*M newArrayRef_VV_a7HEV: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newArrayRef(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ArrayRef; */

Class xt_newArrayRef_VV_a7HEV[] = { 0 };

/*M newVariableBox_V_ZyVPg: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newVariableBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newVariableBox_V_ZyVPg[] = { 0 };

/*M newLocalBox_V_Oamq8: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newLocalBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newLocalBox_V_Oamq8[] = { 0 };

/*M newRValueBox_V_c3JAR: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newRValueBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newRValueBox_V_c3JAR[] = { 0 };

/*M newImmediateBox_V_ioI4i: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newImmediateBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newImmediateBox_V_ioI4i[] = { 0 };

/*M newIdentityRefBox_V_qGz1n: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newIdentityRefBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newIdentityRefBox_V_qGz1n[] = { 0 };

/*M newConditionExprBox_V_DbJC5: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newConditionExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newConditionExprBox_V_DbJC5[] = { 0 };

/*M newInvokeExprBox_V_6cuH3: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newInvokeExprBox(Lca/mcgill/sable/soot/jimple/Value;)Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_newInvokeExprBox_V_6cuH3[] = { 0 };

/*M newStmtBox_U_DLzYV: ca.mcgill.sable.soot.jimple.JimpleRepresentation.newStmtBox(Lca/mcgill/sable/soot/jimple/Unit;)Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_newStmtBox_U_DLzYV[] = { 0 };



const Char ch_ca_mcgill_sable_soot_jimple_JimpleRepresentation[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','i','m','p','l','e','R','e',
'p','r','e','s','e','n','t','a','t','i','o','n'};

const void *st_ca_mcgill_sable_soot_jimple_JimpleRepresentation[] = {
    ch_ca_mcgill_sable_soot_jimple_JimpleRepresentation+48,	/* 0. ca.mcgill.sable.soot.jimple.JimpleRepres */
    0};
