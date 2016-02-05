/*  ca_mcgill_sable_soot_jimple_JTableSwitchStmt.c -- from Java class ca.mcgill.sable.soot.jimple.JTableSwitchStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JTableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_TableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_StmtSwitch.h"
#include "ca_mcgill_sable_soot_jimple_UnitBox.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Collections.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_UnitBox.C,
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Collections.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[];
extern const void *st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[];
extern Class xt_getTargetBoxesArray_L_7hG2J[];
extern Class xt_init_ViiLU_cSuGo[];
extern Class xt_init_ViiaUU_ZI2yi[];
extern Class xt_toString_zMS_p8fOX[];
extern Class xt_getDefaultTarget__gBItH[];
extern Class xt_setDefaultTarget_U_EMZcE[];
extern Class xt_getDefaultTargetBox__qjXZM[];
extern Class xt_getKey__UcvSD[];
extern Class xt_setKey_V_qsYey[];
extern Class xt_getKeyBox__OuR2v[];
extern Class xt_setLowIndex_i_MgD8I[];
extern Class xt_setHighIndex_i_uchoK[];
extern Class xt_getLowIndex__kLpfs[];
extern Class xt_getHighIndex__il02V[];
extern Class xt_getTargets__bpC1N[];
extern Class xt_getTarget_i_6cNi0[];
extern Class xt_setTarget_iU_wIWc7[];
extern Class xt_setTargets_L_jmPIy[];
extern Class xt_getTargetBox_i_qdSSy[];
extern Class xt_getDefBoxes__RtBjn[];
extern Class xt_getUseBoxes__7nHxv[];
extern Class xt_getUnitBoxes__W5R31[];
extern Class xt_apply_S_X584t[];

#define HASHMASK 0x1ff
/*  4d.  c4fcac4d  (4d)  getUseAndDefBoxes  */
/*  5a.  f8d9705a  (5a)  setLowIndex  */
/*  6e.  1096d86e  (6e)  getHighIndex  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  81.  11e59881  (81)  getBoxesPointingToThis  */
/*  90.  bdc3ac90  (90)  setKey  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  a9.  d21d4aa9  (a9)  toBriefString  */
/*  b2.  6084c2b2  (b2)  getKey  */
/*  c1.  db46f2c1  (c1)  setTargets  */
/*  dc.  d02250dc  (dc)  getDefaultTarget  */
/*  e6.  8ceebae6  (e6)  getTargetBox  */
/*  fd.  869594fd  (fd)  toString  */
/*  10b.  2d2f2d0b  (10b)  toBriefString  */
/*  118.  db189118  (118)  getLowIndex  */
/*  132.  1cb5d532  (132)  setDefaultTarget  */
/*  137.  9e646537  (137)  toBriefString  */
/*  148.  62258948  (148)  getTarget  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  152.  d4c85752  (152)  getUnitBoxes  */
/*  158.  517b5558  (158)  getKeyBox  */
/*  161.  8942e761  (161)  hashCode  */
/*  162.  bc17cd61  (161)  toString  */
/*  183.  c10d2b83  (183)  toString  */
/*  185.  97cc7d85  (185)  toBriefString  */
/*  19e.  5914299e  (19e)  setTarget  */
/*  1a8.  eff269a8  (1a8)  setHighIndex  */
/*  1af.  5463daf  (1af)  getTargets  */
/*  1ed.  289527ed  (1ed)  getDefBoxes  */
/*  1ee.  49b2d9ee  (1ee)  getDefaultTargetBox  */
/*  1ef.  494d5bef  (1ef)  apply  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -990073779, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getUseAndDefBoxes__NUDkS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -119967654, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.setLowIndex_i_MgD8I,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278321262, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getHighIndex__il02V,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toString__bGkxo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300259457, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getBoxesPointingToThis__bVioB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1111249776, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.setKey_V_qsYey,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getUseBoxes__7nHxv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -769832279, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toBriefString_MS_DJBjT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1619313330, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getKey__UcvSD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -616107327, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.setTargets_L_jmPIy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -803057444, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getDefaultTarget__gBItH,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1930511642, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getTargetBox_i_qdSSy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2037017347, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toString_M_bLEyr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    758066443, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toBriefString_S_L6Ylr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -619146984, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getLowIndex__kLpfs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    481678642, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.setDefaultTarget_U_EMZcE,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toBriefString__DAagS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1646627144, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getTarget_i_6cNi0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getUnitBoxes__W5R31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1367037272, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getKeyBox__OuR2v,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.hashCode__8wJNW,
    -1139290783, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toString_MS_hw6rw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1056101501, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toString_S_PAGga,
    0, 0,
    -1748206203, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.toBriefString_M_BE8wY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1494493598, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.setTarget_iU_wIWc7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -269325912, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.setHighIndex_i_uchoK,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88489391, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getTargets__bpC1N,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    680863725, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getDefBoxes__RtBjn,
    1236457966, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.getDefaultTargetBox__qjXZM,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.M.apply_S_X584t,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(44) nmchars = {&acl_char, 0, 44, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','T','a','b','l','e','S','w',
'i','t','c','h','S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 44 };
static const Char nmiv_0[] = {
'a','l','l','M','a','p','T','o','U','n','n','a','m','e','d'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_1[] = {
'b','o','x','e','s','P','o','i','n','t','i','n','g','T','o','T','h','i',
's'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_2[] = {
'v','a','l','u','e','B','o','x','e','s'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_3[] = {
'd','e','f','a','u','l','t','T','a','r','g','e','t','B','o','x'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o','x',
';'};
static const Char nmiv_4[] = {
'k','e','y','B','o','x'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_5[] = {
'l','o','w','I','n','d','e','x'};
static const Char sgiv_5[] = {
'I'};
static const Char nmiv_6[] = {
'h','i','g','h','I','n','d','e','x'};
static const Char sgiv_6[] = {
'I'};
static const Char nmiv_7[] = {
't','a','r','g','e','t','B','o','x','e','s'};
static const Char sgiv_7[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o',
'x',';'};
static const Char nmiv_8[] = {
's','t','m','t','B','o','x','e','s'};
static const Char sgiv_8[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmsm_0[] = {
'g','e','t','T','a','r','g','e','t','B','o','x','e','s','A','r','r','a',
'y'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','[','L','c','a','/','m','c',
'g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i',
'm','p','l','e','/','U','n','i','t','B','o','x',';'};
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
static const Char nmim_25[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_25[] = {
'(','Z','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','M','a','p',';','L','j','a','v','a','/','l','a',
'n','g','/','S','t','r','i','n','g',';',')','L','j','a','v','a','/','l',
'a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmim_26[] = {
'<','i','n','i','t','>'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
'I','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','U','n','i','t',';',')','V'};
static const Char nmim_27[] = {
'<','i','n','i','t','>'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','I','I','[','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','U',
'n','i','t','B','o','x',';','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'U','n','i','t','B','o','x',';',')','V'};
static const Char nmim_28[] = {
'g','e','t','D','e','f','a','u','l','t','T','a','r','g','e','t'};
static const Char sgim_28[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';'};
static const Char nmim_29[] = {
's','e','t','D','e','f','a','u','l','t','T','a','r','g','e','t'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')',
'V'};
static const Char nmim_30[] = {
'g','e','t','D','e','f','a','u','l','t','T','a','r','g','e','t','B','o',
'x'};
static const Char sgim_30[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B',
'o','x',';'};
static const Char nmim_31[] = {
'g','e','t','K','e','y'};
static const Char sgim_31[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_32[] = {
's','e','t','K','e','y'};
static const Char sgim_32[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',';',
')','V'};
static const Char nmim_33[] = {
'g','e','t','K','e','y','B','o','x'};
static const Char sgim_33[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_34[] = {
's','e','t','L','o','w','I','n','d','e','x'};
static const Char sgim_34[] = {
'(','I',')','V'};
static const Char nmim_35[] = {
's','e','t','H','i','g','h','I','n','d','e','x'};
static const Char sgim_35[] = {
'(','I',')','V'};
static const Char nmim_36[] = {
'g','e','t','L','o','w','I','n','d','e','x'};
static const Char sgim_36[] = {
'(',')','I'};
static const Char nmim_37[] = {
'g','e','t','H','i','g','h','I','n','d','e','x'};
static const Char sgim_37[] = {
'(',')','I'};
static const Char nmim_38[] = {
'g','e','t','T','a','r','g','e','t','s'};
static const Char sgim_38[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_39[] = {
'g','e','t','T','a','r','g','e','t'};
static const Char sgim_39[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
';'};
static const Char nmim_40[] = {
's','e','t','T','a','r','g','e','t'};
static const Char sgim_40[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',
')','V'};
static const Char nmim_41[] = {
's','e','t','T','a','r','g','e','t','s'};
static const Char sgim_41[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','V'};
static const Char nmim_42[] = {
'g','e','t','T','a','r','g','e','t','B','o','x'};
static const Char sgim_42[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
'B','o','x',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, allMapToUnnamed), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, boxesPointingToThis), 0,(const Char *)&nmiv_1,19,(const Char *)&sgiv_1,27,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, valueBoxes), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,27,0,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, defaultTargetBox), 0,(const Char *)&nmiv_3,16,(const Char *)&sgiv_3,37,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, keyBox), 0,(const Char *)&nmiv_4,6,(const Char *)&sgiv_4,38,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, lowIndex), 0,(const Char *)&nmiv_5,8,(const Char *)&sgiv_5,1,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, highIndex), 0,(const Char *)&nmiv_6,9,(const Char *)&sgiv_6,1,1,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, targetBoxes), 0,(const Char *)&nmiv_7,11,(const Char *)&sgiv_7,38,1,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt, stmtBoxes), 0,(const Char *)&nmiv_8,9,(const Char *)&sgiv_8,27,1,0x0,5}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())getTargetBoxesArray_L_7hG2J,
	(const Char *)&nmsm_0,19,(const Char *)&sgsm_0,67,
	1,0xa,0,xt_getTargetBoxesArray_L_7hG2J},
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
} inr_ca_mcgill_sable_soot_jimple_JTableSwitchStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt),
    43,
    1,
    9,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    12, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt,
    st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JTableSwitchStmt,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__hMKFf,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,15,0},
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
	{TMIT_native_code, toString__bGkxo,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getUseBoxes__7nHxv,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,29,1,0x8001,20,xt_getUseBoxes__7nHxv},
	{TMIT_native_code, getDefBoxes__RtBjn,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,1,0x8001,19,xt_getDefBoxes__RtBjn},
	{TMIT_native_code, getUnitBoxes__W5R31,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,29,1,0x8001,21,xt_getUnitBoxes__W5R31},
	{TMIT_native_code, getBoxesPointingToThis__bVioB,(const Char *)&nmim_15,22,
	(const Char *)&sgim_15,29,0,0x8001,3,0},
	{TMIT_native_code, getUseAndDefBoxes__NUDkS,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,29,0,0x8001,4,0},
	{TMIT_native_code, apply_S_X584t,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,1,0x8001,22,xt_apply_S_X584t},
	{TMIT_native_code, toBriefString__DAagS,(const Char *)&nmim_18,13,
	(const Char *)&sgim_18,20,0,0x8001,6,0},
	{TMIT_native_code, toBriefString_M_BE8wY,(const Char *)&nmim_19,13,
	(const Char *)&sgim_19,46,0,0x8001,7,0},
	{TMIT_native_code, toBriefString_S_L6Ylr,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,38,0,0x8001,8,0},
	{TMIT_native_code, toBriefString_MS_DJBjT,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,64,0,0x8001,9,0},
	{TMIT_native_code, toString_M_bLEyr,(const Char *)&nmim_22,8,
	(const Char *)&sgim_22,46,0,0x8001,11,0},
	{TMIT_native_code, toString_S_PAGga,(const Char *)&nmim_23,8,
	(const Char *)&sgim_23,38,0,0x8001,12,0},
	{TMIT_native_code, toString_MS_hw6rw,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,64,0,0x8001,13,0},
	{TMIT_native_code, toString_zMS_p8fOX,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,65,1,0x4,3,xt_toString_zMS_p8fOX},
	{TMIT_native_code, init_ViiLU_cSuGo,(const Char *)&nmim_26,6,
	(const Char *)&sgim_26,101,1,0x0,1,xt_init_ViiLU_cSuGo},
	{TMIT_native_code, init_ViiaUU_ZI2yi,(const Char *)&nmim_27,6,
	(const Char *)&sgim_27,118,1,0x4,2,xt_init_ViiaUU_ZI2yi},
	{TMIT_native_code, getDefaultTarget__gBItH,(const Char *)&nmim_28,16,
	(const Char *)&sgim_28,36,1,0x8001,4,xt_getDefaultTarget__gBItH},
	{TMIT_native_code, setDefaultTarget_U_EMZcE,(const Char *)&nmim_29,16,
	(const Char *)&sgim_29,37,1,0x8001,5,xt_setDefaultTarget_U_EMZcE},
	{TMIT_native_code, getDefaultTargetBox__qjXZM,(const Char *)&nmim_30,19,
	(const Char *)&sgim_30,39,1,0x8001,6,xt_getDefaultTargetBox__qjXZM},
	{TMIT_native_code, getKey__UcvSD,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,37,1,0x8001,7,xt_getKey__UcvSD},
	{TMIT_native_code, setKey_V_qsYey,(const Char *)&nmim_32,6,
	(const Char *)&sgim_32,38,1,0x8001,8,xt_setKey_V_qsYey},
	{TMIT_native_code, getKeyBox__OuR2v,(const Char *)&nmim_33,9,
	(const Char *)&sgim_33,40,1,0x8001,9,xt_getKeyBox__OuR2v},
	{TMIT_native_code, setLowIndex_i_MgD8I,(const Char *)&nmim_34,11,
	(const Char *)&sgim_34,4,1,0x8001,10,xt_setLowIndex_i_MgD8I},
	{TMIT_native_code, setHighIndex_i_uchoK,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,4,1,0x8001,11,xt_setHighIndex_i_uchoK},
	{TMIT_native_code, getLowIndex__kLpfs,(const Char *)&nmim_36,11,
	(const Char *)&sgim_36,3,1,0x8001,12,xt_getLowIndex__kLpfs},
	{TMIT_native_code, getHighIndex__il02V,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,3,1,0x8001,13,xt_getHighIndex__il02V},
	{TMIT_native_code, getTargets__bpC1N,(const Char *)&nmim_38,10,
	(const Char *)&sgim_38,29,1,0x8001,14,xt_getTargets__bpC1N},
	{TMIT_native_code, getTarget_i_6cNi0,(const Char *)&nmim_39,9,
	(const Char *)&sgim_39,37,1,0x8001,15,xt_getTarget_i_6cNi0},
	{TMIT_native_code, setTarget_iU_wIWc7,(const Char *)&nmim_40,9,
	(const Char *)&sgim_40,38,1,0x8001,16,xt_setTarget_iU_wIWc7},
	{TMIT_native_code, setTargets_L_jmPIy,(const Char *)&nmim_41,10,
	(const Char *)&sgim_41,30,1,0x8001,17,xt_setTargets_L_jmPIy},
	{TMIT_native_code, getTargetBox_i_qdSSy,(const Char *)&nmim_42,12,
	(const Char *)&sgim_42,40,1,0x8001,18,xt_getTargetBox_i_qdSSy},
    } /* end of methodsigs */
};


