/*  ca_mcgill_sable_soot_coffi_Util.c -- from Java class ca.mcgill.sable.soot.coffi.Util  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Util.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_BaseType.h"
#include "ca_mcgill_sable_soot_BooleanType.h"
#include "ca_mcgill_sable_soot_ByteType.h"
#include "ca_mcgill_sable_soot_CharType.h"
#include "ca_mcgill_sable_soot_DoubleType.h"
#include "ca_mcgill_sable_soot_FloatType.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_LongType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_ShortType.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootClassManager.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_UnknownType.h"
#include "ca_mcgill_sable_soot_VoidType.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "ca_mcgill_sable_soot_coffi_Double2ndHalfType.h"
#include "ca_mcgill_sable_soot_coffi_Exception_attribute.h"
#include "ca_mcgill_sable_soot_coffi_Long2ndHalfType.h"
#include "ca_mcgill_sable_soot_coffi_TypeStack.h"
#include "ca_mcgill_sable_soot_coffi_field_info.h"
#include "ca_mcgill_sable_soot_coffi_method_info.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_io_PrintStream.h"
#include "java_lang_Character.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Util.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_BaseType.C,
    &cl_ca_mcgill_sable_soot_BooleanType.C,
    &cl_ca_mcgill_sable_soot_ByteType.C,
    &cl_ca_mcgill_sable_soot_CharType.C,
    &cl_ca_mcgill_sable_soot_DoubleType.C,
    &cl_ca_mcgill_sable_soot_FloatType.C,
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_LongType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_ShortType.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootClassManager.C,
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_UnknownType.C,
    &cl_ca_mcgill_sable_soot_VoidType.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_ca_mcgill_sable_soot_coffi_Double2ndHalfType.C,
    &cl_ca_mcgill_sable_soot_coffi_Exception_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_Long2ndHalfType.C,
    &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
    &cl_ca_mcgill_sable_soot_coffi_field_info.C,
    &cl_ca_mcgill_sable_soot_coffi_method_info.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_Character.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Util[];
extern const void *st_ca_mcgill_sable_soot_coffi_Util[];
extern Class xt_setActiveClassManager_S_VrxOE[];
extern Class xt_resolveClass_S_9ue1K[];
extern Class xt_jimpleReturnTypeOfMeth_SS_ZCjrL[];
extern Class xt_jimpleTypesOfFieldOrMe_SS_ge0Lk[];
extern Class xt_jimpleTypeOfFieldDescr_SS_KN5DP[];
extern Class xt_resetEasyNames__Gg79C[];
extern Class xt_getNextEasyName__tcGkv[];
extern Class xt_setClassNameToAbbreviat_M_X0CH4[];
extern Class xt_getLocalForStackOp_JTi_G3Ubm[];
extern Class xt_getAbbreviationOfClassN_S_NSTHs[];
extern Class xt_getNormalizedClassName_S_Fd7jB[];
extern Class xt_getLocalCreatingIfNec_JST_eJj43[];
extern Class xt_getLocalForIndex_Ji_qYKCv[];
extern Class xt_init__9f3Ul[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_Util.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_Util.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Util.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_Util.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','U','t','i','l'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmcv_0[] = {
'c','l','a','s','s','N','a','m','e','T','o','A','b','b','r','e','v','i',
'a','t','i','o','n'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmcv_1[] = {
'c','l','a','s','s','M','a','n','a','g','e','r'};
static const Char sgcv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a','g',
'e','r',';'};
static const Char nmcv_2[] = {
'n','e','x','t','E','a','s','y','N','a','m','e','I','n','d','e','x'};
static const Char sgcv_2[] = {
'I'};
static const Char nmsm_0[] = {
's','e','t','A','c','t','i','v','e','C','l','a','s','s','M','a','n','a',
'g','e','r'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';',')','V'};
static const Char nmsm_1[] = {
'r','e','s','o','l','v','e','C','l','a','s','s'};
static const Char sgsm_1[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmsm_2[] = {
'j','i','m','p','l','e','R','e','t','u','r','n','T','y','p','e','O','f',
'M','e','t','h','o','d','D','e','s','c','r','i','p','t','o','r'};
static const Char sgsm_2[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmsm_3[] = {
'j','i','m','p','l','e','T','y','p','e','s','O','f','F','i','e','l','d',
'O','r','M','e','t','h','o','d','D','e','s','c','r','i','p','t','o','r'};
static const Char sgsm_3[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';',')','[','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmsm_4[] = {
'j','i','m','p','l','e','T','y','p','e','O','f','F','i','e','l','d','D',
'e','s','c','r','i','p','t','o','r'};
static const Char sgsm_4[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmsm_5[] = {
'r','e','s','e','t','E','a','s','y','N','a','m','e','s'};
static const Char sgsm_5[] = {
'(',')','V'};
static const Char nmsm_6[] = {
'g','e','t','N','e','x','t','E','a','s','y','N','a','m','e'};
static const Char sgsm_6[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmsm_7[] = {
's','e','t','C','l','a','s','s','N','a','m','e','T','o','A','b','b','r',
'e','v','i','a','t','i','o','n'};
static const Char sgsm_7[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','M','a','p',';',')','V'};
static const Char nmsm_8[] = {
'g','e','t','L','o','c','a','l','F','o','r','S','t','a','c','k','O','p'};
static const Char sgsm_8[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p',
'e','S','t','a','c','k',';','I',')','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l',
'e','/','L','o','c','a','l',';'};
static const Char nmsm_9[] = {
'g','e','t','A','b','b','r','e','v','i','a','t','i','o','n','O','f','C',
'l','a','s','s','N','a','m','e'};
static const Char sgsm_9[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmsm_10[] = {
'g','e','t','N','o','r','m','a','l','i','z','e','d','C','l','a','s','s',
'N','a','m','e'};
static const Char sgsm_10[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmsm_11[] = {
'g','e','t','L','o','c','a','l','C','r','e','a','t','i','n','g','I','f',
'N','e','c','e','s','s','a','r','y'};
static const Char sgsm_11[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';','L','j','a','v','a','/','l','a','n','g','/','S','t',
'r','i','n','g',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','T','y','p','e',';',')','L','c','a',
'/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t',
'/','j','i','m','p','l','e','/','L','o','c','a','l',';'};
static const Char nmsm_12[] = {
'g','e','t','L','o','c','a','l','F','o','r','I','n','d','e','x'};
static const Char sgsm_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';','I',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'L','o','c','a','l',';'};
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

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_Util.V.classNameToAbbreviation,(const Char *)&nmcv_0,23,(const Char *)&sgcv_0,26,1,0x8,0}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_Util.V.classManager,(const Char *)&nmcv_1,12,(const Char *)&sgcv_1,39,1,0x8,1}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_Util.V.nextEasyNameIndex,(const Char *)&nmcv_2,17,(const Char *)&sgcv_2,1,1,0x8,2}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())setActiveClassManager_S_VrxOE,
	(const Char *)&nmsm_0,21,(const Char *)&sgsm_0,42,
	1,0x8,0,xt_setActiveClassManager_S_VrxOE},
    {TMIT_native_code, (Void(*)())resolveClass_S_9ue1K,
	(const Char *)&nmsm_1,12,(const Char *)&sgsm_1,35,
	1,0x9,1,xt_resolveClass_S_9ue1K},
    {TMIT_native_code, (Void(*)())jimpleReturnTypeOfMeth_SS_ZCjrL,
	(const Char *)&nmsm_2,34,(const Char *)&sgsm_2,86,
	1,0x8,2,xt_jimpleReturnTypeOfMeth_SS_ZCjrL},
    {TMIT_native_code, (Void(*)())jimpleTypesOfFieldOrMe_SS_ge0Lk,
	(const Char *)&nmsm_3,36,(const Char *)&sgsm_3,87,
	1,0x8,3,xt_jimpleTypesOfFieldOrMe_SS_ge0Lk},
    {TMIT_native_code, (Void(*)())jimpleTypeOfFieldDescr_SS_KN5DP,
	(const Char *)&nmsm_4,27,(const Char *)&sgsm_4,86,
	1,0x8,4,xt_jimpleTypeOfFieldDescr_SS_KN5DP},
    {TMIT_native_code, (Void(*)())resetEasyNames__Gg79C,
	(const Char *)&nmsm_5,14,(const Char *)&sgsm_5,3,
	1,0x8,5,xt_resetEasyNames__Gg79C},
    {TMIT_native_code, (Void(*)())getNextEasyName__tcGkv,
	(const Char *)&nmsm_6,15,(const Char *)&sgsm_6,20,
	1,0x8,6,xt_getNextEasyName__tcGkv},
    {TMIT_native_code, (Void(*)())setClassNameToAbbreviat_M_X0CH4,
	(const Char *)&nmsm_7,26,(const Char *)&sgsm_7,29,
	1,0x8,7,xt_setClassNameToAbbreviat_M_X0CH4},
    {TMIT_native_code, (Void(*)())getLocalForStackOp_JTi_G3Ubm,
	(const Char *)&nmsm_8,18,(const Char *)&sgsm_8,116,
	1,0x8,8,xt_getLocalForStackOp_JTi_G3Ubm},
    {TMIT_native_code, (Void(*)())getAbbreviationOfClassN_S_NSTHs,
	(const Char *)&nmsm_9,26,(const Char *)&sgsm_9,38,
	1,0x8,9,xt_getAbbreviationOfClassN_S_NSTHs},
    {TMIT_native_code, (Void(*)())getNormalizedClassName_S_Fd7jB,
	(const Char *)&nmsm_10,22,(const Char *)&sgsm_10,38,
	1,0x8,10,xt_getNormalizedClassName_S_Fd7jB},
    {TMIT_native_code, (Void(*)())getLocalCreatingIfNec_JST_eJj43,
	(const Char *)&nmsm_11,27,(const Char *)&sgsm_11,122,
	1,0x8,11,xt_getLocalCreatingIfNec_JST_eJj43},
    {TMIT_native_code, (Void(*)())getLocalForIndex_Ji_qYKCv,
	(const Char *)&nmsm_12,16,(const Char *)&sgsm_12,78,
	1,0x8,12,xt_getLocalForIndex_Ji_qYKCv},
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
} inr_ca_mcgill_sable_soot_coffi_Util = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Util.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Util cl_ca_mcgill_sable_soot_coffi_Util = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Util),
    12,
    13,
    0,
    3,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    39, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Util,
    st_ca_mcgill_sable_soot_coffi_Util,
    0,
    init__9f3Ul,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Util,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__9f3Ul,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,13,xt_init__9f3Ul},
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
    } /* end of methodsigs */
};


