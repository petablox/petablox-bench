/*  ca_mcgill_sable_soot_coffi_ClassFile.c -- from Java class ca.mcgill.sable.soot.coffi.ClassFile  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_ByteCode.h"
#include "ca_mcgill_sable_soot_coffi_CFG.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_String_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_Code_attribute.h"
#include "ca_mcgill_sable_soot_coffi_ConstantValue_attribute.h"
#include "ca_mcgill_sable_soot_coffi_Exception_attribute.h"
#include "ca_mcgill_sable_soot_coffi_Generic_attribute.h"
#include "ca_mcgill_sable_soot_coffi_Instruction.h"
#include "ca_mcgill_sable_soot_coffi_Instruction_Unknown.h"
#include "ca_mcgill_sable_soot_coffi_LineNumberTable_attribute.h"
#include "ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.h"
#include "ca_mcgill_sable_soot_coffi_SourceFile_attribute.h"
#include "ca_mcgill_sable_soot_coffi_attribute_info.h"
#include "ca_mcgill_sable_soot_coffi_cp_info.h"
#include "ca_mcgill_sable_soot_coffi_exception_table_entry.h"
#include "ca_mcgill_sable_soot_coffi_field_info.h"
#include "ca_mcgill_sable_soot_coffi_line_number_table_entry.h"
#include "ca_mcgill_sable_soot_coffi_local_variable_table_entry.h"
#include "ca_mcgill_sable_soot_coffi_method_info.h"
#include "ca_mcgill_sable_soot_jimple_Main.h"
#include "ca_mcgill_sable_util_ClassLocator.h"
#include "java_io_DataInputStream.h"
#include "java_io_DataOutputStream.h"
#include "java_io_FileNotFoundException.h"
#include "java_io_FileOutputStream.h"
#include "java_io_FilterInputStream.h"
#include "java_io_FilterOutputStream.h"
#include "java_io_IOException.h"
#include "java_io_InputStream.h"
#include "java_io_PrintStream.h"
#include "java_lang_ClassNotFoundException.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_lang_Throwable.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_ByteCode.C,
    &cl_ca_mcgill_sable_soot_coffi_CFG.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_Exception_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_Generic_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
    &cl_ca_mcgill_sable_soot_coffi_Instruction_Unknown.C,
    &cl_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_SourceFile_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_attribute_info.C,
    &cl_ca_mcgill_sable_soot_coffi_cp_info.C,
    &cl_ca_mcgill_sable_soot_coffi_exception_table_entry.C,
    &cl_ca_mcgill_sable_soot_coffi_field_info.C,
    &cl_ca_mcgill_sable_soot_coffi_line_number_table_entry.C,
    &cl_ca_mcgill_sable_soot_coffi_local_variable_table_entry.C,
    &cl_ca_mcgill_sable_soot_coffi_method_info.C,
    &cl_ca_mcgill_sable_soot_jimple_Main.C,
    &cl_ca_mcgill_sable_util_ClassLocator.C,
    &cl_java_io_DataInputStream.C,
    &cl_java_io_DataOutputStream.C,
    &cl_java_io_FileNotFoundException.C,
    &cl_java_io_FileOutputStream.C,
    &cl_java_io_FilterInputStream.C,
    &cl_java_io_FilterOutputStream.C,
    &cl_java_io_IOException.C,
    &cl_java_io_InputStream.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_ClassNotFoundException.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_lang_Throwable.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_ClassFile[];
extern const void *st_ca_mcgill_sable_soot_coffi_ClassFile[];
extern Class xt_init_S_nTwMQ[];
extern Class xt_toString__h9n5N[];
extern Class xt_loadClassFile__fX87x[];
extern Class xt_saveClassFile__uts3P[];
extern Class xt_access_string_iS_ghPag[];
extern Class xt_readClass_D_07dq3[];
extern Class xt_readConstantPool_D_uDzw8[];
extern Class xt_readAttributes_Diaa_lFUCO[];
extern Class xt_readFields_D_RtLad[];
extern Class xt_readMethods_D_8YBQ0[];
extern Class xt_writeConstantPool_D_Y2o5F[];
extern Class xt_writeAttributes_Diaa_T8TGM[];
extern Class xt_writeFields_D_5ZFPo[];
extern Class xt_writeMethods_D_q7z3n[];
extern Class xt_writeClass_D_6WwVC[];
extern Class xt_parseMethod_m_jL04W[];
extern Class xt_parse__kr8eg[];
extern Class xt_relabel_I_g6oN7[];
extern Class xt_unparseMethod_m_CYVy1[];
extern Class xt_unparse__xIxlu[];
extern Class xt_parseMethodDesc_return_S_LCBlG[];
extern Class xt_parseMethodDesc_params_S_htzZ7[];
extern Class xt_parseDesc_SS_ra14s[];
extern Class xt_findMethod_S_mpApv[];
extern Class xt_listMethods__pBgUS[];
extern Class xt_listConstantPool__XumYZ[];
extern Class xt_listFields__mIWom[];
extern Class xt_moveMethod_Si_wAPAC[];
extern Class xt_descendsFrom_C_nuKC0[];
extern Class xt_descendsFrom_S_2FGPV[];
extern Class xt_isSterile__zCWS8[];
extern Class xt_sameClass_S_fw1N8[];
extern Class xt_fieldName_i_9nzr1[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
static const struct ihash htable[8] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_ClassFile.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_ClassFile.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_ClassFile.M.equals_O_Ba6e0,
    0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','l','a','s','s','F','i','l','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
static const Char nmcv_0[] = {
'M','A','G','I','C'};
static const Char sgcv_0[] = {
'J'};
static const Char nmcv_1[] = {
'A','C','C','_','P','U','B','L','I','C'};
static const Char sgcv_1[] = {
'S'};
static const Char nmcv_2[] = {
'A','C','C','_','P','R','I','V','A','T','E'};
static const Char sgcv_2[] = {
'S'};
static const Char nmcv_3[] = {
'A','C','C','_','P','R','O','T','E','C','T','E','D'};
static const Char sgcv_3[] = {
'S'};
static const Char nmcv_4[] = {
'A','C','C','_','S','T','A','T','I','C'};
static const Char sgcv_4[] = {
'S'};
static const Char nmcv_5[] = {
'A','C','C','_','F','I','N','A','L'};
static const Char sgcv_5[] = {
'S'};
static const Char nmcv_6[] = {
'A','C','C','_','S','U','P','E','R'};
static const Char sgcv_6[] = {
'S'};
static const Char nmcv_7[] = {
'A','C','C','_','V','O','L','A','T','I','L','E'};
static const Char sgcv_7[] = {
'S'};
static const Char nmcv_8[] = {
'A','C','C','_','T','R','A','N','S','I','E','N','T'};
static const Char sgcv_8[] = {
'S'};
static const Char nmcv_9[] = {
'A','C','C','_','I','N','T','E','R','F','A','C','E'};
static const Char sgcv_9[] = {
'S'};
static const Char nmcv_10[] = {
'A','C','C','_','A','B','S','T','R','A','C','T'};
static const Char sgcv_10[] = {
'S'};
static const Char nmcv_11[] = {
'A','C','C','_','U','N','K','N','O','W','N'};
static const Char sgcv_11[] = {
'S'};
static const Char nmcv_12[] = {
'D','E','S','C','_','B','Y','T','E'};
static const Char sgcv_12[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_13[] = {
'D','E','S','C','_','C','H','A','R'};
static const Char sgcv_13[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_14[] = {
'D','E','S','C','_','D','O','U','B','L','E'};
static const Char sgcv_14[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_15[] = {
'D','E','S','C','_','F','L','O','A','T'};
static const Char sgcv_15[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_16[] = {
'D','E','S','C','_','I','N','T'};
static const Char sgcv_16[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_17[] = {
'D','E','S','C','_','L','O','N','G'};
static const Char sgcv_17[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_18[] = {
'D','E','S','C','_','O','B','J','E','C','T'};
static const Char sgcv_18[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_19[] = {
'D','E','S','C','_','S','H','O','R','T'};
static const Char sgcv_19[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_20[] = {
'D','E','S','C','_','B','O','O','L','E','A','N'};
static const Char sgcv_20[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_21[] = {
'D','E','S','C','_','V','O','I','D'};
static const Char sgcv_21[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_22[] = {
'D','E','S','C','_','A','R','R','A','Y'};
static const Char sgcv_22[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_0[] = {
'd','e','b','u','g'};
static const Char sgiv_0[] = {
'Z'};
static const Char nmiv_1[] = {
'f','n'};
static const Char sgiv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_2[] = {
'm','a','g','i','c'};
static const Char sgiv_2[] = {
'J'};
static const Char nmiv_3[] = {
'm','i','n','o','r','_','v','e','r','s','i','o','n'};
static const Char sgiv_3[] = {
'I'};
static const Char nmiv_4[] = {
'm','a','j','o','r','_','v','e','r','s','i','o','n'};
static const Char sgiv_4[] = {
'I'};
static const Char nmiv_5[] = {
'c','o','n','s','t','a','n','t','_','p','o','o','l','_','c','o','u','n',
't'};
static const Char sgiv_5[] = {
'I'};
static const Char nmiv_6[] = {
'c','o','n','s','t','a','n','t','_','p','o','o','l'};
static const Char sgiv_6[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f','o',
';'};
static const Char nmiv_7[] = {
'a','c','c','e','s','s','_','f','l','a','g','s'};
static const Char sgiv_7[] = {
'I'};
static const Char nmiv_8[] = {
't','h','i','s','_','c','l','a','s','s'};
static const Char sgiv_8[] = {
'I'};
static const Char nmiv_9[] = {
's','u','p','e','r','_','c','l','a','s','s'};
static const Char sgiv_9[] = {
'I'};
static const Char nmiv_10[] = {
'i','n','t','e','r','f','a','c','e','s','_','c','o','u','n','t'};
static const Char sgiv_10[] = {
'I'};
static const Char nmiv_11[] = {
'i','n','t','e','r','f','a','c','e','s'};
static const Char sgiv_11[] = {
'[','I'};
static const Char nmiv_12[] = {
'f','i','e','l','d','s','_','c','o','u','n','t'};
static const Char sgiv_12[] = {
'I'};
static const Char nmiv_13[] = {
'f','i','e','l','d','s'};
static const Char sgiv_13[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','f','i','e','l','d','_','i',
'n','f','o',';'};
static const Char nmiv_14[] = {
'm','e','t','h','o','d','s','_','c','o','u','n','t'};
static const Char sgiv_14[] = {
'I'};
static const Char nmiv_15[] = {
'm','e','t','h','o','d','s'};
static const Char sgiv_15[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d','_',
'i','n','f','o',';'};
static const Char nmiv_16[] = {
'a','t','t','r','i','b','u','t','e','s','_','c','o','u','n','t'};
static const Char sgiv_16[] = {
'I'};
static const Char nmiv_17[] = {
'a','t','t','r','i','b','u','t','e','s'};
static const Char sgiv_17[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','a','t','t','r','i','b','u',
't','e','_','i','n','f','o',';'};
static const Char nmsm_0[] = {
'a','c','c','e','s','s','_','s','t','r','i','n','g'};
static const Char sgsm_0[] = {
'(','I','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmsm_1[] = {
'p','a','r','s','e','M','e','t','h','o','d','D','e','s','c','_','r','e',
't','u','r','n'};
static const Char sgsm_1[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmsm_2[] = {
'p','a','r','s','e','M','e','t','h','o','d','D','e','s','c','_','p','a',
'r','a','m','s'};
static const Char sgsm_2[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmsm_3[] = {
'p','a','r','s','e','D','e','s','c'};
static const Char sgsm_3[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
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
';',')','V'};
static const Char nmim_13[] = {
'l','o','a','d','C','l','a','s','s','F','i','l','e'};
static const Char sgim_13[] = {
'(',')','Z'};
static const Char nmim_14[] = {
's','a','v','e','C','l','a','s','s','F','i','l','e'};
static const Char sgim_14[] = {
'(',')','Z'};
static const Char nmim_15[] = {
'r','e','a','d','C','l','a','s','s'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','I','n','p','u',
't','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_16[] = {
'r','e','a','d','C','o','n','s','t','a','n','t','P','o','o','l'};
static const Char sgim_16[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','I','n','p','u',
't','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_17[] = {
'r','e','a','d','A','t','t','r','i','b','u','t','e','s'};
static const Char sgim_17[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','I','n','p','u',
't','S','t','r','e','a','m',';','I','[','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','c','o','f','f',
'i','/','a','t','t','r','i','b','u','t','e','_','i','n','f','o',';',')',
'Z'};
static const Char nmim_18[] = {
'r','e','a','d','F','i','e','l','d','s'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','I','n','p','u',
't','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_19[] = {
'r','e','a','d','M','e','t','h','o','d','s'};
static const Char sgim_19[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','I','n','p','u',
't','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_20[] = {
'w','r','i','t','e','C','o','n','s','t','a','n','t','P','o','o','l'};
static const Char sgim_20[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','O','u','t','p',
'u','t','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_21[] = {
'w','r','i','t','e','A','t','t','r','i','b','u','t','e','s'};
static const Char sgim_21[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','O','u','t','p',
'u','t','S','t','r','e','a','m',';','I','[','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','c','o','f',
'f','i','/','a','t','t','r','i','b','u','t','e','_','i','n','f','o',';',
')','Z'};
static const Char nmim_22[] = {
'w','r','i','t','e','F','i','e','l','d','s'};
static const Char sgim_22[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','O','u','t','p',
'u','t','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_23[] = {
'w','r','i','t','e','M','e','t','h','o','d','s'};
static const Char sgim_23[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','O','u','t','p',
'u','t','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_24[] = {
'w','r','i','t','e','C','l','a','s','s'};
static const Char sgim_24[] = {
'(','L','j','a','v','a','/','i','o','/','D','a','t','a','O','u','t','p',
'u','t','S','t','r','e','a','m',';',')','Z'};
static const Char nmim_25[] = {
'p','a','r','s','e','M','e','t','h','o','d'};
static const Char sgim_25[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d','_',
'i','n','f','o',';',')','L','c','a','/','m','c','g','i','l','l','/','s',
'a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','I','n',
's','t','r','u','c','t','i','o','n',';'};
static const Char nmim_26[] = {
'p','a','r','s','e'};
static const Char sgim_26[] = {
'(',')','V'};
static const Char nmim_27[] = {
'r','e','l','a','b','e','l'};
static const Char sgim_27[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','I'};
static const Char nmim_28[] = {
'u','n','p','a','r','s','e','M','e','t','h','o','d'};
static const Char sgim_28[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d','_',
'i','n','f','o',';',')','[','B'};
static const Char nmim_29[] = {
'u','n','p','a','r','s','e'};
static const Char sgim_29[] = {
'(',')','V'};
static const Char nmim_30[] = {
'f','i','n','d','M','e','t','h','o','d'};
static const Char sgim_30[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','m','e','t','h','o','d',
'_','i','n','f','o',';'};
static const Char nmim_31[] = {
'l','i','s','t','M','e','t','h','o','d','s'};
static const Char sgim_31[] = {
'(',')','V'};
static const Char nmim_32[] = {
'l','i','s','t','C','o','n','s','t','a','n','t','P','o','o','l'};
static const Char sgim_32[] = {
'(',')','V'};
static const Char nmim_33[] = {
'l','i','s','t','F','i','e','l','d','s'};
static const Char sgim_33[] = {
'(',')','V'};
static const Char nmim_34[] = {
'm','o','v','e','M','e','t','h','o','d'};
static const Char sgim_34[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','I',')','V'};
static const Char nmim_35[] = {
'd','e','s','c','e','n','d','s','F','r','o','m'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','C','l','a','s','s','F','i',
'l','e',';',')','Z'};
static const Char nmim_36[] = {
'd','e','s','c','e','n','d','s','F','r','o','m'};
static const Char sgim_36[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_37[] = {
'i','s','S','t','e','r','i','l','e'};
static const Char sgim_37[] = {
'(',')','Z'};
static const Char nmim_38[] = {
's','a','m','e','C','l','a','s','s'};
static const Char sgim_38[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','Z'};
static const Char nmim_39[] = {
'f','i','e','l','d','N','a','m','e'};
static const Char sgim_39[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.MAGIC,(const Char *)&nmcv_0,5,(const Char *)&sgcv_0,1,1,0x18,0}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_PUBLIC,(const Char *)&nmcv_1,10,(const Char *)&sgcv_1,1,1,0x18,1}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_PRIVATE,(const Char *)&nmcv_2,11,(const Char *)&sgcv_2,1,1,0x18,2}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_PROTECTED,(const Char *)&nmcv_3,13,(const Char *)&sgcv_3,1,1,0x18,3}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_STATIC,(const Char *)&nmcv_4,10,(const Char *)&sgcv_4,1,1,0x18,4}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_FINAL,(const Char *)&nmcv_5,9,(const Char *)&sgcv_5,1,1,0x18,5}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_SUPER,(const Char *)&nmcv_6,9,(const Char *)&sgcv_6,1,1,0x18,6}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_VOLATILE,(const Char *)&nmcv_7,12,(const Char *)&sgcv_7,1,1,0x18,7}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_TRANSIENT,(const Char *)&nmcv_8,13,(const Char *)&sgcv_8,1,1,0x18,8}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_INTERFACE,(const Char *)&nmcv_9,13,(const Char *)&sgcv_9,1,1,0x18,9}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_ABSTRACT,(const Char *)&nmcv_10,12,(const Char *)&sgcv_10,1,1,0x18,10}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_UNKNOWN,(const Char *)&nmcv_11,11,(const Char *)&sgcv_11,1,1,0x18,11}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_BYTE,(const Char *)&nmcv_12,9,(const Char *)&sgcv_12,18,1,0x18,12}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_CHAR,(const Char *)&nmcv_13,9,(const Char *)&sgcv_13,18,1,0x18,13}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_DOUBLE,(const Char *)&nmcv_14,11,(const Char *)&sgcv_14,18,1,0x18,14}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_FLOAT,(const Char *)&nmcv_15,10,(const Char *)&sgcv_15,18,1,0x18,15}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_INT,(const Char *)&nmcv_16,8,(const Char *)&sgcv_16,18,1,0x18,16}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_LONG,(const Char *)&nmcv_17,9,(const Char *)&sgcv_17,18,1,0x18,17}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_OBJECT,(const Char *)&nmcv_18,11,(const Char *)&sgcv_18,18,1,0x18,18}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_SHORT,(const Char *)&nmcv_19,10,(const Char *)&sgcv_19,18,1,0x18,19}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_BOOLEAN,(const Char *)&nmcv_20,12,(const Char *)&sgcv_20,18,1,0x18,20}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_VOID,(const Char *)&nmcv_21,9,(const Char *)&sgcv_21,18,1,0x18,21}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_ARRAY,(const Char *)&nmcv_22,10,(const Char *)&sgcv_22,18,1,0x18,22}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, debug), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,1,1,0x0,23}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, fn), 0,(const Char *)&nmiv_1,2,(const Char *)&sgiv_1,18,1,0x0,24}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, magic), 0,(const Char *)&nmiv_2,5,(const Char *)&sgiv_2,1,1,0x0,25}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, minor_version), 0,(const Char *)&nmiv_3,13,(const Char *)&sgiv_3,1,1,0x0,26}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, major_version), 0,(const Char *)&nmiv_4,13,(const Char *)&sgiv_4,1,1,0x0,27}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, constant_pool_count), 0,(const Char *)&nmiv_5,19,(const Char *)&sgiv_5,1,1,0x0,28}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, constant_pool), 0,(const Char *)&nmiv_6,13,(const Char *)&sgiv_6,37,1,0x1,29}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, access_flags), 0,(const Char *)&nmiv_7,12,(const Char *)&sgiv_7,1,1,0x0,30}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, this_class), 0,(const Char *)&nmiv_8,10,(const Char *)&sgiv_8,1,1,0x1,31}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, super_class), 0,(const Char *)&nmiv_9,11,(const Char *)&sgiv_9,1,1,0x0,32}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, interfaces_count), 0,(const Char *)&nmiv_10,16,(const Char *)&sgiv_10,1,1,0x0,33}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, interfaces), 0,(const Char *)&nmiv_11,10,(const Char *)&sgiv_11,2,1,0x0,34}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, fields_count), 0,(const Char *)&nmiv_12,12,(const Char *)&sgiv_12,1,1,0x0,35}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, fields), 0,(const Char *)&nmiv_13,6,(const Char *)&sgiv_13,40,1,0x0,36}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, methods_count), 0,(const Char *)&nmiv_14,13,(const Char *)&sgiv_14,1,1,0x0,37}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, methods), 0,(const Char *)&nmiv_15,7,(const Char *)&sgiv_15,41,1,0x0,38}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, attributes_count), 0,(const Char *)&nmiv_16,16,(const Char *)&sgiv_16,1,1,0x0,39}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_ClassFile, attributes), 0,(const Char *)&nmiv_17,10,(const Char *)&sgiv_17,44,1,0x0,40}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())access_string_iS_ghPag,
	(const Char *)&nmsm_0,13,(const Char *)&sgsm_0,39,
	1,0x8,4,xt_access_string_iS_ghPag},
    {TMIT_native_code, (Void(*)())parseMethodDesc_return_S_LCBlG,
	(const Char *)&nmsm_1,22,(const Char *)&sgsm_1,38,
	1,0x8,20,xt_parseMethodDesc_return_S_LCBlG},
    {TMIT_native_code, (Void(*)())parseMethodDesc_params_S_htzZ7,
	(const Char *)&nmsm_2,22,(const Char *)&sgsm_2,38,
	1,0x8,21,xt_parseMethodDesc_params_S_htzZ7},
    {TMIT_native_code, (Void(*)())parseDesc_SS_ra14s,
	(const Char *)&nmsm_3,9,(const Char *)&sgsm_3,56,
	1,0x8,22,xt_parseDesc_SS_ra14s},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.MAGIC = ((((Long)0x0u)	 << 32) | ((Long)0xcafebabeu));
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_PUBLIC = 1;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_PRIVATE = 2;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_PROTECTED = 4;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_STATIC = 8;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_FINAL = 16;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_SUPER = 32;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_VOLATILE = 64;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_TRANSIENT = 128;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_INTERFACE = 512;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_ABSTRACT = 1024;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.ACC_UNKNOWN = 30720;
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'B'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_BYTE = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'C'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_CHAR = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'D'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_DOUBLE = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'F'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_FLOAT = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'I'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_INT = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'J'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_LONG = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'L'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_OBJECT = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'S'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_SHORT = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'Z'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_BOOLEAN = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'V'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_VOID = intern_string (&_svjls);
   }
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
'['    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_ClassFile.V.DESC_ARRAY = intern_string (&_svjls);
   }
}

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_coffi_ClassFile = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_ClassFile.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_ClassFile cl_ca_mcgill_sable_soot_coffi_ClassFile = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_ClassFile),
    40,
    4,
    18,
    23,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    46, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_ClassFile,
    st_ca_mcgill_sable_soot_coffi_ClassFile,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_ClassFile,
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
	{TMIT_native_code, toString__h9n5N,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,1,xt_toString__h9n5N},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_S_nTwMQ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,21,1,0x0,0,xt_init_S_nTwMQ},
	{TMIT_native_code, loadClassFile__fX87x,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,3,1,0x0,2,xt_loadClassFile__fX87x},
	{TMIT_native_code, saveClassFile__uts3P,(const Char *)&nmim_14,13,
	(const Char *)&sgim_14,3,1,0x0,3,xt_saveClassFile__uts3P},
	{TMIT_native_code, readClass_D_07dq3,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,28,1,0x1,5,xt_readClass_D_07dq3},
	{TMIT_native_code, readConstantPool_D_uDzw8,(const Char *)&nmim_16,16,
	(const Char *)&sgim_16,28,1,0x4,6,xt_readConstantPool_D_uDzw8},
	{TMIT_native_code, readAttributes_Diaa_lFUCO,(const Char *)&nmim_17,14,
	(const Char *)&sgim_17,73,1,0x4,7,xt_readAttributes_Diaa_lFUCO},
	{TMIT_native_code, readFields_D_RtLad,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,28,1,0x4,8,xt_readFields_D_RtLad},
	{TMIT_native_code, readMethods_D_8YBQ0,(const Char *)&nmim_19,11,
	(const Char *)&sgim_19,28,1,0x4,9,xt_readMethods_D_8YBQ0},
	{TMIT_native_code, writeConstantPool_D_Y2o5F,(const Char *)&nmim_20,17,
	(const Char *)&sgim_20,29,1,0x4,10,xt_writeConstantPool_D_Y2o5F},
	{TMIT_native_code, writeAttributes_Diaa_T8TGM,(const Char *)&nmim_21,15,
	(const Char *)&sgim_21,74,1,0x4,11,xt_writeAttributes_Diaa_T8TGM},
	{TMIT_native_code, writeFields_D_5ZFPo,(const Char *)&nmim_22,11,
	(const Char *)&sgim_22,29,1,0x4,12,xt_writeFields_D_5ZFPo},
	{TMIT_native_code, writeMethods_D_q7z3n,(const Char *)&nmim_23,12,
	(const Char *)&sgim_23,29,1,0x4,13,xt_writeMethods_D_q7z3n},
	{TMIT_native_code, writeClass_D_6WwVC,(const Char *)&nmim_24,10,
	(const Char *)&sgim_24,29,1,0x0,14,xt_writeClass_D_6WwVC},
	{TMIT_native_code, parseMethod_m_jL04W,(const Char *)&nmim_25,11,
	(const Char *)&sgim_25,82,1,0x0,15,xt_parseMethod_m_jL04W},
	{TMIT_native_code, parse__kr8eg,(const Char *)&nmim_26,5,
	(const Char *)&sgim_26,3,1,0x0,16,xt_parse__kr8eg},
	{TMIT_native_code, relabel_I_g6oN7,(const Char *)&nmim_27,7,
	(const Char *)&sgim_27,43,1,0x0,17,xt_relabel_I_g6oN7},
	{TMIT_native_code, unparseMethod_m_CYVy1,(const Char *)&nmim_28,13,
	(const Char *)&sgim_28,44,1,0x0,18,xt_unparseMethod_m_CYVy1},
	{TMIT_native_code, unparse__xIxlu,(const Char *)&nmim_29,7,
	(const Char *)&sgim_29,3,1,0x0,19,xt_unparse__xIxlu},
	{TMIT_native_code, findMethod_S_mpApv,(const Char *)&nmim_30,10,
	(const Char *)&sgim_30,60,1,0x0,23,xt_findMethod_S_mpApv},
	{TMIT_native_code, listMethods__pBgUS,(const Char *)&nmim_31,11,
	(const Char *)&sgim_31,3,1,0x0,24,xt_listMethods__pBgUS},
	{TMIT_native_code, listConstantPool__XumYZ,(const Char *)&nmim_32,16,
	(const Char *)&sgim_32,3,1,0x0,25,xt_listConstantPool__XumYZ},
	{TMIT_native_code, listFields__mIWom,(const Char *)&nmim_33,10,
	(const Char *)&sgim_33,3,1,0x0,26,xt_listFields__mIWom},
	{TMIT_native_code, moveMethod_Si_wAPAC,(const Char *)&nmim_34,10,
	(const Char *)&sgim_34,22,1,0x0,27,xt_moveMethod_Si_wAPAC},
	{TMIT_native_code, descendsFrom_C_nuKC0,(const Char *)&nmim_35,12,
	(const Char *)&sgim_35,41,1,0x0,28,xt_descendsFrom_C_nuKC0},
	{TMIT_native_code, descendsFrom_S_2FGPV,(const Char *)&nmim_36,12,
	(const Char *)&sgim_36,21,1,0x0,29,xt_descendsFrom_S_2FGPV},
	{TMIT_native_code, isSterile__zCWS8,(const Char *)&nmim_37,9,
	(const Char *)&sgim_37,3,1,0x0,30,xt_isSterile__zCWS8},
	{TMIT_native_code, sameClass_S_fw1N8,(const Char *)&nmim_38,9,
	(const Char *)&sgim_38,21,1,0x0,31,xt_sameClass_S_fw1N8},
	{TMIT_native_code, fieldName_i_9nzr1,(const Char *)&nmim_39,9,
	(const Char *)&sgim_39,21,1,0x0,32,xt_fieldName_i_9nzr1},
    } /* end of methodsigs */
};


