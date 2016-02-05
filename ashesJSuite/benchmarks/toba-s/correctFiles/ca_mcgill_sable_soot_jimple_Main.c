/*  ca_mcgill_sable_soot_jimple_Main.c -- from Java class ca.mcgill.sable.soot.jimple.Main  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_BuildBody.h"
#include "ca_mcgill_sable_soot_ClassFile.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootClassManager.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_StoredBody.h"
#include "ca_mcgill_sable_soot_Timer.h"
#include "ca_mcgill_sable_soot_grimp_Grimp.h"
#include "ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass.h"
#include "ca_mcgill_sable_soot_jimple_Jimple.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_io_FileOutputStream.h"
#include "java_io_IOException.h"
#include "java_io_PrintStream.h"
#include "java_io_PrintWriter.h"
#include "java_lang_Double.h"
#include "java_lang_Exception.h"
#include "java_lang_Runtime.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_text_DecimalFormat.h"
#include "java_text_NumberFormat.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_BuildBody.C,
    &cl_ca_mcgill_sable_soot_ClassFile.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootClassManager.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_StoredBody.C,
    &cl_ca_mcgill_sable_soot_Timer.C,
    &cl_ca_mcgill_sable_soot_grimp_Grimp.C,
    &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.C,
    &cl_ca_mcgill_sable_soot_jimple_JasminClass.C,
    &cl_ca_mcgill_sable_soot_jimple_Jimple.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_io_FileOutputStream.C,
    &cl_java_io_IOException.C,
    &cl_java_io_PrintStream.C,
    &cl_java_io_PrintWriter.C,
    &cl_java_lang_Double.C,
    &cl_java_lang_Exception.C,
    &cl_java_lang_Runtime.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_text_DecimalFormat.C,
    &cl_java_text_NumberFormat.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_Main[];
extern const void *st_ca_mcgill_sable_soot_jimple_Main[];
extern Class xt_main_aS_oR52v[];
extern Class xt_toTimeString_Tl_TuPgB[];
extern Class xt_toFormattedString_d_2bbp6[];
extern Class xt_handleClass_SSPi_smwyD[];
extern Class xt_truncatedOf_di_gc88t[];
extern Class xt_paddedLeftOf_Si_f0AxX[];
extern Class xt_init__YAL7V[];
extern Class xt_clinit__dnvit[];

#define HASHMASK 0x0
/*  0.  489f8e6f  (0)  toString  */
static const struct ihash htable[2] = {
    1218416239, &cl_ca_mcgill_sable_soot_jimple_Main.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(32) nmchars = {&acl_char, 0, 32, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','M','a','i','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 32 };
static const Char nmcv_0[] = {
'n','a','i','v','e','J','i','m','p','l','i','f','i','c','a','t','i','o',
'n'};
static const Char sgcv_0[] = {
'Z'};
static const Char nmcv_1[] = {
'o','n','l','y','J','i','m','p','l','e','O','u','t','p','u','t'};
static const Char sgcv_1[] = {
'Z'};
static const Char nmcv_2[] = {
'i','s','V','e','r','b','o','s','e'};
static const Char sgcv_2[] = {
'Z'};
static const Char nmcv_3[] = {
'o','n','l','y','J','a','s','m','i','n','O','u','t','p','u','t'};
static const Char sgcv_3[] = {
'Z'};
static const Char nmcv_4[] = {
'i','s','P','r','o','f','i','l','i','n','g','O','p','t','i','m','i','z',
'a','t','i','o','n'};
static const Char sgcv_4[] = {
'Z'};
static const Char nmcv_5[] = {
'i','s','S','u','b','s','t','r','a','c','t','i','n','g','G','C'};
static const Char sgcv_5[] = {
'Z'};
static const Char nmcv_6[] = {
'o','l','d','T','y','p','i','n','g'};
static const Char sgcv_6[] = {
'Z'};
static const Char nmcv_7[] = {
'i','s','I','n','D','e','b','u','g','M','o','d','e'};
static const Char sgcv_7[] = {
'Z'};
static const Char nmcv_8[] = {
'u','s','e','P','a','c','k','e','d','L','i','v','e'};
static const Char sgcv_8[] = {
'Z'};
static const Char nmcv_9[] = {
'u','s','e','P','a','c','k','e','d','D','e','f','s'};
static const Char sgcv_9[] = {
'Z'};
static const Char nmcv_10[] = {
'i','s','T','e','s','t','i','n','g','P','e','r','f','o','r','m','a','n',
'c','e'};
static const Char sgcv_10[] = {
'Z'};
static const Char nmcv_11[] = {
'j','i','m','p','l','e','C','l','a','s','s','P','a','t','h'};
static const Char sgcv_11[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_12[] = {
'p','r','o','d','u','c','e','J','i','m','p','l','e','F','i','l','e'};
static const Char sgcv_12[] = {
'Z'};
static const Char nmcv_13[] = {
'p','r','o','d','u','c','e','J','a','s','m','i','n','F','i','l','e'};
static const Char sgcv_13[] = {
'Z'};
static const Char nmcv_14[] = {
'p','r','o','d','u','c','e','J','i','m','p','F','i','l','e'};
static const Char sgcv_14[] = {
'Z'};
static const Char nmcv_15[] = {
't','o','t','a','l','F','l','o','w','N','o','d','e','s'};
static const Char sgcv_15[] = {
'I'};
static const Char nmcv_16[] = {
't','o','t','a','l','F','l','o','w','C','o','m','p','u','t','a','t','i',
'o','n','s'};
static const Char sgcv_16[] = {
'I'};
static const Char nmcv_17[] = {
'c','o','p','i','e','s','T','i','m','e','r'};
static const Char sgcv_17[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_18[] = {
'd','e','f','s','T','i','m','e','r'};
static const Char sgcv_18[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_19[] = {
'u','s','e','s','T','i','m','e','r'};
static const Char sgcv_19[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_20[] = {
'l','i','v','e','T','i','m','e','r'};
static const Char sgcv_20[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_21[] = {
's','p','l','i','t','T','i','m','e','r'};
static const Char sgcv_21[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_22[] = {
'p','a','c','k','T','i','m','e','r'};
static const Char sgcv_22[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_23[] = {
'c','l','e','a','n','u','p','1','T','i','m','e','r'};
static const Char sgcv_23[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_24[] = {
'c','l','e','a','n','u','p','2','T','i','m','e','r'};
static const Char sgcv_24[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_25[] = {
'c','o','n','v','e','r','s','i','o','n','T','i','m','e','r'};
static const Char sgcv_25[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_26[] = {
'c','l','e','a','n','u','p','A','l','g','o','r','i','t','h','m','T','i',
'm','e','r'};
static const Char sgcv_26[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_27[] = {
'g','r','a','p','h','T','i','m','e','r'};
static const Char sgcv_27[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_28[] = {
'a','s','s','i','g','n','T','i','m','e','r'};
static const Char sgcv_28[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_29[] = {
'r','e','s','o','l','v','e','T','i','m','e','r'};
static const Char sgcv_29[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_30[] = {
't','o','t','a','l','T','i','m','e','r'};
static const Char sgcv_30[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_31[] = {
's','p','l','i','t','P','h','a','s','e','1','T','i','m','e','r'};
static const Char sgcv_31[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_32[] = {
's','p','l','i','t','P','h','a','s','e','2','T','i','m','e','r'};
static const Char sgcv_32[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_33[] = {
'u','s','e','P','h','a','s','e','1','T','i','m','e','r'};
static const Char sgcv_33[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_34[] = {
'u','s','e','P','h','a','s','e','2','T','i','m','e','r'};
static const Char sgcv_34[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_35[] = {
'u','s','e','P','h','a','s','e','3','T','i','m','e','r'};
static const Char sgcv_35[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_36[] = {
'd','e','f','s','S','e','t','u','p','T','i','m','e','r'};
static const Char sgcv_36[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_37[] = {
'd','e','f','s','A','n','a','l','y','s','i','s','T','i','m','e','r'};
static const Char sgcv_37[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_38[] = {
'd','e','f','s','P','o','s','t','T','i','m','e','r'};
static const Char sgcv_38[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_39[] = {
'l','i','v','e','S','e','t','u','p','T','i','m','e','r'};
static const Char sgcv_39[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_40[] = {
'l','i','v','e','A','n','a','l','y','s','i','s','T','i','m','e','r'};
static const Char sgcv_40[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_41[] = {
'l','i','v','e','P','o','s','t','T','i','m','e','r'};
static const Char sgcv_41[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_42[] = {
'a','g','g','r','e','g','a','t','i','o','n','T','i','m','e','r'};
static const Char sgcv_42[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_43[] = {
'g','r','i','m','p','A','g','g','r','e','g','a','t','i','o','n','T','i',
'm','e','r'};
static const Char sgcv_43[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_44[] = {
'd','e','a','d','C','o','d','e','T','i','m','e','r'};
static const Char sgcv_44[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_45[] = {
'p','r','o','p','a','g','a','t','o','r','T','i','m','e','r'};
static const Char sgcv_45[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_46[] = {
'c','o','n','v','e','r','s','i','o','n','L','o','c','a','l','C','o','u',
'n','t'};
static const Char sgcv_46[] = {
'I'};
static const Char nmcv_47[] = {
'c','l','e','a','n','u','p','1','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_47[] = {
'I'};
static const Char nmcv_48[] = {
's','p','l','i','t','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_48[] = {
'I'};
static const Char nmcv_49[] = {
'a','s','s','i','g','n','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_49[] = {
'I'};
static const Char nmcv_50[] = {
'p','a','c','k','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_50[] = {
'I'};
static const Char nmcv_51[] = {
'c','l','e','a','n','u','p','2','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_51[] = {
'I'};
static const Char nmcv_52[] = {
'c','o','n','v','e','r','s','i','o','n','S','t','m','t','C','o','u','n',
't'};
static const Char sgcv_52[] = {
'I'};
static const Char nmcv_53[] = {
'c','l','e','a','n','u','p','1','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_53[] = {
'I'};
static const Char nmcv_54[] = {
's','p','l','i','t','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_54[] = {
'I'};
static const Char nmcv_55[] = {
'a','s','s','i','g','n','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_55[] = {
'I'};
static const Char nmcv_56[] = {
'p','a','c','k','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_56[] = {
'I'};
static const Char nmcv_57[] = {
'c','l','e','a','n','u','p','2','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_57[] = {
'I'};
static const Char nmsm_0[] = {
'm','a','i','n'};
static const Char sgsm_0[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';',')','V'};
static const Char nmsm_1[] = {
't','o','T','i','m','e','S','t','r','i','n','g'};
static const Char sgsm_1[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','i','m','e','r',';','J',')','L','j','a','v','a',
'/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmsm_2[] = {
't','o','F','o','r','m','a','t','t','e','d','S','t','r','i','n','g'};
static const Char sgsm_2[] = {
'(','D',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmsm_3[] = {
'h','a','n','d','l','e','C','l','a','s','s'};
static const Char sgsm_3[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';','L','j','a',
'v','a','/','l','a','n','g','/','S','t','r','i','n','g',';','L','j','a',
'v','a','/','i','o','/','P','r','i','n','t','W','r','i','t','e','r',';',
'I',')','V'};
static const Char nmsm_4[] = {
't','r','u','n','c','a','t','e','d','O','f'};
static const Char sgsm_4[] = {
'(','D','I',')','D'};
static const Char nmsm_5[] = {
'p','a','d','d','e','d','L','e','f','t','O','f'};
static const Char sgsm_5[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmsm_6[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_6[] = {
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

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.naiveJimplification,(const Char *)&nmcv_0,19,(const Char *)&sgcv_0,1,1,0x8,0}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.onlyJimpleOutput,(const Char *)&nmcv_1,16,(const Char *)&sgcv_1,1,1,0x8,1}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose,(const Char *)&nmcv_2,9,(const Char *)&sgcv_2,1,1,0x9,2}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.onlyJasminOutput,(const Char *)&nmcv_3,16,(const Char *)&sgcv_3,1,1,0x8,3}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization,(const Char *)&nmcv_4,23,(const Char *)&sgcv_4,1,1,0x8,4}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.isSubstractingGC,(const Char *)&nmcv_5,16,(const Char *)&sgcv_5,1,1,0x8,5}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.oldTyping,(const Char *)&nmcv_6,9,(const Char *)&sgcv_6,1,1,0x8,6}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.isInDebugMode,(const Char *)&nmcv_7,13,(const Char *)&sgcv_7,1,1,0x8,7}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.usePackedLive,(const Char *)&nmcv_8,13,(const Char *)&sgcv_8,1,1,0x8,8}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.usePackedDefs,(const Char *)&nmcv_9,13,(const Char *)&sgcv_9,1,1,0x8,9}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.isTestingPerformance,(const Char *)&nmcv_10,20,(const Char *)&sgcv_10,1,1,0x8,10}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.jimpleClassPath,(const Char *)&nmcv_11,15,(const Char *)&sgcv_11,18,1,0x9,11}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.produceJimpleFile,(const Char *)&nmcv_12,17,(const Char *)&sgcv_12,1,1,0x8,12}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.produceJasminFile,(const Char *)&nmcv_13,17,(const Char *)&sgcv_13,1,1,0x8,13}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.produceJimpFile,(const Char *)&nmcv_14,15,(const Char *)&sgcv_14,1,1,0x8,14}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowNodes,(const Char *)&nmcv_15,14,(const Char *)&sgcv_15,1,1,0x8,15}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowComputations,(const Char *)&nmcv_16,21,(const Char *)&sgcv_16,1,1,0x8,16}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.copiesTimer,(const Char *)&nmcv_17,11,(const Char *)&sgcv_17,28,1,0x8,17}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.defsTimer,(const Char *)&nmcv_18,9,(const Char *)&sgcv_18,28,1,0x8,18}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.usesTimer,(const Char *)&nmcv_19,9,(const Char *)&sgcv_19,28,1,0x8,19}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.liveTimer,(const Char *)&nmcv_20,9,(const Char *)&sgcv_20,28,1,0x8,20}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.splitTimer,(const Char *)&nmcv_21,10,(const Char *)&sgcv_21,28,1,0x8,21}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.packTimer,(const Char *)&nmcv_22,9,(const Char *)&sgcv_22,28,1,0x8,22}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup1Timer,(const Char *)&nmcv_23,13,(const Char *)&sgcv_23,28,1,0x8,23}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup2Timer,(const Char *)&nmcv_24,13,(const Char *)&sgcv_24,28,1,0x8,24}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.conversionTimer,(const Char *)&nmcv_25,15,(const Char *)&sgcv_25,28,1,0x8,25}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.cleanupAlgorithmTimer,(const Char *)&nmcv_26,21,(const Char *)&sgcv_26,28,1,0x8,26}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.graphTimer,(const Char *)&nmcv_27,10,(const Char *)&sgcv_27,28,1,0x8,27}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.assignTimer,(const Char *)&nmcv_28,11,(const Char *)&sgcv_28,28,1,0x8,28}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.resolveTimer,(const Char *)&nmcv_29,12,(const Char *)&sgcv_29,28,1,0x8,29}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.totalTimer,(const Char *)&nmcv_30,10,(const Char *)&sgcv_30,28,1,0x8,30}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.splitPhase1Timer,(const Char *)&nmcv_31,16,(const Char *)&sgcv_31,28,1,0x8,31}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.splitPhase2Timer,(const Char *)&nmcv_32,16,(const Char *)&sgcv_32,28,1,0x8,32}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase1Timer,(const Char *)&nmcv_33,14,(const Char *)&sgcv_33,28,1,0x8,33}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase2Timer,(const Char *)&nmcv_34,14,(const Char *)&sgcv_34,28,1,0x8,34}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase3Timer,(const Char *)&nmcv_35,14,(const Char *)&sgcv_35,28,1,0x8,35}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.defsSetupTimer,(const Char *)&nmcv_36,14,(const Char *)&sgcv_36,28,1,0x8,36}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.defsAnalysisTimer,(const Char *)&nmcv_37,17,(const Char *)&sgcv_37,28,1,0x8,37}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.defsPostTimer,(const Char *)&nmcv_38,13,(const Char *)&sgcv_38,28,1,0x8,38}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.liveSetupTimer,(const Char *)&nmcv_39,14,(const Char *)&sgcv_39,28,1,0x8,39}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.liveAnalysisTimer,(const Char *)&nmcv_40,17,(const Char *)&sgcv_40,28,1,0x8,40}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.livePostTimer,(const Char *)&nmcv_41,13,(const Char *)&sgcv_41,28,1,0x8,41}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.aggregationTimer,(const Char *)&nmcv_42,16,(const Char *)&sgcv_42,28,1,0x8,42}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.grimpAggregationTimer,(const Char *)&nmcv_43,21,(const Char *)&sgcv_43,28,1,0x8,43}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.deadCodeTimer,(const Char *)&nmcv_44,13,(const Char *)&sgcv_44,28,1,0x8,44}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.propagatorTimer,(const Char *)&nmcv_45,15,(const Char *)&sgcv_45,28,1,0x8,45}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.conversionLocalCount,(const Char *)&nmcv_46,20,(const Char *)&sgcv_46,1,1,0x8,46}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup1LocalCount,(const Char *)&nmcv_47,18,(const Char *)&sgcv_47,1,1,0x8,47}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.splitLocalCount,(const Char *)&nmcv_48,15,(const Char *)&sgcv_48,1,1,0x8,48}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.assignLocalCount,(const Char *)&nmcv_49,16,(const Char *)&sgcv_49,1,1,0x8,49}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.packLocalCount,(const Char *)&nmcv_50,14,(const Char *)&sgcv_50,1,1,0x8,50}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup2LocalCount,(const Char *)&nmcv_51,18,(const Char *)&sgcv_51,1,1,0x8,51}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.conversionStmtCount,(const Char *)&nmcv_52,19,(const Char *)&sgcv_52,1,1,0x8,52}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup1StmtCount,(const Char *)&nmcv_53,17,(const Char *)&sgcv_53,1,1,0x8,53}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.splitStmtCount,(const Char *)&nmcv_54,14,(const Char *)&sgcv_54,1,1,0x8,54}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.assignStmtCount,(const Char *)&nmcv_55,15,(const Char *)&sgcv_55,1,1,0x8,55}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.packStmtCount,(const Char *)&nmcv_56,13,(const Char *)&sgcv_56,1,1,0x8,56}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup2StmtCount,(const Char *)&nmcv_57,17,(const Char *)&sgcv_57,1,1,0x8,57}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())main_aS_oR52v,
	(const Char *)&nmsm_0,4,(const Char *)&sgsm_0,22,
	1,0x9,0,xt_main_aS_oR52v},
    {TMIT_native_code, (Void(*)())toTimeString_Tl_TuPgB,
	(const Char *)&nmsm_1,12,(const Char *)&sgsm_1,49,
	1,0xa,1,xt_toTimeString_Tl_TuPgB},
    {TMIT_native_code, (Void(*)())toFormattedString_d_2bbp6,
	(const Char *)&nmsm_2,17,(const Char *)&sgsm_2,21,
	1,0xa,2,xt_toFormattedString_d_2bbp6},
    {TMIT_native_code, (Void(*)())handleClass_SSPi_smwyD,
	(const Char *)&nmsm_3,11,(const Char *)&sgsm_3,75,
	1,0xa,3,xt_handleClass_SSPi_smwyD},
    {TMIT_native_code, (Void(*)())truncatedOf_di_gc88t,
	(const Char *)&nmsm_4,11,(const Char *)&sgsm_4,5,
	1,0x9,4,xt_truncatedOf_di_gc88t},
    {TMIT_native_code, (Void(*)())paddedLeftOf_Si_f0AxX,
	(const Char *)&nmsm_5,12,(const Char *)&sgsm_5,39,
	1,0x9,5,xt_paddedLeftOf_Si_f0AxX},
    {TMIT_native_code, (Void(*)())clinit__dnvit,
	(const Char *)&nmsm_6,8,(const Char *)&sgsm_6,3,
	1,0x8,7,xt_clinit__dnvit},
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
} inr_ca_mcgill_sable_soot_jimple_Main = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_Main.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_Main cl_ca_mcgill_sable_soot_jimple_Main = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_Main),
    12,
    7,
    0,
    58,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    29, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_Main,
    st_ca_mcgill_sable_soot_jimple_Main,
    clinit__dnvit,
    init__YAL7V,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_Main,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__YAL7V,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,6,xt_init__YAL7V},
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
    } /* end of methodsigs */
};