/*M setActiveClassManager_S_VrxOE: ca.mcgill.sable.soot.coffi.Util.setActiveClassManager(Lca/mcgill/sable/soot/SootClassManager;)V */

Class xt_setActiveClassManager_S_VrxOE[] = { 0 };

Void setActiveClassManager_S_VrxOE(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	cl_ca_mcgill_sable_soot_coffi_Util.V.classManager = a1;
	return;

	/*NOTREACHED*/
}

/*M resolveClass_S_9ue1K: ca.mcgill.sable.soot.coffi.Util.resolveClass(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_resolveClass_S_9ue1K[] = { 0 };

Void resolveClass_S_9ue1K(Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1, av2, av4, av5, av6, av7, av8, av9, av10, av11, av12, av13, av14, av17,
    av19, av21, av22;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv3, iv6, iv7, iv8, iv9, iv11, iv15, iv16, iv18, iv20;
PROLOGUE;

	av0 = p1;

L0:	init_ca_mcgill_sable_soot_jimple_Main();
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose;
	if (i1 == 0)
		GOTO(3,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[2];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getManager__ukjHg.f(a1);
	av1 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_ClassFile.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_nTwMQ(a2,a3);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		loadClassFile__fX87x.f(a1);
	iv3 = i1;
	i1 = iv3;
	if (i1 != 0)
		GOTO(59,L2);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->this_class;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av5 = a1;
	a1 = av5;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av5 = a1;
	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		setName_S_Xh8gZ.f(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->access_flags;
	i3 = -33;
	i2 = i2 & i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		setModifiers_i_tRjn4.f(a1,i2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->super_class;
	if (i1 == 0)
		GOTO(136,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->super_class;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av7 = a1;
	a1 = av7;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av7 = a1;
	a1 = av0;
	a2 = av1;
	a3 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a2)->class->M.
		getClass_S_5qul0.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		setSuperClass_S_VPrR3.f(a1,a2);
L3:	i1 = 0;
	iv6 = i1;
	GOTO(195,L5);

L4:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av8 = a1;
	a1 = av8;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av8 = a1;
	a1 = av1;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av9 = a1;
	a1 = av0;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		addInterface_S_wkJhJ.f(a1,a2);
	iv6 += 1;
L5:	i1 = iv6;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces_count;
	if (i1 < i2)
		GOBACK(267,L4);
	i1 = 0;
	iv7 = i1;
	GOTO(273,L9);

L6:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fields;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av8 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av9 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av10 = a1;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->access_flags;
	iv11 = i1;
	a1 = av1;
	a2 = av10;
	a1 = jimpleTypeOfFieldDescr_SS_KN5DP(a1,a2);
	av12 = a1;
	a1 = av0;
	a2 = av9;
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		declaresField_ST_wSHK8.f(a1,a2,a3);
	if (i1 == 0)
		GOTO(344,L7);
	a1 = av0;
	a2 = av9;
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getField_ST_HMALo.f(a1,a2,a3);
	av13 = a1;
	a1 = av13;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->class->M.
		setType_T_j3zMu.f(a1,a2);
	a1 = av13;
	i2 = iv11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->class->M.
		setModifiers_i_t81D7.f(a1,i2);
	GOTO(371,L8);

L7:	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_SootField.C);
	a3 = a2;
	a4 = av9;
	a5 = av12;
	i6 = iv11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_STi_Iry4I(a3,a4,a5,i6);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		addField_S_NUgZB.f(a1,a2);
L8:	iv7 += 1;
L9:	i1 = iv7;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->fields_count;
	if (i1 < i2)
		GOBACK(400,L6);
	i1 = 0;
	iv8 = i1;
	GOTO(406,L20);

L10:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av9 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av10 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av11 = a1;
	a1 = av1;
	a2 = av11;
	a1 = jimpleTypesOfFieldOrMe_SS_ge0Lk(a1,a2);
	av14 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av12 = a1;
	i1 = 0;
	iv15 = i1;
	GOTO(474,L12);

L11:	a1 = av12;
	a2 = av14;
	i3 = iv15;
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
	iv15 += 1;
L12:	i1 = iv15;
	a2 = av14;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 < i2)
		GOBACK(500,L11);
	a1 = av14;
	a2 = av14;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av13 = a1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->access_flags;
	iv16 = i1;
	a1 = av0;
	a2 = av10;
	a3 = av12;
	a4 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		declaresMethod_SLT_1YMKA.f(a1,a2,a3,a4);
	if (i1 == 0)
		GOTO(530,L13);
	a1 = av0;
	a2 = av10;
	a3 = av12;
	a4 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethod_SLT_Ra1ti.f(a1,a2,a3,a4);
	av17 = a1;
	a1 = av17;
	a2 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		setParameterTypes_L_1QivW.f(a1,a2);
	a1 = av17;
	a2 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		setReturnType_T_qy6Ic.f(a1,a2);
	a1 = av17;
	i2 = iv16;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		setModifiers_i_24FIg.f(a1,i2);
	GOTO(566,L14);

L13:	a1 = new(&cl_ca_mcgill_sable_soot_SootMethod.C);
	a2 = a1;
	a3 = av10;
	a4 = av12;
	a5 = av13;
	i6 = iv16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SLTi_1VuWQ(a2,a3,a4,a5,i6);
	av17 = a1;
	a1 = av0;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		addMethod_S_HK8Oe.f(a1,a2);
L14:	a1 = av9;
	a2 = av17;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->jmethod = a2;
	i1 = 0;
	iv18 = i1;
	GOTO(602,L19);

L15:	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->attributes;
	i2 = iv18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Exception_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(616,L18);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->attributes;
	i2 = iv18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Exception_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	i1 = 0;
	iv20 = i1;
	GOTO(635,L17);

L16:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a2)->exception_index_table;
	i3 = iv20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av21 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av21;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	av22 = a1;
	a1 = av22;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av22 = a1;
	a1 = av17;
	a2 = av1;
	a3 = av22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a2)->class->M.
		getClass_S_5qul0.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		addException_S_tQIEX.f(a1,a2);
	iv20 += 1;
L17:	i1 = iv20;
	a2 = av19;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a2)->number_of_exceptions;
	if (i1 < i2)
		GOBACK(706,L16);
L18:	iv18 += 1;
L19:	i1 = iv18;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->attributes_count;
	if (i1 < i2)
		GOBACK(719,L15);
	iv8 += 1;
L20:	i1 = iv8;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(731,L10);
	i1 = 0;
	iv9 = i1;
	GOTO(737,L22);

L21:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av10 = a1;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->jmethod;
	a2 = av2;
	a3 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		setSource_Cm_wMqLc.f(a1,a2,a3);
	iv9 += 1;
L22:	i1 = iv9;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(769,L21);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimpleReturnTypeOfMeth_SS_ZCjrL: ca.mcgill.sable.soot.coffi.Util.jimpleReturnTypeOfMethodDescriptor(Lca/mcgill/sable/soot/SootClassManager;Ljava/lang/String;)Lca/mcgill/sable/soot/Type; */