/*M init_S_nTwMQ: ca.mcgill.sable.soot.coffi.ClassFile.<init>(Ljava/lang/String;)V */

Class xt_init_S_nTwMQ[] = { 0 };

Void init_S_nTwMQ(Object p0, Object p1)
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
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fn = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__h9n5N: ca.mcgill.sable.soot.coffi.ClassFile.toString()Ljava/lang/String; */

Class xt_toString__h9n5N[] = { 0 };

Object toString__h9n5N(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av0;
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
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M loadClassFile__fX87x: ca.mcgill.sable.soot.coffi.ClassFile.loadClassFile()Z */

Class xt_loadClassFile__fX87x[] = { 0 };

Boolean loadClassFile__fX87x(Object p0)
{
static struct handler htable[] = {
    &cl_java_lang_ClassNotFoundException.C, 0, 28, 2,
    &cl_java_io_IOException.C, 74, 82, 4,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Boolean rv;
Object a0, a1, a2, a3, a4, a5;
volatile Object av0, av1, av2, av4;
Int i0, i1, i2, i3, i4, i5;
volatile Int iv3;
PROLOGUE;

	av0 = p0;

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 2, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	pc = 0;
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.jimpleClassPath;
	if (a1 == 0)
		GOTO(3,L1);
	init_ca_mcgill_sable_soot_jimple_Main();
	a1 = cl_ca_mcgill_sable_soot_jimple_Main.V.jimpleClassPath;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->fn;
	a1 = getInputStreamOf_SS_YieAy(a1,a2);
	av1 = a1;
	GOTO(17,L3);

L1:  case 1:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fn;
	a1 = getInputStreamOf_S_oKYi6(a1);
	av1 = a1;
	pc = 28;
	GOTO(28,L3);

L2:  case 2:
	pc = 31;
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[1];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->fn;
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

L3:  case 3:
	pc = 59;
	a1 = new(&cl_java_io_DataInputStream.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_I_eDEMb(a2,a3);
	av2 = a1;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readClass_D_07dq3.f(a1,a2);
	iv3 = i1;
	pc = 74;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_FilterInputStream*)a1)->class->M.
		close__XUZGO.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_InputStream*)a1)->class->M.
		close__dxK5P.f(a1);
	pc = 82;
	GOTO(82,L5);

