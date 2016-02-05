/*  ca_mcgill_sable_soot_jimple_JasminClass$1.c -- from Java class ca.mcgill.sable.soot.jimple.JasminClass$1  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$1.h"
#include "ca_mcgill_sable_soot_TypeSwitch.h"
#include "ca_mcgill_sable_util_Switch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$10.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$11.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$12.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$13.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$14.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$15.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$16.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$17.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$18.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$19.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$2.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$20.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$21.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$22.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$23.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$24.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$25.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$26.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$27.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$28.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$29.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$3.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$30.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$31.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$32.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$33.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$34.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$35.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$36.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$37.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$4.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$5.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$6.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$7.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$8.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$9.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_damqt.C,
    &cl_ca_mcgill_sable_soot_TypeSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Switch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_jimple_JasminClass.C,
    &cl_ca_mcgill_sable_soot_jimp_1Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_2Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_3Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_4Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_5Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_6Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_7Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_8Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_9Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_aGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_eamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_GGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_HGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_IGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_JGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_KGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_LGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_MGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_NGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_OGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_PGvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_famqt.C,
    &cl_ca_mcgill_sable_soot_jimp_lHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_mHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_nHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_oHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_pHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_qHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_rHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_sHvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_gamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_hamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_iamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_jamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_kamqt.C,
    &cl_ca_mcgill_sable_soot_jimp_lamqt.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_damqt[];
extern const void *st_ca_mcgill_sable_soot_jimp_damqt[];
extern Class xt_caseBooleanType_B_DYoY8[];
extern Class xt_caseByteType_B_NphY7[];
extern Class xt_caseCharType_C_ZlJGo[];
extern Class xt_caseDoubleType_D_REV3k[];
extern Class xt_caseFloatType_F_zmuqt[];
extern Class xt_caseIntType_I_LxQOi[];
extern Class xt_caseLongType_L_b0UIc[];
extern Class xt_caseShortType_S_LgKDA[];
extern Class xt_defaultCase_T_A30af[];
extern Class xt_caseArrayType_A_3j32l[];
extern Class xt_caseRefType_R_ThWsg[];
extern Class xt_caseVoidType_V_TkLXm[];
extern Class xt_init_J_hkn6G[];

#define HASHMASK 0x0
/*  0.  489f8e6f  (0)  toString  */
static const struct ihash htable[2] = {
    1218416239, &cl_ca_mcgill_sable_soot_jimp_damqt.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(41) nmchars = {&acl_char, 0, 41, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','1'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 41 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
't','h','i','s','$','0'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','a','s','m','i','n','C',
'l','a','s','s',';'};
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
'c','a','s','e','A','r','r','a','y','T','y','p','e'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','A','r','r','a','y','T','y','p','e',';',')','V'};
static const Char nmim_13[] = {
'c','a','s','e','B','o','o','l','e','a','n','T','y','p','e'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','o','l','e','a','n','T','y','p','e',';',')',
'V'};
static const Char nmim_14[] = {
'c','a','s','e','B','y','t','e','T','y','p','e'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','y','t','e','T','y','p','e',';',')','V'};
static const Char nmim_15[] = {
'c','a','s','e','C','h','a','r','T','y','p','e'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','C','h','a','r','T','y','p','e',';',')','V'};
static const Char nmim_16[] = {
'c','a','s','e','D','o','u','b','l','e','T','y','p','e'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','D','o','u','b','l','e','T','y','p','e',';',')','V'};
static const Char nmim_17[] = {
'c','a','s','e','F','l','o','a','t','T','y','p','e'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','F','l','o','a','t','T','y','p','e',';',')','V'};
static const Char nmim_18[] = {
'c','a','s','e','I','n','t','T','y','p','e'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','I','n','t','T','y','p','e',';',')','V'};
static const Char nmim_19[] = {
'c','a','s','e','L','o','n','g','T','y','p','e'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','L','o','n','g','T','y','p','e',';',')','V'};
static const Char nmim_20[] = {
'c','a','s','e','R','e','f','T','y','p','e'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','R','e','f','T','y','p','e',';',')','V'};
static const Char nmim_21[] = {
'c','a','s','e','S','h','o','r','t','T','y','p','e'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','h','o','r','t','T','y','p','e',';',')','V'};
static const Char nmim_22[] = {
'c','a','s','e','S','t','m','t','A','d','d','r','e','s','s','T','y','p',
'e'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','t','m','t','A','d','d','r','e','s','s','T','y',
'p','e',';',')','V'};
static const Char nmim_23[] = {
'c','a','s','e','U','n','k','n','o','w','n','T','y','p','e'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','U','n','k','n','o','w','n','T','y','p','e',';',')',
'V'};
static const Char nmim_24[] = {
'c','a','s','e','V','o','i','d','T','y','p','e'};
static const Char sgim_24[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','V','o','i','d','T','y','p','e',';',')','V'};
static const Char nmim_25[] = {
'c','a','s','e','N','u','l','l','T','y','p','e'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','N','u','l','l','T','y','p','e',';',')','V'};
static const Char nmim_26[] = {
'c','a','s','e','E','r','r','o','n','e','o','u','s','T','y','p','e'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','E','r','r','o','n','e','o','u','s','T','y','p','e',
';',')','V'};
static const Char nmim_27[] = {
'd','e','f','a','u','l','t','C','a','s','e'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_28[] = {
'c','a','s','e','D','e','f','a','u','l','t'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_29[] = {
's','e','t','R','e','s','u','l','t'};
static const Char sgim_29[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_30[] = {
'g','e','t','R','e','s','u','l','t'};
static const Char sgim_30[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_31[] = {
'<','i','n','i','t','>'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','a','s','m','i','n',
'C','l','a','s','s',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_damqt, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_damqt, this0_oYxUV), 0,(const Char *)&nmiv_1,6,(const Char *)&sgiv_1,41,1,0x12,0}, 
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
} inr_ca_mcgill_sable_soot_jimp_damqt = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_damqt.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_damqt cl_ca_mcgill_sable_soot_jimp_damqt = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_damqt),
    32,
    0,
    2,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    42, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_damqt,
    st_ca_mcgill_sable_soot_jimp_damqt,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_damqt,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__hEn3f,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,19,0},
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
	{TMIT_native_code, caseArrayType_A_3j32l,(const Char *)&nmim_12,13,
	(const Char *)&sgim_12,35,1,0x1,9,xt_caseArrayType_A_3j32l},
	{TMIT_native_code, caseBooleanType_B_DYoY8,(const Char *)&nmim_13,15,
	(const Char *)&sgim_13,37,1,0x1,0,xt_caseBooleanType_B_DYoY8},
	{TMIT_native_code, caseByteType_B_NphY7,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,34,1,0x1,1,xt_caseByteType_B_NphY7},
	{TMIT_native_code, caseCharType_C_ZlJGo,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,34,1,0x1,2,xt_caseCharType_C_ZlJGo},
	{TMIT_native_code, caseDoubleType_D_REV3k,(const Char *)&nmim_16,14,
	(const Char *)&sgim_16,36,1,0x1,3,xt_caseDoubleType_D_REV3k},
	{TMIT_native_code, caseFloatType_F_zmuqt,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,35,1,0x1,4,xt_caseFloatType_F_zmuqt},
	{TMIT_native_code, caseIntType_I_LxQOi,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,33,1,0x1,5,xt_caseIntType_I_LxQOi},
	{TMIT_native_code, caseLongType_L_b0UIc,(const Char *)&nmim_19,12,
	(const Char *)&sgim_19,34,1,0x1,6,xt_caseLongType_L_b0UIc},
	{TMIT_native_code, caseRefType_R_ThWsg,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,33,1,0x1,10,xt_caseRefType_R_ThWsg},
	{TMIT_native_code, caseShortType_S_LgKDA,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,35,1,0x1,7,xt_caseShortType_S_LgKDA},
	{TMIT_native_code, caseStmtAddressType_S_6w2qx,(const Char *)&nmim_22,19,
	(const Char *)&sgim_22,41,0,0x1,10,0},
	{TMIT_native_code, caseUnknownType_U_Mn0wN,(const Char *)&nmim_23,15,
	(const Char *)&sgim_23,37,0,0x1,11,0},
	{TMIT_native_code, caseVoidType_V_TkLXm,(const Char *)&nmim_24,12,
	(const Char *)&sgim_24,34,1,0x1,11,xt_caseVoidType_V_TkLXm},
	{TMIT_native_code, caseNullType_N_ipySa,(const Char *)&nmim_25,12,
	(const Char *)&sgim_25,34,0,0x1,13,0},
	{TMIT_native_code, caseErroneousType_E_Qb6aF,(const Char *)&nmim_26,17,
	(const Char *)&sgim_26,39,0,0x1,14,0},
	{TMIT_native_code, defaultCase_T_A30af,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,30,1,0x1,8,xt_defaultCase_T_A30af},
	{TMIT_native_code, caseDefault_T_Hrrk6,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,30,0,0x1,16,0},
	{TMIT_native_code, setResult_O_mipzV,(const Char *)&nmim_29,9,
	(const Char *)&sgim_29,21,0,0x1,17,0},
	{TMIT_native_code, getResult__q3qpX,(const Char *)&nmim_30,9,
	(const Char *)&sgim_30,20,0,0x1,18,0},
	{TMIT_native_code, init_J_hkn6G,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,44,1,0x0,12,xt_init_J_hkn6G},
    } /* end of methodsigs */
};