Class xt_jimpleReturnTypeOfMeth_SS_ZCjrL[] = { 0 };

Object jimpleReturnTypeOfMeth_SS_ZCjrL(Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p1;
	av1 = p2;

L0:	a1 = av0;
	a2 = av1;
	a1 = jimpleTypesOfFieldOrMe_SS_ge0Lk(a1,a2);
	av2 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
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

/*M jimpleTypesOfFieldOrMe_SS_ge0Lk: ca.mcgill.sable.soot.coffi.Util.jimpleTypesOfFieldOrMethodDescriptor(Lca/mcgill/sable/soot/SootClassManager;Ljava/lang/String;)[Lca/mcgill/sable/soot/Type; */

Class xt_jimpleTypesOfFieldOrMe_SS_ge0Lk[] = { 0 };

Object jimpleTypesOfFieldOrMe_SS_ge0Lk(Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av5, av6, av7;
Int i0, i1, i2, i3;
Int iv3, iv4, iv6;
PROLOGUE;

	av0 = p1;
	av1 = p2;

L0:	a1 = new(&cl_java_util_Vector.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__kkKK3(a2);
	av2 = a1;
	GOTO(8,L19);

L1:	i1 = 0;
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 != 0)
		GOTO(22,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(31,L4);
L2:	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(40,L19);

L3:	i1 = 1;
	iv3 = i1;
	iv4 += 1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
L4:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 != 0)
		GOBACK(60,L3);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(69,L5);
	a1 = v__AsEYN();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(83,L16);

L5:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(92,L6);
	a1 = v__eNy0s();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(106,L16);

L6:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[9];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(115,L7);
	a1 = v__idXk2();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(129,L16);

L7:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(138,L8);
	a1 = v__m4rGl();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(152,L16);

L8:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[11];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(161,L9);
	a1 = v__GKSua();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(175,L16);

L9:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[12];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(184,L10);
	a1 = v__0Qzrs();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(198,L16);

L10:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(207,L12);
	a1 = av1;
	i2 = 59;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		indexOf_i_RQbCe.f(a1,i2);
	iv6 = i1;
	i1 = iv6;
	i2 = -1;
	if (i1 != i2)
		GOTO(221,L11);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[14];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L11:	a1 = av1;
	i2 = 1;
	i3 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av7 = a1;
	a1 = av7;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	a1 = v_S_k6iq0(a1);
	av5 = a1;
	a1 = av1;
	i2 = iv6;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(266,L16);

L12:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[15];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(275,L13);
	a1 = v__QUgPF();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(289,L16);

L13:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(298,L14);
	a1 = v__AA1Up();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(312,L16);

L14:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[17];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(321,L15);
	a1 = v__wzPnb();
	av5 = a1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
	GOTO(335,L16);

L15:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[18];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L16:	i1 = iv3;
	if (i1 == 0)
		GOTO(349,L17);
	a1 = av5;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_BaseType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	i2 = iv4;
	a1 = v_Bi_52nDH(a1,i2);
	av6 = a1;
	GOTO(364,L18);

L17:	a1 = av5;
	av6 = a1;
L18:	a1 = av2;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L19:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		length__rpuzQ.f(a1);
	if (i1 != 0)
		GOBACK(381,L1);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	a1 = anewarray(&cl_ca_mcgill_sable_soot_Type.C,i1);
	av3 = a1;
	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		copyInto_aO_6qaXT.f(a1,a2);
	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M jimpleTypeOfFieldDescr_SS_KN5DP: ca.mcgill.sable.soot.coffi.Util.jimpleTypeOfFieldDescriptor(Lca/mcgill/sable/soot/SootClassManager;Ljava/lang/String;)Lca/mcgill/sable/soot/Type; */

Class xt_jimpleTypeOfFieldDescr_SS_KN5DP[] = { 0 };

Object jimpleTypeOfFieldDescr_SS_KN5DP(Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av4, av5;
Int i0, i1, i2, i3, i4, i5;
Int iv2, iv3;
PROLOGUE;

	av0 = p1;
	av1 = p2;

L0:	i1 = 0;
	iv2 = i1;
	i1 = 0;
	iv3 = i1;
	GOTO(4,L2);

L1:	i1 = 1;
	iv2 = i1;
	iv3 += 1;
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	av1 = a1;
L2:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 != 0)
		GOBACK(24,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(33,L3);
	a1 = v__AsEYN();
	av4 = a1;
	GOTO(41,L13);

L3:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(50,L4);
	a1 = v__eNy0s();
	av4 = a1;
	GOTO(58,L13);

L4:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[9];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(67,L5);
	a1 = v__idXk2();
	av4 = a1;
	GOTO(75,L13);

L5:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(84,L6);
	a1 = v__m4rGl();
	av4 = a1;
	GOTO(92,L13);

L6:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[11];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(101,L7);
	a1 = v__GKSua();
	av4 = a1;
	GOTO(109,L13);

L7:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[12];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(118,L8);
	a1 = v__0Qzrs();
	av4 = a1;
	GOTO(126,L13);

L8:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(135,L10);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[19];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		endsWith_S_0JPFg.f(a1,a2);
	if (i1 != 0)
		GOTO(144,L9);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[20];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L9:	a1 = av1;
	i2 = 1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_lang_String*)a3)->class->M.
		length__rpuzQ.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av5 = a1;
	a1 = av5;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	a1 = v_S_k6iq0(a1);
	av4 = a1;
	GOTO(184,L13);

L10:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[15];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(193,L11);
	a1 = v__QUgPF();
	av4 = a1;
	GOTO(201,L13);

L11:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(210,L12);
	a1 = v__AA1Up();
	av4 = a1;
	GOTO(218,L13);

L12:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_Util[21];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
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

L13:	i1 = iv2;
	if (i1 == 0)
		GOTO(246,L14);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_BaseType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	i2 = iv3;
	a1 = v_Bi_52nDH(a1,i2);
	return a1;

L14:	a1 = av4;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M resetEasyNames__Gg79C: ca.mcgill.sable.soot.coffi.Util.resetEasyNames()V */

Class xt_resetEasyNames__Gg79C[] = { 0 };

Void resetEasyNames__Gg79C(void)
{
Int i0, i1;
PROLOGUE;


L0:	i1 = 0;
	cl_ca_mcgill_sable_soot_coffi_Util.V.nextEasyNameIndex = i1;
	return;

	/*NOTREACHED*/
}

/*M getNextEasyName__tcGkv: ca.mcgill.sable.soot.coffi.Util.getNextEasyName()Ljava/lang/String; */

Class xt_getNextEasyName__tcGkv[] = { 0 };

Object getNextEasyName__tcGkv(void)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1;
PROLOGUE;


L0:	i1 = 26;
	a1 = anewarray(&cl_java_lang_String.C,i1);
	a2 = a1;
	i3 = 0;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[22];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 1;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[23];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[24];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 3;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 4;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[26];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 5;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[27];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 6;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[28];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 7;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[29];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 8;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[30];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 9;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[31];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 10;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[32];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 11;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[33];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 12;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[34];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 13;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[35];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 14;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[36];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 15;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[37];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 16;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[38];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 17;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[39];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 18;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[40];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 19;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[41];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 20;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[42];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 21;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[43];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 22;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[44];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 23;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[45];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 24;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[46];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	a2 = a1;
	i3 = 25;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[47];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	if (a4 && !instanceof(a4,((struct aarray*)a2)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a2)->data[i3] = a4;
	av0 = a1;
	i1 = cl_ca_mcgill_sable_soot_coffi_Util.V.nextEasyNameIndex;
	i2 = i1;
	i3 = 1;
	i2 = i2 + i3;
	cl_ca_mcgill_sable_soot_coffi_Util.V.nextEasyNameIndex = i2;
	iv1 = i1;
	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOTO(169,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[48];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	i2 = iv1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct aarray*)a3)->length;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_i_ZQIqx.f(a1,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

L1:	a1 = av0;
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

/*M setClassNameToAbbreviat_M_X0CH4: ca.mcgill.sable.soot.coffi.Util.setClassNameToAbbreviation(Lca/mcgill/sable/util/Map;)V */

Class xt_setClassNameToAbbreviat_M_X0CH4[] = { 0 };

Void setClassNameToAbbreviat_M_X0CH4(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	cl_ca_mcgill_sable_soot_coffi_Util.V.classNameToAbbreviation = a1;
	return;

	/*NOTREACHED*/
}

/*M getLocalForStackOp_JTi_G3Ubm: ca.mcgill.sable.soot.coffi.Util.getLocalForStackOp(Lca/mcgill/sable/soot/jimple/JimpleBody;Lca/mcgill/sable/soot/coffi/TypeStack;I)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_getLocalForStackOp_JTi_G3Ubm[] = { 0 };

Object getLocalForStackOp_JTi_G3Ubm(Object p1, Object p2, Int p3)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p1;
	av1 = p2;
	iv2 = p3;

L0:	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	a2 = v__8oEDD();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(11,L1);
	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->class->M.
		get_i_t06Hz.f(a1,i2);
	a2 = v__KUwpM();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(25,L2);
L1:	iv2 += -1;
L2:	a1 = av0;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Util[49];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv2;
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
	a3 = v__SUHmS();
	a1 = getLocalCreatingIfNec_JST_eJj43(a1,a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getAbbreviationOfClassN_S_NSTHs: ca.mcgill.sable.soot.coffi.Util.getAbbreviationOfClassName(Ljava/lang/String;)Ljava/lang/String; */

Class xt_getAbbreviationOfClassN_S_NSTHs[] = { 0 };

Object getAbbreviationOfClassN_S_NSTHs(Object p1)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5, i6;
Int iv2;
PROLOGUE;

	av0 = p1;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = new(&cl_java_lang_Character.C);
	a4 = a3;
	a5 = av0;
	i6 = 0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct in_java_lang_String*)a5)->class->M.
		charAt_i_nDguX.f(a5,i6);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_c_lwu4Y(a4,i5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Character*)a3)->class->M.
		toString__wiHO9.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