L4:  case 4:
	pc = 85;
	av4 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Throwable*)a3)->class->M.
		getMessage__AHr9V.f(a3);
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
	rv = i1;
	goto RETURN;

L5:  case 5:
	i1 = iv3;
	if (i1 != 0)
		GOTO(128,L6);
	i1 = 0;
	rv = i1;
	goto RETURN;

L6:  case 6:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		parse__kr8eg.f(a1);
	i1 = 1;
	rv = i1;
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return rv;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M saveClassFile__uts3P: ca.mcgill.sable.soot.coffi.ClassFile.saveClassFile()Z */

Class xt_saveClassFile__uts3P[] = { 0 };

Boolean saveClassFile__uts3P(Object p0)
{
static struct handler htable[] = {
    &cl_java_io_FileNotFoundException.C, 0, 12, 1,
    &cl_java_io_IOException.C, 0, 12, 5,
    &cl_java_io_FileNotFoundException.C, 81, 93, 3,
    &cl_java_io_IOException.C, 81, 93, 4,
    &cl_java_io_IOException.C, 221, 225, 7,
    &cl_java_io_IOException.C, 237, 245, 10,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Boolean rv;
Object a0, a1, a2, a3, a4;
volatile Object av0, av1, av2, av4;
Int i0, i1, i2, i3, i4;
volatile Int iv3;
PROLOGUE;

	av0 = p0;

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 6, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	pc = 0;
	a1 = new(&cl_java_io_FileOutputStream.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_MxdL0(a2,a3);
	av1 = a1;
	pc = 12;
	GOTO(12,L6);

L1:  case 1:
	pc = 15;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fn;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		indexOf_S_S3fj3.f(a1,a2);
	if (i1 < 0)
		GOTO(25,L2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
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
	rv = i1;
	goto RETURN;

L2:  case 2:
	a1 = av0;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->fn;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[4];
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
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fn = a2;
	pc = 81;
	a1 = new(&cl_java_io_FileOutputStream.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_MxdL0(a2,a3);
	av1 = a1;
	pc = 93;
	GOTO(93,L6);

L3:  case 3:
	pc = 96;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
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
	rv = i1;
	goto RETURN;

L4:  case 4:
	pc = 124;
	av4 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Throwable*)a3)->class->M.
		getMessage__AHr9V.f(a3);
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
	rv = i1;
	goto RETURN;

L5:  case 5:
	pc = 166;
	av4 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Throwable*)a3)->class->M.
		getMessage__AHr9V.f(a3);
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
	rv = i1;
	goto RETURN;

L6:  case 6:
	pc = 208;
	a1 = new(&cl_java_io_DataOutputStream.C);
	a2 = a1;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_O_CfrLu(a2,a3);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(218,L9);
	pc = 221;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_FileOutputStream*)a1)->class->M.
		close__qwNFY.f(a1);
	pc = 225;
	GOTO(225,L8);

L7:  case 7:
	pc = 228;
L8:  case 8:
	i1 = 0;
	rv = i1;
	goto RETURN;

L9:  case 9:
	pc = 231;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeClass_D_6WwVC.f(a1,a2);
	iv3 = i1;
	pc = 237;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_FilterOutputStream*)a1)->class->M.
		close__WOcEf.f(a1);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_FileOutputStream*)a1)->class->M.
		close__qwNFY.f(a1);
	pc = 245;
	GOTO(245,L11);