/*M getTargetBoxesArray_L_7hG2J: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getTargetBoxesArray(Lca/mcgill/sable/util/List;)[Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getTargetBoxesArray_L_7hG2J[] = { 0 };

Object getTargetBoxesArray_L_7hG2J(Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
Int iv2;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimple_UnitBox.C,i1);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
	GOTO(12,L2);

L1:	a1 = av1;
	i2 = iv2;
	a3 = v__WbL8F();
	a4 = av0;
	i5 = iv2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = (*(Object(*)())findinterface(a4,1247717038)->f)(a4,i5);
	if ((a4 != 0) && !(c0 = *(Class*)a4, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a4,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a3)->class->M.
		newStmtBox_U_e3goW.f(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(40,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_ViiLU_cSuGo: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.<init>(Lca/mcgill/sable/soot/jimple/Value;IILca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_init_ViiLU_cSuGo[] = { 0 };

Void init_ViiLU_cSuGo(Object p0, Object p1, Int p2, Int p3, Object p4, Object p5)
{
Object a0, a1, a2, a3, a4, a5, a6, a7;
Object av0, av1, av4, av5;
Int i0, i1, i2, i3, i4, i5, i6, i7;
Int iv2, iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	iv3 = p3;
	av4 = p4;
	av5 = p5;

L0:	a1 = av0;
	a2 = v__WbL8F();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a2)->class->M.
		newImmediateBox_V_7jLB8.f(a2,a3);
	i3 = iv2;
	i4 = iv3;
	a5 = av4;
	a5 = getTargetBoxesArray_L_7hG2J(a5);
	a6 = v__WbL8F();
	a7 = av5;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a6)->class->M.
		newStmtBox_U_e3goW.f(a6,a7);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_ViiaUU_ZI2yi(a1,a2,i3,i4,a5,a6);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_ViiaUU_ZI2yi: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.<init>(Lca/mcgill/sable/soot/jimple/ValueBox;II[Lca/mcgill/sable/soot/jimple/UnitBox;Lca/mcgill/sable/soot/jimple/UnitBox;)V */

