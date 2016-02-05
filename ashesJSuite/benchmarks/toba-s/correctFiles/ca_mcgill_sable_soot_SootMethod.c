/*  ca_mcgill_sable_soot_SootMethod.c -- from Java class ca.mcgill.sable.soot.SootMethod  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_AlreadyThrowsException.h"
#include "ca_mcgill_sable_soot_Body.h"
#include "ca_mcgill_sable_soot_ClassFile.h"
#include "ca_mcgill_sable_soot_ClassFileBody.h"
#include "ca_mcgill_sable_soot_DoesNotThrowException.h"
#include "ca_mcgill_sable_soot_Modifier.h"
#include "ca_mcgill_sable_soot_NotDeclaredException.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "ca_mcgill_sable_util_Map.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_AlreadyThrowsException.C,
    &cl_ca_mcgill_sable_soot_Body.C,
    &cl_ca_mcgill_sable_soot_ClassFile.C,
    &cl_ca_mcgill_sable_soot_ClassFileBody.C,
    &cl_ca_mcgill_sable_soot_DoesNotThrowException.C,
    &cl_ca_mcgill_sable_soot_Modifier.C,
    &cl_ca_mcgill_sable_soot_NotDeclaredException.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_ca_mcgill_sable_util_Map.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_SootMethod[];
extern const void *st_ca_mcgill_sable_soot_SootMethod[];
extern Class xt_init_SLT_OyjsS[];
extern Class xt_init_SLTi_1VuWQ[];
extern Class xt_setSource_Cm_wMqLc[];
extern Class xt_getName__iW73P[];
extern Class xt_getDeclaringClass__ywcIy[];
extern Class xt_isDeclared__7aapj[];
extern Class xt_setName_S_iTaNM[];
extern Class xt_getModifiers__KRAh8[];
extern Class xt_setModifiers_i_24FIg[];
extern Class xt_getReturnType__sYISd[];
extern Class xt_setReturnType_T_qy6Ic[];
extern Class xt_getParameterCount__2n0Xi[];
extern Class xt_getParameterType_i_cz4Pq[];
extern Class xt_getParameterTypes__F9alY[];
extern Class xt_isBodyStored_B_c7SpM[];
extern Class xt_getBody_B_2pFZ5[];
extern Class xt_storeBody_BB_1xfem[];
extern Class xt_addException_S_tQIEX[];
extern Class xt_removeException_S_UD3Kc[];
extern Class xt_throwsException_S_3imYU[];
extern Class xt_getExceptions__tTHxv[];
extern Class xt_setParameterTypes_L_1QivW[];
extern Class xt_isStatic__RVPb4[];
extern Class xt_getSignature__fIDMx[];
extern Class xt_toString__bgOEG[];
extern Class xt_getDeclaration__9dYAZ[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
static const struct ihash htable[8] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_SootMethod.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_SootMethod.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_SootMethod.M.equals_O_Ba6e0,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','M','e','t','h','o','d'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
static const Char nmiv_0[] = {
'n','a','m','e'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_1[] = {
'p','a','r','a','m','e','t','e','r','T','y','p','e','s'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_2[] = {
'r','e','t','u','r','n','T','y','p','e'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';'};
static const Char nmiv_3[] = {
'i','s','D','e','c','l','a','r','e','d'};
static const Char sgiv_3[] = {
'Z'};
static const Char nmiv_4[] = {
'd','e','c','l','a','r','i','n','g','C','l','a','s','s'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmiv_5[] = {
'm','o','d','i','f','i','e','r','s'};
static const Char sgiv_5[] = {
'I'};
static const Char nmiv_6[] = {
'e','x','c','e','p','t','i','o','n','s'};
static const Char sgiv_6[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_7[] = {
'r','e','p','T','o','B','o','d','y'};
static const Char sgiv_7[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p',';'};
static const Char nmiv_8[] = {
'c','o','f','f','i','C','l','a','s','s'};
static const Char sgiv_8[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','C','l','a','s','s','F','i','l',
'e',';'};
static const Char nmiv_9[] = {
'c','o','f','f','i','M','e','t','h','o','d'};
static const Char sgiv_9[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d','_','i',
'n','f','o',';'};
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
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p','e',
';',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p','e',
';','I',')','V'};
static const Char nmim_14[] = {
's','e','t','S','o','u','r','c','e'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','C','l','a','s','s','F','i',
'l','e',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','m','e','t','h','o',
'd','_','i','n','f','o',';',')','V'};
static const Char nmim_15[] = {
'g','e','t','N','a','m','e'};
static const Char sgim_15[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_16[] = {
'g','e','t','D','e','c','l','a','r','i','n','g','C','l','a','s','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmim_17[] = {
'i','s','D','e','c','l','a','r','e','d'};
static const Char sgim_17[] = {
'(',')','Z'};
static const Char nmim_18[] = {
's','e','t','N','a','m','e'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmim_19[] = {
'g','e','t','M','o','d','i','f','i','e','r','s'};
static const Char sgim_19[] = {
'(',')','I'};
static const Char nmim_20[] = {
's','e','t','M','o','d','i','f','i','e','r','s'};
static const Char sgim_20[] = {
'(','I',')','V'};
static const Char nmim_21[] = {
'g','e','t','R','e','t','u','r','n','T','y','p','e'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_22[] = {
's','e','t','R','e','t','u','r','n','T','y','p','e'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_23[] = {
'g','e','t','P','a','r','a','m','e','t','e','r','C','o','u','n','t'};
static const Char sgim_23[] = {
'(',')','I'};
static const Char nmim_24[] = {
'g','e','t','P','a','r','a','m','e','t','e','r','T','y','p','e'};
static const Char sgim_24[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_25[] = {
'g','e','t','P','a','r','a','m','e','t','e','r','T','y','p','e','s'};
static const Char sgim_25[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_26[] = {
'i','s','B','o','d','y','S','t','o','r','e','d'};
static const Char sgim_26[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','d','y','R','e','p','r','e','s','e','n','t',
'a','t','i','o','n',';',')','Z'};
static const Char nmim_27[] = {
'g','e','t','B','o','d','y'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','d','y','R','e','p','r','e','s','e','n','t',
'a','t','i','o','n',';',')','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','B','o','d','y',';'};
static const Char nmim_28[] = {
's','t','o','r','e','B','o','d','y'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','d','y','R','e','p','r','e','s','e','n','t',
'a','t','i','o','n',';','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','B','o','d','y',';',')','V'};
static const Char nmim_29[] = {
'a','d','d','E','x','c','e','p','t','i','o','n'};
static const Char sgim_29[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmim_30[] = {
'r','e','m','o','v','e','E','x','c','e','p','t','i','o','n'};
static const Char sgim_30[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmim_31[] = {
't','h','r','o','w','s','E','x','c','e','p','t','i','o','n'};
static const Char sgim_31[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','Z'};
static const Char nmim_32[] = {
'g','e','t','E','x','c','e','p','t','i','o','n','s'};
static const Char sgim_32[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_33[] = {
's','e','t','P','a','r','a','m','e','t','e','r','T','y','p','e','s'};
static const Char sgim_33[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','V'};
static const Char nmim_34[] = {
'i','s','S','t','a','t','i','c'};
static const Char sgim_34[] = {
'(',')','Z'};
static const Char nmim_35[] = {
'g','e','t','S','i','g','n','a','t','u','r','e'};
static const Char sgim_35[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_36[] = {
'g','e','t','D','e','c','l','a','r','a','t','i','o','n'};
static const Char sgim_36[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, name), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,18,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, parameterTypes), 0,(const Char *)&nmiv_1,14,(const Char *)&sgiv_1,27,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, returnType), 0,(const Char *)&nmiv_2,10,(const Char *)&sgiv_2,27,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, isDeclared), 0,(const Char *)&nmiv_3,10,(const Char *)&sgiv_3,1,1,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, declaringClass), 0,(const Char *)&nmiv_4,14,(const Char *)&sgiv_4,32,1,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, modifiers), 0,(const Char *)&nmiv_5,9,(const Char *)&sgiv_5,1,1,0x0,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, exceptions), 0,(const Char *)&nmiv_6,10,(const Char *)&sgiv_6,27,1,0x0,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, repToBody), 0,(const Char *)&nmiv_7,9,(const Char *)&sgiv_7,26,1,0x0,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, coffiClass), 0,(const Char *)&nmiv_8,10,(const Char *)&sgiv_8,38,1,0x1,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootMethod, coffiMethod), 0,(const Char *)&nmiv_9,11,(const Char *)&sgiv_9,40,1,0x1,9}, 
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
} inr_ca_mcgill_sable_soot_SootMethod = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_SootMethod.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_SootMethod cl_ca_mcgill_sable_soot_SootMethod = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_SootMethod),
    37,
    0,
    10,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    17, others,
    0, 0,
    ch_ca_mcgill_sable_soot_SootMethod,
    st_ca_mcgill_sable_soot_SootMethod,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_SootMethod,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
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
	{TMIT_native_code, toString__bgOEG,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,24,xt_toString__bgOEG},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_SLT_OyjsS,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,75,1,0x1,0,xt_init_SLT_OyjsS},
	{TMIT_native_code, init_SLTi_1VuWQ,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,76,1,0x1,1,xt_init_SLTi_1VuWQ},
	{TMIT_native_code, setSource_Cm_wMqLc,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,81,1,0x1,2,xt_setSource_Cm_wMqLc},
	{TMIT_native_code, getName__iW73P,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,20,1,0x1,3,xt_getName__iW73P},
	{TMIT_native_code, getDeclaringClass__ywcIy,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,34,1,0x1,4,xt_getDeclaringClass__ywcIy},
	{TMIT_native_code, isDeclared__7aapj,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,3,1,0x1,5,xt_isDeclared__7aapj},
	{TMIT_native_code, setName_S_iTaNM,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,21,1,0x1,6,xt_setName_S_iTaNM},
	{TMIT_native_code, getModifiers__KRAh8,(const Char *)&nmim_19,12,
	(const Char *)&sgim_19,3,1,0x1,7,xt_getModifiers__KRAh8},
	{TMIT_native_code, setModifiers_i_24FIg,(const Char *)&nmim_20,12,
	(const Char *)&sgim_20,4,1,0x1,8,xt_setModifiers_i_24FIg},
	{TMIT_native_code, getReturnType__sYISd,(const Char *)&nmim_21,13,
	(const Char *)&sgim_21,29,1,0x1,9,xt_getReturnType__sYISd},
	{TMIT_native_code, setReturnType_T_qy6Ic,(const Char *)&nmim_22,13,
	(const Char *)&sgim_22,30,1,0x1,10,xt_setReturnType_T_qy6Ic},
	{TMIT_native_code, getParameterCount__2n0Xi,(const Char *)&nmim_23,17,
	(const Char *)&sgim_23,3,1,0x1,11,xt_getParameterCount__2n0Xi},
	{TMIT_native_code, getParameterType_i_cz4Pq,(const Char *)&nmim_24,16,
	(const Char *)&sgim_24,30,1,0x1,12,xt_getParameterType_i_cz4Pq},
	{TMIT_native_code, getParameterTypes__F9alY,(const Char *)&nmim_25,17,
	(const Char *)&sgim_25,29,1,0x1,13,xt_getParameterTypes__F9alY},
	{TMIT_native_code, isBodyStored_B_c7SpM,(const Char *)&nmim_26,12,
	(const Char *)&sgim_26,44,1,0x1,14,xt_isBodyStored_B_c7SpM},
	{TMIT_native_code, getBody_B_2pFZ5,(const Char *)&nmim_27,7,
	(const Char *)&sgim_27,70,1,0x1,15,xt_getBody_B_2pFZ5},
	{TMIT_native_code, storeBody_BB_1xfem,(const Char *)&nmim_28,9,
	(const Char *)&sgim_28,71,1,0x1,16,xt_storeBody_BB_1xfem},
	{TMIT_native_code, addException_S_tQIEX,(const Char *)&nmim_29,12,
	(const Char *)&sgim_29,35,1,0x1,17,xt_addException_S_tQIEX},
	{TMIT_native_code, removeException_S_UD3Kc,(const Char *)&nmim_30,15,
	(const Char *)&sgim_30,35,1,0x1,18,xt_removeException_S_UD3Kc},
	{TMIT_native_code, throwsException_S_3imYU,(const Char *)&nmim_31,15,
	(const Char *)&sgim_31,35,1,0x1,19,xt_throwsException_S_3imYU},
	{TMIT_native_code, getExceptions__tTHxv,(const Char *)&nmim_32,13,
	(const Char *)&sgim_32,29,1,0x1,20,xt_getExceptions__tTHxv},
	{TMIT_native_code, setParameterTypes_L_1QivW,(const Char *)&nmim_33,17,
	(const Char *)&sgim_33,30,1,0x1,21,xt_setParameterTypes_L_1QivW},
	{TMIT_native_code, isStatic__RVPb4,(const Char *)&nmim_34,8,
	(const Char *)&sgim_34,3,1,0x1,22,xt_isStatic__RVPb4},
	{TMIT_native_code, getSignature__fIDMx,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,20,1,0x1,23,xt_getSignature__fIDMx},
	{TMIT_native_code, getDeclaration__9dYAZ,(const Char *)&nmim_36,14,
	(const Char *)&sgim_36,20,1,0x1,25,xt_getDeclaration__9dYAZ},
    } /* end of methodsigs */
};


