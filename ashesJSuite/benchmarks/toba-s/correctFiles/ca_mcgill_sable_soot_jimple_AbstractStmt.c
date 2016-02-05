/*  ca_mcgill_sable_soot_jimple_AbstractStmt.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractStmt  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt$AllMapTo.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Collections.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimp_QDgNO.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Collections.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractStmt[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractStmt[];
extern Class xt_getUseBoxes__7OAKy[];
extern Class xt_getDefBoxes__RUuwq[];
extern Class xt_getUnitBoxes__i04Wf[];
extern Class xt_getBoxesPointingToThis__bVioB[];
extern Class xt_getUseAndDefBoxes__NUDkS[];
extern Class xt_apply_S_jAfvv[];
extern Class xt_toBriefString__DAagS[];
extern Class xt_toBriefString_M_BE8wY[];
extern Class xt_toBriefString_S_L6Ylr[];
extern Class xt_toBriefString_MS_DJBjT[];
extern Class xt_toString__bGkxo[];
extern Class xt_toString_M_bLEyr[];
extern Class xt_toString_S_PAGga[];
extern Class xt_toString_MS_hw6rw[];
extern Class xt_toString_zMS_db773[];
extern Class xt_init__hMKFf[];
extern Class xt_clinit__gotOf[];

#define HASHMASK 0x1ff
/*  4d.  c4fcac4d  (4d)  getUseAndDefBoxes  */
/*  6f.  489f8e6f  (6f)  toString  */
/*  81.  11e59881  (81)  getBoxesPointingToThis  */
/*  93.  f9391693  (93)  getUseBoxes  */
/*  a9.  d21d4aa9  (a9)  toBriefString  */
/*  fd.  869594fd  (fd)  toString  */
/*  10b.  2d2f2d0b  (10b)  toBriefString  */
/*  137.  9e646537  (137)  toBriefString  */
/*  14e.  c2aafd4e  (14e)  equals  */
/*  152.  d4c85752  (152)  getUnitBoxes  */
/*  161.  8942e761  (161)  hashCode  */
/*  162.  bc17cd61  (161)  toString  */
/*  183.  c10d2b83  (183)  toString  */
/*  185.  97cc7d85  (185)  toBriefString  */
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
    -990073779, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.getUseAndDefBoxes__NUDkS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toString__bGkxo,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300259457, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.getBoxesPointingToThis__bVioB,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.getUseBoxes__7OAKy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -769832279, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toBriefString_MS_DJBjT,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -2037017347, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toString_M_bLEyr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    758066443, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toBriefString_S_L6Ylr,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toBriefString__DAagS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.equals_O_Ba6e0,
    0, 0, 0, 0, 0, 0,
    -725067950, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.getUnitBoxes__i04Wf,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.hashCode__8wJNW,
    -1139290783, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toString_MS_hw6rw,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1056101501, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toString_S_PAGga,
    0, 0,
    -1748206203, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.toBriefString_M_BE8wY,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    680863725, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.getDefBoxes__RUuwq,
    0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.M.apply_S_jAfvv,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(40) nmchars = {&acl_char, 0, 40, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','m','t'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 40 };
static const Char nmcv_0[] = {
'e','m','p','t','y','L','i','s','t'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
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
static const Char nmsm_0[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_0[] = {
'(',')','V'};
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

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList,(const Char *)&nmcv_0,9,(const Char *)&sgcv_0,27,1,0x8,1}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractStmt, allMapToUnnamed), 0,(const Char *)&nmiv_0,15,(const Char *)&sgiv_0,26,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractStmt, boxesPointingToThis), 0,(const Char *)&nmiv_1,19,(const Char *)&sgiv_1,27,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractStmt, valueBoxes), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,27,1,0x0,3}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())clinit__gotOf,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,3,
	1,0x8,16,xt_clinit__gotOf},
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
} inr_ca_mcgill_sable_soot_jimple_AbstractStmt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractStmt cl_ca_mcgill_sable_soot_jimple_AbstractStmt = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractStmt),
    26,
    1,
    3,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractStmt,
    st_ca_mcgill_sable_soot_jimple_AbstractStmt,
    clinit__gotOf,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractStmt,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__hMKFf,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,15,xt_init__hMKFf},
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
	(const Char *)&sgim_8,20,1,0x8001,10,xt_toString__bGkxo},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_abstract, 0,(const Char *)&nmim_12,11,
	(const Char *)&sgim_12,29,1,0x8401,0,xt_getUseBoxes__7OAKy},
	{TMIT_abstract, 0,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,29,1,0x8401,1,xt_getDefBoxes__RUuwq},
	{TMIT_abstract, 0,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,29,1,0x8401,2,xt_getUnitBoxes__i04Wf},
	{TMIT_native_code, getBoxesPointingToThis__bVioB,(const Char *)&nmim_15,22,
	(const Char *)&sgim_15,29,1,0x8001,3,xt_getBoxesPointingToThis__bVioB},
	{TMIT_native_code, getUseAndDefBoxes__NUDkS,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,29,1,0x8001,4,xt_getUseAndDefBoxes__NUDkS},
	{TMIT_native_code, apply_S_jAfvv,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,1,0x8001,5,xt_apply_S_jAfvv},
	{TMIT_native_code, toBriefString__DAagS,(const Char *)&nmim_18,13,
	(const Char *)&sgim_18,20,1,0x8001,6,xt_toBriefString__DAagS},
	{TMIT_native_code, toBriefString_M_BE8wY,(const Char *)&nmim_19,13,
	(const Char *)&sgim_19,46,1,0x8001,7,xt_toBriefString_M_BE8wY},
	{TMIT_native_code, toBriefString_S_L6Ylr,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,38,1,0x8001,8,xt_toBriefString_S_L6Ylr},
	{TMIT_native_code, toBriefString_MS_DJBjT,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,64,1,0x8001,9,xt_toBriefString_MS_DJBjT},
	{TMIT_native_code, toString_M_bLEyr,(const Char *)&nmim_22,8,
	(const Char *)&sgim_22,46,1,0x8001,11,xt_toString_M_bLEyr},
	{TMIT_native_code, toString_S_PAGga,(const Char *)&nmim_23,8,
	(const Char *)&sgim_23,38,1,0x8001,12,xt_toString_S_PAGga},
	{TMIT_native_code, toString_MS_hw6rw,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,64,1,0x8001,13,xt_toString_MS_hw6rw},
	{TMIT_abstract, 0,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,65,1,0x404,14,xt_toString_zMS_db773},
    } /* end of methodsigs */
};


