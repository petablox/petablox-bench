/*  ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.c -- from Java class ca.mcgill.sable.soot.grimp.GLookupSwitchStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_LookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_JLookupSwitchStmt.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_jimple_UnitBox.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JLookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_LookupSwitchStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_jimple_UnitBox.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt[];
extern const void *st_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt[];
extern Class xt_getTargetBoxesArray_L_6PqKz[];
extern Class xt_init_VLLU_PjP4n[];

#define HASHMASK 0x1ff
/*  4d.  c4fcac4d  (4d)  getUseAndDefBoxes  */
/*  4e.  1c603e4e  (4e)  getTargetCount  */
/*  58.  2da14658  (58)  setLookupValue  */
/*  59.  da1b9a59  (59)  setLookupValues  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  81.  11e59881  (81)  getBoxesPointingToThis  */
/*  90.  bdc3ac90  (90)  setKey  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  a9.  d21d4aa9  (a9)  toBriefString  */
/*  b2.  6084c2b2  (b2)  getKey  */
/*  dc.  d02250dc  (dc)  getDefaultTarget  */
/*  e6.  8ceebae6  (e6)  getTargetBox  */
/*  fd.  869594fd  (fd)  toString  */
/*  10b.  2d2f2d0b  (10b)  toBriefString  */
/*  113.  be82f513  (113)  setTargets  */
/*  12e.  a96b592e  (12e)  getLookupValue  */
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
/*  187.  efbb2d87  (187)  getLookupValues  */
/*  19e.  5914299e  (19e)  setTarget  */
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
    -990073779, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getUseAndDefBoxes__NUDkS,
    476069454, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getTargetCount__0wa9H,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    765544024, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.setLookupValue_ii_4N4p4,
    -635725223, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.setLookupValues_L_3I0nT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toString__bGkxo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300259457, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getBoxesPointingToThis__bVioB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1111249776, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.setKey_V_e8FRL,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getUseBoxes__T5K4P,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -769832279, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toBriefString_MS_DJBjT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1619313330, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getKey__eRyhS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -803057444, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getDefaultTarget__olKoW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1930511642, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getTargetBox_i_sGo7U,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2037017347, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toString_M_bLEyr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    758066443, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toBriefString_S_L6Ylr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1098713837, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.setTargets_aU_DTdC5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1452582610, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getLookupValue_i_Gxcqf,
    0, 0, 0, 0, 0, 0,
    481678642, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.setDefaultTarget_U_iVxUa,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toBriefString__DAagS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1646627144, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getTarget_i_iet0o,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getUnitBoxes__4S7U3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1367037272, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getKeyBox__gXgFU,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.hashCode__8wJNW,
    -1139290783, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toString_MS_hw6rw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1056101501, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toString_S_PAGga,
    0, 0,
    -1748206203, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.toBriefString_M_BE8wY,
    0, 0,
    -272945785, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getLookupValues__NWPih,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1494493598, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.setTarget_iU_YUVz1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    88489391, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getTargets__doBmY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.clone__dslwm,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    680863725, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getDefBoxes__DcEQG,
    1236457966, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.getDefaultTargetBox__0uj6S,
    1229806575, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.M.apply_S_3nlUo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(44) nmchars = {&acl_char, 0, 44, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','L','o','o','k','u','p','S','w',
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
'l','o','o','k','u','p','V','a','l','u','e','s'};
static const Char sgiv_5[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_6[] = {
't','a','r','g','e','t','B','o','x','e','s'};
static const Char sgiv_6[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t','B','o',
'x',';'};
static const Char nmiv_7[] = {
's','t','m','t','B','o','x','e','s'};
static const Char sgiv_7[] = {
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
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','u','t','i','l','/','L','i','s','t',';',
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',')','V'};
static const Char nmim_27[] = {
'<','i','n','i','t','>'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B',
'o','x',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','u','t','i','l','/','L','i','s','t',';','[','L','c','a','/','m',
'c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j',
'i','m','p','l','e','/','U','n','i','t','B','o','x',';','L','c','a','/',
'm','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/',
'j','i','m','p','l','e','/','U','n','i','t','B','o','x',';',')','V'};
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
's','e','t','L','o','o','k','u','p','V','a','l','u','e','s'};
static const Char sgim_34[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','V'};
static const Char nmim_35[] = {
's','e','t','L','o','o','k','u','p','V','a','l','u','e'};
static const Char sgim_35[] = {
'(','I','I',')','V'};
static const Char nmim_36[] = {
'g','e','t','L','o','o','k','u','p','V','a','l','u','e'};
static const Char sgim_36[] = {
'(','I',')','I'};
static const Char nmim_37[] = {
'g','e','t','L','o','o','k','u','p','V','a','l','u','e','s'};
static const Char sgim_37[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_38[] = {
'g','e','t','T','a','r','g','e','t','C','o','u','n','t'};
static const Char sgim_38[] = {
'(',')','I'};
static const Char nmim_39[] = {
'g','e','t','T','a','r','g','e','t'};
static const Char sgim_39[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
';'};
static const Char nmim_40[] = {
'g','e','t','T','a','r','g','e','t','B','o','x'};
static const Char sgim_40[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',
'B','o','x',';'};
static const Char nmim_41[] = {
's','e','t','T','a','r','g','e','t'};
static const Char sgim_41[] = {
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',
')','V'};
static const Char nmim_42[] = {
'g','e','t','T','a','r','g','e','t','s'};
static const Char sgim_42[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_43[] = {
's','e','t','T','a','r','g','e','t','s'};
static const Char sgim_43[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','U','n','i','t',';',
')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, allMapToUnnamed), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, boxesPointingToThis), 0,(const Char *)&nmiv_1,19,(const Char *)&sgiv_1,27,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, valueBoxes), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,27,0,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, defaultTargetBox), 0,(const Char *)&nmiv_3,16,(const Char *)&sgiv_3,37,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, keyBox), 0,(const Char *)&nmiv_4,6,(const Char *)&sgiv_4,38,0,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, lookupValues), 0,(const Char *)&nmiv_5,12,(const Char *)&sgiv_5,27,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, targetBoxes), 0,(const Char *)&nmiv_6,11,(const Char *)&sgiv_6,38,0,0x4,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt, stmtBoxes), 0,(const Char *)&nmiv_7,9,(const Char *)&sgiv_7,27,0,0x0,4}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())getTargetBoxesArray_L_6PqKz,
	(const Char *)&nmsm_0,19,(const Char *)&sgsm_0,67,
	1,0xa,0,xt_getTargetBoxesArray_L_6PqKz},
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
} inr_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt cl_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt),
    44,
    1,
    8,
    0,
    4, supers,
    3, 1, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt,
    st_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt,
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
	{TMIT_native_code, getUseBoxes__T5K4P,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,29,0,0x8001,21,0},
	{TMIT_native_code, getDefBoxes__DcEQG,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,0,0x8001,20,0},
	{TMIT_native_code, getUnitBoxes__4S7U3,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,29,0,0x8001,22,0},
	{TMIT_native_code, getBoxesPointingToThis__bVioB,(const Char *)&nmim_15,22,
	(const Char *)&sgim_15,29,0,0x8001,3,0},
	{TMIT_native_code, getUseAndDefBoxes__NUDkS,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,29,0,0x8001,4,0},
	{TMIT_native_code, apply_S_3nlUo,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,0,0x8001,23,0},
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
	{TMIT_native_code, toString_zMS_lq15D,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,65,0,0x4,3,0},
	{TMIT_native_code, init_VLLU_PjP4n,(const Char *)&nmim_26,6,
	(const Char *)&sgim_26,126,1,0x0,1,xt_init_VLLU_PjP4n},
	{TMIT_native_code, init_VLaUU_1VHh9,(const Char *)&nmim_27,6,
	(const Char *)&sgim_27,143,0,0x4,2,0},
	{TMIT_native_code, getDefaultTarget__olKoW,(const Char *)&nmim_28,16,
	(const Char *)&sgim_28,36,0,0x8001,4,0},
	{TMIT_native_code, setDefaultTarget_U_iVxUa,(const Char *)&nmim_29,16,
	(const Char *)&sgim_29,37,0,0x8001,5,0},
	{TMIT_native_code, getDefaultTargetBox__0uj6S,(const Char *)&nmim_30,19,
	(const Char *)&sgim_30,39,0,0x8001,6,0},
	{TMIT_native_code, getKey__eRyhS,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,37,0,0x8001,7,0},
	{TMIT_native_code, setKey_V_e8FRL,(const Char *)&nmim_32,6,
	(const Char *)&sgim_32,38,0,0x8001,8,0},
	{TMIT_native_code, getKeyBox__gXgFU,(const Char *)&nmim_33,9,
	(const Char *)&sgim_33,40,0,0x8001,9,0},
	{TMIT_native_code, setLookupValues_L_3I0nT,(const Char *)&nmim_34,15,
	(const Char *)&sgim_34,30,0,0x8001,10,0},
	{TMIT_native_code, setLookupValue_ii_4N4p4,(const Char *)&nmim_35,14,
	(const Char *)&sgim_35,5,0,0x8001,11,0},
	{TMIT_native_code, getLookupValue_i_Gxcqf,(const Char *)&nmim_36,14,
	(const Char *)&sgim_36,4,0,0x8001,12,0},
	{TMIT_native_code, getLookupValues__NWPih,(const Char *)&nmim_37,15,
	(const Char *)&sgim_37,29,0,0x8001,13,0},
	{TMIT_native_code, getTargetCount__0wa9H,(const Char *)&nmim_38,14,
	(const Char *)&sgim_38,3,0,0x8001,14,0},
	{TMIT_native_code, getTarget_i_iet0o,(const Char *)&nmim_39,9,
	(const Char *)&sgim_39,37,0,0x8001,15,0},
	{TMIT_native_code, getTargetBox_i_sGo7U,(const Char *)&nmim_40,12,
	(const Char *)&sgim_40,40,0,0x8001,16,0},
	{TMIT_native_code, setTarget_iU_YUVz1,(const Char *)&nmim_41,9,
	(const Char *)&sgim_41,38,0,0x8001,17,0},
	{TMIT_native_code, getTargets__doBmY,(const Char *)&nmim_42,10,
	(const Char *)&sgim_42,29,0,0x8001,18,0},
	{TMIT_native_code, setTargets_aU_DTdC5,(const Char *)&nmim_43,10,
	(const Char *)&sgim_43,38,0,0x8001,19,0},
    } /* end of methodsigs */
};