L10:  case 10:
	pc = 248;
	av4 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Throwable*)a3)->class->M.
		getMessage__AHr9V.f(a3);
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
	rv = i1;
	goto RETURN;

L11:  case 11:
	i1 = iv3;
	rv = i1;
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return rv;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access_string_iS_ghPag: ca.mcgill.sable.soot.coffi.ClassFile.access_string(ILjava/lang/String;)Ljava/lang/String; */

Class xt_access_string_iS_ghPag[] = { 0 };

Object access_string_iS_ghPag(Int p1, Object p2)
{
Object a0, a1, a2, a3;
Object av1, av3;
Int i0, i1, i2, i3;
Int iv0, iv2;
PROLOGUE;

	iv0 = p1;
	av1 = p2;

L0:	i1 = 0;
	iv2 = i1;
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[6];
	av3 = a1;
	i1 = iv0;
	i2 = 1;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(8,L1);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[7];
	av3 = a1;
	i1 = 1;
	iv2 = i1;
L1:	i1 = iv0;
	i2 = 2;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(19,L4);
	i1 = iv2;
	if (i1 == 0)
		GOTO(23,L2);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(45,L3);

L2:	i1 = 1;
	iv2 = i1;
L3:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[8];
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
	av3 = a1;
L4:	i1 = iv0;
	i2 = 4;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(73,L7);
	i1 = iv2;
	if (i1 == 0)
		GOTO(77,L5);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(99,L6);

L5:	i1 = 1;
	iv2 = i1;
L6:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[9];
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
	av3 = a1;
L7:	i1 = iv0;
	i2 = 8;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(128,L10);
	i1 = iv2;
	if (i1 == 0)
		GOTO(132,L8);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(154,L9);

L8:	i1 = 1;
	iv2 = i1;
L9:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[10];
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
	av3 = a1;
L10:	i1 = iv0;
	i2 = 16;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(183,L13);
	i1 = iv2;
	if (i1 == 0)
		GOTO(187,L11);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(209,L12);

L11:	i1 = 1;
	iv2 = i1;
L12:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[11];
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
	av3 = a1;
L13:	i1 = iv0;
	i2 = 32;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(238,L16);
	i1 = iv2;
	if (i1 == 0)
		GOTO(242,L14);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(264,L15);

L14:	i1 = 1;
	iv2 = i1;
L15:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[12];
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
	av3 = a1;
L16:	i1 = iv0;
	i2 = 64;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(293,L19);
	i1 = iv2;
	if (i1 == 0)
		GOTO(297,L17);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(319,L18);

L17:	i1 = 1;
	iv2 = i1;
L18:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[13];
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
	av3 = a1;
L19:	i1 = iv0;
	i2 = 128;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(349,L22);
	i1 = iv2;
	if (i1 == 0)
		GOTO(353,L20);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(375,L21);

L20:	i1 = 1;
	iv2 = i1;
L21:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[14];
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
	av3 = a1;
L22:	i1 = iv0;
	i2 = 512;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(405,L25);
	i1 = iv2;
	if (i1 == 0)
		GOTO(409,L23);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(431,L24);

L23:	i1 = 1;
	iv2 = i1;
L24:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[15];
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
	av3 = a1;
L25:	i1 = iv0;
	i2 = 1024;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(461,L28);
	i1 = iv2;
	if (i1 == 0)
		GOTO(465,L26);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(487,L27);

L26:	i1 = 1;
	iv2 = i1;
L27:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[16];
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
	av3 = a1;
L28:	i1 = iv0;
	i2 = 30720;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(517,L31);
	i1 = iv2;
	if (i1 == 0)
		GOTO(521,L29);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av3 = a1;
	GOTO(543,L30);

L29:	i1 = 1;
	iv2 = i1;
L30:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[17];
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
	av3 = a1;
L31:	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M readClass_D_07dq3: ca.mcgill.sable.soot.coffi.ClassFile.readClass(Ljava/io/DataInputStream;)Z */

Class xt_readClass_D_07dq3[] = { 0 };

Boolean readClass_D_07dq3(Object p0, Object p1)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 0, 240, 6,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Boolean rv;
Object a0, a1, a2, a3, a4, a5;
volatile Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
volatile Int iv2;
Long l0, l1, l2, l3, l4, l5;
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
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	l5 = ((((Long)0x0u) << 32) | ((Long)0xffffffffu));
	l3 = l3 & l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->magic = l3;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->magic;
	l4 = ((((Long)0x0u) << 32) | ((Long)0xcafebabeu));
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 == 0)
		GOTO(21,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[18];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->magic;
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
	i1 = 0;
	rv = i1;
	goto RETURN;

L1:  case 1:
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->minor_version = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->major_version = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool_count = i2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readConstantPool_D_uDzw8.f(a1,a2);
	if (i1 != 0)
		GOTO(92,L2);
	i1 = 0;
	rv = i1;
	goto RETURN;

L2:  case 2:
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->access_flags = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->this_class = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->super_class = i2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->interfaces_count = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->interfaces_count;
	if (i1 <= 0)
		GOTO(133,L5);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces_count;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->interfaces = a2;
	i1 = 0;
	iv2 = i1;
	GOTO(148,L4);

L3:  case 3:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->interfaces;
	i2 = iv2;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_io_DataInputStream*)a3)->class->M.
		readUnsignedShort__dThRz.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv2 += 1;
L4:  case 4:
	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces_count;
	if (i1 < i2)
		GOBACK(169,L3);
L5:  case 5:
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fields_count = i2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readFields_D_RtLad.f(a1,a2);
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods_count = i2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readMethods_D_8YBQ0.f(a1,a2);
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->attributes_count = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->attributes_count;
	if (i1 <= 0)
		GOTO(212,L7);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->attributes_count;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_attribute_info.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->attributes = a2;
	a1 = av0;
	a2 = av1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->attributes_count;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readAttributes_Diaa_lFUCO.f(a1,a2,i3,a4);
	pc = 240;
	GOTO(240,L7);

L6:  case 6:
	pc = 243;
	av2 = a1;
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->fn;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[3];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_lang_Throwable*)a4)->class->M.
		getMessage__AHr9V.f(a4);
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

L7:  case 7:
	pc = 283;
	i1 = 1;
	rv = i1;
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return rv;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M readConstantPool_D_uDzw8: ca.mcgill.sable.soot.coffi.ClassFile.readConstantPool(Ljava/io/DataInputStream;)Z */

Class xt_readConstantPool_D_uDzw8[] = { &cl_java_io_IOException.C, 0 };

Boolean readConstantPool_D_uDzw8(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av3, av6, av7;
Int i0, i1, i2, i3, i4, i5;
Int iv2, iv4, iv5, iv6, iv8;
Long l0, l1, l2, l3, l4, l5;
Float f0, f1, f2, f3, f4, f5;
Double d0, d1, d2, d3, d4, d5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool_count;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_cp_info.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool = a2;
	i1 = 0;
	iv5 = i1;
	i1 = 1;
	iv4 = i1;
	GOTO(17,L22);

L1:	i1 = iv5;
	if (i1 == 0)
		GOTO(22,L2);
	i1 = 0;
	iv5 = i1;
	GOTO(28,L21);

L2:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_io_DataInputStream*)a1)->class->M.
		readUnsignedByte__7mTE6.f(a1);
	i1 = (Byte)i1;
	iv2 = i1;
	i1 = iv2;
	switch (i1) {
		case 1: 	GOTO(38,L15);
		case 2: 	GOTO(38,L19);
		case 3: 	GOTO(38,L8);
		case 4: 	GOTO(38,L9);
		case 5: 	GOTO(38,L10);
		case 6: 	GOTO(38,L12);
		case 7: 	GOTO(38,L3);
		case 8: 	GOTO(38,L7);
		case 9: 	GOTO(38,L4);
		case 10: 	GOTO(38,L5);
		case 11: 	GOTO(38,L6);
		case 12: 	GOTO(38,L14);
		default:	GOTO(38,L19);
	}

L3:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__VG9fb(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a1)->name_index = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(123,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[20];
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
	GOTO(154,L20);

L4:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__GQmhT(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a1)->class_index = i2;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a1)->name_and_type_index = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(191,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[21];
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
	GOTO(222,L20);

L5:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__TSMp5(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a1)->class_index = i2;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a1)->name_and_type_index = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(259,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[22];
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
	GOTO(290,L20);

L6:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__wHZcZ(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a1)->class_index = i2;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a1)->name_and_type_index = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(327,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[23];
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
	GOTO(358,L20);

L7:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__iUJpz(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_String_info*)a1)->string_index = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(384,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[24];
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
	GOTO(415,L20);

L8:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__HS4Ra(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info*)a1)->bytes = l3;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(442,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[25];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av3;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info*)a3)->bytes;
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
	GOTO(483,L20);

L9:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__fzRHr(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info*)a1)->bytes = l3;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(510,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[26];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av3;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	f3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info*)a3)->class->M.
		convert__USaIF.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_f_UN6Xq.f(a2,f3);
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
	GOTO(551,L20);

L10:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__bcTfW(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	l5 = ((((Long)0x0u) << 32) | ((Long)0xffffffffu));
	l3 = l3 & l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info*)a1)->high = l3;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	l5 = ((((Long)0x0u) << 32) | ((Long)0xffffffffu));
	l3 = l3 & l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info*)a1)->low = l3;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(598,L11);
	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	av6 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[27];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av6;
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
L11:	i1 = 1;
	iv5 = i1;
	GOTO(647,L20);

L12:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__0LvP3(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	l5 = ((((Long)0x0u) << 32) | ((Long)0xffffffffu));
	l3 = l3 & l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info*)a1)->high = l3;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	l5 = ((((Long)0x0u) << 32) | ((Long)0xffffffffu));
	l3 = l3 & l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info*)a1)->low = l3;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(694,L13);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[28];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av3;
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	d4 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info*)a3)->class->M.
		convert__9fuLW.f(a3);
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
L13:	i1 = 1;
	iv5 = i1;
	GOTO(738,L20);

L14:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__RR3RR(a2);
	av3 = a1;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a1)->name_index = i2;
	a1 = av3;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a1)->descriptor_index = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(775,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[29];
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
	GOTO(806,L20);

L15:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__S8O9p(a2);
	av7 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_io_DataInputStream*)a1)->class->M.
		readUnsignedShort__dThRz.f(a1);
	iv6 = i1;
	a1 = av7;
	i2 = iv6;
	i3 = 2;
	i2 = i2 + i3;
	a2 = anewarray(&cl_byte,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes = a2;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes;
	i2 = 0;
	i3 = iv6;
	i4 = 8;
	i3 = i3 >> (i4 & 31);
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes;
	i2 = 1;
	i3 = iv6;
	i4 = 255;
	i3 = i3 & i4;
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	i1 = iv6;
	if (i1 <= 0)
		GOTO(864,L18);
	i1 = 0;
	iv8 = i1;
	GOTO(870,L17);

L16:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes;
	i2 = iv8;
	i3 = 2;
	i2 = i2 + i3;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_io_DataInputStream*)a3)->class->M.
		readUnsignedByte__7mTE6.f(a3);
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	iv8 += 1;
L17:	i1 = iv8;
	i2 = iv6;
	if (i1 < i2)
		GOBACK(895,L16);
L18:	a1 = av7;
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->debug;
	if (i1 == 0)
		GOTO(905,L20);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[19];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[30];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a3)->class->M.
		convert__7aF4O.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[31];
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
	GOTO(949,L20);

