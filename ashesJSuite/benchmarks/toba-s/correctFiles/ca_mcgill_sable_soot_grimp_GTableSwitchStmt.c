/*  ca_mcgill_sable_soot_grimp_GTableSwitchStmt.c -- from Java class ca.mcgill.sable.soot.grimp.GTableSwitchStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GTableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_TableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_JTableSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_jimple_UnitBox.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JTableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_TableSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_jimple_UnitBox.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GTableSwitchStmt[];
extern const void *st_ca_mcgill_sable_soot_grimp_GTableSwitchStmt[];
extern Class xt_getTargetBoxesArray_L_OAdnW[];
extern Class xt_init_ViiLU_ByONZ[];

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
/*  1d2.  4c0d6fd2  (1d2)  clone  */
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
    -990073779, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getUseAndDefBoxes__NUDkS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -119967654, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.setLowIndex_i_MgD8I,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278321262, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getHighIndex__il02V,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toString__bGkxo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300259457, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getBoxesPointingToThis__bVioB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1111249776, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.setKey_V_qsYey,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getUseBoxes__7nHxv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -769832279, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toBriefString_MS_DJBjT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1619313330, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getKey__UcvSD,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -616107327, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.setTargets_L_jmPIy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -803057444, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getDefaultTarget__gBItH,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1930511642, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getTargetBox_i_qdSSy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2037017347, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toString_M_bLEyr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    758066443, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toBriefString_S_L6Ylr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -619146984, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getLowIndex__kLpfs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    481678642, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.setDefaultTarget_U_EMZcE,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toBriefString__DAagS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1646627144, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getTarget_i_6cNi0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getUnitBoxes__W5R31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1367037272, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getKeyBox__OuR2v,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.hashCode__8wJNW,
    -1139290783, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toString_MS_hw6rw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1056101501, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toString_S_PAGga,
    0, 0,
    -1748206203, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.toBriefString_M_BE8wY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1494493598, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.setTarget_iU_wIWc7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -269325912, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.setHighIndex_i_uchoK,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88489391, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getTargets__bpC1N,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    680863725, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getDefBoxes__RtBjn,
    1236457966, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.getDefaultTargetBox__qjXZM,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.M.apply_S_X584t,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(43) nmchars = {&acl_char, 0, 43, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','T','a','b','l','e','S','w','i',
't','c','h','S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 43 };
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
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, allMapToUnnamed), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, boxesPointingToThis), 0,(const Char *)&nmiv_1,19,(const Char *)&sgiv_1,27,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, valueBoxes), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,27,0,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, defaultTargetBox), 0,(const Char *)&nmiv_3,16,(const Char *)&sgiv_3,37,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, keyBox), 0,(const Char *)&nmiv_4,6,(const Char *)&sgiv_4,38,0,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, lowIndex), 0,(const Char *)&nmiv_5,8,(const Char *)&sgiv_5,1,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, highIndex), 0,(const Char *)&nmiv_6,9,(const Char *)&sgiv_6,1,0,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, targetBoxes), 0,(const Char *)&nmiv_7,11,(const Char *)&sgiv_7,38,0,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt, stmtBoxes), 0,(const Char *)&nmiv_8,9,(const Char *)&sgiv_8,27,0,0x0,5}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())getTargetBoxesArray_L_OAdnW,
	(const Char *)&nmsm_0,19,(const Char *)&sgsm_0,67,
	1,0xa,0,xt_getTargetBoxesArray_L_OAdnW},
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
} inr_ca_mcgill_sable_soot_grimp_GTableSwitchStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt cl_ca_mcgill_sable_soot_grimp_GTableSwitchStmt = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GTableSwitchStmt),
    43,
    1,
    9,
    0,
    4, supers,
    3, 1, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GTableSwitchStmt,
    st_ca_mcgill_sable_soot_grimp_GTableSwitchStmt,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GTableSwitchStmt,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__hMKFf,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,15,0},
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
	{TMIT_native_code, toString__bGkxo,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getUseBoxes__7nHxv,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,29,0,0x8001,20,0},
	{TMIT_native_code, getDefBoxes__RtBjn,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,0,0x8001,19,0},
	{TMIT_native_code, getUnitBoxes__W5R31,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,29,0,0x8001,21,0},
	{TMIT_native_code, getBoxesPointingToThis__bVioB,(const Char *)&nmim_15,22,
	(const Char *)&sgim_15,29,0,0x8001,3,0},
	{TMIT_native_code, getUseAndDefBoxes__NUDkS,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,29,0,0x8001,4,0},
	{TMIT_native_code, apply_S_X584t,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,0,0x8001,22,0},
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
	(const Char *)&sgim_25,65,0,0x4,3,0},
	{TMIT_native_code, init_ViiLU_ByONZ,(const Char *)&nmim_26,6,
	(const Char *)&sgim_26,101,1,0x0,1,xt_init_ViiLU_ByONZ},
	{TMIT_native_code, init_ViiaUU_ZI2yi,(const Char *)&nmim_27,6,
	(const Char *)&sgim_27,118,0,0x4,2,0},
	{TMIT_native_code, getDefaultTarget__gBItH,(const Char *)&nmim_28,16,
	(const Char *)&sgim_28,36,0,0x8001,4,0},
	{TMIT_native_code, setDefaultTarget_U_EMZcE,(const Char *)&nmim_29,16,
	(const Char *)&sgim_29,37,0,0x8001,5,0},
	{TMIT_native_code, getDefaultTargetBox__qjXZM,(const Char *)&nmim_30,19,
	(const Char *)&sgim_30,39,0,0x8001,6,0},
	{TMIT_native_code, getKey__UcvSD,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,37,0,0x8001,7,0},
	{TMIT_native_code, setKey_V_qsYey,(const Char *)&nmim_32,6,
	(const Char *)&sgim_32,38,0,0x8001,8,0},
	{TMIT_native_code, getKeyBox__OuR2v,(const Char *)&nmim_33,9,
	(const Char *)&sgim_33,40,0,0x8001,9,0},
	{TMIT_native_code, setLowIndex_i_MgD8I,(const Char *)&nmim_34,11,
	(const Char *)&sgim_34,4,0,0x8001,10,0},
	{TMIT_native_code, setHighIndex_i_uchoK,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,4,0,0x8001,11,0},
	{TMIT_native_code, getLowIndex__kLpfs,(const Char *)&nmim_36,11,
	(const Char *)&sgim_36,3,0,0x8001,12,0},
	{TMIT_native_code, getHighIndex__il02V,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,3,0,0x8001,13,0},
	{TMIT_native_code, getTargets__bpC1N,(const Char *)&nmim_38,10,
	(const Char *)&sgim_38,29,0,0x8001,14,0},
	{TMIT_native_code, getTarget_i_6cNi0,(const Char *)&nmim_39,9,
	(const Char *)&sgim_39,37,0,0x8001,15,0},
	{TMIT_native_code, setTarget_iU_wIWc7,(const Char *)&nmim_40,9,
	(const Char *)&sgim_40,38,0,0x8001,16,0},
	{TMIT_native_code, setTargets_L_jmPIy,(const Char *)&nmim_41,10,
	(const Char *)&sgim_41,30,0,0x8001,17,0},
	{TMIT_native_code, getTargetBox_i_qdSSy,(const Char *)&nmim_42,12,
	(const Char *)&sgim_42,40,0,0x8001,18,0},
    } /* end of methodsigs */
};