/*M main_aS_oR52v: ca.mcgill.sable.soot.jimple.Main.main([Ljava/lang/String;)V */

Class xt_main_aS_oR52v[] = { &cl_java_lang_RuntimeException.C, 0 };

Void main_aS_oR52v(Object p1)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 878, 921, 27,
    &cl_java_lang_Exception.C, 977, 1090, 31,
    &cl_java_lang_Exception.C, 1130, 1141, 33,
    &cl_java_io_IOException.C, 1183, 1193, 36,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Class c0, c1;
Object a0, a1, a2, a3, a4, a5, a6;
volatile Object av0, av5, av9, av11, av12, av13, av14, av15, av18, av19;
Int i0, i1, i2, i3, i4, i5, i6;
volatile Int iv1, iv4, iv6, iv7, iv8, iv10;
Long l0, l1, l2, l3, l4, l5, l6;
volatile Long lv2, lv11, lv12, lv16;
Float f0, f1, f2, f3, f4, f5, f6;
volatile Float fv13, fv14;
Double d0, d1, d2, d3, d4, d5, d6;
PROLOGUE;

	av0 = p1;

	if (cl_ca_mcgill_sable_soot_jimple_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_Main.C);

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 4, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	i1 = 0;
	iv1 = i1;
	l2 = 0;
	lv2 = l2;
	i1 = 0;
	iv4 = i1;
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		start__WrH0x.f(a1);
	a1 = new(&cl_ca_mcgill_sable_soot_SootClassManager.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__dSqpU(a2);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 != 0)
		GOTO(24,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[9];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[11];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[12];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[14];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[15];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[17];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[18];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[19];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[20];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[19];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[21];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[22];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[23];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[24];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[25];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[26];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[27];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[28];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[29];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[30];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[31];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	i1 = 0;
	exit_i_d4JE9(i1);
L1:  case 1:
	i1 = 0;
	iv6 = i1;
	GOTO(354,L21);

L2:  case 2:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[32];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(366,L3);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.produceJimpleFile = i1;
	GOTO(373,L20);

L3:  case 3:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[33];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(385,L4);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.produceJasminFile = i1;
	GOTO(392,L20);

L4:  case 4:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[34];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(404,L5);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.produceJimpFile = i1;
	GOTO(411,L20);

L5:  case 5:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[35];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(423,L6);
	i1 = iv4;
	i2 = 8;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(433,L20);

L6:  case 6:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[36];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(445,L7);
	i1 = iv4;
	i2 = 1;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(454,L20);

L7:  case 7:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[37];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(466,L8);
	i1 = iv4;
	i2 = 16;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(476,L20);

L8:  case 8:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[38];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(488,L9);
	i1 = iv4;
	i2 = 32;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(498,L20);

L9:  case 9:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[39];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(510,L10);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization = i1;
	GOTO(517,L20);

L10:  case 10:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[40];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(529,L11);
	i1 = 1;
	setSubstractingGC_z_D02qI(i1);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.isSubstractingGC = i1;
	GOTO(540,L20);

L11:  case 11:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[41];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(552,L12);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.isVerbose = i1;
	GOTO(559,L20);

L12:  case 12:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[42];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(571,L13);
	i1 = iv4;
	i2 = 4;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(580,L20);

L13:  case 13:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[43];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(592,L14);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.oldTyping = i1;
	GOTO(599,L20);

L14:  case 14:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[44];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(611,L15);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.usePackedLive = i1;
	GOTO(618,L20);

L15:  case 15:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[45];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(630,L16);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.usePackedDefs = i1;
	GOTO(637,L20);

L16:  case 16:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[46];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(649,L17);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization = i1;
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.isTestingPerformance = i1;
	GOTO(660,L20);

L17:  case 17:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[47];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(672,L18);
	iv6 += 1;
	i1 = iv6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 >= i2)
		GOTO(682,L20);
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	cl_ca_mcgill_sable_soot_jimple_Main.V.jimpleClassPath = a1;
	GOTO(692,L20);