/*M init_SLT_OyjsS: ca.mcgill.sable.soot.SootMethod.<init>(Ljava/lang/String;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_SLT_OyjsS[] = { 0 };

Void init_SLT_OyjsS(Object p0, Object p1, Object p2, Object p3)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
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
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->exceptions = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->repToBody = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->name = a2;
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
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->returnType = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_SLTi_1VuWQ: ca.mcgill.sable.soot.SootMethod.<init>(Ljava/lang/String;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/Type;I)V */

Class xt_init_SLTi_1VuWQ[] = { 0 };

Void init_SLTi_1VuWQ(Object p0, Object p1, Object p2, Object p3, Int p4)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;
	iv4 = p4;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
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
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->exceptions = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_HashMap.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__4dSXs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->repToBody = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->name = a2;
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
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->returnType = a2;
	a1 = av0;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->modifiers = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setSource_Cm_wMqLc: ca.mcgill.sable.soot.SootMethod.setSource(Lca/mcgill/sable/soot/coffi/ClassFile;Lca/mcgill/sable/soot/coffi/method_info;)V */

Class xt_setSource_Cm_wMqLc[] = { 0 };

Void setSource_Cm_wMqLc(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->coffiClass = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->coffiMethod = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getName__iW73P: ca.mcgill.sable.soot.SootMethod.getName()Ljava/lang/String; */

Class xt_getName__iW73P[] = { 0 };

Object getName__iW73P(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->name;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDeclaringClass__ywcIy: ca.mcgill.sable.soot.SootMethod.getDeclaringClass()Lca/mcgill/sable/soot/SootClass; */

Class xt_getDeclaringClass__ywcIy[] = { &cl_ca_mcgill_sable_soot_NotDeclaredException.C, 0 };

Object getDeclaringClass__ywcIy(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->isDeclared;
	if (i1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_NotDeclaredException.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_zrIBp(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->declaringClass;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isDeclared__7aapj: ca.mcgill.sable.soot.SootMethod.isDeclared()Z */

Class xt_isDeclared__7aapj[] = { 0 };

Boolean isDeclared__7aapj(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->isDeclared;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setName_S_iTaNM: ca.mcgill.sable.soot.SootMethod.setName(Ljava/lang/String;)V */

Class xt_setName_S_iTaNM[] = { 0 };

Void setName_S_iTaNM(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->name = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getModifiers__KRAh8: ca.mcgill.sable.soot.SootMethod.getModifiers()I */

Class xt_getModifiers__KRAh8[] = { 0 };

Int getModifiers__KRAh8(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->modifiers;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setModifiers_i_24FIg: ca.mcgill.sable.soot.SootMethod.setModifiers(I)V */

Class xt_setModifiers_i_24FIg[] = { 0 };

Void setModifiers_i_24FIg(Object p0, Int p1)
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
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->modifiers = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getReturnType__sYISd: ca.mcgill.sable.soot.SootMethod.getReturnType()Lca/mcgill/sable/soot/Type; */

Class xt_getReturnType__sYISd[] = { 0 };

Object getReturnType__sYISd(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->returnType;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setReturnType_T_qy6Ic: ca.mcgill.sable.soot.SootMethod.setReturnType(Lca/mcgill/sable/soot/Type;)V */

Class xt_setReturnType_T_qy6Ic[] = { 0 };

Void setReturnType_T_qy6Ic(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->returnType = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getParameterCount__2n0Xi: ca.mcgill.sable.soot.SootMethod.getParameterCount()I */

Class xt_getParameterCount__2n0Xi[] = { 0 };

Int getParameterCount__2n0Xi(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getParameterType_i_cz4Pq: ca.mcgill.sable.soot.SootMethod.getParameterType(I)Lca/mcgill/sable/soot/Type; */

Class xt_getParameterType_i_cz4Pq[] = { 0 };

Object getParameterType_i_cz4Pq(Object p0, Int p1)
{
Class c0, c1;
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
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1247717038)->f)(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_Type.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getParameterTypes__F9alY: ca.mcgill.sable.soot.SootMethod.getParameterTypes()Lca/mcgill/sable/util/List; */

Class xt_getParameterTypes__F9alY[] = { 0 };

Object getParameterTypes__F9alY(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isBodyStored_B_c7SpM: ca.mcgill.sable.soot.SootMethod.isBodyStored(Lca/mcgill/sable/soot/BodyRepresentation;)Z */

Class xt_isBodyStored_B_c7SpM[] = { 0 };

Boolean isBodyStored_B_c7SpM(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->repToBody;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getBody_B_2pFZ5: ca.mcgill.sable.soot.SootMethod.getBody(Lca/mcgill/sable/soot/BodyRepresentation;)Lca/mcgill/sable/soot/Body; */

Class xt_getBody_B_2pFZ5[] = { 0 };

Object getBody_B_2pFZ5(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = v__w18M7();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(7,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_ClassFileBody.C);
	a2 = a1;
	a3 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_KOdFx(a2,a3);
	return a1;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->repToBody;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,165920191)->f)(a1,a2);
	if (i1 == 0)
		GOTO(29,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->repToBody;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1515828273)->f)(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_Body.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	return a1;

L2:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_SootMethod[1];
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

/*M storeBody_BB_1xfem: ca.mcgill.sable.soot.SootMethod.storeBody(Lca/mcgill/sable/soot/BodyRepresentation;Lca/mcgill/sable/soot/Body;)V */

Class xt_storeBody_BB_1xfem[] = { 0 };

Void storeBody_BB_1xfem(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->repToBody;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,30091266)->f)(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addException_S_tQIEX: ca.mcgill.sable.soot.SootMethod.addException(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_addException_S_tQIEX[] = { &cl_ca_mcgill_sable_soot_AlreadyThrowsException.C, 0 };

Void addException_S_tQIEX(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->exceptions;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 == 0)
		GOTO(10,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_AlreadyThrowsException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_L7N2y(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->exceptions;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeException_S_UD3Kc: ca.mcgill.sable.soot.SootMethod.removeException(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_removeException_S_UD3Kc[] = { &cl_ca_mcgill_sable_soot_DoesNotThrowException.C, 0 };

Void removeException_S_UD3Kc(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->exceptions;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	if (i1 != 0)
		GOTO(10,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_DoesNotThrowException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_2ixRr(a2,a3);
	athrow(a1);

L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M throwsException_S_3imYU: ca.mcgill.sable.soot.SootMethod.throwsException(Lca/mcgill/sable/soot/SootClass;)Z */

Class xt_throwsException_S_3imYU[] = { 0 };

Boolean throwsException_S_3imYU(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->exceptions;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1319712034)->f)(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getExceptions__tTHxv: ca.mcgill.sable.soot.SootMethod.getExceptions()Lca/mcgill/sable/util/List; */

Class xt_getExceptions__tTHxv[] = { 0 };

Object getExceptions__tTHxv(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->exceptions;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setParameterTypes_L_1QivW: ca.mcgill.sable.soot.SootMethod.setParameterTypes(Lca/mcgill/sable/util/List;)V */

Class xt_setParameterTypes_L_1QivW[] = { 0 };

Void setParameterTypes_L_1QivW(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->parameterTypes;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1575638583)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isStatic__RVPb4: ca.mcgill.sable.soot.SootMethod.isStatic()Z */

Class xt_isStatic__RVPb4[] = { 0 };

Boolean isStatic__RVPb4(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getModifiers__KRAh8.f(a1);
	i1 = isStatic_i_fzZ1T(i1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getSignature__fIDMx: ca.mcgill.sable.soot.SootMethod.getSignature()Ljava/lang/String; */

Class xt_getSignature__fIDMx[] = { 0 };

Object getSignature__fIDMx(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getDeclaringClass__ywcIy.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getName__iW73P.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getParameterTypes__F9alY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(59,L3);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
	GOTO(73,L2);

L1:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(100,L1);
L3:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_SootMethod[6];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getReturnType__sYISd.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_Type*)a3)->class->M.
		toString__J7Vel.f(a3);
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
	a1 = av1;
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

/*M toString__bgOEG: ca.mcgill.sable.soot.SootMethod.toString()Ljava/lang/String; */

Class xt_toString__bgOEG[] = { 0 };

Object toString__bgOEG(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getSignature__fIDMx.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDeclaration__9dYAZ: ca.mcgill.sable.soot.SootMethod.getDeclaration()Ljava/lang/String; */

Class xt_getDeclaration__9dYAZ[] = { 0 };

Object getDeclaration__9dYAZ(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getModifiers__KRAh8.f(a2);
	a2 = toString_i_bHTat(i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		length__RGJv1.f(a1);
	if (i1 == 0)
		GOTO(24,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L1:	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a4)->class->M.
		getReturnType__sYISd.f(a4);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_Type*)a4)->class->M.
		toString__J7Vel.f(a4);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_SootMethod[7];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
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
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getParameterTypes__F9alY.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(94,L4);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
	GOTO(108,L3);

L2:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
L3:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(135,L2);
L4:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getExceptions__tTHxv.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(161,L7);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[9];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(188,L6);

L5:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootMethod[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,921304864)->f)(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L6:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(221,L5);
L7:	a1 = av1;
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



const Char ch_ca_mcgill_sable_soot_SootMethod[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','M','e','t','h','o','d','M','e','t','h','o',
'd',' ','d','o','e','s',' ','n','o','t',' ','h','a','v','e',' ','a',' ',
's','t','o','r','e','d',' ','r','e','p','r','e','s','e','n','t','a','t',
'i','o','n',' ','f','o','r','.','(',',',')',':',' ',',',' ',' ','t','h',
'r','o','w','s',' '};

const void *st_ca_mcgill_sable_soot_SootMethod[] = {
    ch_ca_mcgill_sable_soot_SootMethod+31,	/* 0. ca.mcgill.sable.soot.SootMethod */
    ch_ca_mcgill_sable_soot_SootMethod+79,	/* 1. Method does not have a stored representa */
    ch_ca_mcgill_sable_soot_SootMethod+80,	/* 2. . */
    ch_ca_mcgill_sable_soot_SootMethod+81,	/* 3. ( */
    ch_ca_mcgill_sable_soot_SootMethod+82,	/* 4. , */
    ch_ca_mcgill_sable_soot_SootMethod+83,	/* 5. ) */
    ch_ca_mcgill_sable_soot_SootMethod+84,	/* 6. : */
    ch_ca_mcgill_sable_soot_SootMethod+85,	/* 7.   */
    ch_ca_mcgill_sable_soot_SootMethod+87,	/* 8. ,  */
    ch_ca_mcgill_sable_soot_SootMethod+95,	/* 9.  throws  */
    0};