/*M getUseBoxes__7OAKy: ca.mcgill.sable.soot.jimple.AbstractStmt.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__7OAKy[] = { 0 };

/*M getDefBoxes__RUuwq: ca.mcgill.sable.soot.jimple.AbstractStmt.getDefBoxes()Lca/mcgill/sable/util/List; */

Class xt_getDefBoxes__RUuwq[] = { 0 };

/*M getUnitBoxes__i04Wf: ca.mcgill.sable.soot.jimple.AbstractStmt.getUnitBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUnitBoxes__i04Wf[] = { 0 };

/*M getBoxesPointingToThis__bVioB: ca.mcgill.sable.soot.jimple.AbstractStmt.getBoxesPointingToThis()Lca/mcgill/sable/util/List; */

Class xt_getBoxesPointingToThis__bVioB[] = { 0 };

Object getBoxesPointingToThis__bVioB(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->boxesPointingToThis;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseAndDefBoxes__NUDkS: ca.mcgill.sable.soot.jimple.AbstractStmt.getUseAndDefBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseAndDefBoxes__NUDkS[] = { 0 };

Object getUseAndDefBoxes__NUDkS(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->valueBoxes;
	if (a1 != 0)
		GOTO(4,L1);
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->valueBoxes = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->valueBoxes;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a2)->class->M.
		getUseBoxes__7OAKy.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->valueBoxes;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a2)->class->M.
		getDefBoxes__RUuwq.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a2)->valueBoxes;
	a2 = unmodifiableList_L_a5S8d(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->valueBoxes = a2;
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->valueBoxes;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_jAfvv: ca.mcgill.sable.soot.jimple.AbstractStmt.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_jAfvv[] = { 0 };

Void apply_S_jAfvv(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M toBriefString__DAagS: ca.mcgill.sable.soot.jimple.AbstractStmt.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__DAagS[] = { 0 };

Object toBriefString__DAagS(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	i2 = 1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a3)->allMapToUnnamed;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStmt[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString_M_BE8wY: ca.mcgill.sable.soot.jimple.AbstractStmt.toBriefString(Lca/mcgill/sable/util/Map;)Ljava/lang/String; */

Class xt_toBriefString_M_BE8wY[] = { 0 };

Object toBriefString_M_BE8wY(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	i2 = 1;
	a3 = av1;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStmt[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString_S_L6Ylr: ca.mcgill.sable.soot.jimple.AbstractStmt.toBriefString(Ljava/lang/String;)Ljava/lang/String; */

Class xt_toBriefString_S_L6Ylr[] = { 0 };

Object toBriefString_S_L6Ylr(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	i2 = 1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a3)->allMapToUnnamed;
	a4 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString_MS_DJBjT: ca.mcgill.sable.soot.jimple.AbstractStmt.toBriefString(Lca/mcgill/sable/util/Map;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toBriefString_MS_DJBjT[] = { 0 };

Object toBriefString_MS_DJBjT(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	i2 = 1;
	a3 = av1;
	a4 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__bGkxo: ca.mcgill.sable.soot.jimple.AbstractStmt.toString()Ljava/lang/String; */

Class xt_toString__bGkxo[] = { 0 };

Object toString__bGkxo(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	i2 = 0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a3)->allMapToUnnamed;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStmt[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_M_bLEyr: ca.mcgill.sable.soot.jimple.AbstractStmt.toString(Lca/mcgill/sable/util/Map;)Ljava/lang/String; */

Class xt_toString_M_bLEyr[] = { 0 };

Object toString_M_bLEyr(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	i2 = 0;
	a3 = av1;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStmt[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_S_PAGga: ca.mcgill.sable.soot.jimple.AbstractStmt.toString(Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_S_PAGga[] = { 0 };

Object toString_S_PAGga(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	i2 = 0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a3)->allMapToUnnamed;
	a4 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_MS_hw6rw: ca.mcgill.sable.soot.jimple.AbstractStmt.toString(Lca/mcgill/sable/util/Map;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_MS_hw6rw[] = { 0 };

Object toString_MS_hw6rw(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	i2 = 0;
	a3 = av1;
	a4 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->class->M.
		toString_zMS_db773.f(a1,i2,a3,a4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_zMS_db773: ca.mcgill.sable.soot.jimple.AbstractStmt.toString(ZLca/mcgill/sable/util/Map;Ljava/lang/String;)Ljava/lang/String; */

Class xt_toString_zMS_db773[] = { 0 };

/*M init__hMKFf: ca.mcgill.sable.soot.jimple.AbstractStmt.<init>()V */

Class xt_init__hMKFf[] = { 0 };

Void init__hMKFf(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_QDgNO.C);
	a3 = a2;
	a4 = av0;
	a5 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractStmt[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_AO_KY3MU(a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->allMapToUnnamed = a2;
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
	((struct in_ca_mcgill_sable_soot_jimple_AbstractStmt*)a1)->boxesPointingToThis = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__gotOf: ca.mcgill.sable.soot.jimple.AbstractStmt.<clinit>()V */

Class xt_clinit__gotOf[] = { 0 };

Void clinit__gotOf(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	a1 = unmodifiableList_L_a5S8d(a1);
	cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractStmt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'S','t','m','t','<','u','n','n','a','m','e','d','>'};

const void *st_ca_mcgill_sable_soot_jimple_AbstractStmt[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractStmt+40,	/* 0. ca.mcgill.sable.soot.jimple.AbstractStmt */
    ch_ca_mcgill_sable_soot_jimple_AbstractStmt+40,	/* 1.  */
    ch_ca_mcgill_sable_soot_jimple_AbstractStmt+49,	/* 2. <unnamed> */
    0};