L18:  case 18:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[48];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(704,L19);
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.isInDebugMode = i1;
	GOTO(711,L20);

L19:  case 19:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[49];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(723,L22);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[50];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	i4 = iv6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
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
	i1 = 0;
	exit_i_d4JE9(i1);
	GOTO(755,L20);

L20:  case 20:
	i1 = iv6;
	i2 = 1;
	i1 = i1 + i2;
	iv1 = i1;
	iv6 += 1;
L21:  case 21:
	i1 = iv6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(770,L2);
L22:  case 22:
	i1 = 0;
	iv7 = i1;
	i1 = 0;
	iv8 = i1;
	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av9 = a1;
	i1 = iv1;
	iv10 = i1;
	GOTO(791,L39);

L23:  case 23:
	pc = 794;
	a1 = av5;
	a2 = av0;
	i3 = iv10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av11 = a1;
	a1 = 0;
	av13 = a1;
	a1 = 0;
	av14 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[51];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av11;
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
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[52];
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
		print_S_N0HOG.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		flush__uSMaW.f(a1);
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.produceJasminFile;
	if (i1 == 0)
		GOTO(851,L24);
	a1 = (Object)st_ca_mcgill_sable_soot_jimple_Main[53];
	av12 = a1;
	GOTO(858,L26);

