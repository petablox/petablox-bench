/*  ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_Value.h"
#include "ca_mcgill_sable_soot_jimple_ValueBox.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_Value.C,
    &cl_ca_mcgill_sable_soot_jimple_ValueBox.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt[];
extern Class xt_getLeftOp__uUpYE[];
extern Class xt_getRightOp__hUOPs[];
extern Class xt_getLeftOpBox__WbHxP[];
extern Class xt_getRightOpBox__dX30w[];
extern Class xt_getDefBoxes__IKQJI[];
extern Class xt_getUseBoxes__2QbDx[];
extern Class xt_getUnitBoxes__tIAI0[];
extern Class xt_init__osf6k[];

#define HASHMASK 0x1ff
/*  4d.  c4fcac4d  (4d)  getUseAndDefBoxes  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  81.  11e59881  (81)  getBoxesPointingToThis  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  97.  84ea0497  (97)  getLeftOp  */
/*  a9.  d21d4aa9  (a9)  toBriefString  */
/*  c1.  67817cc1  (c1)  getLeftOpBox  */
/*  fd.  869594fd  (fd)  toString  */
/*  10b.  2d2f2d0b  (10b)  toBriefString  */
/*  11e.  49a6cd1e  (11e)  getRightOp  */
/*  137.  9e646537  (137)  toBriefString  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  152.  d4c85752  (152)  getUnitBoxes  */
/*  161.  8942e761  (161)  hashCode  */
/*  162.  bc17cd61  (161)  toString  */
/*  183.  c10d2b83  (183)  toString  */
/*  185.  97cc7d85  (185)  toBriefString  */
/*  1b4.  a14771b4  (1b4)  getRightOpBox  */
/*  1ed.  289527ed  (1ed)  getDefBoxes  */
/*  1ef.  494d5bef  (1ef)  apply  */
static const struct ihash htable[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -990073779, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getUseAndDefBoxes__NUDkS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toString__bGkxo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300259457, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getBoxesPointingToThis__bVioB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getUseBoxes__2QbDx,
    0, 0, 0, 0, 0, 0,
    -2065038185, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getLeftOp__uUpYE,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -769832279, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toBriefString_MS_DJBjT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1736539329, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getLeftOpBox__WbHxP,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2037017347, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toString_M_bLEyr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    758066443, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toBriefString_S_L6Ylr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1235668254, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getRightOp__hUOPs,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toBriefString__DAagS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getUnitBoxes__tIAI0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.hashCode__8wJNW,
    -1139290783, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toString_MS_hw6rw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1056101501, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toString_S_PAGga,
    0, 0,
    -1748206203, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.toBriefString_M_BE8wY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1589153356, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getRightOpBox__dX30w,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    680863725, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.getDefBoxes__IKQJI,
    0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.M.apply_S_jAfvv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(50) nmchars = {&acl_char, 0, 50, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'D','e','f','i','n','i','t','i','o','n','S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 50 };
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
'l','e','f','t','B','o','x'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_4[] = {
'r','i','g','h','t','B','o','x'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e','B','o',
'x',';'};
static const Char nmiv_5[] = {
'd','e','f','B','o','x','e','s'};
static const Char sgiv_5[] = {
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
'g','e','t','L','e','f','t','O','p'};
static const Char sgim_26[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_27[] = {
'g','e','t','R','i','g','h','t','O','p'};
static const Char sgim_27[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
';'};
static const Char nmim_28[] = {
'g','e','t','L','e','f','t','O','p','B','o','x'};
static const Char sgim_28[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};
static const Char nmim_29[] = {
'g','e','t','R','i','g','h','t','O','p','B','o','x'};
static const Char sgim_29[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','V','a','l','u','e',
'B','o','x',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt, allMapToUnnamed), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt, boxesPointingToThis), 0,(const Char *)&nmiv_1,19,(const Char *)&sgiv_1,27,0,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt, valueBoxes), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,27,0,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt, leftBox), 0,(const Char *)&nmiv_3,7,(const Char *)&sgiv_3,38,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt, rightBox), 0,(const Char *)&nmiv_4,8,(const Char *)&sgiv_4,38,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt, defBoxes), 0,(const Char *)&nmiv_5,8,(const Char *)&sgiv_5,27,1,0x0,2}, 
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
} inr_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt cl_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt),
    30,
    0,
    6,
    0,
    3, supers,
    2, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt,
    st_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x420,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__osf6k,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,7,xt_init__osf6k},
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
	{TMIT_native_code, getUseBoxes__2QbDx,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,29,1,0x8001,5,xt_getUseBoxes__2QbDx},
	{TMIT_native_code, getDefBoxes__IKQJI,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,1,0x8001,4,xt_getDefBoxes__IKQJI},
	{TMIT_native_code, getUnitBoxes__tIAI0,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,29,1,0x8001,6,xt_getUnitBoxes__tIAI0},
	{TMIT_native_code, getBoxesPointingToThis__bVioB,(const Char *)&nmim_15,22,
	(const Char *)&sgim_15,29,0,0x8001,3,0},
	{TMIT_native_code, getUseAndDefBoxes__NUDkS,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,29,0,0x8001,4,0},
	{TMIT_native_code, apply_S_jAfvv,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,0,0x8001,5,0},
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
	{TMIT_abstract, 0,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,65,0,0x404,14,0},
	{TMIT_native_code, getLeftOp__uUpYE,(const Char *)&nmim_26,9,
	(const Char *)&sgim_26,37,1,0x8001,0,xt_getLeftOp__uUpYE},
	{TMIT_native_code, getRightOp__hUOPs,(const Char *)&nmim_27,10,
	(const Char *)&sgim_27,37,1,0x8001,1,xt_getRightOp__hUOPs},
	{TMIT_native_code, getLeftOpBox__WbHxP,(const Char *)&nmim_28,12,
	(const Char *)&sgim_28,40,1,0x8001,2,xt_getLeftOpBox__WbHxP},
	{TMIT_native_code, getRightOpBox__dX30w,(const Char *)&nmim_29,13,
	(const Char *)&sgim_29,40,1,0x8001,3,xt_getRightOpBox__dX30w},
    } /* end of methodsigs */
};


