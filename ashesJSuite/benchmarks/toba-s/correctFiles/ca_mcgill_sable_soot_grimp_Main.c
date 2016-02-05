/*  ca_mcgill_sable_soot_grimp_Main.c -- from Java class ca.mcgill.sable.soot.grimp.Main  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_grimp_Main.h"
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
#include "ca_mcgill_sable_soot_grimp_GrimpBody.h"
#include "ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.h"
#include "ca_mcgill_sable_soot_jimple_JasminClass.h"
#include "ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.h"
#include "ca_mcgill_sable_soot_jimple_Transformations.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_io_FileOutputStream.h"
#include "java_io_IOException.h"
#include "java_io_PrintStream.h"
#include "java_io_PrintWriter.h"
#include "java_lang_Exception.h"
#include "java_lang_Runtime.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_grimp_Main.C,
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
    &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C,
    &cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.C,
    &cl_ca_mcgill_sable_soot_jimple_JasminClass.C,
    &cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.C,
    &cl_ca_mcgill_sable_soot_jimple_Transformations.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_io_FileOutputStream.C,
    &cl_java_io_IOException.C,
    &cl_java_io_PrintStream.C,
    &cl_java_io_PrintWriter.C,
    &cl_java_lang_Exception.C,
    &cl_java_lang_Runtime.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_grimp_Main[];
extern const void *st_ca_mcgill_sable_soot_grimp_Main[];
extern Class xt_main_aS_6tvzE[];
extern Class xt_handleClass_SSPi_Yp3gh[];
extern Class xt_init__G2i2X[];
extern Class xt_clinit__twxuJ[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_grimp_Main.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_grimp_Main.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_grimp_Main.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_grimp_Main.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(31) nmchars = {&acl_char, 0, 31, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','M','a','i','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 31 };
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
'o','l','d','T','y','p','i','n','g'};
static const Char sgcv_5[] = {
'Z'};
static const Char nmcv_6[] = {
'i','s','I','n','D','e','b','u','g','M','o','d','e'};
static const Char sgcv_6[] = {
'Z'};
static const Char nmcv_7[] = {
'u','s','e','P','a','c','k','e','d','L','i','v','e'};
static const Char sgcv_7[] = {
'Z'};
static const Char nmcv_8[] = {
'u','s','e','P','a','c','k','e','d','D','e','f','s'};
static const Char sgcv_8[] = {
'Z'};
static const Char nmcv_9[] = {
'i','s','T','e','s','t','i','n','g','P','e','r','f','o','r','m','a','n',
'c','e'};
static const Char sgcv_9[] = {
'Z'};
static const Char nmcv_10[] = {
'j','i','m','p','l','e','C','l','a','s','s','P','a','t','h'};
static const Char sgcv_10[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_11[] = {
'p','r','o','d','u','c','e','J','i','m','p','l','e','F','i','l','e'};
static const Char sgcv_11[] = {
'Z'};
static const Char nmcv_12[] = {
'p','r','o','d','u','c','e','J','a','s','m','i','n','F','i','l','e'};
static const Char sgcv_12[] = {
'Z'};
static const Char nmcv_13[] = {
'p','r','o','d','u','c','e','J','i','m','p','F','i','l','e'};
static const Char sgcv_13[] = {
'Z'};
static const Char nmcv_14[] = {
'p','r','o','d','u','c','e','G','r','i','m','p','l','e','F','i','l','e'};
static const Char sgcv_14[] = {
'Z'};
static const Char nmcv_15[] = {
'p','r','o','d','u','c','e','G','r','i','m','p','F','i','l','e'};
static const Char sgcv_15[] = {
'Z'};
static const Char nmcv_16[] = {
'c','o','p','i','e','s','T','i','m','e','r'};
static const Char sgcv_16[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_17[] = {
'd','e','f','s','T','i','m','e','r'};
static const Char sgcv_17[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_18[] = {
'u','s','e','s','T','i','m','e','r'};
static const Char sgcv_18[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_19[] = {
'l','i','v','e','T','i','m','e','r'};
static const Char sgcv_19[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_20[] = {
's','p','l','i','t','T','i','m','e','r'};
static const Char sgcv_20[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_21[] = {
'p','a','c','k','T','i','m','e','r'};
static const Char sgcv_21[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_22[] = {
'c','l','e','a','n','u','p','1','T','i','m','e','r'};
static const Char sgcv_22[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_23[] = {
'c','l','e','a','n','u','p','2','T','i','m','e','r'};
static const Char sgcv_23[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_24[] = {
'c','o','n','v','e','r','s','i','o','n','T','i','m','e','r'};
static const Char sgcv_24[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_25[] = {
'c','l','e','a','n','u','p','A','l','g','o','r','i','t','h','m','T','i',
'm','e','r'};
static const Char sgcv_25[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_26[] = {
'g','r','a','p','h','T','i','m','e','r'};
static const Char sgcv_26[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_27[] = {
'a','s','s','i','g','n','T','i','m','e','r'};
static const Char sgcv_27[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_28[] = {
'r','e','s','o','l','v','e','T','i','m','e','r'};
static const Char sgcv_28[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_29[] = {
'a','g','g','r','e','g','a','t','i','o','n','T','i','m','e','r'};
static const Char sgcv_29[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_30[] = {
't','o','t','a','l','T','i','m','e','r'};
static const Char sgcv_30[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','i','m','e','r',';'};
static const Char nmcv_31[] = {
'c','o','n','v','e','r','s','i','o','n','L','o','c','a','l','C','o','u',
'n','t'};
static const Char sgcv_31[] = {
'I'};
static const Char nmcv_32[] = {
'c','l','e','a','n','u','p','1','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_32[] = {
'I'};
static const Char nmcv_33[] = {
's','p','l','i','t','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_33[] = {
'I'};
static const Char nmcv_34[] = {
'a','s','s','i','g','n','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_34[] = {
'I'};
static const Char nmcv_35[] = {
'p','a','c','k','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_35[] = {
'I'};
static const Char nmcv_36[] = {
'c','l','e','a','n','u','p','2','L','o','c','a','l','C','o','u','n','t'};
static const Char sgcv_36[] = {
'I'};
static const Char nmcv_37[] = {
'c','o','n','v','e','r','s','i','o','n','S','t','m','t','C','o','u','n',
't'};
static const Char sgcv_37[] = {
'I'};
static const Char nmcv_38[] = {
'c','l','e','a','n','u','p','1','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_38[] = {
'I'};
static const Char nmcv_39[] = {
's','p','l','i','t','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_39[] = {
'I'};
static const Char nmcv_40[] = {
'a','s','s','i','g','n','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_40[] = {
'I'};
static const Char nmcv_41[] = {
'p','a','c','k','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_41[] = {
'I'};
static const Char nmcv_42[] = {
'c','l','e','a','n','u','p','2','S','t','m','t','C','o','u','n','t'};
static const Char sgcv_42[] = {
'I'};
static const Char nmsm_0[] = {
'm','a','i','n'};
static const Char sgsm_0[] = {
'(','[','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';',')','V'};
static const Char nmsm_1[] = {
'h','a','n','d','l','e','C','l','a','s','s'};
static const Char sgsm_1[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';','L','j','a',
'v','a','/','l','a','n','g','/','S','t','r','i','n','g',';','L','j','a',
'v','a','/','i','o','/','P','r','i','n','t','W','r','i','t','e','r',';',
'I',')','V'};
static const Char nmsm_2[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_2[] = {
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
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.naiveJimplification,(const Char *)&nmcv_0,19,(const Char *)&sgcv_0,1,1,0x8,0}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.onlyJimpleOutput,(const Char *)&nmcv_1,16,(const Char *)&sgcv_1,1,1,0x8,1}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.isVerbose,(const Char *)&nmcv_2,9,(const Char *)&sgcv_2,1,1,0x9,2}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.onlyJasminOutput,(const Char *)&nmcv_3,16,(const Char *)&sgcv_3,1,1,0x8,3}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization,(const Char *)&nmcv_4,23,(const Char *)&sgcv_4,1,1,0x8,4}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.oldTyping,(const Char *)&nmcv_5,9,(const Char *)&sgcv_5,1,1,0x8,5}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.isInDebugMode,(const Char *)&nmcv_6,13,(const Char *)&sgcv_6,1,1,0x8,6}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.usePackedLive,(const Char *)&nmcv_7,13,(const Char *)&sgcv_7,1,1,0x8,7}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.usePackedDefs,(const Char *)&nmcv_8,13,(const Char *)&sgcv_8,1,1,0x8,8}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.isTestingPerformance,(const Char *)&nmcv_9,20,(const Char *)&sgcv_9,1,1,0x8,9}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.jimpleClassPath,(const Char *)&nmcv_10,15,(const Char *)&sgcv_10,18,1,0x9,10}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.produceJimpleFile,(const Char *)&nmcv_11,17,(const Char *)&sgcv_11,1,1,0x8,11}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.produceJasminFile,(const Char *)&nmcv_12,17,(const Char *)&sgcv_12,1,1,0x8,12}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.produceJimpFile,(const Char *)&nmcv_13,15,(const Char *)&sgcv_13,1,1,0x8,13}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.produceGrimpleFile,(const Char *)&nmcv_14,18,(const Char *)&sgcv_14,1,1,0x8,14}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.produceGrimpFile,(const Char *)&nmcv_15,16,(const Char *)&sgcv_15,1,1,0x8,15}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.copiesTimer,(const Char *)&nmcv_16,11,(const Char *)&sgcv_16,28,1,0x8,16}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.defsTimer,(const Char *)&nmcv_17,9,(const Char *)&sgcv_17,28,1,0x8,17}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.usesTimer,(const Char *)&nmcv_18,9,(const Char *)&sgcv_18,28,1,0x8,18}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.liveTimer,(const Char *)&nmcv_19,9,(const Char *)&sgcv_19,28,1,0x8,19}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.splitTimer,(const Char *)&nmcv_20,10,(const Char *)&sgcv_20,28,1,0x8,20}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.packTimer,(const Char *)&nmcv_21,9,(const Char *)&sgcv_21,28,1,0x8,21}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup1Timer,(const Char *)&nmcv_22,13,(const Char *)&sgcv_22,28,1,0x8,22}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup2Timer,(const Char *)&nmcv_23,13,(const Char *)&sgcv_23,28,1,0x8,23}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.conversionTimer,(const Char *)&nmcv_24,15,(const Char *)&sgcv_24,28,1,0x8,24}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.cleanupAlgorithmTimer,(const Char *)&nmcv_25,21,(const Char *)&sgcv_25,28,1,0x8,25}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.graphTimer,(const Char *)&nmcv_26,10,(const Char *)&sgcv_26,28,1,0x8,26}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.assignTimer,(const Char *)&nmcv_27,11,(const Char *)&sgcv_27,28,1,0x8,27}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.resolveTimer,(const Char *)&nmcv_28,12,(const Char *)&sgcv_28,28,1,0x8,28}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.aggregationTimer,(const Char *)&nmcv_29,16,(const Char *)&sgcv_29,28,1,0x8,29}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.totalTimer,(const Char *)&nmcv_30,10,(const Char *)&sgcv_30,28,1,0x8,30}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.conversionLocalCount,(const Char *)&nmcv_31,20,(const Char *)&sgcv_31,1,1,0x8,31}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup1LocalCount,(const Char *)&nmcv_32,18,(const Char *)&sgcv_32,1,1,0x8,32}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.splitLocalCount,(const Char *)&nmcv_33,15,(const Char *)&sgcv_33,1,1,0x8,33}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.assignLocalCount,(const Char *)&nmcv_34,16,(const Char *)&sgcv_34,1,1,0x8,34}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.packLocalCount,(const Char *)&nmcv_35,14,(const Char *)&sgcv_35,1,1,0x8,35}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup2LocalCount,(const Char *)&nmcv_36,18,(const Char *)&sgcv_36,1,1,0x8,36}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.conversionStmtCount,(const Char *)&nmcv_37,19,(const Char *)&sgcv_37,1,1,0x8,37}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup1StmtCount,(const Char *)&nmcv_38,17,(const Char *)&sgcv_38,1,1,0x8,38}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.splitStmtCount,(const Char *)&nmcv_39,14,(const Char *)&sgcv_39,1,1,0x8,39}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.assignStmtCount,(const Char *)&nmcv_40,15,(const Char *)&sgcv_40,1,1,0x8,40}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.packStmtCount,(const Char *)&nmcv_41,13,(const Char *)&sgcv_41,1,1,0x8,41}, 
    {0,&cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup2StmtCount,(const Char *)&nmcv_42,17,(const Char *)&sgcv_42,1,1,0x8,42}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())main_aS_6tvzE,
	(const Char *)&nmsm_0,4,(const Char *)&sgsm_0,22,
	1,0x9,0,xt_main_aS_6tvzE},
    {TMIT_native_code, (Void(*)())handleClass_SSPi_Yp3gh,
	(const Char *)&nmsm_1,11,(const Char *)&sgsm_1,75,
	1,0xa,1,xt_handleClass_SSPi_Yp3gh},
    {TMIT_native_code, (Void(*)())clinit__twxuJ,
	(const Char *)&nmsm_2,8,(const Char *)&sgsm_2,3,
	1,0x8,3,xt_clinit__twxuJ},
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
} inr_ca_mcgill_sable_soot_grimp_Main = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_grimp_Main.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_grimp_Main cl_ca_mcgill_sable_soot_grimp_Main = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_grimp_Main),
    12,
    3,
    0,
    43,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    26, others,
    0, 0,
    ch_ca_mcgill_sable_soot_grimp_Main,
    st_ca_mcgill_sable_soot_grimp_Main,
    clinit__twxuJ,
    init__G2i2X,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_grimp_Main,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__G2i2X,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,2,xt_init__G2i2X},
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


/*M main_aS_6tvzE: ca.mcgill.sable.soot.grimp.Main.main([Ljava/lang/String;)V */

