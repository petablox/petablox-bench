/*  ca_mcgill_sable_soot_SootClass.c -- from Java class ca.mcgill.sable.soot.SootClass  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_AlreadyDeclaredException.h"
#include "ca_mcgill_sable_soot_AmbiguousFieldException.h"
#include "ca_mcgill_sable_soot_AmbiguousMethodException.h"
#include "ca_mcgill_sable_soot_Body.h"
#include "ca_mcgill_sable_soot_BodyExpr.h"
#include "ca_mcgill_sable_soot_DuplicateNameException.h"
#include "ca_mcgill_sable_soot_IncorrectDeclarerException.h"
#include "ca_mcgill_sable_soot_Modifier.h"
#include "ca_mcgill_sable_soot_NoSuchFieldException.h"
#include "ca_mcgill_sable_soot_NoSuchInterfaceException.h"
#include "ca_mcgill_sable_soot_NoSuchMethodException.h"
#include "ca_mcgill_sable_soot_NoSuperClassException.h"
#include "ca_mcgill_sable_soot_NotManagedException.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_coffi_Util.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_io_File.h"
#include "java_io_FileOutputStream.h"
#include "java_io_IOException.h"
#include "java_io_PrintWriter.h"
#include "java_lang_Runtime.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C,
    &cl_ca_mcgill_sable_soot_AmbiguousFieldException.C,
    &cl_ca_mcgill_sable_soot_AmbiguousMethodException.C,
    &cl_ca_mcgill_sable_soot_Body.C,
    &cl_ca_mcgill_sable_soot_BodyExpr.C,
    &cl_ca_mcgill_sable_soot_DuplicateNameException.C,
    &cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C,
    &cl_ca_mcgill_sable_soot_Modifier.C,
    &cl_ca_mcgill_sable_soot_NoSuchFieldException.C,
    &cl_ca_mcgill_sable_soot_NoSuchInterfaceException.C,
    &cl_ca_mcgill_sable_soot_NoSuchMethodException.C,
    &cl_ca_mcgill_sable_soot_NoSuperClassException.C,
    &cl_ca_mcgill_sable_soot_NotManagedException.C,
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_coffi_Util.C,
    &cl_ca_mcgill_sable_soot_jimple_JasminClass.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_io_File.C,
    &cl_java_io_FileOutputStream.C,
    &cl_java_io_IOException.C,
    &cl_java_io_PrintWriter.C,
    &cl_java_lang_Runtime.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_SootClass[];
extern const void *st_ca_mcgill_sable_soot_SootClass[];
extern Class xt_init_Si_PW9sw[];
extern Class xt_init_S_aMvYx[];
extern Class xt_isResolved__c2eig[];
extern Class xt_setResolved_z_4ByaD[];
extern Class xt_resolve__2VDEm[];
extern Class xt_resolveIfNecessary__Ugws1[];
extern Class xt_isManaged__RCFFF[];
extern Class xt_getManager__ukjHg[];
extern Class xt_getFieldCount__UA8co[];
extern Class xt_getFields__p0wtB[];
extern Class xt_addField_S_NUgZB[];
extern Class xt_removeField_S_E1577[];
extern Class xt_getField_ST_HMALo[];
extern Class xt_getField_S_S87Mw[];
extern Class xt_declaresField_S_xFERW[];
extern Class xt_declaresField_ST_wSHK8[];
extern Class xt_getMethodCount__9idHg[];
extern Class xt_getMethods__Ud7mi[];
extern Class xt_getMethod_SLT_Ra1ti[];
extern Class xt_getMethod_SL_Uq4VR[];
extern Class xt_getMethod_S_a1vrp[];
extern Class xt_declaresMethod_SL_K922d[];
extern Class xt_declaresMethod_SLT_1YMKA[];
extern Class xt_declaresMethod_S_Whe4B[];
extern Class xt_addMethod_S_HK8Oe[];
extern Class xt_removeMethod_S_GTu2x[];
extern Class xt_getModifiers__HdEmK[];
extern Class xt_setModifiers_i_tRjn4[];
extern Class xt_getInterfaceCount__Lh1Pa[];
extern Class xt_getInterfaces__eiIjW[];
extern Class xt_implementsInterface_S_raui5[];
extern Class xt_addInterface_S_wkJhJ[];
extern Class xt_removeInterface_S_tOxeV[];
extern Class xt_hasSuperClass__VWCHC[];
extern Class xt_getSuperClass__V2vll[];
extern Class xt_setSuperClass_S_VPrR3[];
extern Class xt_getName__xn8ku[];
extern Class xt_setName_S_Xh8gZ[];
extern Class xt_printTo_BP_DDVsn[];
extern Class xt_printTo_BPi_c1fEB[];
extern Class xt_write_B_dNHwl[];
extern Class xt_toString__OpNdy[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
static const struct ihash htable[8] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_SootClass.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_SootClass.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_SootClass.M.equals_O_Ba6e0, 0, 0,
};

static const CARRAY(30) nmchars = {&acl_char, 0, 30, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','C','l','a','s','s'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 30 };
static const Char nmiv_0[] = {
'n','a','m','e'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_1[] = {
'm','o','d','i','f','i','e','r','s'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'f','i','e','l','d','s'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_3[] = {
'm','e','t','h','o','d','s'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_4[] = {
'i','n','t','e','r','f','a','c','e','s'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
static const Char nmiv_5[] = {
'm','a','n','a','g','e','r'};
static const Char sgiv_5[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a','g',
'e','r',';'};
static const Char nmiv_6[] = {
'i','s','M','a','n','a','g','e','d'};
static const Char sgiv_6[] = {
'Z'};
static const Char nmiv_7[] = {
's','u','p','e','r','C','l','a','s','s'};
static const Char sgiv_7[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmiv_8[] = {
'i','s','R','e','s','o','l','v','e','d'};
static const Char sgiv_8[] = {
'Z'};
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
';','I',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmim_14[] = {
'i','s','R','e','s','o','l','v','e','d'};
static const Char sgim_14[] = {
'(',')','Z'};
static const Char nmim_15[] = {
's','e','t','R','e','s','o','l','v','e','d'};
static const Char sgim_15[] = {
'(','Z',')','V'};
static const Char nmim_16[] = {
'r','e','s','o','l','v','e'};
static const Char sgim_16[] = {
'(',')','V'};
static const Char nmim_17[] = {
'r','e','s','o','l','v','e','I','f','N','e','c','e','s','s','a','r','y'};
static const Char sgim_17[] = {
'(',')','V'};
static const Char nmim_18[] = {
'i','s','M','a','n','a','g','e','d'};
static const Char sgim_18[] = {
'(',')','Z'};
static const Char nmim_19[] = {
'g','e','t','M','a','n','a','g','e','r'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n',
'a','g','e','r',';'};
static const Char nmim_20[] = {
'g','e','t','F','i','e','l','d','C','o','u','n','t'};
static const Char sgim_20[] = {
'(',')','I'};
static const Char nmim_21[] = {
'g','e','t','F','i','e','l','d','s'};
static const Char sgim_21[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_22[] = {
'a','d','d','F','i','e','l','d'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','V'};
static const Char nmim_23[] = {
'r','e','m','o','v','e','F','i','e','l','d'};
static const Char sgim_23[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','V'};
static const Char nmim_24[] = {
'g','e','t','F','i','e','l','d'};
static const Char sgim_24[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','S','o','o',
't','F','i','e','l','d',';'};
static const Char nmim_25[] = {
'g','e','t','F','i','e','l','d'};
static const Char sgim_25[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','F','i','e','l','d',';'};
static const Char nmim_26[] = {
'd','e','c','l','a','r','e','s','F','i','e','l','d'};
static const Char sgim_26[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_27[] = {
'd','e','c','l','a','r','e','s','F','i','e','l','d'};
static const Char sgim_27[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','Z'};
static const Char nmim_28[] = {
'g','e','t','M','e','t','h','o','d','C','o','u','n','t'};
static const Char sgim_28[] = {
'(',')','I'};
static const Char nmim_29[] = {
'g','e','t','M','e','t','h','o','d','s'};
static const Char sgim_29[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_30[] = {
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_30[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p','e',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmim_31[] = {
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_31[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','S','o','o',
't','M','e','t','h','o','d',';'};
static const Char nmim_32[] = {
'g','e','t','M','e','t','h','o','d'};
static const Char sgim_32[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmim_33[] = {
'd','e','c','l','a','r','e','s','M','e','t','h','o','d'};
static const Char sgim_33[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';',')','Z'};
static const Char nmim_34[] = {
'd','e','c','l','a','r','e','s','M','e','t','h','o','d'};
static const Char sgim_34[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','s','t',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p','e',
';',')','Z'};
static const Char nmim_35[] = {
'd','e','c','l','a','r','e','s','M','e','t','h','o','d'};
static const Char sgim_35[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_36[] = {
'a','d','d','M','e','t','h','o','d'};
static const Char sgim_36[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','V'};
static const Char nmim_37[] = {
'r','e','m','o','v','e','M','e','t','h','o','d'};
static const Char sgim_37[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','M','e','t','h','o','d',';',')','V'};
static const Char nmim_38[] = {
'g','e','t','M','o','d','i','f','i','e','r','s'};
static const Char sgim_38[] = {
'(',')','I'};
static const Char nmim_39[] = {
's','e','t','M','o','d','i','f','i','e','r','s'};
static const Char sgim_39[] = {
'(','I',')','V'};
static const Char nmim_40[] = {
'g','e','t','I','n','t','e','r','f','a','c','e','C','o','u','n','t'};
static const Char sgim_40[] = {
'(',')','I'};
static const Char nmim_41[] = {
'g','e','t','I','n','t','e','r','f','a','c','e','s'};
static const Char sgim_41[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_42[] = {
'i','m','p','l','e','m','e','n','t','s','I','n','t','e','r','f','a','c',
'e'};
static const Char sgim_42[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_43[] = {
'a','d','d','I','n','t','e','r','f','a','c','e'};
static const Char sgim_43[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmim_44[] = {
'r','e','m','o','v','e','I','n','t','e','r','f','a','c','e'};
static const Char sgim_44[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmim_45[] = {
'h','a','s','S','u','p','e','r','C','l','a','s','s'};
static const Char sgim_45[] = {
'(',')','Z'};
static const Char nmim_46[] = {
'g','e','t','S','u','p','e','r','C','l','a','s','s'};
static const Char sgim_46[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmim_47[] = {
's','e','t','S','u','p','e','r','C','l','a','s','s'};
static const Char sgim_47[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','V'};
static const Char nmim_48[] = {
'g','e','t','N','a','m','e'};
static const Char sgim_48[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_49[] = {
's','e','t','N','a','m','e'};
static const Char sgim_49[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmim_50[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_50[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','d','y','E','x','p','r',';','L','j','a','v',
'a','/','i','o','/','P','r','i','n','t','W','r','i','t','e','r',';',')',
'V'};
static const Char nmim_51[] = {
'p','r','i','n','t','T','o'};
static const Char sgim_51[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','d','y','E','x','p','r',';','L','j','a','v',
'a','/','i','o','/','P','r','i','n','t','W','r','i','t','e','r',';','I',
')','V'};
static const Char nmim_52[] = {
'w','r','i','t','e'};
static const Char sgim_52[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','B','o','d','y','E','x','p','r',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, name), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,18,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, modifiers), 0,(const Char *)&nmiv_1,9,(const Char *)&sgiv_1,1,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, fields), 0,(const Char *)&nmiv_2,6,(const Char *)&sgiv_2,27,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, methods), 0,(const Char *)&nmiv_3,7,(const Char *)&sgiv_3,27,1,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, interfaces), 0,(const Char *)&nmiv_4,10,(const Char *)&sgiv_4,27,1,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, manager), 0,(const Char *)&nmiv_5,7,(const Char *)&sgiv_5,39,1,0x0,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, isManaged), 0,(const Char *)&nmiv_6,9,(const Char *)&sgiv_6,1,1,0x0,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, superClass), 0,(const Char *)&nmiv_7,10,(const Char *)&sgiv_7,32,1,0x0,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootClass, isResolved), 0,(const Char *)&nmiv_8,10,(const Char *)&sgiv_8,1,1,0x0,8}, 
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
} inr_ca_mcgill_sable_soot_SootClass = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_SootClass.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_SootClass cl_ca_mcgill_sable_soot_SootClass = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_SootClass),
    53,
    0,
    9,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    28, others,
    0, 0,
    ch_ca_mcgill_sable_soot_SootClass,
    st_ca_mcgill_sable_soot_SootClass,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_SootClass,
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
	{TMIT_native_code, toString__OpNdy,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,41,xt_toString__OpNdy},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_Si_PW9sw,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,22,1,0x1,0,xt_init_Si_PW9sw},
	{TMIT_native_code, init_S_aMvYx,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,21,1,0x1,1,xt_init_S_aMvYx},
	{TMIT_native_code, isResolved__c2eig,(const Char *)&nmim_14,10,
	(const Char *)&sgim_14,3,1,0x1,2,xt_isResolved__c2eig},
	{TMIT_native_code, setResolved_z_4ByaD,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,4,1,0x1,3,xt_setResolved_z_4ByaD},
	{TMIT_native_code, resolve__2VDEm,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,3,1,0x1,4,xt_resolve__2VDEm},
	{TMIT_native_code, resolveIfNecessary__Ugws1,(const Char *)&nmim_17,18,
	(const Char *)&sgim_17,3,1,0x1,5,xt_resolveIfNecessary__Ugws1},
	{TMIT_native_code, isManaged__RCFFF,(const Char *)&nmim_18,9,
	(const Char *)&sgim_18,3,1,0x1,6,xt_isManaged__RCFFF},
	{TMIT_native_code, getManager__ukjHg,(const Char *)&nmim_19,10,
	(const Char *)&sgim_19,41,1,0x1,7,xt_getManager__ukjHg},
	{TMIT_native_code, getFieldCount__UA8co,(const Char *)&nmim_20,13,
	(const Char *)&sgim_20,3,1,0x1,8,xt_getFieldCount__UA8co},
	{TMIT_native_code, getFields__p0wtB,(const Char *)&nmim_21,9,
	(const Char *)&sgim_21,29,1,0x1,9,xt_getFields__p0wtB},
	{TMIT_native_code, addField_S_NUgZB,(const Char *)&nmim_22,8,
	(const Char *)&sgim_22,35,1,0x1,10,xt_addField_S_NUgZB},
	{TMIT_native_code, removeField_S_E1577,(const Char *)&nmim_23,11,
	(const Char *)&sgim_23,35,1,0x1,11,xt_removeField_S_E1577},
	{TMIT_native_code, getField_ST_HMALo,(const Char *)&nmim_24,8,
	(const Char *)&sgim_24,79,1,0x1,12,xt_getField_ST_HMALo},
	{TMIT_native_code, getField_S_S87Mw,(const Char *)&nmim_25,8,
	(const Char *)&sgim_25,52,1,0x1,13,xt_getField_S_S87Mw},
	{TMIT_native_code, declaresField_S_xFERW,(const Char *)&nmim_26,13,
	(const Char *)&sgim_26,21,1,0x1,14,xt_declaresField_S_xFERW},
	{TMIT_native_code, declaresField_ST_wSHK8,(const Char *)&nmim_27,13,
	(const Char *)&sgim_27,48,1,0x1,15,xt_declaresField_ST_wSHK8},
	{TMIT_native_code, getMethodCount__9idHg,(const Char *)&nmim_28,14,
	(const Char *)&sgim_28,3,1,0x1,16,xt_getMethodCount__9idHg},
	{TMIT_native_code, getMethods__Ud7mi,(const Char *)&nmim_29,10,
	(const Char *)&sgim_29,29,1,0x1,17,xt_getMethods__Ud7mi},
	{TMIT_native_code, getMethod_SLT_Ra1ti,(const Char *)&nmim_30,9,
	(const Char *)&sgim_30,107,1,0x1,18,xt_getMethod_SLT_Ra1ti},
	{TMIT_native_code, getMethod_SL_Uq4VR,(const Char *)&nmim_31,9,
	(const Char *)&sgim_31,80,1,0x1,19,xt_getMethod_SL_Uq4VR},
	{TMIT_native_code, getMethod_S_a1vrp,(const Char *)&nmim_32,9,
	(const Char *)&sgim_32,53,1,0x1,20,xt_getMethod_S_a1vrp},
	{TMIT_native_code, declaresMethod_SL_K922d,(const Char *)&nmim_33,14,
	(const Char *)&sgim_33,48,1,0x1,21,xt_declaresMethod_SL_K922d},
	{TMIT_native_code, declaresMethod_SLT_1YMKA,(const Char *)&nmim_34,14,
	(const Char *)&sgim_34,75,1,0x1,22,xt_declaresMethod_SLT_1YMKA},
	{TMIT_native_code, declaresMethod_S_Whe4B,(const Char *)&nmim_35,14,
	(const Char *)&sgim_35,21,1,0x1,23,xt_declaresMethod_S_Whe4B},
	{TMIT_native_code, addMethod_S_HK8Oe,(const Char *)&nmim_36,9,
	(const Char *)&sgim_36,36,1,0x1,24,xt_addMethod_S_HK8Oe},
	{TMIT_native_code, removeMethod_S_GTu2x,(const Char *)&nmim_37,12,
	(const Char *)&sgim_37,36,1,0x1,25,xt_removeMethod_S_GTu2x},
	{TMIT_native_code, getModifiers__HdEmK,(const Char *)&nmim_38,12,
	(const Char *)&sgim_38,3,1,0x1,26,xt_getModifiers__HdEmK},
	{TMIT_native_code, setModifiers_i_tRjn4,(const Char *)&nmim_39,12,
	(const Char *)&sgim_39,4,1,0x1,27,xt_setModifiers_i_tRjn4},
	{TMIT_native_code, getInterfaceCount__Lh1Pa,(const Char *)&nmim_40,17,
	(const Char *)&sgim_40,3,1,0x1,28,xt_getInterfaceCount__Lh1Pa},
	{TMIT_native_code, getInterfaces__eiIjW,(const Char *)&nmim_41,13,
	(const Char *)&sgim_41,29,1,0x1,29,xt_getInterfaces__eiIjW},
	{TMIT_native_code, implementsInterface_S_raui5,(const Char *)&nmim_42,19,
	(const Char *)&sgim_42,21,1,0x1,30,xt_implementsInterface_S_raui5},
	{TMIT_native_code, addInterface_S_wkJhJ,(const Char *)&nmim_43,12,
	(const Char *)&sgim_43,35,1,0x1,31,xt_addInterface_S_wkJhJ},
	{TMIT_native_code, removeInterface_S_tOxeV,(const Char *)&nmim_44,15,
	(const Char *)&sgim_44,35,1,0x1,32,xt_removeInterface_S_tOxeV},
	{TMIT_native_code, hasSuperClass__VWCHC,(const Char *)&nmim_45,13,
	(const Char *)&sgim_45,3,1,0x1,33,xt_hasSuperClass__VWCHC},
	{TMIT_native_code, getSuperClass__V2vll,(const Char *)&nmim_46,13,
	(const Char *)&sgim_46,34,1,0x1,34,xt_getSuperClass__V2vll},
	{TMIT_native_code, setSuperClass_S_VPrR3,(const Char *)&nmim_47,13,
	(const Char *)&sgim_47,35,1,0x1,35,xt_setSuperClass_S_VPrR3},
	{TMIT_native_code, getName__xn8ku,(const Char *)&nmim_48,7,
	(const Char *)&sgim_48,20,1,0x1,36,xt_getName__xn8ku},
	{TMIT_native_code, setName_S_Xh8gZ,(const Char *)&nmim_49,7,
	(const Char *)&sgim_49,21,1,0x1,37,xt_setName_S_Xh8gZ},
	{TMIT_native_code, printTo_BP_DDVsn,(const Char *)&nmim_50,7,
	(const Char *)&sgim_50,55,1,0x1,38,xt_printTo_BP_DDVsn},
	{TMIT_native_code, printTo_BPi_c1fEB,(const Char *)&nmim_51,7,
	(const Char *)&sgim_51,56,1,0x1,39,xt_printTo_BPi_c1fEB},
	{TMIT_native_code, write_B_dNHwl,(const Char *)&nmim_52,5,
	(const Char *)&sgim_52,34,1,0x1,40,xt_write_B_dNHwl},
    } /* end of methodsigs */
};