L24:  case 24:
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.produceJimpleFile;
	if (i1 == 0)
		GOTO(864,L25);
	a1 = (Object)st_ca_mcgill_sable_soot_jimple_Main[54];
	av12 = a1;
	GOTO(871,L26);

L25:  case 25:
	a1 = (Object)st_ca_mcgill_sable_soot_jimple_Main[55];
	av12 = a1;
L26:  case 26:
	pc = 878;
	a1 = new(&cl_java_io_FileOutputStream.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = av11;
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
	a4 = av12;
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
	init_S_MxdL0(a2,a3);
	av14 = a1;
	a1 = new(&cl_java_io_PrintWriter.C);
	a2 = a1;
	a3 = av14;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_O_nFdth(a2,a3);
	av13 = a1;
	pc = 921;
	GOTO(921,L28);

L27:  case 27:
	pc = 924;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[56];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av11;
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
	a3 = av12;
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
L28:  case 28:
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isTestingPerformance;
	if (i1 == 0)
		GOTO(959,L32);
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getMethods__Ud7mi.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av15 = a1;
	l2 = 0;
	lv16 = l2;
	pc = 977;
	GOTO(977,L30);

L29:  case 29:
	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootMethod.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av18 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_BuildBody.C);
	a2 = a1;
	a3 = v__WbL8F();
	a4 = new(&cl_ca_mcgill_sable_soot_StoredBody.C);
	a5 = a4;
	a6 = v__w18M7();
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	init_B_GpjPv(a5,a6);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_BB_1pYXe(a2,a3,a4);
	a2 = av18;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_BuildBody*)a1)->class->M.
		resolveFor_S_ap4uc.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av19 = a1;
	a1 = av9;
	a2 = av19;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
	l2 = lv16;
	a3 = av19;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->class->M.
		getStmtList__BJdpo.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArrayList*)a3)->class->M.
		size__xLkH6.f(a3);
	l4 = i3;
	l2 = l2 + l4;
	lv16 = l2;
L30:  case 30:
	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1053,L29);
	l2 = lv2;
	l4 = lv16;
	l2 = l2 + l4;
	lv2 = l2;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	l5 = lv16;
	a4 = valueOf_l_KWKSp(l5);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[57];
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
	iv8 += 1;
	pc = 1090;
	GOTO(1090,L38);

L31:  case 31:
	pc = 1093;
	av18 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[58];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
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
	iv7 += 1;
	GOTO(1121,L38);

L32:  case 32:
	pc = 1124;
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isInDebugMode;
	if (i1 != 0)
		GOTO(1127,L34);
	pc = 1130;
	a1 = av11;
	a2 = av12;
	a3 = av13;
	i4 = iv4;
	handleClass_SSPi_smwyD(a1,a2,a3,i4);
	pc = 1141;
	GOTO(1141,L35);

L33:  case 33:
	pc = 1144;
	av15 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[58];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av15;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
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
	GOTO(1169,L35);

L34:  case 34:
	pc = 1172;
	a1 = av11;
	a2 = av12;
	a3 = av13;
	i4 = iv4;
	handleClass_SSPi_smwyD(a1,a2,a3,i4);
L35:  case 35:
	pc = 1183;
	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintWriter*)a1)->class->M.
		flush__LtE2O.f(a1);
	a1 = av14;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_FileOutputStream*)a1)->class->M.
		close__qwNFY.f(a1);
	pc = 1193;
	GOTO(1193,L37);

L36:  case 36:
	pc = 1196;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[59];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av11;
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
	a3 = av12;
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
L37:  case 37:
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
L38:  case 38:
	pc = 1234;
	iv10 += 1;
L39:  case 39:
	pc = 1237;
	i1 = iv10;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(1241,L23);
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(1247,L45);
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isTestingPerformance;
	if (i1 == 0)
		GOTO(1253,L42);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[60];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[61];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[62];
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
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av11 = a1;
	l2 = 0;
	lv12 = l2;
	GOTO(1306,L41);

L40:  case 40:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av14 = a1;
	l2 = lv12;
	a3 = av14;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a3)->class->M.
		getStmtList__BJdpo.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArrayList*)a3)->class->M.
		size__xLkH6.f(a3);
	l4 = i3;
	l2 = l2 + l4;
	lv12 = l2;
L41:  case 41:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1342,L40);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[63];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv12;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[64];
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
L42:  case 42:
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv11 = l2;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[65];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[66];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.graphTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[67];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.defsTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[68];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.usesTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[69];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase1Timer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[70];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase2Timer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[71];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase3Timer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[72];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.cleanupAlgorithmTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[73];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.copiesTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[74];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.liveTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[75];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.resolveTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[76];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.conversionTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[77];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.splitTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[78];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.assignTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[79];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.propagatorTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[80];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.deadCodeTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[81];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.aggregationTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[82];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.packTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	l2 = lv11;
	f1 = l2;
	f2 = 1000.0;
	f1 = f1 / f2;
	fv13 = f1;
	a1 = getRuntime__22FOF();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_java_lang_Runtime*)a1)->class->M.
		totalMemory__8OtkB.f(a1);
	a3 = getRuntime__22FOF();
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_java_lang_Runtime*)a3)->class->M.
		freeMemory__Ivacq.f(a3);
	l2 = l2 - l4;
	f1 = l2;
	f2 = 1000.0;
	f1 = f1 / f2;
	fv14 = f1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[83];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isSubstractingGC;
	if (i1 == 0)
		GOTO(1965,L43);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[84];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[85];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	init_ca_mcgill_sable_soot_Timer();
	a3 = cl_ca_mcgill_sable_soot_Timer.V.forcedGarbageCollectionTimer;
	l5 = lv11;
	a3 = toTimeString_Tl_TuPgB(a3,l5);
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
L43:  case 43:
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[86];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	f3 = fv14;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_f_UN6Xq.f(a2,f3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[87];
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
	i1 = cl_ca_mcgill_sable_soot_jimple_Main.V.isTestingPerformance;
	if (i1 == 0)
		GOTO(2036,L44);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[88];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	l5 = lv2;
	f4 = l5;
	f5 = fv13;
	f4 = f4 / f5;
	d5 = f4;
	a4 = toFormattedString_d_2bbp6(d5);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[89];
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
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	f4 = fv14;
	l6 = lv2;
	f5 = l6;
	f4 = f4 / f5;
	d5 = f4;
	a4 = toFormattedString_d_2bbp6(d5);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[90];
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
L44:  case 44:
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_Main[91];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowNodes;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[92];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowComputations;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[93];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowComputations;
	d4 = i3;
	i5 = cl_ca_mcgill_sable_soot_jimple_Main.V.totalFlowNodes;
	d6 = i5;
	d4 = d4 / d6;
	i5 = 2;
	d4 = truncatedOf_di_gc88t(d4,i5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_d_SPrwV.f(a2,d4);
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
L45:  case 45:
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toTimeString_Tl_TuPgB: ca.mcgill.sable.soot.jimple.Main.toTimeString(Lca/mcgill/sable/soot/Timer;J)Ljava/lang/String; */

Class xt_toTimeString_Tl_TuPgB[] = { 0 };

Object toTimeString_Tl_TuPgB(Object p1, Long p2)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av3, av4, av7;
Long l0, l1, l2, l3, l4, l5, l6;
Long lv1, lv5;
Double d0, d1, d2, d3, d4, d5, d6;
PROLOGUE;

	av0 = p1;
	lv1 = p2;

	if (cl_ca_mcgill_sable_soot_jimple_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_Main.C);

L0:	a1 = new(&cl_java_text_DecimalFormat.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[94];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_adUa3(a2,a3);
	av3 = a1;
	a1 = new(&cl_java_text_DecimalFormat.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[95];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_adUa3(a2,a3);
	av4 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv5 = l2;
	a1 = av3;
	l3 = lv5;
	d3 = l3;
	d5 = 1000.0;
	d3 = d3 / d5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_text_NumberFormat*)a1)->class->M.
		format_d_Ztgcl.f(a1,d3);
	av7 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av7;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[96];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[97];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av4;
	l4 = lv5;
	d4 = l4;
	d6 = 100.0;
	d4 = d4 * d6;
	l6 = lv1;
	d6 = l6;
	d4 = d4 / d6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_text_NumberFormat*)a2)->class->M.
		format_d_Ztgcl.f(a2,d4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[98];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[99];
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
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toFormattedString_d_2bbp6: ca.mcgill.sable.soot.jimple.Main.toFormattedString(D)Ljava/lang/String; */

Class xt_toFormattedString_d_2bbp6[] = { 0 };

Object toFormattedString_d_2bbp6(Double p1)
{
Object a0, a1, a2, a3, a4, a5;
Int i0, i1, i2, i3, i4, i5;
Double d0, d1, d2, d3, d4, d5;
Double dv0;
PROLOGUE;

	dv0 = p1;

	if (cl_ca_mcgill_sable_soot_jimple_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_Main.C);

L0:	a1 = new(&cl_java_lang_Double.C);
	a2 = a1;
	d4 = dv0;
	i5 = 2;
	d4 = truncatedOf_di_gc88t(d4,i5);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_d_aASAU(a2,d4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_Double*)a1)->class->M.
		toString__YWrdx.f(a1);
	i2 = 5;
	a1 = paddedLeftOf_Si_f0AxX(a1,i2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M handleClass_SSPi_smwyD: ca.mcgill.sable.soot.jimple.Main.handleClass(Lca/mcgill/sable/soot/SootClass;Ljava/lang/String;Ljava/io/PrintWriter;I)V */

Class xt_handleClass_SSPi_smwyD[] = { 0 };

Void handleClass_SSPi_smwyD(Object p1, Object p2, Object p3, Int p4)
{
Object a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9;
Int iv3;
PROLOGUE;

	av0 = p1;
	av1 = p2;
	av2 = p3;
	iv3 = p4;

	if (cl_ca_mcgill_sable_soot_jimple_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_Main.C);

L0:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[53];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(6,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_JasminClass.C);
	a2 = a1;
	a3 = av0;
	a4 = new(&cl_ca_mcgill_sable_soot_BuildBody.C);
	a5 = a4;
	a6 = v__ES3xL();
	a7 = new(&cl_ca_mcgill_sable_soot_StoredBody.C);
	a8 = a7;
	a9 = v__w18M7();
	if (!a8) { 
		SetNPESource(); goto NULLX;
	}
	init_B_GpjPv(a8,a9);
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	init_BB_1pYXe(a5,a6,a7);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SB_l5tPm(a2,a3,a4);
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_JasminClass*)a1)->class->M.
		print_P_Rc73b.f(a1,a2);
	return;

L1:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_Main[55];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(48,L2);
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_BuildBody.C);
	a3 = a2;
	a4 = v__WbL8F();
	a5 = new(&cl_ca_mcgill_sable_soot_StoredBody.C);
	a6 = a5;
	a7 = v__w18M7();
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	init_B_GpjPv(a6,a7);
	i6 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_BBi_Au8Qd(a3,a4,a5,i6);
	a3 = av2;
	i4 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		printTo_BPi_c1fEB.f(a1,a2,a3,i4);
	return;