/*M caseBooleanType_B_DYoY8: ca.mcgill.sable.soot.jimple.JasminClass$1.caseBooleanType(Lca/mcgill/sable/soot/BooleanType;)V */

Class xt_caseBooleanType_B_DYoY8[] = { 0 };

Void caseBooleanType_B_DYoY8(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseByteType_B_NphY7: ca.mcgill.sable.soot.jimple.JasminClass$1.caseByteType(Lca/mcgill/sable/soot/ByteType;)V */

Class xt_caseByteType_B_NphY7[] = { 0 };

Void caseByteType_B_NphY7(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseCharType_C_ZlJGo: ca.mcgill.sable.soot.jimple.JasminClass$1.caseCharType(Lca/mcgill/sable/soot/CharType;)V */

Class xt_caseCharType_C_ZlJGo[] = { 0 };

Void caseCharType_C_ZlJGo(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseDoubleType_D_REV3k: ca.mcgill.sable.soot.jimple.JasminClass$1.caseDoubleType(Lca/mcgill/sable/soot/DoubleType;)V */

Class xt_caseDoubleType_D_REV3k[] = { 0 };

Void caseDoubleType_D_REV3k(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseFloatType_F_zmuqt: ca.mcgill.sable.soot.jimple.JasminClass$1.caseFloatType(Lca/mcgill/sable/soot/FloatType;)V */

Class xt_caseFloatType_F_zmuqt[] = { 0 };

Void caseFloatType_F_zmuqt(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIntType_I_LxQOi: ca.mcgill.sable.soot.jimple.JasminClass$1.caseIntType(Lca/mcgill/sable/soot/IntType;)V */

Class xt_caseIntType_I_LxQOi[] = { 0 };

Void caseIntType_I_LxQOi(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLongType_L_b0UIc: ca.mcgill.sable.soot.jimple.JasminClass$1.caseLongType(Lca/mcgill/sable/soot/LongType;)V */

Class xt_caseLongType_L_b0UIc[] = { 0 };

Void caseLongType_L_b0UIc(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseShortType_S_LgKDA: ca.mcgill.sable.soot.jimple.JasminClass$1.caseShortType(Lca/mcgill/sable/soot/ShortType;)V */

Class xt_caseShortType_S_LgKDA[] = { 0 };

Void caseShortType_S_LgKDA(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_T_A30af: ca.mcgill.sable.soot.jimple.JasminClass$1.defaultCase(Lca/mcgill/sable/soot/Type;)V */

Class xt_defaultCase_T_A30af[] = { 0 };

Void defaultCase_T_A30af(Object p0, Object p1)
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
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[9];
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

/*M caseArrayType_A_3j32l: ca.mcgill.sable.soot.jimple.JasminClass$1.caseArrayType(Lca/mcgill/sable/soot/ArrayType;)V */

Class xt_caseArrayType_A_3j32l[] = { 0 };

Void caseArrayType_A_3j32l(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(10,L2);

L1:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->numDimensions;
	if (i1 < i2)
		GOBACK(28,L1);
	a1 = av0;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_StringBuffer*)a4)->class->M.
		toString__GjBaS.f(a4);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_damqt*)a3)->this0_oYxUV;
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a4)->baseType;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a3)->class->M.
		jasminDescriptorOf_T_ypb3b.f(a3,a4);
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
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRefType_R_ThWsg: ca.mcgill.sable.soot.jimple.JasminClass$1.caseRefType(Lca/mcgill/sable/soot/RefType;)V */

Class xt_caseRefType_R_ThWsg[] = { 0 };

Void caseRefType_R_ThWsg(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[11];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_RefType*)a3)->className;
	i4 = 46;
	i5 = 47;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_String*)a3)->class->M.
		replace_cc_AsLcG.f(a3,i4,i5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[12];
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
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseVoidType_V_TkLXm: ca.mcgill.sable.soot.jimple.JasminClass$1.caseVoidType(Lca/mcgill/sable/soot/VoidType;)V */

Class xt_caseVoidType_V_TkLXm[] = { 0 };

Void caseVoidType_V_TkLXm(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_damqt[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_TypeSwitch*)a1)->class->M.
		setResult_O_mipzV.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_J_hkn6G: ca.mcgill.sable.soot.jimple.JasminClass$1.<init>(Lca/mcgill/sable/soot/jimple/JasminClass;)V */

Class xt_init_J_hkn6G[] = { 0 };

Void init_J_hkn6G(Object p0, Object p1)
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
	init__hEn3f(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_damqt*)a1)->this0_oYxUV = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_damqt[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','1','Z','B','C','D','F','I','J','S','I','n','v','a','l',
'i','d',' ','t','y','p','e',':',' ','[','L',';','V'};