Class xt_main_aS_6tvzE[] = { &cl_java_lang_RuntimeException.C, 0 };

Void main_aS_6tvzE(Object p1)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 926, 969, 29,
    &cl_java_lang_Exception.C, 1025, 1119, 33,
    &cl_java_lang_Exception.C, 1159, 1170, 35,
    &cl_java_io_IOException.C, 1260, 1270, 38,
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
volatile Long lv2, lv12, lv14, lv16, lv18, lv20, lv22, lv24, lv26;
Float f0, f1, f2, f3, f4, f5, f6;
volatile Float fv28, fv29;
PROLOGUE;

	av0 = p1;

	if (cl_ca_mcgill_sable_soot_grimp_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_grimp_Main.C);

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
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.totalTimer;
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
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[9];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[11];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[12];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[13];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[14];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[15];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[16];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[17];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[18];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[19];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[20];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[21];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[20];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[22];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[23];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[24];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[25];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[26];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[27];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[28];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[29];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[30];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[31];
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
	GOTO(362,L21);

L2:  case 2:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[32];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(374,L3);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.produceJimpleFile = i1;
	i1 = iv4;
	i2 = 32;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(388,L20);

L3:  case 3:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[33];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(400,L4);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.produceJasminFile = i1;
	i1 = iv4;
	i2 = 32;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(414,L20);