Class xt_init_ViiaUU_ZI2yi[] = { 0 };

Void init_ViiaUU_ZI2yi(Object p0, Object p1, Int p2, Int p3, Object p4, Object p5)
{
Object a0, a1, a2, a3;
Object av0, av1, av4, av5;
Int i0, i1, i2, i3;
Int iv2, iv3, iv6;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	iv3 = p3;
	av4 = p4;
	av5 = p5;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__hMKFf(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->keyBox = a2;
	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->defaultTargetBox = a2;
	a1 = av0;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->lowIndex = i2;
	a1 = av0;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->highIndex = i2;
	a1 = av0;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->targetBoxes = a2;
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
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->stmtBoxes = a2;
	i1 = 0;
	iv6 = i1;
	GOTO(45,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->stmtBoxes;
	a2 = av4;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv6 += 1;
L2:	i1 = iv6;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(71,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->stmtBoxes;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a2)->stmtBoxes;
	a2 = unmodifiableList_L_a5S8d(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->stmtBoxes = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_zMS_p8fOX: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.toString(ZLca/mcgill/sable/util/Map;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_zMS_p8fOX[] = { 0 };

Object toString_zMS_p8fOX(Object p0, Boolean p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av2, av3, av4, av5;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv1, iv6;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av4 = a1;
	a1 = av3;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(15,L1);
	a1 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[2];
	GOTO(20,L2);

L1:	a1 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[3];
L2:	av5 = a1;
	a1 = av4;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av3;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[4];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = iv1;
	if (i3 == 0)
		GOTO(46,L3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a3)->keyBox;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-890495682)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_ToBriefString.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-1637587657)->f)(a3);
	GOTO(66,L4);

L3:	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a3)->keyBox;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,-890495682)->f)(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Object*)a3)->class->M.
		toString__4d9OF.f(a3);