const void *st_ca_mcgill_sable_soot_jimp_damqt[] = {
    ch_ca_mcgill_sable_soot_jimp_damqt+41,	/* 0. ca.mcgill.sable.soot.jimple.JasminClass$ */
    ch_ca_mcgill_sable_soot_jimp_damqt+42,	/* 1. Z */
    ch_ca_mcgill_sable_soot_jimp_damqt+43,	/* 2. B */
    ch_ca_mcgill_sable_soot_jimp_damqt+44,	/* 3. C */
    ch_ca_mcgill_sable_soot_jimp_damqt+45,	/* 4. D */
    ch_ca_mcgill_sable_soot_jimp_damqt+46,	/* 5. F */
    ch_ca_mcgill_sable_soot_jimp_damqt+47,	/* 6. I */
    ch_ca_mcgill_sable_soot_jimp_damqt+48,	/* 7. J */
    ch_ca_mcgill_sable_soot_jimp_damqt+49,	/* 8. S */
    ch_ca_mcgill_sable_soot_jimp_damqt+63,	/* 9. Invalid type:  */
    ch_ca_mcgill_sable_soot_jimp_damqt+64,	/* 10. [ */
    ch_ca_mcgill_sable_soot_jimp_damqt+65,	/* 11. L */
    ch_ca_mcgill_sable_soot_jimp_damqt+66,	/* 12. ; */
    ch_ca_mcgill_sable_soot_jimp_damqt+67,	/* 13. V */
    0};