L19:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[32];
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
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[33];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = iv4;
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
	i1 = 0;
	return i1;

L20:	a1 = av3;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	i2 = iv4;
	a3 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L21:	iv4 += 1;
L22:	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool_count;
	if (i1 < i2)
		GOBACK(1008,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M readAttributes_Diaa_lFUCO: ca.mcgill.sable.soot.coffi.ClassFile.readAttributes(Ljava/io/DataInputStream;I[Lca/mcgill/sable/soot/coffi/attribute_info;)Z */

Class xt_readAttributes_Diaa_lFUCO[] = { &cl_java_io_IOException.C, 0 };

Boolean readAttributes_Diaa_lFUCO(Object p0, Object p1, Int p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av3, av4, av9, av10, av12;
Int i0, i1, i2, i3, i4, i5;
Int iv2, iv5, iv6, iv11;
Long l0, l1, l2, l3, l4, l5;
Long lv7;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	av3 = p3;

L0:	a1 = 0;
	av4 = a1;
	i1 = 0;
	iv5 = i1;
	GOTO(6,L19);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_io_DataInputStream*)a1)->class->M.
		readUnsignedShort__dThRz.f(a1);
	iv6 = i1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_io_DataInputStream*)a1)->class->M.
		readInt__BSON3.f(a1);
	l2 = i1;
	l4 = ((((Long)0x0u) << 32) | ((Long)0xffffffffu));
	l2 = l2 & l4;
	lv7 = l2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	i2 = iv6;
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
	a1 = av9;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[34];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(48,L2);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_SourceFile_attribute.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__ZGGYG(a2);
	av10 = a1;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_SourceFile_attribute*)a1)->sourcefile_index = i2;
	a1 = av10;
	av4 = a1;
	GOTO(73,L18);

L2:	a1 = av9;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[35];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(83,L3);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__RjUmN(a2);
	av10 = a1;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ConstantValue_attribute*)a1)->constantvalue_index = i2;
	a1 = av10;
	av4 = a1;
	GOTO(108,L18);

L3:	a1 = av9;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[36];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(118,L6);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Code_attribute.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__rw5Dx(a2);
	av10 = a1;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->max_stack = i2;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->max_locals = i2;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readInt__BSON3.f(a2);
	l3 = i2;
	l5 = ((((Long)0x0u) << 32) | ((Long)0xffffffffu));
	l3 = l3 & l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->code_length = l3;
	a1 = av10;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->code_length;
	i2 = l3;
	a2 = anewarray(&cl_byte,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->code = a2;
	a1 = av1;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->code;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_io_DataInputStream*)a1)->class->M.
		read_ab_tDDu9.f(a1,a2);
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table_length = i2;
	a1 = av10;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_exception_table_entry.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table = a2;
	i1 = 0;
	iv11 = i1;
	GOTO(210,L5);

L4:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_exception_table_entry.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__gt4uZ(a2);
	av12 = a1;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_pc = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_pc = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_pc = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->catch_type = i2;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv11;
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv11 += 1;
L5:	i1 = iv11;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(278,L4);
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->attributes_count = i2;
	a1 = av10;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->attributes_count;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_attribute_info.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->attributes = a2;
	a1 = av0;
	a2 = av1;
	a3 = av10;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->attributes_count;
	a4 = av10;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readAttributes_Diaa_lFUCO.f(a1,a2,i3,a4);
	a1 = av10;
	av4 = a1;
	GOTO(323,L18);

L6:	a1 = av9;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[37];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(333,L10);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Exception_attribute.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Fmqyd(a2);
	av10 = a1;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a1)->number_of_exceptions = i2;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a1)->number_of_exceptions;
	if (i1 <= 0)
		GOTO(359,L9);
	a1 = av10;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a2)->number_of_exceptions;
	a2 = anewarray(&cl_int,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a1)->exception_index_table = a2;
	i1 = 0;
	iv11 = i1;
	GOTO(377,L8);

L7:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a1)->exception_index_table;
	i2 = iv11;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_java_io_DataInputStream*)a3)->class->M.
		readUnsignedShort__dThRz.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
	iv11 += 1;
L8:	i1 = iv11;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a2)->number_of_exceptions;
	if (i1 < i2)
		GOBACK(402,L7);
L9:	a1 = av10;
	av4 = a1;
	GOTO(409,L18);

L10:	a1 = av9;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[38];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(419,L13);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__zOg1a(a2);
	av10 = a1;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a1)->line_number_table_length = i2;
	a1 = av10;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a2)->line_number_table_length;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_line_number_table_entry.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a1)->line_number_table = a2;
	i1 = 0;
	iv11 = i1;
	GOTO(456,L12);

L11:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_line_number_table_entry.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__NBqrs(a2);
	av12 = a1;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_line_number_table_entry*)a1)->start_pc = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_line_number_table_entry*)a1)->line_number = i2;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a1)->line_number_table;
	i2 = iv11;
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv11 += 1;
L12:	i1 = iv11;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a2)->line_number_table_length;
	if (i1 < i2)
		GOBACK(506,L11);
	a1 = av10;
	av4 = a1;
	GOTO(513,L18);

L13:	a1 = av9;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[39];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(523,L16);
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__vnAaj(a2);
	av10 = a1;
	a1 = av10;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a1)->local_variable_table_length = i2;
	a1 = av10;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a2)->local_variable_table_length;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_local_variable_table_entry.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a1)->local_variable_table = a2;
	i1 = 0;
	iv11 = i1;
	GOTO(560,L15);

L14:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_local_variable_table_entry.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__nWmEb(a2);
	av12 = a1;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a1)->start_pc = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a1)->length = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a1)->name_index = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a1)->descriptor_index = i2;
	a1 = av12;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a1)->index = i2;
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a1)->local_variable_table;
	i2 = iv11;
	a3 = av12;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv11 += 1;
L15:	i1 = iv11;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a2)->local_variable_table_length;
	if (i1 < i2)
		GOBACK(637,L14);
	a1 = av10;
	av4 = a1;
	GOTO(644,L18);

L16:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_Generic_attribute.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__VUgvZ(a2);
	av10 = a1;
	l2 = lv7;
	l4 = 0;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 <= 0)
		GOTO(660,L17);
	a1 = av10;
	l3 = lv7;
	i2 = l3;
	a2 = anewarray(&cl_byte,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Generic_attribute*)a1)->info = a2;
	a1 = av1;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Generic_attribute*)a2)->info;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_io_DataInputStream*)a1)->class->M.
		read_ab_tDDu9.f(a1,a2);
L17:	a1 = av10;
	av4 = a1;
L18:	a1 = av4;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_attribute_info*)a1)->attribute_name = i2;
	a1 = av4;
	l3 = lv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_attribute_info*)a1)->attribute_length = l3;
	a1 = av3;
	i2 = iv5;
	a3 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv5 += 1;
L19:	i1 = iv5;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(713,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M readFields_D_RtLad: ca.mcgill.sable.soot.coffi.ClassFile.readFields(Ljava/io/DataInputStream;)Z */

Class xt_readFields_D_RtLad[] = { &cl_java_io_IOException.C, 0 };

Boolean readFields_D_RtLad(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->fields_count;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_field_info.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fields = a2;
	i1 = 0;
	iv3 = i1;
	GOTO(13,L3);

L1:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_field_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mfdof(a2);
	av2 = a1;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->access_flags = i2;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->name_index = i2;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->descriptor_index = i2;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->attributes_count = i2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->attributes_count;
	if (i1 <= 0)
		GOTO(60,L2);
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->attributes_count;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_attribute_info.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->attributes = a2;
	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a3)->attributes_count;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readAttributes_Diaa_lFUCO.f(a1,a2,i3,a4);
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fields;
	i2 = iv3;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv3 += 1;
L3:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->fields_count;
	if (i1 < i2)
		GOBACK(103,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M readMethods_D_8YBQ0: ca.mcgill.sable.soot.coffi.ClassFile.readMethods(Ljava/io/DataInputStream;)Z */

Class xt_readMethods_D_8YBQ0[] = { &cl_java_io_IOException.C, 0 };

Boolean readMethods_D_8YBQ0(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_method_info.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods = a2;
	i1 = 0;
	iv3 = i1;
	GOTO(13,L3);

L1:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_method_info.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__RUPx0(a2);
	av2 = a1;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->access_flags = i2;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->name_index = i2;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->descriptor_index = i2;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_io_DataInputStream*)a2)->class->M.
		readUnsignedShort__dThRz.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->attributes_count = i2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->attributes_count;
	if (i1 <= 0)
		GOTO(60,L2);
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->attributes_count;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_coffi_attribute_info.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->attributes = a2;
	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a3)->attributes_count;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		readAttributes_Diaa_lFUCO.f(a1,a2,i3,a4);
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv3;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv3 += 1;
L3:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(103,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M writeConstantPool_D_Y2o5F: ca.mcgill.sable.soot.coffi.ClassFile.writeConstantPool(Ljava/io/DataOutputStream;)Z */

Class xt_writeConstantPool_D_Y2o5F[] = { &cl_java_io_IOException.C, 0 };

Boolean writeConstantPool_D_Y2o5F(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3, iv4, iv5;
Long l0, l1, l2, l3, l4, l5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv4 = i1;
	i1 = 1;
	iv3 = i1;
	GOTO(5,L16);

L1:	i1 = iv4;
	if (i1 == 0)
		GOTO(10,L2);
	i1 = 0;
	iv4 = i1;
	GOTO(16,L15);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av2 = a1;
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a2)->tag;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeByte_i_mecg6.f(a1,i2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	switch (i1) {
		case 1: 	GOTO(38,L13);
		case 2: 	GOTO(38,L14);
		case 3: 	GOTO(38,L8);
		case 4: 	GOTO(38,L9);
		case 5: 	GOTO(38,L10);
		case 6: 	GOTO(38,L11);
		case 7: 	GOTO(38,L3);
		case 8: 	GOTO(38,L7);
		case 9: 	GOTO(38,L4);
		case 10: 	GOTO(38,L5);
		case 11: 	GOTO(38,L6);
		case 12: 	GOTO(38,L12);
		default:	GOTO(38,L14);
	}

L3:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(111,L15);

L4:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(136,L15);

L5:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(161,L15);

L6:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(186,L15);

L7:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_String_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_String_info*)a2)->string_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(200,L15);

L8:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Integer_info*)a2)->bytes;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	GOTO(215,L15);

L9:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Float_info*)a2)->bytes;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	GOTO(230,L15);

L10:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info*)a2)->high;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Long_info*)a2)->low;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	i1 = 1;
	iv4 = i1;
	GOTO(260,L15);

L11:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info*)a2)->high;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Double_info*)a2)->low;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	i1 = 1;
	iv4 = i1;
	GOTO(290,L15);

L12:	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(315,L15);

L13:	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->bytes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	iv5 = i1;
	a1 = av1;
	i2 = iv5;
	i3 = 2;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->bytes;
	i3 = 2;
	i4 = iv5;
	i5 = 2;
	i4 = i4 - i5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		write_abii_4kYgs.f(a1,a2,i3,i4);
	GOTO(352,L15);

L14:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[32];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a3)->tag;
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
	i1 = 0;
	return i1;