L4:  case 4:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[34];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(426,L5);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.produceJimpFile = i1;
	i1 = iv4;
	i2 = 32;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(440,L20);

L5:  case 5:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[35];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(452,L6);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.produceGrimpleFile = i1;
	GOTO(459,L20);

L6:  case 6:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[36];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(471,L7);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.produceGrimpFile = i1;
	GOTO(478,L20);

L7:  case 7:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[37];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(490,L8);
	i1 = iv4;
	i2 = 8;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(500,L20);

L8:  case 8:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[38];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(512,L9);
	i1 = iv4;
	i2 = 1;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(521,L20);

L9:  case 9:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[39];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(533,L10);
	i1 = iv4;
	i2 = 16;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(543,L20);

L10:  case 10:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[40];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(555,L11);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.usePackedLive = i1;
	GOTO(562,L20);

L11:  case 11:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[41];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(574,L12);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.usePackedDefs = i1;
	GOTO(581,L20);

L12:  case 12:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[42];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(593,L13);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization = i1;
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.isTestingPerformance = i1;
	GOTO(604,L20);

L13:  case 13:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[43];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(616,L14);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization = i1;
	GOTO(623,L20);

L14:  case 14:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[44];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(635,L15);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.isVerbose = i1;
	GOTO(642,L20);

L15:  case 15:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[45];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(654,L16);
	i1 = iv4;
	i2 = 4;
	i1 = i1 | i2;
	iv4 = i1;
	GOTO(663,L20);

L16:  case 16:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[46];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(675,L17);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.oldTyping = i1;
	GOTO(682,L20);

L17:  case 17:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[47];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(694,L18);
	iv6 += 1;
	i1 = iv6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 >= i2)
		GOTO(704,L20);
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	cl_ca_mcgill_sable_soot_grimp_Main.V.jimpleClassPath = a1;
	GOTO(714,L20);

L18:  case 18:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[48];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(726,L19);
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.isInDebugMode = i1;
	GOTO(733,L20);

L19:  case 19:
	a1 = av0;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[49];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		startsWith_S_ZcCfn.f(a1,a2);
	if (i1 == 0)
		GOTO(745,L22);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[50];
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
	GOTO(777,L20);

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
		GOBACK(792,L2);
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
	GOTO(813,L40);

L23:  case 23:
	pc = 816;
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[51];
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
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[52];
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
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.produceJasminFile;
	if (i1 == 0)
		GOTO(873,L24);
	a1 = (Object)st_ca_mcgill_sable_soot_grimp_Main[53];
	av12 = a1;
	GOTO(880,L28);

L24:  case 24:
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.produceJimpleFile;
	if (i1 == 0)
		GOTO(886,L25);
	a1 = (Object)st_ca_mcgill_sable_soot_grimp_Main[54];
	av12 = a1;
	GOTO(893,L28);

L25:  case 25:
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.produceJimpFile;
	if (i1 == 0)
		GOTO(899,L26);
	a1 = (Object)st_ca_mcgill_sable_soot_grimp_Main[55];
	av12 = a1;
	GOTO(906,L28);