L1:	a1 = av0;
	i2 = 46;
	i3 = iv2;
	i4 = 1;
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		indexOf_ii_GM7aw.f(a1,i2,i3);
	iv2 = i1;
	i1 = iv2;
	i2 = -1;
	if (i1 == i2)
		GOTO(37,L2);
	a1 = av1;
	a2 = av0;
	i3 = iv2;
	i4 = 1;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	i2 = toLowerCase_c_Kft8E(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_c_PKutk.f(a1,i2);
	GOBACK(55,L1);

L2:	a1 = av1;
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

/*M getNormalizedClassName_S_Fd7jB: ca.mcgill.sable.soot.coffi.Util.getNormalizedClassName(Ljava/lang/String;)Ljava/lang/String; */

Class xt_getNormalizedClassName_S_Fd7jB[] = { 0 };

Object getNormalizedClassName_S_Fd7jB(Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av0 = a1;
	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[19];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		endsWith_S_0JPFg.f(a1,a2);
	if (i1 == 0)
		GOTO(15,L1);
	a1 = av0;
	i2 = 0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_lang_String*)a3)->class->M.
		length__rpuzQ.f(a3);
	i4 = 1;
	i3 = i3 - i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av0 = a1;
L1:	i1 = 0;
	iv1 = i1;
	GOTO(32,L3);