L15:	iv3 += 1;
L16:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool_count;
	if (i1 < i2)
		GOBACK(390,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M writeAttributes_Diaa_T8TGM: ca.mcgill.sable.soot.coffi.ClassFile.writeAttributes(Ljava/io/DataOutputStream;I[Lca/mcgill/sable/soot/coffi/attribute_info;)Z */

Class xt_writeAttributes_Diaa_T8TGM[] = { &cl_java_io_IOException.C, 0 };

Boolean writeAttributes_Diaa_T8TGM(Object p0, Object p1, Int p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av3, av4, av6, av8;
Int i0, i1, i2, i3, i4, i5;
Int iv2, iv5, iv7;
Long l0, l1, l2, l3, l4, l5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	av3 = p3;

L0:	a1 = 0;
	av4 = a1;
	i1 = 0;
	iv5 = i1;
	GOTO(6,L17);

L1:	a1 = av3;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av4 = a1;
	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_attribute_info*)a2)->attribute_name;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_attribute_info*)a2)->attribute_length;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_SourceFile_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(39,L2);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_SourceFile_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_SourceFile_attribute*)a2)->sourcefile_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(58,L16);

L2:	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(66,L3);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ConstantValue_attribute*)a2)->constantvalue_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	GOTO(85,L16);

L3:	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(93,L6);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->max_stack;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->max_locals;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->code_length;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->code;
	i3 = 0;
	a4 = av6;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	l5 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a4)->code_length;
	i4 = l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		write_abii_4kYgs.f(a1,a2,i3,i4);
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	i1 = 0;
	iv7 = i1;
	GOTO(159,L5);

L4:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av8 = a1;
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->start_pc;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->end_pc;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->handler_pc;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->catch_type;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	iv7 += 1;
L5:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(218,L4);
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->attributes_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->attributes_count;
	if (i1 <= 0)
		GOTO(235,L16);
	a1 = av0;
	a2 = av1;
	a3 = av6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->attributes_count;
	a4 = av6;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeAttributes_Diaa_T8TGM.f(a1,a2,i3,a4);
	GOTO(254,L16);

L6:	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Exception_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(262,L9);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Exception_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a2)->number_of_exceptions;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a1)->number_of_exceptions;
	if (i1 <= 0)
		GOTO(286,L16);
	i1 = 0;
	iv7 = i1;
	GOTO(292,L8);

L7:	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a2)->exception_index_table;
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	iv7 += 1;
L8:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Exception_attribute*)a2)->number_of_exceptions;
	if (i1 < i2)
		GOBACK(317,L7);
	GOTO(320,L16);

L9:	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(328,L12);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a2)->line_number_table_length;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	i1 = 0;
	iv7 = i1;
	GOTO(350,L11);

L10:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a1)->line_number_table;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av8 = a1;
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_line_number_table_entry*)a2)->start_pc;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_line_number_table_entry*)a2)->line_number;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	iv7 += 1;
L11:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LineNumberTable_attribute*)a2)->line_number_table_length;
	if (i1 < i2)
		GOBACK(391,L10);
	GOTO(394,L16);

L12:	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(402,L15);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a2)->local_variable_table_length;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	i1 = 0;
	iv7 = i1;
	GOTO(424,L14);

L13:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a1)->local_variable_table;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av8 = a1;
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->start_pc;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->length;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	iv7 += 1;
L14:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a2)->local_variable_table_length;
	if (i1 < i2)
		GOBACK(492,L13);
	GOTO(495,L16);

L15:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[40];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Generic_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	l2 = ((struct in_ca_mcgill_sable_soot_coffi_attribute_info*)a1)->attribute_length;
	l4 = 0;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 <= 0)
		GOTO(520,L16);
	a1 = av1;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Generic_attribute*)a2)->info;
	i3 = 0;
	a4 = av6;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	l5 = ((struct in_ca_mcgill_sable_soot_coffi_attribute_info*)a4)->attribute_length;
	i4 = l5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		write_abii_4kYgs.f(a1,a2,i3,i4);
L16:	iv5 += 1;
L17:	i1 = iv5;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(545,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M writeFields_D_5ZFPo: ca.mcgill.sable.soot.coffi.ClassFile.writeFields(Ljava/io/DataOutputStream;)Z */

Class xt_writeFields_D_5ZFPo[] = { &cl_java_io_IOException.C, 0 };

Boolean writeFields_D_5ZFPo(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv3 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fields;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av2 = a1;
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->access_flags;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->attributes_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->attributes_count;
	if (i1 <= 0)
		GOTO(48,L2);
	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a3)->attributes_count;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeAttributes_Diaa_T8TGM.f(a1,a2,i3,a4);
L2:	iv3 += 1;
L3:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->fields_count;
	if (i1 < i2)
		GOBACK(73,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M writeMethods_D_q7z3n: ca.mcgill.sable.soot.coffi.ClassFile.writeMethods(Ljava/io/DataOutputStream;)Z */

Class xt_writeMethods_D_q7z3n[] = { &cl_java_io_IOException.C, 0 };

Boolean writeMethods_D_q7z3n(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv3 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av2 = a1;
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->access_flags;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->descriptor_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->attributes_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->attributes_count;
	if (i1 <= 0)
		GOTO(48,L2);
	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a3)->attributes_count;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeAttributes_Diaa_T8TGM.f(a1,a2,i3,a4);
L2:	iv3 += 1;
L3:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(73,L1);
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M writeClass_D_6WwVC: ca.mcgill.sable.soot.coffi.ClassFile.writeClass(Ljava/io/DataOutputStream;)Z */

Class xt_writeClass_D_6WwVC[] = { 0 };

Boolean writeClass_D_6WwVC(Object p0, Object p1)
{
static struct handler htable[] = {
    &cl_java_io_IOException.C, 0, 165, 5,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Boolean rv;
Object a0, a1, a2, a3, a4;
volatile Object av0, av1, av2;
Int i0, i1, i2, i3, i4;
volatile Int iv2;
Long l0, l1, l2, l3, l4;
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
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->magic;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeInt_i_lAF0j.f(a1,i2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->minor_version;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->major_version;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeConstantPool_D_Y2o5F.f(a1,a2);
	if (i1 != 0)
		GOTO(38,L1);
	i1 = 0;
	rv = i1;
	goto RETURN;

L1:  case 1:
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->access_flags;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->this_class;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->super_class;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->interfaces_count;
	if (i1 <= 0)
		GOTO(79,L4);
	i1 = 0;
	iv2 = i1;
	GOTO(84,L3);

L2:  case 2:
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces;
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	iv2 += 1;
L3:  case 3:
	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces_count;
	if (i1 < i2)
		GOBACK(105,L2);
L4:  case 4:
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->fields_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeFields_D_5ZFPo.f(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeMethods_D_q7z3n.f(a1,a2);
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->attributes_count;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_DataOutputStream*)a1)->class->M.
		writeShort_i_4VJEb.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->attributes_count;
	if (i1 <= 0)
		GOTO(148,L6);
	a1 = av0;
	a2 = av1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->attributes_count;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->attributes;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		writeAttributes_Diaa_T8TGM.f(a1,a2,i3,a4);
	pc = 165;
	GOTO(165,L6);

L5:  case 5:
	pc = 168;
	av2 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->fn;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Throwable*)a3)->class->M.
		getMessage__AHr9V.f(a3);
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
	rv = i1;
	goto RETURN;

L6:  case 6:
	pc = 208;
	i1 = 1;
	rv = i1;
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return rv;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M parseMethod_m_jL04W: ca.mcgill.sable.soot.coffi.ClassFile.parseMethod(Lca/mcgill/sable/soot/coffi/method_info;)Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_parseMethod_m_jL04W[] = { 0 };

Object parseMethod_m_jL04W(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av3, av4, av5, av6, av7, av8;
Int i0, i1, i2, i3, i4;
Int iv2;
Long l0, l1, l2, l3, l4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = 0;
	av6 = a1;
	a1 = 0;
	av7 = a1;
	a1 = new(&cl_ca_mcgill_sable_soot_coffi_ByteCode.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__oFJVb(a2);
	av4 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av3 = a1;
	a1 = av3;
	if (a1 != 0)
		GOTO(21,L1);
	a1 = 0;
	return a1;

L1:	i1 = 0;
	iv2 = i1;
	GOTO(28,L6);

L2:	a1 = av4;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->code;
	i3 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->class->M.
		disassemble_bytecode_abi_PT1zT.f(a1,a2,i3);
	av5 = a1;
	a1 = av5;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->originalIndex = i2;
	a1 = av5;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Instruction_Unknown.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(54,L3);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[41];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->constant_pool;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a3)->class->M.
		toName_ac_jIKKE.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[42];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[43];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->code;
	i4 = 255;
	i3 = i3 & i4;
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
L3:	a1 = av5;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		nextOffset_i_BhJRD.f(a1,i2);
	iv2 = i1;
	a1 = av6;
	if (a1 != 0)
		GOTO(134,L4);
	a1 = av5;
	av6 = a1;
	GOTO(141,L5);

L4:	a1 = av7;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
L5:	a1 = av5;
	av7 = a1;
L6:	i1 = iv2;
	l2 = i1;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->code_length;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 < 0)
		GOBACK(162,L2);
	a1 = av4;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a1)->class->M.
		build_I_RPB63.f(a1,a2);
	i1 = 0;
	iv2 = i1;
	GOTO(174,L11);

L7:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av8 = a1;
	a1 = av8;
	a2 = av4;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a3)->start_pc;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a2)->class->M.
		locateInst_i_e7Dnc.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_inst = a2;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_pc;
	l2 = i1;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	l4 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a3)->code_length;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 != 0)
		GOTO(211,L8);
	a1 = av8;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst = a2;
	GOTO(220,L9);

L8:	a1 = av8;
	a2 = av4;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a3)->end_pc;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a2)->class->M.
		locateInst_i_e7Dnc.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst = a2;