/*M getTargetBoxesArray_L_6PqKz: ca.mcgill.sable.soot.grimp.GLookupSwitchStmt.getTargetBoxesArray(Lca/mcgill/sable/util/List;)[Lca/mcgill/sable/soot/jimple/UnitBox; */

Class xt_getTargetBoxesArray_L_6PqKz[] = { 0 };

Object getTargetBoxesArray_L_6PqKz(Object p1)
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

/*M init_VLLU_PjP4n: ca.mcgill.sable.soot.grimp.GLookupSwitchStmt.<init>(Lca/mcgill/sable/soot/jimple/Value;Lca/mcgill/sable/util/List;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/jimple/Unit;)V */

Class xt_init_VLLU_PjP4n[] = { 0 };

Void init_VLLU_PjP4n(Object p0, Object p1, Object p2, Object p3, Object p4)
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
	a2 = v__ES3xL();
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_grimp_Grimp*)a2)->class->M.
		newExprBox_V_B8P02.f(a2,a3);
	a3 = av2;
	a4 = av3;
	a4 = getTargetBoxesArray_L_6PqKz(a4);
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
	init_VLaUU_1VHh9(a1,a2,a3,a4,a5);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','G','L','o','o','k','u','p','S','w',
'i','t','c','h','S','t','m','t'};

const void *st_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt[] = {
    ch_ca_mcgill_sable_soot_grimp_GLookupSwitchStmt+44,	/* 0. ca.mcgill.sable.soot.grimp.GLookupSwitch */
    0};