/*M getLeftOp__uUpYE: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.getLeftOp()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getLeftOp__uUpYE[] = { 0 };

Object getLeftOp__uUpYE(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a1)->leftBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getRightOp__hUOPs: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.getRightOp()Lca/mcgill/sable/soot/jimple/Value; */

Class xt_getRightOp__hUOPs[] = { 0 };

Object getRightOp__hUOPs(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a1)->rightBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-890495682)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLeftOpBox__WbHxP: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.getLeftOpBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getLeftOpBox__WbHxP[] = { 0 };

Object getLeftOpBox__WbHxP(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a1)->leftBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getRightOpBox__dX30w: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.getRightOpBox()Lca/mcgill/sable/soot/jimple/ValueBox; */

Class xt_getRightOpBox__dX30w[] = { 0 };

Object getRightOpBox__dX30w(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a1)->rightBox;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDefBoxes__IKQJI: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.getDefBoxes()Lca/mcgill/sable/util/List; */

Class xt_getDefBoxes__IKQJI[] = { 0 };

Object getDefBoxes__IKQJI(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a1)->defBoxes;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__2QbDx: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__2QbDx[] = { 0 };

Object getUseBoxes__2QbDx(Object p0)
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a2)->rightBox;
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
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a2)->rightBox;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt*)a2)->leftBox;
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
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUnitBoxes__tIAI0: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.getUnitBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUnitBoxes__tIAI0[] = { 0 };

Object getUnitBoxes__tIAI0(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList;
	return a1;

	/*NOTREACHED*/
}

/*M init__osf6k: ca.mcgill.sable.soot.jimple.AbstractDefinitionStmt.<init>()V */

Class xt_init__osf6k[] = { 0 };

Void init__osf6k(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__hMKFf(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'D','e','f','i','n','i','t','i','o','n','S','t','m','t'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractDefinitionStmt+50,	/* 0. ca.mcgill.sable.soot.jimple.AbstractDefi */
    0};