L26:  case 26:
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.produceGrimpleFile;
	if (i1 == 0)
		GOTO(912,L27);
	a1 = (Object)st_ca_mcgill_sable_soot_grimp_Main[56];
	av12 = a1;
	GOTO(919,L28);

L27:  case 27:
	a1 = (Object)st_ca_mcgill_sable_soot_grimp_Main[57];
	av12 = a1;
L28:  case 28:
	pc = 926;
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
	pc = 969;
	GOTO(969,L30);

L29:  case 29:
	pc = 972;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[58];
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
L30:  case 30:
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(1007,L34);
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
	pc = 1025;
	GOTO(1025,L32);

L31:  case 31:
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
	a1 = new(&cl_ca_mcgill_sable_soot_grimp_GrimpBody.C);
	a2 = a1;
	a3 = av18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_P3u3o(a2,a3);
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
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a3)->class->M.
		getStmtList__DcNB7.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArrayList*)a3)->class->M.
		size__xLkH6.f(a3);
	l4 = i3;
	l2 = l2 + l4;
	lv16 = l2;
L32:  case 32:
	a1 = av15;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1082,L31);
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
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[59];
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
	pc = 1119;
	GOTO(1119,L34);

L33:  case 33:
	pc = 1122;
	av18 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[60];
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
	GOTO(1150,L34);

L34:  case 34:
	pc = 1153;
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isInDebugMode;
	if (i1 != 0)
		GOTO(1156,L36);
	pc = 1159;
	a1 = av11;
	a2 = av12;
	a3 = av13;
	i4 = iv4;
	handleClass_SSPi_Yp3gh(a1,a2,a3,i4);
	pc = 1170;
	GOTO(1170,L37);

L35:  case 35:
	pc = 1173;
	av15 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[60];
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
	GOTO(1198,L37);

L36:  case 36:
	pc = 1201;
	a1 = av11;
	a2 = av12;
	a3 = av13;
	i4 = iv4;
	handleClass_SSPi_Yp3gh(a1,a2,a3,i4);
L37:  case 37:
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[61];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	init_ca_mcgill_sable_soot_jimple_Transformations();
	i3 = cl_ca_mcgill_sable_soot_jimple_Transformations.V.nodeCount;
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[62];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	init_ca_mcgill_sable_soot_jimple_Transformations();
	i3 = cl_ca_mcgill_sable_soot_jimple_Transformations.V.aggrCount;
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	pc = 1260;
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
	pc = 1270;
	GOTO(1270,L39);

L38:  case 38:
	pc = 1273;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[63];
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
L39:  case 39:
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
	iv10 += 1;
L40:  case 40:
	pc = 1314;
	i1 = iv10;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(1318,L23);
	i1 = cl_ca_mcgill_sable_soot_grimp_Main.V.isProfilingOptimization;
	if (i1 == 0)
		GOTO(1324,L43);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[64];
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
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[65];
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
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[66];
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
	GOTO(1377,L42);

L41:  case 41:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_grimp_GrimpBody.C,
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
	a3 = ((struct in_ca_mcgill_sable_soot_grimp_GrimpBody*)a3)->class->M.
		getStmtList__DcNB7.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_util_ArrayList*)a3)->class->M.
		size__xLkH6.f(a3);
	l4 = i3;
	l2 = l2 + l4;
	lv12 = l2;