/*M init_Si_PW9sw: ca.mcgill.sable.soot.SootClass.<init>(Ljava/lang/String;I)V */

Class xt_init_Si_PW9sw[] = { 0 };

Void init_Si_PW9sw(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->fields = a2;
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->methods = a2;
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->interfaces = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->name = a2;
	a1 = av0;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->modifiers = i2;
	a1 = av0;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isResolved = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_S_aMvYx: ca.mcgill.sable.soot.SootClass.<init>(Ljava/lang/String;)V */

Class xt_init_S_aMvYx[] = { 0 };

Void init_S_aMvYx(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->fields = a2;
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->methods = a2;
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->interfaces = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->name = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->modifiers = i2;
	a1 = av0;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isResolved = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isResolved__c2eig: ca.mcgill.sable.soot.SootClass.isResolved()Z */

Class xt_isResolved__c2eig[] = { 0 };

Boolean isResolved__c2eig(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isResolved;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setResolved_z_4ByaD: ca.mcgill.sable.soot.SootClass.setResolved(Z)V */

Class xt_setResolved_z_4ByaD[] = { 0 };

Void setResolved_z_4ByaD(Object p0, Boolean p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isResolved = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M resolve__2VDEm: ca.mcgill.sable.soot.SootClass.resolve()V */

Class xt_resolve__2VDEm[] = { 0 };

Void resolve__2VDEm(Object p0)
{
Object a0, a1, a2, a3, a4, a5;
Object av0;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isResolved;
	if (i1 == 0)
		GOTO(4,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_SootClass[1];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[2];
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

L1:	a1 = av0;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isResolved = i2;
	a1 = av0;
	resolveClass_S_9ue1K(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M resolveIfNecessary__Ugws1: ca.mcgill.sable.soot.SootClass.resolveIfNecessary()V */

Class xt_resolveIfNecessary__Ugws1[] = { 0 };

Void resolveIfNecessary__Ugws1(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isResolved;
	if (i1 != 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolve__2VDEm.f(a1);
L1:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isManaged__RCFFF: ca.mcgill.sable.soot.SootClass.isManaged()Z */

Class xt_isManaged__RCFFF[] = { 0 };

Boolean isManaged__RCFFF(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->isManaged;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getManager__ukjHg: ca.mcgill.sable.soot.SootClass.getManager()Lca/mcgill/sable/soot/SootClassManager; */

Class xt_getManager__ukjHg[] = { &cl_ca_mcgill_sable_soot_NotManagedException.C, 0 };

Object getManager__ukjHg(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->manager;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getFieldCount__UA8co: ca.mcgill.sable.soot.SootClass.getFieldCount()I */

Class xt_getFieldCount__UA8co[] = { 0 };

Int getFieldCount__UA8co(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->fields;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getFields__p0wtB: ca.mcgill.sable.soot.SootClass.getFields()Lca/mcgill/sable/util/List; */

Class xt_getFields__p0wtB[] = { 0 };

Object getFields__p0wtB(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->fields;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addField_S_NUgZB: ca.mcgill.sable.soot.SootClass.addField(Lca/mcgill/sable/soot/SootField;)V */

Class xt_addField_S_NUgZB[] = { &cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C, 0 };

Void addField_S_NUgZB(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->class->M.
		isDeclared__gLGfe.f(a1);
	if (i1 == 0)
		GOTO(8,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getName__LfNQ7.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8uRhq(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->fields;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->isDeclared = i2;
	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->declaringClass = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeField_S_E1577: ca.mcgill.sable.soot.SootClass.removeField(Lca/mcgill/sable/soot/SootField;)V */

Class xt_removeField_S_E1577[] = { &cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C, 0 };

Void removeField_S_E1577(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->class->M.
		isDeclared__gLGfe.f(a1);
	if (i1 == 0)
		GOTO(8,L1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->class->M.
		getDeclaringClass__Ddy5k.f(a1);
	a2 = av0;
	if (a1 == a2)
		GOTO(16,L2);
L1:	a1 = new(&cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getName__LfNQ7.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_5Epzo(a2,a3);
	athrow(a1);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->fields;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	a1 = av1;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->isDeclared = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getField_ST_HMALo: ca.mcgill.sable.soot.SootClass.getField(Ljava/lang/String;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/SootField; */

Class xt_getField_ST_HMALo[] = { &cl_ca_mcgill_sable_soot_NoSuchFieldException.C, 0 };

Object getField_ST_HMALo(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getFields__p0wtB.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(14,L2);

L1:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootField.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->name;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(37,L2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->type;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(49,L2);
	a1 = av4;
	return a1;

L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(61,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_NoSuchFieldException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_SootClass[3];
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
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
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
	init_S_IosIF(a2,a3);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getField_S_S87Mw: ca.mcgill.sable.soot.SootClass.getField(Ljava/lang/String;)Lca/mcgill/sable/soot/SootField; */

Class xt_getField_S_S87Mw[] = { &cl_ca_mcgill_sable_soot_NoSuchFieldException.C, &cl_ca_mcgill_sable_soot_AmbiguousFieldException.C, 0 };

Object getField_S_S87Mw(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av3, av4, av5;
Int i0, i1, i2, i3, i4, i5;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	a1 = 0;
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getFields__p0wtB.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av4 = a1;
	GOTO(19,L3);

L1:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootField.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->name;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(43,L3);
	i1 = iv2;
	if (i1 == 0)
		GOTO(47,L2);
	a1 = new(&cl_ca_mcgill_sable_soot_AmbiguousFieldException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__CRLvm(a2);
	athrow(a1);

L2:	i1 = 1;
	iv2 = i1;
	a1 = av5;
	av3 = a1;
L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(70,L1);
	i1 = iv2;
	if (i1 == 0)
		GOTO(74,L4);
	a1 = av3;
	return a1;

L4:	a1 = new(&cl_ca_mcgill_sable_soot_NoSuchFieldException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_SootClass[3];
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
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_SootClass*)a4)->class->M.
		getName__xn8ku.f(a4);
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
	init_S_IosIF(a2,a3);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M declaresField_S_xFERW: ca.mcgill.sable.soot.SootClass.declaresField(Ljava/lang/String;)Z */

Class xt_declaresField_S_xFERW[] = { 0 };

Boolean declaresField_S_xFERW(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getFields__p0wtB.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(14,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootField.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->name;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(35,L2);
	i1 = 1;
	return i1;

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(46,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M declaresField_ST_wSHK8: ca.mcgill.sable.soot.SootClass.declaresField(Ljava/lang/String;Lca/mcgill/sable/soot/Type;)Z */

Class xt_declaresField_ST_wSHK8[] = { 0 };

Boolean declaresField_ST_wSHK8(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getFields__p0wtB.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(14,L2);

L1:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootField.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->name;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(37,L2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->type;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(49,L2);
	i1 = 1;
	return i1;

L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(60,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethodCount__9idHg: ca.mcgill.sable.soot.SootClass.getMethodCount()I */

Class xt_getMethodCount__9idHg[] = { 0 };

Int getMethodCount__9idHg(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->methods;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethods__Ud7mi: ca.mcgill.sable.soot.SootClass.getMethods()Lca/mcgill/sable/util/List; */

Class xt_getMethods__Ud7mi[] = { 0 };

Object getMethods__Ud7mi(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->methods;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethod_SLT_Ra1ti: ca.mcgill.sable.soot.SootClass.getMethod(Ljava/lang/String;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/SootMethod; */

Class xt_getMethod_SLT_Ra1ti[] = { &cl_ca_mcgill_sable_soot_NoSuchMethodException.C, 0 };

Object getMethod_SLT_Ra1ti(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av4 = a1;
	GOTO(15,L2);

L1:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getName__iW73P.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(39,L2);
	a1 = av2;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getParameterTypes__F9alY.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1028981426)->f)(a1,a2);
	if (i1 == 0)
		GOTO(53,L2);
	a1 = av3;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getReturnType__sYISd.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(65,L2);
	a1 = av5;
	return a1;

L2:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(78,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_NoSuchMethodException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootClass*)a5)->class->M.
		getName__xn8ku.f(a5);
	a5 = valueOf_O_6F80r(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[6];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_O_wO0jp.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[7];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[8];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av3;
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
	init_S_dgubU(a2,a3);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethod_SL_Uq4VR: ca.mcgill.sable.soot.SootClass.getMethod(Ljava/lang/String;Lca/mcgill/sable/util/List;)Lca/mcgill/sable/soot/SootMethod; */

Class xt_getMethod_SL_Uq4VR[] = { &cl_ca_mcgill_sable_soot_NoSuchMethodException.C, &cl_ca_mcgill_sable_soot_AmbiguousMethodException.C, 0 };

Object getMethod_SL_Uq4VR(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av4, av5, av6;
Int i0, i1, i2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	i1 = 0;
	iv3 = i1;
	a1 = 0;
	av4 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av5 = a1;
	GOTO(20,L3);

L1:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getName__iW73P.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(44,L3);
	a1 = av2;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getParameterTypes__F9alY.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1028981426)->f)(a1,a2);
	if (i1 == 0)
		GOTO(58,L3);
	i1 = iv3;
	if (i1 == 0)
		GOTO(62,L2);
	a1 = new(&cl_ca_mcgill_sable_soot_AmbiguousMethodException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__tOAwN(a2);
	athrow(a1);

L2:	i1 = 1;
	iv3 = i1;
	a1 = av6;
	av4 = a1;
L3:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(86,L1);
	i1 = iv3;
	if (i1 == 0)
		GOTO(90,L4);
	a1 = av4;
	return a1;

L4:	a1 = new(&cl_ca_mcgill_sable_soot_NoSuchMethodException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Jg7CF(a2);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getMethod_S_a1vrp: ca.mcgill.sable.soot.SootClass.getMethod(Ljava/lang/String;)Lca/mcgill/sable/soot/SootMethod; */

Class xt_getMethod_S_a1vrp[] = { &cl_ca_mcgill_sable_soot_NoSuchMethodException.C, &cl_ca_mcgill_sable_soot_AmbiguousMethodException.C, 0 };

Object getMethod_S_a1vrp(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av3, av4, av5;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	a1 = 0;
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av4 = a1;
	GOTO(19,L3);

L1:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getName__iW73P.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(43,L3);
	i1 = iv2;
	if (i1 == 0)
		GOTO(47,L2);
	a1 = new(&cl_ca_mcgill_sable_soot_AmbiguousMethodException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__tOAwN(a2);
	athrow(a1);

L2:	i1 = 1;
	iv2 = i1;
	a1 = av5;
	av3 = a1;
L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(70,L1);
	i1 = iv2;
	if (i1 == 0)
		GOTO(74,L4);
	a1 = av3;
	return a1;

L4:	a1 = new(&cl_ca_mcgill_sable_soot_NoSuchMethodException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Jg7CF(a2);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M declaresMethod_SL_K922d: ca.mcgill.sable.soot.SootClass.declaresMethod(Ljava/lang/String;Lca/mcgill/sable/util/List;)Z */

Class xt_declaresMethod_SL_K922d[] = { 0 };

Boolean declaresMethod_SL_K922d(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av3 = a1;
	GOTO(14,L2);

L1:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getName__iW73P.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(37,L2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getParameterTypes__F9alY.f(a1);
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1028981426)->f)(a1,a2);
	if (i1 == 0)
		GOTO(51,L2);
	i1 = 1;
	return i1;

L2:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(62,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M declaresMethod_SLT_1YMKA: ca.mcgill.sable.soot.SootClass.declaresMethod(Ljava/lang/String;Lca/mcgill/sable/util/List;Lca/mcgill/sable/soot/Type;)Z */

Class xt_declaresMethod_SLT_1YMKA[] = { 0 };

Boolean declaresMethod_SLT_1YMKA(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4, av5;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av4 = a1;
	GOTO(15,L2);

L1:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getName__iW73P.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(39,L2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getParameterTypes__F9alY.f(a1);
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1028981426)->f)(a1,a2);
	if (i1 == 0)
		GOTO(53,L2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getReturnType__sYISd.f(a1);
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(65,L2);
	i1 = 1;
	return i1;

L2:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(77,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M declaresMethod_S_Whe4B: ca.mcgill.sable.soot.SootClass.declaresMethod(Ljava/lang/String;)Z */

Class xt_declaresMethod_S_Whe4B[] = { 0 };

Boolean declaresMethod_S_Whe4B(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(14,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getName__iW73P.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(35,L2);
	i1 = 1;
	return i1;

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(46,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addMethod_S_HK8Oe: ca.mcgill.sable.soot.SootClass.addMethod(Lca/mcgill/sable/soot/SootMethod;)V */

Class xt_addMethod_S_HK8Oe[] = { &cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C, 0 };

Void addMethod_S_HK8Oe(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		isDeclared__7aapj.f(a1);
	if (i1 == 0)
		GOTO(8,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_AlreadyDeclaredException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8uRhq(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->methods;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->isDeclared = i2;
	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->declaringClass = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeMethod_S_GTu2x: ca.mcgill.sable.soot.SootClass.removeMethod(Lca/mcgill/sable/soot/SootMethod;)V */

Class xt_removeMethod_S_GTu2x[] = { &cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C, 0 };

Void removeMethod_S_GTu2x(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		isDeclared__7aapj.f(a1);
	if (i1 == 0)
		GOTO(8,L1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getDeclaringClass__ywcIy.f(a1);
	a2 = av0;
	if (a1 == a2)
		GOTO(16,L2);
L1:	a1 = new(&cl_ca_mcgill_sable_soot_IncorrectDeclarerException.C);
	a2 = a1;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a3)->class->M.
		getName__iW73P.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_5Epzo(a2,a3);
	athrow(a1);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->methods;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	a1 = av1;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->isDeclared = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getModifiers__HdEmK: ca.mcgill.sable.soot.SootClass.getModifiers()I */

Class xt_getModifiers__HdEmK[] = { 0 };

Int getModifiers__HdEmK(Object p0)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->modifiers;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setModifiers_i_tRjn4: ca.mcgill.sable.soot.SootClass.setModifiers(I)V */

Class xt_setModifiers_i_tRjn4[] = { 0 };

Void setModifiers_i_tRjn4(Object p0, Int p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->modifiers = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getInterfaceCount__Lh1Pa: ca.mcgill.sable.soot.SootClass.getInterfaceCount()I */

Class xt_getInterfaceCount__Lh1Pa[] = { 0 };

Int getInterfaceCount__Lh1Pa(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->interfaces;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getInterfaces__eiIjW: ca.mcgill.sable.soot.SootClass.getInterfaces()Lca/mcgill/sable/util/List; */

Class xt_getInterfaces__eiIjW[] = { 0 };

Object getInterfaces__eiIjW(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->interfaces;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M implementsInterface_S_raui5: ca.mcgill.sable.soot.SootClass.implementsInterface(Ljava/lang/String;)Z */

Class xt_implementsInterface_S_raui5[] = { 0 };

Boolean implementsInterface_S_raui5(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getInterfaces__eiIjW.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(14,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(35,L2);
	i1 = 1;
	return i1;

L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(46,L1);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addInterface_S_wkJhJ: ca.mcgill.sable.soot.SootClass.addInterface(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_addInterface_S_wkJhJ[] = { &cl_ca_mcgill_sable_soot_DuplicateNameException.C, 0 };

Void addInterface_S_wkJhJ(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		implementsInterface_S_raui5.f(a1,a2);
	if (i1 == 0)
		GOTO(12,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_DuplicateNameException.C);
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
	init_S_W37o5(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->interfaces;
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

/*M removeInterface_S_tOxeV: ca.mcgill.sable.soot.SootClass.removeInterface(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_removeInterface_S_tOxeV[] = { &cl_ca_mcgill_sable_soot_NoSuchInterfaceException.C, 0 };

Void removeInterface_S_tOxeV(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		implementsInterface_S_raui5.f(a1,a2);
	if (i1 != 0)
		GOTO(8,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_NoSuchInterfaceException.C);
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
	init_S_NmrvH(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->interfaces;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-936165947)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasSuperClass__VWCHC: ca.mcgill.sable.soot.SootClass.hasSuperClass()Z */

Class xt_hasSuperClass__VWCHC[] = { 0 };

Boolean hasSuperClass__VWCHC(Object p0)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->superClass;
	if (a1 != 0)
		GOTO(8,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getSuperClass__V2vll: ca.mcgill.sable.soot.SootClass.getSuperClass()Lca/mcgill/sable/soot/SootClass; */

Class xt_getSuperClass__V2vll[] = { &cl_ca_mcgill_sable_soot_NoSuperClassException.C, 0 };

Object getSuperClass__V2vll(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->superClass;
	if (a1 != 0)
		GOTO(8,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_NoSuperClassException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__swovh(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->superClass;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setSuperClass_S_VPrR3: ca.mcgill.sable.soot.SootClass.setSuperClass(Lca/mcgill/sable/soot/SootClass;)V */

Class xt_setSuperClass_S_VPrR3[] = { 0 };

Void setSuperClass_S_VPrR3(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		resolveIfNecessary__Ugws1.f(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->superClass = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getName__xn8ku: ca.mcgill.sable.soot.SootClass.getName()Ljava/lang/String; */

Class xt_getName__xn8ku[] = { 0 };

Object getName__xn8ku(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->name;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setName_S_Xh8gZ: ca.mcgill.sable.soot.SootClass.setName(Ljava/lang/String;)V */

Class xt_setName_S_Xh8gZ[] = { &cl_ca_mcgill_sable_soot_DuplicateNameException.C, 0 };

Void setName_S_Xh8gZ(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->name = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printTo_BP_DDVsn: ca.mcgill.sable.soot.SootClass.printTo(Lca/mcgill/sable/soot/BodyExpr;Ljava/io/PrintWriter;)V */

Class xt_printTo_BP_DDVsn[] = { 0 };

Void printTo_BP_DDVsn(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	a3 = av2;
	i4 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		printTo_BPi_c1fEB.f(a1,a2,a3,i4);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printTo_BPi_c1fEB: ca.mcgill.sable.soot.SootClass.printTo(Lca/mcgill/sable/soot/BodyExpr;Ljava/io/PrintWriter;I)V */

Class xt_printTo_BPi_c1fEB[] = { 0 };

Void printTo_BPi_c1fEB(Object p0, Object p1, Object p2, Int p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av4, av5, av6, av7, av8;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_SootClass[9];
	av4 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av4;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getModifiers__HdEmK.f(a2);
	a2 = toString_i_bHTat(i2);
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
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		trim__6ufYg.f(a1);
	av4 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getModifiers__HdEmK.f(a1);
	i1 = isInterface_i_uUWV0(i1);
	if (i1 != 0)
		GOTO(50,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av4;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[11];
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
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		trim__6ufYg.f(a1);
	av4 = a1;
L1:	a1 = av2;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av4;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_SootClass[10];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
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
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		hasSuperClass__VWCHC.f(a1);
	if (i1 == 0)
		GOTO(117,L2);
	a1 = av2;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[12];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getSuperClass__V2vll.f(a3);
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
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getInterfaces__eiIjW.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(164,L5);
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av2;
	a2 = av5;
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
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	GOTO(190,L4);

L3:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[14];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av2;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[10];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
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
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
L4:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(238,L3);
L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[15];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getFields__p0wtB.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(269,L8);
	GOTO(272,L7);

L6:	a1 = av2;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[16];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_SootField.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getDeclaration__2OXsy.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_SootClass[17];
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
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
L7:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(319,L6);
L8:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av7 = a1;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(340,L12);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Int(*)())findinterface(a1,-1646441547)->f)(a1);
	if (i1 == 0)
		GOTO(352,L11);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	GOTO(359,L11);

L9:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getModifiers__KRAh8.f(a1);
	i1 = isAbstract_i_9wghh(i1);
	if (i1 != 0)
		GOTO(382,L10);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getModifiers__KRAh8.f(a1);
	i1 = isNative_i_c6Hg4(i1);
	if (i1 != 0)
		GOTO(393,L10);
	a1 = av1;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-2117377626)->f)(a1,a2);
	a2 = av2;
	i3 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1431160117)->f)(a1,a2,i3);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(418,L11);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
	GOTO(425,L11);

L10:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av2;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getDeclaration__9dYAZ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		print_S_SNBgP.f(a1,a2);
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[17];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 == 0)
		GOTO(456,L11);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println__iw97x.f(a1);
L11:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(470,L9);
L12:	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_SootClass[18];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		println_S_aYQRJ.f(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M write_B_dNHwl: ca.mcgill.sable.soot.SootClass.write(Lca/mcgill/sable/soot/BodyExpr;)V */

Class xt_write_B_dNHwl[] = { 0 };

Void write_B_dNHwl(Object p0, Object p1)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 0, 104, 1,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Object a0, a1, a2, a3, a4, a5;
volatile Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 1, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	pc = 0;
	a1 = new(&cl_java_io_File.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_SootClass*)a5)->class->M.
		getName__xn8ku.f(a5);
	a5 = valueOf_O_6F80r(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[19];
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
	init_S_luDdr(a2,a3);
	av2 = a1;
	a1 = new(&cl_java_io_FileOutputStream.C);
	a2 = a1;
	a3 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_F_jJpUP(a2,a3);
	av3 = a1;
	a1 = new(&cl_java_io_PrintWriter.C);
	a2 = a1;
	a3 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_O_nFdth(a2,a3);
	av4 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JasminClass.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SB_l5tPm(a2,a3,a4);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		print_P_Rc73b.f(a1,a2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		close__jP11m.f(a1);
	a1 = getRuntime__22FOF();
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[20];
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
	a3 = (Object)st_ca_mcgill_sable_soot_SootClass[19];
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
	a1 = ((struct in_java_lang_Runtime*)a1)->class->M.
		exec_S_MxLNV.f(a1,a2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_io_File*)a1)->class->M.
		delete__87rxw.f(a1);
	pc = 104;
	goto RETURN;

L1:  case 1:
	pc = 105;
	av2 = a1;
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_SootClass[21];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_O_wO0jp.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_SootClass[7];
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

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__OpNdy: ca.mcgill.sable.soot.SootClass.toString()Ljava/lang/String; */

Class xt_toString__OpNdy[] = { 0 };

Object toString__OpNdy(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_SootClass[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','C','l','a','s','s','S','o','o','t','C','l',
'a','s','s',' ',' ','a','l','r','e','a','d','y',' ','r','e','s','o','l',
'v','e','d','!','N','o',' ','f','i','e','l','d',' ',' ','i','n',' ','c',
'l','a','s','s',' ','.','(',')',' ',':',' ',' ',' ','c','l','a','s','s',
' ','e','x','t','e','n','d','s',' ',' ','i','m','p','l','e','m','e','n',
't','s',' ',',','{',' ',' ',' ',' ',';','}','.','j','a','s','m','i','n',
'j','a','s','m','i','n',' ','C','o','u','l','d',' ','n','o','t',' ','p',
'r','o','d','u','c','e',' ','n','e','w',' ','c','l','a','s','s','f','i',
'l','e','!',' ','('};

const void *st_ca_mcgill_sable_soot_SootClass[] = {
    ch_ca_mcgill_sable_soot_SootClass+30,	/* 0. ca.mcgill.sable.soot.SootClass */
    ch_ca_mcgill_sable_soot_SootClass+40,	/* 1. SootClass  */
    ch_ca_mcgill_sable_soot_SootClass+58,	/* 2.  already resolved! */
    ch_ca_mcgill_sable_soot_SootClass+67,	/* 3. No field  */
    ch_ca_mcgill_sable_soot_SootClass+77,	/* 4.  in class  */
    ch_ca_mcgill_sable_soot_SootClass+78,	/* 5. . */
    ch_ca_mcgill_sable_soot_SootClass+79,	/* 6. ( */
    ch_ca_mcgill_sable_soot_SootClass+80,	/* 7. ) */
    ch_ca_mcgill_sable_soot_SootClass+83,	/* 8.  :  */
    ch_ca_mcgill_sable_soot_SootClass+83,	/* 9.  */
    ch_ca_mcgill_sable_soot_SootClass+84,	/* 10.   */
    ch_ca_mcgill_sable_soot_SootClass+90,	/* 11.  class */
    ch_ca_mcgill_sable_soot_SootClass+99,	/* 12.  extends  */
    ch_ca_mcgill_sable_soot_SootClass+111,	/* 13.  implements  */
    ch_ca_mcgill_sable_soot_SootClass+112,	/* 14. , */
    ch_ca_mcgill_sable_soot_SootClass+113,	/* 15. { */
    ch_ca_mcgill_sable_soot_SootClass+117,	/* 16.      */
    ch_ca_mcgill_sable_soot_SootClass+118,	/* 17. ; */
    ch_ca_mcgill_sable_soot_SootClass+119,	/* 18. } */
    ch_ca_mcgill_sable_soot_SootClass+126,	/* 19. .jasmin */
    ch_ca_mcgill_sable_soot_SootClass+133,	/* 20. jasmin  */
    ch_ca_mcgill_sable_soot_SootClass+167,	/* 21. Could not produce new classfile! ( */
    0};