/*M getTargetBoxesArray_L_OAdnW: ca.mcgill.sable.soot.grimp.GTableSwitchStmt.getTargetBoxesArray(Lca/mcgill/sable/util/List;)[Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getTargetBoxesArray_L_OAdnW[] = { 0 };

Object getTargetBoxesArray_L_OAdnW(Object p1)
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
	a3 = v__ES3xL();
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
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a3)->class->M.
		newStmtBox_U_0mQ3j.f(a3,a4);
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

/*M init_ViiLU_ByONZ: ca.mcgill.sable.soot.grimp.GTableSwitchStmt.<init>(Lca/mcgill/sable/soot/jimple/Value;IILca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_init_ViiLU_ByONZ[] = { 0 };

Void init_ViiLU_ByONZ(Object p0, Object p1, Int p2, Int p3, Object p4, Object p5)
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
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExprBox_V_B8P02.f(a2,a3);
	i3 = iv2;
	i4 = iv3;
	a5 = av4;
	a5 = getTargetBoxesArray_L_OAdnW(a5);
	a6 = v__ES3xL();
	a7 = av5;
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	a6 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a6)->class->M.
		newStmtBox_U_0mQ3j.f(a6,a7);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_ViiaUU_ZI2yi(a1,a2,i3,i4,a5,a6);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GTableSwitchStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','T','a','b','l','e','S','w','i',
't','c','h','S','t','m','t'};

const void *st_ca_mcgill_sable_soot_grimp_GTableSwitchStmt[] = {
    ch_ca_mcgill_sable_soot_grimp_GTableSwitchStmt+43,	/* 0. ca.mcgill.sable.soot.grimp.GTableSwitchS */
    0};