L2:	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_BuildBody.C);
	a3 = a2;
	a4 = v__WbL8F();
	a5 = new(&cl_ca_mcgill_sable_soot_StoredBody.C);
	a6 = a5;
	a7 = v__w18M7();
	if (!a6) { 
		SetNPESource(); goto NULLX;
	}
	init_B_GpjPv(a6,a7);
	i6 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_BBi_Au8Qd(a3,a4,a5,i6);
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		printTo_BP_DDVsn.f(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M truncatedOf_di_gc88t: ca.mcgill.sable.soot.jimple.Main.truncatedOf(DI)D */

Class xt_truncatedOf_di_gc88t[] = { 0 };

Double truncatedOf_di_gc88t(Double p1, Int p2)
{
Int i0, i1, i2, i3, i4;
Int iv2, iv5;
Long l0, l1, l2, l3, l4;
Double d0, d1, d2, d3, d4;
Double dv0, dv3;
PROLOGUE;

	dv0 = p1;
	iv2 = p2;

	if (cl_ca_mcgill_sable_soot_jimple_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_Main.C);

L0:	d2 = 1;
	dv3 = d2;
	i1 = 0;
	iv5 = i1;
	GOTO(5,L2);

L1:	d2 = dv3;
	d4 = 10.0;
	d2 = d2 * d4;
	dv3 = d2;
	iv5 += 1;
L2:	i1 = iv5;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(20,L1);
	d2 = dv0;
	d4 = dv3;
	d2 = d2 * d4;
	l2 = dtol(d2);
	d2 = l2;
	d4 = dv3;
	d2 = d2 / d4;
	return d2;

	/*NOTREACHED*/
}

/*M paddedLeftOf_Si_f0AxX: ca.mcgill.sable.soot.jimple.Main.paddedLeftOf(Ljava/lang/String;I)Ljava/lang/String; */

Class xt_paddedLeftOf_Si_f0AxX[] = { 0 };

Object paddedLeftOf_Si_f0AxX(Object p1, Int p2)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv1, iv2, iv4;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

	if (cl_ca_mcgill_sable_soot_jimple_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_Main.C);

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		length__rpuzQ.f(a1);
	i2 = iv1;
	if (i1 < i2)
		GOTO(5,L1);
	a1 = av0;
	return a1;

L1:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		length__rpuzQ.f(a2);
	i1 = i1 - i2;
	iv2 = i1;
	i1 = iv2;
	a1 = anewarray(&cl_char,i1);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(24,L3);

L2:	a1 = av3;
	i2 = iv4;
	i3 = 32;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct carray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct carray*)a1)->data[i2] = i3;
	iv4 += 1;
L3:	i1 = iv4;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(39,L2);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = new(&cl_java_lang_String.C);
	a4 = a3;
	a5 = av3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_ac_ippqA(a4,a5);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
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
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__YAL7V: ca.mcgill.sable.soot.jimple.Main.<init>()V */

Class xt_init__YAL7V[] = { 0 };

Void init__YAL7V(Object p0)
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

/*M clinit__dnvit: ca.mcgill.sable.soot.jimple.Main.<clinit>()V */

Class xt_clinit__dnvit[] = { 0 };