L2:	iv1 += 1;
	a1 = av0;
	i2 = 1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_lang_String*)a3)->class->M.
		length__rpuzQ.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av0 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[50];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av0 = a1;
L3:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 != 0)
		GOBACK(74,L2);
	i1 = iv1;
	if (i1 == 0)
		GOTO(78,L5);
	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Util[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 != 0)
		GOTO(87,L4);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[51];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L4:	a1 = av0;
	i2 = 1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_lang_String*)a3)->class->M.
		length__rpuzQ.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av0 = a1;
L5:	a1 = av0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocalCreatingIfNec_JST_eJj43: ca.mcgill.sable.soot.coffi.Util.getLocalCreatingIfNecessary(Lca/mcgill/sable/soot/jimple/JimpleBody;Ljava/lang/String;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_getLocalCreatingIfNec_JST_eJj43[] = { 0 };

Object getLocalCreatingIfNec_JST_eJj43(Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p1;
	av1 = p2;
	av2 = p3;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		declaresLocal_S_MQOnI.f(a1,a2);
	if (i1 == 0)
		GOTO(5,L1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocal_S_jHgLo.f(a1,a2);
	return a1;

L1:	a1 = v__WbL8F();
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLocal_ST_UrNI5.f(a1,a2,a3);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		addLocal_L_AwPJJ.f(a1,a2);
	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocalForIndex_Ji_qYKCv: ca.mcgill.sable.soot.coffi.Util.getLocalForIndex(Lca/mcgill/sable/soot/jimple/JimpleBody;I)Lca/mcgill/sable/soot/jimple/Local; */

Class xt_getLocalForIndex_Ji_qYKCv[] = { 0 };

Object getLocalForIndex_Ji_qYKCv(Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av2, av3;
Int i0, i1, i2, i3;
Int iv1;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_Util[33];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_i_ZQIqx.f(a1,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		declaresLocal_S_MQOnI.f(a1,a2);
	if (i1 == 0)
		GOTO(22,L1);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocal_S_jHgLo.f(a1,a2);
	return a1;

L1:	a1 = v__WbL8F();
	a2 = av2;
	a3 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_Jimple*)a1)->class->M.
		newLocal_ST_UrNI5.f(a1,a2,a3);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		addLocal_L_AwPJJ.f(a1,a2);
	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__9f3Ul: ca.mcgill.sable.soot.coffi.Util.<init>()V */

Class xt_init__9f3Ul[] = { 0 };

Void init__9f3Ul(Object p0)
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



const Char ch_ca_mcgill_sable_soot_coffi_Util[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','U','t','i','l','R','e','s','o','l',
'v','i','n','g',' ','.','.','.','C','o','u','l','d','n',39,'t',' ','l',
'o','a','d',' ','c','l','a','s','s',' ','f','i','l','e','.','(',')','[',
'B','C','D','F','I','J','L','C','l','a','s','s',' ','r','e','f','e','r',
'e','n','c','e',' ','h','a','s',' ','n','o',' ','e','n','d','i','n','g',
' ',';','S','Z','V','U','n','k','n','o','w','n',' ','f','i','e','l','d',
' ','t','y','p','e','!',';','C','l','a','s','s',' ','r','e','f','e','r',
'e','n','c','e',' ','d','o','e','s',' ','n','o','t',' ','e','n','d',' ',
'w','i','t','h',' ',';','U','n','k','n','o','w','n',' ','f','i','e','l',
'd',' ','t','y','p','e',':',' ','a','b','c','d','e','f','g','h','i','j',
'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','l','o',
'c','a','l','o','p','[',']','F','o','r',' ','s','o','m','e',' ','r','e',
'a','s','o','n',' ','a','n',' ','a','r','r','a','y',' ','r','e','f','e',
'r','e','n','c','e',' ','d','o','e','s',' ','n','o','t',' ','s','t','a',
'r','t',' ','w','i','t','h',' ','L'};

const void *st_ca_mcgill_sable_soot_coffi_Util[] = {
    ch_ca_mcgill_sable_soot_coffi_Util+31,	/* 0. ca.mcgill.sable.soot.coffi.Util */
    ch_ca_mcgill_sable_soot_coffi_Util+41,	/* 1. Resolving  */
    ch_ca_mcgill_sable_soot_coffi_Util+44,	/* 2. ... */
    ch_ca_mcgill_sable_soot_coffi_Util+69,	/* 3. Couldn't load class file. */
    ch_ca_mcgill_sable_soot_coffi_Util+70,	/* 4. ( */
    ch_ca_mcgill_sable_soot_coffi_Util+71,	/* 5. ) */
    ch_ca_mcgill_sable_soot_coffi_Util+72,	/* 6. [ */
    ch_ca_mcgill_sable_soot_coffi_Util+73,	/* 7. B */
    ch_ca_mcgill_sable_soot_coffi_Util+74,	/* 8. C */
    ch_ca_mcgill_sable_soot_coffi_Util+75,	/* 9. D */
    ch_ca_mcgill_sable_soot_coffi_Util+76,	/* 10. F */
    ch_ca_mcgill_sable_soot_coffi_Util+77,	/* 11. I */
    ch_ca_mcgill_sable_soot_coffi_Util+78,	/* 12. J */
    ch_ca_mcgill_sable_soot_coffi_Util+79,	/* 13. L */
    ch_ca_mcgill_sable_soot_coffi_Util+110,	/* 14. Class reference has no ending ; */
    ch_ca_mcgill_sable_soot_coffi_Util+111,	/* 15. S */
    ch_ca_mcgill_sable_soot_coffi_Util+112,	/* 16. Z */
    ch_ca_mcgill_sable_soot_coffi_Util+113,	/* 17. V */
    ch_ca_mcgill_sable_soot_coffi_Util+132,	/* 18. Unknown field type! */
    ch_ca_mcgill_sable_soot_coffi_Util+133,	/* 19. ; */
    ch_ca_mcgill_sable_soot_coffi_Util+168,	/* 20. Class reference does not end with ; */
    ch_ca_mcgill_sable_soot_coffi_Util+188,	/* 21. Unknown field type:  */
    ch_ca_mcgill_sable_soot_coffi_Util+189,	/* 22. a */
    ch_ca_mcgill_sable_soot_coffi_Util+190,	/* 23. b */
    ch_ca_mcgill_sable_soot_coffi_Util+191,	/* 24. c */
    ch_ca_mcgill_sable_soot_coffi_Util+192,	/* 25. d */
    ch_ca_mcgill_sable_soot_coffi_Util+193,	/* 26. e */
    ch_ca_mcgill_sable_soot_coffi_Util+194,	/* 27. f */
    ch_ca_mcgill_sable_soot_coffi_Util+195,	/* 28. g */
    ch_ca_mcgill_sable_soot_coffi_Util+196,	/* 29. h */
    ch_ca_mcgill_sable_soot_coffi_Util+197,	/* 30. i */
    ch_ca_mcgill_sable_soot_coffi_Util+198,	/* 31. j */
    ch_ca_mcgill_sable_soot_coffi_Util+199,	/* 32. k */
    ch_ca_mcgill_sable_soot_coffi_Util+200,	/* 33. l */
    ch_ca_mcgill_sable_soot_coffi_Util+201,	/* 34. m */
    ch_ca_mcgill_sable_soot_coffi_Util+202,	/* 35. n */
    ch_ca_mcgill_sable_soot_coffi_Util+203,	/* 36. o */
    ch_ca_mcgill_sable_soot_coffi_Util+204,	/* 37. p */
    ch_ca_mcgill_sable_soot_coffi_Util+205,	/* 38. q */
    ch_ca_mcgill_sable_soot_coffi_Util+206,	/* 39. r */
    ch_ca_mcgill_sable_soot_coffi_Util+207,	/* 40. s */
    ch_ca_mcgill_sable_soot_coffi_Util+208,	/* 41. t */
    ch_ca_mcgill_sable_soot_coffi_Util+209,	/* 42. u */
    ch_ca_mcgill_sable_soot_coffi_Util+210,	/* 43. v */
    ch_ca_mcgill_sable_soot_coffi_Util+211,	/* 44. w */
    ch_ca_mcgill_sable_soot_coffi_Util+212,	/* 45. x */
    ch_ca_mcgill_sable_soot_coffi_Util+213,	/* 46. y */
    ch_ca_mcgill_sable_soot_coffi_Util+214,	/* 47. z */
    ch_ca_mcgill_sable_soot_coffi_Util+219,	/* 48. local */
    ch_ca_mcgill_sable_soot_coffi_Util+221,	/* 49. op */
    ch_ca_mcgill_sable_soot_coffi_Util+223,	/* 50. [] */
    ch_ca_mcgill_sable_soot_coffi_Util+279,	/* 51. For some reason an array reference does  */
    0};