L42:  case 42:
	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(1413,L41);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[67];
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
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[68];
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[69];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_grimp_Main.V.graphTimer;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_Timer*)a3)->class->M.
		getTime__Zo3V2.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[70];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_grimp_Main.V.defsTimer;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_Timer*)a3)->class->M.
		getTime__Zo3V2.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[71];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_grimp_Main.V.usesTimer;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_Timer*)a3)->class->M.
		getTime__Zo3V2.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[72];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_grimp_Main.V.cleanupAlgorithmTimer;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_Timer*)a3)->class->M.
		getTime__Zo3V2.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[73];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_grimp_Main.V.copiesTimer;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_Timer*)a3)->class->M.
		getTime__Zo3V2.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[74];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_grimp_Main.V.liveTimer;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_Timer*)a3)->class->M.
		getTime__Zo3V2.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[75];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = cl_ca_mcgill_sable_soot_grimp_Main.V.resolveTimer;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_Timer*)a3)->class->M.
		getTime__Zo3V2.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.conversionTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv14 = l2;
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup1Timer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv16 = l2;
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.splitTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv18 = l2;
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.assignTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv20 = l2;
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.packTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv22 = l2;
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup2Timer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv24 = l2;
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.totalTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		end__dIyfD.f(a1);
	a1 = cl_ca_mcgill_sable_soot_grimp_Main.V.totalTimer;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_Timer*)a1)->class->M.
		getTime__Zo3V2.f(a1);
	lv26 = l2;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[76];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv14;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[77];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv14;
	l6 = 100;
	l4 = l4 * l6;
	l6 = lv26;
	if (!l6) throwDivisionByZeroException();
	l4 = l4 / l6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[78];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.conversionLocalCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[79];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.conversionStmtCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[80];
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[81];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv16;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[77];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv16;
	l6 = 100;
	l4 = l4 * l6;
	l6 = lv26;
	if (!l6) throwDivisionByZeroException();
	l4 = l4 / l6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[78];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup1LocalCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[79];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup1StmtCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[80];
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[82];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv18;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[77];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv18;
	l6 = 100;
	l4 = l4 * l6;
	l6 = lv26;
	if (!l6) throwDivisionByZeroException();
	l4 = l4 / l6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[78];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.splitLocalCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[79];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.splitStmtCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[80];
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[83];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv20;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[77];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv20;
	l6 = 100;
	l4 = l4 * l6;
	l6 = lv26;
	if (!l6) throwDivisionByZeroException();
	l4 = l4 / l6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[78];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.assignLocalCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[79];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.assignStmtCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[80];
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[84];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv22;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[77];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv22;
	l6 = 100;
	l4 = l4 * l6;
	l6 = lv26;
	if (!l6) throwDivisionByZeroException();
	l4 = l4 / l6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[78];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.packLocalCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[79];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.packStmtCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[80];
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[85];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv24;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[77];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv24;
	l6 = 100;
	l4 = l4 * l6;
	l6 = lv26;
	if (!l6) throwDivisionByZeroException();
	l4 = l4 / l6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[78];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup2LocalCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[79];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup2StmtCount;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[80];
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
	l2 = lv26;
	f1 = l2;
	f2 = 1000.0;
	f1 = f1 / f2;
	fv28 = f1;
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
	fv29 = f1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[86];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	l4 = lv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_l_2WFt8.f(a2,l4);
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[87];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	f3 = fv28;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_f_UN6Xq.f(a2,f3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[88];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	l4 = lv2;
	f3 = l4;
	f4 = fv28;
	f3 = f3 / f4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_f_UN6Xq.f(a2,f3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[89];
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
	a4 = (Object)st_ca_mcgill_sable_soot_grimp_Main[90];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	f3 = fv29;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_f_UN6Xq.f(a2,f3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[91];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	f3 = fv29;
	l5 = lv2;
	f4 = l5;
	f3 = f3 / f4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_f_UN6Xq.f(a2,f3);
	a3 = (Object)st_ca_mcgill_sable_soot_grimp_Main[92];
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
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M handleClass_SSPi_Yp3gh: ca.mcgill.sable.soot.grimp.Main.handleClass(Lca/mcgill/sable/soot/SootClass;Ljava/lang/String;Ljava/io/PrintWriter;I)V */

Class xt_handleClass_SSPi_Yp3gh[] = { 0 };

Void handleClass_SSPi_Yp3gh(Object p1, Object p2, Object p3, Int p4)
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

	if (cl_ca_mcgill_sable_soot_grimp_Main.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_grimp_Main.C);

L0:	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[53];
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
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[55];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 != 0)
		GOTO(48,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_grimp_Main[57];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(57,L3);
L2:	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_BuildBody.C);
	a3 = a2;
	a4 = v__ES3xL();
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

L3:	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_BuildBody.C);
	a3 = a2;
	a4 = v__ES3xL();
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

/*M init__G2i2X: ca.mcgill.sable.soot.grimp.Main.<init>()V */

Class xt_init__G2i2X[] = { 0 };

Void init__G2i2X(Object p0)
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

/*M clinit__twxuJ: ca.mcgill.sable.soot.grimp.Main.<clinit>()V */

Class xt_clinit__twxuJ[] = { 0 };

Void clinit__twxuJ(void)
{
Object a0, a1, a2;
Int i0, i1, i2;
PROLOGUE;


L0:	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.usePackedDefs = i1;
	i1 = 1;
	cl_ca_mcgill_sable_soot_grimp_Main.V.produceGrimpFile = i1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.copiesTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.defsTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.usesTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.liveTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.splitTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.packTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup1Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.cleanup2Timer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.conversionTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.cleanupAlgorithmTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.graphTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.assignTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.resolveTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.aggregationTimer = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_Timer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Mwsz9(a2);
	cl_ca_mcgill_sable_soot_grimp_Main.V.totalTimer = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_grimp_Main[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','g','r','i','m','p','.','M','a','i','n','G','r','i','m','p',
' ','v','e','r','s','i','o','n',' ','1','.','b','e','t','a','.','4','.',
'd','e','v','.','6','C','o','p','y','r','i','g','h','t',' ','(','C',')',
' ','1','9','9','9',' ','P','a','t','r','i','c','k',' ','L','a','m',' ',
'(','p','l','a','m','@','s','a','b','l','e','.','m','c','g','i','l','l',
'.','c','a',')','.','A','l','l',' ','r','i','g','h','t','s',' ','r','e',
's','e','r','v','e','d','.','P','o','r','t','i','o','n','s',' ','c','o',
'p','y','r','i','g','h','t',' ','(','C',')',' ','1','9','9','7',',',' ',
'1','9','9','8',' ','R','a','j','a',' ','V','a','l','l','e','e','-','R',
'a','i',' ','(','k','o','r','@','s','a','b','l','e','.','m','c','g','i',
'l','l','.','c','a',')','.','P','o','r','t','i','o','n','s',' ','c','o',
'p','y','r','i','g','h','t',' ','(','C',')',' ','1','9','9','7',' ','C',
'l','a','r','k',' ','V','e','r','b','r','u','g','g','e',' ','(','c','l',
'u','m','p','@','s','a','b','l','e','.','m','c','g','i','l','l','.','c',
'a',')','.','M','o','d','i','f','i','c','a','t','i','o','n','s',' ','a',
'r','e',' ','c','o','p','y','r','i','g','h','t',' ','(','C',')',' ','1',
'9','9','7',',',' ','1','9','9','8',' ','b','y',' ','t','h','e','i','r',
' ','r','e','s','p','e','c','t','i','v','e',' ','c','o','n','t','r','i',
'b','u','t','o','r','s','.','S','e','e',' ','i','n','d','i','v','i','d',
'u','a','l',' ','s','o','u','r','c','e',' ','f','i','l','e','s',' ','f',
'o','r',' ','d','e','t','a','i','l','s','.','G','r','i','m','p',' ','c',
'o','m','e','s',' ','w','i','t','h',' ','A','B','S','O','L','U','T','E',
'L','Y',' ','N','O',' ','W','A','R','R','A','N','T','Y','.',' ',' ','T',
'h','i','s',' ','i','s',' ','f','r','e','e',' ','s','o','f','t','w','a',
'r','e',',','a','n','d',' ','y','o','u',' ','a','r','e',' ','w','e','l',
'c','o','m','e',' ','t','o',' ','r','e','d','i','s','t','r','i','b','u',
't','e',' ','i','t',' ','u','n','d','e','r',' ','c','e','r','t','a','i',
'n',' ','c','o','n','d','i','t','i','o','n','s','.','S','e','e',' ','t',
'h','e',' ','a','c','c','o','m','p','a','n','y','i','n','g',' ','f','i',
'l','e',' ',39,'C','O','P','Y','I','N','G',39,' ','f','o','r',' ','d',
'e','t','a','i','l','s','.','S','y','n','t','a','x',':',' ','j','a','v',
'a',' ','c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.',
's','o','o','t','.','g','r','i','m','p','.','M','a','i','n',' ','[','o',
'p','t','i','o','n','s',']',' ','c','l','a','s','s','C','l','a','s','s',
'p','a','t','h',' ','O','p','t','i','o','n',':',' ',' ',' ',' ','-','j',
'i','m','p','l','e','C','l','a','s','s','P','a','t','h',' ','<','p','a',
't','h','>',' ',' ',' ','u','s','e','s',' ','<','p','a','t','h','>',' ',
'a','s',' ','c','l','a','s','s','p','a','t','h',' ','f','o','r',' ','f',
'i','n','d','i','n','g',' ','c','l','a','s','s','e','s','O','u','t','p',
'u','t',' ','O','p','t','i','o','n','s',':',' ',' ',' ',' ','-','g','r',
'i','m','p','l','e',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ','p','r','o','d','u','c','e',' ','.','g','r','i','m',
'p','l','e',' ','c','o','d','e',' ',' ',' ',' ','-','g','r','i','m','p',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ','p','r','o','d','u','c','e',' ','.','g','r','i','m','p',' ','(',
's','h','o','r','t',' ','.','g','r','i','m','p','l','e',')',' ','c','o',
'd','e',' ','[','d','e','f','a','u','l','t',']',' ',' ',' ',' ','-','j',
'a','s','m','i','n',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ','p','r','o','d','u','c','e',' ','.','j','a','s',
'm','i','n',' ','c','o','d','e','J','i','m','p','l','i','f','i','c','a',
't','i','o','n',' ','O','p','t','i','o','n','s',':',' ',' ',' ',' ','-',
'n','o','c','l','e','a','n','u','p',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ','n','o',' ','c','o','n','s','t','a','n','t',
' ','o','r',' ','c','o','p','y',' ','p','r','o','p','a','g','a','t','i',
'o','n',' ','i','s',' ','p','e','r','f','o','r','m','e','d',' ',' ',' ',
' ','-','n','o','s','p','l','i','t','t','i','n','g',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ','n','o',' ','s','p','l','i','t','t',
'i','n','g',' ','o','f',' ','v','a','r','i','a','b','l','e','s',' ','i',
's',' ','p','e','r','f','o','r','m','e','d',' ',' ',' ',' ','-','o','l',
'd','t','y','p','i','n','g',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ','u','s','e',' ','o','l','d',' ','t','y','p','i','n',
'g',' ','a','l','g','o','r','i','t','h','m',' ',' ',' ',' ','-','t','y',
'p','e','l','e','s','s',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ','d','o',' ','n','o','t',' ','a','s','s','i','g','n',
' ','t','y','p','e','s','.',' ',' ','C','a','n','n','o','t',' ','b','e',
' ','u','s','e','d',' ','w','i','t','h',' ','-','j','a','s','m','i','n',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','o','r',' ','-','n','o',
'l','o','c','a','l','p','a','c','k','i','n','g',' ',' ',' ',' ',' ','-',
'n','o','l','o','c','a','l','p','a','c','k','i','n','g',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ','d','o',' ','n','o','t',' ','r','e','-','u',
's','e',' ','l','o','c','a','l','s',' ','a','f','t','e','r',' ','j','i',
'm','p','l','i','f','i','c','a','t','i','o','n',' ',' ',' ',' ','-','n',
'o','a','g','g','r','e','g','a','t','i','n','g',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ','d','o',' ','n','o','t',' ','p','e','r','f','o',
'r','m',' ','a','n','y',' ','J','i','m','p','l','e','-','l','e','v','e',
'l',' ','a','g','g','r','e','g','a','t','i','o','n','P','r','o','f','i',
'l','i','n','g','/','D','e','b','u','g','g','i','n','g',' ','O','p','t',
'i','o','n','s',':',' ',' ',' ',' ','-','t','i','m','e','t','r','a','n',
's','f','o','r','m',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p',
'e','r','f','o','r','m',' ','f','u','l','l',' ','t','r','a','n','s','f',
'o','r','m','a','t','i','o','n',' ','a','n','d',' ','p','r','i','n','t',
' ','t','i','m','i','n','g','s',' ',' ',' ',' ','-','v','e','r','b','o',
's','e',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ','p','r','i','n','t',' ','o','u','t',' ','j','i','m','p','l','i',
'f','i','c','a','t','i','o','n',' ','p','r','o','c','e','s','s',' ',' ',
' ',' ','-','d','e','b','u','g',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','a','v','o','i','d',' ','c','a',
't','c','h','i','n','g',' ','e','r','r','o','r','s',' ','d','u','r','i',
'n','g',' ','j','i','m','p','l','i','f','i','c','a','t','i','o','n',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','d','o','e','s',' ','n','o',
't',' ','t','h','r','o','w',' ','e','x','c','e','p','t','i','o','n',' ',
'i','f',' ','e','r','r','o','r',' ','i','n',' ','t','y','p','i','n','g',
'-','j','i','m','p','l','e','-','j','a','s','m','i','n','-','j','i','m',
'p','-','g','r','i','m','p','l','e','-','g','r','i','m','p','-','n','o',
'c','l','e','a','n','u','p','-','t','y','p','e','l','e','s','s','-','n',
'o','l','o','c','a','l','p','a','c','k','i','n','g','-','u','s','e','p',
'a','c','k','e','d','l','i','v','e','-','u','s','e','p','a','c','k','e',
'd','d','e','f','s','-','t','e','s','t','p','e','r','f','-','t','i','m',
'e','t','r','a','n','s','f','o','r','m','-','v','e','r','b','o','s','e',
'-','n','o','s','p','l','i','t','t','i','n','g','-','o','l','d','t','y',
'p','i','n','g','-','j','i','m','p','l','e','C','l','a','s','s','P','a',
't','h','-','d','e','b','u','g','-','U','n','r','e','c','o','g','n','i',
'z','e','d',' ','o','p','t','i','o','n',':',' ','J','i','m','p','l','i',
'f','y','i','n','g',' ','.','.','.',' ','.','j','a','s','m','i','n','.',
'j','i','m','p','l','e','.','j','i','m','p','.','g','r','i','m','p','l',
'e','.','g','r','i','m','p','C','a','n','n','o','t',' ','o','u','t','p',
'u','t',' ','f','i','l','e',' ',' ','s','t','m','t','s',' ',' ','f','a',
'i','l','e','d',' ','d','u','e',' ','t','o',':',' ','n','o','d','e',' ',
'c','o','u','n','t',':',' ','a','g','g','r','e','g','a','t','i','o','n',
' ','c','o','u','n','t',':',' ','C','a','n','n','o','t',' ','c','l','o',
's','e',' ','o','u','t','p','u','t',' ','f','i','l','e',' ','S','u','c',
'c','e','s','s','f','u','l','l','y',' ','j','i','m','p','l','i','f','i',
'e','d',' ',' ','c','l','a','s','s','f','i','l','e','s',';',' ','f','a',
'i','l','e','d',' ','o','n',' ','.','C','o','n','f','i','r','m','e','d',
' ',' ','s','t','o','r','e','d',' ','s','t','a','t','e','m','e','n','t',
's','.','g','r','a','p','h','T','i','m','e','r',':',' ','d','e','f','s',
'T','i','m','e','r',':',' ','u','s','e','s','T','i','m','e','r',':',' ',
'c','l','e','a','n','u','p','A','l','g','o','r','i','t','h','m','T','i',
'm','e','r',':',' ','c','o','p','i','e','s','T','i','m','e','r',':',' ',
'l','i','v','e','T','i','m','e','r',':',' ','r','e','s','o','l','v','e',
'T','i','m','e','r',':',' ','c','o','n','v','e','r','s','i','o','n','T',
'i','m','e','r',':',' ','(','%',')',' ',' ','l','o','c','a','l','s',' ',
' ',' ','s','t','m','t','s','c','l','e','a','n','u','p','1','T','i','m',
'e','r',':',' ',' ',' ','s','p','l','i','t','T','i','m','e','r',':',' ',
' ',' ',' ',' ',' ','a','s','s','i','g','n','T','i','m','e','r',':',' ',
' ',' ',' ',' ','p','a','c','k','T','i','m','e','r',':',' ',' ',' ',' ',
' ',' ',' ','c','l','e','a','n','u','p','2','T','i','m','e','r',':',' ',
' ',' ','s','t','m','t','s',' ','c','r','e','a','t','e','d',':',' ','t',
'o','t','a','l','T','i','m','e',':','s',' ',' ',' ','(','s','t','m','t',
's','/','s','e','c',')','t','o','t','a','l','M','e','m','o','r','y',':',
'k',' ',' ',' ','(','k','/','s','t','m','t',')'};

const void *st_ca_mcgill_sable_soot_grimp_Main[] = {
    ch_ca_mcgill_sable_soot_grimp_Main+31,	/* 0. ca.mcgill.sable.soot.grimp.Main */
    ch_ca_mcgill_sable_soot_grimp_Main+59,	/* 1. Grimp version 1.beta.4.dev.6 */
    ch_ca_mcgill_sable_soot_grimp_Main+113,	/* 2. Copyright (C) 1999 Patrick Lam (plam@sab */
    ch_ca_mcgill_sable_soot_grimp_Main+133,	/* 3. All rights reserved. */
    ch_ca_mcgill_sable_soot_grimp_Main+205,	/* 4. Portions copyright (C) 1997, 1998 Raja V */
    ch_ca_mcgill_sable_soot_grimp_Main+205,	/* 5.  */
    ch_ca_mcgill_sable_soot_grimp_Main+273,	/* 6. Portions copyright (C) 1997 Clark Verbru */
    ch_ca_mcgill_sable_soot_grimp_Main+349,	/* 7. Modifications are copyright (C) 1997, 19 */
    ch_ca_mcgill_sable_soot_grimp_Main+389,	/* 8. See individual source files for details. */
    ch_ca_mcgill_sable_soot_grimp_Main+453,	/* 9. Grimp comes with ABSOLUTELY NO WARRANTY. */
    ch_ca_mcgill_sable_soot_grimp_Main+517,	/* 10. and you are welcome to redistribute it u */
    ch_ca_mcgill_sable_soot_grimp_Main+565,	/* 11. See the accompanying file 'COPYING' for  */
    ch_ca_mcgill_sable_soot_grimp_Main+625,	/* 12. Syntax: java ca.mcgill.sable.soot.grimp. */
    ch_ca_mcgill_sable_soot_grimp_Main+642,	/* 13. Classpath Option: */
    ch_ca_mcgill_sable_soot_grimp_Main+716,	/* 14.     -jimpleClassPath <path>   uses <path */
    ch_ca_mcgill_sable_soot_grimp_Main+731,	/* 15. Output Options: */
    ch_ca_mcgill_sable_soot_grimp_Main+782,	/* 16.     -grimple                  produce .g */
    ch_ca_mcgill_sable_soot_grimp_Main+858,	/* 17.     -grimp                    produce .g */
    ch_ca_mcgill_sable_soot_grimp_Main+908,	/* 18.     -jasmin                   produce .j */
    ch_ca_mcgill_sable_soot_grimp_Main+931,	/* 19. Jimplification Options: */
    ch_ca_mcgill_sable_soot_grimp_Main+1005,	/* 20.     -nocleanup                no constan */
    ch_ca_mcgill_sable_soot_grimp_Main+1073,	/* 21.     -nosplitting              no splitti */
    ch_ca_mcgill_sable_soot_grimp_Main+1127,	/* 22.     -oldtyping                use old ty */
    ch_ca_mcgill_sable_soot_grimp_Main+1206,	/* 23.     -typeless                 do not ass */
    ch_ca_mcgill_sable_soot_grimp_Main+1255,	/* 24.                               or -noloca */
    ch_ca_mcgill_sable_soot_grimp_Main+1326,	/* 25.     -nolocalpacking           do not re- */
    ch_ca_mcgill_sable_soot_grimp_Main+1399,	/* 26.     -noaggregating            do not per */
    ch_ca_mcgill_sable_soot_grimp_Main+1427,	/* 27. Profiling%Debugging Options: */
    ch_ca_mcgill_sable_soot_grimp_Main+1502,	/* 28.     -timetransform            perform fu */
    ch_ca_mcgill_sable_soot_grimp_Main+1564,	/* 29.     -verbose                  print out  */
    ch_ca_mcgill_sable_soot_grimp_Main+1637,	/* 30.     -debug                    avoid catc */
    ch_ca_mcgill_sable_soot_grimp_Main+1710,	/* 31.                               does not t */
    ch_ca_mcgill_sable_soot_grimp_Main+1717,	/* 32. -jimple */
    ch_ca_mcgill_sable_soot_grimp_Main+1724,	/* 33. -jasmin */
    ch_ca_mcgill_sable_soot_grimp_Main+1729,	/* 34. -jimp */
    ch_ca_mcgill_sable_soot_grimp_Main+1737,	/* 35. -grimple */
    ch_ca_mcgill_sable_soot_grimp_Main+1743,	/* 36. -grimp */
    ch_ca_mcgill_sable_soot_grimp_Main+1753,	/* 37. -nocleanup */
    ch_ca_mcgill_sable_soot_grimp_Main+1762,	/* 38. -typeless */
    ch_ca_mcgill_sable_soot_grimp_Main+1777,	/* 39. -nolocalpacking */
    ch_ca_mcgill_sable_soot_grimp_Main+1791,	/* 40. -usepackedlive */
    ch_ca_mcgill_sable_soot_grimp_Main+1805,	/* 41. -usepackeddefs */
    ch_ca_mcgill_sable_soot_grimp_Main+1814,	/* 42. -testperf */
    ch_ca_mcgill_sable_soot_grimp_Main+1828,	/* 43. -timetransform */
    ch_ca_mcgill_sable_soot_grimp_Main+1836,	/* 44. -verbose */
    ch_ca_mcgill_sable_soot_grimp_Main+1848,	/* 45. -nosplitting */
    ch_ca_mcgill_sable_soot_grimp_Main+1858,	/* 46. -oldtyping */
    ch_ca_mcgill_sable_soot_grimp_Main+1874,	/* 47. -jimpleClassPath */
    ch_ca_mcgill_sable_soot_grimp_Main+1880,	/* 48. -debug */
    ch_ca_mcgill_sable_soot_grimp_Main+1881,	/* 49. - */
    ch_ca_mcgill_sable_soot_grimp_Main+1902,	/* 50. Unrecognized option:  */
    ch_ca_mcgill_sable_soot_grimp_Main+1914,	/* 51. Jimplifying  */
    ch_ca_mcgill_sable_soot_grimp_Main+1918,	/* 52. ...  */
    ch_ca_mcgill_sable_soot_grimp_Main+1925,	/* 53. .jasmin */
    ch_ca_mcgill_sable_soot_grimp_Main+1932,	/* 54. .jimple */
    ch_ca_mcgill_sable_soot_grimp_Main+1937,	/* 55. .jimp */
    ch_ca_mcgill_sable_soot_grimp_Main+1945,	/* 56. .grimple */
    ch_ca_mcgill_sable_soot_grimp_Main+1951,	/* 57. .grimp */
    ch_ca_mcgill_sable_soot_grimp_Main+1970,	/* 58. Cannot output file  */
    ch_ca_mcgill_sable_soot_grimp_Main+1978,	/* 59.  stmts   */
    ch_ca_mcgill_sable_soot_grimp_Main+1993,	/* 60. failed due to:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2005,	/* 61. node count:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2024,	/* 62. aggregation count:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2049,	/* 63. Cannot close output file  */
    ch_ca_mcgill_sable_soot_grimp_Main+2073,	/* 64. Successfully jimplified  */
    ch_ca_mcgill_sable_soot_grimp_Main+2096,	/* 65.  classfiles; failed on  */
    ch_ca_mcgill_sable_soot_grimp_Main+2097,	/* 66. . */
    ch_ca_mcgill_sable_soot_grimp_Main+2107,	/* 67. Confirmed  */
    ch_ca_mcgill_sable_soot_grimp_Main+2126,	/* 68.  stored statements. */
    ch_ca_mcgill_sable_soot_grimp_Main+2138,	/* 69. graphTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2149,	/* 70. defsTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2160,	/* 71. usesTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2183,	/* 72. cleanupAlgorithmTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2196,	/* 73. copiesTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2207,	/* 74. liveTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2221,	/* 75. resolveTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2238,	/* 76. conversionTimer:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2239,	/* 77. ( */
    ch_ca_mcgill_sable_soot_grimp_Main+2242,	/* 78. %)  */
    ch_ca_mcgill_sable_soot_grimp_Main+2251,	/* 79.  locals   */
    ch_ca_mcgill_sable_soot_grimp_Main+2257,	/* 80.  stmts */
    ch_ca_mcgill_sable_soot_grimp_Main+2274,	/* 81. cleanup1Timer:    */
    ch_ca_mcgill_sable_soot_grimp_Main+2291,	/* 82. splitTimer:       */
    ch_ca_mcgill_sable_soot_grimp_Main+2308,	/* 83. assignTimer:      */
    ch_ca_mcgill_sable_soot_grimp_Main+2325,	/* 84. packTimer:        */
    ch_ca_mcgill_sable_soot_grimp_Main+2342,	/* 85. cleanup2Timer:    */
    ch_ca_mcgill_sable_soot_grimp_Main+2357,	/* 86. stmts created:  */
    ch_ca_mcgill_sable_soot_grimp_Main+2367,	/* 87. totalTime: */
    ch_ca_mcgill_sable_soot_grimp_Main+2370,	/* 88. s   */
    ch_ca_mcgill_sable_soot_grimp_Main+2382,	/* 89.  (stmts%sec) */
    ch_ca_mcgill_sable_soot_grimp_Main+2394,	/* 90. totalMemory: */
    ch_ca_mcgill_sable_soot_grimp_Main+2397,	/* 91. k   */
    ch_ca_mcgill_sable_soot_grimp_Main+2406,	/* 92.  (k%stmt) */
    0};