L9:	a1 = av8;
	a2 = av4;
	a3 = av8;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a3)->handler_pc;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ByteCode*)a2)->class->M.
		locateInst_i_e7Dnc.f(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst = a2;
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst;
	if (a1 == 0)
		GOTO(258,L10);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_inst;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->labelled = i2;
L10:	iv2 += 1;
L11:	i1 = iv2;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(278,L7);
	a1 = av6;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M parse__kr8eg: ca.mcgill.sable.soot.coffi.ClassFile.parse()V */

Class xt_parse__kr8eg[] = { 0 };

Void parse__kr8eg(Object p0)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv2 = i1;
	GOTO(2,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av1 = a1;
	a1 = av1;
	a2 = av0;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->class->M.
		parseMethod_m_jL04W.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructions = a2;
	iv2 += 1;
L2:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(29,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M relabel_I_g6oN7: ca.mcgill.sable.soot.coffi.ClassFile.relabel(Lca/mcgill/sable/soot/coffi/Instruction;)I */

Class xt_relabel_I_g6oN7[] = { 0 };

Int relabel_I_g6oN7(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv2 = i1;
	GOTO(2,L2);

L1:	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label = i2;
	a1 = av1;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		nextOffset_i_BhJRD.f(a1,i2);
	iv2 = i1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av1 = a1;
L2:	a1 = av1;
	if (a1 != 0)
		GOBACK(22,L1);
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M unparseMethod_m_CYVy1: ca.mcgill.sable.soot.coffi.ClassFile.unparseMethod(Lca/mcgill/sable/soot/coffi/method_info;)[B */

Class xt_unparseMethod_m_CYVy1[] = { 0 };

Object unparseMethod_m_CYVy1(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av3, av4;
Int i0, i1, i2, i3;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->cfg;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CFG*)a1)->class->M.
		reconstructInstructions__7XqXF.f(a1);
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->instructions;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		relabel_I_g6oN7.f(a1,a2);
	iv2 = i1;
	i1 = iv2;
	a1 = anewarray(&cl_byte,i1);
	av3 = a1;
	a1 = av3;
	if (a1 != 0)
		GOTO(22,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[44];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = 0;
	return a1;

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructions;
	av4 = a1;
	i1 = 0;
	iv2 = i1;
	GOTO(43,L3);

L2:	a1 = av4;
	a2 = av3;
	i3 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->class->M.
		compile_abi_zqEDQ.f(a1,a2,i3);
	iv2 = i1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next;
	av4 = a1;
L3:	a1 = av4;
	if (a1 != 0)
		GOBACK(63,L2);
	i1 = iv2;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(69,L4);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[45];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L4:	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M unparse__xIxlu: ca.mcgill.sable.soot.coffi.ClassFile.unparse()V */

Class xt_unparse__xIxlu[] = { 0 };

Void unparse__xIxlu(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av3, av4, av5, av6;
Int i0, i1, i2, i3, i4;
Int iv1, iv2;
Long l0, l1, l2, l3, l4;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	GOTO(2,L8);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	av3 = a1;
	a1 = av3;
	if (a1 == 0)
		GOTO(20,L7);
	a1 = av0;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		unparseMethod_m_CYVy1.f(a1,a2);
	av4 = a1;
	a1 = av4;
	if (a1 != 0)
		GOTO(33,L2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[46];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av5;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->constant_pool;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a3)->class->M.
		toName_ac_jIKKE.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[47];
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
	GOTO(71,L7);

L2:	a1 = av3;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	l3 = i2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->code_length = l3;
	a1 = av3;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->code = a2;
	i1 = 0;
	iv2 = i1;
	GOTO(90,L6);

L3:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->exception_table;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av6 = a1;
	a1 = av6;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->start_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->start_pc = i2;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_inst;
	if (a1 == 0)
		GOTO(119,L4);
	a1 = av6;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->end_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_pc = i2;
	GOTO(135,L5);

L4:	a1 = av6;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	l3 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->code_length;
	i2 = l3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->end_pc = i2;
L5:	a1 = av6;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a2)->handler_inst;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_exception_table_entry*)a1)->handler_pc = i2;
	iv2 += 1;
L6:	i1 = iv2;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->exception_table_length;
	if (i1 < i2)
		GOBACK(169,L3);
L7:	iv1 += 1;
L8:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(180,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M parseMethodDesc_return_S_LCBlG: ca.mcgill.sable.soot.coffi.ClassFile.parseMethodDesc_return(Ljava/lang/String;)Ljava/lang/String; */

Class xt_parseMethodDesc_return_S_LCBlG[] = { 0 };

Object parseMethodDesc_return_S_LCBlG(Object p1)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	i2 = 41;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		lastIndexOf_i_b5Jsb.f(a1,i2);
	iv1 = i1;
	i1 = iv1;
	if (i1 < 0)
		GOTO(8,L1);
	a1 = av0;
	i2 = iv1;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_i_SZvgs.f(a1,i2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[48];
	a1 = parseDesc_SS_ra14s(a1,a2);
	return a1;

L1:	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[48];
	a1 = parseDesc_SS_ra14s(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M parseMethodDesc_params_S_htzZ7: ca.mcgill.sable.soot.coffi.ClassFile.parseMethodDesc_params(Ljava/lang/String;)Ljava/lang/String; */

Class xt_parseMethodDesc_params_S_htzZ7[] = { 0 };

Object parseMethodDesc_params_S_htzZ7(Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0;
Int i0, i1, i2, i3, i4;
Int iv1, iv2;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	i2 = 40;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		indexOf_i_RQbCe.f(a1,i2);
	iv1 = i1;
	i1 = iv1;
	if (i1 < 0)
		GOTO(8,L1);
	a1 = av0;
	i2 = 41;
	i3 = iv1;
	i4 = 1;
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		indexOf_ii_GM7aw.f(a1,i2,i3);
	iv2 = i1;
	i1 = iv2;
	if (i1 < 0)
		GOTO(22,L1);
	a1 = av0;
	i2 = iv1;
	i3 = 1;
	i2 = i2 + i3;
	i3 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[48];
	a1 = parseDesc_SS_ra14s(a1,a2);
	return a1;

L1:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[49];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M parseDesc_SS_ra14s: ca.mcgill.sable.soot.coffi.ClassFile.parseDesc(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; */

Class xt_parseDesc_SS_ra14s[] = { 0 };

Object parseDesc_SS_ra14s(Object p1, Object p2)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv4, iv5, iv6, iv7, iv8, iv9;
PROLOGUE;

	av0 = p1;
	av1 = p2;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[6];
	av2 = a1;
	i1 = 0;
	iv7 = i1;
	i1 = 0;
	iv8 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		length__rpuzQ.f(a1);
	iv6 = i1;
	i1 = 0;
	iv5 = i1;
	GOTO(18,L20);

L1:	a1 = av0;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		charAt_i_nDguX.f(a1,i2);
	iv4 = i1;
	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[50];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(37,L2);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[51];
	av3 = a1;
	GOTO(43,L15);

L2:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[52];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(54,L3);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[53];
	av3 = a1;
	GOTO(60,L15);

L3:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[54];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(71,L4);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[55];
	av3 = a1;
	GOTO(77,L15);

L4:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[56];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(88,L5);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[57];
	av3 = a1;
	GOTO(94,L15);

L5:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[58];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(105,L6);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[59];
	av3 = a1;
	GOTO(111,L15);

L6:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[60];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(122,L7);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[61];
	av3 = a1;
	GOTO(128,L15);

L7:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[62];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(139,L8);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[63];
	av3 = a1;
	GOTO(145,L15);

L8:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[64];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(156,L9);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[65];
	av3 = a1;
	GOTO(162,L15);

L9:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[66];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(173,L10);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[67];
	av3 = a1;
	GOTO(179,L15);

L10:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[68];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(190,L11);
	iv7 += 1;
	GOTO(196,L19);

L11:	i1 = iv4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[69];
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_String*)a2)->class->M.
		charAt_i_nDguX.f(a2,i3);
	if (i1 != i2)
		GOTO(207,L14);
	a1 = av0;
	i2 = 59;
	i3 = iv5;
	i4 = 1;
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		indexOf_ii_GM7aw.f(a1,i2,i3);
	iv9 = i1;
	i1 = iv9;
	if (i1 >= 0)
		GOTO(224,L12);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[70];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	i4 = iv5;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_String*)a3)->class->M.
		substring_i_SZvgs.f(a3,i4);
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
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[71];
	av3 = a1;
	GOTO(259,L15);

L12:	i1 = iv9;
	i2 = iv5;
	i1 = i1 - i2;
	i2 = 10;
	if (i1 <= i2)
		GOTO(269,L13);
	a1 = av0;
	i2 = iv5;
	i3 = 1;
	i2 = i2 + i3;
	i3 = iv5;
	i4 = 11;
	i3 = i3 + i4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[72];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(290,L13);
	i1 = iv5;
	i2 = 10;
	i1 = i1 + i2;
	iv5 = i1;
L13:	a1 = av0;
	i2 = iv5;
	i3 = 1;
	i2 = i2 + i3;
	i3 = iv9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av3 = a1;
	a1 = av3;
	i2 = 47;
	i3 = 46;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		replace_cc_AsLcG.f(a1,i2,i3);
	av3 = a1;
	i1 = iv9;
	iv5 = i1;
	GOTO(324,L15);

L14:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[73];
	av3 = a1;
L15:	i1 = iv8;
	if (i1 == 0)
		GOTO(332,L16);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av2 = a1;
L16:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av3;
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
	av2 = a1;
	GOTO(373,L18);

L17:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[74];
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
	av2 = a1;
	iv7 += -1;
L18:	i1 = iv7;
	if (i1 > 0)
		GOBACK(401,L17);
	i1 = 1;
	iv8 = i1;
L19:	iv5 += 1;
L20:	i1 = iv5;
	i2 = iv6;
	if (i1 < i2)
		GOBACK(414,L1);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M findMethod_S_mpApv: ca.mcgill.sable.soot.coffi.ClassFile.findMethod(Ljava/lang/String;)Lca/mcgill/sable/soot/coffi/method_info; */

Class xt_findMethod_S_mpApv[] = { 0 };

Object findMethod_S_mpApv(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	i1 = 0;
	iv3 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av2 = a1;
	a1 = av1;
	a2 = av2;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->constant_pool;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->class->M.
		toName_ac_jIKKE.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(24,L2);
	a1 = av2;
	return a1;

L2:	iv3 += 1;
L3:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(37,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listMethods__pBgUS: ca.mcgill.sable.soot.coffi.ClassFile.listMethods()V */

Class xt_listMethods__pBgUS[] = { 0 };

Void listMethods__pBgUS(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	GOTO(2,L2);

L1:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods;
	i3 = iv1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->constant_pool;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->class->M.
		prototype_ac_HpBd8.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	iv1 += 1;
L2:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(32,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listConstantPool__XumYZ: ca.mcgill.sable.soot.coffi.ClassFile.listConstantPool()V */

Class xt_listConstantPool__XumYZ[] = { 0 };

Void listConstantPool__XumYZ(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	i1 = 1;
	iv2 = i1;
	GOTO(2,L4);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av1 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[68];
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
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[75];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a3)->class->M.
		typeName__4UJn9.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[76];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av1;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->constant_pool;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a3)->class->M.
		toString_ac_vRhnB.f(a3,a4);
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
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	i2 = 5;
	if (i1 == i2)
		GOTO(72,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	i2 = 6;
	if (i1 != i2)
		GOTO(86,L3);
L2:	iv2 += 1;
L3:	iv2 += 1;
L4:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool_count;
	if (i1 < i2)
		GOBACK(100,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M listFields__mIWom: ca.mcgill.sable.soot.coffi.ClassFile.listFields()V */

Class xt_listFields__mIWom[] = { 0 };

Void listFields__mIWom(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4;
Int iv4, iv5;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv4 = i1;
	GOTO(3,L6);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fields;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av1 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = av1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->constant_pool;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->class->M.
		prototype_ac_OB6r3.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	i1 = 0;
	iv5 = i1;
	GOTO(31,L4);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->attributes;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_attribute_info*)a2)->attribute_name;
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
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[35];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(62,L3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->attributes;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[77];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->constant_pool;
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_ConstantValue_attribute*)a4)->constantvalue_index;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a4)->constant_pool;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a3)->class->M.
		toString_ac_vRhnB.f(a3,a4);
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
	GOTO(113,L5);

L3:	iv5 += 1;
L4:	i1 = iv5;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->attributes_count;
	if (i1 < i2)
		GOBACK(125,L2);
L5:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[78];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	iv4 += 1;
L6:	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->fields_count;
	if (i1 < i2)
		GOBACK(145,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M moveMethod_Si_wAPAC: ca.mcgill.sable.soot.coffi.ClassFile.moveMethod(Ljava/lang/String;I)V */

Class xt_moveMethod_Si_wAPAC[] = { 0 };

Void moveMethod_Si_wAPAC(Object p0, Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av5;
Int i0, i1, i2, i3, i4, i5;
Int iv2, iv3, iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[79];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[80];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	i3 = iv2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[81];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->methods_count;
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
	i1 = 0;
	iv3 = i1;
	GOTO(45,L11);

L1:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->constant_pool;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->class->M.
		toName_ac_jIKKE.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(65,L10);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av5 = a1;
	i1 = iv3;
	i2 = iv2;
	if (i1 <= i2)
		GOTO(78,L5);
	i1 = iv3;
	iv4 = i1;
	GOTO(84,L3);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv4;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->methods;
	i4 = iv4;
	i5 = 1;
	i4 = i4 - i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv4 += -1;
L3:	i1 = iv4;
	i2 = iv2;
	if (i1 <= i2)
		GOTO(109,L4);
	i1 = iv4;
	if (i1 > 0)
		GOBACK(114,L2);
L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv2;
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	return;

L5:	i1 = iv3;
	i2 = iv2;
	if (i1 >= i2)
		GOTO(128,L9);
	i1 = iv3;
	iv4 = i1;
	GOTO(134,L7);

L6:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv4;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a3)->methods;
	i4 = iv4;
	i5 = 1;
	i4 = i4 + i5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv4 += 1;
L7:	i1 = iv4;
	i2 = iv2;
	if (i1 >= i2)
		GOTO(159,L8);
	i1 = iv4;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 < i2)
		GOBACK(170,L6);
L8:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->methods;
	i2 = iv2;
	a3 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L9:	return;

L10:	iv3 += 1;
L11:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->methods_count;
	if (i1 < i2)
		GOBACK(190,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M descendsFrom_C_nuKC0: ca.mcgill.sable.soot.coffi.ClassFile.descendsFrom(Lca/mcgill/sable/soot/coffi/ClassFile;)Z */

Class xt_descendsFrom_C_nuKC0[] = { 0 };

Boolean descendsFrom_C_nuKC0(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->class->M.
		toString__h9n5N.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->class->M.
		descendsFrom_S_2FGPV.f(a1,a2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M descendsFrom_S_2FGPV: ca.mcgill.sable.soot.coffi.ClassFile.descendsFrom(Ljava/lang/String;)Z */

Class xt_descendsFrom_S_2FGPV[] = { 0 };

Boolean descendsFrom_S_2FGPV(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av0;
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
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(22,L1);
	i1 = 1;
	return i1;

L1:	i1 = 0;
	iv3 = i1;
	GOTO(29,L4);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->constant_pool;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces;
	i3 = iv3;
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
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(56,L3);
	i1 = 1;
	return i1;

L3:	iv3 += 1;
L4:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->interfaces_count;
	if (i1 < i2)
		GOBACK(69,L2);
	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isSterile__zCWS8: ca.mcgill.sable.soot.coffi.ClassFile.isSterile()Z */

Class xt_isSterile__zCWS8[] = { 0 };

Boolean isSterile__zCWS8(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->access_flags;
	i2 = 1;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(6,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->access_flags;
	i2 = 16;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(16,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M sameClass_S_fw1N8: ca.mcgill.sable.soot.coffi.ClassFile.sameClass(Ljava/lang/String;)Z */

Class xt_sameClass_S_fw1N8[] = { 0 };

Boolean sameClass_S_fw1N8(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	av2 = a1;
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_ClassFile[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		lastIndexOf_S_aFM7t.f(a1,a2);
	iv3 = i1;
	i1 = iv3;
	if (i1 <= 0)
		GOTO(10,L1);
	a1 = av2;
	i2 = 0;
	i3 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		substring_ii_dKGgx.f(a1,i2,i3);
	av2 = a1;
L1:	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->class->M.
		toString__h9n5N.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 != 0)
		GOTO(28,L2);
	i1 = 1;
	return i1;

L2:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M fieldName_i_9nzr1: ca.mcgill.sable.soot.coffi.ClassFile.fieldName(I)Ljava/lang/String; */

Class xt_fieldName_i_9nzr1[] = { 0 };

Object fieldName_i_9nzr1(Object p0, Int p1)
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
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a1)->fields;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_ClassFile*)a2)->constant_pool;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->class->M.
		toName_ac_OGsWB.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_ClassFile[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','l','a','s','s','F','i','l','e',
'C','o','u','l','d',' ','n','o','t',' ','l','o','c','a','t','e',' ','c',
'l','a','s','s',' ','I','O','E','x','c','e','p','t','i','o','n',' ','w',
'i','t','h',' ',':',' ','.','c','l','a','s','s','C','a','n',39,'t',' ',
'f','i','n','d',' ','p','u','b','l','i','c','p','r','i','v','a','t','e',
'p','r','o','t','e','c','t','e','d','s','t','a','t','i','c','f','i','n',
'a','l','s','u','p','e','r','v','o','l','a','t','i','l','e','t','r','a',
'n','s','i','e','n','t','i','n','t','e','r','f','a','c','e','a','b','s',
't','r','a','c','t','u','n','k','n','o','w','n','W','r','o','n','g',' ',
'm','a','g','i','c',' ','n','u','m','b','e','r',' ','i','n',' ','C','o',
'n','s','t','a','n','t',' ','p','o','o','l','[',']',':',' ','C','l','a',
's','s',']',':',' ','F','i','e','l','d','r','e','f',']',':',' ','M','e',
't','h','o','d','r','e','f',']',':',' ','I','n','t','e','r','f','a','c',
'e','M','e','t','h','o','d','r','e','f',']',':',' ','S','t','r','i','n',
'g',']',':',' ','I','n','t','e','g','e','r',' ','=',' ',']',':',' ','F',
'l','o','a','t',' ','=',' ',']',':',' ','L','o','n','g',' ','=',' ',']',
':',' ','D','o','u','b','l','e',' ','=',' ',']',':',' ','N','a','m','e',
' ','a','n','d',' ','T','y','p','e',']',':',' ','U','t','f','8',' ','=',
' ','"','"','U','n','k','n','o','w','n',' ','t','a','g',' ','i','n',' ',
'c','o','n','s','t','a','n','t',' ','p','o','o','l',':',' ',' ','a','t',
' ','e','n','t','r','y',' ','S','o','u','r','c','e','F','i','l','e','C',
'o','n','s','t','a','n','t','V','a','l','u','e','C','o','d','e','E','x',
'c','e','p','t','i','o','n','s','L','i','n','e','N','u','m','b','e','r',
'T','a','b','l','e','L','o','c','a','l','V','a','r','i','a','b','l','e',
'T','a','b','l','e','G','e','n','e','r','i','c','/','U','n','k','n','o',
'w','n',' ','A','t','t','r','i','b','u','t','e',' ','i','n',' ','o','u',
't','p','u','t','U','n','k','n','o','w','n',' ','i','n','s','t','r','u',
'c','t','i','o','n',' ','i','n',' ','"','"',' ','a','t',' ','o','f','f',
's','e','t',' ',' ','b','y','t','e','c','o','d','e',' ','=',' ','W','a',
'r','n','i','n','g',':',' ','c','a','n',39,'t',' ','a','l','l','o','c',
'a','t','e',' ','m','e','m','o','r','y',' ','f','o','r',' ','r','e','c',
'o','m','p','i','l','e','W','a','r','n','i','n','g',':',' ','c','o','d',
'e',' ','s','i','z','e',' ','d','o','e','s','n',39,'t',' ','m','a','t',
'c','h',' ','a','r','r','a','y',' ','l','e','n','g','t','h','!','R','e',
'c','o','m','p','i','l','e',' ','o','f',' ',' ','f','a','i','l','e','d',
'!',',','<','p','a','r','s','e',' ','e','r','r','o','r','>','B','b','y',
't','e','C','c','h','a','r','D','d','o','u','b','l','e','F','f','l','o',
'a','t','I','i','n','t','J','l','o','n','g','S','s','h','o','r','t','Z',
'b','o','o','l','e','a','n','V','v','o','i','d','[','L','W','a','r','n',
'i','n','g',':',' ','P','a','r','s','e',' ','e','r','r','o','r',' ','-',
'-',' ','c','a','n',39,'t',' ','f','i','n','d',' ','a',' ',';',' ','i',
'n',' ','<','e','r','r','o','r','>','j','a','v','a','/','l','a','n','g',
'/','?','?','?','[',']',']',' ','=',' ','=',' ',';','M','o','v','i','n',
'g',' ',' ','t','o',' ','p','o','s','i','t','i','o','n',' ',' ','o','f',
' '};

const void *st_ca_mcgill_sable_soot_coffi_ClassFile[] = {
    ch_ca_mcgill_sable_soot_coffi_ClassFile+36,	/* 0. ca.mcgill.sable.soot.coffi.ClassFile */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+59,	/* 1. Could not locate class  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+76,	/* 2. IOException with  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+78,	/* 3. :  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+84,	/* 4. .class */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+95,	/* 5. Can't find  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+95,	/* 6.  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+101,	/* 7. public */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+108,	/* 8. private */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+117,	/* 9. protected */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+123,	/* 10. static */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+128,	/* 11. final */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+133,	/* 12. super */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+141,	/* 13. volatile */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+150,	/* 14. transient */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+159,	/* 15. interface */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+167,	/* 16. abstract */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+174,	/* 17. unknown */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+196,	/* 18. Wrong magic number in  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+210,	/* 19. Constant pool[ */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+218,	/* 20. ]: Class */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+229,	/* 21. ]: Fieldref */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+241,	/* 22. ]: Methodref */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+262,	/* 23. ]: InterfaceMethodref */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+271,	/* 24. ]: String */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+284,	/* 25. ]: Integer =  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+295,	/* 26. ]: Float =  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+305,	/* 27. ]: Long =  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+317,	/* 28. ]: Double =  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+333,	/* 29. ]: Name and Type */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+344,	/* 30. ]: Utf8 = " */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+345,	/* 31. " */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+375,	/* 32. Unknown tag in constant pool:  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+385,	/* 33.  at entry  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+395,	/* 34. SourceFile */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+408,	/* 35. ConstantValue */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+412,	/* 36. Code */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+422,	/* 37. Exceptions */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+437,	/* 38. LineNumberTable */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+455,	/* 39. LocalVariableTable */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+490,	/* 40. Generic%Unknown Attribute in output */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+514,	/* 41. Unknown instruction in " */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+526,	/* 42. " at offset  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+538,	/* 43.  bytecode =  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+582,	/* 44. Warning: can't allocate memory for recom */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+628,	/* 45. Warning: code size doesn't match array l */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+641,	/* 46. Recompile of  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+649,	/* 47.  failed! */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+650,	/* 48. , */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+663,	/* 49. <parse error> */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+664,	/* 50. B */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+668,	/* 51. byte */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+669,	/* 52. C */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+673,	/* 53. char */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+674,	/* 54. D */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+680,	/* 55. double */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+681,	/* 56. F */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+686,	/* 57. float */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+687,	/* 58. I */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+690,	/* 59. int */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+691,	/* 60. J */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+695,	/* 61. long */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+696,	/* 62. S */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+701,	/* 63. short */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+702,	/* 64. Z */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+709,	/* 65. boolean */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+710,	/* 66. V */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+714,	/* 67. void */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+715,	/* 68. [ */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+716,	/* 69. L */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+758,	/* 70. Warning: Parse error -- can't find a ; i */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+765,	/* 71. <error> */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+775,	/* 72. java%lang% */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+778,	/* 73. %%% */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+780,	/* 74. [] */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+782,	/* 75. ]  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+783,	/* 76. = */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+786,	/* 77.  =  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+787,	/* 78. ; */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+794,	/* 79. Moving  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+807,	/* 80.  to position  */
    ch_ca_mcgill_sable_soot_coffi_ClassFile+811,	/* 81.  of  */
    0};
