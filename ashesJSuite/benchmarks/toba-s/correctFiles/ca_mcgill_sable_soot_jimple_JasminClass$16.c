/*  ca_mcgill_sable_soot_jimple_JasminClass$16.c -- from Java class ca.mcgill.sable.soot.jimple.JasminClass$16  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$16.h"
#include "ca_mcgill_sable_soot_TypeSwitch.h"
#include "ca_mcgill_sable_util_Switch.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$1.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$10.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$11.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$12.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$13.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$14.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass$15.h"
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
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_7Gvs0.C,
    &cl_ca_mcgill_sable_soot_TypeSwitch.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Switch.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimple_JasminClass.C,
    &cl_ca_mcgill_sable_soot_jimp_damqt.C,
    &cl_ca_mcgill_sable_soot_jimp_1Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_2Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_3Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_4Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_5Gvs0.C,
    &cl_ca_mcgill_sable_soot_jimp_6Gvs0.C,
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
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_7Gvs0[];
extern const void *st_ca_mcgill_sable_soot_jimp_7Gvs0[];
extern Class xt_caseArrayType_A_X1OrO[];
extern Class xt_defaultCase_T_2kXTr[];
extern Class xt_caseDoubleType_D_VsePZ[];
extern Class xt_caseFloatType_F_t5fQW[];
extern Class xt_caseIntType_I_bND9r[];
extern Class xt_caseLongType_L_1VZpp[];
extern Class xt_caseRefType_R_flu8I[];
extern Class xt_caseNullType_N_ZwifS[];
extern Class xt_init_iJL_AK8Ef[];

#define HASHMASK 0x0
/*  0.  489f8e6f  (0)  toString  */
static const struct ihash htable[2] = {
    1218416239, &cl_ca_mcgill_sable_soot_jimp_7Gvs0.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','1','6'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmiv_0[] = {
'r','e','s','u','l','t'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
'v','a','l','$','v','A','l','i','a','s'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';'};
static const Char nmiv_2[] = {
't','h','i','s','$','0'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','a','s','m','i','n','C',
'l','a','s','s',';'};
static const Char nmiv_3[] = {
'v','a','l','$','s','l','o','t'};
static const Char sgiv_3[] = {
'I'};
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
'(','I','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','J','a','s','m','i',
'n','C','l','a','s','s',';','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'L','o','c','a','l',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_7Gvs0, result), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,18,0,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_7Gvs0, valvAlias_fEEK9), 0,(const Char *)&nmiv_1,10,(const Char *)&sgiv_1,35,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_7Gvs0, this0_oYxUV), 0,(const Char *)&nmiv_2,6,(const Char *)&sgiv_2,41,1,0x12,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_7Gvs0, valslot_fJpAd), 0,(const Char *)&nmiv_3,8,(const Char *)&sgiv_3,1,1,0x12,2}, 
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
} inr_ca_mcgill_sable_soot_jimp_7Gvs0 = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_7Gvs0.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_7Gvs0 cl_ca_mcgill_sable_soot_jimp_7Gvs0 = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_7Gvs0),
    32,
    0,
    4,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    41, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_7Gvs0,
    st_ca_mcgill_sable_soot_jimp_7Gvs0,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x30,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_7Gvs0,
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
	{TMIT_native_code, caseArrayType_A_X1OrO,(const Char *)&nmim_12,13,
	(const Char *)&sgim_12,35,1,0x1,0,xt_caseArrayType_A_X1OrO},
	{TMIT_native_code, caseBooleanType_B_OUFIT,(const Char *)&nmim_13,15,
	(const Char *)&sgim_13,37,0,0x1,1,0},
	{TMIT_native_code, caseByteType_B_WcDiD,(const Char *)&nmim_14,12,
	(const Char *)&sgim_14,34,0,0x1,2,0},
	{TMIT_native_code, caseCharType_C_8951U,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,34,0,0x1,3,0},
	{TMIT_native_code, caseDoubleType_D_VsePZ,(const Char *)&nmim_16,14,
	(const Char *)&sgim_16,36,1,0x1,2,xt_caseDoubleType_D_VsePZ},
	{TMIT_native_code, caseFloatType_F_t5fQW,(const Char *)&nmim_17,13,
	(const Char *)&sgim_17,35,1,0x1,3,xt_caseFloatType_F_t5fQW},
	{TMIT_native_code, caseIntType_I_bND9r,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,33,1,0x1,4,xt_caseIntType_I_bND9r},
	{TMIT_native_code, caseLongType_L_1VZpp,(const Char *)&nmim_19,12,
	(const Char *)&sgim_19,34,1,0x1,5,xt_caseLongType_L_1VZpp},
	{TMIT_native_code, caseRefType_R_flu8I,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,33,1,0x1,6,xt_caseRefType_R_flu8I},
	{TMIT_native_code, caseShortType_S_2MJrs,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,35,0,0x1,9,0},
	{TMIT_native_code, caseStmtAddressType_S_6w2qx,(const Char *)&nmim_22,19,
	(const Char *)&sgim_22,41,0,0x1,10,0},
	{TMIT_native_code, caseUnknownType_U_Mn0wN,(const Char *)&nmim_23,15,
	(const Char *)&sgim_23,37,0,0x1,11,0},
	{TMIT_native_code, caseVoidType_V_287iS,(const Char *)&nmim_24,12,
	(const Char *)&sgim_24,34,0,0x1,12,0},
	{TMIT_native_code, caseNullType_N_ZwifS,(const Char *)&nmim_25,12,
	(const Char *)&sgim_25,34,1,0x1,7,xt_caseNullType_N_ZwifS},
	{TMIT_native_code, caseErroneousType_E_Qb6aF,(const Char *)&nmim_26,17,
	(const Char *)&sgim_26,39,0,0x1,14,0},
	{TMIT_native_code, defaultCase_T_2kXTr,(const Char *)&nmim_27,11,
	(const Char *)&sgim_27,30,1,0x1,1,xt_defaultCase_T_2kXTr},
	{TMIT_native_code, caseDefault_T_Hrrk6,(const Char *)&nmim_28,11,
	(const Char *)&sgim_28,30,0,0x1,16,0},
	{TMIT_native_code, setResult_O_mipzV,(const Char *)&nmim_29,9,
	(const Char *)&sgim_29,21,0,0x1,17,0},
	{TMIT_native_code, getResult__q3qpX,(const Char *)&nmim_30,9,
	(const Char *)&sgim_30,20,0,0x1,18,0},
	{TMIT_native_code, init_iJL_AK8Ef,(const Char *)&nmim_31,6,
	(const Char *)&sgim_31,80,1,0x0,8,xt_init_iJL_AK8Ef},
    } /* end of methodsigs */
};