Void clinit__dnvit(void)
{
Object a0, a1, a2, a3;
Int i0, i1, i2, i3;
PROLOGUE;


L0:	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.usePackedDefs = i1;
	i1 = 1;
	cl_ca_mcgill_sable_soot_jimple_Main.V.produceJimpFile = i1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[100];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.copiesTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[101];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.defsTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[102];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.usesTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[103];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.liveTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[104];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.splitTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[105];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.packTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[106];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup1Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[107];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.cleanup2Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[108];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.conversionTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[109];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.cleanupAlgorithmTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[110];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.graphTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[111];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.assignTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[112];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.resolveTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[113];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.totalTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[114];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.splitPhase1Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[115];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.splitPhase2Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[116];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase1Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[117];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase2Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[118];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.usePhase3Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[119];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.defsSetupTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[120];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.defsAnalysisTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[121];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.defsPostTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[122];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.liveSetupTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[123];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.liveAnalysisTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[124];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.livePostTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[125];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.aggregationTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[126];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.grimpAggregationTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[127];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.deadCodeTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_Main[128];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_8aYc8(a2,a3);
	cl_ca_mcgill_sable_soot_jimple_Main.V.propagatorTimer = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_Main[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','M','a','i','n','J','i','m','p',
'l','e',' ','v','e','r','s','i','o','n',' ','1','.','b','e','t','a','.',
'4','.','d','e','v','.','6','C','o','p','y','r','i','g','h','t',' ','(',
'C',')',' ','1','9','9','7',',',' ','1','9','9','8',' ','R','a','j','a',
' ','V','a','l','l','e','e','-','R','a','i',' ','(','k','o','r','@','s',
'a','b','l','e','.','m','c','g','i','l','l','.','c','a',')','.','A','l',
'l',' ','r','i','g','h','t','s',' ','r','e','s','e','r','v','e','d','.',
'P','o','r','t','i','o','n','s',' ','c','o','p','y','r','i','g','h','t',
' ','(','C',')',' ','1','9','9','7',' ','C','l','a','r','k',' ','V','e',
'r','b','r','u','g','g','e',' ','(','c','l','u','m','p','@','s','a','b',
'l','e','.','m','c','g','i','l','l','.','c','a',')','.','M','o','d','i',
'f','i','c','a','t','i','o','n','s',' ','a','r','e',' ','c','o','p','y',
'r','i','g','h','t',' ','(','C',')',' ','1','9','9','7',',',' ','1','9',
'9','8',' ','b','y',' ','t','h','e','i','r',' ','r','e','s','p','e','c',
't','i','v','e',' ','c','o','n','t','r','i','b','u','t','o','r','s','.',
'S','e','e',' ','i','n','d','i','v','i','d','u','a','l',' ','s','o','u',
'r','c','e',' ','f','i','l','e','s',' ','f','o','r',' ','d','e','t','a',
'i','l','s','.','J','i','m','p','l','e',' ','c','o','m','e','s',' ','w',
'i','t','h',' ','A','B','S','O','L','U','T','E','L','Y',' ','N','O',' ',
'W','A','R','R','A','N','T','Y','.',' ',' ','T','h','i','s',' ','i','s',
' ','f','r','e','e',' ','s','o','f','t','w','a','r','e',',','a','n','d',
' ','y','o','u',' ','a','r','e',' ','w','e','l','c','o','m','e',' ','t',
'o',' ','r','e','d','i','s','t','r','i','b','u','t','e',' ','i','t',' ',
'u','n','d','e','r',' ','c','e','r','t','a','i','n',' ','c','o','n','d',
'i','t','i','o','n','s','.','S','e','e',' ','t','h','e',' ','a','c','c',
'o','m','p','a','n','y','i','n','g',' ','f','i','l','e',' ',39,'C','O',
'P','Y','I','N','G',39,' ','f','o','r',' ','d','e','t','a','i','l','s',
'.','S','y','n','t','a','x',':',' ','j','a','v','a',' ','c','a','.','m',
'c','g','i','l','l','.','s','a','b','l','e','.','s','o','o','t','.','j',
'i','m','p','l','e','.','M','a','i','n',' ','[','o','p','t','i','o','n',
's',']',' ','c','l','a','s','s','C','l','a','s','s','p','a','t','h',' ',
'O','p','t','i','o','n',':',' ',' ',' ',' ','-','j','i','m','p','l','e',
'C','l','a','s','s','P','a','t','h',' ','<','p','a','t','h','>',' ',' ',
' ','u','s','e','s',' ','<','p','a','t','h','>',' ','a','s',' ','c','l',
'a','s','s','p','a','t','h',' ','f','o','r',' ','f','i','n','d','i','n',
'g',' ','c','l','a','s','s','e','s','O','u','t','p','u','t',' ','O','p',
't','i','o','n','s',':',' ',' ',' ',' ','-','j','i','m','p','l','e',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
'p','r','o','d','u','c','e',' ','.','j','i','m','p','l','e',' ','c','o',
'd','e',' ',' ',' ',' ','-','j','i','m','p',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','r','o','d',
'u','c','e',' ','.','j','i','m','p',' ','(','a','b','b','r','e','v','i',
'a','t','e','d',' ','.','j','i','m','p','l','e',')',' ','c','o','d','e',
' ','[','d','e','f','a','u','l','t',']',' ',' ',' ',' ','-','j','a','s',
'm','i','n',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ','p','r','o','d','u','c','e',' ','.','j','a','s','m','i',
'n',' ','c','o','d','e','J','i','m','p','l','i','f','i','c','a','t','i',
'o','n',' ','O','p','t','i','o','n','s',':',' ',' ',' ',' ','-','n','o',
'c','l','e','a','n','u','p',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ','n','o',' ','c','o','n','s','t','a','n','t',' ','o',
'r',' ','c','o','p','y',' ','p','r','o','p','a','g','a','t','i','o','n',
' ','i','s',' ','p','e','r','f','o','r','m','e','d',' ',' ',' ',' ','-',
'n','o','s','p','l','i','t','t','i','n','g',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ','n','o',' ','s','p','l','i','t','t','i','n',
'g',' ','o','f',' ','v','a','r','i','a','b','l','e','s',' ','i','s',' ',
'p','e','r','f','o','r','m','e','d',' ',' ',' ',' ','-','o','l','d','t',
'y','p','i','n','g',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ','u','s','e',' ','o','l','d',' ','t','y','p','i','n','g',' ',
'a','l','g','o','r','i','t','h','m',' ',' ',' ',' ','-','t','y','p','e',
'l','e','s','s',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ','d','o',' ','n','o','t',' ','a','s','s','i','g','n',' ','t',
'y','p','e','s','.',' ',' ','C','a','n','n','o','t',' ','b','e',' ','u',
's','e','d',' ','w','i','t','h',' ','-','j','a','s','m','i','n',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','o','r',' ','-','n','o','l','o',
'c','a','l','p','a','c','k','i','n','g',' ',' ',' ',' ',' ','-','n','o',
'l','o','c','a','l','p','a','c','k','i','n','g',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ','d','o',' ','n','o','t',' ','r','e','-','u','s','e',
' ','l','o','c','a','l','s',' ','a','f','t','e','r',' ','j','i','m','p',
'l','i','f','i','c','a','t','i','o','n',' ',' ',' ',' ','-','n','o','a',
'g','g','r','e','g','a','t','i','n','g',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ','d','o',' ','n','o','t',' ','p','e','r','f','o','r','m',
' ','a','n','y',' ','J','i','m','p','l','e','-','l','e','v','e','l',' ',
'a','g','g','r','e','g','a','t','i','o','n','P','r','o','f','i','l','i',
'n','g','/','D','e','b','u','g','g','i','n','g',' ','O','p','t','i','o',
'n','s',':',' ',' ',' ',' ','-','t','i','m','e','t','r','a','n','s','f',
'o','r','m',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','e','r',
'f','o','r','m',' ','f','u','l','l',' ','t','r','a','n','s','f','o','r',
'm','a','t','i','o','n',' ','a','n','d',' ','p','r','i','n','t',' ','t',
'i','m','i','n','g','s',' ',' ',' ',' ','-','v','e','r','b','o','s','e',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
'p','r','i','n','t',' ','o','u','t',' ','j','i','m','p','l','i','f','i',
'c','a','t','i','o','n',' ','p','r','o','c','e','s','s',' ',' ',' ',' ',
'-','d','e','b','u','g',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ','a','v','o','i','d',' ','c','a','t','c',
'h','i','n','g',' ','e','r','r','o','r','s',' ','d','u','r','i','n','g',
' ','j','i','m','p','l','i','f','i','c','a','t','i','o','n',' ',' ',' ',
' ','-','t','e','s','t','p','e','r','f',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','j','i','m','p','l','i','f','y',' ',
'a','l','l',' ','c','l','a','s','s','e','s',' ','&',' ','m','e','t','h',
'o','d','s',' ','a','n','d',' ','g','a','t','h','e','r',' ','s','t','a',
't','s',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','d','o','e','s',
' ','n','o','t',' ','t','h','r','o','w',' ','e','x','c','e','p','t','i',
'o','n',' ','i','f',' ','e','r','r','o','r',' ','i','n',' ','t','y','p',
'i','n','g','-','j','i','m','p','l','e','-','j','a','s','m','i','n','-',
'j','i','m','p','-','n','o','c','l','e','a','n','u','p','-','t','y','p',
'e','l','e','s','s','-','n','o','l','o','c','a','l','p','a','c','k','i',
'n','g','-','n','o','a','g','g','r','e','g','a','t','i','n','g','-','t',
'i','m','e','t','r','a','n','s','f','o','r','m','-','s','u','b','s','t',
'r','a','c','t','g','c','-','v','e','r','b','o','s','e','-','n','o','s',
'p','l','i','t','t','i','n','g','-','o','l','d','t','y','p','i','n','g',
'-','u','s','e','p','a','c','k','e','d','l','i','v','e','-','u','s','e',
'p','a','c','k','e','d','d','e','f','s','-','t','e','s','t','p','e','r',
'f','-','j','i','m','p','l','e','C','l','a','s','s','P','a','t','h','-',
'd','e','b','u','g','-','U','n','r','e','c','o','g','n','i','z','e','d',
' ','o','p','t','i','o','n',':',' ','J','i','m','p','l','i','f','y','i',
'n','g',' ','.','.','.',' ','.','j','a','s','m','i','n','.','j','i','m',
'p','l','e','.','j','i','m','p','C','a','n','n','o','t',' ','o','u','t',
'p','u','t',' ','f','i','l','e',' ',' ','s','t','m','t','s',' ',' ','f',
'a','i','l','e','d',' ','d','u','e',' ','t','o',':',' ','C','a','n','n',
'o','t',' ','c','l','o','s','e',' ','o','u','t','p','u','t',' ','f','i',
'l','e',' ','S','u','c','c','e','s','s','f','u','l','l','y',' ','j','i',
'm','p','l','i','f','i','e','d',' ',' ','c','l','a','s','s','f','i','l',
'e','s',';',' ','f','a','i','l','e','d',' ','o','n',' ','.','C','o','n',
'f','i','r','m','e','d',' ',' ','s','t','o','r','e','d',' ','s','t','a',
't','e','m','e','n','t','s','.','T','i','m','e',' ','m','e','a','s','u',
'r','e','m','e','n','t','s',' ',' ',' ',' ',' ',' ','B','u','i','l','d',
'i','n','g',' ','g','r','a','p','h','s',':',' ',' ',' ','C','o','m','p',
'u','t','i','n','g',' ','L','o','c','a','l','D','e','f','s',':',' ',' ',
' ','C','o','m','p','u','t','i','n','g',' ','L','o','c','a','l','U','s',
'e','s',':',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','U','s',
'e',' ','p','h','a','s','e','1',':',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ','U','s','e',' ','p','h','a','s','e','2',':',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','U','s','e',' ','p','h','a','s',
'e','3',':',' ',' ',' ',' ',' ',' ','C','l','e','a','n','i','n','g',' ',
'u','p',' ','c','o','d','e',':',' ','C','o','m','p','u','t','i','n','g',
' ','L','o','c','a','l','C','o','p','i','e','s',':',' ',' ','C','o','m',
'p','u','t','i','n','g',' ','L','i','v','e','L','o','c','a','l','s',':',
' ','C','o','a','d','i','n','g',' ','c','o','f','f','i',' ','s','t','r',
'u','c','t','s',':',' ',' ','B','y','t','e','c','o','d','e',' ','-','>',
' ','j','i','m','p','l','e',' ','(','n','a','i','v','e',')',':',' ',' ',
' ',' ',' ',' ',' ',' ',' ','S','p','l','i','t','t','i','n','g',' ','v',
'a','r','i','a','b','l','e','s',':',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ','A','s','s','i','g','n','i','n','g',' ','t','y','p','e',
's',':',' ',' ',' ','P','r','o','p','a','g','a','t','i','n','g',' ','c',
'o','p','i','e','s',' ','&',' ','c','s','t','s',':',' ',' ',' ',' ',' ',
' ',' ','E','l','i','m','i','n','a','t','i','n','g',' ','d','e','a','d',
' ','c','o','d','e',':',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ','A','g','g','r','e','g','a','t','i','o','n',':',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','C','o','l','o','r','i',
'n','g',' ','l','o','c','a','l','s',':',' ','t','o','t','a','l','T','i',
'm','e',':','G','a','r','b','a','g','e',' ','c','o','l','l','e','c','t',
'i','o','n',' ','w','a','s',' ','s','u','b','s','t','r','a','c','t','e',
'd',' ','f','r','o','m',' ','t','h','e','s','e',' ','n','u','m','b','e',
'r','s','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','f','o','r','c',
'e','d','G','C',':','t','o','t','a','l','M','e','m','o','r','y',':','k',
' ',' ','T','i','m','e','/','S','p','a','c','e',' ','p','e','r','f','o',
'r','m','a','n','c','e',' ','s','t','m','t','/','s',' ','k','/','s','t',
'm','t','t','o','t','a','l','F','l','o','w','N','o','d','e','s',':',' ',
' ','t','o','t','a','l','F','l','o','w','C','o','m','p','u','t','a','t',
'i','o','n','s',':',' ',' ','a','v','g',':',' ','0','.','0','0','0','0',
'.','0','s',' ','(','%',')','c','o','p','i','e','s','d','e','f','s','u',
's','e','s','l','i','v','e','s','p','l','i','t','p','a','c','k','c','l',
'e','a','n','u','p','1','c','l','e','a','n','u','p','2','c','o','n','v',
'e','r','s','i','o','n','m','c','l','e','a','n','u','p','A','l','g','o',
'r','i','t','h','m','g','r','a','p','h','T','i','m','e','r','a','s','s',
'i','g','n','T','i','m','e','r','r','e','s','o','l','v','e','T','i','m',
'e','r','t','o','t','a','l','T','i','m','e','r','s','p','l','i','t','P',
'h','a','s','e','1','s','p','l','i','t','P','h','a','s','e','2','u','s',
'e','P','h','a','s','e','1','u','s','e','P','h','a','s','e','2','u','s',
'e','P','h','a','s','e','3','d','e','f','s','S','e','t','u','p','d','e',
'f','s','A','n','a','l','y','s','i','s','d','e','f','s','P','o','s','t',
'l','i','v','e','S','e','t','u','p','l','i','v','e','A','n','a','l','y',
's','i','s','l','i','v','e','P','o','s','t','a','g','g','r','e','g','a',
't','i','o','n','g','r','i','m','p','A','g','g','r','e','g','a','t','i',
'o','n','d','e','a','d','C','o','d','e','p','r','o','p','a','g','a','t',
'o','r'};

const void *st_ca_mcgill_sable_soot_jimple_Main[] = {
    ch_ca_mcgill_sable_soot_jimple_Main+32,	/* 0. ca.mcgill.sable.soot.jimple.Main */
    ch_ca_mcgill_sable_soot_jimple_Main+61,	/* 1. Jimple version 1.beta.4.dev.6 */
    ch_ca_mcgill_sable_soot_jimple_Main+124,	/* 2. Copyright (C) 1997, 1998 Raja Vallee-Rai */
    ch_ca_mcgill_sable_soot_jimple_Main+144,	/* 3. All rights reserved. */
    ch_ca_mcgill_sable_soot_jimple_Main+144,	/* 4.  */
    ch_ca_mcgill_sable_soot_jimple_Main+212,	/* 5. Portions copyright (C) 1997 Clark Verbru */
    ch_ca_mcgill_sable_soot_jimple_Main+288,	/* 6. Modifications are copyright (C) 1997, 19 */
    ch_ca_mcgill_sable_soot_jimple_Main+328,	/* 7. See individual source files for details. */
    ch_ca_mcgill_sable_soot_jimple_Main+393,	/* 8. Jimple comes with ABSOLUTELY NO WARRANTY */
    ch_ca_mcgill_sable_soot_jimple_Main+457,	/* 9. and you are welcome to redistribute it u */
    ch_ca_mcgill_sable_soot_jimple_Main+505,	/* 10. See the accompanying file 'COPYING' for  */
    ch_ca_mcgill_sable_soot_jimple_Main+566,	/* 11. Syntax: java ca.mcgill.sable.soot.jimple */
    ch_ca_mcgill_sable_soot_jimple_Main+583,	/* 12. Classpath Option: */
    ch_ca_mcgill_sable_soot_jimple_Main+657,	/* 13.     -jimpleClassPath <path>   uses <path */
    ch_ca_mcgill_sable_soot_jimple_Main+672,	/* 14. Output Options: */
    ch_ca_mcgill_sable_soot_jimple_Main+722,	/* 15.     -jimple                   produce .j */
    ch_ca_mcgill_sable_soot_jimple_Main+802,	/* 16.     -jimp                     produce .j */
    ch_ca_mcgill_sable_soot_jimple_Main+852,	/* 17.     -jasmin                   produce .j */
    ch_ca_mcgill_sable_soot_jimple_Main+875,	/* 18. Jimplification Options: */
    ch_ca_mcgill_sable_soot_jimple_Main+949,	/* 19.     -nocleanup                no constan */
    ch_ca_mcgill_sable_soot_jimple_Main+1017,	/* 20.     -nosplitting              no splitti */
    ch_ca_mcgill_sable_soot_jimple_Main+1071,	/* 21.     -oldtyping                use old ty */
    ch_ca_mcgill_sable_soot_jimple_Main+1150,	/* 22.     -typeless                 do not ass */
    ch_ca_mcgill_sable_soot_jimple_Main+1199,	/* 23.                               or -noloca */
    ch_ca_mcgill_sable_soot_jimple_Main+1270,	/* 24.     -nolocalpacking           do not re- */
    ch_ca_mcgill_sable_soot_jimple_Main+1343,	/* 25.     -noaggregating            do not per */
    ch_ca_mcgill_sable_soot_jimple_Main+1371,	/* 26. Profiling%Debugging Options: */
    ch_ca_mcgill_sable_soot_jimple_Main+1446,	/* 27.     -timetransform            perform fu */
    ch_ca_mcgill_sable_soot_jimple_Main+1508,	/* 28.     -verbose                  print out  */
    ch_ca_mcgill_sable_soot_jimple_Main+1581,	/* 29.     -debug                    avoid catc */
    ch_ca_mcgill_sable_soot_jimple_Main+1658,	/* 30.     -testperf                 jimplify a */
    ch_ca_mcgill_sable_soot_jimple_Main+1731,	/* 31.                               does not t */
    ch_ca_mcgill_sable_soot_jimple_Main+1738,	/* 32. -jimple */
    ch_ca_mcgill_sable_soot_jimple_Main+1745,	/* 33. -jasmin */
    ch_ca_mcgill_sable_soot_jimple_Main+1750,	/* 34. -jimp */
    ch_ca_mcgill_sable_soot_jimple_Main+1760,	/* 35. -nocleanup */
    ch_ca_mcgill_sable_soot_jimple_Main+1769,	/* 36. -typeless */
    ch_ca_mcgill_sable_soot_jimple_Main+1784,	/* 37. -nolocalpacking */
    ch_ca_mcgill_sable_soot_jimple_Main+1798,	/* 38. -noaggregating */
    ch_ca_mcgill_sable_soot_jimple_Main+1812,	/* 39. -timetransform */
    ch_ca_mcgill_sable_soot_jimple_Main+1824,	/* 40. -substractgc */
    ch_ca_mcgill_sable_soot_jimple_Main+1832,	/* 41. -verbose */
    ch_ca_mcgill_sable_soot_jimple_Main+1844,	/* 42. -nosplitting */
    ch_ca_mcgill_sable_soot_jimple_Main+1854,	/* 43. -oldtyping */
    ch_ca_mcgill_sable_soot_jimple_Main+1868,	/* 44. -usepackedlive */
    ch_ca_mcgill_sable_soot_jimple_Main+1882,	/* 45. -usepackeddefs */
    ch_ca_mcgill_sable_soot_jimple_Main+1891,	/* 46. -testperf */
    ch_ca_mcgill_sable_soot_jimple_Main+1907,	/* 47. -jimpleClassPath */
    ch_ca_mcgill_sable_soot_jimple_Main+1913,	/* 48. -debug */
    ch_ca_mcgill_sable_soot_jimple_Main+1914,	/* 49. - */
    ch_ca_mcgill_sable_soot_jimple_Main+1935,	/* 50. Unrecognized option:  */
    ch_ca_mcgill_sable_soot_jimple_Main+1947,	/* 51. Jimplifying  */
    ch_ca_mcgill_sable_soot_jimple_Main+1951,	/* 52. ...  */
    ch_ca_mcgill_sable_soot_jimple_Main+1958,	/* 53. .jasmin */
    ch_ca_mcgill_sable_soot_jimple_Main+1965,	/* 54. .jimple */
    ch_ca_mcgill_sable_soot_jimple_Main+1970,	/* 55. .jimp */
    ch_ca_mcgill_sable_soot_jimple_Main+1989,	/* 56. Cannot output file  */
    ch_ca_mcgill_sable_soot_jimple_Main+1997,	/* 57.  stmts   */
    ch_ca_mcgill_sable_soot_jimple_Main+2012,	/* 58. failed due to:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2037,	/* 59. Cannot close output file  */
    ch_ca_mcgill_sable_soot_jimple_Main+2061,	/* 60. Successfully jimplified  */
    ch_ca_mcgill_sable_soot_jimple_Main+2084,	/* 61.  classfiles; failed on  */
    ch_ca_mcgill_sable_soot_jimple_Main+2085,	/* 62. . */
    ch_ca_mcgill_sable_soot_jimple_Main+2095,	/* 63. Confirmed  */
    ch_ca_mcgill_sable_soot_jimple_Main+2114,	/* 64.  stored statements. */
    ch_ca_mcgill_sable_soot_jimple_Main+2131,	/* 65. Time measurements */
    ch_ca_mcgill_sable_soot_jimple_Main+2154,	/* 66.       Building graphs:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2177,	/* 67.   Computing LocalDefs:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2200,	/* 68.   Computing LocalUses:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2224,	/* 69.             Use phase1:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2248,	/* 70.             Use phase2:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2272,	/* 71.             Use phase3:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2295,	/* 72.      Cleaning up code:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2318,	/* 73. Computing LocalCopies:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2341,	/* 74.  Computing LiveLocals:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2364,	/* 75. Coading coffi structs:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2393,	/* 76.  Bytecode -> jimple (naive):  */
    ch_ca_mcgill_sable_soot_jimple_Main+2422,	/* 77.         Splitting variables:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2451,	/* 78.             Assigning types:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2480,	/* 79.   Propagating copies & csts:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2509,	/* 80.       Eliminating dead code:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2538,	/* 81.                 Aggregation:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2567,	/* 82.             Coloring locals:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2577,	/* 83. totalTime: */
    ch_ca_mcgill_sable_soot_jimple_Main+2631,	/* 84. Garbage collection was substracted from  */
    ch_ca_mcgill_sable_soot_jimple_Main+2651,	/* 85.            forcedGC: */
    ch_ca_mcgill_sable_soot_jimple_Main+2663,	/* 86. totalMemory: */
    ch_ca_mcgill_sable_soot_jimple_Main+2666,	/* 87. k   */
    ch_ca_mcgill_sable_soot_jimple_Main+2688,	/* 88. Time%Space performance */
    ch_ca_mcgill_sable_soot_jimple_Main+2695,	/* 89.  stmt%s */
    ch_ca_mcgill_sable_soot_jimple_Main+2702,	/* 90.  k%stmt */
    ch_ca_mcgill_sable_soot_jimple_Main+2718,	/* 91. totalFlowNodes:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2742,	/* 92.  totalFlowComputations:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2748,	/* 93.  avg:  */
    ch_ca_mcgill_sable_soot_jimple_Main+2753,	/* 94. 0.000 */
    ch_ca_mcgill_sable_soot_jimple_Main+2756,	/* 95. 0.0 */
    ch_ca_mcgill_sable_soot_jimple_Main+2757,	/* 96. s */
    ch_ca_mcgill_sable_soot_jimple_Main+2759,	/* 97.  ( */
    ch_ca_mcgill_sable_soot_jimple_Main+2760,	/* 98. % */
    ch_ca_mcgill_sable_soot_jimple_Main+2761,	/* 99. ) */
    ch_ca_mcgill_sable_soot_jimple_Main+2767,	/* 100. copies */
    ch_ca_mcgill_sable_soot_jimple_Main+2771,	/* 101. defs */
    ch_ca_mcgill_sable_soot_jimple_Main+2775,	/* 102. uses */
    ch_ca_mcgill_sable_soot_jimple_Main+2779,	/* 103. live */
    ch_ca_mcgill_sable_soot_jimple_Main+2784,	/* 104. split */
    ch_ca_mcgill_sable_soot_jimple_Main+2788,	/* 105. pack */
    ch_ca_mcgill_sable_soot_jimple_Main+2796,	/* 106. cleanup1 */
    ch_ca_mcgill_sable_soot_jimple_Main+2804,	/* 107. cleanup2 */
    ch_ca_mcgill_sable_soot_jimple_Main+2815,	/* 108. conversionm */
    ch_ca_mcgill_sable_soot_jimple_Main+2831,	/* 109. cleanupAlgorithm */
    ch_ca_mcgill_sable_soot_jimple_Main+2841,	/* 110. graphTimer */
    ch_ca_mcgill_sable_soot_jimple_Main+2852,	/* 111. assignTimer */
    ch_ca_mcgill_sable_soot_jimple_Main+2864,	/* 112. resolveTimer */
    ch_ca_mcgill_sable_soot_jimple_Main+2874,	/* 113. totalTimer */
    ch_ca_mcgill_sable_soot_jimple_Main+2885,	/* 114. splitPhase1 */
    ch_ca_mcgill_sable_soot_jimple_Main+2896,	/* 115. splitPhase2 */
    ch_ca_mcgill_sable_soot_jimple_Main+2905,	/* 116. usePhase1 */
    ch_ca_mcgill_sable_soot_jimple_Main+2914,	/* 117. usePhase2 */
    ch_ca_mcgill_sable_soot_jimple_Main+2923,	/* 118. usePhase3 */
    ch_ca_mcgill_sable_soot_jimple_Main+2932,	/* 119. defsSetup */
    ch_ca_mcgill_sable_soot_jimple_Main+2944,	/* 120. defsAnalysis */
    ch_ca_mcgill_sable_soot_jimple_Main+2952,	/* 121. defsPost */
    ch_ca_mcgill_sable_soot_jimple_Main+2961,	/* 122. liveSetup */
    ch_ca_mcgill_sable_soot_jimple_Main+2973,	/* 123. liveAnalysis */
    ch_ca_mcgill_sable_soot_jimple_Main+2981,	/* 124. livePost */
    ch_ca_mcgill_sable_soot_jimple_Main+2992,	/* 125. aggregation */
    ch_ca_mcgill_sable_soot_jimple_Main+3008,	/* 126. grimpAggregation */
    ch_ca_mcgill_sable_soot_jimple_Main+3016,	/* 127. deadCode */
    ch_ca_mcgill_sable_soot_jimple_Main+3026,	/* 128. propagator */
    0};