L4:	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[5];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av5;
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
	a1 = av4;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av3;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[6];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av5;
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
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->lowIndex;
	iv6 = i1;
	GOTO(137,L6);

L5:	a1 = av4;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av3;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[7];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[8];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	a4 = av0;
	i5 = iv6;
	a6 = av0;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	i6 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a6)->lowIndex;
	i5 = i5 - i6;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a4)->class->M.
		getTarget_i_6cNi0.f(a4,i5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_java_lang_String.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[9];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av5;
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
	iv6 += 1;
L6:	i1 = iv6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a2)->highIndex;
	if (i1 <= i2)
		GOBACK(217,L5);
	a1 = av4;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av3;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[10];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a4)->class->M.
		getDefaultTarget__gBItH.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,1515828273)->f)(a3,a4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_java_lang_String.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[9];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av5;
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
	a1 = av4;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av3;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[11];
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
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDefaultTarget__gBItH: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getDefaultTarget()Lca/mcgill/sable/soot/jimple/Unit; */

Class xt_getDefaultTarget__gBItH[] = { 0 };

Object getDefaultTarget__gBItH(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->defaultTargetBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1228095736)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setDefaultTarget_U_EMZcE: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.setDefaultTarget(Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setDefaultTarget_U_EMZcE[] = { 0 };

Void setDefaultTarget_U_EMZcE(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->defaultTargetBox;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1222125870)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDefaultTargetBox__qjXZM: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getDefaultTargetBox()Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getDefaultTargetBox__qjXZM[] = { 0 };

Object getDefaultTargetBox__qjXZM(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->defaultTargetBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getKey__UcvSD: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getKey()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getKey__UcvSD[] = { 0 };

Object getKey__UcvSD(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->keyBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setKey_V_qsYey: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.setKey(Lca/mcgill/sable/soot/jimple/Value;)V */

Class xt_setKey_V_qsYey[] = { 0 };

Void setKey_V_qsYey(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->keyBox;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-617263732)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getKeyBox__OuR2v: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getKeyBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getKeyBox__OuR2v[] = { 0 };

Object getKeyBox__OuR2v(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->keyBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setLowIndex_i_MgD8I: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.setLowIndex(I)V */

Class xt_setLowIndex_i_MgD8I[] = { 0 };

Void setLowIndex_i_MgD8I(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->lowIndex = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setHighIndex_i_uchoK: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.setHighIndex(I)V */

Class xt_setHighIndex_i_uchoK[] = { 0 };

Void setHighIndex_i_uchoK(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->highIndex = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLowIndex__kLpfs: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getLowIndex()I */

Class xt_getLowIndex__kLpfs[] = { 0 };

Int getLowIndex__kLpfs(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->lowIndex;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getHighIndex__il02V: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getHighIndex()I */

Class xt_getHighIndex__il02V[] = { 0 };

Int getHighIndex__il02V(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->highIndex;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTargets__bpC1N: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getTargets()Lca/mcgill/sable/util/List; */

Class xt_getTargets__bpC1N[] = { 0 };

Object getTargets__bpC1N(Object p0)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
	GOTO(10,L2);

L1:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a2)->targetBoxes;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1228095736)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a2)->targetBoxes;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(40,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTarget_i_6cNi0: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getTarget(I)Lca/mcgill/sable/soot/jimple/Unit; */

Class xt_getTarget_i_6cNi0[] = { 0 };

Object getTarget_i_6cNi0(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->targetBoxes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1228095736)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setTarget_iU_wIWc7: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.setTarget(ILca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_setTarget_iU_wIWc7[] = { 0 };

Void setTarget_iU_wIWc7(Object p0, Int p1, Object p2)
{
Object a0, a1, a2;
Object av0, av2;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->targetBoxes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1222125870)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setTargets_L_jmPIy: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.setTargets(Lca/mcgill/sable/util/List;)V */

Class xt_setTargets_L_jmPIy[] = { 0 };

Void setTargets_L_jmPIy(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	GOTO(2,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->targetBoxes;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av1;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1247717038)->f)(a2,i3);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1222125870)->f)(a1,a2);
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	if (i1 < i2)
		GOBACK(36,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTargetBox_i_qdSSy: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getTargetBox(I)Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getTargetBox_i_qdSSy[] = { 0 };

Object getTargetBox_i_qdSSy(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->targetBoxes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDefBoxes__RtBjn: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getDefBoxes()Lca/mcgill/sable/util/List; */

Class xt_getDefBoxes__RtBjn[] = { 0 };

Object getDefBoxes__RtBjn(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList;
	return a1;

	/*NOTREACHED*/
}

/*M getUseBoxes__7nHxv: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__7nHxv[] = { 0 };

Object getUseBoxes__7nHxv(Object p0)
{
Object a0, a1, a2;
Object av0, av1;
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
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a2)->keyBox;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-890495682)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-113699181)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a2)->keyBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUnitBoxes__W5R31: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.getUnitBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUnitBoxes__W5R31[] = { 0 };

Object getUnitBoxes__W5R31(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JTableSwitchStmt*)a1)->stmtBoxes;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_X584t: ca.mcgill.sable.soot.jimple.JTableSwitchStmt.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_X584t[] = { 0 };

Void apply_S_X584t(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StmtSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-1877140230)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','T','a','b','l','e','S','w',
'i','t','c','h','S','t','m','t',' ',10,'t','a','b','l','e','s','w','i',
't','c','h','(',')','{',' ',' ',' ',' ','c','a','s','e',' ',':',' ','g',
'o','t','o',' ',';',' ',' ',' ',' ','d','e','f','a','u','l','t',':',' ',
'g','o','t','o',' ','}'};

const void *st_ca_mcgill_sable_soot_jimple_JTableSwitchStmt[] = {
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+44,	/* 0. ca.mcgill.sable.soot.jimple.JTableSwitch */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+44,	/* 1.  */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+45,	/* 2.   */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+46,	/* 3. % */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+58,	/* 4. tableswitch( */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+59,	/* 5. ) */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+60,	/* 6. { */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+69,	/* 7.     case  */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+76,	/* 8. : goto  */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+77,	/* 9. ; */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+95,	/* 10.     default: goto  */
    ch_ca_mcgill_sable_soot_jimple_JTableSwitchStmt+96,	/* 11. } */
    0};