/*M caseArrayType_A_X1OrO: ca.mcgill.sable.soot.jimple.JasminClass$16.caseArrayType(Lca/mcgill/sable/soot/ArrayType;)V */

Class xt_caseArrayType_A_X1OrO[] = { 0 };

Void caseArrayType_A_X1OrO(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	if (i1 < 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	i2 = 3;
	if (i1 > i2)
		GOTO(12,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M defaultCase_T_2kXTr: ca.mcgill.sable.soot.jimple.JasminClass$16.defaultCase(Lca/mcgill/sable/soot/Type;)V */

Class xt_defaultCase_T_2kXTr[] = { 0 };

Void defaultCase_T_2kXTr(Object p0, Object p1)
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
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[3];
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

/*M caseDoubleType_D_VsePZ: ca.mcgill.sable.soot.jimple.JasminClass$16.caseDoubleType(Lca/mcgill/sable/soot/DoubleType;)V */

Class xt_caseDoubleType_D_VsePZ[] = { 0 };

Void caseDoubleType_D_VsePZ(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	if (i1 < 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	i2 = 3;
	if (i1 > i2)
		GOTO(12,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseFloatType_F_t5fQW: ca.mcgill.sable.soot.jimple.JasminClass$16.caseFloatType(Lca/mcgill/sable/soot/FloatType;)V */

Class xt_caseFloatType_F_t5fQW[] = { 0 };

Void caseFloatType_F_t5fQW(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	if (i1 < 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	i2 = 3;
	if (i1 > i2)
		GOTO(12,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[6];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[7];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseIntType_I_bND9r: ca.mcgill.sable.soot.jimple.JasminClass$16.caseIntType(Lca/mcgill/sable/soot/IntType;)V */

Class xt_caseIntType_I_bND9r[] = { 0 };

Void caseIntType_I_bND9r(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valvAlias_fEEK9;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a2)->plusPlusHolder;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		equals_O_h7WVx.f(a1,a2);
	if (i1 == 0)
		GOTO(14,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->plusPlusState;
	switch (i1) {
		case 0: 	GOTO(24,L1);
		case 1: 	GOTO(24,L3);
		default:	GOTO(24,L4);
	}

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->plusPlusState = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a2)->plusPlusIncrementer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitStmt_S_XhuuM.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->plusPlusHeight;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a2)->currentStackHeight;
	i1 = i1 - i2;
	i2 = 1;
	i1 = i1 + i2;
	iv2 = i1;
	i1 = iv2;
	if (i1 <= 0)
		GOTO(89,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->code;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a2)->plusPlusPlace;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[8];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	i4 = iv2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_i_ZQIqx.f(a3,i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,784781002)->f)(a1,i2,a3);
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->plusPlusHolder = a2;
	return;

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a2)->currentStackHeight;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->plusPlusHeight = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a2)->plusPlusValue;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emitValue_V_7QbM9.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a2)->code;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = (*(Int(*)())findinterface(a2,-1646441547)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->plusPlusPlace = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[9];
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	if (i1 < 0)
		GOTO(199,L5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	i2 = 3;
	if (i1 > i2)
		GOTO(207,L5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[10];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[11];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseLongType_L_1VZpp: ca.mcgill.sable.soot.jimple.JasminClass$16.caseLongType(Lca/mcgill/sable/soot/LongType;)V */

Class xt_caseLongType_L_1VZpp[] = { 0 };

Void caseLongType_L_1VZpp(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	if (i1 < 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	i2 = 3;
	if (i1 > i2)
		GOTO(12,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[12];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[13];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseRefType_R_flu8I: ca.mcgill.sable.soot.jimple.JasminClass$16.caseRefType(Lca/mcgill/sable/soot/RefType;)V */

Class xt_caseRefType_R_flu8I[] = { 0 };

Void caseRefType_R_flu8I(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	if (i1 < 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	i2 = 3;
	if (i1 > i2)
		GOTO(12,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M caseNullType_N_ZwifS: ca.mcgill.sable.soot.jimple.JasminClass$16.caseNullType(Lca/mcgill/sable/soot/NullType;)V */

Class xt_caseNullType_N_ZwifS[] = { 0 };

Void caseNullType_N_ZwifS(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	if (i1 < 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd;
	i2 = 3;
	if (i1 > i2)
		GOTO(12,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimp_7Gvs0[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a3)->valslot_fJpAd;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	i3 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		emit_Si_TYf4B.f(a1,a2,i3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_iJL_AK8Ef: ca.mcgill.sable.soot.jimple.JasminClass$16.<init>(ILca/mcgill/sable/soot/jimple/JasminClass;Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_init_iJL_AK8Ef[] = { 0 };

Void init_iJL_AK8Ef(Object p0, Int p1, Object p2, Object p3)
{
Object a0, a1, a2;
Object av0, av2, av3;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__hEn3f(a1);
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valslot_fJpAd = i2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_7Gvs0*)a1)->valvAlias_fEEK9 = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_7Gvs0[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','a','s','m','i','n','C','l',
'a','s','s','$','1','6','a','l','o','a','d','_','a','l','o','a','d',' ',
'i','n','v','a','l','i','d',' ','l','o','c','a','l',' ','t','y','p','e',
' ','t','o',' ','l','o','a','d','d','l','o','a','d','_','d','l','o','a',
'd',' ','f','l','o','a','d','_','f','l','o','a','d',' ',' ',' ',' ',' ',
'd','u','p','_','x','d','u','p','i','l','o','a','d','_','i','l','o','a',
'd',' ','l','l','o','a','d','_','l','l','o','a','d',' '};

const void *st_ca_mcgill_sable_soot_jimp_7Gvs0[] = {
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+42,	/* 0. ca.mcgill.sable.soot.jimple.JasminClass$ */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+48,	/* 1. aload_ */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+54,	/* 2. aload  */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+80,	/* 3. invalid local type to load */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+86,	/* 4. dload_ */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+92,	/* 5. dload  */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+98,	/* 6. fload_ */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+104,	/* 7. fload  */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+113,	/* 8.     dup_x */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+116,	/* 9. dup */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+122,	/* 10. iload_ */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+128,	/* 11. iload  */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+134,	/* 12. lload_ */
    ch_ca_mcgill_sable_soot_jimp_7Gvs0+140,	/* 13. lload  */
    0};
